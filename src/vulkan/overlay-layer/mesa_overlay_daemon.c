/*
 * mesa_overlay_daemon.c
 * Daemon to read /proc/stat and serve it via a Unix domain socket.
 * Useful on Android where /proc/stat is locked down.
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <stdint.h>
#include <inttypes.h>

static uint64_t get_cpu_times(uint64_t *idle_time) {
   FILE *f = fopen("/proc/stat", "r");
   if (!f) return 0;
   
   char buffer[256];
   if (!fgets(buffer, sizeof(buffer), f)) {
      fclose(f);
      return 0;
   }
   fclose(f);
   
   uint64_t user = 0, nice = 0, system = 0, idle = 0, iowait = 0, irq = 0, softirq = 0, steal = 0;
   if (sscanf(buffer, "cpu %" PRIu64 " %" PRIu64 " %" PRIu64 " %" PRIu64 " %" PRIu64 " %" PRIu64 " %" PRIu64 " %" PRIu64,
              &user, &nice, &system, &idle, &iowait, &irq, &softirq, &steal) < 8) {
      return 0;
   }
   
   *idle_time = idle + iowait;
   return user + nice + system + idle + iowait + irq + softirq + steal;
}

int main(void) {
    int server_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (server_fd < 0) {
        perror("socket");
        return 1;
    }

    struct sockaddr_un addr;
    memset(&addr, 0, sizeof(addr));
    addr.sun_family = AF_UNIX;
    strncpy(&addr.sun_path[1], "mesa_overlay_stat", sizeof(addr.sun_path) - 2);

    if (bind(server_fd, (struct sockaddr*)&addr, sizeof(sa_family_t) + strlen("mesa_overlay_stat") + 1) < 0) {
        perror("bind");
        return 1;
    }
    
    if (listen(server_fd, 5) < 0) {
        perror("listen");
        return 1;
    }
    
    printf("mesa_overlay_daemon listening on abstract socket '@mesa_overlay_stat'\n");

    while (1) {
        int client_fd = accept(server_fd, NULL, NULL);
        if (client_fd >= 0) {
            uint64_t idle = 0;
            uint64_t total = get_cpu_times(&idle);
            char buf[64];
            snprintf(buf, sizeof(buf), "%" PRIu64 " %" PRIu64 "\n", total, idle);
            write(client_fd, buf, strlen(buf));
            close(client_fd);
        }
    }
    return 0;
}

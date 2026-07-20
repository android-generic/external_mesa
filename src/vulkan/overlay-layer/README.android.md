# Mesa Vulkan Overlay Layer on Android

This folder contains the Mesa Vulkan Overlay Layer. When built for Android, it includes additional tools to bypass Android's strict SELinux rules and `/proc/stat` restrictions.

## Layer Activation
On Android 8.0 and later, standard debug layer activation via `settings put global enable_gpu_debug_layers 1` will **not** work for release applications (like standard games from the Play Store) because Android's Java framework explicitly blocks layer injection for non-debuggable apps.

To bypass this and enable the overlay globally for all Vulkan applications on a rooted or userdebug device, use the native Vulkan loader properties:

```bash
setprop debug.vulkan.layers VK_LAYER_MESA_overlay
```

## CPU Load Daemon
Modern Android versions restrict access to `/proc/stat` via SELinux, which prevents the overlay layer from directly calculating the CPU load.

To solve this, the overlay provides a standalone daemon (`mesa_overlay_daemon`) that reads `/proc/stat` and serves the data over a local abstract Unix domain socket (`@mesa_overlay_stat`). The layer communicates with this daemon to get CPU statistics.

### Running the Daemon via init.rc
To run the daemon securely as a system service, add the following snippet to your device's `init.rc` (e.g., `device/<manufacturer>/<board>/init.rc` or `init.bliss.rc`):

```rc
service mesa_overlay_daemon /vendor/bin/mesa_overlay_daemon
    class main
    user system
    group system
    seclabel u:r:su:s0
```

*(Note: Depending on your SELinux policy, you may need to define a specific SELinux domain for the daemon instead of using `su`, or grant it explicit permission to read `proc_stat` and `proc_type`.)*

### Testing the Daemon manually
If you want to run the daemon manually from a root shell to test:
```bash
su
/vendor/bin/mesa_overlay_daemon &
```

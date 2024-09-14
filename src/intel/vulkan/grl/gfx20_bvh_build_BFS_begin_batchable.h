#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_begin_batchable_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_begin_batchable_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_begin_batchable_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g75<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g9<1>Q          0x0000000000000020Q             { align1 1H };
mov(16)         g30<1>Q         0x0000000000000020Q             { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g75UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g46<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g46.8<1>UW      g46<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
add(16)         g46.16<1>UW     g46<16,16,1>UW  0x0010UW        { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(32)         g44<1>UD        g46<16,16,1>UW                  { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g32<1>Q         g9<1,1,0>Q      g1.4<0,1,0>Q    { align1 1H I@6 compacted };
add(16)         g34<1>Q         g30<1,1,0>Q     g1.4<0,1,0>Q    { align1 2H I@6 compacted };
and(32)         g29<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(32)        g36UD           g32UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $1 };
shl(32)         g42<1>D         g29<8,8,1>D     0x00000005UD    { align1 I@1 };
add(32)         g47<1>D         g44<1,1,0>D     g42<1,1,0>D     { align1 I@1 compacted };
mov(32)         g49<1>UD        g47<32,8,4>UB                   { align1 I@1 };
mov(32)         g51<1>UW        g47<32,8,4>UB                   { align1 };
mov(32)         g52<1>UD        g49<16,8,2>UW                   { align1 I@2 };
mov(32)         g110<2>UW       g36<8,8,1>UD                    { align1 $1.dst };
mov(32)         g40<1>UW        g110<16,8,2>UW                  { align1 I@1 };
sel.l(32)       g41<1>UW        g40<16,16,1>UW  0x0100UW        { align1 I@1 };
mov(32)         g10<1>UD        g41<16,16,1>UW                  { align1 I@1 };
cmp.l.f0.0(32)  null<1>D        g52<8,8,1>D     g10<8,8,1>D     { align1 I@1 };
(+f0.0) if(32)  JIP:  LABEL1          UIP:  LABEL0              { align1 };
add(32)         g54<1>D         g49<1,1,0>D     g38<1,1,0>D     { align1 $1.dst compacted };
mov(16)         g21<1>Q         0x0000000000000034Q             { align1 1H };
mov(16)         g62<1>Q         0x0000000000000034Q             { align1 2H };
mov(16)         g25<1>Q         0x0000000000002c2cQ             { align1 1H };
mov(16)         g71<1>Q         0x0000000000002c2cQ             { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mul(32)         g75<1>D         g52<1,1,0>D     1484W           { align1 compacted };
mov(16)         g2<1>UD         0x00000000UD                    { align1 1H compacted };
mov(16)         g6<1>UD         0x00000000UD                    { align1 1H compacted };
mov(16)         g8<1>UD         0x00000000UD                    { align1 1H compacted };
mov(16)         g3<1>UD         0x00000000UD                    { align1 2H compacted };
mov(16)         g7<1>UD         0x00000000UD                    { align1 2H compacted };
mov(16)         g9<1>UD         0x00000000UD                    { align1 2H compacted };
mov(32)         g19<2>UW        g54<8,8,1>UD                    { align1 };
add(16)         g23<1>Q         g1.5<0,1,0>Q    g21<1,1,0>Q     { align1 1H compacted };
add(16)         g64<1>Q         g1.5<0,1,0>Q    g62<1,1,0>Q     { align1 2H compacted };
add(16)         g27<1>Q         g1.4<0,1,0>Q    g25<1,1,0>Q     { align1 1H compacted };
add(16)         g73<1>Q         g1.4<0,1,0>Q    g71<1,1,0>Q     { align1 2H compacted };
mov(16)         g115<2>UD       g75<1,1,0>UD                    { align1 1H compacted };
mov(16)         g117<2>UD       g76<1,1,0>UD                    { align1 2H compacted };
mov(16)         g111<4>UW       g19<16,8,2>UW                   { align1 1H I@7 };
mov(16)         g113<4>UW       g20<16,8,2>UW                   { align1 2H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g31<1>UQ        g115<8,4,2>UD                   { align1 1H I@4 };
mov(16)         g76<1>UQ        g117<8,4,2>UD                   { align1 2H I@4 };
mov(16)         g12<1>UQ        g111<16,4,4>UW                  { align1 1H I@4 };
mov(16)         g56<1>UQ        g113<16,4,4>UW                  { align1 2H I@4 };
add(16)         g78<1>Q         g27<1,1,0>Q     g31<1,1,0>Q     { align1 1H I@4 compacted };
add(16)         g80<1>Q         g73<1,1,0>Q     g76<1,1,0>Q     { align1 2H I@4 compacted };
mul(16)         acc0<1>UD       g12<8,4,2>UD    0x0058UW        { align1 1H I@4 };
mul(16)         g15<1>D         g12<8,4,2>D     88W             { align1 1H };
mul(16)         g59<1>D         g56<8,4,2>D     88W             { align1 2H I@5 };
mach(16)        g14<1>UD        g12<8,4,2>UD    0x00000058UD    { align1 1H };
mov(16)         g16<2>UD        g15<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g60<2>UD        g59<1,1,0>UD                    { align1 2H I@3 compacted };
mul(16)         acc0<1>UD       g56<8,4,2>UD    0x0058UW        { align1 2H };
mov(16)         g16.1<2>UD      g14<1,1,0>UD                    { align1 1H I@3 compacted };
mach(16)        g58<1>UD        g56<8,4,2>UD    0x00000058UD    { align1 2H };
add(16)         g66<1>Q         g23<1,1,0>Q     g16<1,1,0>Q     { align1 1H I@2 compacted };
mov(16)         g60.1<2>UD      g58<1,1,0>UD                    { align1 2H I@2 compacted };
add(16)         g68<1>Q         g64<1,1,0>Q     g60<1,1,0>Q     { align1 2H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g70UD           g66UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $2 };
mov(16)         g5<1>UD         g71<1,1,0>UD                    { align1 2H $2.dst compacted };
mov(16)         g4<1>UD         g70<1,1,0>UD                    { align1 1H $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g78UD           g2UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $2 };
mov(32)         g96<1>UD        g54<16,8,2>UW                   { align1 };
mov(16)         g32<1>Q         0x000000000000001cQ             { align1 1H $1.src };
mov(16)         g82<1>Q         0x000000000000001cQ             { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g84<1>Q         g78<1,1,0>Q     g32<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
add(16)         g86<1>Q         g80<1,1,0>Q     g82<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g84UD           g96UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $3 };
mov(16)         g33<1>Q         0x0000000000000028Q             { align1 1H $1.src };
mov(16)         g85<1>Q         0x0000000000000028Q             { align1 2H $3.src };
shl(32)         g87<1>D         g52<8,8,1>D     0x00000002UD    { align1 $3.src };
mov(32)         g97<1>UD        0x00000000UD                    { align1 $3.src compacted };
mov(16)         g118<2>UD       g87<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g120<2>UD       g88<1,1,0>UD                    { align1 2H I@3 compacted };
mov(16)         g40<1>UQ        g118<8,4,2>UD                   { align1 1H I@2 };
mov(16)         g88<1>UQ        g120<8,4,2>UD                   { align1 2H I@2 };
add(16)         g42<1>Q         g1.4<0,1,0>Q    g40<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g90<1>Q         g1.4<0,1,0>Q    g88<1,1,0>Q     { align1 2H I@2 compacted };
add(16)         g92<1>Q         g42<1,1,0>Q     g33<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g94<1>Q         g90<1,1,0>Q     g85<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g92UD           g97UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $4 };
mov(16)         g46<1>Q         0x0000000000000010Q             { align1 1H };
mov(16)         g93<1>Q         0x0000000000000010Q             { align1 2H $4.src };
mov(16)         g100<1>D        0D                              { align1 2H };
mov(16)         g102<1>D        0D                              { align1 2H };
mov(16)         g104<1>D        0D                              { align1 2H };
mov(16)         g99<1>D         0D                              { align1 1H };
mov(16)         g101<1>D        0D                              { align1 1H };
mov(16)         g103<1>D        0D                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g95<1>Q         g78<1,1,0>Q     g46<1,1,0>Q     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $4.src };
add(16)         g97<1>Q         g80<1,1,0>Q     g93<1,1,0>Q     { align1 2H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g95UD           g99UD           0x08002584                0x00000180
                            ugm MsgDesc: ( store, a64, d32, V3, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat )  base_offset 0  { align1 $5 };
add(32)         g96<1>D         g70<8,8,1>D     511D            { align1 $5.src };
mov(16)         g47<1>Q         0x000000000000042cQ             { align1 1H };
mov(16)         g98<1>Q         0x000000000000042cQ             { align1 2H $5.src };
shr(32)         g109<1>UD       g96<8,8,1>UD    0x00000009UD    { align1 I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g100<1>Q        g42<1,1,0>Q     g47<1,1,0>Q     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $5.src };
add(16)         g102<1>Q        g90<1,1,0>Q     g98<1,1,0>Q     { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g100UD          g109UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $6 };
mov(16)         g48<1>Q         0x000000000000082cQ             { align1 1H };
mov(16)         g101<1>Q        0x000000000000082cQ             { align1 2H $6.src };
add(16)         g52<1>Q         g48<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $5.src };
add(16)         g103<1>Q        g101<1,1,0>Q    g1.4<0,1,0>Q    { align1 2H I@2 compacted };
mov(32)         g111<2>UW       g19<16,8,2>UW                   { align1 };
add(16)         g105<1>Q        g52<1,1,0>Q     g40<1,1,0>Q     { align1 1H I@3 compacted };
add(16)         g107<1>Q        g103<1,1,0>Q    g88<1,1,0>Q     { align1 2H I@3 compacted };
mov(32)         g111.1<2>UW     g51<16,16,1>UW                  { align1 I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g105UD          g111UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $7 };
else(32)        JIP:  LABEL0          UIP:  LABEL0              { align1 };

LABEL1:
mov(32)         g109<1>UD       0x00000000UD                    { align1 $6.src compacted };

LABEL0:
endif(32)       JIP:  LABEL2                                    { align1 };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(32)         g95<1>D         0D                              { align1 WE_all I@2 };
mov(32)         g95<1>D         g109<1,1,0>D                    { align1 compacted };
cmp.z.f0.0(32)  null<1>W        g51<16,16,1>W   0W              { align1 I@4 };
add(8)          g95.1<2>D       g95<8,4,2>D     g95.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(8)          g96.1<2>D       g96<8,4,2>D     g96.1<8,4,2>D   { align1 WE_all 1Q I@3 };
add(4)          g95.2<4>D       g95.1<8,2,4>D   g95.2<8,2,4>D   { align1 WE_all 1N I@2 };
add(4)          g96.2<4>D       g96.1<8,2,4>D   g96.2<8,2,4>D   { align1 WE_all 1N I@2 };
add(4)          g95.3<4>D       g95.1<8,2,4>D   g95.3<8,2,4>D   { align1 WE_all 1N I@2 };
add(4)          g96.3<4>D       g96.1<8,2,4>D   g96.3<8,2,4>D   { align1 WE_all 1N I@2 };
add(4)          g95.4<1>D       g95.3<0,1,0>D   g95.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(4)          g95.12<1>D      g95.11<0,1,0>D  g95.12<4,4,1>D  { align1 WE_all 1N I@3 };
add(4)          g96.4<1>D       g96.3<0,1,0>D   g96.4<4,4,1>D   { align1 WE_all 1N I@3 };
add(4)          g96.12<1>D      g96.11<0,1,0>D  g96.12<4,4,1>D  { align1 WE_all 1N I@4 };
add(8)          g95.8<1>D       g95.7<0,1,0>D   g95.8<8,8,1>D   { align1 WE_all 1Q I@3 };
add(8)          g96.8<1>D       g96.7<0,1,0>D   g96.8<8,8,1>D   { align1 WE_all 1Q I@2 };
add(16)         g96<1>D         g95.15<0,1,0>D  g96<8,8,1>D     { align1 WE_all 1H I@1 };
(+f0.0) if(32)  JIP:  LABEL3          UIP:  LABEL3              { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(32)         g106<1>UD       g38<16,8,2>UW                   { align1 $1.dst };
mov(32)         g110<1>UD       g36<16,8,2>UW                   { align1 $7.src };
mov(16)         g53<1>Q         0x0000000000000018Q             { align1 1H };
mov(16)         g114<1>Q        0x0000000000000018Q             { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N I@6 };
mov(16)         g3<1>UD         g96.15<0,1,0>UD                 { align1 2H $2.src };
mov(16)         g2<1>UD         g96.15<0,1,0>UD                 { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(32)         g108<1>D        g106<1,1,0>D    g10<1,1,0>D     { align1 I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(32)         g112<1>D        g110<1,1,0>D    -g10<1,1,0>D    { align1 I@6 compacted };
cmp.l.f0.0(32)  g120<1>D        g10<8,8,1>D     g110<8,8,1>D    { align1 };
add(16)         g116<1>Q        g1.4<0,1,0>Q    g53<1,1,0>Q     { align1 1H I@7 compacted };
add(16)         g118<1>Q        g1.4<0,1,0>Q    g114<1,1,0>Q    { align1 2H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g9<1>UD         g109<1,1,0>UD                   { align1 2H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g8<1>UD         g108<1,1,0>UD                   { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g7<1>UD         g113<1,1,0>UD                   { align1 2H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g6<1>UD         g112<1,1,0>UD                   { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g5<1>D          -g121<1,1,0>D                   { align1 2H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g4<1>D          -g120<1,1,0>D                   { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g116UD          g2UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $2 };
mov(16)         g54<1>Q         0x0000000000000428Q             { align1 1H };
mov(16)         g121<1>Q        0x0000000000000428Q             { align1 2H };
add(16)         g123<1>Q        g1.4<0,1,0>Q    g54<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g125<1>Q        g1.4<0,1,0>Q    g121<1,1,0>Q    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g123UD          g10UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $8 };

LABEL3:
endif(32)       JIP:  LABEL4                                    { align1 };

LABEL4:
mov(16)         g55<1>Q         0x0000000000002c2cQ             { align1 1H };
mov(16)         g124<1>Q        0x0000000000002c2cQ             { align1 2H $8.src };
shl(32)         g25<1>D         g44<8,8,1>D     0x00000002UD    { align1 };
mov(16)         g14<1>Q         0x000000000000002cQ             { align1 1H };
mov(16)         g2<1>Q          0x000000000000002cQ             { align1 2H $2.src };
mov(16)         g16<1>Q         0x00000000000004acQ             { align1 1H };
mov(16)         g4<1>Q          0x00000000000004acQ             { align1 2H $2.src };
mov(32)         g23<1>UD        g29<1,1,0>UD                    { align1 compacted };
add(16)         g12<1>Q         g1.4<0,1,0>Q    g55<1,1,0>Q     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $8.src };
add(16)         g126<1>Q        g1.4<0,1,0>Q    g124<1,1,0>Q    { align1 2H I@7 compacted };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.ge.f0.0(32) null<1>UD       g23<8,8,1>UD    g10<8,8,1>UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL5        UIP:  LABEL5              { align1 };
mul(32)         g6<1>D          g23<1,1,0>D     1484W           { align1 $2.src compacted };
mov(32)         g20<1>UD        g25<1,1,0>UD                    { align1 I@6 compacted };
mov(16)         g121<2>UD       g6<1,1,0>UD                     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $8.src };
mov(16)         g123<2>UD       g7<1,1,0>UD                     { align1 2H I@3 compacted };
mov(16)         g56<1>UQ        g121<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g7<1>UQ         g123<8,4,2>UD                   { align1 2H I@2 };
add(16)         g58<1>Q         g12<1,1,0>Q     g56<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g27<1>Q         g126<1,1,0>Q    g7<1,1,0>Q      { align1 2H I@2 compacted };
add(16)         g18<1>Q         g58<1,1,0>Q     g14<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g60<1>Q         g16<1,1,0>Q     g58<1,1,0>Q     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
add(16)         g31<1>Q         g27<1,1,0>Q     g2<1,1,0>Q      { align1 2H I@3 compacted };
add(16)         g33<1>Q         g4<1,1,0>Q      g27<1,1,0>Q     { align1 2H $1.src compacted };

LABEL7:
cmp.ge.f0.0(32) null<1>UD       g20<8,8,1>UD    0x00000030UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL6        UIP:  LABEL6              { align1 };
shl(32)         g35<1>D         g20<8,8,1>D     0x00000002UD    { align1 $1.src };
mov(32)         g6<1>UD         0x00000000UD                    { align1 $2.src compacted };
mov(16)         g124<2>UD       g35<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g8<2>UD         g36<1,1,0>UD                    { align1 2H I@3 compacted };
mov(16)         g62<1>UQ        g124<8,4,2>UD                   { align1 1H I@2 };
mov(16)         g37<1>UQ        g8<8,4,2>UD                     { align1 2H @2 $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g39<1>Q         g60<1,1,0>Q     g62<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g41<1>Q         g33<1,1,0>Q     g37<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g39UD           g6UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $10 };
add(32)         g40<1>D         g35<8,8,1>D     4D              { align1 $10.src };
mov(16)         g27<2>UD        g40<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g37<2>UD        g41<1,1,0>UD                    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g63<1>UQ        g27<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $10.src };
mov(16)         g41<1>UQ        g37<8,4,2>UD                    { align1 2H I@2 };
add(16)         g43<1>Q         g60<1,1,0>Q     g63<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g45<1>Q         g33<1,1,0>Q     g41<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g43UD           g6UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $12 };
add(32)         g44<1>D         g35<8,8,1>D     8D              { align1 $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g38<2>UD        g44<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g40<2>UD        g45<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g64<1>UQ        g38<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $12.src };
mov(16)         g45<1>UQ        g40<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g47<1>Q         g60<1,1,0>Q     g64<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g49<1>Q         g33<1,1,0>Q     g45<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g47UD           g6UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $13 };
add(32)         g48<1>D         g35<8,8,1>D     12D             { align1 $13.src };
mov(16)         g41<2>UD        g48<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $12.src };
mov(16)         g43<2>UD        g49<1,1,0>UD                    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g65<1>UQ        g41<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $13.src };
mov(16)         g49<1>UQ        g43<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g51<1>Q         g60<1,1,0>Q     g65<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
add(16)         g53<1>Q         g33<1,1,0>Q     g49<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g51UD           g6UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $2 };
add(32)         g20<1>D         g20<8,8,1>D     128D            { align1 };

LABEL6:
while(32)       JIP:  LABEL7                                    { align1 };
mov(32)         g21<1>UD        g25<1,1,0>UD                    { align1 I@2 compacted };

LABEL9:
cmp.ge.f0.0(32) null<1>UD       g21<8,8,1>UD    0x00000120UD    { align1 I@1 };
(+f0.0) break(32) JIP:  LABEL8        UIP:  LABEL8              { align1 };
shl(32)         g52<1>D         g21<8,8,1>D     0x00000002UD    { align1 $2.src };
mov(32)         g7<1>UD         0x7f800000UD                    { align1 $2.src };
mov(16)         g44<2>UD        g52<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $13.src };
mov(16)         g46<2>UD        g53<1,1,0>UD                    { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g66<1>UQ        g44<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g54<1>UQ        g46<8,4,2>UD                    { align1 2H I@2 };
add(16)         g56<1>Q         g18<1,1,0>Q     g66<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g58<1>Q         g31<1,1,0>Q     g54<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g56UD           g7UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $14 };
add(32)         g57<1>D         g52<8,8,1>D     4D              { align1 $14.src };
mov(16)         g47<2>UD        g57<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g49<2>UD        g58<1,1,0>UD                    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g67<1>UQ        g47<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $14.src };
mov(16)         g58<1>UQ        g49<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g60<1>Q         g18<1,1,0>Q     g67<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g62<1>Q         g31<1,1,0>Q     g58<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g60UD           g7UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $9 };
add(32)         g61<1>D         g52<8,8,1>D     8D              { align1 $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g50<2>UD        g61<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g54<2>UD        g62<1,1,0>UD                    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g68<1>UQ        g50<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $9.src };
mov(16)         g62<1>UQ        g54<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g64<1>Q         g18<1,1,0>Q     g68<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g66<1>Q         g31<1,1,0>Q     g62<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g64UD           g7UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $11 };
add(32)         g65<1>D         g52<8,8,1>D     12D             { align1 $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g55<2>UD        g65<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g57<2>UD        g66<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g72<1>UQ        g55<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $11.src };
mov(16)         g66<1>UQ        g57<8,4,2>UD                    { align1 2H I@2 };
add(16)         g68<1>Q         g18<1,1,0>Q     g72<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
add(16)         g70<1>Q         g31<1,1,0>Q     g66<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g68UD           g7UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $2 };
add(32)         g21<1>D         g21<8,8,1>D     128D            { align1 };

LABEL8:
while(32)       JIP:  LABEL9                                    { align1 };
add(32)         g23<1>D         g23<8,8,1>D     8D              { align1 };

LABEL5:
while(32)       JIP:  LABEL10                                   { align1 };
mov(16)         g98<1>Q         0x000000000000056cQ             { align1 1H };
mov(16)         g69<1>Q         0x000000000000056cQ             { align1 2H $2.src };

LABEL14:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.ge.f0.0(32) null<1>UD       g29<8,8,1>UD    g10<8,8,1>UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL11       UIP:  LABEL11             { align1 };
mul(32)         g71<1>D         g29<1,1,0>D     1484W           { align1 $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $9.src };
mov(32)         g27<1>UD        g25<1,1,0>UD                    { align1 I@7 compacted };
mov(16)         g58<2>UD        g71<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $9.src };
mov(16)         g60<2>UD        g72<1,1,0>UD                    { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g100<1>UQ       g58<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g72<1>UQ        g60<8,4,2>UD                    { align1 2H I@2 };
add(16)         g102<1>Q        g12<1,1,0>Q     g100<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
add(16)         g74<1>Q         g126<1,1,0>Q    g72<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g104<1>Q        g102<1,1,0>Q    g98<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g76<1>Q         g74<1,1,0>Q     g69<1,1,0>Q     { align1 2H I@2 compacted };

LABEL13:
cmp.ge.f0.0(32) null<1>UD       g27<8,8,1>UD    0x00000018UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL12       UIP:  LABEL12             { align1 };
shl(32)         g78<1>D         g27<8,8,1>D     0x00000002UD    { align1 };
mov(32)         g8<1>UD         0x7f800000UD                    { align1 $2.src };
mov(16)         g61<2>UD        g78<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $11.src };
mov(16)         g63<2>UD        g79<1,1,0>UD                    { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g106<1>UQ       g61<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g80<1>UQ        g63<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g82<1>Q         g104<1,1,0>Q    g106<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
add(16)         g84<1>Q         g76<1,1,0>Q     g80<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g82UD           g8UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $15 };
add(32)         g83<1>D         g78<8,8,1>D     4D              { align1 $15.src };
mov(16)         g64<2>UD        g83<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g66<2>UD        g84<1,1,0>UD                    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g107<1>UQ       g64<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $15.src };
mov(16)         g84<1>UQ        g66<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g86<1>Q         g104<1,1,0>Q    g107<1,1,0>Q    { align1 1H I@2 compacted };
add(16)         g88<1>Q         g76<1,1,0>Q     g84<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g86UD           g8UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $0 };
add(32)         g87<1>D         g78<8,8,1>D     8D              { align1 $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g67<2>UD        g87<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g71<2>UD        g88<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g108<1>UQ       g67<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(16)         g88<1>UQ        g71<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g90<1>Q         g104<1,1,0>Q    g108<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $4.src };
add(16)         g92<1>Q         g76<1,1,0>Q     g88<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g90UD           g8UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $1 };
add(32)         g91<1>D         g78<8,8,1>D     12D             { align1 $1.src };
mov(16)         g72<2>UD        g91<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g74<2>UD        g92<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g109<1>UQ       g72<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
mov(16)         g92<1>UQ        g74<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g94<1>Q         g104<1,1,0>Q    g109<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N I@2 };
add(16)         g96<1>Q         g76<1,1,0>Q     g92<1,1,0>Q     { align1 2H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g94UD           g8UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $2 };
add(32)         g27<1>D         g27<8,8,1>D     128D            { align1 };

LABEL12:
while(32)       JIP:  LABEL13                                   { align1 };
add(32)         g29<1>D         g29<8,8,1>D     8D              { align1 };

LABEL11:
while(32)       JIP:  LABEL14                                   { align1 };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H I@3 compacted };
send(32)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_begin_batchable_code[] = {
    0x80000065, 0x4b058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x09054770, 0x00000000, 0x00000020,
    0x02100061, 0x1e054770, 0x00000000, 0x00000020,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x010c0000, 0xfa004b0c, 0x00340000,
    0x800c0061, 0x2e054410, 0x00000000, 0x76543210,
    0x800c1940, 0x2e458110, 0x01462e05, 0x00080008,
    0x80101940, 0x2e858110, 0x01582e05, 0x00100010,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00140061, 0x2c050120, 0x00582e05, 0x00000000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001e40, 0x01700920, 0x38081e40, 0x01701e22,
    0x00140065, 0x1d058220, 0x02000024, 0x000000ff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0014c131, 0x24240000, 0xfb002024, 0x00040000,
    0x00141969, 0x2a058660, 0x02461d05, 0x00000005,
    0xac201940, 0x2a002c2f, 0x00141961, 0x31050020,
    0x00662f07, 0x00000000, 0x00140061, 0x33050010,
    0x00662f07, 0x00000000, 0x00141a61, 0x34050120,
    0x00563106, 0x00000000, 0x00148161, 0x6e060210,
    0x00462405, 0x00000000, 0x00141961, 0x28050110,
    0x00566e06, 0x00000000, 0x00141962, 0x29058110,
    0x51582805, 0x01000100, 0x00141961, 0x0a050120,
    0x00582905, 0x00000000, 0x00141970, 0x00010660,
    0x56463405, 0x00460a05, 0x04140022, 0x0001c060,
    0x00000590, 0x00000588, 0xac208140, 0x26003136,
    0x00100061, 0x15054770, 0x00000000, 0x00000034,
    0x02100061, 0x3e054770, 0x00000000, 0x00000034,
    0x00100061, 0x19054770, 0x00000000, 0x00002c2c,
    0x02100061, 0x47054770, 0x00000000, 0x00002c2c,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x68200041, 0x5cc0344b, 0x64800061, 0x00000002,
    0x64800061, 0x00000006, 0x64800061, 0x00000008,
    0x64880061, 0x00000003, 0x64880061, 0x00000007,
    0x64880061, 0x00000009, 0x00140061, 0x13060210,
    0x00463605, 0x00000000, 0x38800040, 0x15070117,
    0x38880040, 0x3e070140, 0x38800040, 0x1903011b,
    0x38880040, 0x47030149, 0xb4000061, 0x00104b73,
    0xb4080061, 0x00104c75, 0x00101f61, 0x6f070110,
    0x00561306, 0x00000000, 0x02101f61, 0x71070110,
    0x00561406, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x00101c61, 0x1f050230,
    0x00447306, 0x00000000, 0x02101c61, 0x4c050230,
    0x00447506, 0x00000000, 0x00101c61, 0x0c050130,
    0x00546f07, 0x00000000, 0x02101c61, 0x38050130,
    0x00547107, 0x00000000, 0x38001c40, 0x1f001b4e,
    0x38081c40, 0x4c004950, 0x00101c41, 0x20018220,
    0x01440c06, 0x00580058, 0x00100041, 0x0f058660,
    0x05440c06, 0x00580058, 0x02101d41, 0x3b058660,
    0x05443806, 0x00580058, 0x00100049, 0x0e058220,
    0x02440c06, 0x00000058, 0xb4001b61, 0x00100f10,
    0xb4081b61, 0x00103b3c, 0x02100041, 0x20018220,
    0x01443806, 0x00580058, 0xb4001b61, 0x00120e10,
    0x02100049, 0x3a058220, 0x02443806, 0x00000058,
    0x38001a40, 0x10001742, 0xb4081a61, 0x00123a3c,
    0x38081940, 0x3c004044, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c231, 0x46140000,
    0xfb004224, 0x00000000, 0x2c088261, 0x00104705,
    0x2c008261, 0x00104604, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c231, 0x00000000,
    0xfb084e24, 0x000c0244, 0x00140061, 0x60050120,
    0x00563606, 0x00000000, 0x0010a161, 0x20054770,
    0x00000000, 0x0000001c, 0x02100061, 0x52054770,
    0x00000000, 0x0000001c, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x20004e54,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x52005056, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c331, 0x00000000,
    0xfb085424, 0x00006014, 0x0010a161, 0x21054770,
    0x00000000, 0x00000028, 0x0210a361, 0x55054770,
    0x00000000, 0x00000028, 0x0014a369, 0x57058660,
    0x02463405, 0x00000002, 0x64a0a361, 0x00000061,
    0xb4001a61, 0x00105776, 0xb4081b61, 0x00105878,
    0x00101a61, 0x28050230, 0x00447606, 0x00000000,
    0x02101a61, 0x58050230, 0x00447806, 0x00000000,
    0x38801a40, 0x2803012a, 0x38881a40, 0x5803015a,
    0x38001a40, 0x21002a5c, 0x38081a40, 0x55005a5e,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c431, 0x00000000, 0xfb085c24, 0x00006114,
    0x00100061, 0x2e054770, 0x00000000, 0x00000010,
    0x0210a461, 0x5d054770, 0x00000000, 0x00000010,
    0x02100061, 0x64054660, 0x00000000, 0x00000000,
    0x02100061, 0x66054660, 0x00000000, 0x00000000,
    0x02100061, 0x68054660, 0x00000000, 0x00000000,
    0x00100061, 0x63054660, 0x00000000, 0x00000000,
    0x00100061, 0x65054660, 0x00000000, 0x00000000,
    0x00100061, 0x67054660, 0x00000000, 0x00000000,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x38001f40, 0x2e004e5f, 0x8200a401, 0x00000000,
    0x00000000, 0x00000000, 0x38081f40, 0x5d005061,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c531, 0x00000000, 0xfb085f24, 0x00086334,
    0x0014a540, 0x60058660, 0x06464605, 0x000001ff,
    0x00100061, 0x2f054770, 0x00000000, 0x0000042c,
    0x0210a561, 0x62054770, 0x00000000, 0x0000042c,
    0x00141b68, 0x6d058220, 0x02466005, 0x00000009,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x38001b40, 0x2f002a64, 0x8200a501, 0x00000000,
    0x00000000, 0x00000000, 0x38081b40, 0x62005a66,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c631, 0x00000000, 0xfb086424, 0x00006d14,
    0x00100061, 0x30054770, 0x00000000, 0x0000082c,
    0x0210a661, 0x65054770, 0x00000000, 0x0000082c,
    0x38001a40, 0x01703034, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x8200a501, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x01706567,
    0x00140061, 0x6f060110, 0x00561306, 0x00000000,
    0x38001b40, 0x28003469, 0x38081b40, 0x5800676b,
    0x00141b61, 0x6f0e0110, 0x00583305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c731, 0x00000000, 0xfb086924, 0x00006f14,
    0x00140024, 0x0001c060, 0x00000018, 0x00000018,
    0x64a0a661, 0x0000006d, 0x00140025, 0x00004600,
    0x00000000, 0x00000010, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x80141a61, 0x5f054660,
    0x00000000, 0x00000000, 0x7c200061, 0x00106d5f,
    0x00141c70, 0x00018550, 0x15583305, 0x00000000,
    0x800c1a40, 0x5f160660, 0x06445f06, 0x00445f16,
    0x800c1b40, 0x60160660, 0x06446006, 0x00446016,
    0x80081a40, 0x5f270660, 0x06425f17, 0x00425f27,
    0x80081a40, 0x60270660, 0x06426017, 0x00426027,
    0x80081a40, 0x5f370660, 0x06425f17, 0x00425f37,
    0x80081a40, 0x60370660, 0x06426017, 0x00426037,
    0x80081a40, 0x5f450660, 0x06005f34, 0x00345f45,
    0x80081b40, 0x5fc50660, 0x06005fb4, 0x00345fc5,
    0x80081b40, 0x60450660, 0x06006034, 0x00346045,
    0x80081c40, 0x60c50660, 0x060060b4, 0x003460c5,
    0x800c1b40, 0x5f850660, 0x06005f74, 0x00465f85,
    0x800c1a40, 0x60850660, 0x06006074, 0x00466085,
    0x80101940, 0x60050660, 0x06005ff4, 0x00466005,
    0x04140022, 0x0001c060, 0x000001e0, 0x000001e0,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x00148161, 0x6a050120, 0x00562606, 0x00000000,
    0x0014a761, 0x6e050120, 0x00562406, 0x00000000,
    0x00100061, 0x35054770, 0x00000000, 0x00000018,
    0x02100061, 0x72054770, 0x00000000, 0x00000018,
    0x82001e01, 0x00000000, 0x00000000, 0x00000000,
    0x0210a261, 0x03050220, 0x000060f4, 0x00000000,
    0x0010a261, 0x02050220, 0x000060f4, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0xac201e40, 0x0a006a6c, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0xac201e40, 0x0a206e70,
    0x00140070, 0x78050660, 0x56460a05, 0x00466e05,
    0x38801f40, 0x35030174, 0x38881f40, 0x72030176,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0x2c081d61, 0x00106d09, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x2c001e61, 0x00106c08,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0x2c081e61, 0x00107107, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x2c001f61, 0x00107006,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0x7d881f61, 0x00107905, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x7d801f61, 0x00107804,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c231, 0x00000000, 0xfb087424, 0x000c0244,
    0x00100061, 0x36054770, 0x00000000, 0x00000428,
    0x02100061, 0x79054770, 0x00000000, 0x00000428,
    0x38801a40, 0x3603017b, 0x38881a40, 0x7903017d,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c831, 0x00000000, 0xfb087b24, 0x00000a14,
    0x00140025, 0x00004600, 0x00000000, 0x00000010,
    0x00100061, 0x37054770, 0x00000000, 0x00002c2c,
    0x0210a861, 0x7c054770, 0x00000000, 0x00002c2c,
    0x00140069, 0x19058660, 0x02462c05, 0x00000002,
    0x00100061, 0x0e054770, 0x00000000, 0x0000002c,
    0x0210a261, 0x02054770, 0x00000000, 0x0000002c,
    0x00100061, 0x10054770, 0x00000000, 0x000004ac,
    0x0210a261, 0x04054770, 0x00000000, 0x000004ac,
    0x2c200061, 0x00101d17, 0x38801f40, 0x3703010c,
    0x8200a801, 0x00000000, 0x00000000, 0x00000000,
    0x38881f40, 0x7c03017e, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x00141a70, 0x00010220,
    0x42461705, 0x00460a05, 0x04140028, 0x0001c660,
    0x000006d0, 0x000006d0, 0x6820a241, 0x5cc01706,
    0x2c201e61, 0x00101914, 0xb4001a61, 0x00100679,
    0x8200a801, 0x00000000, 0x00000000, 0x00000000,
    0xb4081b61, 0x0010077b, 0x00101a61, 0x38050230,
    0x00447906, 0x00000000, 0x8200a201, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x07050230,
    0x00447b06, 0x00000000, 0x38001a40, 0x38000c3a,
    0x38081a40, 0x07007e1b, 0x38001a40, 0x0e003a12,
    0x3800a940, 0x3a00103c, 0x8200a101, 0x00000000,
    0x00000000, 0x00000000, 0x38081b40, 0x02001b1f,
    0x3808a140, 0x1b000421, 0x00141a70, 0x00018220,
    0x42461405, 0x00000030, 0x04140028, 0x0001c660,
    0x000002d8, 0x000002d8, 0x0014a169, 0x23058660,
    0x02461405, 0x00000002, 0x64a0a261, 0x00000006,
    0xb4001a61, 0x0010237c, 0x8200a201, 0x00000000,
    0x00000000, 0x00000000, 0xb4081b61, 0x00102408,
    0x00101a61, 0x3e050230, 0x00447c06, 0x00000000,
    0x02114161, 0x25050230, 0x00440806, 0x00000000,
    0x80008101, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x3e003c27, 0x38081a40, 0x25002129,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014ca31, 0x00000000, 0xfb082724, 0x00000614,
    0x0014aa40, 0x28058660, 0x06462305, 0x00000004,
    0xb4001961, 0x0010281b, 0xb4081a61, 0x00102925,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x3f050230, 0x00441b06, 0x00000000,
    0x8200aa01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x29050230, 0x00442506, 0x00000000,
    0x38001a40, 0x3f003c2b, 0x38081a40, 0x2900212d,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014cc31, 0x00000000, 0xfb082b24, 0x00000614,
    0x0014ac40, 0x2c058660, 0x06462305, 0x00000008,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0xb4001961, 0x00102c26, 0xb4081a61, 0x00102d28,
    0x00101a61, 0x40050230, 0x00442606, 0x00000000,
    0x8200ac01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x2d050230, 0x00442806, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x40003c2f, 0x38081a40, 0x2d002131,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014cd31, 0x00000000, 0xfb082f24, 0x00000614,
    0x0014ad40, 0x30058660, 0x06462305, 0x0000000c,
    0xb4001961, 0x00103029, 0x8200ac01, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x0010312b,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x41050230, 0x00442906, 0x00000000,
    0x8200ad01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x31050230, 0x00442b06, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x41003c33, 0x8200a201, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x31002135,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c231, 0x00000000, 0xfb083324, 0x00000614,
    0x00140040, 0x14058660, 0x06461405, 0x00000080,
    0x00140027, 0x00014060, 0x00000000, 0xfffffd18,
    0x2c201a61, 0x00101915, 0x00141970, 0x00018220,
    0x42461505, 0x00000120, 0x04140028, 0x0001c660,
    0x000002f0, 0x000002f0, 0x0014a269, 0x34058660,
    0x02461505, 0x00000002, 0x0014a261, 0x07054220,
    0x00000000, 0x7f800000, 0xb4001a61, 0x0010342c,
    0x8200ad01, 0x00000000, 0x00000000, 0x00000000,
    0xb4081b61, 0x0010352e, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x42050230,
    0x00442c06, 0x00000000, 0x8200a201, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x36050230,
    0x00442e06, 0x00000000, 0x38001a40, 0x42001238,
    0x38081a40, 0x36001f3a, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014ce31, 0x00000000,
    0xfb083824, 0x00000714, 0x0014ae40, 0x39058660,
    0x06463405, 0x00000004, 0xb4001961, 0x0010392f,
    0xb4081a61, 0x00103a31, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x43050230,
    0x00442f06, 0x00000000, 0x8200ae01, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x3a050230,
    0x00443106, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x4300123c,
    0x38081a40, 0x3a001f3e, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c931, 0x00000000,
    0xfb083c24, 0x00000714, 0x0014a940, 0x3d058660,
    0x06463405, 0x00000008, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0xb4001961, 0x00103d32,
    0xb4081a61, 0x00103e36, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x44050230,
    0x00443206, 0x00000000, 0x8200a901, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x3e050230,
    0x00443606, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x44001240,
    0x38081a40, 0x3e001f42, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014cb31, 0x00000000,
    0xfb084024, 0x00000714, 0x0014ab40, 0x41058660,
    0x06463405, 0x0000000c, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0xb4001961, 0x00104137,
    0xb4081a61, 0x00104239, 0x00101a61, 0x48050230,
    0x00443706, 0x00000000, 0x8200ab01, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x42050230,
    0x00443906, 0x00000000, 0x38001a40, 0x48001244,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x42001f46, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c231, 0x00000000,
    0xfb084424, 0x00000714, 0x00140040, 0x15058660,
    0x06461505, 0x00000080, 0x00140027, 0x00014060,
    0x00000000, 0xfffffd00, 0x00140040, 0x17058660,
    0x06461705, 0x00000008, 0x00140027, 0x00014060,
    0x00000000, 0xfffff910, 0x00100061, 0x62054770,
    0x00000000, 0x0000056c, 0x0210a261, 0x45054770,
    0x00000000, 0x0000056c, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x00141a70, 0x00010220,
    0x42461d05, 0x00460a05, 0x04140028, 0x0001c660,
    0x00000410, 0x00000410, 0x6820a241, 0x5cc01d47,
    0x8200a901, 0x00000000, 0x00000000, 0x00000000,
    0x2c201f61, 0x0010191b, 0xb4001a61, 0x0010473a,
    0x8200a901, 0x00000000, 0x00000000, 0x00000000,
    0xb4081b61, 0x0010483c, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x64050230,
    0x00443a06, 0x00000000, 0x02101a61, 0x48050230,
    0x00443c06, 0x00000000, 0x38001a40, 0x64000c66,
    0x8200a001, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x48007e4a, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x62006668,
    0x38081a40, 0x45004a4c, 0x00141a70, 0x00018220,
    0x42461b05, 0x00000018, 0x04140028, 0x0001c660,
    0x00000320, 0x00000320, 0x00140069, 0x4e058660,
    0x02461b05, 0x00000002, 0x0014a261, 0x08054220,
    0x00000000, 0x7f800000, 0xb4001a61, 0x00104e3d,
    0x8200ab01, 0x00000000, 0x00000000, 0x00000000,
    0xb4081b61, 0x00104f3f, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x6a050230,
    0x00443d06, 0x00000000, 0x02101a61, 0x50050230,
    0x00443f06, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x6a006852,
    0x8200a301, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x50004c54, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014cf31, 0x00000000,
    0xfb085224, 0x00000814, 0x0014af40, 0x53058660,
    0x06464e05, 0x00000004, 0xb4001961, 0x00105340,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0xb4081a61, 0x00105442, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x6b050230,
    0x00444006, 0x00000000, 0x8200af01, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x54050230,
    0x00444206, 0x00000000, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x6b006856,
    0x38081a40, 0x54004c58, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c031, 0x00000000,
    0xfb085624, 0x00000814, 0x0014a040, 0x57058660,
    0x06464e05, 0x00000008, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0xb4001961, 0x00105743,
    0xb4081a61, 0x00105847, 0x00101a61, 0x6c050230,
    0x00444306, 0x00000000, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x58050230,
    0x00444706, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x6c00685a,
    0x8200a401, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x58004c5c, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c131, 0x00000000,
    0xfb085a24, 0x00000814, 0x0014a140, 0x5b058660,
    0x06464e05, 0x0000000c, 0xb4001961, 0x00105b48,
    0xb4081a61, 0x00105c4a, 0x00101a61, 0x6d050230,
    0x00444806, 0x00000000, 0x8200a101, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x5c050230,
    0x00444a06, 0x00000000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x6d00685e,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0x82001a01, 0x00000000, 0x00000000, 0x00000000,
    0x38080040, 0x5c004c60, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c231, 0x00000000,
    0xfb085e24, 0x00000814, 0x00140040, 0x1b058660,
    0x06461b05, 0x00000080, 0x00140027, 0x00014060,
    0x00000000, 0xfffffcd0, 0x00140040, 0x1d058660,
    0x06461d05, 0x00000008, 0x00140027, 0x00014060,
    0x00000000, 0xfffffbd0, 0x2c101b61, 0x0010007e,
    0x80141931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_begin_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5696,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_begin_batchable_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_begin_batchable_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 256, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 4,
      .prog_spilled = 0,
      .uses_barrier = false,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 12,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 16,
   .arg_count = 2,
   .args = gfx20_bvh_build_BFS_begin_batchable_args,
   .code = gfx20_bvh_build_BFS_begin_batchable_code,
};
const char *gfx20_bvh_build_BFS_begin_batchable_sha1 = "28959a96fd34943019e48019b494d0951a791d3b";

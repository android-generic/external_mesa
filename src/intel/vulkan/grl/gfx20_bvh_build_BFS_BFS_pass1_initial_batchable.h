#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g34<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g16<1>Q         0x0000000000000008Q             { align1 1H };
mov(16)         g18<1>Q         0x0000000000000428Q             { align1 1H };
mov(16)         g23<1>Q         0x000000000000042cQ             { align1 1H };
mov(16)         g5<1>UD         0x00000000UD                    { align1 1H compacted };
mov(16)         g2<1>UD         g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(1)         g1UD            g34UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g20<1>Q         g1.4<0,1,0>Q    g18<1,1,0>Q     { align1 1H I@4 compacted };
add(16)         g25<1>Q         g1.4<0,1,0>Q    g23<1,1,0>Q     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g22UD           g20UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };

LABEL3:
shl(16)         g27<1>D         g5<8,8,1>D      0x00000002UD    { align1 1H I@4 };
mov(16)         g93<2>UD        g27<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g28<1>UQ        g93<8,4,2>UD                    { align1 1H I@1 };
add(16)         g30<1>Q         g25<1,1,0>Q     g28<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g33<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g33<1>UD        g33<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g32<1>UD        g33<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
mov(8)          g37<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(1)          a0<1>UD         g32<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g33<1>UQ        g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
add(8)          g37.8<1>UW      g37<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g83<1>Q         g33<0,1,0>Q                     { align1 WE_all 1H I@2 };
add(16)         g36<1>W         g37<16,16,1>UW  -1W             { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g31UD           g83UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(16)         g35<1>D         0D                              { align1 WE_all 1H $2.dst };
mov(16)         g35<1>D         g31<1,1,0>D                     { align1 1H compacted };
mov(16)         a0<1>UW         0x08c0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g36<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x08c0UW        { align1 WE_all 1H A@1 };
mov(16)         g34<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 };
mov(1)          g34<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g34.1<2>D       g34<8,4,2>D     g34.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g34.2<4>D       g34.1<8,2,4>D   g34.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g34.3<4>D       g34.1<8,2,4>D   g34.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g34.4<1>D       g34.3<0,1,0>D   g34.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g34.12<1>D      g34.11<0,1,0>D  g34.12<4,4,1>D  { align1 WE_all 1N I@2 };
add(8)          g34.8<1>D       g34.7<0,1,0>D   g34.8<8,8,1>D   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g6<1>D          g2<1,1,0>D      -g34<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g38<1>UD        g6<1,1,0>UD     g31<1,1,0>UD    { align1 1H I@1 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g38<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov.nz.f0.0(16) g4<1>UD         f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g3<1>UD         0xffffffffUD                    { align1 1H };
break(16)       JIP:  LABEL0          UIP:  LABEL1              { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };
add(16)         g39<1>D         g34<1,1,0>D     g31<1,1,0>D     { align1 1H compacted };
add(16)         g5<1>D          g5<8,8,1>D      16D             { align1 1H };
add(16)         g2<1>D          g2<8,8,1>D      -g39.15<0,1,0>D { align1 1H I@2 };
cmp.ge.f0.0(16) null<1>UD       g5<8,8,1>UD     g22<8,8,1>UD    { align1 1H @2 $1.dst };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
mov(16)         g3<1>UD         0x00000000UD                    { align1 1H I@7 compacted };
break(16)       JIP:  LABEL2          UIP:  LABEL1              { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g3<8,8,1>D                      { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL4              { align1 1H };
fbl(16)         g40<1>UD        g4<1,1,0>UD                     { align1 1H I@6 compacted };
cmp.z.f0.0(16)  null<1>D        g4<8,8,1>D      0D              { align1 1H };
(-f0.0) sel(16) g41<1>UD        g40<8,8,1>UD    0x00000020UD    { align1 1H I@2 };
add(16)         g7<1>D          g5<1,1,0>D      g41<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x0180UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g41<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0180UW        { align1 1H A@1 };
mov(16)         g8<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 };
else(16)        JIP:  LABEL4          UIP:  LABEL4              { align1 1H };

LABEL5:
mov(16)         g7<1>UD         0x00000000UD                    { align1 1H I@3 compacted };
mov(16)         g8<1>UD         0x00000000UD                    { align1 1H I@3 compacted };

LABEL4:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
mov(16)         g42<1>Q         0x000000000000082cQ             { align1 1H };
shl(16)         g46<1>D         g7<8,8,1>D      0x00000002UD    { align1 1H I@4 };
mov(16)         g60<1>Q         0x0000000000002c2cQ             { align1 1H };
add(16)         g70<1>Q         g1.5<0,1,0>Q    g16<1,1,0>Q     { align1 1H compacted };
shl(16)         g85<1>D         g8<8,8,1>D      0x00000009UD    { align1 1H I@6 };
mov(16)         g89<1>Q         0x0000000000000010Q             { align1 1H };
and(16)         g91<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H };
mov(16)         g99<1>Q         0x0000000000000020Q             { align1 1H };
and(1)          g109<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
add(16)         g44<1>Q         g42<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@7 compacted };
mov(16)         g95<2>UD        g46<1,1,0>UD                    { align1 1H I@7 compacted };
add(16)         g62<1>Q         g1.4<0,1,0>Q    g60<1,1,0>Q     { align1 1H I@7 compacted };
shl(16)         g92<1>D         g91<8,8,1>D     0x00000004UD    { align1 1H I@6 };
mov(8)          g94<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g112<1>UD       g109<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g113<1>UW       0x76543210V                     { align1 WE_all 1Q };
mov(16)         g47<1>UQ        g95<8,4,2>UD                    { align1 1H I@6 };
add(8)          g94.8<1>UW      g94<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
add(8)          g113.8<1>UW     g113<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@3 };
add(16)         g49<1>Q         g44<1,1,0>Q     g47<1,1,0>Q     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g93<1>UD        g94<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g114<1>UD       g113<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g51UD           g49UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
add(16)         g95<1>D         g93<1,1,0>D     g92<1,1,0>D     { align1 1H I@2 compacted };
and(16)         g15<1>UD        g95<8,8,1>UD    0x000001ffUD    { align1 1H I@1 };
mov(16)         g103<2>UD       g15<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g96<1>UQ        g103<8,4,2>UD                   { align1 1H I@1 };
mov(16)         g52<1>UD        g51<16,8,2>UW                   { align1 1H $3.dst };
mov(16)         g64<1>UD        g51.1<16,8,2>UW                 { align1 1H };
asr(16)         g53<1>D         g52<8,8,1>D     0x0000001fUD    { align1 1H I@2 };
mul(16)         acc0<1>UD       g52<8,8,1>UD    0x0058UW        { align1 1H };
mul(16)         g55<1>D         g52<1,1,0>D     88W             { align1 1H compacted };
mul(16)         g65<1>D         g64<1,1,0>D     1484W           { align1 1H I@4 compacted };
mul(16)         g56<1>D         g53<1,1,0>D     88W             { align1 1H I@4 compacted };
mach(16)        g54<1>UD        g52<8,8,1>UD    0x00000058UD    { align1 1H };
mov(16)         g58<2>UD        g55<1,1,0>UD                    { align1 1H I@4 compacted };
mov(16)         g101<2>UD       g65<1,1,0>UD                    { align1 1H I@4 compacted };
add(16)         g57<1>D         g54<1,1,0>D     g56<1,1,0>D     { align1 1H I@3 compacted };
mov(16)         g66<1>UQ        g101<8,4,2>UD                   { align1 1H I@2 };
mov(16)         g58.1<2>UD      g57<1,1,0>UD                    { align1 1H I@2 compacted };
add(16)         g68<1>Q         g62<1,1,0>Q     g66<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g72<1>Q         g70<1,1,0>Q     g58<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g82UD           g68UD           nullUD          0x04302580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V3, L1STATE_L3MOCS dst_len = 3, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g74UD           g72UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add(16)         g86<1>D         g82<1,1,0>D     g85<1,1,0>D     { align1 1H $4.dst compacted };
mov(16)         g105<2>UD       g84<1,1,0>UD                    { align1 1H $4.dst compacted };
mov(16)         g78<2>UD        g74<1,1,0>UD                    { align1 1H $5.dst compacted };
mov(16)         g80<2>UD        g76<1,1,0>UD                    { align1 1H $5.dst compacted };
add(16)         g87<1>D         g86<8,8,1>D     512D            { align1 1H I@4 };
add(16)         g98<1>D         g86<1,1,0>D     g15<1,1,0>D     { align1 1H compacted };
mov(16)         g102<1>UQ       g105<8,4,2>UD                   { align1 1H I@5 };
mov(16)         g78.1<2>UD      g75<1,1,0>UD                    { align1 1H @5 $5.dst compacted };
mov(16)         g80.1<2>UD      g77<1,1,0>UD                    { align1 1H @5 $5.dst compacted };
sel.l(16)       g88<1>UD        g87<1,1,0>UD    g83<1,1,0>UD    { align1 1H @5 $4.dst compacted };
shl(16)         g104<1>Q        g102<4,4,1>Q    0x00000005UD    { align1 1H I@4 };
add(16)         g101<1>Q        g80<1,1,0>Q     g99<1,1,0>Q     { align1 1H I@3 compacted };
add(16)         g106<1>Q        g101<1,1,0>Q    g104<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g108UD          g106UD          nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
or(1)           a0.1<1>UD       g112<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g114UD          g108UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
and(1)          g115<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g116<1>UD       g115<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g117<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g117.8<1>UW     g117<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g118<1>UD       g117<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g119<1>UD       g118<8,8,1>UD   0x00000040UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g116<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g119UD          g109UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
and(1)          g120<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g121<1>UD       g120<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g122<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g122.8<1>UW     g122<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g123<1>UD       g122<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g124<1>UD       g123<8,8,1>UD   0x00000080UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g121<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g124UD          g110UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
and(1)          g125<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g126<1>UD       g125<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g127<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g127.8<1>UW     g127<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g1<1>UD         g127<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g2<1>UD         g1<8,8,1>UD     0x000000c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g126<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g2UD            g111UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
add(16)         g3<1>Q          g89<1,1,0>Q     g106<1,1,0>Q    { align1 1H $6.src compacted };
and(1)          g7<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g5UD            g3UD            nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
shr(1)          g8<1>UD         g7<0,1,0>UD     0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g9<1>UW         0x76543210V                     { align1 WE_all 1Q };
add(8)          g9.8<1>UW       g9<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g10<1>UD        g9<8,8,1>UW     0x00000002UD    { align1 1H };
or(16)          g11<1>UD        g10<8,8,1>UD    0x00000100UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g8<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g11UD           g5UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
and(1)          g12<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g13<1>UD        g12<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g14<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g14.8<1>UW      g14<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g16<1>UD        g14<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g17<1>UD        g16<8,8,1>UD    0x00000140UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g13<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g17UD           g6UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
and(1)          g18<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g23<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g29<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g35<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g19<1>UD        g18<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g20<1>UW        0x76543210V                     { align1 WE_all 1Q $1.src };
shr(1)          g24<1>UD        g23<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g25<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g30<1>UD        g29<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g31<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g36<1>UD        g35<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g37<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g20.8<1>UW      g20<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g25.8<1>UW      g25<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g31.8<1>UW      g31<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g37.8<1>UW      g37<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g21<1>UD        g20<8,8,1>UW    0x00000002UD    { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g26<1>UD        g25<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g32<1>UD        g31<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g38<1>UD        g37<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g19<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g22UD           g21UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
or(16)          g27<1>UD        g26<8,8,1>UD    0x00000040UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(16)          g33<1>UD        g32<8,8,1>UD    0x00000080UD    { align1 1H };
or(16)          g39<1>UD        g38<8,8,1>UD    0x000000c0UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g24<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g28UD           g27UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g30<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g34UD           g33UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g36<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g40UD           g39UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g42<1>F         g5<1,1,0>F      -g28<1,1,0>F    { align1 1H $15.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g43<1>F         g6<1,1,0>F      -g34<1,1,0>F    { align1 1H $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
add(16)         g41<1>F         g40<1,1,0>F     -g22<1,1,0>F    { align1 1H $1.dst compacted };
sel.ge(16)      g45<1>F         g42<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sel.ge(16)      g46<1>F         g43<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sel.ge(16)      g44<1>F         g41<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
math inv(16)    g49<1>F         g45<8,8,1>F     null<8,8,1>F    { align1 1H F@3 };
math inv(16)    g51<1>F         g46<8,8,1>F     null<8,8,1>F    { align1 1H F@2 };
math inv(16)    g47<1>F         g44<8,8,1>F     null<8,8,1>F    { align1 1H F@1 };
cmp.l.f0.0(16)  g53<1>F         g44<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H };
cmp.g.f0.0(16)  g54<1>F         g41<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mul(16)         g50<1>F         g49<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H M@3 };
mul(16)         g52<1>F         g51<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H M@2 };
mul(16)         g48<1>F         g47<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H M@1 };
and.nz.f0.0(16) null<1>UD       g53<8,8,1>UD    g54<8,8,1>UD    { align1 1H F@4 };
(+f0.0) sel(16) g55<1>UD        g48<8,8,1>UD    0x00000000UD    { align1 1H F@1 };
cmp.g.f0.0(16)  g56<1>F         g42<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g57<1>F         g45<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H };
and.nz.f0.0(16) null<1>UD       g57<8,8,1>UD    g56<8,8,1>UD    { align1 1H F@1 };
(+f0.0) sel(16) g58<1>UD        g50<8,8,1>UD    0x00000000UD    { align1 1H F@5 };
cmp.g.f0.0(16)  g59<1>F         g43<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g60<1>F         g46<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H };
and.nz.f0.0(16) null<1>UD       g60<8,8,1>UD    g59<8,8,1>UD    { align1 1H F@1 };
(+f0.0) sel(16) g61<1>UD        g52<8,8,1>UD    0x00000000UD    { align1 1H F@6 };
cmp.l.f0.0(16)  g62<1>UD        g98<1,1,0>UD    g88<1,1,0>UD    { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
mov(16)         g106<2>UD       g98<1,1,0>UD                    { align1 1H compacted };
mov(16)         g63<1>UQ        g106<8,4,2>UD                   { align1 1H I@1 };
shl(16)         g65<1>Q         g63<4,4,1>Q     0x00000005UD    { align1 1H I@1 };
add(16)         g70<1>Q         g78<1,1,0>Q     g65<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g72UD           g70UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add(16)         g76<1>Q         g70<1,1,0>Q     g89<1,1,0>Q     { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g78UD           g76UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
shl(16)         g82<1>Q         g96<4,4,1>Q     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g107<2>UD       g82<4,4,1>UQ                    { align1 1H I@1 };
mov(16)         g10<1>UD        g107<8,4,2>UD                   { align1 1H I@1 };
mov(16)         g9<1>UD         g107<8,4,2>UD                   { align1 1H };

LABEL10:
cmp.ge.f0.0(16) null<1>UD       g9<8,8,1>UD     0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
shl(16)         g83<1>D         g9<8,8,1>D      0x00000002UD    { align1 1H $3.src };
mov(16)         g84<1>UD        0x7f800000UD                    { align1 1H $3.src };
mov(16)         g85<1>UD        0x7f800000UD                    { align1 1H $3.src };
mov(16)         g86<1>UD        0x7f800000UD                    { align1 1H $3.src };
mov(16)         g87<1>UD        0x7f800000UD                    { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g83UD           g84UD           0x02003504                0x00000100
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 4 flat )  base_offset 0  { align1 1H $3 };
add(16)         g9<1>D          g9<8,8,1>D      2048D           { align1 1H };

LABEL9:
while(16)       JIP:  LABEL10                                   { align1 1H };
nop                                                             ;

LABEL12:
cmp.ge.f0.0(16) null<1>UD       g10<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
shl(16)         g84<1>D         g10<8,8,1>D     0x00000002UD    { align1 1H $3.src };
mov(16)         g86<1>UD        0x00000000UD                    { align1 1H $3.src compacted };
mov(16)         g87<1>UD        0x00000000UD                    { align1 1H $3.src compacted };
mov(16)         g88<1>UD        0x00000000UD                    { align1 1H $3.src compacted };
mov(16)         g89<1>UD        0x00000000UD                    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g85<1>D         g84<8,8,1>D     1152D           { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g85UD           g86UD           0x02003504                0x00000100
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 4 flat )  base_offset 0  { align1 1H $3 };
add(16)         g10<1>D         g10<8,8,1>D     2048D           { align1 1H };

LABEL11:
while(16)       JIP:  LABEL12                                   { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
send(1)         g86UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
mov(8)          g87<1>UD        0x00000000UD                    { align1 WE_all 1Q $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(2)          g87.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g87.2<1>UD      g87.2<0,1,0>UD  0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g87UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $3 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g88<1>F         g72<1,1,0>F     g78<1,1,0>F     { align1 1H $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g89<1>F         g73<1,1,0>F     g79<1,1,0>F     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g90<1>F         g74<1,1,0>F     g80<1,1,0>F     { align1 1H I@7 compacted };
add(16)         g91<1>F         g88<1,1,0>F     -g22<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g92<1>F         g89<1,1,0>F     -g28<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g94<1>F         g90<1,1,0>F     -g34<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g95<1>F         g91<1,1,0>F     g55<1,1,0>F     { align1 1H F@3 compacted };
mul(16)         g96<1>F         g92<1,1,0>F     g58<1,1,0>F     { align1 1H A@3 compacted };
mul(16)         g97<1>F         g94<1,1,0>F     g61<1,1,0>F     { align1 1H A@3 compacted };
mov(16)         g98<1>UD        g95<8,8,1>F                     { align1 1H F@3 };
mov(16)         g99<1>UD        g96<8,8,1>F                     { align1 1H F@2 };
mov(16)         g100<1>UD       g97<8,8,1>F                     { align1 1H F@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g62<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g11<1>UD        f0<0,1,0>UW                     { align1 1H $12.src };
and(16)         g101<1>UD       g93<8,8,1>UD    0x00000003UD    { align1 1H };
shr(16)         g102<1>UD       g93<8,8,1>UD    0x00000002UD    { align1 1H };
mov(1)          g92<1>D         1D                              { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g103<1>D        g92<0,1,0>D     g93<8,8,1>UD    { align1 1H };

LABEL15:
cmp.z.f0.0(16)  null<1>D        g11<8,8,1>D     0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL13       UIP:  LABEL13             { align1 1H };
fbl(16)         g104<1>UD       g11<1,1,0>UD                    { align1 1H compacted };
mov(16)         a0<1>UW         0x1880UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g104<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x1880UW        { align1 1H A@1 };
mov(16)         g105<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 };
cmp.z.f0.0(16)  g106<1>D        g105<1,1,0>D    g98<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g106<8,8,1>UD   g62<8,8,1>UD    { align1 1H I@1 };
(+f0.0) sel(16) g107<1>UD       g78<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g108<1>UD       g79<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
(+f0.0) sel(16) g109<1>UD       g80<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
(+f0.0) sel(16) g110<1>UD       g72<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
(+f0.0) sel(16) g111<1>UD       g73<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g112<1>UD       g74<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g116<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g116<1>F        g107<1,1,0>F                    { align1 1H compacted };
mov(16)         g117<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g117<1>F        g108<1,1,0>F                    { align1 1H compacted };
mov(16)         g118<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g118<1>F        g109<1,1,0>F                    { align1 1H compacted };
mov(16)         g113<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g113<1>F        g110<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g114<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g114<1>F        g111<1,1,0>F                    { align1 1H compacted };
mov(16)         g115<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g115<1>F        g112<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g101<8,8,1>D    1D              { align1 1H };
mov(8)          g19<2>UD        g116.1<8,4,2>UD                 { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g27<2>UD        g117.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
mov(8)          g35<2>UD        g118.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
mov(8)          g120<2>UD       g113.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(8)          g1<2>UD         g114.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(8)          g9<2>UD         g115.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g18<2>F         g116<8,4,2>F    g19<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.ge(8)       g26<2>F         g117<8,4,2>F    g27<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g34<2>F         g118<8,4,2>F    g35<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(8)        g119<2>F        g113<8,4,2>F    g120<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.l(8)        g127<2>F        g114<8,4,2>F    g1<8,4,2>F      { align1 WE_all 1Q I@2 };
sel.l(8)        g8<2>F          g115<8,4,2>F    g9<8,4,2>F      { align1 WE_all 1Q I@1 };
mov(8)          g116.1<2>UD     g18<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g117.1<2>UD     g26<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g118.1<2>UD     g34<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g113.1<2>UD     g119<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g114.1<2>UD     g127<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g115.1<2>UD     g8<8,4,2>UD                     { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g21<4>UD        g116.1<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g22<4>UD        g116.2<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g29<4>UD        g117.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g30<4>UD        g117.2<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g37<4>UD        g118.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g38<4>UD        g118.2<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g122<4>UD       g113.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g123<4>UD       g113.2<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g3<4>UD         g114.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g4<4>UD         g114.2<8,2,4>UD                 { align1 WE_all 1N $11.src };
mov(4)          g12<4>UD        g115.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g13<4>UD        g115.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g20<4>F         g21<8,2,4>F     g22<8,2,4>F     { align1 WE_all 1N $1.src };
sel.ge(4)       g28<4>F         g29<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g36<4>F         g37<8,2,4>F     g38<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g121<4>F        g122<8,2,4>F    g123<8,2,4>F    { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.l(4)        g2<4>F          g3<8,2,4>F      g4<8,2,4>F      { align1 WE_all 1N I@3 };
sel.l(4)        g10<4>F         g12<8,2,4>F     g13<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g116.2<4>UD     g20<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g117.2<4>UD     g28<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g118.2<4>UD     g36<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g113.2<4>UD     g121<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g114.2<4>UD     g2<8,2,4>UD                     { align1 WE_all 1N F@2 };
mov(4)          g115.2<4>UD     g10<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g24<4>UD        g116.1<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g25<4>UD        g116.3<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g32<4>UD        g117.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g33<4>UD        g117.3<8,2,4>UD                 { align1 WE_all 1N $0.src };
mov(4)          g40<4>UD        g118.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g41<4>UD        g118.3<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g125<4>UD       g113.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g126<4>UD       g113.3<8,2,4>UD                 { align1 WE_all 1N $3.src };
mov(4)          g6<4>UD         g114.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g7<4>UD         g114.3<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g16<4>UD        g115.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g17<4>UD        g115.3<8,2,4>UD                 { align1 WE_all 1N $13.src };
sel.ge(4)       g23<4>F         g24<8,2,4>F     g25<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g31<4>F         g32<8,2,4>F     g33<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(4)       g39<4>F         g40<8,2,4>F     g41<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g124<4>F        g125<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N I@5 };
sel.l(4)        g5<4>F          g6<8,2,4>F      g7<8,2,4>F      { align1 WE_all 1N I@3 };
sel.l(4)        g14<4>F         g16<8,2,4>F     g17<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g116.3<4>UD     g23<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g117.3<4>UD     g31<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g118.3<4>UD     g39<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g113.3<4>UD     g124<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g114.3<4>UD     g5<8,2,4>UD                     { align1 WE_all 1N F@2 };
mov(4)          g115.3<4>UD     g14<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g116.4<1>F      g116.3<0,1,0>F  g116.4<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g116.12<1>F     g116.11<0,1,0>F g116.12<4,4,1>F { align1 WE_all 1N I@6 };
sel.ge(4)       g117.4<1>F      g117.3<0,1,0>F  g117.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g117.12<1>F     g117.11<0,1,0>F g117.12<4,4,1>F { align1 WE_all 1N I@5 };
sel.ge(4)       g118.4<1>F      g118.3<0,1,0>F  g118.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g118.12<1>F     g118.11<0,1,0>F g118.12<4,4,1>F { align1 WE_all 1N I@4 };
sel.l(4)        g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g113.12<1>F     g113.11<0,1,0>F g113.12<4,4,1>F { align1 WE_all 1N I@3 };
sel.l(4)        g114.4<1>F      g114.3<0,1,0>F  g114.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g114.12<1>F     g114.11<0,1,0>F g114.12<4,4,1>F { align1 WE_all 1N I@2 };
sel.l(4)        g115.4<1>F      g115.3<0,1,0>F  g115.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g115.12<1>F     g115.11<0,1,0>F g115.12<4,4,1>F { align1 WE_all 1N I@1 };
sel.ge(8)       g116.8<1>F      g116.7<0,1,0>F  g116.8<8,8,1>F  { align1 WE_all 1Q };
sel.ge(8)       g117.8<1>F      g117.7<0,1,0>F  g117.8<8,8,1>F  { align1 WE_all 1Q F@7 };
sel.ge(8)       g118.8<1>F      g118.7<0,1,0>F  g118.8<8,8,1>F  { align1 WE_all 1Q F@7 };
sel.l(8)        g113.8<1>F      g113.7<0,1,0>F  g113.8<8,8,1>F  { align1 WE_all 1Q F@7 };
sel.l(8)        g114.8<1>F      g114.7<0,1,0>F  g114.8<8,8,1>F  { align1 WE_all 1Q F@7 };
sel.l(8)        g115.8<1>F      g115.7<0,1,0>F  g115.8<8,8,1>F  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g120<1>UD       g117.15<0,1,0>UD g116.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g119<1>UD       g114.15<0,1,0>UD g113.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g101<8,8,1>D    2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g121<1>UD       g115.15<0,1,0>UD g119<8,8,1>UD  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g122<1>UD       g118.15<0,1,0>UD g120<8,8,1>UD  { align1 1H };
cmp.z.f0.0(16)  null<1>D        g102<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g87<1>F         g121<1,1,0>F    -g122<1,1,0>F   { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g103<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
mul(16)         g123<1>D        g105<1,1,0>D    6W              { align1 1H compacted };
mul(16)         g124<1>D        g102<1,1,0>D    3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g125<1>D        g123<8,8,1>D    g101<8,8,1>D    g124<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g126<1>D        g125<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g126UD          g87UD           0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $3 };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
or(16)          g127<1>D        ~g106<1,1,0>D   ~g62<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g127<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov(16)         g1<1>UD         f0<0,1,0>UW                     { align1 1H };
and(16)         g11<1>UD        g11<1,1,0>UD    g1<1,1,0>UD     { align1 1H I@1 compacted };

LABEL13:
while(16)       JIP:  LABEL15                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g2<1>D          g99<8,8,1>D     16D             { align1 1H I@7 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g62<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g12<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL18:
cmp.z.f0.0(16)  null<1>D        g12<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL16       UIP:  LABEL16             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
fbl(16)         g3<1>UD         g12<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0080UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g3<16,8,2>W     0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0080UW        { align1 1H A@1 };
mov(16)         g4<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g5<1>D          g4<1,1,0>D      g2<1,1,0>D      { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g5<8,8,1>UD     g62<8,8,1>UD    { align1 1H I@1 };
(+f0.0) sel(16) g6<1>UD         g78<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g7<1>UD         g79<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g8<1>UD         g80<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g9<1>UD         g72<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g10<1>UD        g73<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g11<1>UD        g74<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g17<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@6 compacted };
mov(16)         g17<1>F         g6<1,1,0>F                      { align1 1H compacted };
mov(16)         g18<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g18<1>F         g7<1,1,0>F                      { align1 1H compacted };
mov(16)         g19<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g19<1>F         g8<1,1,0>F                      { align1 1H compacted };
mov(16)         g13<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g13<1>F         g9<1,1,0>F                      { align1 1H compacted };
mov(16)         g14<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g14<1>F         g10<1,1,0>F                     { align1 1H compacted };
mov(16)         g16<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g16<1>F         g11<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g101<8,8,1>D    1D              { align1 1H };
mov(8)          g70<2>UD        g17.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g86<2>UD        g18.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g94<2>UD        g19.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g43<2>UD        g13.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g51<2>UD        g14.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g59<2>UD        g16.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g67<2>F         g17<8,4,2>F     g70<8,4,2>F     { align1 WE_all 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(8)       g85<2>F         g18<8,4,2>F     g86<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g93<2>F         g19<8,4,2>F     g94<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g42<2>F         g13<8,4,2>F     g43<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g50<2>F         g14<8,4,2>F     g51<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.l(8)        g58<2>F         g16<8,4,2>F     g59<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g17.1<2>UD      g67<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g18.1<2>UD      g85<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g19.1<2>UD      g93<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g13.1<2>UD      g42<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g14.1<2>UD      g50<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g16.1<2>UD      g58<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g76<4>UD        g17.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g77<4>UD        g17.2<8,2,4>UD                  { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g88<4>UD        g18.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g89<4>UD        g18.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g96<4>UD        g19.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g97<4>UD        g19.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g45<4>UD        g13.1<8,2,4>UD                  { align1 WE_all 1N A@3 };
mov(4)          g46<4>UD        g13.2<8,2,4>UD                  { align1 WE_all 1N M@2 };
mov(4)          g53<4>UD        g14.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g54<4>UD        g14.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g61<4>UD        g16.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g63<4>UD        g16.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g71<4>F         g76<8,2,4>F     g77<8,2,4>F     { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(4)       g87<4>F         g88<8,2,4>F     g89<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g95<4>F         g96<8,2,4>F     g97<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g44<4>F         g45<8,2,4>F     g46<8,2,4>F     { align1 WE_all 1N A@1 };
sel.l(4)        g52<4>F         g53<8,2,4>F     g54<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g60<4>F         g61<8,2,4>F     g63<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g17.2<4>UD      g71<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g18.2<4>UD      g87<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g19.2<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g13.2<4>UD      g44<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g14.2<4>UD      g52<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g16.2<4>UD      g60<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g83<4>UD        g17.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g84<4>UD        g17.3<8,2,4>UD                  { align1 WE_all 1N $3.src };
mov(4)          g91<4>UD        g18.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g92<4>UD        g18.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g105<4>UD       g19.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g106<4>UD       g19.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g48<4>UD        g13.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g49<4>UD        g13.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g56<4>UD        g14.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g57<4>UD        g14.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g65<4>UD        g16.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g66<4>UD        g16.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g82<4>F         g83<8,2,4>F     g84<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g90<4>F         g91<8,2,4>F     g92<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g104<4>F        g105<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g47<4>F         g48<8,2,4>F     g49<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g55<4>F         g56<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g64<4>F         g65<8,2,4>F     g66<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g17.3<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g18.3<4>UD      g90<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g19.3<4>UD      g104<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g13.3<4>UD      g47<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g14.3<4>UD      g55<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g16.3<4>UD      g64<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g17.4<1>F       g17.3<0,1,0>F   g17.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g17.12<1>F      g17.11<0,1,0>F  g17.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g18.4<1>F       g18.3<0,1,0>F   g18.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g18.12<1>F      g18.11<0,1,0>F  g18.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g19.4<1>F       g19.3<0,1,0>F   g19.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g19.12<1>F      g19.11<0,1,0>F  g19.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g13.4<1>F       g13.3<0,1,0>F   g13.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g13.12<1>F      g13.11<0,1,0>F  g13.12<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g14.4<1>F       g14.3<0,1,0>F   g14.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g14.12<1>F      g14.11<0,1,0>F  g14.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g16.4<1>F       g16.3<0,1,0>F   g16.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g16.12<1>F      g16.11<0,1,0>F  g16.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g17.8<1>F       g17.7<0,1,0>F   g17.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g18.8<1>F       g18.7<0,1,0>F   g18.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g19.8<1>F       g19.7<0,1,0>F   g19.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g13.8<1>F       g13.7<0,1,0>F   g13.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g14.8<1>F       g14.7<0,1,0>F   g14.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g16.8<1>F       g16.7<0,1,0>F   g16.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g21<1>UD        g18.15<0,1,0>UD g17.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g20<1>UD        g14.15<0,1,0>UD g13.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g101<8,8,1>D    2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g22<1>UD        g16.15<0,1,0>UD g20<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g23<1>UD        g19.15<0,1,0>UD g21<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g102<8,8,1>D    0D              { align1 1H };
(+f0.0) sel(16) g88<1>F         g22<1,1,0>F     -g23<1,1,0>F    { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g103<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
mul(16)         g24<1>D         g4<1,1,0>D      6W              { align1 1H compacted };
mul(16)         g25<1>D         g102<1,1,0>D    3W              { align1 1H compacted };
add3(16)        g26<1>D         g24<8,8,1>D     g101<8,8,1>D    g25<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g27<1>D         g26<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g27UD           g88UD           0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $15 };

LABEL17:
endif(16)       JIP:  LABEL16                                   { align1 1H };
or(16)          g28<1>D         ~g5<1,1,0>D     ~g62<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g28<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g29<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g12<1>UD        g12<1,1,0>UD    g29<1,1,0>UD    { align1 1H I@1 compacted };

LABEL16:
while(16)       JIP:  LABEL18                                   { align1 1H };
add(16)         g30<1>D         g100<8,8,1>D    32D             { align1 1H };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g62<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
mov(16)         g13<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL21:
cmp.z.f0.0(16)  null<1>D        g13<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL19       UIP:  LABEL19             { align1 1H };
fbl(16)         g31<1>UD        g13<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0780UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g31<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0780UW        { align1 1H A@1 };
mov(16)         g32<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g33<1>D         g32<1,1,0>D     g30<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g33<8,8,1>UD    g62<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g34<1>UD        g78<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g35<1>UD        g79<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g36<1>UD        g80<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g37<1>UD        g72<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g38<1>UD        g73<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g39<1>UD        g74<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g43<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@6 compacted };
mov(16)         g43<1>F         g34<1,1,0>F                     { align1 1H compacted };
mov(16)         g44<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@1 compacted };
mov(16)         g44<1>F         g35<1,1,0>F                     { align1 1H compacted };
mov(16)         g45<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g45<1>F         g36<1,1,0>F                     { align1 1H compacted };
mov(16)         g40<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g40<1>F         g37<1,1,0>F                     { align1 1H compacted };
mov(16)         g41<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g41<1>F         g38<1,1,0>F                     { align1 1H compacted };
mov(16)         g42<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g42<1>F         g39<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g101<8,8,1>D    1D              { align1 1H };
mov(8)          g5<2>UD         g43.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g14<2>UD        g44.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g23<2>UD        g45.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g108<2>UD       g40.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g116<2>UD       g41.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g124<2>UD       g42.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(8)       g4<2>F          g43<8,4,2>F     g5<8,4,2>F      { align1 WE_all 1Q I@6 };
sel.ge(8)       g12<2>F         g44<8,4,2>F     g14<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g22<2>F         g45<8,4,2>F     g23<8,4,2>F     { align1 WE_all 1Q A@4 };
sel.l(8)        g107<2>F        g40<8,4,2>F     g108<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.l(8)        g115<2>F        g41<8,4,2>F     g116<8,4,2>F    { align1 WE_all 1Q I@2 };
sel.l(8)        g123<2>F        g42<8,4,2>F     g124<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g43.1<2>UD      g4<8,4,2>UD                     { align1 WE_all 1Q A@6 };
mov(8)          g44.1<2>UD      g12<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g45.1<2>UD      g22<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g40.1<2>UD      g107<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g41.1<2>UD      g115<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g42.1<2>UD      g123<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g7<4>UD         g43.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g8<4>UD         g43.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g17<4>UD        g44.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g18<4>UD        g44.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g25<4>UD        g45.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g26<4>UD        g45.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(4)          g110<4>UD       g40.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g111<4>UD       g40.2<8,2,4>UD                  { align1 WE_all 1N $10.src };
mov(4)          g118<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g119<4>UD       g41.2<8,2,4>UD                  { align1 WE_all 1N $8.src };
mov(4)          g126<4>UD       g42.1<8,2,4>UD                  { align1 WE_all 1N $3.src };
mov(4)          g127<4>UD       g42.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g6<4>F          g7<8,2,4>F      g8<8,2,4>F      { align1 WE_all 1N };
sel.ge(4)       g16<4>F         g17<8,2,4>F     g18<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g24<4>F         g25<8,2,4>F     g26<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g109<4>F        g110<8,2,4>F    g111<8,2,4>F    { align1 WE_all 1N I@5 };
sel.l(4)        g117<4>F        g118<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@3 };
sel.l(4)        g125<4>F        g126<8,2,4>F    g127<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g43.2<4>UD      g6<8,2,4>UD                     { align1 WE_all 1N F@6 };
mov(4)          g44.2<4>UD      g16<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g45.2<4>UD      g24<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g40.2<4>UD      g109<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g41.2<4>UD      g117<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g42.2<4>UD      g125<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g10<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g11<4>UD        g43.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g20<4>UD        g44.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g21<4>UD        g44.3<8,2,4>UD                  { align1 WE_all 1N $14.src };
mov(4)          g28<4>UD        g45.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g29<4>UD        g45.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g113<4>UD       g40.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g114<4>UD       g40.3<8,2,4>UD                  { align1 WE_all 1N $7.src };
mov(4)          g121<4>UD       g41.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g122<4>UD       g41.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g2<4>UD         g42.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g3<4>UD         g42.3<8,2,4>UD                  { align1 WE_all 1N $11.src };
sel.ge(4)       g9<4>F          g10<8,2,4>F     g11<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g19<4>F         g20<8,2,4>F     g21<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(4)       g27<4>F         g28<8,2,4>F     g29<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g112<4>F        g113<8,2,4>F    g114<8,2,4>F    { align1 WE_all 1N I@5 };
sel.l(4)        g120<4>F        g121<8,2,4>F    g122<8,2,4>F    { align1 WE_all 1N I@3 };
sel.l(4)        g1<4>F          g2<8,2,4>F      g3<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g43.3<4>UD      g9<8,2,4>UD                     { align1 WE_all 1N F@6 };
mov(4)          g44.3<4>UD      g19<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g45.3<4>UD      g27<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g40.3<4>UD      g112<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g41.3<4>UD      g120<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g42.3<4>UD      g1<8,2,4>UD                     { align1 WE_all 1N F@1 };
sel.ge(4)       g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g43.12<1>F      g43.11<0,1,0>F  g43.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g44.12<1>F      g44.11<0,1,0>F  g44.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g45.4<1>F       g45.3<0,1,0>F   g45.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g45.12<1>F      g45.11<0,1,0>F  g45.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g40.4<1>F       g40.3<0,1,0>F   g40.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g40.12<1>F      g40.11<0,1,0>F  g40.12<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g41.4<1>F       g41.3<0,1,0>F   g41.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g41.12<1>F      g41.11<0,1,0>F  g41.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g42.12<1>F      g42.11<0,1,0>F  g42.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g43.8<1>F       g43.7<0,1,0>F   g43.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g44.8<1>F       g44.7<0,1,0>F   g44.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g45.8<1>F       g45.7<0,1,0>F   g45.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g40.8<1>F       g40.7<0,1,0>F   g40.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g41.8<1>F       g41.7<0,1,0>F   g41.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g42.8<1>F       g42.7<0,1,0>F   g42.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g47<1>UD        g44.15<0,1,0>UD g43.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g46<1>UD        g41.15<0,1,0>UD g40.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g101<8,8,1>D    2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g48<1>UD        g42.15<0,1,0>UD g46<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g49<1>UD        g45.15<0,1,0>UD g47<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g102<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g89<1>F         g48<1,1,0>F     -g49<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g103<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL20         UIP:  LABEL20             { align1 1H };
mul(16)         g50<1>D         g32<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g51<1>D         g102<1,1,0>D    3W              { align1 1H compacted };
add3(16)        g52<1>D         g50<8,8,1>D     g101<8,8,1>D    g51<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g53<1>D         g52<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g53UD           g89UD           0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $5 };

LABEL20:
endif(16)       JIP:  LABEL19                                   { align1 1H };
or(16)          g54<1>D         ~g33<1,1,0>D    ~g62<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g54<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g55<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g13<1>UD        g13<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@1 compacted };

LABEL19:
while(16)       JIP:  LABEL21                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g62<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL22         UIP:  LABEL22             { align1 1H };
shl(16)         g56<1>D         g98<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g57<1>D         g56<8,8,1>D     1152D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g57UD           nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
shl(16)         g58<1>D         g99<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g59<1>D         g58<8,8,1>D     1216D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g59UD           nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
shl(16)         g60<1>D         g100<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g61<1>D         g60<8,8,1>D     1280D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g61UD           nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };

LABEL22:
endif(16)       JIP:  LABEL23                                   { align1 1H };

LABEL23:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g62UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mov(8)          g63<1>UD        0x00000000UD                    { align1 WE_all 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(2)          g63.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g63.2<1>UD      g63.2<0,1,0>UD  0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g63UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $10 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
mov(16)         g64<1>Q         0x000000000000002cQ             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
mov(16)         g14<1>UD        g15<1,1,0>UD                    { align1 1H compacted };

LABEL26:
cmp.ge.f0.0(16) null<1>UD       g14<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL24       UIP:  LABEL24             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g66<1>D         g14<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g90UD           g66UD           nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g30<2>UD        g66<1,1,0>UD                    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g70<1>UQ        g30<8,4,2>UD                    { align1 1H };
cmp.nz.f0.0(16) null<1>F        g90<1,1,0>F     0x7f800000F  /* infF */ { align1 1H $11.dst compacted };
(+f0.0) if(16)  JIP:  LABEL25         UIP:  LABEL25             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g72<1>Q         g68<1,1,0>Q     g64<1,1,0>Q     { align1 1H A@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
add(16)         g74<1>Q         g72<1,1,0>Q     g70<1,1,0>Q     { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g74UD           g90UD           0x04040595                0x00000040
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $5 };

LABEL25:
endif(16)       JIP:  LABEL24                                   { align1 1H };
add(16)         g14<1>D         g14<8,8,1>D     512D            { align1 1H };

LABEL24:
while(16)       JIP:  LABEL26                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g75<1>Q         0x00000000000004acQ             { align1 1H $5.dst };

LABEL29:
cmp.ge.f0.0(16) null<1>UD       g15<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL27       UIP:  LABEL27             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g77<1>D         g15<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g79<1>D         g77<8,8,1>D     1152D           { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g31<2>UD        g77<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(16)        g91UD           g79UD           nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g78<1>UQ        g31<8,4,2>UD                    { align1 1H A@1 };
cmp.nz.f0.0(16) null<1>D        g91<8,8,1>D     0D              { align1 1H $12.dst };
(+f0.0) if(16)  JIP:  LABEL28         UIP:  LABEL28             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g80<1>Q         g68<1,1,0>Q     g75<1,1,0>Q     { align1 1H A@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g82<1>Q         g80<1,1,0>Q     g78<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g82UD           g91UD           0x0404058c                0x00000040
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $3 };

LABEL28:
endif(16)       JIP:  LABEL27                                   { align1 1H };
add(16)         g15<1>D         g15<8,8,1>D     512D            { align1 1H };

LABEL27:
while(16)       JIP:  LABEL29                                   { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H $3.src compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_code[] = {
    0x80000065, 0x22058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x10054770, 0x00000000, 0x00000008,
    0x00100061, 0x12054770, 0x00000000, 0x00000428,
    0x00100061, 0x17054770, 0x00000000, 0x0000042c,
    0x64800061, 0x00000005, 0x2c800061, 0x00110002,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x010c0000, 0xfa00220c, 0x00340000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38801c40, 0x12030114, 0x38801c40, 0x17030119,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x160c0000, 0xfb001414, 0x00000000,
    0x00101c69, 0x1b058660, 0x02460505, 0x00000002,
    0xb4001961, 0x00101b5d, 0x00101961, 0x1c050230,
    0x00445d06, 0x00000000, 0x38001940, 0x1c00191e,
    0xec840961, 0x00104021, 0x80000965, 0x21058220,
    0x02002104, 0xffffffff, 0x2c84194c, 0x00102120,
    0x800c0061, 0x25054410, 0x00000000, 0x76543210,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001a69, 0x10018220, 0x02002004, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x21050330, 0x00010300, 0x00000000,
    0x800c1a40, 0x25458110, 0x01462505, 0x00080008,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x53050770, 0x00002104, 0x00000000,
    0x80101a40, 0x24058150, 0x05582505, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c231, 0x1f0c0000, 0xfb00530c, 0x00340000,
    0x80108261, 0x23054660, 0x00000000, 0x00000000,
    0x7c000061, 0x00101f23, 0x80101961, 0x10014110,
    0x00000000, 0x08c008c0, 0x80100069, 0x10018510,
    0x01462405, 0x00020002, 0x80100940, 0x10018110,
    0x01461001, 0x08c008c0, 0x80100961, 0x22050220,
    0x00710000, 0x00000000, 0x80001961, 0x22054660,
    0x00000000, 0x00000000, 0x800c1940, 0x22160660,
    0x06442206, 0x00442216, 0x80081940, 0x22270660,
    0x06422217, 0x00422227, 0x80081940, 0x22370660,
    0x06422217, 0x00422237, 0x80081940, 0x22450660,
    0x06002234, 0x00342245, 0x80081a40, 0x22c50660,
    0x060022b4, 0x003422c5, 0x800c1940, 0x22850660,
    0x06002274, 0x00462285, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac000040, 0x22200206,
    0xe8181970, 0x1f000626, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00101a70, 0x00018220,
    0x22462605, 0x00000000, 0x00100061, 0x04050120,
    0x20003000, 0x00000000, 0x04100022, 0x0001c060,
    0x00000030, 0x00000030, 0x00100061, 0x03054220,
    0x00000000, 0xffffffff, 0x00100028, 0x0001c660,
    0x00000090, 0x00000010, 0x00100025, 0x00004600,
    0x00000000, 0x00000080, 0xac000040, 0x1f002227,
    0x00100040, 0x05058660, 0x06460505, 0x00000010,
    0x00101a40, 0x02050660, 0x06460205, 0x020027f4,
    0x00114170, 0x00010220, 0x42460505, 0x00461605,
    0x04100022, 0x0001c060, 0x00000028, 0x00000028,
    0x64801f61, 0x00000003, 0x00100028, 0x0001c660,
    0x00000020, 0x00000010, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100027, 0x00014060,
    0x00000000, 0xfffffd38, 0x00101a61, 0x00010660,
    0x20460305, 0x00000000, 0x04100022, 0x0001c060,
    0x000000a0, 0x00000090, 0x2c001e4c, 0x00100428,
    0x00100070, 0x00018660, 0x16460405, 0x00000000,
    0x14101a62, 0x29058220, 0x02462805, 0x00000020,
    0xac001940, 0x29000507, 0x80100061, 0x10014110,
    0x00000000, 0x01800180, 0x00100069, 0x10018510,
    0x01562906, 0x00020002, 0x00100940, 0x10018110,
    0x01461001, 0x01800180, 0x00100961, 0x08050220,
    0x00710000, 0x00000000, 0x00100024, 0x0001c060,
    0x00000020, 0x00000020, 0x64801b61, 0x00000007,
    0x64801b61, 0x00000008, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100061, 0x2a054770,
    0x00000000, 0x0000082c, 0x00101c69, 0x2e058660,
    0x02460705, 0x00000002, 0x00100061, 0x3c054770,
    0x00000000, 0x00002c2c, 0x38800040, 0x10070146,
    0x00101e69, 0x55058660, 0x02460805, 0x00000009,
    0x00100061, 0x59054770, 0x00000000, 0x00000010,
    0x00100065, 0x5b058220, 0x02000024, 0x000000ff,
    0x00100061, 0x63054770, 0x00000000, 0x00000020,
    0x80000065, 0x6d058220, 0x02000054, 0xfffffc00,
    0x38001f40, 0x01702a2c, 0xb4001f61, 0x00102e5f,
    0x38801f40, 0x3c03013e, 0x00101e69, 0x5c058660,
    0x02465b05, 0x00000004, 0x800c0061, 0x5e054410,
    0x00000000, 0x76543210, 0x80001e68, 0x70058220,
    0x02006d04, 0x00000004, 0x800c0061, 0x71054410,
    0x00000000, 0x76543210, 0x00101e61, 0x2f050230,
    0x00445f06, 0x00000000, 0x800c1c40, 0x5e458110,
    0x01465e05, 0x00080008, 0x800c1b40, 0x71458110,
    0x01467105, 0x00080008, 0x38001b40, 0x2f002c31,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x5d050120, 0x00465e05, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x72058120, 0x02467105, 0x00000002,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x330c0000, 0xfb003114, 0x00000000,
    0xac001a40, 0x5c005d5f, 0x00101965, 0x0f058220,
    0x02465f05, 0x000001ff, 0xb4001961, 0x00100f67,
    0x00101961, 0x60050230, 0x00446706, 0x00000000,
    0x00108361, 0x34050120, 0x00563306, 0x00000000,
    0x00100061, 0x40050120, 0x0056330e, 0x00000000,
    0x00101a6c, 0x35058660, 0x02463405, 0x0000001f,
    0x00100041, 0x20018220, 0x01463405, 0x00580058,
    0x68000041, 0x05803437, 0x68001c41, 0x5cc04041,
    0x68001c41, 0x05803538, 0x00100049, 0x36058220,
    0x02463405, 0x00000058, 0xb4001c61, 0x0010373a,
    0xb4001c61, 0x00104165, 0xac001b40, 0x38003639,
    0x00101a61, 0x42050230, 0x00446506, 0x00000000,
    0xb4001a61, 0x0012393a, 0x38001a40, 0x42003e44,
    0x38001a40, 0x3a004648, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c431, 0x521c0000,
    0xfb004414, 0x00080000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x4a240000,
    0xfb004814, 0x000c0000, 0xac008440, 0x55005256,
    0xb4008461, 0x00105469, 0xb4008561, 0x00104a4e,
    0xb4008561, 0x00104c50, 0x00101c40, 0x57058660,
    0x06465605, 0x00000200, 0xac000040, 0x0f005662,
    0x00101d61, 0x66050230, 0x00446906, 0x00000000,
    0xb401a561, 0x00124b4e, 0xb401a561, 0x00124d50,
    0xe819a462, 0x53005758, 0x00101c69, 0x68058770,
    0x02346605, 0x00000005, 0x38001b40, 0x63005065,
    0x38001940, 0x6800656a, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x6c240000,
    0xfb006a14, 0x000c0000, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007004, 0x00000000, 0x00112731, 0x00020100,
    0xfa08720c, 0x04006c0c, 0x80000065, 0x73058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x74058220,
    0x02007304, 0x00000004, 0x800c0061, 0x75054410,
    0x00000000, 0x76543210, 0x800c1940, 0x75458110,
    0x01467505, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x76058120,
    0x02467505, 0x00000002, 0x00101966, 0x77058220,
    0x02467605, 0x00000040, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007404, 0x00000000, 0x00112831, 0x00020100,
    0xfa08770c, 0x04006d0c, 0x80000065, 0x78058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x79058220,
    0x02007804, 0x00000004, 0x800c0061, 0x7a054410,
    0x00000000, 0x76543210, 0x800c1940, 0x7a458110,
    0x01467a05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x7b058120,
    0x02467a05, 0x00000002, 0x00101966, 0x7c058220,
    0x02467b05, 0x00000080, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007904, 0x00000000, 0x00112931, 0x00020100,
    0xfa087c0c, 0x04006e0c, 0x80000065, 0x7d058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x7e058220,
    0x02007d04, 0x00000004, 0x800c0061, 0x7f054410,
    0x00000000, 0x76543210, 0x800c1940, 0x7f458110,
    0x01467f05, 0x00080008, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x01058120,
    0x02467f05, 0x00000002, 0x00101966, 0x02058220,
    0x02460105, 0x000000c0, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007e04, 0x00000000, 0x00112a31, 0x00020100,
    0xfa08020c, 0x04006f0c, 0x3800a640, 0x6a005903,
    0x80000065, 0x07058220, 0x02000054, 0xfffffc00,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010cb31, 0x05140000, 0xfb000314, 0x00040000,
    0x80001968, 0x08058220, 0x02000704, 0x00000004,
    0x800c0061, 0x09054410, 0x00000000, 0x76543210,
    0x800c1940, 0x09458110, 0x01460905, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x0a058120, 0x02460905, 0x00000002,
    0x00101966, 0x0b058220, 0x02460a05, 0x00000100,
    0x80008b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02000804, 0x00000000,
    0x00112c31, 0x00020100, 0xfa080b0c, 0x0400050c,
    0x80000065, 0x0c058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x0d058220, 0x02000c04, 0x00000004,
    0x800c0061, 0x0e054410, 0x00000000, 0x76543210,
    0x800c1940, 0x0e458110, 0x01460e05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x10058120, 0x02460e05, 0x00000002,
    0x00101966, 0x11058220, 0x02461005, 0x00000140,
    0x80008b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02000d04, 0x00000000,
    0x00112d31, 0x00020100, 0xfa08110c, 0x0400060c,
    0x80000065, 0x12058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x17058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x1d058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x23058220, 0x02000054, 0xfffffc00,
    0x80001c68, 0x13058220, 0x02001204, 0x00000004,
    0x800ca161, 0x14054410, 0x00000000, 0x76543210,
    0x80001d68, 0x18058220, 0x02001704, 0x00000004,
    0x800c0061, 0x19054410, 0x00000000, 0x76543210,
    0x80001e68, 0x1e058220, 0x02001d04, 0x00000004,
    0x800c0061, 0x1f054410, 0x00000000, 0x76543210,
    0x80001f68, 0x24058220, 0x02002304, 0x00000004,
    0x800c0061, 0x25054410, 0x00000000, 0x76543210,
    0x800c1f40, 0x14458110, 0x01461405, 0x00080008,
    0x800c1e40, 0x19458110, 0x01461905, 0x00080008,
    0x800c1d40, 0x1f458110, 0x01461f05, 0x00080008,
    0x800c1c40, 0x25458110, 0x01462505, 0x00080008,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x0010a169, 0x15058120, 0x02461405, 0x00000002,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x1a058120, 0x02461905, 0x00000002,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x20058120, 0x02461f05, 0x00000002,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x26058120, 0x02462505, 0x00000002,
    0x80008101, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001304, 0x00000000,
    0x00112e31, 0x160e0100, 0xfa00150c, 0x04000000,
    0x00101b66, 0x1b058220, 0x02461a05, 0x00000040,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100066, 0x21058220, 0x02462005, 0x00000080,
    0x00101b66, 0x27058220, 0x02462605, 0x000000c0,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001804, 0x00000000,
    0x00112f31, 0x1c0e0100, 0xfa001b0c, 0x04000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001e04, 0x00000000,
    0x00112031, 0x220e0100, 0xfa00210c, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002404, 0x00000000,
    0x00112131, 0x280e0100, 0xfa00270c, 0x04000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x20008f40, 0x1c20052a, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x20008040, 0x2220062b,
    0x80008e01, 0x00000000, 0x00000000, 0x00000000,
    0x20008140, 0x16202829, 0x00101362, 0x2d058aa0,
    0x4a462a05, 0x0704ec3d, 0x00101362, 0x2e058aa0,
    0x4a462b05, 0x0704ec3d, 0x00101362, 0x2c058aa0,
    0x4a462905, 0x0704ec3d, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x00101338, 0x31050aa0,
    0x1a462d05, 0x00460001, 0x00101238, 0x33050aa0,
    0x1a462e05, 0x00460001, 0x00101138, 0x2f050aa0,
    0x1a462c05, 0x00460001, 0x00100070, 0x35058aa0,
    0x5a462c05, 0x77f684df, 0x00100070, 0x36058aa0,
    0x3a462905, 0x0704ec3d, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x00102b41, 0x32058aa0,
    0x0a463105, 0x417d70a4, 0x00102a41, 0x34058aa0,
    0x0a463305, 0x417d70a4, 0x00102941, 0x30058aa0,
    0x0a462f05, 0x417d70a4, 0x00101465, 0x00010220,
    0x22463505, 0x00463605, 0x04101162, 0x37058220,
    0x02463005, 0x00000000, 0x00100070, 0x38058aa0,
    0x3a462a05, 0x0704ec3d, 0x00100070, 0x39058aa0,
    0x5a462d05, 0x77f684df, 0x00101165, 0x00010220,
    0x22463905, 0x00463805, 0x04101562, 0x3a058220,
    0x02463205, 0x00000000, 0x00100070, 0x3b058aa0,
    0x3a462b05, 0x0704ec3d, 0x00100070, 0x3c058aa0,
    0x5a462e05, 0x77f684df, 0x00101165, 0x00010220,
    0x22463c05, 0x00463b05, 0x04101662, 0x3d058220,
    0x02463405, 0x00000000, 0xe8180070, 0x5800623e,
    0x04100022, 0x0001c060, 0x00000088, 0x00000088,
    0xb4000061, 0x0010626a, 0x00101961, 0x3f050230,
    0x00446a06, 0x00000000, 0x00101969, 0x41058770,
    0x02343f05, 0x00000005, 0x38001940, 0x41004e46,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x48240000, 0xfb004614, 0x000c0000,
    0x3800a540, 0x5900464c, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x4e240000,
    0xfb004c14, 0x000c0000, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100069, 0x52058770,
    0x02346005, 0x00000002, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x00101961, 0x6b060320,
    0x00345205, 0x00000000, 0x00101961, 0x0a050220,
    0x00446b06, 0x00000000, 0x00100061, 0x09050220,
    0x00446b06, 0x00000000, 0x00101970, 0x00018220,
    0x42460905, 0x00000120, 0x04100028, 0x0001c660,
    0x00000090, 0x00000090, 0x0010a369, 0x53058660,
    0x02460905, 0x00000002, 0x0010a361, 0x54054220,
    0x00000000, 0x7f800000, 0x0010a361, 0x55054220,
    0x00000000, 0x7f800000, 0x0010a361, 0x56054220,
    0x00000000, 0x7f800000, 0x0010a361, 0x57054220,
    0x00000000, 0x7f800000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x00000000,
    0xea08530c, 0x000c5424, 0x00100040, 0x09058660,
    0x06460905, 0x00000800, 0x00100027, 0x00014060,
    0x00000000, 0xffffff60, 0x00000060, 0x00000000,
    0x00000000, 0x00000000, 0x00101a70, 0x00018220,
    0x42460a05, 0x00000030, 0x04100028, 0x0001c660,
    0x00000090, 0x00000090, 0x0010a369, 0x54058660,
    0x02460a05, 0x00000002, 0x6480a361, 0x00000056,
    0x6480a361, 0x00000057, 0x6480a361, 0x00000058,
    0x6480a361, 0x00000059, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x00101d40, 0x55058660,
    0x06465405, 0x00000480, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x00000000,
    0xea08550c, 0x000c5624, 0x00100040, 0x0a058660,
    0x06460a05, 0x00000800, 0x00100027, 0x00014060,
    0x00000000, 0xffffff60, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x8000c431, 0x560c0000,
    0xe23e000c, 0x00000000, 0x80008401, 0x00000000,
    0x00000000, 0x00000000, 0x64a4a361, 0x00000057,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x572d0000, 0x0080002c, 0x00000000,
    0x80001966, 0x57258220, 0x02005724, 0x00000100,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8010c331, 0x00000000, 0x3008570c, 0x00000000,
    0x80100001, 0x00000000, 0xe0000000, 0x00000000,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x20008540, 0x4e004858, 0x80008501, 0x00000000,
    0x00000000, 0x00000000, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x20001f40, 0x4f004959,
    0x80008501, 0x00000000, 0x00000000, 0x00000000,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x20001f40, 0x50004a5a, 0x20001340, 0x1620585b,
    0x20001340, 0x1c20595c, 0x20001340, 0x22205a5e,
    0x20001341, 0x37005b5f, 0x20000b41, 0x3a005c60,
    0x20000b41, 0x3d005e61, 0x00101361, 0x62050a20,
    0x00465f05, 0x00000000, 0x00101261, 0x63050a20,
    0x00466005, 0x00000000, 0x00101161, 0x64050a20,
    0x00466105, 0x00000000, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00100070, 0x00018220,
    0x22463e05, 0x00000000, 0x0010ac61, 0x0b050120,
    0x00003000, 0x00000000, 0x00100065, 0x65058220,
    0x02465d05, 0x00000003, 0x00100068, 0x66058220,
    0x02465d05, 0x00000002, 0x80001261, 0x5c054660,
    0x00000000, 0x00000001, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x67050660,
    0x02005c04, 0x00465d05, 0x00101a70, 0x00018660,
    0x16460b05, 0x00000000, 0x04100028, 0x0001c660,
    0x000008d8, 0x000008d8, 0x2c00004c, 0x00100b68,
    0x80101961, 0x10014110, 0x00000000, 0x18801880,
    0x00100069, 0x10018510, 0x01566806, 0x00020002,
    0x00100940, 0x10018110, 0x01461001, 0x18801880,
    0x00100961, 0x69050220, 0x00710000, 0x00000000,
    0xac301970, 0x6200696a, 0x00101965, 0x00010220,
    0x22466a05, 0x00463e05, 0x04100062, 0x6b058220,
    0x02464e05, 0xff800000, 0x04100062, 0x6c058220,
    0x02464f05, 0xff800000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x6d058220,
    0x02465005, 0xff800000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x6e058220,
    0x02464805, 0x7f800000, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x6f058220,
    0x02464905, 0x7f800000, 0x04100062, 0x70058220,
    0x02464a05, 0x7f800000, 0x78900e61, 0xff800074,
    0x28000061, 0x00106b74, 0x78900d61, 0xff800075,
    0x28000061, 0x00106c75, 0x78900c61, 0xff800076,
    0x28000061, 0x00106d76, 0x78900b61, 0x7f800071,
    0x28000061, 0x00106e71, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x78901a61, 0x7f800072,
    0x28000061, 0x00106f72, 0x78900961, 0x7f800073,
    0x28000061, 0x00107073, 0x00100070, 0x00018660,
    0x16466505, 0x00000001, 0x800c1661, 0x13060220,
    0x00447416, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x800c1561, 0x1b060220,
    0x00447516, 0x00000000, 0x800c1461, 0x23060220,
    0x00447616, 0x00000000, 0x800c1361, 0x78060220,
    0x00447116, 0x00000000, 0x800c1261, 0x01060220,
    0x00447216, 0x00000000, 0x800c1161, 0x09060220,
    0x00447316, 0x00000000, 0x800c1e62, 0x12060aa0,
    0x4a447406, 0x00441306, 0x800c1d62, 0x1a060aa0,
    0x4a447506, 0x00441b06, 0x800c1c62, 0x22060aa0,
    0x4a447606, 0x00442306, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x800c1b62, 0x77060aa0,
    0x5a447106, 0x00447806, 0x800c1a62, 0x7f060aa0,
    0x5a447206, 0x00440106, 0x800c1962, 0x08060aa0,
    0x5a447306, 0x00440906, 0x800c0e61, 0x74160220,
    0x00441206, 0x00000000, 0x800c0d61, 0x75160220,
    0x00441a06, 0x00000000, 0x800c0c61, 0x76160220,
    0x00442206, 0x00000000, 0x800c0b61, 0x71160220,
    0x00447706, 0x00000000, 0x800c0a61, 0x72160220,
    0x00447f06, 0x00000000, 0x800c0961, 0x73160220,
    0x00440806, 0x00000000, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x80081e61, 0x15070220,
    0x00427417, 0x00000000, 0x80080061, 0x16070220,
    0x00427427, 0x00000000, 0x80081f61, 0x1d070220,
    0x00427517, 0x00000000, 0x80080061, 0x1e070220,
    0x00427527, 0x00000000, 0x80081f61, 0x25070220,
    0x00427617, 0x00000000, 0x80080061, 0x26070220,
    0x00427627, 0x00000000, 0x80081f61, 0x7a070220,
    0x00427117, 0x00000000, 0x80080061, 0x7b070220,
    0x00427127, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x03070220,
    0x00427217, 0x00000000, 0x8008ab61, 0x04070220,
    0x00427227, 0x00000000, 0x80080061, 0x0c070220,
    0x00427317, 0x00000000, 0x80080061, 0x0d070220,
    0x00427327, 0x00000000, 0x8008a162, 0x14070aa0,
    0x4a421507, 0x00421607, 0x80081f62, 0x1c070aa0,
    0x4a421d07, 0x00421e07, 0x80081f62, 0x24070aa0,
    0x4a422507, 0x00422607, 0x80081d62, 0x79070aa0,
    0x5a427a07, 0x00427b07, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x80081b62, 0x02070aa0,
    0x5a420307, 0x00420407, 0x80081962, 0x0a070aa0,
    0x5a420c07, 0x00420d07, 0x80081661, 0x74270220,
    0x00421407, 0x00000000, 0x80081561, 0x75270220,
    0x00421c07, 0x00000000, 0x80081461, 0x76270220,
    0x00422407, 0x00000000, 0x80081361, 0x71270220,
    0x00427907, 0x00000000, 0x80081261, 0x72270220,
    0x00420207, 0x00000000, 0x80081161, 0x73270220,
    0x00420a07, 0x00000000, 0x80081e61, 0x18070220,
    0x00427417, 0x00000000, 0x80080061, 0x19070220,
    0x00427437, 0x00000000, 0x80081f61, 0x20070220,
    0x00427517, 0x00000000, 0x8008a061, 0x21070220,
    0x00427537, 0x00000000, 0x80081f61, 0x28070220,
    0x00427617, 0x00000000, 0x80080061, 0x29070220,
    0x00427637, 0x00000000, 0x80081f61, 0x7d070220,
    0x00427117, 0x00000000, 0x8008a361, 0x7e070220,
    0x00427137, 0x00000000, 0x80081f61, 0x06070220,
    0x00427217, 0x00000000, 0x80080061, 0x07070220,
    0x00427237, 0x00000000, 0x80080061, 0x10070220,
    0x00427317, 0x00000000, 0x8008ad61, 0x11070220,
    0x00427337, 0x00000000, 0x80080062, 0x17070aa0,
    0x4a421807, 0x00421907, 0x80081f62, 0x1f070aa0,
    0x4a422007, 0x00422107, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80081f62, 0x27070aa0,
    0x4a422807, 0x00422907, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80081d62, 0x7c070aa0,
    0x5a427d07, 0x00427e07, 0x80081b62, 0x05070aa0,
    0x5a420607, 0x00420707, 0x80081962, 0x0e070aa0,
    0x5a421007, 0x00421107, 0x80081661, 0x74370220,
    0x00421707, 0x00000000, 0x80081561, 0x75370220,
    0x00421f07, 0x00000000, 0x80081461, 0x76370220,
    0x00422707, 0x00000000, 0x80081361, 0x71370220,
    0x00427c07, 0x00000000, 0x80081261, 0x72370220,
    0x00420507, 0x00000000, 0x80081161, 0x73370220,
    0x00420e07, 0x00000000, 0x80081e62, 0x74450aa0,
    0x4a007434, 0x00347445, 0x80081e62, 0x74c50aa0,
    0x4a0074b4, 0x003474c5, 0x80081d62, 0x75450aa0,
    0x4a007534, 0x00347545, 0x80081d62, 0x75c50aa0,
    0x4a0075b4, 0x003475c5, 0x80081c62, 0x76450aa0,
    0x4a007634, 0x00347645, 0x80081c62, 0x76c50aa0,
    0x4a0076b4, 0x003476c5, 0x80081b62, 0x71450aa0,
    0x5a007134, 0x00347145, 0x80081b62, 0x71c50aa0,
    0x5a0071b4, 0x003471c5, 0x80081a62, 0x72450aa0,
    0x5a007234, 0x00347245, 0x80081a62, 0x72c50aa0,
    0x5a0072b4, 0x003472c5, 0x80081962, 0x73450aa0,
    0x5a007334, 0x00347345, 0x80081962, 0x73c50aa0,
    0x5a0073b4, 0x003473c5, 0x800c0062, 0x74850aa0,
    0x4a007474, 0x00467485, 0x800c1762, 0x75850aa0,
    0x4a007574, 0x00467585, 0x800c1762, 0x76850aa0,
    0x4a007674, 0x00467685, 0x800c1762, 0x71850aa0,
    0x5a007174, 0x00467185, 0x800c1762, 0x72850aa0,
    0x5a007274, 0x00467285, 0x800c1662, 0x73850aa0,
    0x5a007374, 0x00467385, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x78050220,
    0x020075f4, 0x000074f4, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x77050220,
    0x020072f4, 0x000071f4, 0x00100070, 0x00018660,
    0x16466505, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x79050220,
    0x020073f4, 0x00467705, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x7a050220,
    0x020076f4, 0x00467805, 0x00100070, 0x00018660,
    0x16466605, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x20780062, 0x7a207957,
    0x00100065, 0x00018220, 0x22466705, 0x00000077,
    0x04100022, 0x0001c060, 0x00000080, 0x00000080,
    0x68000041, 0x0060697b, 0x68000041, 0x0030667c,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100052, 0x7d040e68, 0x0e0e7b05, 0x7c056505,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x7e058660, 0x02467d05, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x00000000, 0xea2a7e0c, 0x0100570c,
    0x00100025, 0x00004600, 0x00000000, 0x00000050,
    0xad800066, 0x3e206a7f, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00101a70, 0x00018220,
    0x22467f05, 0x00000000, 0x00100061, 0x01050120,
    0x00003000, 0x00000000, 0xe8001965, 0x01000b0b,
    0x00100027, 0x00014060, 0x00000000, 0xfffff718,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x00101f40, 0x02058660, 0x06466305, 0x00000010,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00100070, 0x00018220, 0x22463e05, 0x00000000,
    0x00100061, 0x0c050120, 0x00003000, 0x00000000,
    0x00101970, 0x00018660, 0x16460c05, 0x00000000,
    0x04100028, 0x0001c660, 0x000008f8, 0x000008f8,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x2c00004c, 0x00100c03, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80100061, 0x10014110,
    0x00000000, 0x00800080, 0x00100069, 0x10018510,
    0x01560306, 0x00020002, 0x00100940, 0x10018110,
    0x01461001, 0x00800080, 0x00100961, 0x04050220,
    0x00710000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac300070, 0x02000405,
    0x00101965, 0x00010220, 0x22460505, 0x00463e05,
    0x04100062, 0x06058220, 0x02464e05, 0xff800000,
    0x04100062, 0x07058220, 0x02464f05, 0xff800000,
    0x04100062, 0x08058220, 0x02465005, 0xff800000,
    0x04100062, 0x09058220, 0x02464805, 0x7f800000,
    0x04100062, 0x0a058220, 0x02464905, 0x7f800000,
    0x04100062, 0x0b058220, 0x02464a05, 0x7f800000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x78901e61, 0xff800011, 0x28000061, 0x00100611,
    0x78900d61, 0xff800012, 0x28000061, 0x00100712,
    0x78900c61, 0xff800013, 0x28000061, 0x00100813,
    0x78900b61, 0x7f80000d, 0x28000061, 0x0010090d,
    0x78900a61, 0x7f80000e, 0x28000061, 0x00100a0e,
    0x78900961, 0x7f800010, 0x28000061, 0x00100b10,
    0x00100070, 0x00018660, 0x16466505, 0x00000001,
    0x800c1661, 0x46060220, 0x00441116, 0x00000000,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x800c1561, 0x56060220, 0x00441216, 0x00000000,
    0x800c1461, 0x5e060220, 0x00441316, 0x00000000,
    0x800c1361, 0x2b060220, 0x00440d16, 0x00000000,
    0x800c1261, 0x33060220, 0x00440e16, 0x00000000,
    0x800c1161, 0x3b060220, 0x00441016, 0x00000000,
    0x800c1e62, 0x43060aa0, 0x4a441106, 0x00444606,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x800c1d62, 0x55060aa0, 0x4a441206, 0x00445606,
    0x800c1c62, 0x5d060aa0, 0x4a441306, 0x00445e06,
    0x800c1b62, 0x2a060aa0, 0x5a440d06, 0x00442b06,
    0x800c1a62, 0x32060aa0, 0x5a440e06, 0x00443306,
    0x800c1962, 0x3a060aa0, 0x5a441006, 0x00443b06,
    0x800c0e61, 0x11160220, 0x00444306, 0x00000000,
    0x800c0d61, 0x12160220, 0x00445506, 0x00000000,
    0x800c0c61, 0x13160220, 0x00445d06, 0x00000000,
    0x800c0b61, 0x0d160220, 0x00442a06, 0x00000000,
    0x800c0a61, 0x0e160220, 0x00443206, 0x00000000,
    0x800c0961, 0x10160220, 0x00443a06, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80081e61, 0x4c070220, 0x00421117, 0x00000000,
    0x8008a261, 0x4d070220, 0x00421127, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x58070220, 0x00421217, 0x00000000,
    0x80080061, 0x59070220, 0x00421227, 0x00000000,
    0x80081f61, 0x60070220, 0x00421317, 0x00000000,
    0x80080061, 0x61070220, 0x00421327, 0x00000000,
    0x80080b61, 0x2d070220, 0x00420d17, 0x00000000,
    0x80082a61, 0x2e070220, 0x00420d27, 0x00000000,
    0x80081f61, 0x35070220, 0x00420e17, 0x00000000,
    0x80080061, 0x36070220, 0x00420e27, 0x00000000,
    0x80080061, 0x3d070220, 0x00421017, 0x00000000,
    0x80080061, 0x3f070220, 0x00421027, 0x00000000,
    0x80080062, 0x47070aa0, 0x4a424c07, 0x00424d07,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80081f62, 0x57070aa0, 0x4a425807, 0x00425907,
    0x80081f62, 0x5f070aa0, 0x4a426007, 0x00426107,
    0x80080962, 0x2c070aa0, 0x5a422d07, 0x00422e07,
    0x80081b62, 0x34070aa0, 0x5a423507, 0x00423607,
    0x80081962, 0x3c070aa0, 0x5a423d07, 0x00423f07,
    0x80081661, 0x11270220, 0x00424707, 0x00000000,
    0x80081561, 0x12270220, 0x00425707, 0x00000000,
    0x80081461, 0x13270220, 0x00425f07, 0x00000000,
    0x80081361, 0x0d270220, 0x00422c07, 0x00000000,
    0x80081261, 0x0e270220, 0x00423407, 0x00000000,
    0x80081161, 0x10270220, 0x00423c07, 0x00000000,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80081e61, 0x53070220, 0x00421117, 0x00000000,
    0x8008a361, 0x54070220, 0x00421137, 0x00000000,
    0x80081f61, 0x5b070220, 0x00421217, 0x00000000,
    0x80080061, 0x5c070220, 0x00421237, 0x00000000,
    0x80081f61, 0x69070220, 0x00421317, 0x00000000,
    0x80080061, 0x6a070220, 0x00421337, 0x00000000,
    0x80081f61, 0x30070220, 0x00420d17, 0x00000000,
    0x80080061, 0x31070220, 0x00420d37, 0x00000000,
    0x80081f61, 0x38070220, 0x00420e17, 0x00000000,
    0x80080061, 0x39070220, 0x00420e37, 0x00000000,
    0x80080061, 0x41070220, 0x00421017, 0x00000000,
    0x80080061, 0x42070220, 0x00421037, 0x00000000,
    0x80080062, 0x52070aa0, 0x4a425307, 0x00425407,
    0x80081f62, 0x5a070aa0, 0x4a425b07, 0x00425c07,
    0x80081f62, 0x68070aa0, 0x4a426907, 0x00426a07,
    0x80081d62, 0x2f070aa0, 0x5a423007, 0x00423107,
    0x80081b62, 0x37070aa0, 0x5a423807, 0x00423907,
    0x80081962, 0x40070aa0, 0x5a424107, 0x00424207,
    0x80081661, 0x11370220, 0x00425207, 0x00000000,
    0x80081561, 0x12370220, 0x00425a07, 0x00000000,
    0x80081461, 0x13370220, 0x00426807, 0x00000000,
    0x80081361, 0x0d370220, 0x00422f07, 0x00000000,
    0x80081261, 0x0e370220, 0x00423707, 0x00000000,
    0x80081161, 0x10370220, 0x00424007, 0x00000000,
    0x80081e62, 0x11450aa0, 0x4a001134, 0x00341145,
    0x80081e62, 0x11c50aa0, 0x4a0011b4, 0x003411c5,
    0x80081d62, 0x12450aa0, 0x4a001234, 0x00341245,
    0x80081d62, 0x12c50aa0, 0x4a0012b4, 0x003412c5,
    0x80081c62, 0x13450aa0, 0x4a001334, 0x00341345,
    0x80081c62, 0x13c50aa0, 0x4a0013b4, 0x003413c5,
    0x80081b62, 0x0d450aa0, 0x5a000d34, 0x00340d45,
    0x80081b62, 0x0dc50aa0, 0x5a000db4, 0x00340dc5,
    0x80081a62, 0x0e450aa0, 0x5a000e34, 0x00340e45,
    0x80081a62, 0x0ec50aa0, 0x5a000eb4, 0x00340ec5,
    0x80081962, 0x10450aa0, 0x5a001034, 0x00341045,
    0x80081962, 0x10c50aa0, 0x5a0010b4, 0x003410c5,
    0x800c0062, 0x11850aa0, 0x4a001174, 0x00461185,
    0x800c1762, 0x12850aa0, 0x4a001274, 0x00461285,
    0x800c1762, 0x13850aa0, 0x4a001374, 0x00461385,
    0x800c1762, 0x0d850aa0, 0x5a000d74, 0x00460d85,
    0x800c1762, 0x0e850aa0, 0x5a000e74, 0x00460e85,
    0x800c1662, 0x10850aa0, 0x5a001074, 0x00461085,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x15050220, 0x020012f4, 0x000011f4,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x14050220, 0x02000ef4, 0x00000df4,
    0x00100070, 0x00018660, 0x16466505, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x16050220, 0x020010f4, 0x00461405,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x17050220, 0x020013f4, 0x00461505,
    0x00100070, 0x00018660, 0x16466605, 0x00000000,
    0x20781a62, 0x17201658, 0x00100065, 0x00018220,
    0x22466705, 0x00000077, 0x04100022, 0x0001c060,
    0x00000080, 0x00000080, 0x68000041, 0x00600418,
    0x68000041, 0x00306619, 0x00101952, 0x1a040e68,
    0x0e0e1805, 0x19056505, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x1b058660,
    0x02461a05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cf31, 0x00000000,
    0xea2a1b0c, 0x0100580c, 0x00100025, 0x00004600,
    0x00000000, 0x00000050, 0xad800066, 0x3e20051c,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22461c05, 0x00000000,
    0x00100061, 0x1d050120, 0x00003000, 0x00000000,
    0xe8001965, 0x1d000c0c, 0x00100027, 0x00014060,
    0x00000000, 0xfffff6f8, 0x00100040, 0x1e058660,
    0x06466405, 0x00000020, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00100070, 0x00018220,
    0x22463e05, 0x00000000, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x0d050120,
    0x00003000, 0x00000000, 0x00101970, 0x00018660,
    0x16460d05, 0x00000000, 0x04100028, 0x0001c660,
    0x00000908, 0x00000908, 0x2c00004c, 0x00100d1f,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80100061, 0x10014110, 0x00000000, 0x07800780,
    0x00100069, 0x10018510, 0x01561f06, 0x00020002,
    0x00100940, 0x10018110, 0x01461001, 0x07800780,
    0x00100961, 0x20050220, 0x00710000, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xac300070, 0x1e002021, 0x00101965, 0x00010220,
    0x22462105, 0x00463e05, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x22058220,
    0x02464e05, 0xff800000, 0x04100062, 0x23058220,
    0x02464f05, 0xff800000, 0x04100062, 0x24058220,
    0x02465005, 0xff800000, 0x04100062, 0x25058220,
    0x02464805, 0x7f800000, 0x04100062, 0x26058220,
    0x02464905, 0x7f800000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x27058220,
    0x02464a05, 0x7f800000, 0x78901e61, 0xff80002b,
    0x28000061, 0x0010222b, 0x78900961, 0xff80002c,
    0x28000061, 0x0010232c, 0x78900b61, 0xff80002d,
    0x28000061, 0x0010242d, 0x78900b61, 0x7f800028,
    0x28000061, 0x00102528, 0x78900a61, 0x7f800029,
    0x28000061, 0x00102629, 0x78900961, 0x7f80002a,
    0x28000061, 0x0010272a, 0x00100070, 0x00018660,
    0x16466505, 0x00000001, 0x800c1661, 0x05060220,
    0x00442b16, 0x00000000, 0x800c1561, 0x0e060220,
    0x00442c16, 0x00000000, 0x800c1461, 0x17060220,
    0x00442d16, 0x00000000, 0x800c1361, 0x6c060220,
    0x00442816, 0x00000000, 0x800c1261, 0x74060220,
    0x00442916, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x800c1161, 0x7c060220,
    0x00442a16, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x800c1e62, 0x04060aa0,
    0x4a442b06, 0x00440506, 0x800c1d62, 0x0c060aa0,
    0x4a442c06, 0x00440e06, 0x800c0c62, 0x16060aa0,
    0x4a442d06, 0x00441706, 0x800c1b62, 0x6b060aa0,
    0x5a442806, 0x00446c06, 0x800c1a62, 0x73060aa0,
    0x5a442906, 0x00447406, 0x800c1962, 0x7b060aa0,
    0x5a442a06, 0x00447c06, 0x800c0e61, 0x2b160220,
    0x00440406, 0x00000000, 0x800c0d61, 0x2c160220,
    0x00440c06, 0x00000000, 0x800c0c61, 0x2d160220,
    0x00441606, 0x00000000, 0x800c0b61, 0x28160220,
    0x00446b06, 0x00000000, 0x800c0a61, 0x29160220,
    0x00447306, 0x00000000, 0x800c0961, 0x2a160220,
    0x00447b06, 0x00000000, 0x80081e61, 0x07070220,
    0x00422b17, 0x00000000, 0x80080061, 0x08070220,
    0x00422b27, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x11070220,
    0x00422c17, 0x00000000, 0x80080061, 0x12070220,
    0x00422c27, 0x00000000, 0x80081f61, 0x19070220,
    0x00422d17, 0x00000000, 0x80080061, 0x1a070220,
    0x00422d27, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x6e070220,
    0x00422817, 0x00000000, 0x8008aa61, 0x6f070220,
    0x00422827, 0x00000000, 0x80081f61, 0x76070220,
    0x00422917, 0x00000000, 0x8008a861, 0x77070220,
    0x00422927, 0x00000000, 0x8008a361, 0x7e070220,
    0x00422a17, 0x00000000, 0x80080061, 0x7f070220,
    0x00422a27, 0x00000000, 0x80080062, 0x06070aa0,
    0x4a420707, 0x00420807, 0x80081f62, 0x10070aa0,
    0x4a421107, 0x00421207, 0x80081f62, 0x18070aa0,
    0x4a421907, 0x00421a07, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80081d62, 0x6d070aa0,
    0x5a426e07, 0x00426f07, 0x80081b62, 0x75070aa0,
    0x5a427607, 0x00427707, 0x80081962, 0x7d070aa0,
    0x5a427e07, 0x00427f07, 0x80081661, 0x2b270220,
    0x00420607, 0x00000000, 0x80081561, 0x2c270220,
    0x00421007, 0x00000000, 0x80081461, 0x2d270220,
    0x00421807, 0x00000000, 0x80081361, 0x28270220,
    0x00426d07, 0x00000000, 0x80081261, 0x29270220,
    0x00427507, 0x00000000, 0x80081161, 0x2a270220,
    0x00427d07, 0x00000000, 0x80081e61, 0x0a070220,
    0x00422b17, 0x00000000, 0x80080061, 0x0b070220,
    0x00422b37, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x14070220,
    0x00422c17, 0x00000000, 0x8008ae61, 0x15070220,
    0x00422c37, 0x00000000, 0x80081f61, 0x1c070220,
    0x00422d17, 0x00000000, 0x80080061, 0x1d070220,
    0x00422d37, 0x00000000, 0x80081f61, 0x71070220,
    0x00422817, 0x00000000, 0x8008a761, 0x72070220,
    0x00422837, 0x00000000, 0x80081f61, 0x79070220,
    0x00422917, 0x00000000, 0x80080061, 0x7a070220,
    0x00422937, 0x00000000, 0x80080061, 0x02070220,
    0x00422a17, 0x00000000, 0x8008ab61, 0x03070220,
    0x00422a37, 0x00000000, 0x80080062, 0x09070aa0,
    0x4a420a07, 0x00420b07, 0x80081f62, 0x13070aa0,
    0x4a421407, 0x00421507, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80081f62, 0x1b070aa0,
    0x4a421c07, 0x00421d07, 0x80081d62, 0x70070aa0,
    0x5a427107, 0x00427207, 0x80081b62, 0x78070aa0,
    0x5a427907, 0x00427a07, 0x80081962, 0x01070aa0,
    0x5a420207, 0x00420307, 0x80081661, 0x2b370220,
    0x00420907, 0x00000000, 0x80081561, 0x2c370220,
    0x00421307, 0x00000000, 0x80081461, 0x2d370220,
    0x00421b07, 0x00000000, 0x80081361, 0x28370220,
    0x00427007, 0x00000000, 0x80081261, 0x29370220,
    0x00427807, 0x00000000, 0x80081161, 0x2a370220,
    0x00420107, 0x00000000, 0x80081e62, 0x2b450aa0,
    0x4a002b34, 0x00342b45, 0x80081e62, 0x2bc50aa0,
    0x4a002bb4, 0x00342bc5, 0x80081d62, 0x2c450aa0,
    0x4a002c34, 0x00342c45, 0x80081d62, 0x2cc50aa0,
    0x4a002cb4, 0x00342cc5, 0x80081c62, 0x2d450aa0,
    0x4a002d34, 0x00342d45, 0x80081c62, 0x2dc50aa0,
    0x4a002db4, 0x00342dc5, 0x80081b62, 0x28450aa0,
    0x5a002834, 0x00342845, 0x80081b62, 0x28c50aa0,
    0x5a0028b4, 0x003428c5, 0x80081a62, 0x29450aa0,
    0x5a002934, 0x00342945, 0x80081a62, 0x29c50aa0,
    0x5a0029b4, 0x003429c5, 0x80081962, 0x2a450aa0,
    0x5a002a34, 0x00342a45, 0x80081962, 0x2ac50aa0,
    0x5a002ab4, 0x00342ac5, 0x800c0062, 0x2b850aa0,
    0x4a002b74, 0x00462b85, 0x800c1762, 0x2c850aa0,
    0x4a002c74, 0x00462c85, 0x800c1762, 0x2d850aa0,
    0x4a002d74, 0x00462d85, 0x800c1762, 0x28850aa0,
    0x5a002874, 0x00462885, 0x800c1762, 0x29850aa0,
    0x5a002974, 0x00462985, 0x800c1662, 0x2a850aa0,
    0x5a002a74, 0x00462a85, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x2f050220,
    0x02002cf4, 0x00002bf4, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x2e050220,
    0x020029f4, 0x000028f4, 0x00100070, 0x00018660,
    0x16466505, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x30050220,
    0x02002af4, 0x00462e05, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x31050220,
    0x02002df4, 0x00462f05, 0x00100070, 0x00018660,
    0x16466605, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x20780062, 0x31203059,
    0x00100065, 0x00018220, 0x22466705, 0x00000077,
    0x04100022, 0x0001c060, 0x00000080, 0x00000080,
    0x68000041, 0x00602032, 0x68000041, 0x00306633,
    0x00101952, 0x34040e68, 0x0e0e3205, 0x33056505,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x35058660, 0x02463405, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x00000000, 0xea2a350c, 0x0100590c,
    0x00100025, 0x00004600, 0x00000000, 0x00000050,
    0xad800066, 0x3e202136, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00101a70, 0x00018220,
    0x22463605, 0x00000000, 0x00100061, 0x37050120,
    0x00003000, 0x00000000, 0xe8001965, 0x37000d0d,
    0x00100027, 0x00014060, 0x00000000, 0xfffff6e8,
    0x00100061, 0x00010660, 0x20463e05, 0x00000000,
    0x04100022, 0x0001c060, 0x00000110, 0x00000110,
    0x00100069, 0x38058660, 0x02466205, 0x00000002,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x39058660, 0x06463805, 0x00000480,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x00000000, 0xea10390c, 0x01000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x3a058660, 0x02466305, 0x00000002,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x3b058660, 0x06463a05, 0x000004c0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x00000000, 0xea103b0c, 0x01000000,
    0x00100069, 0x3c058660, 0x02466405, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x3d058660, 0x06463c05, 0x00000500,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c831, 0x00000000, 0xea103d0c, 0x01000000,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c931, 0x3e0c0000, 0xe23e000c, 0x00000000,
    0x80008901, 0x00000000, 0x00000000, 0x00000000,
    0x64a40061, 0x0000003f, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80041961, 0x3f2d0000,
    0x0080002c, 0x00000000, 0x80001966, 0x3f258220,
    0x02003f24, 0x00000100, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8010ca31, 0x00000000,
    0x30083f0c, 0x00000000, 0x80100001, 0x00000000,
    0xe0000000, 0x00000000, 0x00100061, 0x40054770,
    0x00000000, 0x0000002c, 0x80001301, 0x00000000,
    0x00000000, 0x00000000, 0x2c000061, 0x00100f0e,
    0x00101970, 0x00018220, 0x42460e05, 0x00000120,
    0x04100028, 0x0001c660, 0x00000120, 0x00000120,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x42058660, 0x02460e05, 0x00000002,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cb31, 0x5a0c0000, 0xea00420c, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0xb4001f61, 0x0010421e, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x46050230,
    0x00441e06, 0x00000000, 0x74508b70, 0x7f805a00,
    0x04100022, 0x0001c060, 0x00000060, 0x00000060,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x38000f40, 0x40004448, 0x80008501, 0x00000000,
    0x00000000, 0x00000000, 0x38000940, 0x4600484a,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x00000000, 0xfb2a4a14, 0x01005a0c,
    0x00100025, 0x00004600, 0x00000000, 0x00000020,
    0x00100040, 0x0e058660, 0x06460e05, 0x00000200,
    0x00100027, 0x00014060, 0x00000000, 0xfffffed0,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x00108561, 0x4b054770, 0x00000000, 0x000004ac,
    0x00101a70, 0x00018220, 0x42460f05, 0x00000030,
    0x04100028, 0x0001c660, 0x00000178, 0x00000178,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x4d058660, 0x02460f05, 0x00000002,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00100940, 0x4f058660, 0x06464d05, 0x00000480,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00104d1f, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010cc31, 0x5b0c0000,
    0xea004f0c, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x00100961, 0x4e050230,
    0x00441f06, 0x00000000, 0x00108c70, 0x00018660,
    0x26465b05, 0x00000000, 0x04100022, 0x0001c060,
    0x00000080, 0x00000080, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x38000f40, 0x4b004450,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38000040, 0x4e005052, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x00000000,
    0xfb185214, 0x01005b0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000020, 0x00100040, 0x0f058660,
    0x06460f05, 0x00000200, 0x00100027, 0x00014060,
    0x00000000, 0xfffffe78, 0x2c10a361, 0x0010007e,
    0x80101931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_BFS_pass1_initial_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 1344,
      .base.program_size = 13584,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 512, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 0,
      .uses_barrier = true,
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
   .args = gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_args,
   .code = gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_code,
};
const char *gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_sha1 = "d699b588a0b4dee504b3a7dc425b1d2924525214";

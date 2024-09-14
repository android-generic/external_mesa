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

and(1)          g51<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g16<1>Q         0x0000000000000008Q             { align1 1H };
mov(16)         g18<1>Q         0x0000000000000428Q             { align1 1H };
mov(16)         g23<1>Q         0x000000000000042cQ             { align1 1H };
mov(16)         g5<1>UD         0x00000000UD                    { align1 1H compacted };
mov(16)         g2<1>UD         g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(1)         g1UD            g51UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g20<1>Q         g1.4<0,1,0>Q    g18<1,1,0>Q     { align1 1H I@4 compacted };
add(16)         g25<1>Q         g1.4<0,1,0>Q    g23<1,1,0>Q     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g22UD           g20UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };

LABEL3:
shl(16)         g27<1>D         g5<8,8,1>D      0x00000002UD    { align1 1H I@4 };
mov(16)         g106<2>UD       g27<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g28<1>UQ        g106<8,4,2>UD                   { align1 1H I@1 };
add(16)         g30<1>Q         g25<1,1,0>Q     g28<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g50<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g50<1>UD        g50<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g32<1>UD        g50<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
mov(8)          g62<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(1)          a0<1>UD         g32<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g33<1>UQ        g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
add(8)          g62.8<1>UW      g62<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g91<1>Q         g33<0,1,0>Q                     { align1 WE_all 1H I@2 };
add(16)         g61<1>W         g62<16,16,1>UW  -1W             { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g31UD           g91UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(16)         g59<1>D         0D                              { align1 WE_all 1H $2.dst };
mov(16)         g59<1>D         g31<1,1,0>D                     { align1 1H compacted };
mov(16)         a0<1>UW         0x0ec0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g61<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ec0UW        { align1 WE_all 1H A@1 };
mov(16)         g60<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 };
mov(1)          g60<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g60.1<2>D       g60<8,4,2>D     g60.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g60.2<4>D       g60.1<8,2,4>D   g60.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g60.3<4>D       g60.1<8,2,4>D   g60.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g60.4<1>D       g60.3<0,1,0>D   g60.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g60.12<1>D      g60.11<0,1,0>D  g60.12<4,4,1>D  { align1 WE_all 1N I@2 };
add(8)          g60.8<1>D       g60.7<0,1,0>D   g60.8<8,8,1>D   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g34<1>D         g60<1,1,0>D                     { align1 1H compacted };
add(16)         g6<1>D          g2<1,1,0>D      -g60<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g35<1>UD        g6<1,1,0>UD     g31<1,1,0>UD    { align1 1H I@1 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g35<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov.nz.f0.0(16) g4<1>UD         f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g3<1>UD         0xffffffffUD                    { align1 1H };
break(16)       JIP:  LABEL0          UIP:  LABEL1              { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };
add(16)         g36<1>D         g34<1,1,0>D     g31<1,1,0>D     { align1 1H I@7 compacted };
add(16)         g5<1>D          g5<8,8,1>D      16D             { align1 1H };
add(16)         g2<1>D          g2<8,8,1>D      -g36.15<0,1,0>D { align1 1H I@2 };
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
fbl(16)         g37<1>UD        g4<1,1,0>UD                     { align1 1H I@6 compacted };
cmp.z.f0.0(16)  null<1>D        g4<8,8,1>D      0D              { align1 1H };
(-f0.0) sel(16) g38<1>UD        g37<8,8,1>UD    0x00000020UD    { align1 1H I@2 };
add(16)         g7<1>D          g5<1,1,0>D      g38<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x0180UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g38<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0180UW        { align1 1H A@1 };
mov(16)         g8<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 };
else(16)        JIP:  LABEL4          UIP:  LABEL4              { align1 1H };

LABEL5:
mov(16)         g7<1>UD         0x00000000UD                    { align1 1H I@3 compacted };
mov(16)         g8<1>UD         0x00000000UD                    { align1 1H I@3 compacted };

LABEL4:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
mov(16)         g39<1>Q         0x000000000000082cQ             { align1 1H };
shl(16)         g43<1>D         g7<8,8,1>D      0x00000002UD    { align1 1H I@4 };
mov(16)         g57<1>Q         0x0000000000002c2cQ             { align1 1H };
add(16)         g67<1>Q         g1.5<0,1,0>Q    g16<1,1,0>Q     { align1 1H compacted };
shl(16)         g82<1>D         g8<8,8,1>D      0x00000009UD    { align1 1H I@6 };
mov(16)         g86<1>Q         0x0000000000000010Q             { align1 1H };
and(16)         g88<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H };
mov(16)         g96<1>Q         0x0000000000000020Q             { align1 1H };
and(1)          g106<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
add(16)         g41<1>Q         g39<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@7 compacted };
mov(16)         g107<2>UD       g43<1,1,0>UD                    { align1 1H I@7 compacted };
add(16)         g59<1>Q         g1.4<0,1,0>Q    g57<1,1,0>Q     { align1 1H I@7 compacted };
shl(16)         g89<1>D         g88<8,8,1>D     0x00000004UD    { align1 1H I@6 };
mov(8)          g91<1>UW        0x76543210V                     { align1 WE_all 1Q $2.src };
shr(1)          g109<1>UD       g106<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g110<1>UW       0x76543210V                     { align1 WE_all 1Q };
mov(16)         g44<1>UQ        g107<8,4,2>UD                   { align1 1H I@6 };
add(8)          g91.8<1>UW      g91<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
add(8)          g110.8<1>UW     g110<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@3 };
add(16)         g46<1>Q         g41<1,1,0>Q     g44<1,1,0>Q     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g90<1>UD        g91<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g111<1>UD       g110<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g48UD           g46UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g92<1>D         g90<1,1,0>D     g89<1,1,0>D     { align1 1H compacted };
and(16)         g15<1>UD        g92<8,8,1>UD    0x000001ffUD    { align1 1H I@1 };
mov(16)         g114<2>UD       g15<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g93<1>UQ        g114<8,4,2>UD                   { align1 1H I@1 };
mov(16)         g49<1>UD        g48<16,8,2>UW                   { align1 1H $3.dst };
mov(16)         g61<1>UD        g48.1<16,8,2>UW                 { align1 1H };
asr(16)         g50<1>D         g49<8,8,1>D     0x0000001fUD    { align1 1H I@2 };
mul(16)         acc0<1>UD       g49<8,8,1>UD    0x0058UW        { align1 1H };
mul(16)         g52<1>D         g49<1,1,0>D     88W             { align1 1H compacted };
mul(16)         g62<1>D         g61<1,1,0>D     1484W           { align1 1H I@4 compacted };
mul(16)         g53<1>D         g50<1,1,0>D     88W             { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mach(16)        g51<1>UD        g49<8,8,1>UD    0x00000058UD    { align1 1H };
mov(16)         g55<2>UD        g52<1,1,0>UD                    { align1 1H I@4 compacted };
mov(16)         g112<2>UD       g62<1,1,0>UD                    { align1 1H I@4 compacted };
add(16)         g54<1>D         g51<1,1,0>D     g53<1,1,0>D     { align1 1H I@3 compacted };
mov(16)         g63<1>UQ        g112<8,4,2>UD                   { align1 1H I@2 };
mov(16)         g55.1<2>UD      g54<1,1,0>UD                    { align1 1H I@2 compacted };
add(16)         g65<1>Q         g59<1,1,0>Q     g63<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g69<1>Q         g67<1,1,0>Q     g55<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g79UD           g65UD           nullUD          0x04302580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V3, L1STATE_L3MOCS dst_len = 3, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g71UD           g69UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add(16)         g83<1>D         g79<1,1,0>D     g82<1,1,0>D     { align1 1H $4.dst compacted };
mov(16)         g116<2>UD       g81<1,1,0>UD                    { align1 1H $4.dst compacted };
mov(16)         g75<2>UD        g71<1,1,0>UD                    { align1 1H $5.dst compacted };
mov(16)         g77<2>UD        g73<1,1,0>UD                    { align1 1H $5.dst compacted };
add(16)         g84<1>D         g83<8,8,1>D     512D            { align1 1H I@4 };
add(16)         g95<1>D         g83<1,1,0>D     g15<1,1,0>D     { align1 1H compacted };
mov(16)         g99<1>UQ        g116<8,4,2>UD                   { align1 1H I@5 };
mov(16)         g75.1<2>UD      g72<1,1,0>UD                    { align1 1H @5 $5.dst compacted };
mov(16)         g77.1<2>UD      g74<1,1,0>UD                    { align1 1H @5 $5.dst compacted };
sel.l(16)       g85<1>UD        g84<1,1,0>UD    g80<1,1,0>UD    { align1 1H @5 $4.dst compacted };
shl(16)         g101<1>Q        g99<4,4,1>Q     0x00000005UD    { align1 1H I@4 };
add(16)         g98<1>Q         g77<1,1,0>Q     g96<1,1,0>Q     { align1 1H I@3 compacted };
add(16)         g103<1>Q        g98<1,1,0>Q     g101<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g105UD          g103UD          nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
or(1)           a0.1<1>UD       g109<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g111UD          g105UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
and(1)          g112<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g113<1>UD       g112<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g114<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g114.8<1>UW     g114<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g115<1>UD       g114<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g116<1>UD       g115<8,8,1>UD   0x00000040UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g113<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g116UD          g106UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g118<1>UD       g117<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g119<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g119.8<1>UW     g119<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g120<1>UD       g119<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g121<1>UD       g120<8,8,1>UD   0x00000080UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g118<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g121UD          g107UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
and(1)          g122<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g123<1>UD       g122<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g124<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g124.8<1>UW     g124<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g125<1>UD       g124<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g126<1>UD       g125<8,8,1>UD   0x000000c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g123<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g126UD          g108UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g1<1>Q          g86<1,1,0>Q     g103<1,1,0>Q    { align1 1H $6.src compacted };
and(1)          g5<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g3UD            g1UD            nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
shr(1)          g6<1>UD         g5<0,1,0>UD     0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g7<1>UW         0x76543210V                     { align1 WE_all 1Q };
add(8)          g7.8<1>UW       g7<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g8<1>UD         g7<8,8,1>UW     0x00000002UD    { align1 1H };
or(16)          g9<1>UD         g8<8,8,1>UD     0x00000100UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g6<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g9UD            g3UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
and(1)          g10<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g11<1>UD        g10<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g12<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g12.8<1>UW      g12<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g13<1>UD        g12<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g14<1>UD        g13<8,8,1>UD    0x00000140UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g11<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g14UD           g4UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
and(1)          g16<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g21<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $1.src };
and(1)          g27<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g33<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g17<1>UD        g16<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g18<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g22<1>UD        g21<0,1,0>UD    0x00000004UD    { align1 WE_all 1N @5 $1.dst };
mov(8)          g23<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g28<1>UD        g27<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g29<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g34<1>UD        g33<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g35<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g18.8<1>UW      g18<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g23.8<1>UW      g23<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g29.8<1>UW      g29<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g35.8<1>UW      g35<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g19<1>UD        g18<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g24<1>UD        g23<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g30<1>UD        g29<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g36<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g17<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g20UD           g19UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
or(16)          g25<1>UD        g24<8,8,1>UD    0x00000040UD    { align1 1H I@3 };
or(16)          g31<1>UD        g30<8,8,1>UD    0x00000080UD    { align1 1H I@3 };
or(16)          g37<1>UD        g36<8,8,1>UD    0x000000c0UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g22<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g26UD           g25UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g28<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g32UD           g31UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g34<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g38UD           g37UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g40<1>F         g3<1,1,0>F      -g26<1,1,0>F    { align1 1H $15.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g41<1>F         g4<1,1,0>F      -g32<1,1,0>F    { align1 1H $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
add(16)         g39<1>F         g38<1,1,0>F     -g20<1,1,0>F    { align1 1H $1.dst compacted };
sel.ge(16)      g43<1>F         g40<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sel.ge(16)      g44<1>F         g41<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sel.ge(16)      g42<1>F         g39<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
math inv(16)    g47<1>F         g43<8,8,1>F     null<8,8,1>F    { align1 1H F@3 };
math inv(16)    g49<1>F         g44<8,8,1>F     null<8,8,1>F    { align1 1H F@2 };
math inv(16)    g45<1>F         g42<8,8,1>F     null<8,8,1>F    { align1 1H F@1 };
cmp.l.f0.0(16)  g51<1>F         g42<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H };
cmp.g.f0.0(16)  g52<1>F         g39<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
mul(16)         g48<1>F         g47<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H M@3 };
mul(16)         g50<1>F         g49<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H M@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mul(16)         g46<1>F         g45<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H M@1 };
and.nz.f0.0(16) null<1>UD       g51<8,8,1>UD    g52<8,8,1>UD    { align1 1H F@4 };
(+f0.0) sel(16) g53<1>UD        g46<8,8,1>UD    0x00000000UD    { align1 1H F@1 };
cmp.g.f0.0(16)  g54<1>F         g40<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g55<1>F         g43<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H };
and.nz.f0.0(16) null<1>UD       g55<8,8,1>UD    g54<8,8,1>UD    { align1 1H F@1 };
(+f0.0) sel(16) g56<1>UD        g48<8,8,1>UD    0x00000000UD    { align1 1H F@5 };
cmp.g.f0.0(16)  g57<1>F         g41<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g58<1>F         g44<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H };
and.nz.f0.0(16) null<1>UD       g58<8,8,1>UD    g57<8,8,1>UD    { align1 1H F@1 };
(+f0.0) sel(16) g59<1>UD        g50<8,8,1>UD    0x00000000UD    { align1 1H F@6 };
cmp.l.f0.0(16)  g60<1>UD        g95<1,1,0>UD    g85<1,1,0>UD    { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
mov(16)         g117<2>UD       g95<1,1,0>UD                    { align1 1H compacted };
mov(16)         g61<1>UQ        g117<8,4,2>UD                   { align1 1H I@1 };
shl(16)         g63<1>Q         g61<4,4,1>Q     0x00000005UD    { align1 1H I@1 };
add(16)         g67<1>Q         g75<1,1,0>Q     g63<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g69UD           g67UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add(16)         g73<1>Q         g67<1,1,0>Q     g86<1,1,0>Q     { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g75UD           g73UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
shl(16)         g79<1>Q         g93<4,4,1>Q     0x00000002UD    { align1 1H };
mov(16)         g118<2>UD       g79<4,4,1>UQ                    { align1 1H I@1 };
mov(16)         g10<1>UD        g118<8,4,2>UD                   { align1 1H I@1 };
mov(16)         g9<1>UD         g118<8,4,2>UD                   { align1 1H $12.src };

LABEL10:
cmp.ge.f0.0(16) null<1>UD       g9<8,8,1>UD     0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
shl(16)         g80<1>D         g9<8,8,1>D      0x00000002UD    { align1 1H $3.src };
mov(16)         g92<1>UD        0x7f800000UD                    { align1 1H $3.src };
mov(16)         g93<1>UD        0x7f800000UD                    { align1 1H $3.src };
mov(16)         g94<1>UD        0x7f800000UD                    { align1 1H $3.src };
mov(16)         g95<1>UD        0x7f800000UD                    { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g80UD           g92UD           0x02003504                0x00000100
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 4 flat )  base_offset 0  { align1 1H $3 };
add(16)         g9<1>D          g9<8,8,1>D      2048D           { align1 1H };

LABEL9:
while(16)       JIP:  LABEL10                                   { align1 1H };
nop                                                             ;

LABEL12:
cmp.ge.f0.0(16) null<1>UD       g10<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
shl(16)         g81<1>D         g10<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g93<1>UD        0x00000000UD                    { align1 1H $3.src compacted };
mov(16)         g94<1>UD        0x00000000UD                    { align1 1H $3.src compacted };
mov(16)         g95<1>UD        0x00000000UD                    { align1 1H $3.src compacted };
mov(16)         g96<1>UD        0x00000000UD                    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g82<1>D         g81<8,8,1>D     1152D           { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g82UD           g93UD           0x02003504                0x00000100
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 4 flat )  base_offset 0  { align1 1H $3 };
add(16)         g10<1>D         g10<8,8,1>D     2048D           { align1 1H };

LABEL11:
while(16)       JIP:  LABEL12                                   { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
send(1)         g83UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
mov(16)         g84<1>UD        0x00000000UD                    { align1 WE_all 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(2)          g84.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g84.2<1>UD      g84.2<0,1,0>UD  0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g84UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $5 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g85<1>F         g69<1,1,0>F     g75<1,1,0>F     { align1 1H $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g86<1>F         g70<1,1,0>F     g76<1,1,0>F     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g87<1>F         g71<1,1,0>F     g77<1,1,0>F     { align1 1H I@7 compacted };
add(16)         g88<1>F         g85<1,1,0>F     -g20<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g89<1>F         g86<1,1,0>F     -g26<1,1,0>F    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g91<1>F         g87<1,1,0>F     -g32<1,1,0>F    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mul(16)         g92<1>F         g88<1,1,0>F     g53<1,1,0>F     { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mul(16)         g93<1>F         g89<1,1,0>F     g56<1,1,0>F     { align1 1H A@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mul(16)         g94<1>F         g91<1,1,0>F     g59<1,1,0>F     { align1 1H A@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g95<1>UD        g92<8,8,1>F                     { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g96<1>UD        g93<8,8,1>F                     { align1 1H F@2 };
mov(16)         g97<1>UD        g94<8,8,1>F                     { align1 1H F@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g60<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g11<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g98<1>UD        g90<8,8,1>UD    0x00000003UD    { align1 1H };
shr(16)         g99<1>UD        g90<8,8,1>UD    0x00000002UD    { align1 1H };
mov(1)          g105<1>D        1D                              { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g100<1>D        g105<0,1,0>D    g90<8,8,1>UD    { align1 1H };

LABEL15:
cmp.z.f0.0(16)  null<1>D        g11<8,8,1>D     0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL13       UIP:  LABEL13             { align1 1H };
fbl(16)         g101<1>UD       g11<1,1,0>UD                    { align1 1H compacted };
mov(16)         a0<1>UW         0x17c0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g101<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x17c0UW        { align1 1H A@1 };
mov(16)         g102<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 };
cmp.z.f0.0(16)  g103<1>D        g102<1,1,0>D    g95<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g103<8,8,1>UD   g60<8,8,1>UD    { align1 1H I@1 };
(+f0.0) sel(16) g104<1>UD       g75<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
(+f0.0) sel(16) g105<1>UD       g76<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
(+f0.0) sel(16) g106<1>UD       g77<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
(+f0.0) sel(16) g107<1>UD       g69<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
(+f0.0) sel(16) g108<1>UD       g70<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g109<1>UD       g71<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g68<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g68<1>F         g104<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g73<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g73<1>F         g105<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g74<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g74<1>F         g106<1,1,0>F                    { align1 1H compacted };
mov(16)         g63<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g63<1>F         g107<1,1,0>F                    { align1 1H compacted };
mov(16)         g64<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g64<1>F         g108<1,1,0>F                    { align1 1H compacted };
mov(16)         g67<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g67<1>F         g109<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g98<8,8,1>D     1D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(8)          g19<2>UD        g68.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g27<2>UD        g73.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g35<2>UD        g74.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g120<2>UD       g63.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g1<2>UD         g64.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g9<2>UD         g67.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g18<2>F         g68<8,4,2>F     g19<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.ge(8)       g26<2>F         g73<8,4,2>F     g27<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g34<2>F         g74<8,4,2>F     g35<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g119<2>F        g63<8,4,2>F     g120<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.l(8)        g127<2>F        g64<8,4,2>F     g1<8,4,2>F      { align1 WE_all 1Q I@2 };
sel.l(8)        g8<2>F          g67<8,4,2>F     g9<8,4,2>F      { align1 WE_all 1Q I@1 };
mov(8)          g68.1<2>UD      g18<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g73.1<2>UD      g26<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g74.1<2>UD      g34<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g63.1<2>UD      g119<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g64.1<2>UD      g127<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g67.1<2>UD      g8<8,4,2>UD                     { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g21<4>UD        g68.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g22<4>UD        g68.2<8,2,4>UD                  { align1 WE_all 1N $1.dst };
mov(4)          g29<4>UD        g73.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g30<4>UD        g73.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g37<4>UD        g74.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g38<4>UD        g74.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g122<4>UD       g63.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g123<4>UD       g63.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g3<4>UD         g64.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g4<4>UD         g64.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g12<4>UD        g67.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g13<4>UD        g67.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g20<4>F         g21<8,2,4>F     g22<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g28<4>F         g29<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g36<4>F         g37<8,2,4>F     g38<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g121<4>F        g122<8,2,4>F    g123<8,2,4>F    { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g2<4>F          g3<8,2,4>F      g4<8,2,4>F      { align1 WE_all 1N I@3 };
sel.l(4)        g10<4>F         g12<8,2,4>F     g13<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g68.2<4>UD      g20<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g73.2<4>UD      g28<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g74.2<4>UD      g36<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g63.2<4>UD      g121<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g64.2<4>UD      g2<8,2,4>UD                     { align1 WE_all 1N F@2 };
mov(4)          g67.2<4>UD      g10<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g24<4>UD        g68.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g25<4>UD        g68.3<8,2,4>UD                  { align1 WE_all 1N $15.src };
mov(4)          g32<4>UD        g73.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g33<4>UD        g73.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g40<4>UD        g74.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g41<4>UD        g74.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g125<4>UD       g63.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g126<4>UD       g63.3<8,2,4>UD                  { align1 WE_all 1N $10.src };
mov(4)          g6<4>UD         g64.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g7<4>UD         g64.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g16<4>UD        g67.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g17<4>UD        g67.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g23<4>F         g24<8,2,4>F     g25<8,2,4>F     { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.ge(4)       g31<4>F         g32<8,2,4>F     g33<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g39<4>F         g40<8,2,4>F     g41<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g124<4>F        g125<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N I@5 };
sel.l(4)        g5<4>F          g6<8,2,4>F      g7<8,2,4>F      { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.l(4)        g14<4>F         g16<8,2,4>F     g17<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g68.3<4>UD      g23<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g73.3<4>UD      g31<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g74.3<4>UD      g39<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g63.3<4>UD      g124<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g64.3<4>UD      g5<8,2,4>UD                     { align1 WE_all 1N F@2 };
mov(4)          g67.3<4>UD      g14<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g68.4<1>F       g68.3<0,1,0>F   g68.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g68.12<1>F      g68.11<0,1,0>F  g68.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g73.4<1>F       g73.3<0,1,0>F   g73.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g73.12<1>F      g73.11<0,1,0>F  g73.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g74.4<1>F       g74.3<0,1,0>F   g74.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g74.12<1>F      g74.11<0,1,0>F  g74.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g63.4<1>F       g63.3<0,1,0>F   g63.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g63.12<1>F      g63.11<0,1,0>F  g63.12<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g64.4<1>F       g64.3<0,1,0>F   g64.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g64.12<1>F      g64.11<0,1,0>F  g64.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g67.4<1>F       g67.3<0,1,0>F   g67.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g67.12<1>F      g67.11<0,1,0>F  g67.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g68.8<1>F       g68.7<0,1,0>F   g68.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g73.8<1>F       g73.7<0,1,0>F   g73.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g74.8<1>F       g74.7<0,1,0>F   g74.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g63.8<1>F       g63.7<0,1,0>F   g63.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g64.8<1>F       g64.7<0,1,0>F   g64.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g67.8<1>F       g67.7<0,1,0>F   g67.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g111<1>UD       g73.15<0,1,0>UD g68.15<0,1,0>UD { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g110<1>UD       g64.15<0,1,0>UD g63.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g98<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g112<1>UD       g67.15<0,1,0>UD g110<8,8,1>UD   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g113<1>UD       g74.15<0,1,0>UD g111<8,8,1>UD   { align1 1H };
cmp.z.f0.0(16)  null<1>D        g99<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
(+f0.0) sel(16) g94<1>F         g112<1,1,0>F    -g113<1,1,0>F   { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g100<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
mul(16)         g114<1>D        g102<1,1,0>D    6W              { align1 1H compacted };
mul(16)         g115<1>D        g99<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add3(16)        g116<1>D        g114<8,8,1>D    g98<8,8,1>D     g115<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g117<1>D        g116<8,8,1>D    0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g117UD          g94UD           0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $6 };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
or(16)          g118<1>D        ~g103<1,1,0>D   ~g60<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g118<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov(16)         g119<1>UD       f0<0,1,0>UW                     { align1 1H };
and(16)         g11<1>UD        g11<1,1,0>UD    g119<1,1,0>UD   { align1 1H I@1 compacted };

LABEL13:
while(16)       JIP:  LABEL15                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g120<1>D        g96<8,8,1>D     16D             { align1 1H };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g60<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g12<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL18:
cmp.z.f0.0(16)  null<1>D        g12<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL16       UIP:  LABEL16             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
fbl(16)         g121<1>UD       g12<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x1e00UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g121<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x1e00UW        { align1 1H A@1 };
mov(16)         g122<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g123<1>D        g122<1,1,0>D    g120<1,1,0>D    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g123<8,8,1>UD   g60<8,8,1>UD    { align1 1H I@1 };
(+f0.0) sel(16) g124<1>UD       g75<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g125<1>UD       g76<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
(+f0.0) sel(16) g126<1>UD       g77<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g127<1>UD       g69<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
(+f0.0) sel(16) g1<1>UD         g70<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
(+f0.0) sel(16) g2<1>UD         g71<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g82<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g82<1>F         g124<1,1,0>F                    { align1 1H compacted };
mov(16)         g83<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g83<1>F         g125<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g84<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g84<1>F         g126<1,1,0>F                    { align1 1H compacted };
mov(16)         g79<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g79<1>F         g127<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g80<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g80<1>F         g1<1,1,0>F                      { align1 1H compacted };
mov(16)         g81<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g81<1>F         g2<1,1,0>F                      { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g98<8,8,1>D     1D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g74<2>UD        g82.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g92<2>UD        g83.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g106<2>UD       g84.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g43<2>UD        g79.1<8,4,2>UD                  { align1 WE_all 1Q A@3 };
mov(8)          g51<2>UD        g80.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g59<2>UD        g81.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(8)       g73<2>F         g82<8,4,2>F     g74<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.ge(8)       g91<2>F         g83<8,4,2>F     g92<8,4,2>F     { align1 WE_all 1Q A@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(8)       g105<2>F        g84<8,4,2>F     g106<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g42<2>F         g79<8,4,2>F     g43<8,4,2>F     { align1 WE_all 1Q A@1 };
sel.l(8)        g50<2>F         g80<8,4,2>F     g51<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.l(8)        g58<2>F         g81<8,4,2>F     g59<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g82.1<2>UD      g73<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g83.1<2>UD      g91<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g84.1<2>UD      g105<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g79.1<2>UD      g42<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g80.1<2>UD      g50<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g81.1<2>UD      g58<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g86<4>UD        g82.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g87<4>UD        g82.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g94<4>UD        g83.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g101<4>UD       g83.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(4)          g108<4>UD       g84.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g109<4>UD       g84.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g45<4>UD        g79.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g46<4>UD        g79.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g53<4>UD        g80.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g54<4>UD        g80.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g62<4>UD        g81.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g63<4>UD        g81.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g85<4>F         g86<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g93<4>F         g94<8,2,4>F     g101<8,2,4>F    { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(4)       g107<4>F        g108<8,2,4>F    g109<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g44<4>F         g45<8,2,4>F     g46<8,2,4>F     { align1 WE_all 1N A@2 };
sel.l(4)        g52<4>F         g53<8,2,4>F     g54<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g61<4>F         g62<8,2,4>F     g63<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g82.2<4>UD      g85<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g83.2<4>UD      g93<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g84.2<4>UD      g107<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g79.2<4>UD      g44<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g80.2<4>UD      g52<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g81.2<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g89<4>UD        g82.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g90<4>UD        g82.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g103<4>UD       g83.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g104<4>UD       g83.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g111<4>UD       g84.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g112<4>UD       g84.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g48<4>UD        g79.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g49<4>UD        g79.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g56<4>UD        g80.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g57<4>UD        g80.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g67<4>UD        g81.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g68<4>UD        g81.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g88<4>F         g89<8,2,4>F     g90<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g102<4>F        g103<8,2,4>F    g104<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g110<4>F        g111<8,2,4>F    g112<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g47<4>F         g48<8,2,4>F     g49<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g55<4>F         g56<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g64<4>F         g67<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g82.3<4>UD      g88<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g83.3<4>UD      g102<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g84.3<4>UD      g110<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g79.3<4>UD      g47<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g80.3<4>UD      g55<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g81.3<4>UD      g64<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g82.4<1>F       g82.3<0,1,0>F   g82.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g82.12<1>F      g82.11<0,1,0>F  g82.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g83.4<1>F       g83.3<0,1,0>F   g83.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g83.12<1>F      g83.11<0,1,0>F  g83.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g84.4<1>F       g84.3<0,1,0>F   g84.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g84.12<1>F      g84.11<0,1,0>F  g84.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g79.12<1>F      g79.11<0,1,0>F  g79.12<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g80.4<1>F       g80.3<0,1,0>F   g80.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g80.12<1>F      g80.11<0,1,0>F  g80.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g81.4<1>F       g81.3<0,1,0>F   g81.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g81.12<1>F      g81.11<0,1,0>F  g81.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g82.8<1>F       g82.7<0,1,0>F   g82.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g83.8<1>F       g83.7<0,1,0>F   g83.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g84.8<1>F       g84.7<0,1,0>F   g84.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g79.8<1>F       g79.7<0,1,0>F   g79.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g80.8<1>F       g80.7<0,1,0>F   g80.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g81.8<1>F       g81.7<0,1,0>F   g81.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g4<1>UD         g83.15<0,1,0>UD g82.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g3<1>UD         g80.15<0,1,0>UD g79.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g98<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g5<1>UD         g81.15<0,1,0>UD g3<8,8,1>UD     { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g6<1>UD         g84.15<0,1,0>UD g4<8,8,1>UD     { align1 1H };
cmp.z.f0.0(16)  null<1>D        g99<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g101<1>F        g5<1,1,0>F      -g6<1,1,0>F     { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g100<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
mul(16)         g7<1>D          g122<1,1,0>D    6W              { align1 1H compacted };
mul(16)         g8<1>D          g99<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g9<1>D          g7<8,8,1>D      g98<8,8,1>D     g8<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g10<1>D         g9<8,8,1>D      0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g10UD           g101UD          0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $7 };

LABEL17:
endif(16)       JIP:  LABEL16                                   { align1 1H };
or(16)          g11<1>D         ~g123<1,1,0>D   ~g60<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g11<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g13<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g12<1>UD        g12<1,1,0>UD    g13<1,1,0>UD    { align1 1H I@1 compacted };

LABEL16:
while(16)       JIP:  LABEL18                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g14<1>D         g97<8,8,1>D     32D             { align1 1H };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g60<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g13<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL21:
cmp.z.f0.0(16)  null<1>D        g13<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL19       UIP:  LABEL19             { align1 1H };
fbl(16)         g16<1>UD        g13<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0380UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g16<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0380UW        { align1 1H A@1 };
mov(16)         g17<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 };
cmp.z.f0.0(16)  g18<1>D         g17<1,1,0>D     g14<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g18<8,8,1>UD    g60<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
(+f0.0) sel(16) g19<1>UD        g75<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g20<1>UD        g76<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g21<1>UD        g77<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
(+f0.0) sel(16) g22<1>UD        g69<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g23<1>UD        g70<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g24<1>UD        g71<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g88<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g88<1>F         g19<1,1,0>F                     { align1 1H compacted };
mov(16)         g89<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g89<1>F         g20<1,1,0>F                     { align1 1H compacted };
mov(16)         g90<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g90<1>F         g21<1,1,0>F                     { align1 1H compacted };
mov(16)         g85<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g85<1>F         g22<1,1,0>F                     { align1 1H compacted };
mov(16)         g86<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g86<1>F         g23<1,1,0>F                     { align1 1H compacted };
mov(16)         g87<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g87<1>F         g24<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g98<8,8,1>D     1D              { align1 1H };
mov(8)          g11<2>UD        g88.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g31<2>UD        g89.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g39<2>UD        g90.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g114<2>UD       g85.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g122<2>UD       g86.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g3<2>UD         g87.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(8)       g10<2>F         g88<8,4,2>F     g11<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.ge(8)       g30<2>F         g89<8,4,2>F     g31<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g38<2>F         g90<8,4,2>F     g39<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g113<2>F        g85<8,4,2>F     g114<8,4,2>F    { align1 WE_all 1Q A@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(8)        g121<2>F        g86<8,4,2>F     g122<8,4,2>F    { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(8)        g2<2>F          g87<8,4,2>F     g3<8,4,2>F      { align1 WE_all 1Q I@1 };
mov(8)          g88.1<2>UD      g10<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g89.1<2>UD      g30<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g90.1<2>UD      g38<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g85.1<2>UD      g113<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g86.1<2>UD      g121<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g87.1<2>UD      g2<8,4,2>UD                     { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g25<4>UD        g88.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g26<4>UD        g88.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g33<4>UD        g89.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g34<4>UD        g89.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g41<4>UD        g90.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g42<4>UD        g90.2<8,2,4>UD                  { align1 WE_all 1N M@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g116<4>UD       g85.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g117<4>UD       g85.2<8,2,4>UD                  { align1 WE_all 1N $6.src };
mov(4)          g124<4>UD       g86.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g125<4>UD       g86.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g5<4>UD         g87.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g6<4>UD         g87.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g12<4>F         g25<8,2,4>F     g26<8,2,4>F     { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g32<4>F         g33<8,2,4>F     g34<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g40<4>F         g41<8,2,4>F     g42<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g115<4>F        g116<8,2,4>F    g117<8,2,4>F    { align1 WE_all 1N I@5 };
sel.l(4)        g123<4>F        g124<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@3 };
sel.l(4)        g4<4>F          g5<8,2,4>F      g6<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g88.2<4>UD      g12<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g89.2<4>UD      g32<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g90.2<4>UD      g40<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g85.2<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g86.2<4>UD      g123<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g87.2<4>UD      g4<8,2,4>UD                     { align1 WE_all 1N F@1 };
mov(4)          g28<4>UD        g88.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g29<4>UD        g88.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g36<4>UD        g89.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g37<4>UD        g89.3<8,2,4>UD                  { align1 WE_all 1N $1.src };
mov(4)          g44<4>UD        g90.1<8,2,4>UD                  { align1 WE_all 1N A@2 };
mov(4)          g45<4>UD        g90.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g119<4>UD       g85.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g120<4>UD       g85.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g127<4>UD       g86.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g1<4>UD         g86.3<8,2,4>UD                  { align1 WE_all 1N $11.src };
mov(4)          g8<4>UD         g87.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g9<4>UD         g87.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g27<4>F         g28<8,2,4>F     g29<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g35<4>F         g36<8,2,4>F     g37<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g43<4>F         g44<8,2,4>F     g45<8,2,4>F     { align1 WE_all 1N A@3 };
sel.l(4)        g118<4>F        g119<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.l(4)        g126<4>F        g127<8,2,4>F    g1<8,2,4>F      { align1 WE_all 1N I@3 };
sel.l(4)        g7<4>F          g8<8,2,4>F      g9<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g88.3<4>UD      g27<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g89.3<4>UD      g35<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g90.3<4>UD      g43<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g85.3<4>UD      g118<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g86.3<4>UD      g126<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g87.3<4>UD      g7<8,2,4>UD                     { align1 WE_all 1N F@1 };
sel.ge(4)       g88.4<1>F       g88.3<0,1,0>F   g88.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g88.12<1>F      g88.11<0,1,0>F  g88.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g89.4<1>F       g89.3<0,1,0>F   g89.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g89.12<1>F      g89.11<0,1,0>F  g89.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g90.4<1>F       g90.3<0,1,0>F   g90.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g90.12<1>F      g90.11<0,1,0>F  g90.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g85.4<1>F       g85.3<0,1,0>F   g85.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g85.12<1>F      g85.11<0,1,0>F  g85.12<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g86.4<1>F       g86.3<0,1,0>F   g86.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g86.12<1>F      g86.11<0,1,0>F  g86.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g87.4<1>F       g87.3<0,1,0>F   g87.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g87.12<1>F      g87.11<0,1,0>F  g87.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g88.8<1>F       g88.7<0,1,0>F   g88.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g89.8<1>F       g89.7<0,1,0>F   g89.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g90.8<1>F       g90.7<0,1,0>F   g90.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g85.8<1>F       g85.7<0,1,0>F   g85.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g86.8<1>F       g86.7<0,1,0>F   g86.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g87.8<1>F       g87.7<0,1,0>F   g87.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g26<1>UD        g89.15<0,1,0>UD g88.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g25<1>UD        g86.15<0,1,0>UD g85.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g98<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g27<1>UD        g87.15<0,1,0>UD g25<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g28<1>UD        g90.15<0,1,0>UD g26<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g99<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g102<1>F        g27<1,1,0>F     -g28<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g100<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL20         UIP:  LABEL20             { align1 1H };
mul(16)         g29<1>D         g17<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g30<1>D         g99<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g31<1>D         g29<8,8,1>D     g98<8,8,1>D     g30<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g32<1>D         g31<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g32UD           g102UD          0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $8 };

LABEL20:
endif(16)       JIP:  LABEL19                                   { align1 1H };
or(16)          g33<1>D         ~g18<1,1,0>D    ~g60<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g33<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g34<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g13<1>UD        g13<1,1,0>UD    g34<1,1,0>UD    { align1 1H I@1 compacted };

LABEL19:
while(16)       JIP:  LABEL21                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g60<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL22         UIP:  LABEL22             { align1 1H };
shl(16)         g35<1>D         g95<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g36<1>D         g35<8,8,1>D     1152D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g36UD           nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g37<1>D         g96<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g38<1>D         g37<8,8,1>D     1216D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g38UD           nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
shl(16)         g39<1>D         g97<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g40<1>D         g39<8,8,1>D     1280D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g40UD           nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };

LABEL22:
endif(16)       JIP:  LABEL23                                   { align1 1H };

LABEL23:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
send(1)         g41UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
mov(16)         g42<1>UD        0x00000000UD                    { align1 WE_all 1H M@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(2)          g42.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g42.2<1>UD      g42.2<0,1,0>UD  0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g42UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $13 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
mov(16)         g43<1>Q         0x000000000000002cQ             { align1 1H };
mov(16)         g14<1>UD        g15<1,1,0>UD                    { align1 1H compacted };

LABEL26:
cmp.ge.f0.0(16) null<1>UD       g14<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL24       UIP:  LABEL24             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g45<1>D         g14<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g103UD          g45UD           nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g48<2>UD        g45<1,1,0>UD                    { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g46<1>UQ        g48<8,4,2>UD                    { align1 1H };
cmp.nz.f0.0(16) null<1>F        g103<1,1,0>F    0x7f800000F  /* infF */ { align1 1H $14.dst compacted };
(+f0.0) if(16)  JIP:  LABEL25         UIP:  LABEL25             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g48<1>Q         g65<1,1,0>Q     g43<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g50<1>Q         g48<1,1,0>Q     g46<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g50UD           g103UD          0x04040595                0x00000040
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $15 };

LABEL25:
endif(16)       JIP:  LABEL24                                   { align1 1H };
add(16)         g14<1>D         g14<8,8,1>D     512D            { align1 1H };

LABEL24:
while(16)       JIP:  LABEL26                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g51<1>Q         0x00000000000004acQ             { align1 1H };

LABEL29:
cmp.ge.f0.0(16) null<1>UD       g15<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL27       UIP:  LABEL27             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
shl(16)         g53<1>D         g15<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g55<1>D         g53<8,8,1>D     1152D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g49<2>UD        g53<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g104UD          g55UD           nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g54<1>UQ        g49<8,4,2>UD                    { align1 1H $0.src };
cmp.nz.f0.0(16) null<1>D        g104<8,8,1>D    0D              { align1 1H $0.dst };
(+f0.0) if(16)  JIP:  LABEL28         UIP:  LABEL28             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add(16)         g56<1>Q         g65<1,1,0>Q     g51<1,1,0>Q     { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g58<1>Q         g56<1,1,0>Q     g54<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g58UD           g104UD          0x0404058c                0x00000040
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $1 };

LABEL28:
endif(16)       JIP:  LABEL27                                   { align1 1H };
add(16)         g15<1>D         g15<8,8,1>D     512D            { align1 1H };

LABEL27:
while(16)       JIP:  LABEL29                                   { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H $10.src compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_code[] = {
    0x80000065, 0x33058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x10054770, 0x00000000, 0x00000008,
    0x00100061, 0x12054770, 0x00000000, 0x00000428,
    0x00100061, 0x17054770, 0x00000000, 0x0000042c,
    0x64800061, 0x00000005, 0x2c800061, 0x00110002,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x010c0000, 0xfa00330c, 0x00340000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38801c40, 0x12030114, 0x38801c40, 0x17030119,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x160c0000, 0xfb001414, 0x00000000,
    0x00101c69, 0x1b058660, 0x02460505, 0x00000002,
    0xb4001961, 0x00101b6a, 0x00101961, 0x1c050230,
    0x00446a06, 0x00000000, 0x38001940, 0x1c00191e,
    0xec840961, 0x00104032, 0x80000965, 0x32058220,
    0x02003204, 0xffffffff, 0x2c84194c, 0x00103220,
    0x800c0061, 0x3e054410, 0x00000000, 0x76543210,
    0x80001a69, 0x10018220, 0x02002004, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x21050330, 0x00010300, 0x00000000,
    0x800c1a40, 0x3e458110, 0x01463e05, 0x00080008,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x5b050770, 0x00002104, 0x00000000,
    0x80101a40, 0x3d058150, 0x05583e05, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c231, 0x1f0c0000, 0xfb005b0c, 0x00340000,
    0x80108261, 0x3b054660, 0x00000000, 0x00000000,
    0x7c000061, 0x00101f3b, 0x80101961, 0x10014110,
    0x00000000, 0x0ec00ec0, 0x80100069, 0x10018510,
    0x01463d05, 0x00020002, 0x80100940, 0x10018110,
    0x01461001, 0x0ec00ec0, 0x80100961, 0x3c050220,
    0x00710000, 0x00000000, 0x80001961, 0x3c054660,
    0x00000000, 0x00000000, 0x800c1940, 0x3c160660,
    0x06443c06, 0x00443c16, 0x80081940, 0x3c270660,
    0x06423c17, 0x00423c27, 0x80081940, 0x3c370660,
    0x06423c17, 0x00423c37, 0x80081940, 0x3c450660,
    0x06003c34, 0x00343c45, 0x80081a40, 0x3cc50660,
    0x06003cb4, 0x00343cc5, 0x800c1940, 0x3c850660,
    0x06003c74, 0x00463c85, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x7c000061, 0x00103c22,
    0xac000040, 0x3c200206, 0xe8181970, 0x1f000623,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22462305, 0x00000000,
    0x00100061, 0x04050120, 0x20003000, 0x00000000,
    0x04100022, 0x0001c060, 0x00000030, 0x00000030,
    0x00100061, 0x03054220, 0x00000000, 0xffffffff,
    0x00100028, 0x0001c660, 0x00000090, 0x00000010,
    0x00100025, 0x00004600, 0x00000000, 0x00000080,
    0xac001f40, 0x1f002224, 0x00100040, 0x05058660,
    0x06460505, 0x00000010, 0x00101a40, 0x02050660,
    0x06460205, 0x020024f4, 0x00114170, 0x00010220,
    0x42460505, 0x00461605, 0x04100022, 0x0001c060,
    0x00000028, 0x00000028, 0x64801f61, 0x00000003,
    0x00100028, 0x0001c660, 0x00000020, 0x00000010,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x00100027, 0x00014060, 0x00000000, 0xfffffd40,
    0x00101a61, 0x00010660, 0x20460305, 0x00000000,
    0x04100022, 0x0001c060, 0x000000a0, 0x00000090,
    0x2c001e4c, 0x00100425, 0x00100070, 0x00018660,
    0x16460405, 0x00000000, 0x14101a62, 0x26058220,
    0x02462505, 0x00000020, 0xac001940, 0x26000507,
    0x80100061, 0x10014110, 0x00000000, 0x01800180,
    0x00100069, 0x10018510, 0x01562606, 0x00020002,
    0x00100940, 0x10018110, 0x01461001, 0x01800180,
    0x00100961, 0x08050220, 0x00710000, 0x00000000,
    0x00100024, 0x0001c060, 0x00000020, 0x00000020,
    0x64801b61, 0x00000007, 0x64801b61, 0x00000008,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x00100061, 0x27054770, 0x00000000, 0x0000082c,
    0x00101c69, 0x2b058660, 0x02460705, 0x00000002,
    0x00100061, 0x39054770, 0x00000000, 0x00002c2c,
    0x38800040, 0x10070143, 0x00101e69, 0x52058660,
    0x02460805, 0x00000009, 0x00100061, 0x56054770,
    0x00000000, 0x00000010, 0x00100065, 0x58058220,
    0x02000024, 0x000000ff, 0x00100061, 0x60054770,
    0x00000000, 0x00000020, 0x80000065, 0x6a058220,
    0x02000054, 0xfffffc00, 0x38001f40, 0x01702729,
    0xb4001f61, 0x00102b6b, 0x38801f40, 0x3903013b,
    0x00101e69, 0x59058660, 0x02465805, 0x00000004,
    0x800ca261, 0x5b054410, 0x00000000, 0x76543210,
    0x80001e68, 0x6d058220, 0x02006a04, 0x00000004,
    0x800c0061, 0x6e054410, 0x00000000, 0x76543210,
    0x00101e61, 0x2c050230, 0x00446b06, 0x00000000,
    0x800c1c40, 0x5b458110, 0x01465b05, 0x00080008,
    0x800c1b40, 0x6e458110, 0x01466e05, 0x00080008,
    0x38001b40, 0x2c00292e, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x5a050120,
    0x00465b05, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x6f058120,
    0x02466e05, 0x00000002, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x300c0000,
    0xfb002e14, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xac000040, 0x59005a5c,
    0x00101965, 0x0f058220, 0x02465c05, 0x000001ff,
    0xb4001961, 0x00100f72, 0x00101961, 0x5d050230,
    0x00447206, 0x00000000, 0x00108361, 0x31050120,
    0x00563006, 0x00000000, 0x00100061, 0x3d050120,
    0x0056300e, 0x00000000, 0x00101a6c, 0x32058660,
    0x02463105, 0x0000001f, 0x00100041, 0x20018220,
    0x01463105, 0x00580058, 0x68000041, 0x05803134,
    0x68001c41, 0x5cc03d3e, 0x68001c41, 0x05803235,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00100049, 0x33058220, 0x02463105, 0x00000058,
    0xb4001c61, 0x00103437, 0xb4001c61, 0x00103e70,
    0xac001b40, 0x35003336, 0x00101a61, 0x3f050230,
    0x00447006, 0x00000000, 0xb4001a61, 0x00123637,
    0x38001a40, 0x3f003b41, 0x38001a40, 0x37004345,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x4f1c0000, 0xfb004114, 0x00080000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x47240000, 0xfb004514, 0x000c0000,
    0xac008440, 0x52004f53, 0xb4008461, 0x00105174,
    0xb4008561, 0x0010474b, 0xb4008561, 0x0010494d,
    0x00101c40, 0x54058660, 0x06465305, 0x00000200,
    0xac000040, 0x0f00535f, 0x00101d61, 0x63050230,
    0x00447406, 0x00000000, 0xb401a561, 0x0012484b,
    0xb401a561, 0x00124a4d, 0xe819a462, 0x50005455,
    0x00101c69, 0x65058770, 0x02346305, 0x00000005,
    0x38001b40, 0x60004d62, 0x38001940, 0x65006267,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x69240000, 0xfb006714, 0x000c0000,
    0x80008601, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006d04, 0x00000000,
    0x00112731, 0x00020100, 0xfa086f0c, 0x0400690c,
    0x80000065, 0x70058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x71058220, 0x02007004, 0x00000004,
    0x800c0061, 0x72054410, 0x00000000, 0x76543210,
    0x800c1940, 0x72458110, 0x01467205, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x73058120, 0x02467205, 0x00000002,
    0x00101966, 0x74058220, 0x02467305, 0x00000040,
    0x80008601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007104, 0x00000000,
    0x00112831, 0x00020100, 0xfa08740c, 0x04006a0c,
    0x80000065, 0x75058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x76058220, 0x02007504, 0x00000004,
    0x800c0061, 0x77054410, 0x00000000, 0x76543210,
    0x800c1940, 0x77458110, 0x01467705, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x78058120, 0x02467705, 0x00000002,
    0x00101966, 0x79058220, 0x02467805, 0x00000080,
    0x80008601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007604, 0x00000000,
    0x00112931, 0x00020100, 0xfa08790c, 0x04006b0c,
    0x80000065, 0x7a058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x7b058220, 0x02007a04, 0x00000004,
    0x800c0061, 0x7c054410, 0x00000000, 0x76543210,
    0x800c1940, 0x7c458110, 0x01467c05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x7d058120, 0x02467c05, 0x00000002,
    0x00101966, 0x7e058220, 0x02467d05, 0x000000c0,
    0x80008601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007b04, 0x00000000,
    0x00112a31, 0x00020100, 0xfa087e0c, 0x04006c0c,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x3800a640, 0x67005601, 0x80000065, 0x05058220,
    0x02000054, 0xfffffc00, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010cb31, 0x03140000,
    0xfb000114, 0x00040000, 0x80001968, 0x06058220,
    0x02000504, 0x00000004, 0x800c0061, 0x07054410,
    0x00000000, 0x76543210, 0x800c1940, 0x07458110,
    0x01460705, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x08058120,
    0x02460705, 0x00000002, 0x00101966, 0x09058220,
    0x02460805, 0x00000100, 0x80008b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000604, 0x00000000, 0x00112c31, 0x00020100,
    0xfa08090c, 0x0400030c, 0x80000065, 0x0a058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x0b058220,
    0x02000a04, 0x00000004, 0x800c0061, 0x0c054410,
    0x00000000, 0x76543210, 0x800c1940, 0x0c458110,
    0x01460c05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x0d058120,
    0x02460c05, 0x00000002, 0x00101966, 0x0e058220,
    0x02460d05, 0x00000140, 0x80008b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000b04, 0x00000000, 0x00112d31, 0x00020100,
    0xfa080e0c, 0x0400040c, 0x80000065, 0x10058220,
    0x02000054, 0xfffffc00, 0x8000a165, 0x15058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x1b058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x21058220,
    0x02000054, 0xfffffc00, 0x80001c68, 0x11058220,
    0x02001004, 0x00000004, 0x800c0061, 0x12054410,
    0x00000000, 0x76543210, 0x8001a168, 0x16058220,
    0x02001504, 0x00000004, 0x800c0061, 0x17054410,
    0x00000000, 0x76543210, 0x80001e68, 0x1c058220,
    0x02001b04, 0x00000004, 0x800c0061, 0x1d054410,
    0x00000000, 0x76543210, 0x80001f68, 0x22058220,
    0x02002104, 0x00000004, 0x800c0061, 0x23054410,
    0x00000000, 0x76543210, 0x800c1f40, 0x12458110,
    0x01461205, 0x00080008, 0x800c1e40, 0x17458110,
    0x01461705, 0x00080008, 0x800c1d40, 0x1d458110,
    0x01461d05, 0x00080008, 0x800c1c40, 0x23458110,
    0x01462305, 0x00080008, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x13058120,
    0x02461205, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x18058120,
    0x02461705, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x1e058120,
    0x02461d05, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x24058120,
    0x02462305, 0x00000002, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001104, 0x00000000, 0x00112e31, 0x140e0100,
    0xfa00130c, 0x04000000, 0x00101b66, 0x19058220,
    0x02461805, 0x00000040, 0x00101b66, 0x1f058220,
    0x02461e05, 0x00000080, 0x00101b66, 0x25058220,
    0x02462405, 0x000000c0, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001604, 0x00000000, 0x00112f31, 0x1a0e0100,
    0xfa00190c, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001c04, 0x00000000, 0x00112031, 0x200e0100,
    0xfa001f0c, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002204, 0x00000000, 0x00112131, 0x260e0100,
    0xfa00250c, 0x04000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x20008f40, 0x1a200328,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x20008040, 0x20200429, 0x80008e01, 0x00000000,
    0x00000000, 0x00000000, 0x20008140, 0x14202627,
    0x00101362, 0x2b058aa0, 0x4a462805, 0x0704ec3d,
    0x00101362, 0x2c058aa0, 0x4a462905, 0x0704ec3d,
    0x00101362, 0x2a058aa0, 0x4a462705, 0x0704ec3d,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x00101338, 0x2f050aa0, 0x1a462b05, 0x00460001,
    0x00101238, 0x31050aa0, 0x1a462c05, 0x00460001,
    0x00101138, 0x2d050aa0, 0x1a462a05, 0x00460001,
    0x00100070, 0x33058aa0, 0x5a462a05, 0x77f684df,
    0x00100070, 0x34058aa0, 0x3a462705, 0x0704ec3d,
    0x00102b41, 0x30058aa0, 0x0a462f05, 0x417d70a4,
    0x00102a41, 0x32058aa0, 0x0a463105, 0x417d70a4,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x00102941, 0x2e058aa0, 0x0a462d05, 0x417d70a4,
    0x00101465, 0x00010220, 0x22463305, 0x00463405,
    0x04101162, 0x35058220, 0x02462e05, 0x00000000,
    0x00100070, 0x36058aa0, 0x3a462805, 0x0704ec3d,
    0x00100070, 0x37058aa0, 0x5a462b05, 0x77f684df,
    0x00101165, 0x00010220, 0x22463705, 0x00463605,
    0x04101562, 0x38058220, 0x02463005, 0x00000000,
    0x00100070, 0x39058aa0, 0x3a462905, 0x0704ec3d,
    0x00100070, 0x3a058aa0, 0x5a462c05, 0x77f684df,
    0x00101165, 0x00010220, 0x22463a05, 0x00463905,
    0x04101662, 0x3b058220, 0x02463205, 0x00000000,
    0xe8180070, 0x55005f3c, 0x04100022, 0x0001c060,
    0x00000088, 0x00000088, 0xb4000061, 0x00105f75,
    0x00101961, 0x3d050230, 0x00447506, 0x00000000,
    0x00101969, 0x3f058770, 0x02343d05, 0x00000005,
    0x38001940, 0x3f004b43, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x45240000,
    0xfb004314, 0x000c0000, 0x3800a540, 0x56004349,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x4b240000, 0xfb004914, 0x000c0000,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x00100069, 0x4f058770, 0x02345d05, 0x00000002,
    0x00101961, 0x76060320, 0x00344f05, 0x00000000,
    0x00101961, 0x0a050220, 0x00447606, 0x00000000,
    0x0010ac61, 0x09050220, 0x00447606, 0x00000000,
    0x00101970, 0x00018220, 0x42460905, 0x00000120,
    0x04100028, 0x0001c660, 0x00000090, 0x00000090,
    0x0010a369, 0x50058660, 0x02460905, 0x00000002,
    0x0010a361, 0x5c054220, 0x00000000, 0x7f800000,
    0x0010a361, 0x5d054220, 0x00000000, 0x7f800000,
    0x0010a361, 0x5e054220, 0x00000000, 0x7f800000,
    0x0010a361, 0x5f054220, 0x00000000, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x00000000, 0xea08500c, 0x000c5c24,
    0x00100040, 0x09058660, 0x06460905, 0x00000800,
    0x00100027, 0x00014060, 0x00000000, 0xffffff60,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x42460a05, 0x00000030,
    0x04100028, 0x0001c660, 0x00000090, 0x00000090,
    0x00100069, 0x51058660, 0x02460a05, 0x00000002,
    0x6480a361, 0x0000005d, 0x6480a361, 0x0000005e,
    0x6480a361, 0x0000005f, 0x6480a361, 0x00000060,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x00101d40, 0x52058660, 0x06465105, 0x00000480,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x00000000, 0xea08520c, 0x000c5d24,
    0x00100040, 0x0a058660, 0x06460a05, 0x00000800,
    0x00100027, 0x00014060, 0x00000000, 0xffffff60,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x8000c431, 0x530c0000, 0xe23e000c, 0x00000000,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x64900061, 0x00000054, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x80041961, 0x542d0000,
    0x0080002c, 0x00000000, 0x80001966, 0x54258220,
    0x02005424, 0x00000100, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8010c531, 0x00000000,
    0x3008540c, 0x00000000, 0x80100001, 0x00000000,
    0xe0000000, 0x00000000, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x20008540, 0x4b004555,
    0x80008501, 0x00000000, 0x00000000, 0x00000000,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x20001f40, 0x4c004656, 0x80008501, 0x00000000,
    0x00000000, 0x00000000, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x20001f40, 0x4d004757,
    0x20001340, 0x14205558, 0x20001340, 0x1a205659,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x20001340, 0x2020575b, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x20001341, 0x3500585c,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x20000b41, 0x3800595d, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x20000b41, 0x3b005b5e,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x00101361, 0x5f050a20, 0x00465c05, 0x00000000,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x00101261, 0x60050a20, 0x00465d05, 0x00000000,
    0x00101161, 0x61050a20, 0x00465e05, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00100070, 0x00018220, 0x22463c05, 0x00000000,
    0x00100061, 0x0b050120, 0x00003000, 0x00000000,
    0x00100065, 0x62058220, 0x02465a05, 0x00000003,
    0x00100068, 0x63058220, 0x02465a05, 0x00000002,
    0x8000a761, 0x69054660, 0x00000000, 0x00000001,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x64050660, 0x02006904, 0x00465a05,
    0x00101a70, 0x00018660, 0x16460b05, 0x00000000,
    0x04100028, 0x0001c660, 0x00000908, 0x00000908,
    0x2c00004c, 0x00100b65, 0x80101961, 0x10014110,
    0x00000000, 0x17c017c0, 0x00100069, 0x10018510,
    0x01566506, 0x00020002, 0x00100940, 0x10018110,
    0x01461001, 0x17c017c0, 0x00100961, 0x66050220,
    0x00710000, 0x00000000, 0xac301970, 0x5f006667,
    0x00101965, 0x00010220, 0x22466705, 0x00463c05,
    0x04100062, 0x68058220, 0x02464b05, 0xff800000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x69058220, 0x02464c05, 0xff800000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x6a058220, 0x02464d05, 0xff800000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x6b058220, 0x02464505, 0x7f800000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x6c058220, 0x02464605, 0x7f800000,
    0x04100062, 0x6d058220, 0x02464705, 0x7f800000,
    0x78900e61, 0xff800044, 0x28000061, 0x00106844,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x78900d61, 0xff800049, 0x28000061, 0x00106949,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x78900c61, 0xff80004a, 0x28000061, 0x00106a4a,
    0x78900b61, 0x7f80003f, 0x28000061, 0x00106b3f,
    0x78900a61, 0x7f800040, 0x28000061, 0x00106c40,
    0x78900961, 0x7f800043, 0x28000061, 0x00106d43,
    0x00100070, 0x00018660, 0x16466205, 0x00000001,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1661, 0x13060220, 0x00444416, 0x00000000,
    0x800c1561, 0x1b060220, 0x00444916, 0x00000000,
    0x800c1461, 0x23060220, 0x00444a16, 0x00000000,
    0x800c1361, 0x78060220, 0x00443f16, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1261, 0x01060220, 0x00444016, 0x00000000,
    0x800c1161, 0x09060220, 0x00444316, 0x00000000,
    0x800c1e62, 0x12060aa0, 0x4a444406, 0x00441306,
    0x800c1d62, 0x1a060aa0, 0x4a444906, 0x00441b06,
    0x800c1c62, 0x22060aa0, 0x4a444a06, 0x00442306,
    0x800c1b62, 0x77060aa0, 0x5a443f06, 0x00447806,
    0x800c1a62, 0x7f060aa0, 0x5a444006, 0x00440106,
    0x800c1962, 0x08060aa0, 0x5a444306, 0x00440906,
    0x800c0e61, 0x44160220, 0x00441206, 0x00000000,
    0x800c0d61, 0x49160220, 0x00441a06, 0x00000000,
    0x800c0c61, 0x4a160220, 0x00442206, 0x00000000,
    0x800c0b61, 0x3f160220, 0x00447706, 0x00000000,
    0x800c0a61, 0x40160220, 0x00447f06, 0x00000000,
    0x800c0961, 0x43160220, 0x00440806, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x80081e61, 0x15070220, 0x00424417, 0x00000000,
    0x80088161, 0x16070220, 0x00424427, 0x00000000,
    0x80081f61, 0x1d070220, 0x00424917, 0x00000000,
    0x80080061, 0x1e070220, 0x00424927, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x25070220, 0x00424a17, 0x00000000,
    0x80080061, 0x26070220, 0x00424a27, 0x00000000,
    0x80081f61, 0x7a070220, 0x00423f17, 0x00000000,
    0x80080061, 0x7b070220, 0x00423f27, 0x00000000,
    0x80081f61, 0x03070220, 0x00424017, 0x00000000,
    0x80080061, 0x04070220, 0x00424027, 0x00000000,
    0x80080061, 0x0c070220, 0x00424317, 0x00000000,
    0x80080061, 0x0d070220, 0x00424327, 0x00000000,
    0x80080062, 0x14070aa0, 0x4a421507, 0x00421607,
    0x80081f62, 0x1c070aa0, 0x4a421d07, 0x00421e07,
    0x80081f62, 0x24070aa0, 0x4a422507, 0x00422607,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80081d62, 0x79070aa0, 0x5a427a07, 0x00427b07,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80081b62, 0x02070aa0, 0x5a420307, 0x00420407,
    0x80081962, 0x0a070aa0, 0x5a420c07, 0x00420d07,
    0x80081661, 0x44270220, 0x00421407, 0x00000000,
    0x80081561, 0x49270220, 0x00421c07, 0x00000000,
    0x80081461, 0x4a270220, 0x00422407, 0x00000000,
    0x80081361, 0x3f270220, 0x00427907, 0x00000000,
    0x80081261, 0x40270220, 0x00420207, 0x00000000,
    0x80081161, 0x43270220, 0x00420a07, 0x00000000,
    0x80081e61, 0x18070220, 0x00424417, 0x00000000,
    0x8008af61, 0x19070220, 0x00424437, 0x00000000,
    0x80081f61, 0x20070220, 0x00424917, 0x00000000,
    0x80080061, 0x21070220, 0x00424937, 0x00000000,
    0x80081f61, 0x28070220, 0x00424a17, 0x00000000,
    0x80080061, 0x29070220, 0x00424a37, 0x00000000,
    0x80081f61, 0x7d070220, 0x00423f17, 0x00000000,
    0x8008aa61, 0x7e070220, 0x00423f37, 0x00000000,
    0x80081f61, 0x06070220, 0x00424017, 0x00000000,
    0x80080061, 0x07070220, 0x00424037, 0x00000000,
    0x80080061, 0x10070220, 0x00424317, 0x00000000,
    0x80080061, 0x11070220, 0x00424337, 0x00000000,
    0x80080062, 0x17070aa0, 0x4a421807, 0x00421907,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80081f62, 0x1f070aa0, 0x4a422007, 0x00422107,
    0x80081f62, 0x27070aa0, 0x4a422807, 0x00422907,
    0x80081d62, 0x7c070aa0, 0x5a427d07, 0x00427e07,
    0x80081b62, 0x05070aa0, 0x5a420607, 0x00420707,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x0e070aa0, 0x5a421007, 0x00421107,
    0x80081661, 0x44370220, 0x00421707, 0x00000000,
    0x80081561, 0x49370220, 0x00421f07, 0x00000000,
    0x80081461, 0x4a370220, 0x00422707, 0x00000000,
    0x80081361, 0x3f370220, 0x00427c07, 0x00000000,
    0x80081261, 0x40370220, 0x00420507, 0x00000000,
    0x80081161, 0x43370220, 0x00420e07, 0x00000000,
    0x80081e62, 0x44450aa0, 0x4a004434, 0x00344445,
    0x80081e62, 0x44c50aa0, 0x4a0044b4, 0x003444c5,
    0x80081d62, 0x49450aa0, 0x4a004934, 0x00344945,
    0x80081d62, 0x49c50aa0, 0x4a0049b4, 0x003449c5,
    0x80081c62, 0x4a450aa0, 0x4a004a34, 0x00344a45,
    0x80081c62, 0x4ac50aa0, 0x4a004ab4, 0x00344ac5,
    0x80081b62, 0x3f450aa0, 0x5a003f34, 0x00343f45,
    0x80081b62, 0x3fc50aa0, 0x5a003fb4, 0x00343fc5,
    0x80081a62, 0x40450aa0, 0x5a004034, 0x00344045,
    0x80081a62, 0x40c50aa0, 0x5a0040b4, 0x003440c5,
    0x80081962, 0x43450aa0, 0x5a004334, 0x00344345,
    0x80081962, 0x43c50aa0, 0x5a0043b4, 0x003443c5,
    0x800c0062, 0x44850aa0, 0x4a004474, 0x00464485,
    0x800c1762, 0x49850aa0, 0x4a004974, 0x00464985,
    0x800c1762, 0x4a850aa0, 0x4a004a74, 0x00464a85,
    0x800c1762, 0x3f850aa0, 0x5a003f74, 0x00463f85,
    0x800c1762, 0x40850aa0, 0x5a004074, 0x00464085,
    0x800c1662, 0x43850aa0, 0x5a004374, 0x00464385,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x0410a762, 0x6f050220, 0x020049f4, 0x000044f4,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x6e050220, 0x020040f4, 0x00003ff4,
    0x00100070, 0x00018660, 0x16466205, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x70050220, 0x020043f4, 0x00466e05,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x71050220, 0x02004af4, 0x00466f05,
    0x00100070, 0x00018660, 0x16466305, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x20781a62, 0x7120705e, 0x00100065, 0x00018220,
    0x22466405, 0x00000077, 0x04100022, 0x0001c060,
    0x00000080, 0x00000080, 0x68000041, 0x00606672,
    0x68000041, 0x00306373, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x00101952, 0x74040e68,
    0x0e0e7205, 0x73056205, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x00101969, 0x75058660,
    0x02467405, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x00000000,
    0xea2a750c, 0x01005e0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000050, 0xad800066, 0x3c206776,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22467605, 0x00000000,
    0x00100061, 0x77050120, 0x00003000, 0x00000000,
    0xe8001965, 0x77000b0b, 0x00100027, 0x00014060,
    0x00000000, 0xfffff6e8, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x78058660,
    0x06466005, 0x00000010, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00100070, 0x00018220,
    0x22463c05, 0x00000000, 0x00100061, 0x0c050120,
    0x00003000, 0x00000000, 0x00101970, 0x00018660,
    0x16460c05, 0x00000000, 0x04100028, 0x0001c660,
    0x00000978, 0x00000978, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x2c00004c, 0x00100c79,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80100061, 0x10014110, 0x00000000, 0x1e001e00,
    0x00100069, 0x10018510, 0x01567906, 0x00020002,
    0x00100940, 0x10018110, 0x01461001, 0x1e001e00,
    0x00100961, 0x7a050220, 0x00710000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xac300070, 0x78007a7b, 0x00101965, 0x00010220,
    0x22467b05, 0x00463c05, 0x04100062, 0x7c058220,
    0x02464b05, 0xff800000, 0x04100062, 0x7d058220,
    0x02464c05, 0xff800000, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x7e058220,
    0x02464d05, 0xff800000, 0x04100062, 0x7f058220,
    0x02464505, 0x7f800000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x01058220,
    0x02464605, 0x7f800000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x02058220,
    0x02464705, 0x7f800000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x78900e61, 0xff800052,
    0x28000061, 0x00107c52, 0x78900d61, 0xff800053,
    0x28000061, 0x00107d53, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x78900c61, 0xff800054,
    0x28000061, 0x00107e54, 0x78900b61, 0x7f80004f,
    0x28000061, 0x00107f4f, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x78900a61, 0x7f800050,
    0x28000061, 0x00100150, 0x78900961, 0x7f800051,
    0x28000061, 0x00100251, 0x00100070, 0x00018660,
    0x16466205, 0x00000001, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x800c1661, 0x4a060220,
    0x00445216, 0x00000000, 0x800c1561, 0x5c060220,
    0x00445316, 0x00000000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x800c1461, 0x6a060220,
    0x00445416, 0x00000000, 0x800c0b61, 0x2b060220,
    0x00444f16, 0x00000000, 0x800c1261, 0x33060220,
    0x00445016, 0x00000000, 0x800c1161, 0x3b060220,
    0x00445116, 0x00000000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x800c1e62, 0x49060aa0,
    0x4a445206, 0x00444a06, 0x800c0d62, 0x5b060aa0,
    0x4a445306, 0x00445c06, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x800c1c62, 0x69060aa0,
    0x4a445406, 0x00446a06, 0x800c0962, 0x2a060aa0,
    0x5a444f06, 0x00442b06, 0x800c1a62, 0x32060aa0,
    0x5a445006, 0x00443306, 0x800c1962, 0x3a060aa0,
    0x5a445106, 0x00443b06, 0x800c0e61, 0x52160220,
    0x00444906, 0x00000000, 0x800c0d61, 0x53160220,
    0x00445b06, 0x00000000, 0x800c0c61, 0x54160220,
    0x00446906, 0x00000000, 0x800c0b61, 0x4f160220,
    0x00442a06, 0x00000000, 0x800c0a61, 0x50160220,
    0x00443206, 0x00000000, 0x800c0961, 0x51160220,
    0x00443a06, 0x00000000, 0x80081e61, 0x56070220,
    0x00425217, 0x00000000, 0x80080061, 0x57070220,
    0x00425227, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x5e070220,
    0x00425317, 0x00000000, 0x8008a761, 0x65070220,
    0x00425327, 0x00000000, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x6c070220,
    0x00425417, 0x00000000, 0x80080061, 0x6d070220,
    0x00425427, 0x00000000, 0x80081f61, 0x2d070220,
    0x00424f17, 0x00000000, 0x80080061, 0x2e070220,
    0x00424f27, 0x00000000, 0x80081f61, 0x35070220,
    0x00425017, 0x00000000, 0x80080061, 0x36070220,
    0x00425027, 0x00000000, 0x80080061, 0x3e070220,
    0x00425117, 0x00000000, 0x80080061, 0x3f070220,
    0x00425127, 0x00000000, 0x80080062, 0x55070aa0,
    0x4a425607, 0x00425707, 0x80081f62, 0x5d070aa0,
    0x4a425e07, 0x00426507, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80081f62, 0x6b070aa0,
    0x4a426c07, 0x00426d07, 0x80080a62, 0x2c070aa0,
    0x5a422d07, 0x00422e07, 0x80081b62, 0x34070aa0,
    0x5a423507, 0x00423607, 0x80081962, 0x3d070aa0,
    0x5a423e07, 0x00423f07, 0x80081661, 0x52270220,
    0x00425507, 0x00000000, 0x80081561, 0x53270220,
    0x00425d07, 0x00000000, 0x80081461, 0x54270220,
    0x00426b07, 0x00000000, 0x80081361, 0x4f270220,
    0x00422c07, 0x00000000, 0x80081261, 0x50270220,
    0x00423407, 0x00000000, 0x80081161, 0x51270220,
    0x00423d07, 0x00000000, 0x80081e61, 0x59070220,
    0x00425217, 0x00000000, 0x80080061, 0x5a070220,
    0x00425237, 0x00000000, 0x80081f61, 0x67070220,
    0x00425317, 0x00000000, 0x80080061, 0x68070220,
    0x00425337, 0x00000000, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x6f070220,
    0x00425417, 0x00000000, 0x80080061, 0x70070220,
    0x00425437, 0x00000000, 0x80081f61, 0x30070220,
    0x00424f17, 0x00000000, 0x80080061, 0x31070220,
    0x00424f37, 0x00000000, 0x80081f61, 0x38070220,
    0x00425017, 0x00000000, 0x80080061, 0x39070220,
    0x00425037, 0x00000000, 0x80080061, 0x43070220,
    0x00425117, 0x00000000, 0x80080061, 0x44070220,
    0x00425137, 0x00000000, 0x80080062, 0x58070aa0,
    0x4a425907, 0x00425a07, 0x80081f62, 0x66070aa0,
    0x4a426707, 0x00426807, 0x80081f62, 0x6e070aa0,
    0x4a426f07, 0x00427007, 0x80081d62, 0x2f070aa0,
    0x5a423007, 0x00423107, 0x80081b62, 0x37070aa0,
    0x5a423807, 0x00423907, 0x80081962, 0x40070aa0,
    0x5a424307, 0x00424407, 0x80081661, 0x52370220,
    0x00425807, 0x00000000, 0x80081561, 0x53370220,
    0x00426607, 0x00000000, 0x80081461, 0x54370220,
    0x00426e07, 0x00000000, 0x80081361, 0x4f370220,
    0x00422f07, 0x00000000, 0x80081261, 0x50370220,
    0x00423707, 0x00000000, 0x80081161, 0x51370220,
    0x00424007, 0x00000000, 0x80081e62, 0x52450aa0,
    0x4a005234, 0x00345245, 0x80081e62, 0x52c50aa0,
    0x4a0052b4, 0x003452c5, 0x80081d62, 0x53450aa0,
    0x4a005334, 0x00345345, 0x80081d62, 0x53c50aa0,
    0x4a0053b4, 0x003453c5, 0x80081c62, 0x54450aa0,
    0x4a005434, 0x00345445, 0x80081c62, 0x54c50aa0,
    0x4a0054b4, 0x003454c5, 0x80081b62, 0x4f450aa0,
    0x5a004f34, 0x00344f45, 0x80081b62, 0x4fc50aa0,
    0x5a004fb4, 0x00344fc5, 0x80081a62, 0x50450aa0,
    0x5a005034, 0x00345045, 0x80081a62, 0x50c50aa0,
    0x5a0050b4, 0x003450c5, 0x80081962, 0x51450aa0,
    0x5a005134, 0x00345145, 0x80081962, 0x51c50aa0,
    0x5a0051b4, 0x003451c5, 0x800c0062, 0x52850aa0,
    0x4a005274, 0x00465285, 0x800c1762, 0x53850aa0,
    0x4a005374, 0x00465385, 0x800c1762, 0x54850aa0,
    0x4a005474, 0x00465485, 0x800c1762, 0x4f850aa0,
    0x5a004f74, 0x00464f85, 0x800c1762, 0x50850aa0,
    0x5a005074, 0x00465085, 0x800c1662, 0x51850aa0,
    0x5a005174, 0x00465185, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x04050220,
    0x020053f4, 0x000052f4, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x03050220,
    0x020050f4, 0x00004ff4, 0x00100070, 0x00018660,
    0x16466205, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x05050220,
    0x020051f4, 0x00460305, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x06050220,
    0x020054f4, 0x00460405, 0x00100070, 0x00018660,
    0x16466305, 0x00000000, 0x20781a62, 0x06200565,
    0x00100065, 0x00018220, 0x22466405, 0x00000077,
    0x04100022, 0x0001c060, 0x00000090, 0x00000090,
    0x68000041, 0x00607a07, 0x68000041, 0x00306308,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100052, 0x09040e68, 0x0e0e0705, 0x08056205,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x0a058660, 0x02460905, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x00000000, 0xea2a0a0c, 0x0100650c,
    0x00100025, 0x00004600, 0x00000000, 0x00000050,
    0xad800066, 0x3c207b0b, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00101a70, 0x00018220,
    0x22460b05, 0x00000000, 0x00100061, 0x0d050120,
    0x00003000, 0x00000000, 0xe8001965, 0x0d000c0c,
    0x00100027, 0x00014060, 0x00000000, 0xfffff678,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x0e058660, 0x06466105, 0x00000020,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00100070, 0x00018220, 0x22463c05, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x0d050120, 0x00003000, 0x00000000,
    0x00101970, 0x00018660, 0x16460d05, 0x00000000,
    0x04100028, 0x0001c660, 0x00000908, 0x00000908,
    0x2c00004c, 0x00100d10, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80100061, 0x10014110,
    0x00000000, 0x03800380, 0x00100069, 0x10018510,
    0x01561006, 0x00020002, 0x00100940, 0x10018110,
    0x01461001, 0x03800380, 0x00100961, 0x11050220,
    0x00710000, 0x00000000, 0xac301970, 0x0e001112,
    0x00101965, 0x00010220, 0x22461205, 0x00463c05,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x13058220, 0x02464b05, 0xff800000,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x14058220, 0x02464c05, 0xff800000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x15058220, 0x02464d05, 0xff800000,
    0x80008101, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x16058220, 0x02464505, 0x7f800000,
    0x04100062, 0x17058220, 0x02464605, 0x7f800000,
    0x04100062, 0x18058220, 0x02464705, 0x7f800000,
    0x78900b61, 0xff800058, 0x28000061, 0x00101358,
    0x78900b61, 0xff800059, 0x28000061, 0x00101459,
    0x78900c61, 0xff80005a, 0x28000061, 0x0010155a,
    0x78900b61, 0x7f800055, 0x28000061, 0x00101655,
    0x78900a61, 0x7f800056, 0x28000061, 0x00101756,
    0x78900961, 0x7f800057, 0x28000061, 0x00101857,
    0x00100070, 0x00018660, 0x16466205, 0x00000001,
    0x800c1661, 0x0b060220, 0x00445816, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x800c1561, 0x1f060220, 0x00445916, 0x00000000,
    0x800c1461, 0x27060220, 0x00445a16, 0x00000000,
    0x800c1361, 0x72060220, 0x00445516, 0x00000000,
    0x800c1261, 0x7a060220, 0x00445616, 0x00000000,
    0x800c1161, 0x03060220, 0x00445716, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x800c1e62, 0x0a060aa0, 0x4a445806, 0x00440b06,
    0x800c1d62, 0x1e060aa0, 0x4a445906, 0x00441f06,
    0x800c1c62, 0x26060aa0, 0x4a445a06, 0x00442706,
    0x800c0b62, 0x71060aa0, 0x5a445506, 0x00447206,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x800c1a62, 0x79060aa0, 0x5a445606, 0x00447a06,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1962, 0x02060aa0, 0x5a445706, 0x00440306,
    0x800c0e61, 0x58160220, 0x00440a06, 0x00000000,
    0x800c0d61, 0x59160220, 0x00441e06, 0x00000000,
    0x800c0c61, 0x5a160220, 0x00442606, 0x00000000,
    0x800c0b61, 0x55160220, 0x00447106, 0x00000000,
    0x800c0a61, 0x56160220, 0x00447906, 0x00000000,
    0x800c0961, 0x57160220, 0x00440206, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80081e61, 0x19070220, 0x00425817, 0x00000000,
    0x80080061, 0x1a070220, 0x00425827, 0x00000000,
    0x80081f61, 0x21070220, 0x00425917, 0x00000000,
    0x80080061, 0x22070220, 0x00425927, 0x00000000,
    0x80081f61, 0x29070220, 0x00425a17, 0x00000000,
    0x80082961, 0x2a070220, 0x00425a27, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x74070220, 0x00425517, 0x00000000,
    0x8008a661, 0x75070220, 0x00425527, 0x00000000,
    0x80081f61, 0x7c070220, 0x00425617, 0x00000000,
    0x80080061, 0x7d070220, 0x00425627, 0x00000000,
    0x80080061, 0x05070220, 0x00425717, 0x00000000,
    0x80080061, 0x06070220, 0x00425727, 0x00000000,
    0x80080062, 0x0c070aa0, 0x4a421907, 0x00421a07,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80081f62, 0x20070aa0, 0x4a422107, 0x00422207,
    0x80081f62, 0x28070aa0, 0x4a422907, 0x00422a07,
    0x80081d62, 0x73070aa0, 0x5a427407, 0x00427507,
    0x80081b62, 0x7b070aa0, 0x5a427c07, 0x00427d07,
    0x80081962, 0x04070aa0, 0x5a420507, 0x00420607,
    0x80081661, 0x58270220, 0x00420c07, 0x00000000,
    0x80081561, 0x59270220, 0x00422007, 0x00000000,
    0x80081461, 0x5a270220, 0x00422807, 0x00000000,
    0x80081361, 0x55270220, 0x00427307, 0x00000000,
    0x80081261, 0x56270220, 0x00427b07, 0x00000000,
    0x80081161, 0x57270220, 0x00420407, 0x00000000,
    0x80081e61, 0x1c070220, 0x00425817, 0x00000000,
    0x80080061, 0x1d070220, 0x00425837, 0x00000000,
    0x80081f61, 0x24070220, 0x00425917, 0x00000000,
    0x8008a161, 0x25070220, 0x00425937, 0x00000000,
    0x80080a61, 0x2c070220, 0x00425a17, 0x00000000,
    0x80080061, 0x2d070220, 0x00425a37, 0x00000000,
    0x80081f61, 0x77070220, 0x00425517, 0x00000000,
    0x80080061, 0x78070220, 0x00425537, 0x00000000,
    0x80081f61, 0x7f070220, 0x00425617, 0x00000000,
    0x8008ab61, 0x01070220, 0x00425637, 0x00000000,
    0x80080061, 0x08070220, 0x00425717, 0x00000000,
    0x80080061, 0x09070220, 0x00425737, 0x00000000,
    0x80080062, 0x1b070aa0, 0x4a421c07, 0x00421d07,
    0x80081f62, 0x23070aa0, 0x4a422407, 0x00422507,
    0x80080b62, 0x2b070aa0, 0x4a422c07, 0x00422d07,
    0x80081d62, 0x76070aa0, 0x5a427707, 0x00427807,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80081b62, 0x7e070aa0, 0x5a427f07, 0x00420107,
    0x80081962, 0x07070aa0, 0x5a420807, 0x00420907,
    0x80081661, 0x58370220, 0x00421b07, 0x00000000,
    0x80081561, 0x59370220, 0x00422307, 0x00000000,
    0x80081461, 0x5a370220, 0x00422b07, 0x00000000,
    0x80081361, 0x55370220, 0x00427607, 0x00000000,
    0x80081261, 0x56370220, 0x00427e07, 0x00000000,
    0x80081161, 0x57370220, 0x00420707, 0x00000000,
    0x80081e62, 0x58450aa0, 0x4a005834, 0x00345845,
    0x80081e62, 0x58c50aa0, 0x4a0058b4, 0x003458c5,
    0x80081d62, 0x59450aa0, 0x4a005934, 0x00345945,
    0x80081d62, 0x59c50aa0, 0x4a0059b4, 0x003459c5,
    0x80081c62, 0x5a450aa0, 0x4a005a34, 0x00345a45,
    0x80081c62, 0x5ac50aa0, 0x4a005ab4, 0x00345ac5,
    0x80081b62, 0x55450aa0, 0x5a005534, 0x00345545,
    0x80081b62, 0x55c50aa0, 0x5a0055b4, 0x003455c5,
    0x80081a62, 0x56450aa0, 0x5a005634, 0x00345645,
    0x80081a62, 0x56c50aa0, 0x5a0056b4, 0x003456c5,
    0x80081962, 0x57450aa0, 0x5a005734, 0x00345745,
    0x80081962, 0x57c50aa0, 0x5a0057b4, 0x003457c5,
    0x800c0062, 0x58850aa0, 0x4a005874, 0x00465885,
    0x800c1762, 0x59850aa0, 0x4a005974, 0x00465985,
    0x800c1762, 0x5a850aa0, 0x4a005a74, 0x00465a85,
    0x800c1762, 0x55850aa0, 0x5a005574, 0x00465585,
    0x800c1762, 0x56850aa0, 0x5a005674, 0x00465685,
    0x800c1662, 0x57850aa0, 0x5a005774, 0x00465785,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x1a050220, 0x020059f4, 0x000058f4,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x19050220, 0x020056f4, 0x000055f4,
    0x00100070, 0x00018660, 0x16466205, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x1b050220, 0x020057f4, 0x00461905,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x1c050220, 0x02005af4, 0x00461a05,
    0x00100070, 0x00018660, 0x16466305, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x20780062, 0x1c201b66, 0x00100065, 0x00018220,
    0x22466405, 0x00000077, 0x04100022, 0x0001c060,
    0x00000080, 0x00000080, 0x68000041, 0x0060111d,
    0x68000041, 0x0030631e, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100052, 0x1f040e68,
    0x0e0e1d05, 0x1e056205, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x20058660,
    0x02461f05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x00000000,
    0xea2a200c, 0x0100660c, 0x00100025, 0x00004600,
    0x00000000, 0x00000050, 0xad800066, 0x3c201221,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22462105, 0x00000000,
    0x00100061, 0x22050120, 0x00003000, 0x00000000,
    0xe8001965, 0x22000d0d, 0x00100027, 0x00014060,
    0x00000000, 0xfffff6e8, 0x00100061, 0x00010660,
    0x20463c05, 0x00000000, 0x04100022, 0x0001c060,
    0x00000110, 0x00000110, 0x00100069, 0x23058660,
    0x02465f05, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x24058660,
    0x06462305, 0x00000480, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x00000000,
    0xea10240c, 0x01000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x25058660,
    0x02466005, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x26058660,
    0x06462505, 0x000004c0, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ca31, 0x00000000,
    0xea10260c, 0x01000000, 0x00100069, 0x27058660,
    0x02466105, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x28058660,
    0x06462705, 0x00000500, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cb31, 0x00000000,
    0xea10280c, 0x01000000, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x8000cc31, 0x290c0000,
    0xe23e000c, 0x00000000, 0x80008c01, 0x00000000,
    0x00000000, 0x00000000, 0x64902961, 0x0000002a,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x2a2d0000, 0x0080002c, 0x00000000,
    0x80001966, 0x2a258220, 0x02002a24, 0x00000100,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8010cd31, 0x00000000, 0x30082a0c, 0x00000000,
    0x80100001, 0x00000000, 0xe0000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x2b054770, 0x00000000, 0x0000002c,
    0x2c000061, 0x00100f0e, 0x00101970, 0x00018220,
    0x42460e05, 0x00000120, 0x04100028, 0x0001c660,
    0x00000140, 0x00000140, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x2d058660,
    0x02460e05, 0x00000002, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ce31, 0x670c0000,
    0xea002d0c, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0xb400ae61, 0x00102d30,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x2e050230, 0x00443006, 0x00000000,
    0x74508e70, 0x7f806700, 0x04100022, 0x0001c060,
    0x00000070, 0x00000070, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x2b004130,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38000040, 0x2e003032, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cf31, 0x00000000,
    0xfb2a3214, 0x0100670c, 0x00100025, 0x00004600,
    0x00000000, 0x00000020, 0x00100040, 0x0e058660,
    0x06460e05, 0x00000200, 0x00100027, 0x00014060,
    0x00000000, 0xfffffeb0, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x33054770,
    0x00000000, 0x000004ac, 0x00101a70, 0x00018220,
    0x42460f05, 0x00000030, 0x04100028, 0x0001c660,
    0x00000188, 0x00000188, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x35058660,
    0x02460f05, 0x00000002, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x37058660,
    0x06463505, 0x00000480, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0xb4000061, 0x00103531,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c031, 0x680c0000, 0xea00370c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010a061, 0x36050230, 0x00443106, 0x00000000,
    0x00108070, 0x00018660, 0x26466805, 0x00000000,
    0x04100022, 0x0001c060, 0x00000070, 0x00000070,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x3800a440, 0x33004138, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x38000040, 0x3600383a,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x00000000, 0xfb183a14, 0x0100680c,
    0x00100025, 0x00004600, 0x00000000, 0x00000020,
    0x00100040, 0x0f058660, 0x06460f05, 0x00000200,
    0x00100027, 0x00014060, 0x00000000, 0xfffffe68,
    0x2c10aa61, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_BFS_pass1_initial_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 1344,
      .base.program_size = 13824,
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
const char *gfx20_bvh_build_BFS_BFS_pass1_initial_batchable_sha1 = "88478d7c7ba1439ea07d79ee878d245b7ad2b850";

#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_BFS_pass1_indexed_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_BFS_pass1_indexed_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_BFS_pass1_indexed_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g51<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g17<1>Q         0x0000000000000428Q             { align1 1H };
mov(16)         g22<1>Q         0x000000000000042cQ             { align1 1H };
mov(16)         g5<1>UD         0x00000000UD                    { align1 1H compacted };
mov(16)         g2<1>UD         g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g1UD            g51UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g19<1>Q         g1.4<0,1,0>Q    g17<1,1,0>Q     { align1 1H I@4 compacted };
add(16)         g24<1>Q         g1.4<0,1,0>Q    g22<1,1,0>Q     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g21UD           g19UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };

LABEL3:
shl(16)         g26<1>D         g5<8,8,1>D      0x00000002UD    { align1 1H I@4 };
mov(16)         g112<2>UD       g26<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g27<1>UQ        g112<8,4,2>UD                   { align1 1H I@1 };
add(16)         g29<1>Q         g24<1,1,0>Q     g27<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g50<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g50<1>UD        g50<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g31<1>UD        g50<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
mov(8)          g36<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(1)          a0<1>UD         g31<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g32<1>UQ        g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
add(8)          g36.8<1>UW      g36<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g100<1>Q        g32<0,1,0>Q                     { align1 WE_all 1H I@2 };
add(16)         g35<1>W         g36<16,16,1>UW  -1W             { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g30UD           g100UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(16)         g34<1>D         0D                              { align1 WE_all 1H $2.dst };
mov(16)         g34<1>D         g30<1,1,0>D                     { align1 1H compacted };
mov(16)         a0<1>UW         0x0880UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g35<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0880UW        { align1 WE_all 1H A@1 };
mov(16)         g33<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 };
mov(1)          g33<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g33.1<2>D       g33<8,4,2>D     g33.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g33.2<4>D       g33.1<8,2,4>D   g33.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g33.3<4>D       g33.1<8,2,4>D   g33.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g33.4<1>D       g33.3<0,1,0>D   g33.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g33.12<1>D      g33.11<0,1,0>D  g33.12<4,4,1>D  { align1 WE_all 1N I@2 };
add(8)          g33.8<1>D       g33.7<0,1,0>D   g33.8<8,8,1>D   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g6<1>D          g2<1,1,0>D      -g33<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g37<1>UD        g6<1,1,0>UD     g30<1,1,0>UD    { align1 1H I@1 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g37<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov.nz.f0.0(16) g4<1>UD         f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g3<1>UD         0xffffffffUD                    { align1 1H };
break(16)       JIP:  LABEL0          UIP:  LABEL1              { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };
add(16)         g38<1>D         g33<1,1,0>D     g30<1,1,0>D     { align1 1H compacted };
add(16)         g5<1>D          g5<8,8,1>D      16D             { align1 1H };
add(16)         g2<1>D          g2<8,8,1>D      -g38.15<0,1,0>D { align1 1H I@2 };
cmp.ge.f0.0(16) null<1>UD       g5<8,8,1>UD     g21<8,8,1>UD    { align1 1H @2 $1.dst };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
mov(16)         g3<1>UD         0x00000000UD                    { align1 1H I@7 compacted };
break(16)       JIP:  LABEL2          UIP:  LABEL1              { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g3<8,8,1>D                      { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL4              { align1 1H };
fbl(16)         g39<1>UD        g4<1,1,0>UD                     { align1 1H I@6 compacted };
cmp.z.f0.0(16)  null<1>D        g4<8,8,1>D      0D              { align1 1H };
(-f0.0) sel(16) g40<1>UD        g39<8,8,1>UD    0x00000020UD    { align1 1H I@2 };
add(16)         g7<1>D          g5<1,1,0>D      g40<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x0180UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g40<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0180UW        { align1 1H A@1 };
mov(16)         g8<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 };
else(16)        JIP:  LABEL4          UIP:  LABEL4              { align1 1H };

LABEL5:
mov(16)         g7<1>UD         0x00000000UD                    { align1 1H I@3 compacted };
mov(16)         g8<1>UD         0x00000000UD                    { align1 1H I@3 compacted };

LABEL4:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
shl(16)         g41<1>D         g7<8,8,1>D      0x00000002UD    { align1 1H I@3 };
mov(16)         g43<1>Q         0x000000000000082eQ             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g50<1>Q         0x0000000000002c2cQ             { align1 1H };
mov(16)         g61<1>Q         0x0000000000000034Q             { align1 1H };
mov(16)         g101<1>Q        g1.5<0,1,0>Q                    { align1 1H };
shl(16)         g76<1>D         g8<8,8,1>D      0x00000009UD    { align1 1H I@7 };
mov(16)         g80<1>Q         0x0000000000000010Q             { align1 1H };
and(16)         g89<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H };
mov(16)         g113<2>UD       g41<1,1,0>UD                    { align1 1H I@7 compacted };
add(16)         g45<1>Q         g1.4<0,1,0>Q    g43<1,1,0>Q     { align1 1H I@7 compacted };
add(16)         g52<1>Q         g1.4<0,1,0>Q    g50<1,1,0>Q     { align1 1H I@7 compacted };
add(16)         g63<1>Q         g1.5<0,1,0>Q    g61<1,1,0>Q     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(16)        g66UD           g101UD          nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
add(16)         g82<1>Q         g1.5<0,1,0>Q    g80<1,1,0>Q     { align1 1H I@6 compacted };
shl(16)         g90<1>D         g89<8,8,1>D     0x00000004UD    { align1 1H I@6 };
mov(8)          g92<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g42<1>UQ        g113<8,4,2>UD                   { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g65UD           g63UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g84UD           g82UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add(8)          g92.8<1>UW      g92<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
add(16)         g47<1>Q         g45<1,1,0>Q     g42<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g91<1>UD        g92<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g49UD           g47UD           nullUD          0x04100b80                0x00000000
                            ugm MsgDesc: ( load, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
add(16)         g93<1>D         g91<1,1,0>D     g90<1,1,0>D     { align1 1H I@1 compacted };
and(16)         g16<1>UD        g93<8,8,1>UD    0x000001ffUD    { align1 1H I@1 };
mov(16)         g121<2>UD       g16<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g94<1>UQ        g121<8,4,2>UD                   { align1 1H I@1 };
mov(16)         g70<2>UD        g66<1,1,0>UD                    { align1 1H $3.dst compacted };
mov(16)         g72<2>UD        g68<1,1,0>UD                    { align1 1H $3.dst compacted };
mov(16)         g70.1<2>UD      g67<1,1,0>UD                    { align1 1H @2 $3.dst compacted };
mov(16)         g72.1<2>UD      g69<1,1,0>UD                    { align1 1H @2 $3.dst compacted };
mov(16)         g86<2>UD        g84<1,1,0>UD                    { align1 1H $5.dst compacted };
mov(16)         g86.1<2>UD      g85<1,1,0>UD                    { align1 1H @1 $5.dst compacted };
mov(16)         g54<1>UD        g49<16,8,2>UW                   { align1 1H $6.dst };
mul(16)         g55<1>D         g54<1,1,0>D     1484W           { align1 1H I@1 compacted };
mov(16)         g115<2>UD       g55<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g56<1>UQ        g115<8,4,2>UD                   { align1 1H I@1 };
add(16)         g58<1>Q         g52<1,1,0>Q     g56<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g60UD           g58UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
and.nz.f0.0(16) null<1>UD       g63<8,8,1>UD    0x00000001UD    { align1 1H $7.dst };
add(16)         g77<1>D         g60<1,1,0>D     g76<1,1,0>D     { align1 1H $7.dst compacted };
(+f0.0) sel(16) g74<1>UD        g65<8,8,1>UD    0x00000000UD    { align1 1H $4.dst };
add(16)         g78<1>D         g77<8,8,1>D     512D            { align1 1H I@2 };
mov(16)         g119<2>UD       g77<1,1,0>UD                    { align1 1H compacted };
mov(16)         g117<2>UD       g74<1,1,0>UD                    { align1 1H I@3 compacted };
sel.l(16)       g79<1>UD        g78<1,1,0>UD    g61<1,1,0>UD    { align1 1H @3 $7.dst compacted };
mov(16)         g88<1>UQ        g119<8,4,2>UD                   { align1 1H I@3 };
mov(16)         g75<1>UQ        g117<8,4,2>UD                   { align1 1H I@3 };
add(16)         g96<1>Q         g88<1,1,0>Q     g94<1,1,0>Q     { align1 1H I@2 compacted };
cmp.z.f0.0(16)  g98<1>D         g96.1<8,4,2>D   0D              { align1 1H I@1 };
cmp.l.f0.0(16)  g99<1>UD        g96<8,4,2>UD    g79<8,8,1>UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
and.nz.f0.0(16) g100<1>UD       g98<1,1,0>UD    g99<1,1,0>UD    { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g101<1>Q        g75<1,1,0>Q     g96<1,1,0>Q     { align1 1H I@6 compacted };
shl(16)         g103<1>Q        g101<4,4,1>Q    0x00000002UD    { align1 1H I@1 };
add(16)         g105<1>Q        g70<1,1,0>Q     g103<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g9UD            g105UD          nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
mov(16)         g106<1>Q        0x0000000000000020Q             { align1 1H $1.src };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
add(16)         g108<1>Q        g86<1,1,0>Q     g106<1,1,0>Q    { align1 1H I@2 compacted };
mov(16)         g122<2>UD       g62<1,1,0>UD                    { align1 1H $7.dst compacted };
shr(1)          g120<1>UD       g117<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g121<1>UW       0x76543210V                     { align1 WE_all 1Q };
mov(16)         g110<1>UQ       g122<8,4,2>UD                   { align1 1H I@3 };
add(8)          g121.8<1>UW     g121<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@2 };
shl(16)         g112<1>Q        g110<4,4,1>Q    0x00000005UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g122<1>UD       g121<8,8,1>UW   0x00000002UD    { align1 1H };
add(16)         g114<1>Q        g108<1,1,0>Q    g112<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g116UD          g114UD          nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g120<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g122UD          g116UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
and(1)          g123<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g124<1>UD       g123<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g125<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g125.8<1>UW     g125<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g126<1>UD       g125<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g127<1>UD       g126<8,8,1>UD   0x00000040UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g124<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g127UD          g117UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
and(1)          g1<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.dst };
shr(1)          g2<1>UD         g1<0,1,0>UD     0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g3<1>UW         0x76543210V                     { align1 WE_all 1Q };
add(8)          g3.8<1>UW       g3<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g4<1>UD         g3<8,8,1>UW     0x00000002UD    { align1 1H };
or(16)          g5<1>UD         g4<8,8,1>UD     0x00000080UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g2<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g5UD            g118UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $11 };
and(1)          g6<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g7<1>UD         g6<0,1,0>UD     0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g8<1>UW         0x76543210V                     { align1 WE_all 1Q };
add(8)          g8.8<1>UW       g8<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g10<1>UD        g8<8,8,1>UW     0x00000002UD    { align1 1H };
or(16)          g11<1>UD        g10<8,8,1>UD    0x000000c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g7<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g11UD           g119UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
add(16)         g12<1>Q         g80<1,1,0>Q     g114<1,1,0>Q    { align1 1H $8.src compacted };
and(1)          g17<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g14UD           g12UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $13 };
shr(1)          g18<1>UD        g17<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g19<1>UW        0x76543210V                     { align1 WE_all 1Q $1.src };
add(8)          g19.8<1>UW      g19<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g20<1>UD        g19<8,8,1>UW    0x00000002UD    { align1 1H $1.src };
or(16)          g21<1>UD        g20<8,8,1>UD    0x00000100UD    { align1 1H @1 $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g18<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g21UD           g14UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
and(1)          g22<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g23<1>UD        g22<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g24<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g24.8<1>UW      g24<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g25<1>UD        g24<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g26<1>UD        g25<8,8,1>UD    0x00000140UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g23<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g26UD           g15UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $15 };
and(1)          g27<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g32<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g38<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g44<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g28<1>UD        g27<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g29<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g33<1>UD        g32<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g34<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g39<1>UD        g38<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g40<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g45<1>UD        g44<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g46<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g29.8<1>UW      g29<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g34.8<1>UW      g34<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g40.8<1>UW      g40<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g46.8<1>UW      g46<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g30<1>UD        g29<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g35<1>UD        g34<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g41<1>UD        g40<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g47<1>UD        g46<8,8,1>UW    0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g28<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g31UD           g30UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
or(16)          g36<1>UD        g35<8,8,1>UD    0x00000040UD    { align1 1H I@3 };
or(16)          g42<1>UD        g41<8,8,1>UD    0x00000080UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g48<1>UD        g47<8,8,1>UD    0x000000c0UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g33<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g37UD           g36UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g39<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g43UD           g42UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g45<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g49UD           g48UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g51<1>F         g14<1,1,0>F     -g37<1,1,0>F    { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g52<1>F         g15<1,1,0>F     -g43<1,1,0>F    { align1 1H $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g50<1>F         g49<1,1,0>F     -g31<1,1,0>F    { align1 1H $3.dst compacted };
sel.ge(16)      g54<1>F         g51<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sel.ge(16)      g55<1>F         g52<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sel.ge(16)      g53<1>F         g50<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
math inv(16)    g60<1>F         g54<8,8,1>F     null<8,8,1>F    { align1 1H F@3 };
math inv(16)    g62<1>F         g55<8,8,1>F     null<8,8,1>F    { align1 1H F@2 };
math inv(16)    g56<1>F         g53<8,8,1>F     null<8,8,1>F    { align1 1H F@1 };
cmp.l.f0.0(16)  g64<1>F         g53<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $4.src };
cmp.g.f0.0(16)  g65<1>F         g50<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
mul(16)         g61<1>F         g60<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H M@3 };
mul(16)         g63<1>F         g62<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H M@2 };
mul(16)         g57<1>F         g56<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H M@1 };
and.nz.f0.0(16) null<1>UD       g64<8,8,1>UD    g65<8,8,1>UD    { align1 1H F@4 };
(+f0.0) sel(16) g66<1>UD        g57<8,8,1>UD    0x00000000UD    { align1 1H F@1 };
cmp.g.f0.0(16)  g67<1>F         g51<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g68<1>F         g54<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H };
and.nz.f0.0(16) null<1>UD       g68<8,8,1>UD    g67<8,8,1>UD    { align1 1H F@1 };
(+f0.0) sel(16) g69<1>UD        g61<8,8,1>UD    0x00000000UD    { align1 1H F@5 };
cmp.g.f0.0(16)  g70<1>F         g52<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g71<1>F         g55<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H };
and.nz.f0.0(16) null<1>UD       g71<8,8,1>UD    g70<8,8,1>UD    { align1 1H F@1 };
(+f0.0) sel(16) g74<1>UD        g63<8,8,1>UD    0x00000000UD    { align1 1H F@6 };
mov.nz.f0.0(16) null<1>D        g100<8,8,1>D                    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL9              { align1 1H };
mov(16)         g123<2>UD       g9<1,1,0>UD                     { align1 1H $1.dst compacted };
mov(16)         g75<1>UQ        g123<8,4,2>UD                   { align1 1H I@1 };
shl(16)         g77<1>Q         g75<4,4,1>Q     0x00000005UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g82<1>Q         g72<1,1,0>Q     g77<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g84UD           g82UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
add(16)         g88<1>Q         g82<1,1,0>Q     g80<1,1,0>Q     { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g96UD           g88UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };

LABEL9:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
shl(16)         g101<1>Q        g94<4,4,1>Q     0x00000002UD    { align1 1H $3.src };
mov(16)         g124<2>UD       g101<4,4,1>UQ                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g11<1>UD        g124<8,4,2>UD                   { align1 1H I@1 };
mov(16)         g10<1>UD        g124<8,4,2>UD                   { align1 1H };

LABEL12:
cmp.ge.f0.0(16) null<1>UD       g10<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
shl(16)         g102<1>D        g10<8,8,1>D     0x00000002UD    { align1 1H $1.src };
mov(16)         g103<1>UD       0x7f800000UD                    { align1 1H $1.src };
mov(16)         g104<1>UD       0x7f800000UD                    { align1 1H $1.src };
mov(16)         g105<1>UD       0x7f800000UD                    { align1 1H $1.src };
mov(16)         g106<1>UD       0x7f800000UD                    { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g102UD          g103UD          0x02003504                0x00000100
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 4 flat )  base_offset 0  { align1 1H $1 };
add(16)         g10<1>D         g10<8,8,1>D     2048D           { align1 1H };

LABEL11:
while(16)       JIP:  LABEL12                                   { align1 1H };
nop                                                             ;

LABEL14:
cmp.ge.f0.0(16) null<1>UD       g11<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL13       UIP:  LABEL13             { align1 1H };
shl(16)         g103<1>D        g11<8,8,1>D     0x00000002UD    { align1 1H $1.src };
mov(16)         g105<1>UD       0x00000000UD                    { align1 1H $1.src compacted };
mov(16)         g106<1>UD       0x00000000UD                    { align1 1H $1.src compacted };
mov(16)         g107<1>UD       0x00000000UD                    { align1 1H $1.src compacted };
mov(16)         g108<1>UD       0x00000000UD                    { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g104<1>D        g103<8,8,1>D    1152D           { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g104UD          g105UD          0x02003504                0x00000100
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 4 flat )  base_offset 0  { align1 1H $1 };
add(16)         g11<1>D         g11<8,8,1>D     2048D           { align1 1H };

LABEL13:
while(16)       JIP:  LABEL14                                   { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
send(1)         g105UD          g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(8)          g106<1>UD       0x00000000UD                    { align1 WE_all 1Q $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(2)          g106.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g106.2<1>UD     g106.2<0,1,0>UD 0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g106UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $1 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g107<1>F        g84<1,1,0>F     g96<1,1,0>F     { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g108<1>F        g85<1,1,0>F     g97<1,1,0>F     { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
add(16)         g109<1>F        g86<1,1,0>F     g98<1,1,0>F     { align1 1H $4.dst compacted };
add(16)         g110<1>F        g107<1,1,0>F    -g31<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g111<1>F        g108<1,1,0>F    -g37<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g112<1>F        g109<1,1,0>F    -g43<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g113<1>F        g110<1,1,0>F    g66<1,1,0>F     { align1 1H F@3 compacted };
mul(16)         g114<1>F        g111<1,1,0>F    g69<1,1,0>F     { align1 1H F@3 compacted };
mul(16)         g115<1>F        g112<1,1,0>F    g74<1,1,0>F     { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g116<1>UD       g113<8,8,1>F                    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g117<1>UD       g114<8,8,1>F                    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g118<1>UD       g115<8,8,1>F                    { align1 1H F@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g100<8,8,1>UD   0x00000000UD    { align1 1H };
mov(16)         g12<1>UD        f0<0,1,0>UW                     { align1 1H $13.src };
and(16)         g119<1>UD       g91<8,8,1>UD    0x00000003UD    { align1 1H $12.src };
shr(16)         g120<1>UD       g91<8,8,1>UD    0x00000002UD    { align1 1H };
mov(1)          g111<1>D        1D                              { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g121<1>D        g111<0,1,0>D    g91<8,8,1>UD    { align1 1H };

LABEL17:
cmp.z.f0.0(16)  null<1>D        g12<8,8,1>D     0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL15       UIP:  LABEL15             { align1 1H };
fbl(16)         g122<1>UD       g12<1,1,0>UD                    { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         a0<1>UW         0x1d00UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g122<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x1d00UW        { align1 1H A@1 };
mov(16)         g123<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 };
cmp.z.f0.0(16)  g124<1>D        g123<1,1,0>D    g116<1,1,0>D    { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g124<8,8,1>UD   g100<8,8,1>UD   { align1 1H I@1 };
(+f0.0) sel(16) g125<1>UD       g96<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g126<1>UD       g97<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
(+f0.0) sel(16) g127<1>UD       g98<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g1<1>UD         g84<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g2<1>UD         g85<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g3<1>UD         g86<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g7<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g7<1>F          g125<1,1,0>F                    { align1 1H compacted };
mov(16)         g8<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g8<1>F          g126<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(16)         g9<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g9<1>F          g127<1,1,0>F                    { align1 1H compacted };
mov(16)         g4<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g4<1>F          g1<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g5<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g5<1>F          g2<1,1,0>F                      { align1 1H compacted };
mov(16)         g6<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g6<1>F          g3<1,1,0>F                      { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g119<8,8,1>D    1D              { align1 1H };
mov(8)          g37<2>UD        g7.1<8,4,2>UD                   { align1 WE_all 1Q F@6 };
mov(8)          g45<2>UD        g8.1<8,4,2>UD                   { align1 WE_all 1Q F@5 };
mov(8)          g53<2>UD        g9.1<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(8)          g11<2>UD        g4.1<8,4,2>UD                   { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(8)          g21<2>UD        g5.1<8,4,2>UD                   { align1 WE_all 1Q F@2 };
mov(8)          g29<2>UD        g6.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(8)       g36<2>F         g7<8,4,2>F      g37<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.ge(8)       g44<2>F         g8<8,4,2>F      g45<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g52<2>F         g9<8,4,2>F      g53<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g10<2>F         g4<8,4,2>F      g11<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g20<2>F         g5<8,4,2>F      g21<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.l(8)        g28<2>F         g6<8,4,2>F      g29<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g7.1<2>UD       g36<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g8.1<2>UD       g44<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g9.1<2>UD       g52<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g4.1<2>UD       g10<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g5.1<2>UD       g20<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g6.1<2>UD       g28<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g39<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@6 };
mov(4)          g40<4>UD        g7.2<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g47<4>UD        g8.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g48<4>UD        g8.2<8,2,4>UD                   { align1 WE_all 1N $3.src };
mov(4)          g55<4>UD        g9.1<8,2,4>UD                   { align1 WE_all 1N A@2 };
mov(4)          g56<4>UD        g9.2<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g14<4>UD        g4.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g15<4>UD        g4.2<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g23<4>UD        g5.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g24<4>UD        g5.2<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g31<4>UD        g6.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g32<4>UD        g6.2<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g38<4>F         g39<8,2,4>F     g40<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g46<4>F         g47<8,2,4>F     g48<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g54<4>F         g55<8,2,4>F     g56<8,2,4>F     { align1 WE_all 1N A@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.l(4)        g13<4>F         g14<8,2,4>F     g15<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g22<4>F         g23<8,2,4>F     g24<8,2,4>F     { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(4)        g30<4>F         g31<8,2,4>F     g32<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g7.2<4>UD       g38<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g8.2<4>UD       g46<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g9.2<4>UD       g54<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g4.2<4>UD       g13<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g5.2<4>UD       g22<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g6.2<4>UD       g30<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g42<4>UD        g7.1<8,2,4>UD                   { align1 WE_all 1N I@6 };
mov(4)          g43<4>UD        g7.3<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g50<4>UD        g8.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g51<4>UD        g8.3<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g60<4>UD        g9.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g61<4>UD        g9.3<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g18<4>UD        g4.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g19<4>UD        g4.3<8,2,4>UD                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g26<4>UD        g5.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g27<4>UD        g5.3<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g34<4>UD        g6.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g35<4>UD        g6.3<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g41<4>F         g42<8,2,4>F     g43<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g49<4>F         g50<8,2,4>F     g51<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g57<4>F         g60<8,2,4>F     g61<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g17<4>F         g18<8,2,4>F     g19<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g25<4>F         g26<8,2,4>F     g27<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g33<4>F         g34<8,2,4>F     g35<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g7.3<4>UD       g41<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g8.3<4>UD       g49<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g9.3<4>UD       g57<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g4.3<4>UD       g17<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g5.3<4>UD       g25<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g6.3<4>UD       g33<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@6 };
sel.ge(4)       g7.12<1>F       g7.11<0,1,0>F   g7.12<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g8.4<1>F        g8.3<0,1,0>F    g8.4<4,4,1>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g8.12<1>F       g8.11<0,1,0>F   g8.12<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g9.4<1>F        g9.3<0,1,0>F    g9.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g9.12<1>F       g9.11<0,1,0>F   g9.12<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g4.4<1>F        g4.3<0,1,0>F    g4.4<4,4,1>F    { align1 WE_all 1N I@3 };
sel.l(4)        g4.12<1>F       g4.11<0,1,0>F   g4.12<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g5.4<1>F        g5.3<0,1,0>F    g5.4<4,4,1>F    { align1 WE_all 1N I@2 };
sel.l(4)        g5.12<1>F       g5.11<0,1,0>F   g5.12<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g6.4<1>F        g6.3<0,1,0>F    g6.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.l(4)        g6.12<1>F       g6.11<0,1,0>F   g6.12<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g7.8<1>F        g7.7<0,1,0>F    g7.8<8,8,1>F    { align1 WE_all 1Q };
sel.ge(8)       g8.8<1>F        g8.7<0,1,0>F    g8.8<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.ge(8)       g9.8<1>F        g9.7<0,1,0>F    g9.8<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.l(8)        g4.8<1>F        g4.7<0,1,0>F    g4.8<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.l(8)        g5.8<1>F        g5.7<0,1,0>F    g5.8<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.l(8)        g6.8<1>F        g6.7<0,1,0>F    g6.8<8,8,1>F    { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g11<1>UD        g8.15<0,1,0>UD  g7.15<0,1,0>UD  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g10<1>UD        g5.15<0,1,0>UD  g4.15<0,1,0>UD  { align1 1H };
cmp.z.f0.0(16)  null<1>D        g119<8,8,1>D    2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g13<1>UD        g6.15<0,1,0>UD  g10<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g14<1>UD        g9.15<0,1,0>UD  g11<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g120<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g106<1>F        g13<1,1,0>F     -g14<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g121<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL16             { align1 1H };
mul(16)         g15<1>D         g123<1,1,0>D    6W              { align1 1H compacted };
mul(16)         g17<1>D         g120<1,1,0>D    3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g18<1>D         g15<8,8,1>D     g119<8,8,1>D    g17<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g19<1>D         g18<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g19UD           g106UD          0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $1 };

LABEL16:
endif(16)       JIP:  LABEL15                                   { align1 1H };
or(16)          g20<1>D         ~g124<1,1,0>D   ~g100<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g20<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g21<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g12<1>UD        g12<1,1,0>UD    g21<1,1,0>UD    { align1 1H I@1 compacted };

LABEL15:
while(16)       JIP:  LABEL17                                   { align1 1H };
add(16)         g22<1>D         g117<8,8,1>D    16D             { align1 1H I@7 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g100<8,8,1>UD   0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g13<1>UD        f0<0,1,0>UW                     { align1 1H F@1 };

LABEL20:
cmp.z.f0.0(16)  null<1>D        g13<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL18       UIP:  LABEL18             { align1 1H };
fbl(16)         g23<1>UD        g13<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0580UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g23<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0580UW        { align1 1H A@1 };
mov(16)         g24<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 };
cmp.z.f0.0(16)  g25<1>D         g24<1,1,0>D     g22<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g25<8,8,1>UD    g100<8,8,1>UD   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
(+f0.0) sel(16) g26<1>UD        g96<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g27<1>UD        g97<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g28<1>UD        g98<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g29<1>UD        g84<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
(+f0.0) sel(16) g30<1>UD        g85<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g31<1>UD        g86<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g35<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g35<1>F         g26<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g36<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g36<1>F         g27<1,1,0>F                     { align1 1H compacted };
mov(16)         g37<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g37<1>F         g28<1,1,0>F                     { align1 1H compacted };
mov(16)         g32<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g32<1>F         g29<1,1,0>F                     { align1 1H compacted };
mov(16)         g33<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g33<1>F         g30<1,1,0>F                     { align1 1H compacted };
mov(16)         g34<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g34<1>F         g31<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g119<8,8,1>D    1D              { align1 1H };
mov(8)          g91<2>UD        g35.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g104<2>UD       g36.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g112<2>UD       g37.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g63<2>UD        g32.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g71<2>UD        g33.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g79<2>UD        g34.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g90<2>F         g35<8,4,2>F     g91<8,4,2>F     { align1 WE_all 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(8)       g103<2>F        g36<8,4,2>F     g104<8,4,2>F    { align1 WE_all 1Q I@5 };
sel.ge(8)       g111<2>F        g37<8,4,2>F     g112<8,4,2>F    { align1 WE_all 1Q A@4 };
sel.l(8)        g62<2>F         g32<8,4,2>F     g63<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g70<2>F         g33<8,4,2>F     g71<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.l(8)        g78<2>F         g34<8,4,2>F     g79<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g35.1<2>UD      g90<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g36.1<2>UD      g103<8,4,2>UD                   { align1 WE_all 1Q A@5 };
mov(8)          g37.1<2>UD      g111<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g32.1<2>UD      g62<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g33.1<2>UD      g70<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g34.1<2>UD      g78<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g93<4>UD        g35.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g94<4>UD        g35.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g106<4>UD       g36.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g107<4>UD       g36.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
mov(4)          g114<4>UD       g37.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g115<4>UD       g37.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g65<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g66<4>UD        g32.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g73<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g74<4>UD        g33.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g81<4>UD        g34.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g82<4>UD        g34.2<8,2,4>UD                  { align1 WE_all 1N $5.src };
sel.ge(4)       g92<4>F         g93<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(4)       g105<4>F        g106<8,2,4>F    g107<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g113<4>F        g114<8,2,4>F    g115<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g64<4>F         g65<8,2,4>F     g66<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g72<4>F         g73<8,2,4>F     g74<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g80<4>F         g81<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g35.2<4>UD      g92<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g36.2<4>UD      g105<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g37.2<4>UD      g113<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g32.2<4>UD      g64<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g33.2<4>UD      g72<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g34.2<4>UD      g80<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g101<4>UD       g35.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g102<4>UD       g35.3<8,2,4>UD                  { align1 WE_all 1N $1.src };
mov(4)          g109<4>UD       g36.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g110<4>UD       g36.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g123<4>UD       g37.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g124<4>UD       g37.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g68<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g69<4>UD        g32.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g76<4>UD        g33.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g77<4>UD        g33.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g88<4>UD        g34.1<8,2,4>UD                  { align1 WE_all 1N $5.src };
mov(4)          g89<4>UD        g34.3<8,2,4>UD                  { align1 WE_all 1N $5.src };
sel.ge(4)       g95<4>F         g101<8,2,4>F    g102<8,2,4>F    { align1 WE_all 1N };
sel.ge(4)       g108<4>F        g109<8,2,4>F    g110<8,2,4>F    { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(4)       g122<4>F        g123<8,2,4>F    g124<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g67<4>F         g68<8,2,4>F     g69<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g75<4>F         g76<8,2,4>F     g77<8,2,4>F     { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(4)        g83<4>F         g88<8,2,4>F     g89<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g35.3<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g36.3<4>UD      g108<8,2,4>UD                   { align1 WE_all 1N F@5 };
mov(4)          g37.3<4>UD      g122<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g32.3<4>UD      g67<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g33.3<4>UD      g75<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g34.3<4>UD      g83<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g35.4<1>F       g35.3<0,1,0>F   g35.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g35.12<1>F      g35.11<0,1,0>F  g35.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g36.4<1>F       g36.3<0,1,0>F   g36.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g36.12<1>F      g36.11<0,1,0>F  g36.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g37.4<1>F       g37.3<0,1,0>F   g37.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g37.12<1>F      g37.11<0,1,0>F  g37.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g32.12<1>F      g32.11<0,1,0>F  g32.12<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g33.4<1>F       g33.3<0,1,0>F   g33.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g33.12<1>F      g33.11<0,1,0>F  g33.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g34.4<1>F       g34.3<0,1,0>F   g34.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g34.12<1>F      g34.11<0,1,0>F  g34.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g35.8<1>F       g35.7<0,1,0>F   g35.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g36.8<1>F       g36.7<0,1,0>F   g36.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g37.8<1>F       g37.7<0,1,0>F   g37.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g32.8<1>F       g32.7<0,1,0>F   g32.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g33.8<1>F       g33.7<0,1,0>F   g33.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g34.8<1>F       g34.7<0,1,0>F   g34.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g39<1>UD        g36.15<0,1,0>UD g35.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g38<1>UD        g33.15<0,1,0>UD g32.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g119<8,8,1>D    2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g40<1>UD        g34.15<0,1,0>UD g38<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g41<1>UD        g37.15<0,1,0>UD g39<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g120<8,8,1>D    0D              { align1 1H };
(+f0.0) sel(16) g107<1>F        g40<1,1,0>F     -g41<1,1,0>F    { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g121<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL19         UIP:  LABEL19             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mul(16)         g42<1>D         g24<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g43<1>D         g120<1,1,0>D    3W              { align1 1H compacted };
add3(16)        g44<1>D         g42<8,8,1>D     g119<8,8,1>D    g43<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g45<1>D         g44<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g45UD           g107UD          0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $7 };

LABEL19:
endif(16)       JIP:  LABEL18                                   { align1 1H };
or(16)          g46<1>D         ~g25<1,1,0>D    ~g100<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g46<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g47<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g13<1>UD        g13<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@1 compacted };

LABEL18:
while(16)       JIP:  LABEL20                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g48<1>D         g118<8,8,1>D    32D             { align1 1H };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g100<8,8,1>UD   0x00000000UD    { align1 1H };
mov(16)         g14<1>UD        f0<0,1,0>UW                     { align1 1H F@1 };

LABEL23:
cmp.z.f0.0(16)  null<1>D        g14<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL21       UIP:  LABEL21             { align1 1H };
fbl(16)         g49<1>UD        g14<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0c00UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g49<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0c00UW        { align1 1H A@1 };
mov(16)         g50<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g51<1>D         g50<1,1,0>D     g48<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g51<8,8,1>UD    g100<8,8,1>UD   { align1 1H I@1 };
(+f0.0) sel(16) g52<1>UD        g96<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N M@1 };
(+f0.0) sel(16) g53<1>UD        g97<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N M@3 };
(+f0.0) sel(16) g54<1>UD        g98<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g55<1>UD        g84<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g56<1>UD        g85<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g57<1>UD        g86<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g63<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g63<1>F         g52<1,1,0>F                     { align1 1H compacted };
mov(16)         g64<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g64<1>F         g53<1,1,0>F                     { align1 1H compacted };
mov(16)         g65<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g65<1>F         g54<1,1,0>F                     { align1 1H compacted };
mov(16)         g60<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g60<1>F         g55<1,1,0>F                     { align1 1H compacted };
mov(16)         g61<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g61<1>F         g56<1,1,0>F                     { align1 1H compacted };
mov(16)         g62<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g62<1>F         g57<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g119<8,8,1>D    1D              { align1 1H };
mov(8)          g25<2>UD        g63.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g33<2>UD        g64.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g41<2>UD        g65.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g126<2>UD       g60.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g7<2>UD         g61.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g17<2>UD        g62.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g24<2>F         g63<8,4,2>F     g25<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.ge(8)       g32<2>F         g64<8,4,2>F     g33<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g40<2>F         g65<8,4,2>F     g41<8,4,2>F     { align1 WE_all 1Q A@4 };
sel.l(8)        g125<2>F        g60<8,4,2>F     g126<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.l(8)        g6<2>F          g61<8,4,2>F     g7<8,4,2>F      { align1 WE_all 1Q I@2 };
sel.l(8)        g15<2>F         g62<8,4,2>F     g17<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g63.1<2>UD      g24<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g64.1<2>UD      g32<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g65.1<2>UD      g40<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g60.1<2>UD      g125<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g61.1<2>UD      g6<8,4,2>UD                     { align1 WE_all 1Q A@2 };
mov(8)          g62.1<2>UD      g15<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g27<4>UD        g63.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g28<4>UD        g63.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g35<4>UD        g64.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g36<4>UD        g64.2<8,2,4>UD                  { align1 WE_all 1N $1.src };
mov(4)          g43<4>UD        g65.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g44<4>UD        g65.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g1<4>UD         g60.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g2<4>UD         g60.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g9<4>UD         g61.1<8,2,4>UD                  { align1 WE_all 1N @7 $1.dst };
mov(4)          g10<4>UD        g61.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g19<4>UD        g62.1<8,2,4>UD                  { align1 WE_all 1N $1.src };
mov(4)          g20<4>UD        g62.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g26<4>F         g27<8,2,4>F     g28<8,2,4>F     { align1 WE_all 1N $15.src };
sel.ge(4)       g34<4>F         g35<8,2,4>F     g36<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(4)       g42<4>F         g43<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.l(4)        g127<4>F        g1<8,2,4>F      g2<8,2,4>F      { align1 WE_all 1N I@5 };
sel.l(4)        g8<4>F          g9<8,2,4>F      g10<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g18<4>F         g19<8,2,4>F     g20<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g63.2<4>UD      g26<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g64.2<4>UD      g34<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g65.2<4>UD      g42<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g60.2<4>UD      g127<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g61.2<4>UD      g8<8,2,4>UD                     { align1 WE_all 1N F@2 };
mov(4)          g62.2<4>UD      g18<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(4)          g30<4>UD        g63.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g31<4>UD        g63.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g38<4>UD        g64.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g39<4>UD        g64.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g46<4>UD        g65.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g47<4>UD        g65.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g4<4>UD         g60.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g5<4>UD         g60.3<8,2,4>UD                  { align1 WE_all 1N $11.src };
mov(4)          g12<4>UD        g61.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g13<4>UD        g61.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g22<4>UD        g62.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g23<4>UD        g62.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g29<4>F         g30<8,2,4>F     g31<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g37<4>F         g38<8,2,4>F     g39<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(4)       g45<4>F         g46<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g3<4>F          g4<8,2,4>F      g5<8,2,4>F      { align1 WE_all 1N I@5 };
sel.l(4)        g11<4>F         g12<8,2,4>F     g13<8,2,4>F     { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.l(4)        g21<4>F         g22<8,2,4>F     g23<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g63.3<4>UD      g29<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g64.3<4>UD      g37<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g65.3<4>UD      g45<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g60.3<4>UD      g3<8,2,4>UD                     { align1 WE_all 1N F@3 };
mov(4)          g61.3<4>UD      g11<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g62.3<4>UD      g21<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g63.4<1>F       g63.3<0,1,0>F   g63.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g63.12<1>F      g63.11<0,1,0>F  g63.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g64.4<1>F       g64.3<0,1,0>F   g64.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g64.12<1>F      g64.11<0,1,0>F  g64.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g65.4<1>F       g65.3<0,1,0>F   g65.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g65.12<1>F      g65.11<0,1,0>F  g65.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g60.4<1>F       g60.3<0,1,0>F   g60.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g60.12<1>F      g60.11<0,1,0>F  g60.12<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g61.4<1>F       g61.3<0,1,0>F   g61.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g61.12<1>F      g61.11<0,1,0>F  g61.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g62.4<1>F       g62.3<0,1,0>F   g62.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g62.12<1>F      g62.11<0,1,0>F  g62.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g63.8<1>F       g63.7<0,1,0>F   g63.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g64.8<1>F       g64.7<0,1,0>F   g64.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g65.8<1>F       g65.7<0,1,0>F   g65.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g60.8<1>F       g60.7<0,1,0>F   g60.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g61.8<1>F       g61.7<0,1,0>F   g61.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g62.8<1>F       g62.7<0,1,0>F   g62.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g67<1>UD        g64.15<0,1,0>UD g63.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g66<1>UD        g61.15<0,1,0>UD g60.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g119<8,8,1>D    2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g68<1>UD        g62.15<0,1,0>UD g66<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g69<1>UD        g65.15<0,1,0>UD g67<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g120<8,8,1>D    0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g108<1>F        g68<1,1,0>F     -g69<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g121<8,8,1>UD   0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL22         UIP:  LABEL22             { align1 1H };
mul(16)         g70<1>D         g50<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g71<1>D         g120<1,1,0>D    3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g72<1>D         g70<8,8,1>D     g119<8,8,1>D    g71<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g73<1>D         g72<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g73UD           g108UD          0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $8 };

LABEL22:
endif(16)       JIP:  LABEL21                                   { align1 1H };
or(16)          g74<1>D         ~g51<1,1,0>D    ~g100<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g74<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g75<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g14<1>UD        g14<1,1,0>UD    g75<1,1,0>UD    { align1 1H I@1 compacted };

LABEL21:
while(16)       JIP:  LABEL23                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g100<8,8,1>D                    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL24         UIP:  LABEL24             { align1 1H };
shl(16)         g76<1>D         g116<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g77<1>D         g76<8,8,1>D     1152D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g77UD           nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
shl(16)         g78<1>D         g117<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g79<1>D         g78<8,8,1>D     1216D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g79UD           nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
shl(16)         g80<1>D         g118<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g81<1>D         g80<8,8,1>D     1280D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g81UD           nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };

LABEL24:
endif(16)       JIP:  LABEL25                                   { align1 1H };

LABEL25:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
send(1)         g82UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
mov(8)          g83<1>UD        0x00000000UD                    { align1 WE_all 1Q $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(2)          g83.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g83.2<1>UD      g83.2<0,1,0>UD  0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g83UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $13 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
mov(16)         g84<1>Q         0x000000000000002cQ             { align1 1H F@7 };
mov(16)         g15<1>UD        g16<1,1,0>UD                    { align1 1H compacted };

LABEL28:
cmp.ge.f0.0(16) null<1>UD       g15<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL26       UIP:  LABEL26             { align1 1H };
shl(16)         g86<1>D         g15<8,8,1>D     0x00000002UD    { align1 1H A@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g109UD          g86UD           nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g48<2>UD        g86<1,1,0>UD                    { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g87<1>UQ        g48<8,4,2>UD                    { align1 1H $4.dst };
cmp.nz.f0.0(16) null<1>F        g109<1,1,0>F    0x7f800000F  /* infF */ { align1 1H $14.dst compacted };
(+f0.0) if(16)  JIP:  LABEL27         UIP:  LABEL27             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g89<1>Q         g58<1,1,0>Q     g84<1,1,0>Q     { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g91<1>Q         g89<1,1,0>Q     g87<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g91UD           g109UD          0x04040595                0x00000040
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $15 };

LABEL27:
endif(16)       JIP:  LABEL26                                   { align1 1H };
add(16)         g15<1>D         g15<8,8,1>D     512D            { align1 1H };

LABEL26:
while(16)       JIP:  LABEL28                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g92<1>Q         0x00000000000004acQ             { align1 1H };

LABEL31:
cmp.ge.f0.0(16) null<1>UD       g16<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL29       UIP:  LABEL29             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g94<1>D         g16<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g96<1>D         g94<8,8,1>D     1152D           { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g49<2>UD        g94<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(16)        g110UD          g96UD           nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g95<1>UQ        g49<8,4,2>UD                    { align1 1H $0.src };
cmp.nz.f0.0(16) null<1>D        g110<8,8,1>D    0D              { align1 1H $0.dst };
(+f0.0) if(16)  JIP:  LABEL30         UIP:  LABEL30             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g97<1>Q         g58<1,1,0>Q     g92<1,1,0>Q     { align1 1H A@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
add(16)         g99<1>Q         g97<1,1,0>Q     g95<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g99UD           g110UD          0x0404058c                0x00000040
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $5 };

LABEL30:
endif(16)       JIP:  LABEL29                                   { align1 1H };
add(16)         g16<1>D         g16<8,8,1>D     512D            { align1 1H };

LABEL29:
while(16)       JIP:  LABEL31                                   { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_BFS_pass1_indexed_code[] = {
    0x80000065, 0x33058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x11054770, 0x00000000, 0x00000428,
    0x00100061, 0x16054770, 0x00000000, 0x0000042c,
    0x64800061, 0x00000005, 0x2c800061, 0x00110002,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x010c0000, 0xfa00330c, 0x00340000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38801c40, 0x11030113, 0x38801c40, 0x16030118,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x150c0000, 0xfb001314, 0x00000000,
    0x00101c69, 0x1a058660, 0x02460505, 0x00000002,
    0xb4001961, 0x00101a70, 0x00101961, 0x1b050230,
    0x00447006, 0x00000000, 0x38001940, 0x1b00181d,
    0xec840961, 0x00104032, 0x80000965, 0x32058220,
    0x02003204, 0xffffffff, 0x2c84194c, 0x0010321f,
    0x800c0061, 0x24054410, 0x00000000, 0x76543210,
    0x80001a69, 0x10018220, 0x02001f04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x20050330, 0x00010280, 0x00000000,
    0x800c1a40, 0x24458110, 0x01462405, 0x00080008,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x64050770, 0x00002004, 0x00000000,
    0x80101a40, 0x23058150, 0x05582405, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c231, 0x1e0c0000, 0xfb00640c, 0x00340000,
    0x80108261, 0x22054660, 0x00000000, 0x00000000,
    0x7c000061, 0x00101e22, 0x80101961, 0x10014110,
    0x00000000, 0x08800880, 0x80100069, 0x10018510,
    0x01462305, 0x00020002, 0x80100940, 0x10018110,
    0x01461001, 0x08800880, 0x80100961, 0x21050220,
    0x00710000, 0x00000000, 0x80001961, 0x21054660,
    0x00000000, 0x00000000, 0x800c1940, 0x21160660,
    0x06442106, 0x00442116, 0x80081940, 0x21270660,
    0x06422117, 0x00422127, 0x80081940, 0x21370660,
    0x06422117, 0x00422137, 0x80081940, 0x21450660,
    0x06002134, 0x00342145, 0x80081a40, 0x21c50660,
    0x060021b4, 0x003421c5, 0x800c1940, 0x21850660,
    0x06002174, 0x00462185, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac000040, 0x21200206,
    0xe8181970, 0x1e000625, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00101a70, 0x00018220,
    0x22462505, 0x00000000, 0x00100061, 0x04050120,
    0x20003000, 0x00000000, 0x04100022, 0x0001c060,
    0x00000030, 0x00000030, 0x00100061, 0x03054220,
    0x00000000, 0xffffffff, 0x00100028, 0x0001c660,
    0x00000090, 0x00000010, 0x00100025, 0x00004600,
    0x00000000, 0x00000080, 0xac000040, 0x1e002126,
    0x00100040, 0x05058660, 0x06460505, 0x00000010,
    0x00101a40, 0x02050660, 0x06460205, 0x020026f4,
    0x00114170, 0x00010220, 0x42460505, 0x00461505,
    0x04100022, 0x0001c060, 0x00000028, 0x00000028,
    0x64801f61, 0x00000003, 0x00100028, 0x0001c660,
    0x00000020, 0x00000010, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100027, 0x00014060,
    0x00000000, 0xfffffd48, 0x00101a61, 0x00010660,
    0x20460305, 0x00000000, 0x04100022, 0x0001c060,
    0x000000a0, 0x00000090, 0x2c001e4c, 0x00100427,
    0x00100070, 0x00018660, 0x16460405, 0x00000000,
    0x14101a62, 0x28058220, 0x02462705, 0x00000020,
    0xac001940, 0x28000507, 0x80100061, 0x10014110,
    0x00000000, 0x01800180, 0x00100069, 0x10018510,
    0x01562806, 0x00020002, 0x00100940, 0x10018110,
    0x01461001, 0x01800180, 0x00100961, 0x08050220,
    0x00710000, 0x00000000, 0x00100024, 0x0001c060,
    0x00000020, 0x00000020, 0x64801b61, 0x00000007,
    0x64801b61, 0x00000008, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00101b69, 0x29058660,
    0x02460705, 0x00000002, 0x00100061, 0x2b054770,
    0x00000000, 0x0000082e, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x32054770,
    0x00000000, 0x00002c2c, 0x00100061, 0x3d054770,
    0x00000000, 0x00000034, 0x00100061, 0x65050770,
    0x000001a4, 0x00000000, 0x00101f69, 0x4c058660,
    0x02460805, 0x00000009, 0x00100061, 0x50054770,
    0x00000000, 0x00000010, 0x00100065, 0x59058220,
    0x02000024, 0x000000ff, 0xb4001f61, 0x00102971,
    0x38801f40, 0x2b03012d, 0x38801f40, 0x32030134,
    0x38801f40, 0x3d07013f, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x42240000,
    0xfb006514, 0x000c0000, 0x38801e40, 0x50070152,
    0x00101e69, 0x5a058660, 0x02465905, 0x00000004,
    0x800c0061, 0x5c054410, 0x00000000, 0x76543210,
    0x00101f61, 0x2a050230, 0x00447106, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x410c0000, 0xfb003f14, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x54140000, 0xfb005214, 0x00040000,
    0x800c1a40, 0x5c458110, 0x01465c05, 0x00080008,
    0x38001a40, 0x2a002d2f, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x5b050120,
    0x00465c05, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x310c0000,
    0xf7002f14, 0x00020000, 0xac001940, 0x5a005b5d,
    0x00101965, 0x10058220, 0x02465d05, 0x000001ff,
    0xb4001961, 0x00101079, 0x00101961, 0x5e050230,
    0x00447906, 0x00000000, 0xb4008361, 0x00104246,
    0xb4008361, 0x00104448, 0xb4014361, 0x00124346,
    0xb4014361, 0x00124548, 0xb4008561, 0x00105456,
    0xb4012561, 0x00125556, 0x00108661, 0x36050120,
    0x00563106, 0x00000000, 0x68001941, 0x5cc03637,
    0xb4001961, 0x00103773, 0x00101961, 0x38050230,
    0x00447306, 0x00000000, 0x38001940, 0x3800343a,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x3c240000, 0xfb003a14, 0x000c0000,
    0x00108765, 0x00018220, 0x22463f05, 0x00000001,
    0xac008740, 0x4c003c4d, 0x04108462, 0x4a058220,
    0x02464105, 0x00000000, 0x00101a40, 0x4e058660,
    0x06464d05, 0x00000200, 0xb4000061, 0x00104d77,
    0xb4001b61, 0x00104a75, 0xe8196762, 0x3d004e4f,
    0x00101b61, 0x58050230, 0x00447706, 0x00000000,
    0x00101b61, 0x4b050230, 0x00447506, 0x00000000,
    0x38001a40, 0x5e005860, 0x00101970, 0x62058660,
    0x16446016, 0x00000000, 0x00101d70, 0x63050220,
    0x52446006, 0x00464f05, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0xe8501965, 0x63006264,
    0x04100022, 0x0001c060, 0x00000060, 0x00000060,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x38001e40, 0x60004b65, 0x00101969, 0x67058770,
    0x02346505, 0x00000002, 0x38001940, 0x67004669,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x090c0000, 0xfb006914, 0x00000000,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x0010a161, 0x6a054770, 0x00000000, 0x00000020,
    0x80000065, 0x75058220, 0x02000054, 0xfffffc00,
    0x38001a40, 0x6a00566c, 0xb4008761, 0x00103e7a,
    0x80001b68, 0x78058220, 0x02007504, 0x00000004,
    0x800c0061, 0x79054410, 0x00000000, 0x76543210,
    0x00101b61, 0x6e050230, 0x00447a06, 0x00000000,
    0x800c1a40, 0x79458110, 0x01467905, 0x00080008,
    0x00101a69, 0x70058770, 0x02346e05, 0x00000005,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x7a058120, 0x02467905, 0x00000002,
    0x38001a40, 0x70006c72, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x74240000,
    0xfb007214, 0x000c0000, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007804, 0x00000000, 0x00112931, 0x00020100,
    0xfa087a0c, 0x0400740c, 0x80000065, 0x7b058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x7c058220,
    0x02007b04, 0x00000004, 0x800c0061, 0x7d054410,
    0x00000000, 0x76543210, 0x800c1940, 0x7d458110,
    0x01467d05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x7e058120,
    0x02467d05, 0x00000002, 0x00101966, 0x7f058220,
    0x02467e05, 0x00000040, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007c04, 0x00000000, 0x00112a31, 0x00020100,
    0xfa087f0c, 0x0400750c, 0x80008065, 0x01058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x02058220,
    0x02000104, 0x00000004, 0x800c0061, 0x03054410,
    0x00000000, 0x76543210, 0x800c1940, 0x03458110,
    0x01460305, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x04058120,
    0x02460305, 0x00000002, 0x00101966, 0x05058220,
    0x02460405, 0x00000080, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000204, 0x00000000, 0x00112b31, 0x00020100,
    0xfa08050c, 0x0400760c, 0x80000065, 0x06058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x07058220,
    0x02000604, 0x00000004, 0x800c0061, 0x08054410,
    0x00000000, 0x76543210, 0x800c1940, 0x08458110,
    0x01460805, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x0a058120,
    0x02460805, 0x00000002, 0x00101966, 0x0b058220,
    0x02460a05, 0x000000c0, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000704, 0x00000000, 0x00112c31, 0x00020100,
    0xfa080b0c, 0x0400770c, 0x3800a840, 0x7200500c,
    0x80000065, 0x11058220, 0x02000054, 0xfffffc00,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010cd31, 0x0e140000, 0xfb000c14, 0x00040000,
    0x80001968, 0x12058220, 0x02001104, 0x00000004,
    0x800ca161, 0x13054410, 0x00000000, 0x76543210,
    0x800c1940, 0x13458110, 0x01461305, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010a169, 0x14058120, 0x02461305, 0x00000002,
    0x00112166, 0x15058220, 0x02461405, 0x00000100,
    0x80008d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001204, 0x00000000,
    0x00112e31, 0x00020100, 0xfa08150c, 0x04000e0c,
    0x80000065, 0x16058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x17058220, 0x02001604, 0x00000004,
    0x800c0061, 0x18054410, 0x00000000, 0x76543210,
    0x800c1940, 0x18458110, 0x01461805, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x19058120, 0x02461805, 0x00000002,
    0x00101966, 0x1a058220, 0x02461905, 0x00000140,
    0x80008d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001704, 0x00000000,
    0x00112f31, 0x00020100, 0xfa081a0c, 0x04000f0c,
    0x80000065, 0x1b058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x20058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x26058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x2c058220, 0x02000054, 0xfffffc00,
    0x80001c68, 0x1c058220, 0x02001b04, 0x00000004,
    0x800c0061, 0x1d054410, 0x00000000, 0x76543210,
    0x80001d68, 0x21058220, 0x02002004, 0x00000004,
    0x800c0061, 0x22054410, 0x00000000, 0x76543210,
    0x80001e68, 0x27058220, 0x02002604, 0x00000004,
    0x800c0061, 0x28054410, 0x00000000, 0x76543210,
    0x80001f68, 0x2d058220, 0x02002c04, 0x00000004,
    0x800c0061, 0x2e054410, 0x00000000, 0x76543210,
    0x800c1f40, 0x1d458110, 0x01461d05, 0x00080008,
    0x800c1e40, 0x22458110, 0x01462205, 0x00080008,
    0x800c1d40, 0x28458110, 0x01462805, 0x00080008,
    0x800c1c40, 0x2e458110, 0x01462e05, 0x00080008,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x1e058120, 0x02461d05, 0x00000002,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x23058120, 0x02462205, 0x00000002,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x29058120, 0x02462805, 0x00000002,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x0010a669, 0x2f058120, 0x02462e05, 0x00000002,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001c04, 0x00000000,
    0x00112031, 0x1f0e0100, 0xfa001e0c, 0x04000000,
    0x00101b66, 0x24058220, 0x02462305, 0x00000040,
    0x00101b66, 0x2a058220, 0x02462905, 0x00000080,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x00101b66, 0x30058220, 0x02462f05, 0x000000c0,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002104, 0x00000000,
    0x00112131, 0x250e0100, 0xfa00240c, 0x04000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002704, 0x00000000,
    0x00112231, 0x2b0e0100, 0xfa002a0c, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002d04, 0x00000000,
    0x00112331, 0x310e0100, 0xfa00300c, 0x04000000,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x20008140, 0x25200e33, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x20008240, 0x2b200f34,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x20008340, 0x1f203132, 0x00101362, 0x36058aa0,
    0x4a463305, 0x0704ec3d, 0x00101362, 0x37058aa0,
    0x4a463405, 0x0704ec3d, 0x00101362, 0x35058aa0,
    0x4a463205, 0x0704ec3d, 0x00101338, 0x3c050aa0,
    0x1a463605, 0x00460001, 0x00101238, 0x3e050aa0,
    0x1a463705, 0x00460001, 0x00101138, 0x38050aa0,
    0x1a463505, 0x00460001, 0x0010a470, 0x40058aa0,
    0x5a463505, 0x77f684df, 0x00100070, 0x41058aa0,
    0x3a463205, 0x0704ec3d, 0x00102b41, 0x3d058aa0,
    0x0a463c05, 0x417d70a4, 0x00102a41, 0x3f058aa0,
    0x0a463e05, 0x417d70a4, 0x00102941, 0x39058aa0,
    0x0a463805, 0x417d70a4, 0x00101465, 0x00010220,
    0x22464005, 0x00464105, 0x04101162, 0x42058220,
    0x02463905, 0x00000000, 0x00100070, 0x43058aa0,
    0x3a463305, 0x0704ec3d, 0x00100070, 0x44058aa0,
    0x5a463605, 0x77f684df, 0x00101165, 0x00010220,
    0x22464405, 0x00464305, 0x04101562, 0x45058220,
    0x02463d05, 0x00000000, 0x00100070, 0x46058aa0,
    0x3a463405, 0x0704ec3d, 0x00100070, 0x47058aa0,
    0x5a463705, 0x77f684df, 0x00101165, 0x00010220,
    0x22464705, 0x00464605, 0x04101662, 0x4a058220,
    0x02463f05, 0x00000000, 0x00100061, 0x00010660,
    0x20466405, 0x00000000, 0x04100022, 0x0001c060,
    0x00000098, 0x00000098, 0xb4008161, 0x0010097b,
    0x00101961, 0x4b050230, 0x00447b06, 0x00000000,
    0x00101969, 0x4d058770, 0x02344b05, 0x00000005,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x4d004852, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c431, 0x54240000,
    0xfb005214, 0x000c0000, 0x3800a440, 0x50005258,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x60240000, 0xfb005814, 0x000c0000,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x0010a369, 0x65058770, 0x02345e05, 0x00000002,
    0x00101961, 0x7c060320, 0x00346505, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x00101961, 0x0b050220, 0x00447c06, 0x00000000,
    0x00100061, 0x0a050220, 0x00447c06, 0x00000000,
    0x00101970, 0x00018220, 0x42460a05, 0x00000120,
    0x04100028, 0x0001c660, 0x00000090, 0x00000090,
    0x0010a169, 0x66058660, 0x02460a05, 0x00000002,
    0x0010a161, 0x67054220, 0x00000000, 0x7f800000,
    0x0010a161, 0x68054220, 0x00000000, 0x7f800000,
    0x0010a161, 0x69054220, 0x00000000, 0x7f800000,
    0x0010a161, 0x6a054220, 0x00000000, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x00000000, 0xea08660c, 0x000c6724,
    0x00100040, 0x0a058660, 0x06460a05, 0x00000800,
    0x00100027, 0x00014060, 0x00000000, 0xffffff60,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x42460b05, 0x00000030,
    0x04100028, 0x0001c660, 0x00000090, 0x00000090,
    0x0010a169, 0x67058660, 0x02460b05, 0x00000002,
    0x6480a161, 0x00000069, 0x6480a161, 0x0000006a,
    0x6480a161, 0x0000006b, 0x6480a161, 0x0000006c,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x00101d40, 0x68058660, 0x06466705, 0x00000480,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x00000000, 0xea08680c, 0x000c6924,
    0x00100040, 0x0b058660, 0x06460b05, 0x00000800,
    0x00100027, 0x00014060, 0x00000000, 0xffffff60,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x8000c631, 0x690c0000, 0xe23e000c, 0x00000000,
    0x80008601, 0x00000000, 0x00000000, 0x00000000,
    0x64a4a161, 0x0000006a, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x80041961, 0x6a2d0000,
    0x0080002c, 0x00000000, 0x80001966, 0x6a258220,
    0x02006a24, 0x00000100, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8010c131, 0x00000000,
    0x30086a0c, 0x00000000, 0x80100001, 0x00000000,
    0xe0000000, 0x00000000, 0x80008501, 0x00000000,
    0x00000000, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x20008440, 0x6000546b,
    0x80008501, 0x00000000, 0x00000000, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x20008440, 0x6100556c, 0x80008501, 0x00000000,
    0x00000000, 0x00000000, 0x20008440, 0x6200566d,
    0x20001340, 0x1f206b6e, 0x20001340, 0x25206c6f,
    0x20001340, 0x2b206d70, 0x20001341, 0x42006e71,
    0x20001341, 0x45006f72, 0x20001341, 0x4a007073,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x00101361, 0x74050a20, 0x00467105, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x00101261, 0x75050a20, 0x00467205, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x00101161, 0x76050a20, 0x00467305, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00100070, 0x00018220, 0x22466405, 0x00000000,
    0x0010ad61, 0x0c050120, 0x00003000, 0x00000000,
    0x0010ac65, 0x77058220, 0x02465b05, 0x00000003,
    0x00100068, 0x78058220, 0x02465b05, 0x00000002,
    0x80001261, 0x6f054660, 0x00000000, 0x00000001,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x79050660, 0x02006f04, 0x00465b05,
    0x00101a70, 0x00018660, 0x16460c05, 0x00000000,
    0x04100028, 0x0001c660, 0x000008d8, 0x000008d8,
    0x2c00a94c, 0x00100c7a, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x80101961, 0x10014110,
    0x00000000, 0x1d001d00, 0x00100069, 0x10018510,
    0x01567a06, 0x00020002, 0x00100940, 0x10018110,
    0x01461001, 0x1d001d00, 0x00100961, 0x7b050220,
    0x00710000, 0x00000000, 0xac301970, 0x74007b7c,
    0x00101965, 0x00010220, 0x22467c05, 0x00466405,
    0x04100062, 0x7d058220, 0x02466005, 0xff800000,
    0x04100062, 0x7e058220, 0x02466105, 0xff800000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x7f058220, 0x02466205, 0xff800000,
    0x04100062, 0x01058220, 0x02465405, 0x7f800000,
    0x04100062, 0x02058220, 0x02465505, 0x7f800000,
    0x04100062, 0x03058220, 0x02465605, 0x7f800000,
    0x78900e61, 0xff800007, 0x28000061, 0x00107d07,
    0x78900d61, 0xff800008, 0x28000061, 0x00107e08,
    0x80008101, 0x00000000, 0x00000000, 0x00000000,
    0x78900c61, 0xff800009, 0x28000061, 0x00107f09,
    0x78900b61, 0x7f800004, 0x28000061, 0x00100104,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x78901a61, 0x7f800005, 0x28000061, 0x00100205,
    0x78900961, 0x7f800006, 0x28000061, 0x00100306,
    0x00100070, 0x00018660, 0x16467705, 0x00000001,
    0x800c1661, 0x25060220, 0x00440716, 0x00000000,
    0x800c1561, 0x2d060220, 0x00440816, 0x00000000,
    0x800c0961, 0x35060220, 0x00440916, 0x00000000,
    0x800c1361, 0x0b060220, 0x00440416, 0x00000000,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1261, 0x15060220, 0x00440516, 0x00000000,
    0x800c1161, 0x1d060220, 0x00440616, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x800c1e62, 0x24060aa0, 0x4a440706, 0x00442506,
    0x800c1d62, 0x2c060aa0, 0x4a440806, 0x00442d06,
    0x800c1c62, 0x34060aa0, 0x4a440906, 0x00443506,
    0x800c1b62, 0x0a060aa0, 0x5a440406, 0x00440b06,
    0x800c1a62, 0x14060aa0, 0x5a440506, 0x00441506,
    0x800c1962, 0x1c060aa0, 0x5a440606, 0x00441d06,
    0x800c0e61, 0x07160220, 0x00442406, 0x00000000,
    0x800c0d61, 0x08160220, 0x00442c06, 0x00000000,
    0x800c0c61, 0x09160220, 0x00443406, 0x00000000,
    0x800c0b61, 0x04160220, 0x00440a06, 0x00000000,
    0x800c0a61, 0x05160220, 0x00441406, 0x00000000,
    0x800c0961, 0x06160220, 0x00441c06, 0x00000000,
    0x80081e61, 0x27070220, 0x00420717, 0x00000000,
    0x80080061, 0x28070220, 0x00420727, 0x00000000,
    0x80081f61, 0x2f070220, 0x00420817, 0x00000000,
    0x8008a361, 0x30070220, 0x00420827, 0x00000000,
    0x80080a61, 0x37070220, 0x00420917, 0x00000000,
    0x80080061, 0x38070220, 0x00420927, 0x00000000,
    0x80081f61, 0x0e070220, 0x00420417, 0x00000000,
    0x80080061, 0x0f070220, 0x00420427, 0x00000000,
    0x80081f61, 0x17070220, 0x00420517, 0x00000000,
    0x80080061, 0x18070220, 0x00420527, 0x00000000,
    0x80080061, 0x1f070220, 0x00420617, 0x00000000,
    0x80080061, 0x20070220, 0x00420627, 0x00000000,
    0x80080062, 0x26070aa0, 0x4a422707, 0x00422807,
    0x80081f62, 0x2e070aa0, 0x4a422f07, 0x00423007,
    0x80080b62, 0x36070aa0, 0x4a423707, 0x00423807,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80081d62, 0x0d070aa0, 0x5a420e07, 0x00420f07,
    0x80081b62, 0x16070aa0, 0x5a421707, 0x00421807,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x1e070aa0, 0x5a421f07, 0x00422007,
    0x80081661, 0x07270220, 0x00422607, 0x00000000,
    0x80081561, 0x08270220, 0x00422e07, 0x00000000,
    0x80081461, 0x09270220, 0x00423607, 0x00000000,
    0x80081361, 0x04270220, 0x00420d07, 0x00000000,
    0x80081261, 0x05270220, 0x00421607, 0x00000000,
    0x80081161, 0x06270220, 0x00421e07, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80081e61, 0x2a070220, 0x00420717, 0x00000000,
    0x80080061, 0x2b070220, 0x00420737, 0x00000000,
    0x80081f61, 0x32070220, 0x00420817, 0x00000000,
    0x80080061, 0x33070220, 0x00420837, 0x00000000,
    0x80081f61, 0x3c070220, 0x00420917, 0x00000000,
    0x80080061, 0x3d070220, 0x00420937, 0x00000000,
    0x80081f61, 0x12070220, 0x00420417, 0x00000000,
    0x8008a161, 0x13070220, 0x00420437, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x1a070220, 0x00420517, 0x00000000,
    0x80080061, 0x1b070220, 0x00420537, 0x00000000,
    0x80080061, 0x22070220, 0x00420617, 0x00000000,
    0x80080061, 0x23070220, 0x00420637, 0x00000000,
    0x80080062, 0x29070aa0, 0x4a422a07, 0x00422b07,
    0x80081f62, 0x31070aa0, 0x4a423207, 0x00423307,
    0x80081f62, 0x39070aa0, 0x4a423c07, 0x00423d07,
    0x80081d62, 0x11070aa0, 0x5a421207, 0x00421307,
    0x80081b62, 0x19070aa0, 0x5a421a07, 0x00421b07,
    0x80081962, 0x21070aa0, 0x5a422207, 0x00422307,
    0x80081661, 0x07370220, 0x00422907, 0x00000000,
    0x80081561, 0x08370220, 0x00423107, 0x00000000,
    0x80081461, 0x09370220, 0x00423907, 0x00000000,
    0x80081361, 0x04370220, 0x00421107, 0x00000000,
    0x80081261, 0x05370220, 0x00421907, 0x00000000,
    0x80081161, 0x06370220, 0x00422107, 0x00000000,
    0x80081e62, 0x07450aa0, 0x4a000734, 0x00340745,
    0x80081e62, 0x07c50aa0, 0x4a0007b4, 0x003407c5,
    0x80081d62, 0x08450aa0, 0x4a000834, 0x00340845,
    0x80081d62, 0x08c50aa0, 0x4a0008b4, 0x003408c5,
    0x80081c62, 0x09450aa0, 0x4a000934, 0x00340945,
    0x80081c62, 0x09c50aa0, 0x4a0009b4, 0x003409c5,
    0x80081b62, 0x04450aa0, 0x5a000434, 0x00340445,
    0x80081b62, 0x04c50aa0, 0x5a0004b4, 0x003404c5,
    0x80081a62, 0x05450aa0, 0x5a000534, 0x00340545,
    0x80081a62, 0x05c50aa0, 0x5a0005b4, 0x003405c5,
    0x80081962, 0x06450aa0, 0x5a000634, 0x00340645,
    0x80081962, 0x06c50aa0, 0x5a0006b4, 0x003406c5,
    0x800c0062, 0x07850aa0, 0x4a000774, 0x00460785,
    0x800c1762, 0x08850aa0, 0x4a000874, 0x00460885,
    0x800c1762, 0x09850aa0, 0x4a000974, 0x00460985,
    0x800c1762, 0x04850aa0, 0x5a000474, 0x00460485,
    0x800c1762, 0x05850aa0, 0x5a000574, 0x00460585,
    0x800c1662, 0x06850aa0, 0x5a000674, 0x00460685,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x0b050220, 0x020008f4, 0x000007f4,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x0a050220, 0x020005f4, 0x000004f4,
    0x00100070, 0x00018660, 0x16467705, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x0d050220, 0x020006f4, 0x00460a05,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x0e050220, 0x020009f4, 0x00460b05,
    0x00100070, 0x00018660, 0x16467805, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x20780062, 0x0e200d6a, 0x00100065, 0x00018220,
    0x22467905, 0x00000077, 0x04100022, 0x0001c060,
    0x00000080, 0x00000080, 0x68000041, 0x00607b0f,
    0x68000041, 0x00307811, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100052, 0x12040e68,
    0x0e0e0f05, 0x11057705, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x13058660,
    0x02461205, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x00000000,
    0xea2a130c, 0x01006a0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000050, 0xad800066, 0x64207c14,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22461405, 0x00000000,
    0x00100061, 0x15050120, 0x00003000, 0x00000000,
    0xe8001965, 0x15000c0c, 0x00100027, 0x00014060,
    0x00000000, 0xfffff718, 0x00101f40, 0x16058660,
    0x06467505, 0x00000010, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00100070, 0x00018220,
    0x22466405, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x00101161, 0x0d050120,
    0x00003000, 0x00000000, 0x00101970, 0x00018660,
    0x16460d05, 0x00000000, 0x04100028, 0x0001c660,
    0x000008e8, 0x000008e8, 0x2c00004c, 0x00100d17,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80100061, 0x10014110, 0x00000000, 0x05800580,
    0x00100069, 0x10018510, 0x01561706, 0x00020002,
    0x00100940, 0x10018110, 0x01461001, 0x05800580,
    0x00100961, 0x18050220, 0x00710000, 0x00000000,
    0xac301970, 0x16001819, 0x00101965, 0x00010220,
    0x22461905, 0x00466405, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x1a058220,
    0x02466005, 0xff800000, 0x04100062, 0x1b058220,
    0x02466105, 0xff800000, 0x04100062, 0x1c058220,
    0x02466205, 0xff800000, 0x04100062, 0x1d058220,
    0x02465405, 0x7f800000, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x1e058220,
    0x02465505, 0x7f800000, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x1f058220,
    0x02465605, 0x7f800000, 0x78900e61, 0xff800023,
    0x28000061, 0x00101a23, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x78900d61, 0xff800024,
    0x28000061, 0x00101b24, 0x78900c61, 0xff800025,
    0x28000061, 0x00101c25, 0x78900b61, 0x7f800020,
    0x28000061, 0x00101d20, 0x78900a61, 0x7f800021,
    0x28000061, 0x00101e21, 0x78900961, 0x7f800022,
    0x28000061, 0x00101f22, 0x00100070, 0x00018660,
    0x16467705, 0x00000001, 0x800c1661, 0x5b060220,
    0x00442316, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x800c1561, 0x68060220,
    0x00442416, 0x00000000, 0x800c1461, 0x70060220,
    0x00442516, 0x00000000, 0x800c1361, 0x3f060220,
    0x00442016, 0x00000000, 0x800c1261, 0x47060220,
    0x00442116, 0x00000000, 0x800c1161, 0x4f060220,
    0x00442216, 0x00000000, 0x800c1e62, 0x5a060aa0,
    0x4a442306, 0x00445b06, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x800c1d62, 0x67060aa0,
    0x4a442406, 0x00446806, 0x800c0c62, 0x6f060aa0,
    0x4a442506, 0x00447006, 0x800c1b62, 0x3e060aa0,
    0x5a442006, 0x00443f06, 0x800c1a62, 0x46060aa0,
    0x5a442106, 0x00444706, 0x800c1962, 0x4e060aa0,
    0x5a442206, 0x00444f06, 0x800c0e61, 0x23160220,
    0x00445a06, 0x00000000, 0x800c0d61, 0x24160220,
    0x00446706, 0x00000000, 0x800c0c61, 0x25160220,
    0x00446f06, 0x00000000, 0x800c0b61, 0x20160220,
    0x00443e06, 0x00000000, 0x800c0a61, 0x21160220,
    0x00444606, 0x00000000, 0x800c0961, 0x22160220,
    0x00444e06, 0x00000000, 0x80081e61, 0x5d070220,
    0x00422317, 0x00000000, 0x80080061, 0x5e070220,
    0x00422327, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x6a070220,
    0x00422417, 0x00000000, 0x8008a761, 0x6b070220,
    0x00422427, 0x00000000, 0x80081f61, 0x72070220,
    0x00422517, 0x00000000, 0x80080061, 0x73070220,
    0x00422527, 0x00000000, 0x80081f61, 0x41070220,
    0x00422017, 0x00000000, 0x80080061, 0x42070220,
    0x00422027, 0x00000000, 0x80081f61, 0x49070220,
    0x00422117, 0x00000000, 0x80080061, 0x4a070220,
    0x00422127, 0x00000000, 0x80080061, 0x51070220,
    0x00422217, 0x00000000, 0x8008a561, 0x52070220,
    0x00422227, 0x00000000, 0x80080062, 0x5c070aa0,
    0x4a425d07, 0x00425e07, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80081f62, 0x69070aa0,
    0x4a426a07, 0x00426b07, 0x80081f62, 0x71070aa0,
    0x4a427207, 0x00427307, 0x80081d62, 0x40070aa0,
    0x5a424107, 0x00424207, 0x80081b62, 0x48070aa0,
    0x5a424907, 0x00424a07, 0x80081962, 0x50070aa0,
    0x5a425107, 0x00425207, 0x80081661, 0x23270220,
    0x00425c07, 0x00000000, 0x80081561, 0x24270220,
    0x00426907, 0x00000000, 0x80081461, 0x25270220,
    0x00427107, 0x00000000, 0x80081361, 0x20270220,
    0x00424007, 0x00000000, 0x80081261, 0x21270220,
    0x00424807, 0x00000000, 0x80081161, 0x22270220,
    0x00425007, 0x00000000, 0x80081e61, 0x65070220,
    0x00422317, 0x00000000, 0x8008a161, 0x66070220,
    0x00422337, 0x00000000, 0x80081f61, 0x6d070220,
    0x00422417, 0x00000000, 0x80080061, 0x6e070220,
    0x00422437, 0x00000000, 0x80081f61, 0x7b070220,
    0x00422517, 0x00000000, 0x80080061, 0x7c070220,
    0x00422537, 0x00000000, 0x80081f61, 0x44070220,
    0x00422017, 0x00000000, 0x80080061, 0x45070220,
    0x00422037, 0x00000000, 0x80081f61, 0x4c070220,
    0x00422117, 0x00000000, 0x80080061, 0x4d070220,
    0x00422137, 0x00000000, 0x8008a561, 0x58070220,
    0x00422217, 0x00000000, 0x8008a561, 0x59070220,
    0x00422237, 0x00000000, 0x80080062, 0x5f070aa0,
    0x4a426507, 0x00426607, 0x80081f62, 0x6c070aa0,
    0x4a426d07, 0x00426e07, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80081f62, 0x7a070aa0,
    0x4a427b07, 0x00427c07, 0x80081d62, 0x43070aa0,
    0x5a424407, 0x00424507, 0x80081b62, 0x4b070aa0,
    0x5a424c07, 0x00424d07, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x80081962, 0x53070aa0,
    0x5a425807, 0x00425907, 0x80081661, 0x23370220,
    0x00425f07, 0x00000000, 0x80081561, 0x24370220,
    0x00426c07, 0x00000000, 0x80081461, 0x25370220,
    0x00427a07, 0x00000000, 0x80081361, 0x20370220,
    0x00424307, 0x00000000, 0x80081261, 0x21370220,
    0x00424b07, 0x00000000, 0x80081161, 0x22370220,
    0x00425307, 0x00000000, 0x80081e62, 0x23450aa0,
    0x4a002334, 0x00342345, 0x80081e62, 0x23c50aa0,
    0x4a0023b4, 0x003423c5, 0x80081d62, 0x24450aa0,
    0x4a002434, 0x00342445, 0x80081d62, 0x24c50aa0,
    0x4a0024b4, 0x003424c5, 0x80081c62, 0x25450aa0,
    0x4a002534, 0x00342545, 0x80081c62, 0x25c50aa0,
    0x4a0025b4, 0x003425c5, 0x80081b62, 0x20450aa0,
    0x5a002034, 0x00342045, 0x80081b62, 0x20c50aa0,
    0x5a0020b4, 0x003420c5, 0x80081a62, 0x21450aa0,
    0x5a002134, 0x00342145, 0x80081a62, 0x21c50aa0,
    0x5a0021b4, 0x003421c5, 0x80081962, 0x22450aa0,
    0x5a002234, 0x00342245, 0x80081962, 0x22c50aa0,
    0x5a0022b4, 0x003422c5, 0x800c0062, 0x23850aa0,
    0x4a002374, 0x00462385, 0x800c1762, 0x24850aa0,
    0x4a002474, 0x00462485, 0x800c1762, 0x25850aa0,
    0x4a002574, 0x00462585, 0x800c1762, 0x20850aa0,
    0x5a002074, 0x00462085, 0x800c1762, 0x21850aa0,
    0x5a002174, 0x00462185, 0x800c1662, 0x22850aa0,
    0x5a002274, 0x00462285, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x27050220,
    0x020024f4, 0x000023f4, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x26050220,
    0x020021f4, 0x000020f4, 0x00100070, 0x00018660,
    0x16467705, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x28050220,
    0x020022f4, 0x00462605, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x29050220,
    0x020025f4, 0x00462705, 0x00100070, 0x00018660,
    0x16467805, 0x00000000, 0x20781a62, 0x2920286b,
    0x00100065, 0x00018220, 0x22467905, 0x00000077,
    0x04100022, 0x0001c060, 0x00000090, 0x00000090,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x68000041, 0x0060182a, 0x68000041, 0x0030782b,
    0x00101952, 0x2c040e68, 0x0e0e2a05, 0x2b057705,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x2d058660, 0x02462c05, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x00000000, 0xea2a2d0c, 0x01006b0c,
    0x00100025, 0x00004600, 0x00000000, 0x00000050,
    0xad800066, 0x6420192e, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00101a70, 0x00018220,
    0x22462e05, 0x00000000, 0x00100061, 0x2f050120,
    0x00003000, 0x00000000, 0xe8001965, 0x2f000d0d,
    0x00100027, 0x00014060, 0x00000000, 0xfffff708,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x30058660, 0x06467605, 0x00000020,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00100070, 0x00018220, 0x22466405, 0x00000000,
    0x00101161, 0x0e050120, 0x00003000, 0x00000000,
    0x00101970, 0x00018660, 0x16460e05, 0x00000000,
    0x04100028, 0x0001c660, 0x000008f8, 0x000008f8,
    0x2c00004c, 0x00100e31, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80100061, 0x10014110,
    0x00000000, 0x0c000c00, 0x00100069, 0x10018510,
    0x01563106, 0x00020002, 0x00100940, 0x10018110,
    0x01461001, 0x0c000c00, 0x00100961, 0x32050220,
    0x00710000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac300070, 0x30003233,
    0x00101965, 0x00010220, 0x22463305, 0x00466405,
    0x04100062, 0x34058220, 0x02466005, 0xff800000,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x35058220, 0x02466105, 0xff800000,
    0x80002b01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x36058220, 0x02466205, 0xff800000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x37058220, 0x02465405, 0x7f800000,
    0x04100062, 0x38058220, 0x02465505, 0x7f800000,
    0x04100062, 0x39058220, 0x02465605, 0x7f800000,
    0x78900e61, 0xff80003f, 0x28000061, 0x0010343f,
    0x78900d61, 0xff800040, 0x28000061, 0x00103540,
    0x78900c61, 0xff800041, 0x28000061, 0x00103641,
    0x78900b61, 0x7f80003c, 0x28000061, 0x0010373c,
    0x78900a61, 0x7f80003d, 0x28000061, 0x0010383d,
    0x78900961, 0x7f80003e, 0x28000061, 0x0010393e,
    0x00100070, 0x00018660, 0x16467705, 0x00000001,
    0x800c1661, 0x19060220, 0x00443f16, 0x00000000,
    0x800c1561, 0x21060220, 0x00444016, 0x00000000,
    0x800c1461, 0x29060220, 0x00444116, 0x00000000,
    0x800c1361, 0x7e060220, 0x00443c16, 0x00000000,
    0x800c1261, 0x07060220, 0x00443d16, 0x00000000,
    0x800c1161, 0x11060220, 0x00443e16, 0x00000000,
    0x800c1e62, 0x18060aa0, 0x4a443f06, 0x00441906,
    0x800c1d62, 0x20060aa0, 0x4a444006, 0x00442106,
    0x800c0c62, 0x28060aa0, 0x4a444106, 0x00442906,
    0x800c1b62, 0x7d060aa0, 0x5a443c06, 0x00447e06,
    0x800c1a62, 0x06060aa0, 0x5a443d06, 0x00440706,
    0x800c1962, 0x0f060aa0, 0x5a443e06, 0x00441106,
    0x800c0e61, 0x3f160220, 0x00441806, 0x00000000,
    0x800c0d61, 0x40160220, 0x00442006, 0x00000000,
    0x800c0c61, 0x41160220, 0x00442806, 0x00000000,
    0x800c0b61, 0x3c160220, 0x00447d06, 0x00000000,
    0x800c0a61, 0x3d160220, 0x00440606, 0x00000000,
    0x800c0961, 0x3e160220, 0x00440f06, 0x00000000,
    0x80081e61, 0x1b070220, 0x00423f17, 0x00000000,
    0x80080061, 0x1c070220, 0x00423f27, 0x00000000,
    0x80081f61, 0x23070220, 0x00424017, 0x00000000,
    0x8008a161, 0x24070220, 0x00424027, 0x00000000,
    0x80081f61, 0x2b070220, 0x00424117, 0x00000000,
    0x80080061, 0x2c070220, 0x00424127, 0x00000000,
    0x80081f61, 0x01070220, 0x00423c17, 0x00000000,
    0x80080061, 0x02070220, 0x00423c27, 0x00000000,
    0x8009e161, 0x09070220, 0x00423d17, 0x00000000,
    0x80080061, 0x0a070220, 0x00423d27, 0x00000000,
    0x8008a161, 0x13070220, 0x00423e17, 0x00000000,
    0x80080061, 0x14070220, 0x00423e27, 0x00000000,
    0x8008af62, 0x1a070aa0, 0x4a421b07, 0x00421c07,
    0x80081f62, 0x22070aa0, 0x4a422307, 0x00422407,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80081f62, 0x2a070aa0, 0x4a422b07, 0x00422c07,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80081d62, 0x7f070aa0, 0x5a420107, 0x00420207,
    0x80081b62, 0x08070aa0, 0x5a420907, 0x00420a07,
    0x80081962, 0x12070aa0, 0x5a421307, 0x00421407,
    0x80081661, 0x3f270220, 0x00421a07, 0x00000000,
    0x80081561, 0x40270220, 0x00422207, 0x00000000,
    0x80081461, 0x41270220, 0x00422a07, 0x00000000,
    0x80081361, 0x3c270220, 0x00427f07, 0x00000000,
    0x80081261, 0x3d270220, 0x00420807, 0x00000000,
    0x80081161, 0x3e270220, 0x00421207, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80081e61, 0x1e070220, 0x00423f17, 0x00000000,
    0x80080061, 0x1f070220, 0x00423f37, 0x00000000,
    0x80081f61, 0x26070220, 0x00424017, 0x00000000,
    0x80080061, 0x27070220, 0x00424037, 0x00000000,
    0x80081f61, 0x2e070220, 0x00424117, 0x00000000,
    0x80080061, 0x2f070220, 0x00424137, 0x00000000,
    0x80081f61, 0x04070220, 0x00423c17, 0x00000000,
    0x8008ab61, 0x05070220, 0x00423c37, 0x00000000,
    0x80081f61, 0x0c070220, 0x00423d17, 0x00000000,
    0x80080061, 0x0d070220, 0x00423d37, 0x00000000,
    0x80080061, 0x16070220, 0x00423e17, 0x00000000,
    0x80080061, 0x17070220, 0x00423e37, 0x00000000,
    0x80080062, 0x1d070aa0, 0x4a421e07, 0x00421f07,
    0x80081f62, 0x25070aa0, 0x4a422607, 0x00422707,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80081f62, 0x2d070aa0, 0x4a422e07, 0x00422f07,
    0x80081d62, 0x03070aa0, 0x5a420407, 0x00420507,
    0x80081b62, 0x0b070aa0, 0x5a420c07, 0x00420d07,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x15070aa0, 0x5a421607, 0x00421707,
    0x80081661, 0x3f370220, 0x00421d07, 0x00000000,
    0x80081561, 0x40370220, 0x00422507, 0x00000000,
    0x80081461, 0x41370220, 0x00422d07, 0x00000000,
    0x80081361, 0x3c370220, 0x00420307, 0x00000000,
    0x80081261, 0x3d370220, 0x00420b07, 0x00000000,
    0x80081161, 0x3e370220, 0x00421507, 0x00000000,
    0x80081e62, 0x3f450aa0, 0x4a003f34, 0x00343f45,
    0x80081e62, 0x3fc50aa0, 0x4a003fb4, 0x00343fc5,
    0x80081d62, 0x40450aa0, 0x4a004034, 0x00344045,
    0x80081d62, 0x40c50aa0, 0x4a0040b4, 0x003440c5,
    0x80081c62, 0x41450aa0, 0x4a004134, 0x00344145,
    0x80081c62, 0x41c50aa0, 0x4a0041b4, 0x003441c5,
    0x80081b62, 0x3c450aa0, 0x5a003c34, 0x00343c45,
    0x80081b62, 0x3cc50aa0, 0x5a003cb4, 0x00343cc5,
    0x80081a62, 0x3d450aa0, 0x5a003d34, 0x00343d45,
    0x80081a62, 0x3dc50aa0, 0x5a003db4, 0x00343dc5,
    0x80081962, 0x3e450aa0, 0x5a003e34, 0x00343e45,
    0x80081962, 0x3ec50aa0, 0x5a003eb4, 0x00343ec5,
    0x800c0062, 0x3f850aa0, 0x4a003f74, 0x00463f85,
    0x800c1762, 0x40850aa0, 0x4a004074, 0x00464085,
    0x800c1762, 0x41850aa0, 0x4a004174, 0x00464185,
    0x800c1762, 0x3c850aa0, 0x5a003c74, 0x00463c85,
    0x800c1762, 0x3d850aa0, 0x5a003d74, 0x00463d85,
    0x800c1662, 0x3e850aa0, 0x5a003e74, 0x00463e85,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x43050220, 0x020040f4, 0x00003ff4,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x42050220, 0x02003df4, 0x00003cf4,
    0x00100070, 0x00018660, 0x16467705, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x44050220, 0x02003ef4, 0x00464205,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x45050220, 0x020041f4, 0x00464305,
    0x00100070, 0x00018660, 0x16467805, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x20780062, 0x4520446c, 0x00100065, 0x00018220,
    0x22467905, 0x00000077, 0x04100022, 0x0001c060,
    0x00000090, 0x00000090, 0x68000041, 0x00603246,
    0x68000041, 0x00307847, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100052, 0x48040e68,
    0x0e0e4605, 0x47057705, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x49058660,
    0x02464805, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x00000000,
    0xea2a490c, 0x01006c0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000050, 0xad800066, 0x6420334a,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22464a05, 0x00000000,
    0x00100061, 0x4b050120, 0x00003000, 0x00000000,
    0xe8001965, 0x4b000e0e, 0x00100027, 0x00014060,
    0x00000000, 0xfffff6f8, 0x00100061, 0x00010660,
    0x20466405, 0x00000000, 0x04100022, 0x0001c060,
    0x00000100, 0x00000100, 0x00100069, 0x4c058660,
    0x02467405, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x4d058660,
    0x06464c05, 0x00000480, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x00000000,
    0xea104d0c, 0x01000000, 0x00100069, 0x4e058660,
    0x02467505, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x4f058660,
    0x06464e05, 0x000004c0, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ca31, 0x00000000,
    0xea104f0c, 0x01000000, 0x00100069, 0x50058660,
    0x02467605, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x51058660,
    0x06465005, 0x00000500, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cb31, 0x00000000,
    0xea10510c, 0x01000000, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x8000cc31, 0x520c0000,
    0xe23e000c, 0x00000000, 0x80008c01, 0x00000000,
    0x00000000, 0x00000000, 0x64a4a561, 0x00000053,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x532d0000, 0x0080002c, 0x00000000,
    0x80001966, 0x53258220, 0x02005324, 0x00000100,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8010cd31, 0x00000000, 0x3008530c, 0x00000000,
    0x80100001, 0x00000000, 0xe0000000, 0x00000000,
    0x00101761, 0x54054770, 0x00000000, 0x0000002c,
    0x2c000061, 0x0010100f, 0x00101970, 0x00018220,
    0x42460f05, 0x00000120, 0x04100028, 0x0001c660,
    0x00000150, 0x00000150, 0x00100f69, 0x56058660,
    0x02460f05, 0x00000002, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ce31, 0x6d0c0000,
    0xea00560c, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0xb400ae61, 0x00105630,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00108461, 0x57050230, 0x00443006, 0x00000000,
    0x74508e70, 0x7f806d00, 0x04100022, 0x0001c060,
    0x00000080, 0x00000080, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x3800a740, 0x54003a59,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38000040, 0x5700595b, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cf31, 0x00000000,
    0xfb2a5b14, 0x01006d0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000020, 0x00100040, 0x0f058660,
    0x06460f05, 0x00000200, 0x00100027, 0x00014060,
    0x00000000, 0xfffffea0, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x5c054770,
    0x00000000, 0x000004ac, 0x00101a70, 0x00018220,
    0x42461005, 0x00000030, 0x04100028, 0x0001c660,
    0x00000148, 0x00000148, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x5e058660,
    0x02461005, 0x00000002, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00100940, 0x60058660,
    0x06465e05, 0x00000480, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0xb4000061, 0x00105e31,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c031, 0x6e0c0000, 0xea00600c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010a061, 0x5f050230, 0x00443106, 0x00000000,
    0x00108070, 0x00018660, 0x26466e05, 0x00000000,
    0x04100022, 0x0001c060, 0x00000060, 0x00000060,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x38000f40, 0x5c003a61, 0x80008501, 0x00000000,
    0x00000000, 0x00000000, 0x38001940, 0x5f006163,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x00000000, 0xfb186314, 0x01006e0c,
    0x00100025, 0x00004600, 0x00000000, 0x00000020,
    0x00100040, 0x10058660, 0x06461005, 0x00000200,
    0x00100027, 0x00014060, 0x00000000, 0xfffffea8,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_BFS_pass1_indexed = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 1344,
      .base.program_size = 13744,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_BFS_pass1_indexed_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_BFS_pass1_indexed_printfs,
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
   .args = gfx20_bvh_build_BFS_BFS_pass1_indexed_args,
   .code = gfx20_bvh_build_BFS_BFS_pass1_indexed_code,
};
const char *gfx20_bvh_build_BFS_BFS_pass1_indexed_sha1 = "d617ad584ce14d74b7c0baade946b4a2cc07eadd";

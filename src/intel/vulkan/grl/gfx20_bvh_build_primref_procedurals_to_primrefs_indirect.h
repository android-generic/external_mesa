#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_primref_procedurals_to_primrefs_indirect_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_primref_procedurals_to_primrefs_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_primref_procedurals_to_primrefs_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g80<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g18<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g80UD           nullUD          0x0220e500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V32, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g19<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g71<2>UD        g18<1,1,0>UD                    { align1 1H I@2 compacted };
add(8)          g19.8<1>UW      g19<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
mov(16)         g14<1>UQ        g71<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g18<1>UD        g19<8,8,1>UW                    { align1 1H };
shl(16)         g16<1>Q         g14<4,4,1>Q     0x00000004UD    { align1 1H I@2 };
mov(16)         g73<2>UD        g18<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g75<2>UD        g16<4,4,1>UQ                    { align1 1H I@2 };
mov(16)         g20<1>UQ        g73<8,4,2>UD                    { align1 1H I@2 };
add(16)         g22<1>D         g75<8,4,2>D     g18<8,8,1>D     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g33<1>Q         g2<0,1,0>Q                      { align1 1H };
and(16)         g12<1>UD        g2.2<0,1,0>UD   0x00ffffffUD    { align1 1H };
mov(16)         g13<1>UD        g2.11<0,1,0>UB                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g11UD           g33UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
cmp.l.f0.0(16)  null<1>UD       g22<8,8,1>UD    g11<8,8,1>UD    { align1 1H @4 $1.dst };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g35<1>Q         g1.7<0,1,0>Q                    { align1 1H };
and(1)          g38<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g23UD           g35UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
shr(1)          g41<1>UD        g38<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g42<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g42.8<1>UW      g42<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g43<1>UD        g42<8,8,1>UW    0x00000002UD    { align1 1H };
mov(16)         g27<2>UD        g23<1,1,0>UD                    { align1 1H $2.dst compacted };
mul(16)         acc0<1>UD       g22<8,8,1>UD    g25<16,8,2>UW   { align1 1H $2.dst };
mul(16)         g30<1>D         g22<8,8,1>D     g25<16,8,2>UW   { align1 1H };
mul(16)         g69<1>D         g22<8,8,1>D     g25.1<16,8,2>UW { align1 1H };
mul(16)         g31<1>D         g22<8,8,1>D     g26<16,8,2>UW   { align1 1H $2.dst };
mul(16)         g70<1>D         g22<8,8,1>D     g26.1<16,8,2>UW { align1 1H };
mov(16)         g27.1<2>UD      g24<1,1,0>UD                    { align1 1H @6 $2.dst compacted };
mach(16)        g29<1>UD        g22<1,1,0>UD    g25<1,1,0>UD    { align1 1H compacted };
add(16)         g30.1<2>UW      g30.1<16,8,2>UW g69<16,8,2>UW   { align1 1H I@5 };
add(16)         g31.1<2>UW      g31.1<16,8,2>UW g70<16,8,2>UW   { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g33<2>UD        g30<1,1,0>UD                    { align1 1H I@2 compacted };
add(16)         g32<1>D         g29<1,1,0>D     g31<1,1,0>D     { align1 1H I@2 compacted };
mov(16)         g33.1<2>UD      g32<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g35<1>Q         g27<1,1,0>Q     g33<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g37UD           g35UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
or(1)           a0.1<1>UD       g41<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g43UD           g37UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
and(1)          g44<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g45<1>UD        g44<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g46<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g46.8<1>UW      g46<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g47<1>UD        g46<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g48<1>UD        g47<8,8,1>UD    0x00000040UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g45<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g48UD           g38UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
and(1)          g49<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g50<1>UD        g49<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g51<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g51.8<1>UW      g51<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g52<1>UD        g51<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g53<1>UD        g52<8,8,1>UD    0x00000080UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g50<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g53UD           g39UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
and(1)          g54<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g55<1>UD        g54<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g56<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g56.8<1>UW      g56<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g57<1>UD        g56<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g58<1>UD        g57<8,8,1>UD    0x000000c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g55<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g58UD           g40UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
mov(16)         g59<1>Q         0x0000000000000010Q             { align1 1H };
and(1)          g64<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g61<1>Q         g35<1,1,0>Q     g59<1,1,0>Q     { align1 1H I@2 compacted };
shr(1)          g65<1>UD        g64<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g66<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g63UD           g61UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
add(8)          g66.8<1>UW      g66<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g67<1>UD        g66<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g68<1>UD        g67<8,8,1>UD    0x00000100UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g65<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g68UD           g63UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
and(1)          g69<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g70<1>UD        g69<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g71<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g71.8<1>UW      g71<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g72<1>UD        g71<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g73<1>UD        g72<8,8,1>UD    0x00000140UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g70<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g73UD           g64UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
and(1)          g74<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
cmp.l.f0.0(16)  g79<1>F         (abs)g38<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $5.src compacted };
sel.l(16)       g91<1>F         g38<1,1,0>F     g63<1,1,0>F     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.l(16)       g92<1>F         g39<1,1,0>F     g64<1,1,0>F     { align1 1H $6.src compacted };
sel.ge(16)      g94<1>F         g38<1,1,0>F     g63<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g95<1>F         g39<1,1,0>F     g64<1,1,0>F     { align1 1H compacted };
shr(1)          g75<1>UD        g74<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g76<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g76.8<1>UW      g76<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g77<1>UD        g76<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g75<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g78UD           g77UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g80<1>F         (abs)g78<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $11.dst compacted };
sel.l(16)       g90<1>F         g78<1,1,0>F     g40<1,1,0>F     { align1 1H $7.src compacted };
sel.ge(16)      g93<1>F         g78<1,1,0>F     g40<1,1,0>F     { align1 1H compacted };
cmp.l.f0.0(16)  g82<1>F         (abs)g39<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g84<1>F         (abs)g63<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g81<1>UD        g79<1,1,0>UD    g80<1,1,0>UD    { align1 1H F@5 compacted };
cmp.l.f0.0(16)  g85<1>F         (abs)g40<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g87<1>F         (abs)g64<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g83<1>UD        g81<1,1,0>UD    g82<1,1,0>UD    { align1 1H A@1 compacted };
and(16)         g86<1>UD        g84<1,1,0>UD    g85<1,1,0>UD    { align1 1H F@2 compacted };
and(16)         g88<1>UD        g86<1,1,0>UD    g87<1,1,0>UD    { align1 1H A@1 compacted };
and.nz.f0.0(16) g89<1>UD        g83<1,1,0>UD    g88<1,1,0>UD    { align1 1H I@1 compacted };
(+f0.0) sel(16) g5<1>UD         g93<8,8,1>UD    0xff800000UD    { align1 1H F@5 };
(+f0.0) sel(16) g6<1>UD         g94<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g7<1>UD         g95<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
(+f0.0) sel(16) g2<1>UD         g90<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
(+f0.0) sel(16) g3<1>UD         g91<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g4<1>UD         g92<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(16)         g96<2>W         -g89<8,8,1>D                    { align1 1H I@7 };
mov(16)         g9<1>UW         g96<16,8,2>UW                   { align1 1H I@1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g9<1>UW         0x0000UW                        { align1 1H I@2 };
mov(16)         g4<1>UD         0x7f800000UD                    { align1 1H I@5 };
mov(16)         g3<1>UD         0x7f800000UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
mov(16)         g2<1>UD         0x7f800000UD                    { align1 1H };
mov(16)         g7<1>UD         0xff800000UD                    { align1 1H };
mov(16)         g6<1>UD         0xff800000UD                    { align1 1H };
mov(16)         g5<1>UD         0xff800000UD                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
and(16)         g96<1>UW        g9<16,16,1>UW   0x0001UW        { align1 1H I@3 };
mov(16)         g97<1>W         g96<32,16,2>B                   { align1 1H I@1 };
cmp.nz.f0.0(16) g99<1>W         g97<16,16,1>W   0W              { align1 1H I@1 };
mov(16)         g98<1>D         g99<8,8,1>W                     { align1 1H I@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g98<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g100<1>UD       f0<0,1,0>UW                     { align1 1H };
bfi1(16)        g101<1>UD       g18<8,8,1>D     0D              { align1 1H };
cbit(16)        g36<1>UD        g100<1,1,0>UD                   { align1 1H I@2 compacted };
cmp.z.f0.0(16)  null<1>D        g18<8,8,1>D     0D              { align1 1H };
and(16)         g102<1>UD       g100<1,1,0>UD   g101<1,1,0>UD   { align1 1H I@3 compacted };
cbit(16)        g103<1>UD       g102<1,1,0>UD                   { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
mov(16)         g104<1>Q        0x0000000000000024Q             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g106<1>Q        g1.4<0,1,0>Q    g104<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g10UD           g106UD          g36UD           0x0414058c                0x00000040
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 1, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $12 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g107<1>D        g103<1,1,0>D    g10<0,1,0>D     { align1 1H $12.dst compacted };
mov.nz.f0.0(16) null<1>D        g98<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
and(1)          g108<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g113<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g109<1>UD       g108<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g110<1>UW       0x76543210V                     { align1 WE_all 1Q };
shr(1)          g114<1>UD       g113<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g115<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g110.8<1>UW     g110<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@3 };
add(8)          g115.8<1>UW     g115<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g111<1>UD       g110<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g116<1>UD       g115<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g112<1>UD       g111<8,8,1>UD   0x000002c0UD    { align1 1H I@2 };
or(16)          g117<1>UD       g116<8,8,1>UD   0x00000200UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g109<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g37UD           g112UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g114<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g117UD          g2UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
and(1)          g118<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g119<1>UD       g118<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g120<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g120.8<1>UW     g120<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g121<1>UD       g120<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g122<1>UD       g121<8,8,1>UD   0x00000240UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g119<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g122UD          g3UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $15 };
and(1)          g123<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g124<1>UD       g123<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g125<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g125.8<1>UW     g125<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g126<1>UD       g125<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g127<1>UD       g126<8,8,1>UD   0x00000280UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g124<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g127UD          g4UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
and(1)          g8<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g9<1>UD         g8<0,1,0>UD     0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g10<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g10.8<1>UW      g10<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g11<1>UD        g10<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g14<1>UD        g11<8,8,1>UD    0x000002c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g9<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g14UD           g37UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
and(1)          g15<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g24<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g16<1>UD        g15<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g17<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g25<1>UD        g24<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g26<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g17.8<1>UW      g17<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@3 };
add(8)          g26.8<1>UW      g26<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g19<1>UD        g17<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g27<1>UD        g26<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g23<1>UD        g19<8,8,1>UD    0x000003c0UD    { align1 1H I@2 };
or(16)          g28<1>UD        g27<8,8,1>UD    0x00000300UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g16<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g44UD           g23UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g25<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g28UD           g5UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $3 };
and(1)          g29<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g30<1>UD        g29<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g31<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g31.8<1>UW      g31<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g32<1>UD        g31<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g33<1>UD        g32<8,8,1>UD    0x00000340UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g30<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g33UD           g6UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
and(1)          g34<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $1.src };
shr(1)          g35<1>UD        g34<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g36<1>UW        0x76543210V                     { align1 WE_all 1Q $12.src };
add(8)          g36.8<1>UW      g36<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g37<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H $1.src };
or(16)          g38<1>UD        g37<8,8,1>UD    0x00000380UD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g35<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g38UD           g7UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
and(1)          g39<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@4 };
shr(1)          g40<1>UD        g39<0,1,0>UD    0x00000004UD    { align1 WE_all 1N A@1 };
mov(8)          g41<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g41.8<1>UW      g41<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g42<1>UD        g41<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g43<1>UD        g42<8,8,1>UD    0x000003c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g40<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g43UD           g44UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
shl(16)         g44<1>D         g13<8,8,1>D     0x0000001dUD    { align1 1H $4.src };
and(1)          g45<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g50<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g55<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g60<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g46<1>UD        g45<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g47<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g51<1>UD        g50<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g52<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g56<1>UD        g55<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g57<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shr(1)          g61<1>UD        g60<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g62<1>UW        0x76543210V                     { align1 WE_all 1Q $8.src };
add(8)          g47.8<1>UW      g47<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g52.8<1>UW      g52<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g57.8<1>UW      g57<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g62.8<1>UW      g62<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g48<1>UD        g47<8,8,1>UW    0x00000002UD    { align1 1H $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g53<1>UD        g52<8,8,1>UW    0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g58<1>UD        g57<8,8,1>UW    0x00000002UD    { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
shl(16)         g63<1>UD        g62<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g49<1>UD        g48<8,8,1>UD    0x00000200UD    { align1 1H I@4 };
or(16)          g54<1>UD        g53<8,8,1>UD    0x00000240UD    { align1 1H I@4 };
or(16)          g59<1>UD        g58<8,8,1>UD    0x00000280UD    { align1 1H I@4 };
or(16)          g64<1>UD        g63<8,8,1>UD    0x00000200UD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g46<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g45UD           g49UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g51<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g46UD           g54UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g56<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g47UD           g59UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g61<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g64UD           g45UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
and(1)          g65<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g66<1>UD        g65<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g67<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g67.8<1>UW      g67<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g68<1>UD        g67<8,8,1>UW    0x00000002UD    { align1 1H $9.src };
or(16)          g69<1>UD        g68<8,8,1>UD    0x00000240UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g66<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g69UD           g46UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
and(1)          g70<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g71<1>UD        g70<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g72<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g72.8<1>UW      g72<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g73<1>UD        g72<8,8,1>UW    0x00000002UD    { align1 1H $10.src };
or(16)          g74<1>UD        g73<8,8,1>UD    0x00000280UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g71<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g74UD           g47UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
and(1)          g75<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g76<1>UD        g75<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g77<1>UW        0x76543210V                     { align1 WE_all 1Q $11.src };
add(8)          g77.8<1>UW      g77<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
shl(16)         g78<1>UD        g77<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g79<1>UD        g78<8,8,1>UD    0x000002c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g76<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g79UD           g12UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $11 };
or(16)          g51<1>UD        g22<1,1,0>UD    g44<1,1,0>UD    { align1 1H compacted };
and(1)          g80<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
and(1)          g85<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g90<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g95<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(16)         g11<1>UD        g51<1,1,0>UD                    { align1 1H I@5 compacted };
shr(1)          g81<1>UD        g80<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g82<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g86<1>UD        g85<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g87<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g91<1>UD        g90<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g92<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g96<1>UD        g95<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g97<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g82.8<1>UW      g82<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g87.8<1>UW      g87<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g92.8<1>UW      g92<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g97.8<1>UW      g97<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g83<1>UD        g82<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g88<1>UD        g87<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g93<1>UD        g92<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g98<1>UD        g97<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g84<1>UD        g83<8,8,1>UD    0x00000300UD    { align1 1H I@4 };
or(16)          g89<1>UD        g88<8,8,1>UD    0x00000340UD    { align1 1H I@4 };
or(16)          g94<1>UD        g93<8,8,1>UD    0x00000380UD    { align1 1H I@4 };
or(16)          g99<1>UD        g98<8,8,1>UD    0x00000300UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g81<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g48UD           g84UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g86<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g49UD           g89UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g91<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g50UD           g94UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
mov(16)         g8<1>UD         g48<1,1,0>UD                    { align1 1H $12.dst compacted };
mov(16)         g9<1>UD         g49<1,1,0>UD                    { align1 1H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
mov(16)         g10<1>UD        g50<1,1,0>UD                    { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g99UD           g48UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g101<1>UD       g100<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g102<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g102.8<1>UW     g102<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g103<1>UD       g102<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g104<1>UD       g103<8,8,1>UD   0x00000340UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g101<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g104UD          g49UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $15 };
and(1)          g105<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shr(1)          g106<1>UD       g105<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g108<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g108.8<1>UW     g108<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g109<1>UD       g108<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g110<1>UD       g109<8,8,1>UD   0x00000380UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g106<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g110UD          g50UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
and(1)          g111<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shr(1)          g112<1>UD       g111<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g113<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g113.8<1>UW     g113<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g114<1>UD       g113<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g115<1>UD       g114<8,8,1>UD   0x000003c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g112<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g115UD          g51UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
and(1)          g121<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g126<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g15<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g23<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $2.src };
mov(16)         g97<2>UD        g107<1,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
shr(1)          g122<1>UD       g121<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g123<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shr(1)          g127<1>UD       g126<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g12<1>UW        0x76543210V                     { align1 WE_all 1Q $11.src };
shr(1)          g16<1>UD        g15<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g17<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g24<1>UD        g23<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g25<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g116<1>UQ       g97<8,4,2>UD                    { align1 1H I@7 };
add(8)          g123.8<1>UW     g123<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g12.8<1>UW      g12<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g17.8<1>UW      g17<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g25.8<1>UW      g25<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
shl(16)         g118<1>Q        g116<4,4,1>Q    0x00000005UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g124<1>UD       g123<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g13<1>UD        g12<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g19<1>UD        g17<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g26<1>UD        g25<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g120<1>Q        g1.6<0,1,0>Q    g118<1,1,0>Q    { align1 1H I@5 compacted };
or(16)          g125<1>UD       g124<8,8,1>UD   0x00000200UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g14<1>UD        g13<8,8,1>UD    0x00000240UD    { align1 1H I@5 };
or(16)          g22<1>UD        g19<8,8,1>UD    0x00000280UD    { align1 1H I@5 };
or(16)          g27<1>UD        g26<8,8,1>UD    0x000002c0UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g122<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g52UD           g125UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g127<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g53UD           g14UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g16<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g54UD           g22UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g24<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g55UD           g27UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        nullUD          g120UD          g52UD           0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $6 };
mov(16)         g28<1>Q         0x0000000000000010Q             { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g30<1>Q         g120<1,1,0>Q    g28<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g30UD           g8UD            0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $12 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g31<1>F         g2<1,1,0>F      g5<1,1,0>F      { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g32<1>F         g3<1,1,0>F      g6<1,1,0>F      { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g33<1>F         g4<1,1,0>F      g7<1,1,0>F      { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.ge.f0.0(16) g34<1>F         g5<1,1,0>F      g2<1,1,0>F      { align1 1H compacted };
mov(16)         g19<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@5 compacted };
mov(16)         g19<1>F         g2<1,1,0>F                      { align1 1H compacted };
and(1)          g43<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
(+f0.0) sel(16) g35<1>UD        g31<8,8,1>UD    0x7f800000UD    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g99<2>UD        g19.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g44<1>UD        g43<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g45<1>UW        0x76543210V                     { align1 WE_all 1Q $8.src };
cmp.ge.f0.0(16) g36<1>F         g6<1,1,0>F      g3<1,1,0>F      { align1 1H $12.src compacted };
sel.l(8)        g98<2>F         g19<8,4,2>F     g99<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g45.8<1>UW      g45<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
(+f0.0) sel(16) g37<1>UD        g32<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
mov(8)          g19.1<2>UD      g98<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g46<1>UD        g45<8,8,1>UW    0x00000002UD    { align1 1H $9.src };
cmp.ge.f0.0(16) g38<1>F         g7<1,1,0>F      g4<1,1,0>F      { align1 1H $4.src compacted };
mov(4)          g101<4>UD       g19.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g102<4>UD       g19.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
or(16)          g47<1>UD        g46<8,8,1>UD    0x00000580UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g39<1>UD        g33<8,8,1>UD    0x7f800000UD    { align1 1H };
sel.l(4)        g100<4>F        g101<8,2,4>F    g102<8,2,4>F    { align1 WE_all 1N I@3 };
cmp.nz.f0.0(16) null<1>D        g34<8,8,1>D     0D              { align1 1H F@6 };
mov(4)          g19.2<4>UD      g100<8,2,4>UD                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g40<1>UD        g31<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g104<4>UD       g19.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g105<4>UD       g19.3<8,2,4>UD                  { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>D        g36<8,8,1>D     0D              { align1 1H F@4 };
sel.l(4)        g103<4>F        g104<8,2,4>F    g105<8,2,4>F    { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g41<1>UD        g32<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g19.3<4>UD      g103<8,2,4>UD                   { align1 WE_all 1N F@1 };
cmp.nz.f0.0(16) null<1>D        g38<8,8,1>D     0D              { align1 1H F@3 };
sel.l(4)        g19.4<1>F       g19.3<0,1,0>F   g19.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g19.12<1>F      g19.11<0,1,0>F  g19.12<4,4,1>F  { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g42<1>UD        g33<8,8,1>UD    0xff800000UD    { align1 1H };
sel.l(8)        g19.8<1>F       g19.7<0,1,0>F   g19.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g53<1>UD        g19.15<0,1,0>UD                 { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g44<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g47UD           g53UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
mov(16)         g22<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $4.src compacted };
mov(16)         g22<1>F         g3<1,1,0>F                      { align1 1H compacted };
and(1)          g48<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
mov(8)          g107<2>UD       g22.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
shr(1)          g49<1>UD        g48<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g50<1>UW        0x76543210V                     { align1 WE_all 1Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(8)        g106<2>F        g22<8,4,2>F     g107<8,4,2>F    { align1 WE_all 1Q I@3 };
add(8)          g50.8<1>UW      g50<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g22.1<2>UD      g106<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g51<1>UD        g50<8,8,1>UW    0x00000002UD    { align1 1H $1.src };
mov(4)          g109<4>UD       g22.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g110<4>UD       g22.2<8,2,4>UD                  { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g52<1>UD        g51<8,8,1>UD    0x000005c0UD    { align1 1H I@3 };
sel.l(4)        g108<4>F        g109<8,2,4>F    g110<8,2,4>F    { align1 WE_all 1N I@2 };
mov(4)          g22.2<4>UD      g108<8,2,4>UD                   { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g112<4>UD       g22.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g113<4>UD       g22.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g111<4>F        g112<8,2,4>F    g113<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g22.3<4>UD      g111<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g22.4<1>F       g22.3<0,1,0>F   g22.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g22.12<1>F      g22.11<0,1,0>F  g22.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g22.8<1>F       g22.7<0,1,0>F   g22.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g54<1>UD        g22.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g49<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g52UD           g54UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
mov(16)         g23<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $2.src compacted };
mov(16)         g23<1>F         g4<1,1,0>F                      { align1 1H compacted };
and(1)          g53<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g115<2>UD       g23.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shr(1)          g54<1>UD        g53<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g55<1>UW        0x76543210V                     { align1 WE_all 1Q $6.src };
sel.l(8)        g114<2>F        g23<8,4,2>F     g115<8,4,2>F    { align1 WE_all 1Q I@3 };
add(8)          g55.8<1>UW      g55<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g23.1<2>UD      g114<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g56<1>UD        g55<8,8,1>UW    0x00000002UD    { align1 1H };
mov(4)          g117<4>UD       g23.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g118<4>UD       g23.2<8,2,4>UD                  { align1 WE_all 1N };
or(16)          g57<1>UD        g56<8,8,1>UD    0x00000600UD    { align1 1H I@3 };
sel.l(4)        g116<4>F        g117<8,2,4>F    g118<8,2,4>F    { align1 WE_all 1N I@2 };
mov(4)          g23.2<4>UD      g116<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g120<4>UD       g23.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g121<4>UD       g23.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g119<4>F        g120<8,2,4>F    g121<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g23.3<4>UD      g119<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g23.4<1>F       g23.3<0,1,0>F   g23.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g23.12<1>F      g23.11<0,1,0>F  g23.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g23.8<1>F       g23.7<0,1,0>F   g23.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g55<1>UD        g23.15<0,1,0>UD                 { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g54<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g57UD           g55UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
mov(16)         g24<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g24<1>F         g5<1,1,0>F                      { align1 1H compacted };
and(1)          g58<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
mov(8)          g123<2>UD       g24.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shr(1)          g59<1>UD        g58<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g60<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(8)       g122<2>F        g24<8,4,2>F     g123<8,4,2>F    { align1 WE_all 1Q I@3 };
add(8)          g60.8<1>UW      g60<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g24.1<2>UD      g122<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g61<1>UD        g60<8,8,1>UW    0x00000002UD    { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g125<4>UD       g24.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g126<4>UD       g24.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(16)          g62<1>UD        g61<8,8,1>UD    0x00000640UD    { align1 1H I@3 };
sel.ge(4)       g124<4>F        g125<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N I@2 };
mov(4)          g24.2<4>UD      g124<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g2<4>UD         g24.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g3<4>UD         g24.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.ge(4)       g127<4>F        g2<8,2,4>F      g3<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g24.3<4>UD      g127<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g24.4<1>F       g24.3<0,1,0>F   g24.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g24.12<1>F      g24.11<0,1,0>F  g24.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g24.8<1>F       g24.7<0,1,0>F   g24.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g56<1>UD        g24.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g59<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g62UD           g56UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
mov(16)         g25<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g25<1>F         g6<1,1,0>F                      { align1 1H compacted };
and(1)          g63<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(8)          g5<2>UD         g25.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shr(1)          g64<1>UD        g63<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g65<1>UW        0x76543210V                     { align1 WE_all 1Q };
sel.ge(8)       g4<2>F          g25<8,4,2>F     g5<8,4,2>F      { align1 WE_all 1Q I@3 };
add(8)          g65.8<1>UW      g65<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g25.1<2>UD      g4<8,4,2>UD                     { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g66<1>UD        g65<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g8<4>UD         g25.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g9<4>UD         g25.2<8,2,4>UD                  { align1 WE_all 1N $12.src };
or(16)          g67<1>UD        g66<8,8,1>UD    0x00000680UD    { align1 1H I@3 };
sel.ge(4)       g6<4>F          g8<8,2,4>F      g9<8,2,4>F      { align1 WE_all 1N I@2 };
mov(4)          g25.2<4>UD      g6<8,2,4>UD                     { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g11<4>UD        g25.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g12<4>UD        g25.3<8,2,4>UD                  { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sel.ge(4)       g10<4>F         g11<8,2,4>F     g12<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g25.3<4>UD      g10<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g25.4<1>F       g25.3<0,1,0>F   g25.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g25.12<1>F      g25.11<0,1,0>F  g25.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g25.8<1>F       g25.7<0,1,0>F   g25.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g57<1>UD        g25.15<0,1,0>UD                 { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g64<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g67UD           g57UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
mov(16)         g26<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g26<1>F         g7<1,1,0>F                      { align1 1H compacted };
and(1)          g68<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g14<2>UD        g26.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shr(1)          g69<1>UD        g68<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g70<1>UW        0x76543210V                     { align1 WE_all 1Q };
sel.ge(8)       g13<2>F         g26<8,4,2>F     g14<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g70.8<1>UW      g70<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g26.1<2>UD      g13<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g71<1>UD        g70<8,8,1>UW    0x00000002UD    { align1 1H };
mov(4)          g16<4>UD        g26.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g17<4>UD        g26.2<8,2,4>UD                  { align1 WE_all 1N };
or(16)          g72<1>UD        g71<8,8,1>UD    0x000006c0UD    { align1 1H I@3 };
sel.ge(4)       g15<4>F         g16<8,2,4>F     g17<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g26.2<4>UD      g15<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g24<4>UD        g26.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g27<4>UD        g26.3<8,2,4>UD                  { align1 WE_all 1N $5.src };
sel.ge(4)       g19<4>F         g24<8,2,4>F     g27<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g26.3<4>UD      g19<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g26.4<1>F       g26.3<0,1,0>F   g26.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g26.12<1>F      g26.11<0,1,0>F  g26.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g26.8<1>F       g26.7<0,1,0>F   g26.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g58<1>UD        g26.15<0,1,0>UD                 { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g69<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g72UD           g58UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $11 };
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g73<1>Q         0x0000000000000080Q             { align1 1H };
shl(16)         g77<1>Q         g20<4,4,1>Q     0x00000002UD    { align1 1H $11.src };
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g75<1>Q         g1.5<0,1,0>Q    g73<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g79<1>Q         g75<1,1,0>Q     g77<1,1,0>Q     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
and(1)          g81<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g82<1>UD        g81<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g83<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g83.8<1>UW      g83<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g84<1>UD        g83<8,8,1>UW    0x00000002UD    { align1 1H $12.src };
or(16)          g85<1>UD        g84<8,8,1>UD    0x00000580UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g82<0,1,0>UD    0x00000000UD    { align1 WE_all 1N $7.src };
send(16)        g59UD           g85UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g59<1>UD        g22.15<0,1,0>UD g23.15<0,1,0>UD { align1 1H $7.dst };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g79UD           g59UD           0x04040595                0x00000040
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $7 };
mov(16)         g86<1>Q         0x000000000000000cQ             { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g88<1>Q         g79<1,1,0>Q     g86<1,1,0>Q     { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL11         UIP:  LABEL10             { align1 1H };
and(1)          g90<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g91<1>UD        g90<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g92<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g92.8<1>UW      g92<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g93<1>UD        g92<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
or(16)          g94<1>UD        g93<8,8,1>UD    0x00000640UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g91<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g60UD           g94UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
else(16)        JIP:  LABEL10         UIP:  LABEL10             { align1 1H };

LABEL11:
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g60<1>UD        g25.15<0,1,0>UD g26.15<0,1,0>UD { align1 1H $14.dst };

LABEL10:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g88UD           g60UD           0x04040596                0x00000040
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $13 };

LABEL7:
endif(16)       JIP:  LABEL12                                   { align1 1H };

LABEL12:
mov(16)         g27<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@4 compacted };
mov(16)         g27<1>F         g35<1,1,0>F                     { align1 1H compacted };
and(1)          g95<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(8)          g29<2>UD        g27.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g96<1>UD        g95<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g97<1>UW        0x76543210V                     { align1 WE_all 1Q };
sel.l(8)        g28<2>F         g27<8,4,2>F     g29<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g97.8<1>UW      g97<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g27.1<2>UD      g28<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g98<1>UD        g97<8,8,1>UW    0x00000002UD    { align1 1H };
mov(4)          g31<4>UD        g27.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g32<4>UD        g27.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(16)          g99<1>UD        g98<8,8,1>UD    0x00000400UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g30<4>F         g31<8,2,4>F     g32<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g27.2<4>UD      g30<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g34<4>UD        g27.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g35<4>UD        g27.3<8,2,4>UD                  { align1 WE_all 1N F@3 };
sel.l(4)        g33<4>F         g34<8,2,4>F     g35<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g27.3<4>UD      g33<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g27.4<1>F       g27.3<0,1,0>F   g27.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g27.12<1>F      g27.11<0,1,0>F  g27.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g27.8<1>F       g27.7<0,1,0>F   g27.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g61<1>UD        g27.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g99UD           g61UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
mov(16)         g28<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g28<1>F         g37<1,1,0>F                     { align1 1H compacted };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g101<1>UD       g100<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g102<1>UW       0x76543210V                     { align1 WE_all 1Q };
mov(8)          g37<2>UD        g28.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
add(8)          g102.8<1>UW     g102<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@2 };
sel.l(8)        g36<2>F         g28<8,4,2>F     g37<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g103<1>UD       g102<8,8,1>UW   0x00000002UD    { align1 1H };
mov(8)          g28.1<2>UD      g36<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(16)          g104<1>UD       g103<8,8,1>UD   0x00000440UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g43<4>UD        g28.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g44<4>UD        g28.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g38<4>F         g43<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g28.2<4>UD      g38<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g46<4>UD        g28.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g47<4>UD        g28.3<8,2,4>UD                  { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g45<4>F         g46<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g28.3<4>UD      g45<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g28.4<1>F       g28.3<0,1,0>F   g28.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g28.12<1>F      g28.11<0,1,0>F  g28.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g28.8<1>F       g28.7<0,1,0>F   g28.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g62<1>UD        g28.15<0,1,0>UD                 { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g101<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g104UD          g62UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
mov(16)         g29<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g29<1>F         g39<1,1,0>F                     { align1 1H compacted };
and(1)          g105<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g49<2>UD        g29.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g106<1>UD       g105<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g107<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(8)        g48<2>F         g29<8,4,2>F     g49<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g107.8<1>UW     g107<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g29.1<2>UD      g48<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g108<1>UD       g107<8,8,1>UW   0x00000002UD    { align1 1H };
mov(4)          g51<4>UD        g29.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g52<4>UD        g29.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(16)          g109<1>UD       g108<8,8,1>UD   0x00000480UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(4)        g50<4>F         g51<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g29.2<4>UD      g50<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g54<4>UD        g29.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g55<4>UD        g29.3<8,2,4>UD                  { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(4)        g53<4>F         g54<8,2,4>F     g55<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g29.3<4>UD      g53<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g29.4<1>F       g29.3<0,1,0>F   g29.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g29.12<1>F      g29.11<0,1,0>F  g29.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g29.8<1>F       g29.7<0,1,0>F   g29.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g63<1>UD        g29.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g106<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g109UD          g63UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
mov(16)         g30<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g30<1>F         g40<1,1,0>F                     { align1 1H compacted };
and(1)          g110<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g57<2>UD        g30.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g111<1>UD       g110<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g112<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(8)       g56<2>F         g30<8,4,2>F     g57<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g112.8<1>UW     g112<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g30.1<2>UD      g56<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g113<1>UD       g112<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g59<4>UD        g30.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g60<4>UD        g30.2<8,2,4>UD                  { align1 WE_all 1N $13.src };
or(16)          g114<1>UD       g113<8,8,1>UD   0x000004c0UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(4)       g58<4>F         g59<8,2,4>F     g60<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g30.2<4>UD      g58<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g62<4>UD        g30.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g63<4>UD        g30.3<8,2,4>UD                  { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.ge(4)       g61<4>F         g62<8,2,4>F     g63<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g30.3<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g30.4<1>F       g30.3<0,1,0>F   g30.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g30.12<1>F      g30.11<0,1,0>F  g30.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g30.8<1>F       g30.7<0,1,0>F   g30.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g64<1>UD        g30.15<0,1,0>UD                 { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g111<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g114UD          g64UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $15 };
mov(16)         g31<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g31<1>F         g41<1,1,0>F                     { align1 1H compacted };
and(1)          g115<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(8)          g65<2>UD        g31.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g116<1>UD       g115<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g117<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(8)       g64<2>F         g31<8,4,2>F     g65<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g117.8<1>UW     g117<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g31.1<2>UD      g64<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g118<1>UD       g117<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(4)          g67<4>UD        g31.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g68<4>UD        g31.2<8,2,4>UD                  { align1 WE_all 1N $9.src };
or(16)          g119<1>UD       g118<8,8,1>UD   0x00000500UD    { align1 1H I@3 };
sel.ge(4)       g66<4>F         g67<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g31.2<4>UD      g66<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g70<4>UD        g31.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g71<4>UD        g31.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(4)       g69<4>F         g70<8,2,4>F     g71<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g31.3<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g31.4<1>F       g31.3<0,1,0>F   g31.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g31.12<1>F      g31.11<0,1,0>F  g31.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g31.8<1>F       g31.7<0,1,0>F   g31.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g65<1>UD        g31.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g116<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g119UD          g65UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
mov(16)         g32<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g32<1>F         g42<1,1,0>F                     { align1 1H compacted };
and(1)          g120<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g73<2>UD        g32.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g121<1>UD       g120<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g122<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(8)       g72<2>F         g32<8,4,2>F     g73<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g122.8<1>UW     g122<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g32.1<2>UD      g72<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g123<1>UD       g122<8,8,1>UW   0x00000002UD    { align1 1H };
mov(4)          g75<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g76<4>UD        g32.2<8,2,4>UD                  { align1 WE_all 1N };
or(16)          g124<1>UD       g123<8,8,1>UD   0x00000540UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.ge(4)       g74<4>F         g75<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g32.2<4>UD      g74<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g78<4>UD        g32.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g79<4>UD        g32.3<8,2,4>UD                  { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(4)       g77<4>F         g78<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g32.3<4>UD      g77<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g32.4<1>F       g32.3<0,1,0>F   g32.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g32.12<1>F      g32.11<0,1,0>F  g32.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g32.8<1>F       g32.7<0,1,0>F   g32.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g66<1>UD        g32.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g121<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g124UD          g66UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
shl(16)         g125<1>Q        g20<4,4,1>Q     0x00000002UD    { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g2<1>Q          g1.4<0,1,0>Q    g125<1,1,0>Q    { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
and(1)          g4<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g5<1>UD         g4<0,1,0>UD     0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g6<1>UW         0x76543210V                     { align1 WE_all 1Q };
add(8)          g6.8<1>UW       g6<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g7<1>UD         g6<8,8,1>UW     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(16)          g8<1>UD         g7<8,8,1>UD     0x00000400UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g5<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        g67UD           g8UD            nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
(+f0.0) sel(16) g67<1>UD        g28.15<0,1,0>UD g29.15<0,1,0>UD { align1 1H };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g2UD            g67UD           0x04040595                0x00000040
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g9<1>Q          0x0000000000000010Q             { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g11<1>Q         g2<1,1,0>Q      g9<1,1,0>Q      { align1 1H $3.src compacted };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
and(1)          g13<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g14<1>UD        g13<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g15<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g15.8<1>UW      g15<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g16<1>UD        g15<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(16)          g17<1>UD        g16<8,8,1>UD    0x000004c0UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g14<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g68UD           g17UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
(+f0.0) sel(16) g68<1>UD        g31.15<0,1,0>UD g32.15<0,1,0>UD { align1 1H };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g11UD           g68UD           0x04040596                0x00000040
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $5 };

LABEL13:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_primref_procedurals_to_primrefs_indirect_code[] = {
    0x80000065, 0x50058220, 0x02000004, 0xffffffc0,
    0x2c800061, 0x00110012, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x01140000,
    0xfa00500c, 0x00380000, 0x800c0061, 0x13054410,
    0x00000000, 0x76543210, 0xb4001a61, 0x00101247,
    0x800c1a40, 0x13458110, 0x01461305, 0x00080008,
    0x00101a61, 0x0e050230, 0x00444706, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x12050120, 0x00461305, 0x00000000,
    0x00101a69, 0x10058770, 0x02340e05, 0x00000004,
    0xb4001a61, 0x00101249, 0x00101a61, 0x4b060320,
    0x00341005, 0x00000000, 0x00101a61, 0x14050230,
    0x00444906, 0x00000000, 0x00101a40, 0x16050660,
    0x06444b06, 0x00461205, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x21050770,
    0x00000204, 0x00000000, 0x00100065, 0x0c058220,
    0x02000224, 0x00ffffff, 0x00100061, 0x0d050020,
    0x0080022c, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x0b0c0000,
    0xfb002114, 0x00000000, 0x00118170, 0x00010220,
    0x52461605, 0x00460b05, 0x04100022, 0x0001c060,
    0x000007e8, 0x00000758, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x23050770,
    0x000001e4, 0x00000000, 0x80000065, 0x26058220,
    0x02000054, 0xfffffc00, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x17240000,
    0xfb002314, 0x000c0000, 0x80001968, 0x29058220,
    0x02002604, 0x00000004, 0x800c0061, 0x2a054410,
    0x00000000, 0x76543210, 0x800c1940, 0x2a458110,
    0x01462a05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x2b058120,
    0x02462a05, 0x00000002, 0xb4008261, 0x0010171b,
    0x00108241, 0x20010220, 0x01461605, 0x00561906,
    0x00100041, 0x1e050660, 0x01461605, 0x00561906,
    0x00100041, 0x45050660, 0x01461605, 0x0056190e,
    0x00108241, 0x1f050660, 0x01461605, 0x00561a06,
    0x00100041, 0x46050660, 0x01461605, 0x00561a0e,
    0xb401c261, 0x0012181b, 0xe8000049, 0x1900161d,
    0x00101d40, 0x1e0e0110, 0x01561e0e, 0x00564506,
    0x00101c40, 0x1f0e0110, 0x01561f0e, 0x00564606,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0xb4001a61, 0x00101e21, 0xac001a40, 0x1f001d20,
    0xb4001961, 0x00122021, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x38001940, 0x21001b23,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x25240000, 0xfb002314, 0x000c0000,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002904, 0x00000000,
    0x00112431, 0x00020100, 0xfa082b0c, 0x0400250c,
    0x80000065, 0x2c058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x2d058220, 0x02002c04, 0x00000004,
    0x800c0061, 0x2e054410, 0x00000000, 0x76543210,
    0x800c1940, 0x2e458110, 0x01462e05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x2f058120, 0x02462e05, 0x00000002,
    0x00101966, 0x30058220, 0x02462f05, 0x00000040,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002d04, 0x00000000,
    0x00112531, 0x00020100, 0xfa08300c, 0x0400260c,
    0x80000065, 0x31058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x32058220, 0x02003104, 0x00000004,
    0x800c0061, 0x33054410, 0x00000000, 0x76543210,
    0x800c1940, 0x33458110, 0x01463305, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x34058120, 0x02463305, 0x00000002,
    0x00101966, 0x35058220, 0x02463405, 0x00000080,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003204, 0x00000000,
    0x00112631, 0x00020100, 0xfa08350c, 0x0400270c,
    0x80000065, 0x36058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x37058220, 0x02003604, 0x00000004,
    0x800c0061, 0x38054410, 0x00000000, 0x76543210,
    0x800c1940, 0x38458110, 0x01463805, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x39058120, 0x02463805, 0x00000002,
    0x00101966, 0x3a058220, 0x02463905, 0x000000c0,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003704, 0x00000000,
    0x00112731, 0x00020100, 0xfa083a0c, 0x0400280c,
    0x00100061, 0x3b054770, 0x00000000, 0x00000010,
    0x80000065, 0x40058220, 0x02000054, 0xfffffc00,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x3b00233d, 0x80001a68, 0x41058220,
    0x02004004, 0x00000004, 0x800c0061, 0x42054410,
    0x00000000, 0x76543210, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x3f140000,
    0xfb003d14, 0x00040000, 0x800c1940, 0x42458110,
    0x01464205, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x43058120,
    0x02464205, 0x00000002, 0x00101966, 0x44058220,
    0x02464305, 0x00000100, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004104, 0x00000000, 0x00112931, 0x00020100,
    0xfa08440c, 0x04003f0c, 0x80000065, 0x45058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x46058220,
    0x02004504, 0x00000004, 0x800c0061, 0x47054410,
    0x00000000, 0x76543210, 0x800c1940, 0x47458110,
    0x01464705, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x48058120,
    0x02464705, 0x00000002, 0x00101966, 0x49058220,
    0x02464805, 0x00000140, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004604, 0x00000000, 0x00112a31, 0x00020100,
    0xfa08490c, 0x0400400c, 0x80000065, 0x4a058220,
    0x02000054, 0xfffffc00, 0x3298a570, 0x7f80264f,
    0x2018a962, 0x3f00265b, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x2018a662, 0x4000275c,
    0x20140062, 0x3f00265e, 0x20140062, 0x4000275f,
    0x80001968, 0x4b058220, 0x02004a04, 0x00000004,
    0x800c0061, 0x4c054410, 0x00000000, 0x76543210,
    0x800c1940, 0x4c458110, 0x01464c05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x4d058120, 0x02464c05, 0x00000002,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02004b04, 0x00000000,
    0x00112b31, 0x4e0e0100, 0xfa004d0c, 0x04000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x32988b70, 0x7f804e50, 0x2018a762, 0x28004e5a,
    0x20140062, 0x28004e5d, 0x32980070, 0x7f802752,
    0x32980070, 0x7f803f54, 0xe8001565, 0x50004f51,
    0x32980070, 0x7f802855, 0x32980070, 0x7f804057,
    0xe8000965, 0x52005153, 0xe8001265, 0x55005456,
    0xe8000965, 0x57005658, 0xe8501965, 0x58005359,
    0x04101562, 0x05058220, 0x02465d05, 0xff800000,
    0x04101762, 0x06058220, 0x02465e05, 0xff800000,
    0x04101762, 0x07058220, 0x02465f05, 0xff800000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x04101662, 0x02058220, 0x02465a05, 0x7f800000,
    0x04100062, 0x03058220, 0x02465b05, 0x7f800000,
    0x04101762, 0x04058220, 0x02465c05, 0x7f800000,
    0x00101f61, 0x60062650, 0x00465905, 0x00000000,
    0x00101961, 0x09050110, 0x00566006, 0x00000000,
    0x00100024, 0x0001c060, 0x000000a0, 0x000000a0,
    0x00101a61, 0x09054110, 0x00000000, 0x00000000,
    0x00101d61, 0x04054220, 0x00000000, 0x7f800000,
    0x00101f61, 0x03054220, 0x00000000, 0x7f800000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x02054220, 0x00000000, 0x7f800000,
    0x00100061, 0x07054220, 0x00000000, 0xff800000,
    0x00100061, 0x06054220, 0x00000000, 0xff800000,
    0x00100061, 0x05054220, 0x00000000, 0xff800000,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x00101b65, 0x60058110, 0x01580905, 0x00010001,
    0x00101961, 0x61050450, 0x00686006, 0x00000000,
    0x00101970, 0x63058550, 0x25586105, 0x00000000,
    0x00101961, 0x62050560, 0x00466305, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22466205, 0x00000000,
    0x00100061, 0x64050120, 0x00003000, 0x00000000,
    0x00100079, 0x65058620, 0x06461205, 0x00000000,
    0x2c001a4d, 0x00106424, 0x00100070, 0x00018660,
    0x16461205, 0x00000000, 0xe8001b65, 0x65006466,
    0x2c00194d, 0x00106667, 0x04100022, 0x0001c060,
    0x00000058, 0x00000058, 0x00100061, 0x68054770,
    0x00000000, 0x00000024, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x6803016a,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cc31, 0x0a0c0000, 0xfb186a14, 0x0100240c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xac008c40, 0x0a10676b, 0x00100061, 0x00010660,
    0x20466205, 0x00000000, 0x04100022, 0x0001c060,
    0x000013d0, 0x000013d0, 0x80000065, 0x6c058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x71058220,
    0x02000054, 0xfffffc00, 0x80001a68, 0x6d058220,
    0x02006c04, 0x00000004, 0x800c0061, 0x6e054410,
    0x00000000, 0x76543210, 0x80001b68, 0x72058220,
    0x02007104, 0x00000004, 0x800c0061, 0x73054410,
    0x00000000, 0x76543210, 0x800c1b40, 0x6e458110,
    0x01466e05, 0x00080008, 0x800c1a40, 0x73458110,
    0x01467305, 0x00080008, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x6f058120,
    0x02466e05, 0x00000002, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x74058120,
    0x02467305, 0x00000002, 0x00101a66, 0x70058220,
    0x02466f05, 0x000002c0, 0x00101a66, 0x75058220,
    0x02467405, 0x00000200, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02006d04, 0x00000000, 0x00112d31, 0x250e0100,
    0xfa00700c, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007204, 0x00000000, 0x00112e31, 0x00020100,
    0xfa08750c, 0x0400020c, 0x80000065, 0x76058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x77058220,
    0x02007604, 0x00000004, 0x800c0061, 0x78054410,
    0x00000000, 0x76543210, 0x800c1940, 0x78458110,
    0x01467805, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x79058120,
    0x02467805, 0x00000002, 0x00101966, 0x7a058220,
    0x02467905, 0x00000240, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007704, 0x00000000, 0x00112f31, 0x00020100,
    0xfa087a0c, 0x0400030c, 0x80000065, 0x7b058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x7c058220,
    0x02007b04, 0x00000004, 0x800c0061, 0x7d054410,
    0x00000000, 0x76543210, 0x800c1940, 0x7d458110,
    0x01467d05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x7e058120,
    0x02467d05, 0x00000002, 0x00101966, 0x7f058220,
    0x02467e05, 0x00000280, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007c04, 0x00000000, 0x00112031, 0x00020100,
    0xfa087f0c, 0x0400040c, 0x80000065, 0x08058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x09058220,
    0x02000804, 0x00000004, 0x800c0061, 0x0a054410,
    0x00000000, 0x76543210, 0x800c1940, 0x0a458110,
    0x01460a05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x0b058120,
    0x02460a05, 0x00000002, 0x00101966, 0x0e058220,
    0x02460b05, 0x000002c0, 0x80008d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000904, 0x00000000, 0x00112131, 0x00020100,
    0xfa080e0c, 0x0400250c, 0x80000065, 0x0f058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x18058220,
    0x02000054, 0xfffffc00, 0x80001a68, 0x10058220,
    0x02000f04, 0x00000004, 0x800c0061, 0x11054410,
    0x00000000, 0x76543210, 0x80001b68, 0x19058220,
    0x02001804, 0x00000004, 0x800c0061, 0x1a054410,
    0x00000000, 0x76543210, 0x800c1b40, 0x11458110,
    0x01461105, 0x00080008, 0x800c1a40, 0x1a458110,
    0x01461a05, 0x00080008, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x13058120,
    0x02461105, 0x00000002, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x1b058120,
    0x02461a05, 0x00000002, 0x00101a66, 0x17058220,
    0x02461305, 0x000003c0, 0x00101a66, 0x1c058220,
    0x02461b05, 0x00000300, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001004, 0x00000000, 0x00112231, 0x2c0e0100,
    0xfa00170c, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001904, 0x00000000, 0x00112331, 0x00020100,
    0xfa081c0c, 0x0400050c, 0x80000065, 0x1d058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x1e058220,
    0x02001d04, 0x00000004, 0x800c0061, 0x1f054410,
    0x00000000, 0x76543210, 0x800c1940, 0x1f458110,
    0x01461f05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x20058120,
    0x02461f05, 0x00000002, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x00101966, 0x21058220,
    0x02462005, 0x00000340, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001e04, 0x00000000, 0x00112131, 0x00020100,
    0xfa08210c, 0x0400060c, 0x8000a165, 0x22058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x23058220,
    0x02002204, 0x00000004, 0x800cac61, 0x24054410,
    0x00000000, 0x76543210, 0x800c1940, 0x24458110,
    0x01462405, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010a169, 0x25058120,
    0x02462405, 0x00000002, 0x00100966, 0x26058220,
    0x02462505, 0x00000380, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002304, 0x00000000, 0x00112431, 0x00020100,
    0xfa08260c, 0x0400070c, 0x80001465, 0x27058220,
    0x02000054, 0xfffffc00, 0x80000968, 0x28058220,
    0x02002704, 0x00000004, 0x800c0061, 0x29054410,
    0x00000000, 0x76543210, 0x800c1940, 0x29458110,
    0x01462905, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x2a058120,
    0x02462905, 0x00000002, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x00101966, 0x2b058220,
    0x02462a05, 0x000003c0, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002804, 0x00000000, 0x00112431, 0x00020100,
    0xfa082b0c, 0x04002c0c, 0x0010a469, 0x2c058660,
    0x02460d05, 0x0000001d, 0x80000065, 0x2d058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x32058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x37058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x3c058220,
    0x02000054, 0xfffffc00, 0x80001c68, 0x2e058220,
    0x02002d04, 0x00000004, 0x800c0061, 0x2f054410,
    0x00000000, 0x76543210, 0x80001d68, 0x33058220,
    0x02003204, 0x00000004, 0x800c0061, 0x34054410,
    0x00000000, 0x76543210, 0x80001e68, 0x38058220,
    0x02003704, 0x00000004, 0x800c0061, 0x39054410,
    0x00000000, 0x76543210, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80001f68, 0x3d058220,
    0x02003c04, 0x00000004, 0x800ca861, 0x3e054410,
    0x00000000, 0x76543210, 0x800c1f40, 0x2f458110,
    0x01462f05, 0x00080008, 0x800c1e40, 0x34458110,
    0x01463405, 0x00080008, 0x800c1d40, 0x39458110,
    0x01463905, 0x00080008, 0x800c1c40, 0x3e458110,
    0x01463e05, 0x00080008, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a569, 0x30058120,
    0x02462f05, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a669, 0x35058120,
    0x02463405, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a769, 0x3a058120,
    0x02463905, 0x00000002, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x3f058120,
    0x02463e05, 0x00000002, 0x00101c66, 0x31058220,
    0x02463005, 0x00000200, 0x00101c66, 0x36058220,
    0x02463505, 0x00000240, 0x00101c66, 0x3b058220,
    0x02463a05, 0x00000280, 0x00100966, 0x40058220,
    0x02463f05, 0x00000200, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002e04, 0x00000000, 0x00112531, 0x2d0e0100,
    0xfa00310c, 0x04000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003304, 0x00000000, 0x00112631, 0x2e0e0100,
    0xfa00360c, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003804, 0x00000000, 0x00112731, 0x2f0e0100,
    0xfa003b0c, 0x04000000, 0x80008501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003d04, 0x00000000, 0x00112831, 0x00020100,
    0xfa08400c, 0x04002d0c, 0x80000065, 0x41058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x42058220,
    0x02004104, 0x00000004, 0x800c0061, 0x43054410,
    0x00000000, 0x76543210, 0x800c1940, 0x43458110,
    0x01464305, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010a969, 0x44058120,
    0x02464305, 0x00000002, 0x00101966, 0x45058220,
    0x02464405, 0x00000240, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004204, 0x00000000, 0x00112931, 0x00020100,
    0xfa08450c, 0x04002e0c, 0x80000065, 0x46058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x47058220,
    0x02004604, 0x00000004, 0x800c0061, 0x48054410,
    0x00000000, 0x76543210, 0x800c1940, 0x48458110,
    0x01464805, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010aa69, 0x49058120,
    0x02464805, 0x00000002, 0x00101966, 0x4a058220,
    0x02464905, 0x00000280, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004704, 0x00000000, 0x00112a31, 0x00020100,
    0xfa084a0c, 0x04002f0c, 0x80000065, 0x4b058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x4c058220,
    0x02004b04, 0x00000004, 0x800cab61, 0x4d054410,
    0x00000000, 0x76543210, 0x800c1940, 0x4d458110,
    0x01464d05, 0x00080008, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x4e058120,
    0x02464d05, 0x00000002, 0x00101966, 0x4f058220,
    0x02464e05, 0x000002c0, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004c04, 0x00000000, 0x00112b31, 0x00020100,
    0xfa084f0c, 0x04000c0c, 0xe8000066, 0x2c001633,
    0x8000a065, 0x50058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x55058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x5a058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x5f058220, 0x02000054, 0xfffffc00,
    0x2c001d61, 0x0010330b, 0x80001d68, 0x51058220,
    0x02005004, 0x00000004, 0x800c0061, 0x52054410,
    0x00000000, 0x76543210, 0x80001e68, 0x56058220,
    0x02005504, 0x00000004, 0x800c0061, 0x57054410,
    0x00000000, 0x76543210, 0x80001f68, 0x5b058220,
    0x02005a04, 0x00000004, 0x800c0061, 0x5c054410,
    0x00000000, 0x76543210, 0x80001f68, 0x60058220,
    0x02005f04, 0x00000004, 0x800c0061, 0x61054410,
    0x00000000, 0x76543210, 0x800c1f40, 0x52458110,
    0x01465205, 0x00080008, 0x800c1e40, 0x57458110,
    0x01465705, 0x00080008, 0x800c1d40, 0x5c458110,
    0x01465c05, 0x00080008, 0x800c1c40, 0x61458110,
    0x01466105, 0x00080008, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x53058120,
    0x02465205, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x58058120,
    0x02465705, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x5d058120,
    0x02465c05, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x62058120,
    0x02466105, 0x00000002, 0x00101c66, 0x54058220,
    0x02465305, 0x00000300, 0x00101c66, 0x59058220,
    0x02465805, 0x00000340, 0x00101c66, 0x5e058220,
    0x02465d05, 0x00000380, 0x00101c66, 0x63058220,
    0x02466205, 0x00000300, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005104, 0x00000000, 0x00112c31, 0x300e0100,
    0xfa00540c, 0x04000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005604, 0x00000000, 0x00112d31, 0x310e0100,
    0xfa00590c, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005b04, 0x00000000, 0x00112e31, 0x320e0100,
    0xfa005e0c, 0x04000000, 0x2c008c61, 0x00103008,
    0x2c008d61, 0x00103109, 0x80008c01, 0x00000000,
    0x00000000, 0x00000000, 0x2c008e61, 0x0010320a,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006004, 0x00000000,
    0x00112531, 0x00020100, 0xfa08630c, 0x0400300c,
    0x80000065, 0x64058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x65058220, 0x02006404, 0x00000004,
    0x800c0061, 0x66054410, 0x00000000, 0x76543210,
    0x800c1940, 0x66458110, 0x01466605, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x67058120, 0x02466605, 0x00000002,
    0x00101966, 0x68058220, 0x02466705, 0x00000340,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006504, 0x00000000,
    0x00112f31, 0x00020100, 0xfa08680c, 0x0400310c,
    0x80000065, 0x69058220, 0x02000054, 0xfffffc00,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80001968, 0x6a058220, 0x02006904, 0x00000004,
    0x800c0061, 0x6c054410, 0x00000000, 0x76543210,
    0x800c1940, 0x6c458110, 0x01466c05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x6d058120, 0x02466c05, 0x00000002,
    0x00101966, 0x6e058220, 0x02466d05, 0x00000380,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006a04, 0x00000000,
    0x00112031, 0x00020100, 0xfa086e0c, 0x0400320c,
    0x80000065, 0x6f058220, 0x02000054, 0xfffffc00,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80001968, 0x70058220, 0x02006f04, 0x00000004,
    0x800c0061, 0x71054410, 0x00000000, 0x76543210,
    0x800c1940, 0x71458110, 0x01467105, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x72058120, 0x02467105, 0x00000002,
    0x00101966, 0x73058220, 0x02467205, 0x000003c0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007004, 0x00000000,
    0x00112131, 0x00020100, 0xfa08730c, 0x0400330c,
    0x80000065, 0x79058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x7e058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x0f058220, 0x02000054, 0xfffffc00,
    0x8000a265, 0x17058220, 0x02000054, 0xfffffc00,
    0xb4000061, 0x00106b61, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d68, 0x7a058220,
    0x02007904, 0x00000004, 0x800c0061, 0x7b054410,
    0x00000000, 0x76543210, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x80001e68, 0x7f058220,
    0x02007e04, 0x00000004, 0x800cab61, 0x0c054410,
    0x00000000, 0x76543210, 0x80001f68, 0x10058220,
    0x02000f04, 0x00000004, 0x800c0061, 0x11054410,
    0x00000000, 0x76543210, 0x80001f68, 0x18058220,
    0x02001704, 0x00000004, 0x800c0061, 0x19054410,
    0x00000000, 0x76543210, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x00101f61, 0x74050230,
    0x00446106, 0x00000000, 0x800c1f40, 0x7b458110,
    0x01467b05, 0x00080008, 0x800c1f40, 0x0c458110,
    0x01460c05, 0x00080008, 0x800c1e40, 0x11458110,
    0x01461105, 0x00080008, 0x800c1d40, 0x19458110,
    0x01461905, 0x00080008, 0x00101d69, 0x76058770,
    0x02347405, 0x00000005, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x7c058120,
    0x02467b05, 0x00000002, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x0d058120,
    0x02460c05, 0x00000002, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x13058120,
    0x02461105, 0x00000002, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x1a058120,
    0x02461905, 0x00000002, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x38801d40, 0x76080178,
    0x00101d66, 0x7d058220, 0x02467c05, 0x00000200,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x00101d66, 0x0e058220, 0x02460d05, 0x00000240,
    0x00101d66, 0x16058220, 0x02461305, 0x00000280,
    0x00101d66, 0x1b058220, 0x02461a05, 0x000002c0,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007a04, 0x00000000,
    0x00112231, 0x340e0100, 0xfa007d0c, 0x04000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007f04, 0x00000000,
    0x00112331, 0x350e0100, 0xfa000e0c, 0x04000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001004, 0x00000000,
    0x00112431, 0x360e0100, 0xfa00160c, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001804, 0x00000000,
    0x00112531, 0x370e0100, 0xfa001b0c, 0x04000000,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x80008501, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x00000000, 0xfb087814, 0x000c3424,
    0x0010a361, 0x1c054770, 0x00000000, 0x00000010,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x1c00781e, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cc31, 0x00000000,
    0xfb081e14, 0x000c0824, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x2000ae40, 0x0500021f,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x2000af40, 0x06000320, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x2000a040, 0x07000421,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x20140070, 0x02000522, 0x78901d61, 0x7f800013,
    0x28000061, 0x00100213, 0x8000a465, 0x2b058220,
    0x02000054, 0xfffffc00, 0x04101562, 0x23058220,
    0x02461f05, 0x7f800000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x800c1161, 0x63060220,
    0x00441316, 0x00000000, 0x80001b68, 0x2c058220,
    0x02002b04, 0x00000004, 0x800ca861, 0x2d054410,
    0x00000000, 0x76543210, 0x2014ac70, 0x03000624,
    0x800c1b62, 0x62060aa0, 0x5a441306, 0x00446306,
    0x800c1940, 0x2d458110, 0x01462d05, 0x00080008,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x04101662, 0x25058220, 0x02462005, 0x7f800000,
    0x800c0961, 0x13160220, 0x00446206, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x0010a969, 0x2e058120, 0x02462d05, 0x00000002,
    0x2014a470, 0x04000726, 0x80081a61, 0x65070220,
    0x00421317, 0x00000000, 0x80080061, 0x66070220,
    0x00421327, 0x00000000, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x00101b66, 0x2f058220,
    0x02462e05, 0x00000580, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x27058220,
    0x02462105, 0x7f800000, 0x80081b62, 0x64070aa0,
    0x5a426507, 0x00426607, 0x00101670, 0x00018660,
    0x26462205, 0x00000000, 0x80081161, 0x13270220,
    0x00426407, 0x00000000, 0x04100062, 0x28058220,
    0x02461f05, 0xff800000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80081a61, 0x68070220,
    0x00421317, 0x00000000, 0x80080061, 0x69070220,
    0x00421337, 0x00000000, 0x00101470, 0x00018660,
    0x26462405, 0x00000000, 0x80081a62, 0x67070aa0,
    0x5a426807, 0x00426907, 0x04100062, 0x29058220,
    0x02462005, 0xff800000, 0x80081161, 0x13370220,
    0x00426707, 0x00000000, 0x00101370, 0x00018660,
    0x26462605, 0x00000000, 0x80081a62, 0x13450aa0,
    0x5a001334, 0x00341345, 0x80081a62, 0x13c50aa0,
    0x5a0013b4, 0x003413c5, 0x04100062, 0x2a058220,
    0x02462105, 0xff800000, 0x800c1162, 0x13850aa0,
    0x5a001374, 0x00461385, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x0010a661, 0x35050220,
    0x000013f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002c04, 0x00000000, 0x00112631, 0x00020100,
    0xfa082f0c, 0x0400350c, 0x7890a461, 0x7f800016,
    0x28000061, 0x00100316, 0x8000a565, 0x30058220,
    0x02000054, 0xfffffc00, 0x800c1161, 0x6b060220,
    0x00441616, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x31058220,
    0x02003004, 0x00000004, 0x800ca061, 0x32054410,
    0x00000000, 0x76543210, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x800c1b62, 0x6a060aa0,
    0x5a441606, 0x00446b06, 0x800c1940, 0x32458110,
    0x01463205, 0x00080008, 0x800c0961, 0x16160220,
    0x00446a06, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a169, 0x33058120,
    0x02463205, 0x00000002, 0x80081a61, 0x6d070220,
    0x00421617, 0x00000000, 0x8008a061, 0x6e070220,
    0x00421627, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x00101b66, 0x34058220,
    0x02463305, 0x000005c0, 0x80081a62, 0x6c070aa0,
    0x5a426d07, 0x00426e07, 0x80081161, 0x16270220,
    0x00426c07, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x80081961, 0x70070220,
    0x00421617, 0x00000000, 0x80080061, 0x71070220,
    0x00421637, 0x00000000, 0x80081962, 0x6f070aa0,
    0x5a427007, 0x00427107, 0x80081161, 0x16370220,
    0x00426f07, 0x00000000, 0x80081962, 0x16450aa0,
    0x5a001634, 0x00341645, 0x80081962, 0x16c50aa0,
    0x5a0016b4, 0x003416c5, 0x800c1162, 0x16850aa0,
    0x5a001674, 0x00461685, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x36050220,
    0x000016f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003104, 0x00000000, 0x00112731, 0x00020100,
    0xfa08340c, 0x0400360c, 0x7890a261, 0x7f800017,
    0x28000061, 0x00100417, 0x8000a665, 0x35058220,
    0x02000054, 0xfffffc00, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x800c1161, 0x73060220,
    0x00441716, 0x00000000, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x36058220,
    0x02003504, 0x00000004, 0x800ca661, 0x37054410,
    0x00000000, 0x76543210, 0x800c1b62, 0x72060aa0,
    0x5a441706, 0x00447306, 0x800c1940, 0x37458110,
    0x01463705, 0x00080008, 0x800c0961, 0x17160220,
    0x00447206, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x38058120,
    0x02463705, 0x00000002, 0x80081a61, 0x75070220,
    0x00421717, 0x00000000, 0x80080061, 0x76070220,
    0x00421727, 0x00000000, 0x00101b66, 0x39058220,
    0x02463805, 0x00000600, 0x80081a62, 0x74070aa0,
    0x5a427507, 0x00427607, 0x80081161, 0x17270220,
    0x00427407, 0x00000000, 0x80081961, 0x78070220,
    0x00421717, 0x00000000, 0x80080061, 0x79070220,
    0x00421737, 0x00000000, 0x80081962, 0x77070aa0,
    0x5a427807, 0x00427907, 0x80081161, 0x17370220,
    0x00427707, 0x00000000, 0x80081962, 0x17450aa0,
    0x5a001734, 0x00341745, 0x80081962, 0x17c50aa0,
    0x5a0017b4, 0x003417c5, 0x800c1162, 0x17850aa0,
    0x5a001774, 0x00461785, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x0010a661, 0x37050220,
    0x000017f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003604, 0x00000000, 0x00112831, 0x00020100,
    0xfa08390c, 0x0400370c, 0x78900061, 0xff800018,
    0x28000061, 0x00100518, 0x8000a765, 0x3a058220,
    0x02000054, 0xfffffc00, 0x800c1161, 0x7b060220,
    0x00441816, 0x00000000, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x3b058220,
    0x02003a04, 0x00000004, 0x800c0061, 0x3c054410,
    0x00000000, 0x76543210, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x800c1b62, 0x7a060aa0,
    0x4a441806, 0x00447b06, 0x800c1940, 0x3c458110,
    0x01463c05, 0x00080008, 0x800c0961, 0x18160220,
    0x00447a06, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a869, 0x3d058120,
    0x02463c05, 0x00000002, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80081a61, 0x7d070220,
    0x00421817, 0x00000000, 0x80080061, 0x7e070220,
    0x00421827, 0x00000000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x00101b66, 0x3e058220,
    0x02463d05, 0x00000640, 0x80081a62, 0x7c070aa0,
    0x4a427d07, 0x00427e07, 0x80081161, 0x18270220,
    0x00427c07, 0x00000000, 0x80081961, 0x02070220,
    0x00421817, 0x00000000, 0x80080061, 0x03070220,
    0x00421837, 0x00000000, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x80081962, 0x7f070aa0,
    0x4a420207, 0x00420307, 0x80081161, 0x18370220,
    0x00427f07, 0x00000000, 0x80081962, 0x18450aa0,
    0x4a001834, 0x00341845, 0x80081962, 0x18c50aa0,
    0x4a0018b4, 0x003418c5, 0x800c1162, 0x18850aa0,
    0x4a001874, 0x00461885, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x38050220,
    0x000018f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003b04, 0x00000000, 0x00112931, 0x00020100,
    0xfa083e0c, 0x0400380c, 0x78900061, 0xff800019,
    0x28000061, 0x00100619, 0x80000065, 0x3f058220,
    0x02000054, 0xfffffc00, 0x800c1161, 0x05060220,
    0x00441916, 0x00000000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x40058220,
    0x02003f04, 0x00000004, 0x800c0061, 0x41054410,
    0x00000000, 0x76543210, 0x800c1b62, 0x04060aa0,
    0x4a441906, 0x00440506, 0x800c1940, 0x41458110,
    0x01464105, 0x00080008, 0x800c0961, 0x19160220,
    0x00440406, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x42058120,
    0x02464105, 0x00000002, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x80081a61, 0x08070220,
    0x00421917, 0x00000000, 0x8008ac61, 0x09070220,
    0x00421927, 0x00000000, 0x00101b66, 0x43058220,
    0x02464205, 0x00000680, 0x80081a62, 0x06070aa0,
    0x4a420807, 0x00420907, 0x80081161, 0x19270220,
    0x00420607, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x80081961, 0x0b070220,
    0x00421917, 0x00000000, 0x8008ab61, 0x0c070220,
    0x00421937, 0x00000000, 0x80008c01, 0x00000000,
    0x00000000, 0x00000000, 0x80081962, 0x0a070aa0,
    0x4a420b07, 0x00420c07, 0x80081161, 0x19370220,
    0x00420a07, 0x00000000, 0x80081962, 0x19450aa0,
    0x4a001934, 0x00341945, 0x80081962, 0x19c50aa0,
    0x4a0019b4, 0x003419c5, 0x800c1162, 0x19850aa0,
    0x4a001974, 0x00461985, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x0010a861, 0x39050220,
    0x000019f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004004, 0x00000000, 0x00112a31, 0x00020100,
    0xfa08430c, 0x0400390c, 0x78900061, 0xff80001a,
    0x28000061, 0x0010071a, 0x8000a965, 0x44058220,
    0x02000054, 0xfffffc00, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x800c1161, 0x0e060220,
    0x00441a16, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x45058220,
    0x02004404, 0x00000004, 0x800c0061, 0x46054410,
    0x00000000, 0x76543210, 0x800c1b62, 0x0d060aa0,
    0x4a441a06, 0x00440e06, 0x800c1940, 0x46458110,
    0x01464605, 0x00080008, 0x800c0961, 0x1a160220,
    0x00440d06, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x47058120,
    0x02464605, 0x00000002, 0x80081a61, 0x10070220,
    0x00421a17, 0x00000000, 0x80080061, 0x11070220,
    0x00421a27, 0x00000000, 0x00101b66, 0x48058220,
    0x02464705, 0x000006c0, 0x80081a62, 0x0f070aa0,
    0x4a421007, 0x00421107, 0x80081161, 0x1a270220,
    0x00420f07, 0x00000000, 0x80081961, 0x18070220,
    0x00421a17, 0x00000000, 0x8008a561, 0x1b070220,
    0x00421a37, 0x00000000, 0x80081962, 0x13070aa0,
    0x4a421807, 0x00421b07, 0x80081161, 0x1a370220,
    0x00421307, 0x00000000, 0x80081962, 0x1a450aa0,
    0x4a001a34, 0x00341a45, 0x80081962, 0x1ac50aa0,
    0x4a001ab4, 0x00341ac5, 0x800c1162, 0x1a850aa0,
    0x4a001a74, 0x00461a85, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x0010a761, 0x3a050220,
    0x00001af4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004504, 0x00000000, 0x00112b31, 0x00020100,
    0xfa08480c, 0x04003a0c, 0x00100070, 0x00018220,
    0x52461205, 0x00000003, 0x04100022, 0x0001c060,
    0x00000328, 0x00000328, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x49054770,
    0x00000000, 0x00000080, 0x0010ab69, 0x4d058770,
    0x02341405, 0x00000002, 0x00100070, 0x00018220,
    0x52461205, 0x00000001, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x4907014b,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x4d004b4f, 0x04100022, 0x0001c060,
    0x000000e0, 0x000000c0, 0x80000065, 0x51058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x52058220,
    0x02005104, 0x00000004, 0x800c0061, 0x53054410,
    0x00000000, 0x76543210, 0x800c1940, 0x53458110,
    0x01465305, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ac69, 0x54058120,
    0x02465305, 0x00000002, 0x00101966, 0x55058220,
    0x02465405, 0x00000580, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000a766, 0x10118220,
    0x02005204, 0x00000000, 0x00112731, 0x3b0e0100,
    0xfa00550c, 0x04000000, 0x00100024, 0x0001c060,
    0x00000030, 0x00000030, 0x00100070, 0x00018220,
    0x52461205, 0x00000002, 0x04108762, 0x3b050220,
    0x020016f4, 0x000017f4, 0x00100025, 0x00004600,
    0x00000000, 0x000001a8, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c731, 0x00000000,
    0xfb2a4f14, 0x01003b0c, 0x00100061, 0x56054770,
    0x00000000, 0x0000000c, 0x00100070, 0x00018220,
    0x52461205, 0x00000001, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x56004f58,
    0x04100022, 0x0001c060, 0x000000f0, 0x000000d0,
    0x80000065, 0x5a058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x5b058220, 0x02005a04, 0x00000004,
    0x800c0061, 0x5c054410, 0x00000000, 0x76543210,
    0x800c1940, 0x5c458110, 0x01465c05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x5d058120, 0x02465c05, 0x00000002,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x00101966, 0x5e058220, 0x02465d05, 0x00000640,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02005b04, 0x00000000,
    0x00112e31, 0x3c0e0100, 0xfa005e0c, 0x04000000,
    0x00100024, 0x0001c060, 0x00000030, 0x00000030,
    0x00100070, 0x00018220, 0x52461205, 0x00000002,
    0x04108e62, 0x3c050220, 0x020019f4, 0x00001af4,
    0x00100025, 0x00004600, 0x00000000, 0x00000040,
    0x80008e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010cd31, 0x00000000, 0xfb2c5814, 0x01003c0c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x78901461, 0x7f80001b, 0x28000061, 0x0010231b,
    0x80000065, 0x5f058220, 0x02000054, 0xfffffc00,
    0x800c1161, 0x1d060220, 0x00441b16, 0x00000000,
    0x80001a68, 0x60058220, 0x02005f04, 0x00000004,
    0x800c0061, 0x61054410, 0x00000000, 0x76543210,
    0x800c1b62, 0x1c060aa0, 0x5a441b06, 0x00441d06,
    0x800c1940, 0x61458110, 0x01466105, 0x00080008,
    0x800c0961, 0x1b160220, 0x00441c06, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x62058120, 0x02466105, 0x00000002,
    0x80081a61, 0x1f070220, 0x00421b17, 0x00000000,
    0x80080061, 0x20070220, 0x00421b27, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100066, 0x63058220, 0x02466205, 0x00000400,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80081a62, 0x1e070aa0, 0x5a421f07, 0x00422007,
    0x80081161, 0x1b270220, 0x00421e07, 0x00000000,
    0x80081961, 0x22070220, 0x00421b17, 0x00000000,
    0x80081361, 0x23070220, 0x00421b37, 0x00000000,
    0x80081962, 0x21070aa0, 0x5a422207, 0x00422307,
    0x80081161, 0x1b370220, 0x00422107, 0x00000000,
    0x80081962, 0x1b450aa0, 0x5a001b34, 0x00341b45,
    0x80081962, 0x1bc50aa0, 0x5a001bb4, 0x00341bc5,
    0x800c1162, 0x1b850aa0, 0x5a001b74, 0x00461b85,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x3d050220, 0x00001bf4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006004, 0x00000000,
    0x00112c31, 0x00020100, 0xfa08630c, 0x04003d0c,
    0x78901f61, 0x7f80001c, 0x28000061, 0x0010251c,
    0x80000065, 0x64058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x65058220, 0x02006404, 0x00000004,
    0x800c0061, 0x66054410, 0x00000000, 0x76543210,
    0x800c1161, 0x25060220, 0x00441c16, 0x00000000,
    0x800c1a40, 0x66458110, 0x01466605, 0x00080008,
    0x800c1a62, 0x24060aa0, 0x5a441c06, 0x00442506,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x67058120, 0x02466605, 0x00000002,
    0x800c0961, 0x1c160220, 0x00442406, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100066, 0x68058220, 0x02466705, 0x00000440,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x80081a61, 0x2b070220, 0x00421c17, 0x00000000,
    0x80080061, 0x2c070220, 0x00421c27, 0x00000000,
    0x80081962, 0x26070aa0, 0x5a422b07, 0x00422c07,
    0x80081161, 0x1c270220, 0x00422607, 0x00000000,
    0x80081961, 0x2e070220, 0x00421c17, 0x00000000,
    0x8008a661, 0x2f070220, 0x00421c37, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x2d070aa0, 0x5a422e07, 0x00422f07,
    0x80081161, 0x1c370220, 0x00422d07, 0x00000000,
    0x80081962, 0x1c450aa0, 0x5a001c34, 0x00341c45,
    0x80081962, 0x1cc50aa0, 0x5a001cb4, 0x00341cc5,
    0x800c1162, 0x1c850aa0, 0x5a001c74, 0x00461c85,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x0010a961, 0x3e050220, 0x00001cf4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006504, 0x00000000,
    0x00112d31, 0x00020100, 0xfa08680c, 0x04003e0c,
    0x78900061, 0x7f80001d, 0x28000061, 0x0010271d,
    0x80000065, 0x69058220, 0x02000054, 0xfffffc00,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1161, 0x31060220, 0x00441d16, 0x00000000,
    0x80001a68, 0x6a058220, 0x02006904, 0x00000004,
    0x800c0061, 0x6b054410, 0x00000000, 0x76543210,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x30060aa0, 0x5a441d06, 0x00443106,
    0x800c1940, 0x6b458110, 0x01466b05, 0x00080008,
    0x800c0961, 0x1d160220, 0x00443006, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x6c058120, 0x02466b05, 0x00000002,
    0x80081a61, 0x33070220, 0x00421d17, 0x00000000,
    0x8008a761, 0x34070220, 0x00421d27, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100066, 0x6d058220, 0x02466c05, 0x00000480,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80081a62, 0x32070aa0, 0x5a423307, 0x00423407,
    0x80081161, 0x1d270220, 0x00423207, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80081961, 0x36070220, 0x00421d17, 0x00000000,
    0x8008a861, 0x37070220, 0x00421d37, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x35070aa0, 0x5a423607, 0x00423707,
    0x80081161, 0x1d370220, 0x00423507, 0x00000000,
    0x80081962, 0x1d450aa0, 0x5a001d34, 0x00341d45,
    0x80081962, 0x1dc50aa0, 0x5a001db4, 0x00341dc5,
    0x800c1162, 0x1d850aa0, 0x5a001d74, 0x00461d85,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x3f050220, 0x00001df4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006a04, 0x00000000,
    0x00112e31, 0x00020100, 0xfa086d0c, 0x04003f0c,
    0x78900061, 0xff80001e, 0x28000061, 0x0010281e,
    0x80000065, 0x6e058220, 0x02000054, 0xfffffc00,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1161, 0x39060220, 0x00441e16, 0x00000000,
    0x80001a68, 0x6f058220, 0x02006e04, 0x00000004,
    0x800c0061, 0x70054410, 0x00000000, 0x76543210,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x38060aa0, 0x4a441e06, 0x00443906,
    0x800c1940, 0x70458110, 0x01467005, 0x00080008,
    0x800c0961, 0x1e160220, 0x00443806, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x71058120, 0x02467005, 0x00000002,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80081a61, 0x3b070220, 0x00421e17, 0x00000000,
    0x8008ad61, 0x3c070220, 0x00421e27, 0x00000000,
    0x00101b66, 0x72058220, 0x02467105, 0x000004c0,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80081a62, 0x3a070aa0, 0x4a423b07, 0x00423c07,
    0x80081161, 0x1e270220, 0x00423a07, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80081961, 0x3e070220, 0x00421e17, 0x00000000,
    0x8008ae61, 0x3f070220, 0x00421e37, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x3d070aa0, 0x4a423e07, 0x00423f07,
    0x80081161, 0x1e370220, 0x00423d07, 0x00000000,
    0x80081962, 0x1e450aa0, 0x4a001e34, 0x00341e45,
    0x80081962, 0x1ec50aa0, 0x4a001eb4, 0x00341ec5,
    0x800c1162, 0x1e850aa0, 0x4a001e74, 0x00461e85,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x0010a861, 0x40050220, 0x00001ef4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006f04, 0x00000000,
    0x00112f31, 0x00020100, 0xfa08720c, 0x0400400c,
    0x78900061, 0xff80001f, 0x28000061, 0x0010291f,
    0x80000065, 0x73058220, 0x02000054, 0xfffffc00,
    0x800c1161, 0x41060220, 0x00441f16, 0x00000000,
    0x80001a68, 0x74058220, 0x02007304, 0x00000004,
    0x800c0061, 0x75054410, 0x00000000, 0x76543210,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x40060aa0, 0x4a441f06, 0x00444106,
    0x800c1940, 0x75458110, 0x01467505, 0x00080008,
    0x800c0961, 0x1f160220, 0x00444006, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x76058120, 0x02467505, 0x00000002,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80081a61, 0x43070220, 0x00421f17, 0x00000000,
    0x8008a961, 0x44070220, 0x00421f27, 0x00000000,
    0x00101b66, 0x77058220, 0x02467605, 0x00000500,
    0x80081a62, 0x42070aa0, 0x4a424307, 0x00424407,
    0x80081161, 0x1f270220, 0x00424207, 0x00000000,
    0x80081961, 0x46070220, 0x00421f17, 0x00000000,
    0x80080061, 0x47070220, 0x00421f37, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x45070aa0, 0x4a424607, 0x00424707,
    0x80081161, 0x1f370220, 0x00424507, 0x00000000,
    0x80081962, 0x1f450aa0, 0x4a001f34, 0x00341f45,
    0x80081962, 0x1fc50aa0, 0x4a001fb4, 0x00341fc5,
    0x800c1162, 0x1f850aa0, 0x4a001f74, 0x00461f85,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x41050220, 0x00001ff4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007404, 0x00000000,
    0x00112031, 0x00020100, 0xfa08770c, 0x0400410c,
    0x78900061, 0xff800020, 0x28000061, 0x00102a20,
    0x80000065, 0x78058220, 0x02000054, 0xfffffc00,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1161, 0x49060220, 0x00442016, 0x00000000,
    0x80001a68, 0x79058220, 0x02007804, 0x00000004,
    0x800c0061, 0x7a054410, 0x00000000, 0x76543210,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x48060aa0, 0x4a442006, 0x00444906,
    0x800c1940, 0x7a458110, 0x01467a05, 0x00080008,
    0x800c0961, 0x20160220, 0x00444806, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x7b058120, 0x02467a05, 0x00000002,
    0x80081a61, 0x4b070220, 0x00422017, 0x00000000,
    0x80080061, 0x4c070220, 0x00422027, 0x00000000,
    0x00101b66, 0x7c058220, 0x02467b05, 0x00000540,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80081a62, 0x4a070aa0, 0x4a424b07, 0x00424c07,
    0x80081161, 0x20270220, 0x00424a07, 0x00000000,
    0x80081961, 0x4e070220, 0x00422017, 0x00000000,
    0x8008ab61, 0x4f070220, 0x00422037, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x4d070aa0, 0x4a424e07, 0x00424f07,
    0x80081161, 0x20370220, 0x00424d07, 0x00000000,
    0x80081962, 0x20450aa0, 0x4a002034, 0x00342045,
    0x80081962, 0x20c50aa0, 0x4a0020b4, 0x003420c5,
    0x800c1162, 0x20850aa0, 0x4a002074, 0x00462085,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x42050220, 0x000020f4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007904, 0x00000000,
    0x00112131, 0x00020100, 0xfa087c0c, 0x0400420c,
    0x00100070, 0x00018220, 0x52461205, 0x00000003,
    0x04100022, 0x0001c060, 0x00000310, 0x00000310,
    0x00100069, 0x7d058770, 0x02341405, 0x00000002,
    0x00100070, 0x00018220, 0x52461205, 0x00000001,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x7d030102, 0x04100022, 0x0001c060,
    0x00000100, 0x000000d0, 0x80000065, 0x04058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x05058220,
    0x02000404, 0x00000004, 0x800c0061, 0x06054410,
    0x00000000, 0x76543210, 0x800c1940, 0x06458110,
    0x01460605, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x07058120,
    0x02460605, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100066, 0x08058220,
    0x02460705, 0x00000400, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000504, 0x00000000, 0x00112231, 0x430e0100,
    0xfa00080c, 0x04000000, 0x00100024, 0x0001c060,
    0x00000040, 0x00000040, 0x00100070, 0x00018220,
    0x52461205, 0x00000002, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x43050220,
    0x02001cf4, 0x00001df4, 0x00100025, 0x00004600,
    0x00000000, 0x000001b8, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x00000000,
    0xfb2a0214, 0x0100430c, 0x00100061, 0x09054770,
    0x00000000, 0x00000010, 0x00100070, 0x00018220,
    0x52461205, 0x00000001, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x3800a340, 0x0900020b,
    0x04100022, 0x0001c060, 0x00000100, 0x000000d0,
    0x80000065, 0x0d058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x0e058220, 0x02000d04, 0x00000004,
    0x800c0061, 0x0f054410, 0x00000000, 0x76543210,
    0x800c1940, 0x0f458110, 0x01460f05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x10058120, 0x02460f05, 0x00000002,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100066, 0x11058220, 0x02461005, 0x000004c0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02000e04, 0x00000000,
    0x00112431, 0x440e0100, 0xfa00110c, 0x04000000,
    0x00100024, 0x0001c060, 0x00000040, 0x00000040,
    0x00100070, 0x00018220, 0x52461205, 0x00000002,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x44050220, 0x02001ff4, 0x000020f4,
    0x00100025, 0x00004600, 0x00000000, 0x00000040,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x00000000, 0xfb2c0b14, 0x0100440c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_primref_procedurals_to_primrefs_indirect = {
   .prog_data = {
      .base.nr_params = 19,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 4,
      .base.total_scratch = 2048,
      .base.total_shared = 0,
      .base.program_size = 15680,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_primref_procedurals_to_primrefs_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_primref_procedurals_to_primrefs_indirect_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 16, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 0,
      .uses_barrier = false,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 19,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 44,
   .arg_count = 6,
   .args = gfx20_bvh_build_primref_procedurals_to_primrefs_indirect_args,
   .code = gfx20_bvh_build_primref_procedurals_to_primrefs_indirect_code,
};
const char *gfx20_bvh_build_primref_procedurals_to_primrefs_indirect_sha1 = "1c6ce56e7726e0cf04c37e6e7be2b0fd08ebca7d";

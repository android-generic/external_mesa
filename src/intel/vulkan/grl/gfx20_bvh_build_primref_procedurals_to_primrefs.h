#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_primref_procedurals_to_primrefs_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_primref_procedurals_to_primrefs_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_primref_procedurals_to_primrefs_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 4 },
   { 36, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g79<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g15<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g79UD           nullUD          0x0220e500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V32, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g18<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g70<2>UD        g15<1,1,0>UD                    { align1 1H I@2 compacted };
add(8)          g18.8<1>UW      g18<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
mov(16)         g13<1>UQ        g70<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g17<1>UD        g18<8,8,1>UW                    { align1 1H };
shl(16)         g15<1>Q         g13<4,4,1>Q     0x00000004UD    { align1 1H I@2 };
mov(16)         g72<2>UD        g17<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g74<2>UD        g15<4,4,1>UQ                    { align1 1H I@2 };
mov(16)         g19<1>UQ        g72<8,4,2>UD                    { align1 1H I@2 };
add(16)         g21<1>D         g74<8,4,2>D     g17<8,8,1>D     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  null<1>UD       g21<8,8,1>UD    g2.1<0,1,0>UD   { align1 1H I@1 };
and(16)         g11<1>UD        g2<0,1,0>UD     0x00ffffffUD    { align1 1H };
mov(16)         g12<1>UD        g2.3<0,1,0>UB                   { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g34<1>Q         g1.7<0,1,0>Q                    { align1 1H };
and(1)          g37<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g22UD           g34UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
shr(1)          g40<1>UD        g37<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g41<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g41.8<1>UW      g41<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g42<1>UD        g41<8,8,1>UW    0x00000002UD    { align1 1H };
mov(16)         g26<2>UD        g22<1,1,0>UD                    { align1 1H $1.dst compacted };
mul(16)         acc0<1>UD       g21<8,8,1>UD    g24<16,8,2>UW   { align1 1H $1.dst };
mul(16)         g29<1>D         g21<8,8,1>D     g24<16,8,2>UW   { align1 1H };
mul(16)         g68<1>D         g21<8,8,1>D     g24.1<16,8,2>UW { align1 1H };
mul(16)         g30<1>D         g21<8,8,1>D     g25<16,8,2>UW   { align1 1H $1.dst };
mul(16)         g69<1>D         g21<8,8,1>D     g25.1<16,8,2>UW { align1 1H };
mov(16)         g26.1<2>UD      g23<1,1,0>UD                    { align1 1H @6 $1.dst compacted };
mach(16)        g28<1>UD        g21<1,1,0>UD    g24<1,1,0>UD    { align1 1H compacted };
add(16)         g29.1<2>UW      g29.1<16,8,2>UW g68<16,8,2>UW   { align1 1H I@5 };
add(16)         g30.1<2>UW      g30.1<16,8,2>UW g69<16,8,2>UW   { align1 1H I@4 };
mov(16)         g32<2>UD        g29<1,1,0>UD                    { align1 1H I@2 compacted };
add(16)         g31<1>D         g28<1,1,0>D     g30<1,1,0>D     { align1 1H I@2 compacted };
mov(16)         g32.1<2>UD      g31<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g34<1>Q         g26<1,1,0>Q     g32<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g36UD           g34UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
or(1)           a0.1<1>UD       g40<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g42UD           g36UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $3 };
and(1)          g43<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g44<1>UD        g43<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g45<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g45.8<1>UW      g45<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g46<1>UD        g45<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g47<1>UD        g46<8,8,1>UD    0x00000040UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g44<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g47UD           g37UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
and(1)          g48<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g49<1>UD        g48<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g50<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g50.8<1>UW      g50<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g51<1>UD        g50<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g52<1>UD        g51<8,8,1>UD    0x00000080UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g49<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g52UD           g38UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
and(1)          g53<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g54<1>UD        g53<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g55<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g55.8<1>UW      g55<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g56<1>UD        g55<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g57<1>UD        g56<8,8,1>UD    0x000000c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g54<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g57UD           g39UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
mov(16)         g58<1>Q         0x0000000000000010Q             { align1 1H };
and(1)          g63<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g60<1>Q         g34<1,1,0>Q     g58<1,1,0>Q     { align1 1H I@2 compacted };
shr(1)          g64<1>UD        g63<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g65<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g62UD           g60UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
add(8)          g65.8<1>UW      g65<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g66<1>UD        g65<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g67<1>UD        g66<8,8,1>UD    0x00000100UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g64<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g67UD           g62UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
and(1)          g68<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g69<1>UD        g68<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g70<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g70.8<1>UW      g70<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g71<1>UD        g70<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g72<1>UD        g71<8,8,1>UD    0x00000140UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g69<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g72UD           g63UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
and(1)          g73<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
cmp.l.f0.0(16)  g78<1>F         (abs)g37<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $4.src compacted };
sel.l(16)       g90<1>F         g37<1,1,0>F     g62<1,1,0>F     { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(16)       g91<1>F         g38<1,1,0>F     g63<1,1,0>F     { align1 1H $5.src compacted };
sel.ge(16)      g93<1>F         g37<1,1,0>F     g62<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g94<1>F         g38<1,1,0>F     g63<1,1,0>F     { align1 1H compacted };
shr(1)          g74<1>UD        g73<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g75<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g75.8<1>UW      g75<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g76<1>UD        g75<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g74<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g77UD           g76UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
cmp.l.f0.0(16)  g79<1>F         (abs)g77<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $10.dst compacted };
sel.l(16)       g89<1>F         g77<1,1,0>F     g39<1,1,0>F     { align1 1H $6.src compacted };
sel.ge(16)      g92<1>F         g77<1,1,0>F     g39<1,1,0>F     { align1 1H compacted };
cmp.l.f0.0(16)  g81<1>F         (abs)g38<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g83<1>F         (abs)g62<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g80<1>UD        g78<1,1,0>UD    g79<1,1,0>UD    { align1 1H F@5 compacted };
cmp.l.f0.0(16)  g84<1>F         (abs)g39<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g86<1>F         (abs)g63<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g82<1>UD        g80<1,1,0>UD    g81<1,1,0>UD    { align1 1H A@1 compacted };
and(16)         g85<1>UD        g83<1,1,0>UD    g84<1,1,0>UD    { align1 1H F@2 compacted };
and(16)         g87<1>UD        g85<1,1,0>UD    g86<1,1,0>UD    { align1 1H A@1 compacted };
and.nz.f0.0(16) g88<1>UD        g82<1,1,0>UD    g87<1,1,0>UD    { align1 1H I@1 compacted };
(+f0.0) sel(16) g5<1>UD         g92<8,8,1>UD    0xff800000UD    { align1 1H F@5 };
(+f0.0) sel(16) g6<1>UD         g93<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g7<1>UD         g94<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
(+f0.0) sel(16) g2<1>UD         g89<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
(+f0.0) sel(16) g3<1>UD         g90<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g4<1>UD         g91<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(16)         g95<2>W         -g88<8,8,1>D                    { align1 1H I@7 };
mov(16)         g9<1>UW         g95<16,8,2>UW                   { align1 1H I@1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g9<1>UW         0x0000UW                        { align1 1H I@2 };
mov(16)         g4<1>UD         0x7f800000UD                    { align1 1H I@5 };
mov(16)         g3<1>UD         0x7f800000UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(16)         g2<1>UD         0x7f800000UD                    { align1 1H };
mov(16)         g7<1>UD         0xff800000UD                    { align1 1H };
mov(16)         g6<1>UD         0xff800000UD                    { align1 1H };
mov(16)         g5<1>UD         0xff800000UD                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
and(16)         g95<1>UW        g9<16,16,1>UW   0x0001UW        { align1 1H I@3 };
mov(16)         g96<1>W         g95<32,16,2>B                   { align1 1H I@1 };
cmp.nz.f0.0(16) g98<1>W         g96<16,16,1>W   0W              { align1 1H I@1 };
mov(16)         g97<1>D         g98<8,8,1>W                     { align1 1H I@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g97<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g99<1>UD        f0<0,1,0>UW                     { align1 1H };
bfi1(16)        g100<1>UD       g17<8,8,1>D     0D              { align1 1H };
cbit(16)        g35<1>UD        g99<1,1,0>UD                    { align1 1H I@2 compacted };
cmp.z.f0.0(16)  null<1>D        g17<8,8,1>D     0D              { align1 1H };
and(16)         g101<1>UD       g99<1,1,0>UD    g100<1,1,0>UD   { align1 1H I@3 compacted };
cbit(16)        g102<1>UD       g101<1,1,0>UD                   { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
mov(16)         g103<1>Q        0x0000000000000024Q             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g105<1>Q        g1.4<0,1,0>Q    g103<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g10UD           g105UD          g35UD           0x0414058c                0x00000040
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 1, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $11 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g106<1>D        g102<1,1,0>D    g10<0,1,0>D     { align1 1H $11.dst compacted };
mov.nz.f0.0(16) null<1>D        g97<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
and(1)          g107<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g112<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g108<1>UD       g107<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g109<1>UW       0x76543210V                     { align1 WE_all 1Q };
shr(1)          g113<1>UD       g112<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g114<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g109.8<1>UW     g109<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@3 };
add(8)          g114.8<1>UW     g114<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g110<1>UD       g109<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g115<1>UD       g114<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g111<1>UD       g110<8,8,1>UD   0x000002c0UD    { align1 1H I@2 };
or(16)          g116<1>UD       g115<8,8,1>UD   0x00000200UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g108<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g36UD           g111UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g113<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g116UD          g2UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g118<1>UD       g117<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g119<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g119.8<1>UW     g119<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g120<1>UD       g119<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g121<1>UD       g120<8,8,1>UD   0x00000240UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g118<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g121UD          g3UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
and(1)          g122<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g123<1>UD       g122<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g124<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g124.8<1>UW     g124<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g125<1>UD       g124<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g126<1>UD       g125<8,8,1>UD   0x00000280UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g123<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g126UD          g4UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $15 };
and(1)          g127<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g8<1>UD         g127<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g9<1>UW         0x76543210V                     { align1 WE_all 1Q };
add(8)          g9.8<1>UW       g9<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g10<1>UD        g9<8,8,1>UW     0x00000002UD    { align1 1H $11.dst };
or(16)          g13<1>UD        g10<8,8,1>UD    0x000002c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g8<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g13UD           g36UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
and(1)          g14<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g23<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g15<1>UD        g14<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g16<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g24<1>UD        g23<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g25<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g16.8<1>UW      g16<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@3 };
add(8)          g25.8<1>UW      g25<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g18<1>UD        g16<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g26<1>UD        g25<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g22<1>UD        g18<8,8,1>UD    0x000003c0UD    { align1 1H I@2 };
or(16)          g27<1>UD        g26<8,8,1>UD    0x00000300UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g15<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g43UD           g22UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g24<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g27UD           g5UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
and(1)          g28<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g29<1>UD        g28<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g30<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g30.8<1>UW      g30<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g31<1>UD        g30<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g32<1>UD        g31<8,8,1>UD    0x00000340UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g29<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g32UD           g6UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $3 };
and(1)          g33<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g34<1>UD        g33<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g35<1>UW        0x76543210V                     { align1 WE_all 1Q $11.src };
add(8)          g35.8<1>UW      g35<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g36<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H $0.src };
or(16)          g37<1>UD        g36<8,8,1>UD    0x00000380UD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g34<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g37UD           g7UD            0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
and(1)          g38<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@4 };
shr(1)          g39<1>UD        g38<0,1,0>UD    0x00000004UD    { align1 WE_all 1N A@1 };
mov(8)          g40<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g40.8<1>UW      g40<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g41<1>UD        g40<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
or(16)          g42<1>UD        g41<8,8,1>UD    0x000003c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g39<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g42UD           g43UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $3 };
shl(16)         g43<1>D         g12<8,8,1>D     0x0000001dUD    { align1 1H $3.src };
and(1)          g44<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g49<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g54<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g59<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g45<1>UD        g44<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g46<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g50<1>UD        g49<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g51<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g55<1>UD        g54<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g56<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shr(1)          g60<1>UD        g59<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g61<1>UW        0x76543210V                     { align1 WE_all 1Q $7.src };
add(8)          g46.8<1>UW      g46<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g51.8<1>UW      g51<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g56.8<1>UW      g56<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g61.8<1>UW      g61<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g47<1>UD        g46<8,8,1>UW    0x00000002UD    { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g52<1>UD        g51<8,8,1>UW    0x00000002UD    { align1 1H $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g57<1>UD        g56<8,8,1>UW    0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
shl(16)         g62<1>UD        g61<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g48<1>UD        g47<8,8,1>UD    0x00000200UD    { align1 1H I@4 };
or(16)          g53<1>UD        g52<8,8,1>UD    0x00000240UD    { align1 1H I@4 };
or(16)          g58<1>UD        g57<8,8,1>UD    0x00000280UD    { align1 1H I@4 };
or(16)          g63<1>UD        g62<8,8,1>UD    0x00000200UD    { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g45<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g44UD           g48UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g50<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g45UD           g53UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g55<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g46UD           g58UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g60<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g63UD           g44UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
and(1)          g64<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g65<1>UD        g64<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g66<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g66.8<1>UW      g66<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g67<1>UD        g66<8,8,1>UW    0x00000002UD    { align1 1H $8.src };
or(16)          g68<1>UD        g67<8,8,1>UD    0x00000240UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g65<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g68UD           g45UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
and(1)          g69<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g70<1>UD        g69<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g71<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g71.8<1>UW      g71<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g72<1>UD        g71<8,8,1>UW    0x00000002UD    { align1 1H $9.src };
or(16)          g73<1>UD        g72<8,8,1>UD    0x00000280UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g70<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g73UD           g46UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
and(1)          g74<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g75<1>UD        g74<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g76<1>UW        0x76543210V                     { align1 WE_all 1Q $10.src };
add(8)          g76.8<1>UW      g76<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
shl(16)         g77<1>UD        g76<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g78<1>UD        g77<8,8,1>UD    0x000002c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g75<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g78UD           g11UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $11 };
or(16)          g50<1>UD        g21<1,1,0>UD    g43<1,1,0>UD    { align1 1H compacted };
and(1)          g79<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
and(1)          g84<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g94<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g11<1>UD        g50<1,1,0>UD                    { align1 1H I@5 compacted };
shr(1)          g80<1>UD        g79<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g81<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g85<1>UD        g84<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g86<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g90<1>UD        g89<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g91<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g95<1>UD        g94<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g96<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g81.8<1>UW      g81<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g86.8<1>UW      g86<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g91.8<1>UW      g91<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g96.8<1>UW      g96<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g82<1>UD        g81<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g87<1>UD        g86<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g92<1>UD        g91<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g97<1>UD        g96<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g83<1>UD        g82<8,8,1>UD    0x00000300UD    { align1 1H I@4 };
or(16)          g88<1>UD        g87<8,8,1>UD    0x00000340UD    { align1 1H I@4 };
or(16)          g93<1>UD        g92<8,8,1>UD    0x00000380UD    { align1 1H I@4 };
or(16)          g98<1>UD        g97<8,8,1>UD    0x00000300UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g80<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g47UD           g83UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g85<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g48UD           g88UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g90<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g49UD           g93UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
mov(16)         g8<1>UD         g47<1,1,0>UD                    { align1 1H $12.dst compacted };
mov(16)         g9<1>UD         g48<1,1,0>UD                    { align1 1H $13.dst compacted };
mov(16)         g10<1>UD        g49<1,1,0>UD                    { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g95<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g98UD           g47UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
and(1)          g99<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g100<1>UD       g99<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g101<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g101.8<1>UW     g101<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g102<1>UD       g101<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g103<1>UD       g102<8,8,1>UD   0x00000340UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g103UD          g48UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $15 };
and(1)          g104<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shr(1)          g105<1>UD       g104<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g107<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g107.8<1>UW     g107<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g108<1>UD       g107<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g109<1>UD       g108<8,8,1>UD   0x00000380UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g105<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g109UD          g49UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
and(1)          g110<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shr(1)          g111<1>UD       g110<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g112<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g112.8<1>UW     g112<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g113<1>UD       g112<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g114<1>UD       g113<8,8,1>UD   0x000003c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g111<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g114UD          g50UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
and(1)          g120<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g125<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g14<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g22<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $1.src };
mov(16)         g96<2>UD        g106<1,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
shr(1)          g121<1>UD       g120<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g122<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
shr(1)          g126<1>UD       g125<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g127<1>UW       0x76543210V                     { align1 WE_all 1Q };
shr(1)          g15<1>UD        g14<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g16<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g23<1>UD        g22<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g24<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g115<1>UQ       g96<8,4,2>UD                    { align1 1H I@7 };
add(8)          g122.8<1>UW     g122<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g127.8<1>UW     g127<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g16.8<1>UW      g16<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g24.8<1>UW      g24<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
shl(16)         g117<1>Q        g115<4,4,1>Q    0x00000005UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g123<1>UD       g122<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g12<1>UD        g127<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g18<1>UD        g16<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g25<1>UD        g24<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g119<1>Q        g1.6<0,1,0>Q    g117<1,1,0>Q    { align1 1H I@5 compacted };
or(16)          g124<1>UD       g123<8,8,1>UD   0x00000200UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g13<1>UD        g12<8,8,1>UD    0x00000240UD    { align1 1H I@5 };
or(16)          g21<1>UD        g18<8,8,1>UD    0x00000280UD    { align1 1H I@5 };
or(16)          g26<1>UD        g25<8,8,1>UD    0x000002c0UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g121<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g51UD           g124UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g126<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g52UD           g13UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g15<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g53UD           g21UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g23<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g54UD           g26UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        nullUD          g119UD          g51UD           0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g27<1>Q         0x0000000000000010Q             { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g29<1>Q         g119<1,1,0>Q    g27<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g29UD           g8UD            0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $11 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g30<1>F         g2<1,1,0>F      g5<1,1,0>F      { align1 1H $13.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g31<1>F         g3<1,1,0>F      g6<1,1,0>F      { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g32<1>F         g4<1,1,0>F      g7<1,1,0>F      { align1 1H $15.src compacted };
cmp.ge.f0.0(16) g33<1>F         g5<1,1,0>F      g2<1,1,0>F      { align1 1H compacted };
mov(16)         g16<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g16<1>F         g2<1,1,0>F                      { align1 1H compacted };
and(1)          g42<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $3.src };
(+f0.0) sel(16) g34<1>UD        g30<8,8,1>UD    0x7f800000UD    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g98<2>UD        g16.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g43<1>UD        g42<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g44<1>UW        0x76543210V                     { align1 WE_all 1Q $8.src };
cmp.ge.f0.0(16) g35<1>F         g6<1,1,0>F      g3<1,1,0>F      { align1 1H $11.src compacted };
sel.l(8)        g97<2>F         g16<8,4,2>F     g98<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g44.8<1>UW      g44<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
(+f0.0) sel(16) g36<1>UD        g31<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
mov(8)          g16.1<2>UD      g97<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g45<1>UD        g44<8,8,1>UW    0x00000002UD    { align1 1H $9.src };
cmp.ge.f0.0(16) g37<1>F         g7<1,1,0>F      g4<1,1,0>F      { align1 1H $4.src compacted };
mov(4)          g100<4>UD       g16.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g101<4>UD       g16.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
or(16)          g46<1>UD        g45<8,8,1>UD    0x00000580UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g38<1>UD        g32<8,8,1>UD    0x7f800000UD    { align1 1H };
sel.l(4)        g99<4>F         g100<8,2,4>F    g101<8,2,4>F    { align1 WE_all 1N I@3 };
cmp.nz.f0.0(16) null<1>D        g33<8,8,1>D     0D              { align1 1H F@6 };
mov(4)          g16.2<4>UD      g99<8,2,4>UD                    { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g39<1>UD        g30<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g103<4>UD       g16.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g104<4>UD       g16.3<8,2,4>UD                  { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>D        g35<8,8,1>D     0D              { align1 1H F@4 };
sel.l(4)        g102<4>F        g103<8,2,4>F    g104<8,2,4>F    { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g40<1>UD        g31<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g16.3<4>UD      g102<8,2,4>UD                   { align1 WE_all 1N F@1 };
cmp.nz.f0.0(16) null<1>D        g37<8,8,1>D     0D              { align1 1H F@3 };
sel.l(4)        g16.4<1>F       g16.3<0,1,0>F   g16.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g16.12<1>F      g16.11<0,1,0>F  g16.12<4,4,1>F  { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g41<1>UD        g32<8,8,1>UD    0xff800000UD    { align1 1H };
sel.l(8)        g16.8<1>F       g16.7<0,1,0>F   g16.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g52<1>UD        g16.15<0,1,0>UD                 { align1 1H $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g43<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g46UD           g52UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
mov(16)         g18<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g18<1>F         g3<1,1,0>F                      { align1 1H compacted };
and(1)          g47<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
mov(8)          g106<2>UD       g18.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
shr(1)          g48<1>UD        g47<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g49<1>UW        0x76543210V                     { align1 WE_all 1Q $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(8)        g105<2>F        g18<8,4,2>F     g106<8,4,2>F    { align1 WE_all 1Q I@3 };
add(8)          g49.8<1>UW      g49<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g18.1<2>UD      g105<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g50<1>UD        g49<8,8,1>UW    0x00000002UD    { align1 1H $1.src };
mov(4)          g108<4>UD       g18.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g109<4>UD       g18.2<8,2,4>UD                  { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
or(16)          g51<1>UD        g50<8,8,1>UD    0x000005c0UD    { align1 1H I@3 };
sel.l(4)        g107<4>F        g108<8,2,4>F    g109<8,2,4>F    { align1 WE_all 1N I@2 };
mov(4)          g18.2<4>UD      g107<8,2,4>UD                   { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g111<4>UD       g18.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g112<4>UD       g18.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g110<4>F        g111<8,2,4>F    g112<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g18.3<4>UD      g110<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g18.4<1>F       g18.3<0,1,0>F   g18.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g18.12<1>F      g18.11<0,1,0>F  g18.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g18.8<1>F       g18.7<0,1,0>F   g18.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g53<1>UD        g18.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g48<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g51UD           g53UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
mov(16)         g21<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $4.src compacted };
mov(16)         g21<1>F         g4<1,1,0>F                      { align1 1H compacted };
and(1)          g52<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g114<2>UD       g21.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shr(1)          g53<1>UD        g52<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g54<1>UW        0x76543210V                     { align1 WE_all 1Q $5.src };
sel.l(8)        g113<2>F        g21<8,4,2>F     g114<8,4,2>F    { align1 WE_all 1Q I@3 };
add(8)          g54.8<1>UW      g54<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g21.1<2>UD      g113<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g55<1>UD        g54<8,8,1>UW    0x00000002UD    { align1 1H };
mov(4)          g116<4>UD       g21.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g117<4>UD       g21.2<8,2,4>UD                  { align1 WE_all 1N };
or(16)          g56<1>UD        g55<8,8,1>UD    0x00000600UD    { align1 1H I@3 };
sel.l(4)        g115<4>F        g116<8,2,4>F    g117<8,2,4>F    { align1 WE_all 1N I@2 };
mov(4)          g21.2<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g119<4>UD       g21.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g120<4>UD       g21.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g118<4>F        g119<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g21.3<4>UD      g118<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g21.4<1>F       g21.3<0,1,0>F   g21.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g21.12<1>F      g21.11<0,1,0>F  g21.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g21.8<1>F       g21.7<0,1,0>F   g21.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g54<1>UD        g21.15<0,1,0>UD                 { align1 1H $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g53<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g56UD           g54UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
mov(16)         g22<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H $1.src compacted };
mov(16)         g22<1>F         g5<1,1,0>F                      { align1 1H compacted };
and(1)          g57<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
mov(8)          g122<2>UD       g22.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shr(1)          g58<1>UD        g57<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g59<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.ge(8)       g121<2>F        g22<8,4,2>F     g122<8,4,2>F    { align1 WE_all 1Q I@3 };
add(8)          g59.8<1>UW      g59<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g22.1<2>UD      g121<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g60<1>UD        g59<8,8,1>UW    0x00000002UD    { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g124<4>UD       g22.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g125<4>UD       g22.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
or(16)          g61<1>UD        g60<8,8,1>UD    0x00000640UD    { align1 1H I@3 };
sel.ge(4)       g123<4>F        g124<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@2 };
mov(4)          g22.2<4>UD      g123<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g127<4>UD       g22.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g2<4>UD         g22.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(4)       g126<4>F        g127<8,2,4>F    g2<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g22.3<4>UD      g126<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g22.4<1>F       g22.3<0,1,0>F   g22.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g22.12<1>F      g22.11<0,1,0>F  g22.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g22.8<1>F       g22.7<0,1,0>F   g22.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g55<1>UD        g22.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g58<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g61UD           g55UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
mov(16)         g23<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g23<1>F         g6<1,1,0>F                      { align1 1H compacted };
and(1)          g62<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(8)          g4<2>UD         g23.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shr(1)          g63<1>UD        g62<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g64<1>UW        0x76543210V                     { align1 WE_all 1Q };
sel.ge(8)       g3<2>F          g23<8,4,2>F     g4<8,4,2>F      { align1 WE_all 1Q I@3 };
add(8)          g64.8<1>UW      g64<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g23.1<2>UD      g3<8,4,2>UD                     { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g65<1>UD        g64<8,8,1>UW    0x00000002UD    { align1 1H };
mov(4)          g6<4>UD         g23.1<8,2,4>UD                  { align1 WE_all 1N A@2 };
mov(4)          g8<4>UD         g23.2<8,2,4>UD                  { align1 WE_all 1N $11.src };
or(16)          g66<1>UD        g65<8,8,1>UD    0x00000680UD    { align1 1H I@3 };
sel.ge(4)       g5<4>F          g6<8,2,4>F      g8<8,2,4>F      { align1 WE_all 1N I@2 };
mov(4)          g23.2<4>UD      g5<8,2,4>UD                     { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(4)          g10<4>UD        g23.1<8,2,4>UD                  { align1 WE_all 1N $11.dst };
mov(4)          g11<4>UD        g23.3<8,2,4>UD                  { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(4)       g9<4>F          g10<8,2,4>F     g11<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g23.3<4>UD      g9<8,2,4>UD                     { align1 WE_all 1N F@1 };
sel.ge(4)       g23.4<1>F       g23.3<0,1,0>F   g23.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g23.12<1>F      g23.11<0,1,0>F  g23.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g23.8<1>F       g23.7<0,1,0>F   g23.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g56<1>UD        g23.15<0,1,0>UD                 { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g63<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g66UD           g56UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
mov(16)         g24<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g24<1>F         g7<1,1,0>F                      { align1 1H compacted };
and(1)          g67<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g13<2>UD        g24.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shr(1)          g68<1>UD        g67<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g69<1>UW        0x76543210V                     { align1 WE_all 1Q };
sel.ge(8)       g12<2>F         g24<8,4,2>F     g13<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g69.8<1>UW      g69<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g24.1<2>UD      g12<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g70<1>UD        g69<8,8,1>UW    0x00000002UD    { align1 1H };
mov(4)          g15<4>UD        g24.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g16<4>UD        g24.2<8,2,4>UD                  { align1 WE_all 1N };
or(16)          g71<1>UD        g70<8,8,1>UD    0x000006c0UD    { align1 1H I@3 };
sel.ge(4)       g14<4>F         g15<8,2,4>F     g16<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g24.2<4>UD      g14<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g25<4>UD        g24.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g26<4>UD        g24.3<8,2,4>UD                  { align1 WE_all 1N $5.src };
sel.ge(4)       g22<4>F         g25<8,2,4>F     g26<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g24.3<4>UD      g22<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g24.4<1>F       g24.3<0,1,0>F   g24.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g24.12<1>F      g24.11<0,1,0>F  g24.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g24.8<1>F       g24.7<0,1,0>F   g24.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g57<1>UD        g24.15<0,1,0>UD                 { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g68<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g71UD           g57UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $11 };
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g72<1>Q         0x0000000000000080Q             { align1 1H $9.src };
shl(16)         g76<1>Q         g19<4,4,1>Q     0x00000002UD    { align1 1H $10.src };
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g74<1>Q         g1.5<0,1,0>Q    g72<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g78<1>Q         g74<1,1,0>Q     g76<1,1,0>Q     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
and(1)          g80<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g81<1>UD        g80<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g82<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g82.8<1>UW      g82<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g83<1>UD        g82<8,8,1>UW    0x00000002UD    { align1 1H $12.src };
or(16)          g84<1>UD        g83<8,8,1>UD    0x00000580UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g81<0,1,0>UD    0x00000000UD    { align1 WE_all 1N $7.src };
send(16)        g58UD           g84UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g58<1>UD        g18.15<0,1,0>UD g21.15<0,1,0>UD { align1 1H $7.dst };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g78UD           g58UD           0x04040595                0x00000040
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $7 };
mov(16)         g85<1>Q         0x000000000000000cQ             { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g87<1>Q         g78<1,1,0>Q     g85<1,1,0>Q     { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL11         UIP:  LABEL10             { align1 1H };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g90<1>UD        g89<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g91<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g91.8<1>UW      g91<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g92<1>UD        g91<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
or(16)          g93<1>UD        g92<8,8,1>UD    0x00000640UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g90<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g59UD           g93UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
else(16)        JIP:  LABEL10         UIP:  LABEL10             { align1 1H };

LABEL11:
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g59<1>UD        g23.15<0,1,0>UD g24.15<0,1,0>UD { align1 1H $14.dst };

LABEL10:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g87UD           g59UD           0x04040596                0x00000040
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $13 };

LABEL7:
endif(16)       JIP:  LABEL12                                   { align1 1H };

LABEL12:
mov(16)         g25<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H F@4 compacted };
mov(16)         g25<1>F         g34<1,1,0>F                     { align1 1H compacted };
and(1)          g94<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(8)          g28<2>UD        g25.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g95<1>UD        g94<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g96<1>UW        0x76543210V                     { align1 WE_all 1Q };
sel.l(8)        g27<2>F         g25<8,4,2>F     g28<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g96.8<1>UW      g96<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g25.1<2>UD      g27<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g97<1>UD        g96<8,8,1>UW    0x00000002UD    { align1 1H };
mov(4)          g30<4>UD        g25.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g31<4>UD        g25.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(16)          g98<1>UD        g97<8,8,1>UD    0x00000400UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g29<4>F         g30<8,2,4>F     g31<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g25.2<4>UD      g29<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g33<4>UD        g25.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g34<4>UD        g25.3<8,2,4>UD                  { align1 WE_all 1N F@3 };
sel.l(4)        g32<4>F         g33<8,2,4>F     g34<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g25.3<4>UD      g32<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g25.4<1>F       g25.3<0,1,0>F   g25.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g25.12<1>F      g25.11<0,1,0>F  g25.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g25.8<1>F       g25.7<0,1,0>F   g25.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g60<1>UD        g25.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g95<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g98UD           g60UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
mov(16)         g26<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g26<1>F         g36<1,1,0>F                     { align1 1H compacted };
and(1)          g99<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g100<1>UD       g99<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g101<1>UW       0x76543210V                     { align1 WE_all 1Q };
mov(8)          g36<2>UD        g26.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
add(8)          g101.8<1>UW     g101<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@2 };
sel.l(8)        g35<2>F         g26<8,4,2>F     g36<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g102<1>UD       g101<8,8,1>UW   0x00000002UD    { align1 1H };
mov(8)          g26.1<2>UD      g35<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(16)          g103<1>UD       g102<8,8,1>UD   0x00000440UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g42<4>UD        g26.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g43<4>UD        g26.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g37<4>F         g42<8,2,4>F     g43<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g26.2<4>UD      g37<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g45<4>UD        g26.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g46<4>UD        g26.3<8,2,4>UD                  { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g44<4>F         g45<8,2,4>F     g46<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g26.3<4>UD      g44<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g26.4<1>F       g26.3<0,1,0>F   g26.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g26.12<1>F      g26.11<0,1,0>F  g26.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g26.8<1>F       g26.7<0,1,0>F   g26.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g61<1>UD        g26.15<0,1,0>UD                 { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g103UD          g61UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
mov(16)         g27<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g27<1>F         g38<1,1,0>F                     { align1 1H compacted };
and(1)          g104<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g48<2>UD        g27.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g105<1>UD       g104<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g106<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(8)        g47<2>F         g27<8,4,2>F     g48<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g106.8<1>UW     g106<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g27.1<2>UD      g47<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g107<1>UD       g106<8,8,1>UW   0x00000002UD    { align1 1H };
mov(4)          g50<4>UD        g27.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g51<4>UD        g27.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(16)          g108<1>UD       g107<8,8,1>UD   0x00000480UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(4)        g49<4>F         g50<8,2,4>F     g51<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g27.2<4>UD      g49<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g53<4>UD        g27.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g54<4>UD        g27.3<8,2,4>UD                  { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(4)        g52<4>F         g53<8,2,4>F     g54<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g27.3<4>UD      g52<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g27.4<1>F       g27.3<0,1,0>F   g27.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g27.12<1>F      g27.11<0,1,0>F  g27.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g27.8<1>F       g27.7<0,1,0>F   g27.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g62<1>UD        g27.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g105<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g108UD          g62UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
mov(16)         g28<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g28<1>F         g39<1,1,0>F                     { align1 1H compacted };
and(1)          g109<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g56<2>UD        g28.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g110<1>UD       g109<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g111<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(8)       g55<2>F         g28<8,4,2>F     g56<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g111.8<1>UW     g111<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g28.1<2>UD      g55<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g112<1>UD       g111<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g58<4>UD        g28.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g59<4>UD        g28.2<8,2,4>UD                  { align1 WE_all 1N $13.src };
or(16)          g113<1>UD       g112<8,8,1>UD   0x000004c0UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(4)       g57<4>F         g58<8,2,4>F     g59<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g28.2<4>UD      g57<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g61<4>UD        g28.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g62<4>UD        g28.3<8,2,4>UD                  { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.ge(4)       g60<4>F         g61<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g28.3<4>UD      g60<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g28.4<1>F       g28.3<0,1,0>F   g28.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g28.12<1>F      g28.11<0,1,0>F  g28.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g28.8<1>F       g28.7<0,1,0>F   g28.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g63<1>UD        g28.15<0,1,0>UD                 { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g110<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g113UD          g63UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $15 };
mov(16)         g29<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g29<1>F         g40<1,1,0>F                     { align1 1H compacted };
and(1)          g114<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(8)          g64<2>UD        g29.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g115<1>UD       g114<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g116<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(8)       g63<2>F         g29<8,4,2>F     g64<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g116.8<1>UW     g116<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g29.1<2>UD      g63<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g117<1>UD       g116<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(4)          g66<4>UD        g29.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g67<4>UD        g29.2<8,2,4>UD                  { align1 WE_all 1N $8.src };
or(16)          g118<1>UD       g117<8,8,1>UD   0x00000500UD    { align1 1H I@3 };
sel.ge(4)       g65<4>F         g66<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g29.2<4>UD      g65<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g69<4>UD        g29.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g70<4>UD        g29.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(4)       g68<4>F         g69<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g29.3<4>UD      g68<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g29.4<1>F       g29.3<0,1,0>F   g29.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g29.12<1>F      g29.11<0,1,0>F  g29.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g29.8<1>F       g29.7<0,1,0>F   g29.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g64<1>UD        g29.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g115<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g118UD          g64UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
mov(16)         g30<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g30<1>F         g41<1,1,0>F                     { align1 1H compacted };
and(1)          g119<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g72<2>UD        g30.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
shr(1)          g120<1>UD       g119<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g121<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(8)       g71<2>F         g30<8,4,2>F     g72<8,4,2>F     { align1 WE_all 1Q I@3 };
add(8)          g121.8<1>UW     g121<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
mov(8)          g30.1<2>UD      g71<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g122<1>UD       g121<8,8,1>UW   0x00000002UD    { align1 1H };
mov(4)          g74<4>UD        g30.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g75<4>UD        g30.2<8,2,4>UD                  { align1 WE_all 1N };
or(16)          g123<1>UD       g122<8,8,1>UD   0x00000540UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.ge(4)       g73<4>F         g74<8,2,4>F     g75<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g30.2<4>UD      g73<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g77<4>UD        g30.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g78<4>UD        g30.3<8,2,4>UD                  { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.ge(4)       g76<4>F         g77<8,2,4>F     g78<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g30.3<4>UD      g76<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g30.4<1>F       g30.3<0,1,0>F   g30.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g30.12<1>F      g30.11<0,1,0>F  g30.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g30.8<1>F       g30.7<0,1,0>F   g30.8<8,8,1>F   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g65<1>UD        g30.15<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g120<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g123UD          g65UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
shl(16)         g124<1>Q        g19<4,4,1>Q     0x00000002UD    { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g126<1>Q        g1.4<0,1,0>Q    g124<1,1,0>Q    { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
and(1)          g1<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.dst };
shr(1)          g2<1>UD         g1<0,1,0>UD     0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g3<1>UW         0x76543210V                     { align1 WE_all 1Q };
add(8)          g3.8<1>UW       g3<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g4<1>UD         g3<8,8,1>UW     0x00000002UD    { align1 1H };
or(16)          g5<1>UD         g4<8,8,1>UD     0x00000400UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g2<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        g66UD           g5UD            nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
(+f0.0) sel(16) g66<1>UD        g26.15<0,1,0>UD g27.15<0,1,0>UD { align1 1H };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g126UD          g66UD           0x04040595                0x00000040
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g6<1>Q          0x0000000000000010Q             { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g8<1>Q          g126<1,1,0>Q    g6<1,1,0>Q      { align1 1H $3.src compacted };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
and(1)          g10<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g11<1>UD        g10<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g12<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g12.8<1>UW      g12<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g13<1>UD        g12<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g14<1>UD        g13<8,8,1>UD    0x000004c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g11<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g67UD           g14UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>UD       g17<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
(+f0.0) sel(16) g67<1>UD        g29.15<0,1,0>UD g30.15<0,1,0>UD { align1 1H };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g8UD            g67UD           0x04040596                0x00000040
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $5 };

LABEL13:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_primref_procedurals_to_primrefs_code[] = {
    0x80000065, 0x4f058220, 0x02000004, 0xffffffc0,
    0x2c800061, 0x0011000f, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x01140000,
    0xfa004f0c, 0x00380000, 0x800c0061, 0x12054410,
    0x00000000, 0x76543210, 0xb4001a61, 0x00100f46,
    0x800c1a40, 0x12458110, 0x01461205, 0x00080008,
    0x00101a61, 0x0d050230, 0x00444606, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x11050120, 0x00461205, 0x00000000,
    0x00101a69, 0x0f058770, 0x02340d05, 0x00000004,
    0xb4001a61, 0x00101148, 0x00101a61, 0x4a060320,
    0x00340f05, 0x00000000, 0x00101a61, 0x13050230,
    0x00444806, 0x00000000, 0x00101a40, 0x15050660,
    0x06444a06, 0x00461105, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x00101970, 0x00010220,
    0x52461505, 0x00000214, 0x00100065, 0x0b058220,
    0x02000204, 0x00ffffff, 0x00100061, 0x0c050020,
    0x0080020c, 0x00000000, 0x04100022, 0x0001c060,
    0x000007d8, 0x00000748, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x22050770,
    0x000001e4, 0x00000000, 0x80000065, 0x25058220,
    0x02000054, 0xfffffc00, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x16240000,
    0xfb002214, 0x000c0000, 0x80001968, 0x28058220,
    0x02002504, 0x00000004, 0x800c0061, 0x29054410,
    0x00000000, 0x76543210, 0x800c1940, 0x29458110,
    0x01462905, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x2a058120,
    0x02462905, 0x00000002, 0xb4008161, 0x0010161a,
    0x00108141, 0x20010220, 0x01461505, 0x00561806,
    0x00100041, 0x1d050660, 0x01461505, 0x00561806,
    0x00100041, 0x44050660, 0x01461505, 0x0056180e,
    0x00108141, 0x1e050660, 0x01461505, 0x00561906,
    0x00100041, 0x45050660, 0x01461505, 0x0056190e,
    0xb401c161, 0x0012171a, 0xe8000049, 0x1800151c,
    0x00101d40, 0x1d0e0110, 0x01561d0e, 0x00564406,
    0x00101c40, 0x1e0e0110, 0x01561e0e, 0x00564506,
    0xb4001a61, 0x00101d20, 0xac001a40, 0x1e001c1f,
    0xb4001961, 0x00121f20, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38001940, 0x20001a22,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x24240000, 0xfb002214, 0x000c0000,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002804, 0x00000000,
    0x00112331, 0x00020100, 0xfa082a0c, 0x0400240c,
    0x80000065, 0x2b058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x2c058220, 0x02002b04, 0x00000004,
    0x800c0061, 0x2d054410, 0x00000000, 0x76543210,
    0x800c1940, 0x2d458110, 0x01462d05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x2e058120, 0x02462d05, 0x00000002,
    0x00101966, 0x2f058220, 0x02462e05, 0x00000040,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002c04, 0x00000000,
    0x00112431, 0x00020100, 0xfa082f0c, 0x0400250c,
    0x80000065, 0x30058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x31058220, 0x02003004, 0x00000004,
    0x800c0061, 0x32054410, 0x00000000, 0x76543210,
    0x800c1940, 0x32458110, 0x01463205, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x33058120, 0x02463205, 0x00000002,
    0x00101966, 0x34058220, 0x02463305, 0x00000080,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003104, 0x00000000,
    0x00112531, 0x00020100, 0xfa08340c, 0x0400260c,
    0x80000065, 0x35058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x36058220, 0x02003504, 0x00000004,
    0x800c0061, 0x37054410, 0x00000000, 0x76543210,
    0x800c1940, 0x37458110, 0x01463705, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x38058120, 0x02463705, 0x00000002,
    0x00101966, 0x39058220, 0x02463805, 0x000000c0,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003604, 0x00000000,
    0x00112631, 0x00020100, 0xfa08390c, 0x0400270c,
    0x00100061, 0x3a054770, 0x00000000, 0x00000010,
    0x80000065, 0x3f058220, 0x02000054, 0xfffffc00,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x3a00223c, 0x80001a68, 0x40058220,
    0x02003f04, 0x00000004, 0x800c0061, 0x41054410,
    0x00000000, 0x76543210, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c731, 0x3e140000,
    0xfb003c14, 0x00040000, 0x800c1940, 0x41458110,
    0x01464105, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x42058120,
    0x02464105, 0x00000002, 0x00101966, 0x43058220,
    0x02464205, 0x00000100, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004004, 0x00000000, 0x00112831, 0x00020100,
    0xfa08430c, 0x04003e0c, 0x80000065, 0x44058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x45058220,
    0x02004404, 0x00000004, 0x800c0061, 0x46054410,
    0x00000000, 0x76543210, 0x800c1940, 0x46458110,
    0x01464605, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x47058120,
    0x02464605, 0x00000002, 0x00101966, 0x48058220,
    0x02464705, 0x00000140, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004504, 0x00000000, 0x00112931, 0x00020100,
    0xfa08480c, 0x04003f0c, 0x80000065, 0x49058220,
    0x02000054, 0xfffffc00, 0x3298a470, 0x7f80254e,
    0x2018a862, 0x3e00255a, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x2018a562, 0x3f00265b,
    0x20140062, 0x3e00255d, 0x20140062, 0x3f00265e,
    0x80001968, 0x4a058220, 0x02004904, 0x00000004,
    0x800c0061, 0x4b054410, 0x00000000, 0x76543210,
    0x800c1940, 0x4b458110, 0x01464b05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x4c058120, 0x02464b05, 0x00000002,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02004a04, 0x00000000,
    0x00112a31, 0x4d0e0100, 0xfa004c0c, 0x04000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x32988a70, 0x7f804d4f, 0x2018a662, 0x27004d59,
    0x20140062, 0x27004d5c, 0x32980070, 0x7f802651,
    0x32980070, 0x7f803e53, 0xe8001565, 0x4f004e50,
    0x32980070, 0x7f802754, 0x32980070, 0x7f803f56,
    0xe8000965, 0x51005052, 0xe8001265, 0x54005355,
    0xe8000965, 0x56005557, 0xe8501965, 0x57005258,
    0x04101562, 0x05058220, 0x02465c05, 0xff800000,
    0x04101762, 0x06058220, 0x02465d05, 0xff800000,
    0x04101762, 0x07058220, 0x02465e05, 0xff800000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x04101662, 0x02058220, 0x02465905, 0x7f800000,
    0x04100062, 0x03058220, 0x02465a05, 0x7f800000,
    0x04101762, 0x04058220, 0x02465b05, 0x7f800000,
    0x00101f61, 0x5f062650, 0x00465805, 0x00000000,
    0x00101961, 0x09050110, 0x00565f06, 0x00000000,
    0x00100024, 0x0001c060, 0x000000a0, 0x000000a0,
    0x00101a61, 0x09054110, 0x00000000, 0x00000000,
    0x00101d61, 0x04054220, 0x00000000, 0x7f800000,
    0x00101f61, 0x03054220, 0x00000000, 0x7f800000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x02054220, 0x00000000, 0x7f800000,
    0x00100061, 0x07054220, 0x00000000, 0xff800000,
    0x00100061, 0x06054220, 0x00000000, 0xff800000,
    0x00100061, 0x05054220, 0x00000000, 0xff800000,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x00101b65, 0x5f058110, 0x01580905, 0x00010001,
    0x00101961, 0x60050450, 0x00685f06, 0x00000000,
    0x00101970, 0x62058550, 0x25586005, 0x00000000,
    0x00101961, 0x61050560, 0x00466205, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22466105, 0x00000000,
    0x00100061, 0x63050120, 0x00003000, 0x00000000,
    0x00100079, 0x64058620, 0x06461105, 0x00000000,
    0x2c001a4d, 0x00106323, 0x00100070, 0x00018660,
    0x16461105, 0x00000000, 0xe8001b65, 0x64006365,
    0x2c00194d, 0x00106566, 0x04100022, 0x0001c060,
    0x00000058, 0x00000058, 0x00100061, 0x67054770,
    0x00000000, 0x00000024, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x67030169,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cb31, 0x0a0c0000, 0xfb186914, 0x0100230c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xac008b40, 0x0a10666a, 0x00100061, 0x00010660,
    0x20466105, 0x00000000, 0x04100022, 0x0001c060,
    0x000013b0, 0x000013b0, 0x80000065, 0x6b058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x70058220,
    0x02000054, 0xfffffc00, 0x80001a68, 0x6c058220,
    0x02006b04, 0x00000004, 0x800c0061, 0x6d054410,
    0x00000000, 0x76543210, 0x80001b68, 0x71058220,
    0x02007004, 0x00000004, 0x800c0061, 0x72054410,
    0x00000000, 0x76543210, 0x800c1b40, 0x6d458110,
    0x01466d05, 0x00080008, 0x800c1a40, 0x72458110,
    0x01467205, 0x00080008, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x6e058120,
    0x02466d05, 0x00000002, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x73058120,
    0x02467205, 0x00000002, 0x00101a66, 0x6f058220,
    0x02466e05, 0x000002c0, 0x00101a66, 0x74058220,
    0x02467305, 0x00000200, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02006c04, 0x00000000, 0x00112c31, 0x240e0100,
    0xfa006f0c, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007104, 0x00000000, 0x00112d31, 0x00020100,
    0xfa08740c, 0x0400020c, 0x80000065, 0x75058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x76058220,
    0x02007504, 0x00000004, 0x800c0061, 0x77054410,
    0x00000000, 0x76543210, 0x800c1940, 0x77458110,
    0x01467705, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x78058120,
    0x02467705, 0x00000002, 0x00101966, 0x79058220,
    0x02467805, 0x00000240, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007604, 0x00000000, 0x00112e31, 0x00020100,
    0xfa08790c, 0x0400030c, 0x80000065, 0x7a058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x7b058220,
    0x02007a04, 0x00000004, 0x800c0061, 0x7c054410,
    0x00000000, 0x76543210, 0x800c1940, 0x7c458110,
    0x01467c05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x7d058120,
    0x02467c05, 0x00000002, 0x00101966, 0x7e058220,
    0x02467d05, 0x00000280, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007b04, 0x00000000, 0x00112f31, 0x00020100,
    0xfa087e0c, 0x0400040c, 0x80000065, 0x7f058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x08058220,
    0x02007f04, 0x00000004, 0x800c0061, 0x09054410,
    0x00000000, 0x76543210, 0x800c1940, 0x09458110,
    0x01460905, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00108b69, 0x0a058120,
    0x02460905, 0x00000002, 0x00101966, 0x0d058220,
    0x02460a05, 0x000002c0, 0x80008c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000804, 0x00000000, 0x00112031, 0x00020100,
    0xfa080d0c, 0x0400240c, 0x80000065, 0x0e058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x17058220,
    0x02000054, 0xfffffc00, 0x80001a68, 0x0f058220,
    0x02000e04, 0x00000004, 0x800c0061, 0x10054410,
    0x00000000, 0x76543210, 0x80001b68, 0x18058220,
    0x02001704, 0x00000004, 0x800c0061, 0x19054410,
    0x00000000, 0x76543210, 0x800c1b40, 0x10458110,
    0x01461005, 0x00080008, 0x800c1a40, 0x19458110,
    0x01461905, 0x00080008, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x12058120,
    0x02461005, 0x00000002, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x1a058120,
    0x02461905, 0x00000002, 0x00101a66, 0x16058220,
    0x02461205, 0x000003c0, 0x00101a66, 0x1b058220,
    0x02461a05, 0x00000300, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000f04, 0x00000000, 0x00112131, 0x2b0e0100,
    0xfa00160c, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001804, 0x00000000, 0x00112231, 0x00020100,
    0xfa081b0c, 0x0400050c, 0x80000065, 0x1c058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x1d058220,
    0x02001c04, 0x00000004, 0x800c0061, 0x1e054410,
    0x00000000, 0x76543210, 0x800c1940, 0x1e458110,
    0x01461e05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x1f058120,
    0x02461e05, 0x00000002, 0x00101966, 0x20058220,
    0x02461f05, 0x00000340, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001d04, 0x00000000, 0x00112331, 0x00020100,
    0xfa08200c, 0x0400060c, 0x80000065, 0x21058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x22058220,
    0x02002104, 0x00000004, 0x800cab61, 0x23054410,
    0x00000000, 0x76543210, 0x800c1940, 0x23458110,
    0x01462305, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010a069, 0x24058120,
    0x02462305, 0x00000002, 0x00100966, 0x25058220,
    0x02462405, 0x00000380, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002204, 0x00000000, 0x00112431, 0x00020100,
    0xfa08250c, 0x0400070c, 0x80001465, 0x26058220,
    0x02000054, 0xfffffc00, 0x80000968, 0x27058220,
    0x02002604, 0x00000004, 0x800c0061, 0x28054410,
    0x00000000, 0x76543210, 0x800c1940, 0x28458110,
    0x01462805, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x29058120,
    0x02462805, 0x00000002, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x00101966, 0x2a058220,
    0x02462905, 0x000003c0, 0x80008101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002704, 0x00000000, 0x00112331, 0x00020100,
    0xfa082a0c, 0x04002b0c, 0x0010a369, 0x2b058660,
    0x02460c05, 0x0000001d, 0x80000065, 0x2c058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x31058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x36058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x3b058220,
    0x02000054, 0xfffffc00, 0x80001c68, 0x2d058220,
    0x02002c04, 0x00000004, 0x800c0061, 0x2e054410,
    0x00000000, 0x76543210, 0x80001d68, 0x32058220,
    0x02003104, 0x00000004, 0x800c0061, 0x33054410,
    0x00000000, 0x76543210, 0x80001e68, 0x37058220,
    0x02003604, 0x00000004, 0x800c0061, 0x38054410,
    0x00000000, 0x76543210, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80001f68, 0x3c058220,
    0x02003b04, 0x00000004, 0x800ca761, 0x3d054410,
    0x00000000, 0x76543210, 0x800c1f40, 0x2e458110,
    0x01462e05, 0x00080008, 0x800c1e40, 0x33458110,
    0x01463305, 0x00080008, 0x800c1d40, 0x38458110,
    0x01463805, 0x00080008, 0x800c1c40, 0x3d458110,
    0x01463d05, 0x00080008, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a469, 0x2f058120,
    0x02462e05, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a569, 0x34058120,
    0x02463305, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a669, 0x39058120,
    0x02463805, 0x00000002, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x3e058120,
    0x02463d05, 0x00000002, 0x00101c66, 0x30058220,
    0x02462f05, 0x00000200, 0x00101c66, 0x35058220,
    0x02463405, 0x00000240, 0x00101c66, 0x3a058220,
    0x02463905, 0x00000280, 0x00100966, 0x3f058220,
    0x02463e05, 0x00000200, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002d04, 0x00000000, 0x00112531, 0x2c0e0100,
    0xfa00300c, 0x04000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003204, 0x00000000, 0x00112631, 0x2d0e0100,
    0xfa00350c, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003704, 0x00000000, 0x00112731, 0x2e0e0100,
    0xfa003a0c, 0x04000000, 0x80008501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003c04, 0x00000000, 0x00112831, 0x00020100,
    0xfa083f0c, 0x04002c0c, 0x80000065, 0x40058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x41058220,
    0x02004004, 0x00000004, 0x800c0061, 0x42054410,
    0x00000000, 0x76543210, 0x800c1940, 0x42458110,
    0x01464205, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010a869, 0x43058120,
    0x02464205, 0x00000002, 0x00101966, 0x44058220,
    0x02464305, 0x00000240, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004104, 0x00000000, 0x00112931, 0x00020100,
    0xfa08440c, 0x04002d0c, 0x80000065, 0x45058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x46058220,
    0x02004504, 0x00000004, 0x800c0061, 0x47054410,
    0x00000000, 0x76543210, 0x800c1940, 0x47458110,
    0x01464705, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010a969, 0x48058120,
    0x02464705, 0x00000002, 0x00101966, 0x49058220,
    0x02464805, 0x00000280, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004604, 0x00000000, 0x00112a31, 0x00020100,
    0xfa08490c, 0x04002e0c, 0x80000065, 0x4a058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x4b058220,
    0x02004a04, 0x00000004, 0x800caa61, 0x4c054410,
    0x00000000, 0x76543210, 0x800c1940, 0x4c458110,
    0x01464c05, 0x00080008, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x4d058120,
    0x02464c05, 0x00000002, 0x00101966, 0x4e058220,
    0x02464d05, 0x000002c0, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004b04, 0x00000000, 0x00112b31, 0x00020100,
    0xfa084e0c, 0x04000b0c, 0xe8000066, 0x2b001532,
    0x8000a065, 0x4f058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x54058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x59058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x5e058220, 0x02000054, 0xfffffc00,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x2c001d61, 0x0010320b, 0x80001d68, 0x50058220,
    0x02004f04, 0x00000004, 0x800c0061, 0x51054410,
    0x00000000, 0x76543210, 0x80001e68, 0x55058220,
    0x02005404, 0x00000004, 0x800c0061, 0x56054410,
    0x00000000, 0x76543210, 0x80001f68, 0x5a058220,
    0x02005904, 0x00000004, 0x800c0061, 0x5b054410,
    0x00000000, 0x76543210, 0x80001f68, 0x5f058220,
    0x02005e04, 0x00000004, 0x800c0061, 0x60054410,
    0x00000000, 0x76543210, 0x800c1f40, 0x51458110,
    0x01465105, 0x00080008, 0x800c1e40, 0x56458110,
    0x01465605, 0x00080008, 0x800c1d40, 0x5b458110,
    0x01465b05, 0x00080008, 0x800c1c40, 0x60458110,
    0x01466005, 0x00080008, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x52058120,
    0x02465105, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x57058120,
    0x02465605, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x5c058120,
    0x02465b05, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x61058120,
    0x02466005, 0x00000002, 0x00101c66, 0x53058220,
    0x02465205, 0x00000300, 0x00101c66, 0x58058220,
    0x02465705, 0x00000340, 0x00101c66, 0x5d058220,
    0x02465c05, 0x00000380, 0x00101c66, 0x62058220,
    0x02466105, 0x00000300, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005004, 0x00000000, 0x00112c31, 0x2f0e0100,
    0xfa00530c, 0x04000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005504, 0x00000000, 0x00112d31, 0x300e0100,
    0xfa00580c, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005a04, 0x00000000, 0x00112e31, 0x310e0100,
    0xfa005d0c, 0x04000000, 0x2c008c61, 0x00102f08,
    0x2c008d61, 0x00103009, 0x2c008e61, 0x0010310a,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02005f04, 0x00000000,
    0x00112431, 0x00020100, 0xfa08620c, 0x04002f0c,
    0x80000065, 0x63058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x64058220, 0x02006304, 0x00000004,
    0x800c0061, 0x65054410, 0x00000000, 0x76543210,
    0x800c1940, 0x65458110, 0x01466505, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x66058120, 0x02466505, 0x00000002,
    0x00101966, 0x67058220, 0x02466605, 0x00000340,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006404, 0x00000000,
    0x00112f31, 0x00020100, 0xfa08670c, 0x0400300c,
    0x80000065, 0x68058220, 0x02000054, 0xfffffc00,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80001968, 0x69058220, 0x02006804, 0x00000004,
    0x800c0061, 0x6b054410, 0x00000000, 0x76543210,
    0x800c1940, 0x6b458110, 0x01466b05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x6c058120, 0x02466b05, 0x00000002,
    0x00101966, 0x6d058220, 0x02466c05, 0x00000380,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006904, 0x00000000,
    0x00112031, 0x00020100, 0xfa086d0c, 0x0400310c,
    0x80000065, 0x6e058220, 0x02000054, 0xfffffc00,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80001968, 0x6f058220, 0x02006e04, 0x00000004,
    0x800c0061, 0x70054410, 0x00000000, 0x76543210,
    0x800c1940, 0x70458110, 0x01467005, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x71058120, 0x02467005, 0x00000002,
    0x00101966, 0x72058220, 0x02467105, 0x000003c0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006f04, 0x00000000,
    0x00112131, 0x00020100, 0xfa08720c, 0x0400320c,
    0x80000065, 0x78058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x7d058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x0e058220, 0x02000054, 0xfffffc00,
    0x8000a165, 0x16058220, 0x02000054, 0xfffffc00,
    0xb4000061, 0x00106a60, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d68, 0x79058220,
    0x02007804, 0x00000004, 0x800c0061, 0x7a054410,
    0x00000000, 0x76543210, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80001e68, 0x7e058220,
    0x02007d04, 0x00000004, 0x800c0061, 0x7f054410,
    0x00000000, 0x76543210, 0x80001f68, 0x0f058220,
    0x02000e04, 0x00000004, 0x800c0061, 0x10054410,
    0x00000000, 0x76543210, 0x80001f68, 0x17058220,
    0x02001604, 0x00000004, 0x800c0061, 0x18054410,
    0x00000000, 0x76543210, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x00101f61, 0x73050230,
    0x00446006, 0x00000000, 0x800c1f40, 0x7a458110,
    0x01467a05, 0x00080008, 0x800c1f40, 0x7f458110,
    0x01467f05, 0x00080008, 0x800c1e40, 0x10458110,
    0x01461005, 0x00080008, 0x800c1d40, 0x18458110,
    0x01461805, 0x00080008, 0x00101d69, 0x75058770,
    0x02347305, 0x00000005, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x7b058120,
    0x02467a05, 0x00000002, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x0c058120,
    0x02467f05, 0x00000002, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x12058120,
    0x02461005, 0x00000002, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x19058120,
    0x02461805, 0x00000002, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x38801d40, 0x75080177,
    0x00101d66, 0x7c058220, 0x02467b05, 0x00000200,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00101d66, 0x0d058220, 0x02460c05, 0x00000240,
    0x00101d66, 0x15058220, 0x02461205, 0x00000280,
    0x00101d66, 0x1a058220, 0x02461905, 0x000002c0,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007904, 0x00000000,
    0x00112231, 0x330e0100, 0xfa007c0c, 0x04000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007e04, 0x00000000,
    0x00112331, 0x340e0100, 0xfa000d0c, 0x04000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02000f04, 0x00000000,
    0x00112431, 0x350e0100, 0xfa00150c, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001704, 0x00000000,
    0x00112531, 0x360e0100, 0xfa001a0c, 0x04000000,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x00000000, 0xfb087714, 0x000c3324,
    0x0010a261, 0x1b054770, 0x00000000, 0x00000010,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x1b00771d, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cb31, 0x00000000,
    0xfb081d14, 0x000c0824, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x2000ad40, 0x0500021e,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x2000ae40, 0x0600031f, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x2000af40, 0x07000420,
    0x20140070, 0x02000521, 0x78901f61, 0x7f800010,
    0x28000061, 0x00100210, 0x8000a365, 0x2a058220,
    0x02000054, 0xfffffc00, 0x04101562, 0x22058220,
    0x02461e05, 0x7f800000, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x800c1161, 0x62060220,
    0x00441016, 0x00000000, 0x80001b68, 0x2b058220,
    0x02002a04, 0x00000004, 0x800ca861, 0x2c054410,
    0x00000000, 0x76543210, 0x2014ab70, 0x03000623,
    0x800c1b62, 0x61060aa0, 0x5a441006, 0x00446206,
    0x800c1940, 0x2c458110, 0x01462c05, 0x00080008,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x04101662, 0x24058220, 0x02461f05, 0x7f800000,
    0x800c0961, 0x10160220, 0x00446106, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x0010a969, 0x2d058120, 0x02462c05, 0x00000002,
    0x2014a470, 0x04000725, 0x80081a61, 0x64070220,
    0x00421017, 0x00000000, 0x80080061, 0x65070220,
    0x00421027, 0x00000000, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x00101b66, 0x2e058220,
    0x02462d05, 0x00000580, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x26058220,
    0x02462005, 0x7f800000, 0x80081b62, 0x63070aa0,
    0x5a426407, 0x00426507, 0x00101670, 0x00018660,
    0x26462105, 0x00000000, 0x80081161, 0x10270220,
    0x00426307, 0x00000000, 0x04100062, 0x27058220,
    0x02461e05, 0xff800000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80081a61, 0x67070220,
    0x00421017, 0x00000000, 0x80080061, 0x68070220,
    0x00421037, 0x00000000, 0x00101470, 0x00018660,
    0x26462305, 0x00000000, 0x80081a62, 0x66070aa0,
    0x5a426707, 0x00426807, 0x04100062, 0x28058220,
    0x02461f05, 0xff800000, 0x80081161, 0x10370220,
    0x00426607, 0x00000000, 0x00101370, 0x00018660,
    0x26462505, 0x00000000, 0x80081a62, 0x10450aa0,
    0x5a001034, 0x00341045, 0x80081a62, 0x10c50aa0,
    0x5a0010b4, 0x003410c5, 0x04100062, 0x29058220,
    0x02462005, 0xff800000, 0x800c1162, 0x10850aa0,
    0x5a001074, 0x00461085, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x0010a561, 0x34050220,
    0x000010f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002b04, 0x00000000, 0x00112631, 0x00020100,
    0xfa082e0c, 0x0400340c, 0x78900061, 0x7f800012,
    0x28000061, 0x00100312, 0x8000a465, 0x2f058220,
    0x02000054, 0xfffffc00, 0x800c1161, 0x6a060220,
    0x00441216, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x30058220,
    0x02002f04, 0x00000004, 0x800ca061, 0x31054410,
    0x00000000, 0x76543210, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x800c1b62, 0x69060aa0,
    0x5a441206, 0x00446a06, 0x800c1940, 0x31458110,
    0x01463105, 0x00080008, 0x800c0961, 0x12160220,
    0x00446906, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a169, 0x32058120,
    0x02463105, 0x00000002, 0x80081a61, 0x6c070220,
    0x00421217, 0x00000000, 0x8008a061, 0x6d070220,
    0x00421227, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x00101b66, 0x33058220,
    0x02463205, 0x000005c0, 0x80081a62, 0x6b070aa0,
    0x5a426c07, 0x00426d07, 0x80081161, 0x12270220,
    0x00426b07, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x80081961, 0x6f070220,
    0x00421217, 0x00000000, 0x80080061, 0x70070220,
    0x00421237, 0x00000000, 0x80081962, 0x6e070aa0,
    0x5a426f07, 0x00427007, 0x80081161, 0x12370220,
    0x00426e07, 0x00000000, 0x80081962, 0x12450aa0,
    0x5a001234, 0x00341245, 0x80081962, 0x12c50aa0,
    0x5a0012b4, 0x003412c5, 0x800c1162, 0x12850aa0,
    0x5a001274, 0x00461285, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x35050220,
    0x000012f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003004, 0x00000000, 0x00112731, 0x00020100,
    0xfa08330c, 0x0400350c, 0x7890a461, 0x7f800015,
    0x28000061, 0x00100415, 0x8000a665, 0x34058220,
    0x02000054, 0xfffffc00, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x800c1161, 0x72060220,
    0x00441516, 0x00000000, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x35058220,
    0x02003404, 0x00000004, 0x800ca561, 0x36054410,
    0x00000000, 0x76543210, 0x800c1b62, 0x71060aa0,
    0x5a441506, 0x00447206, 0x800c1940, 0x36458110,
    0x01463605, 0x00080008, 0x800c0961, 0x15160220,
    0x00447106, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x37058120,
    0x02463605, 0x00000002, 0x80081a61, 0x74070220,
    0x00421517, 0x00000000, 0x80080061, 0x75070220,
    0x00421527, 0x00000000, 0x00101b66, 0x38058220,
    0x02463705, 0x00000600, 0x80081a62, 0x73070aa0,
    0x5a427407, 0x00427507, 0x80081161, 0x15270220,
    0x00427307, 0x00000000, 0x80081961, 0x77070220,
    0x00421517, 0x00000000, 0x80080061, 0x78070220,
    0x00421537, 0x00000000, 0x80081962, 0x76070aa0,
    0x5a427707, 0x00427807, 0x80081161, 0x15370220,
    0x00427607, 0x00000000, 0x80081962, 0x15450aa0,
    0x5a001534, 0x00341545, 0x80081962, 0x15c50aa0,
    0x5a0015b4, 0x003415c5, 0x800c1162, 0x15850aa0,
    0x5a001574, 0x00461585, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x0010a561, 0x36050220,
    0x000015f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003504, 0x00000000, 0x00112831, 0x00020100,
    0xfa08380c, 0x0400360c, 0x7890a161, 0xff800016,
    0x28000061, 0x00100516, 0x8000a665, 0x39058220,
    0x02000054, 0xfffffc00, 0x800c1161, 0x7a060220,
    0x00441616, 0x00000000, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x3a058220,
    0x02003904, 0x00000004, 0x800c0061, 0x3b054410,
    0x00000000, 0x76543210, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x800c1b62, 0x79060aa0,
    0x4a441606, 0x00447a06, 0x800c1940, 0x3b458110,
    0x01463b05, 0x00080008, 0x800c0961, 0x16160220,
    0x00447906, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a769, 0x3c058120,
    0x02463b05, 0x00000002, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80081a61, 0x7c070220,
    0x00421617, 0x00000000, 0x80080061, 0x7d070220,
    0x00421627, 0x00000000, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x00101b66, 0x3d058220,
    0x02463c05, 0x00000640, 0x80081a62, 0x7b070aa0,
    0x4a427c07, 0x00427d07, 0x80081161, 0x16270220,
    0x00427b07, 0x00000000, 0x80081961, 0x7f070220,
    0x00421617, 0x00000000, 0x80080061, 0x02070220,
    0x00421637, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80081962, 0x7e070aa0,
    0x4a427f07, 0x00420207, 0x80081161, 0x16370220,
    0x00427e07, 0x00000000, 0x80081962, 0x16450aa0,
    0x4a001634, 0x00341645, 0x80081962, 0x16c50aa0,
    0x4a0016b4, 0x003416c5, 0x800c1162, 0x16850aa0,
    0x4a001674, 0x00461685, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x37050220,
    0x000016f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003a04, 0x00000000, 0x00112931, 0x00020100,
    0xfa083d0c, 0x0400370c, 0x78900061, 0xff800017,
    0x28000061, 0x00100617, 0x80000065, 0x3e058220,
    0x02000054, 0xfffffc00, 0x800c1161, 0x04060220,
    0x00441716, 0x00000000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x3f058220,
    0x02003e04, 0x00000004, 0x800c0061, 0x40054410,
    0x00000000, 0x76543210, 0x800c1b62, 0x03060aa0,
    0x4a441706, 0x00440406, 0x800c1940, 0x40458110,
    0x01464005, 0x00080008, 0x800c0961, 0x17160220,
    0x00440306, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x41058120,
    0x02464005, 0x00000002, 0x80080a61, 0x06070220,
    0x00421717, 0x00000000, 0x8008ab61, 0x08070220,
    0x00421727, 0x00000000, 0x00101b66, 0x42058220,
    0x02464105, 0x00000680, 0x80081a62, 0x05070aa0,
    0x4a420607, 0x00420807, 0x80081161, 0x17270220,
    0x00420507, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80088b61, 0x0a070220,
    0x00421717, 0x00000000, 0x8008ab61, 0x0b070220,
    0x00421737, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x80081962, 0x09070aa0,
    0x4a420a07, 0x00420b07, 0x80081161, 0x17370220,
    0x00420907, 0x00000000, 0x80081962, 0x17450aa0,
    0x4a001734, 0x00341745, 0x80081962, 0x17c50aa0,
    0x4a0017b4, 0x003417c5, 0x800c1162, 0x17850aa0,
    0x4a001774, 0x00461785, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x0010a861, 0x38050220,
    0x000017f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003f04, 0x00000000, 0x00112a31, 0x00020100,
    0xfa08420c, 0x0400380c, 0x78900061, 0xff800018,
    0x28000061, 0x00100718, 0x8000a865, 0x43058220,
    0x02000054, 0xfffffc00, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x800c1161, 0x0d060220,
    0x00441816, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x44058220,
    0x02004304, 0x00000004, 0x800c0061, 0x45054410,
    0x00000000, 0x76543210, 0x800c1b62, 0x0c060aa0,
    0x4a441806, 0x00440d06, 0x800c1940, 0x45458110,
    0x01464505, 0x00080008, 0x800c0961, 0x18160220,
    0x00440c06, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x46058120,
    0x02464505, 0x00000002, 0x80081a61, 0x0f070220,
    0x00421817, 0x00000000, 0x80080061, 0x10070220,
    0x00421827, 0x00000000, 0x00101b66, 0x47058220,
    0x02464605, 0x000006c0, 0x80081a62, 0x0e070aa0,
    0x4a420f07, 0x00421007, 0x80081161, 0x18270220,
    0x00420e07, 0x00000000, 0x80081961, 0x19070220,
    0x00421817, 0x00000000, 0x8008a561, 0x1a070220,
    0x00421837, 0x00000000, 0x80081962, 0x16070aa0,
    0x4a421907, 0x00421a07, 0x80081161, 0x18370220,
    0x00421607, 0x00000000, 0x80081962, 0x18450aa0,
    0x4a001834, 0x00341845, 0x80081962, 0x18c50aa0,
    0x4a0018b4, 0x003418c5, 0x800c1162, 0x18850aa0,
    0x4a001874, 0x00461885, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x0010a661, 0x39050220,
    0x000018f4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004404, 0x00000000, 0x00112b31, 0x00020100,
    0xfa08470c, 0x0400390c, 0x00100070, 0x00018220,
    0x52461105, 0x00000003, 0x04100022, 0x0001c060,
    0x00000328, 0x00000328, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a961, 0x48054770,
    0x00000000, 0x00000080, 0x0010aa69, 0x4c058770,
    0x02341305, 0x00000002, 0x00100070, 0x00018220,
    0x52461105, 0x00000001, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x4807014a,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x4c004a4e, 0x04100022, 0x0001c060,
    0x000000e0, 0x000000c0, 0x80000065, 0x50058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x51058220,
    0x02005004, 0x00000004, 0x800c0061, 0x52054410,
    0x00000000, 0x76543210, 0x800c1940, 0x52458110,
    0x01465205, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ac69, 0x53058120,
    0x02465205, 0x00000002, 0x00101966, 0x54058220,
    0x02465305, 0x00000580, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000a766, 0x10118220,
    0x02005104, 0x00000000, 0x00112731, 0x3a0e0100,
    0xfa00540c, 0x04000000, 0x00100024, 0x0001c060,
    0x00000030, 0x00000030, 0x00100070, 0x00018220,
    0x52461105, 0x00000002, 0x04108762, 0x3a050220,
    0x020012f4, 0x000015f4, 0x00100025, 0x00004600,
    0x00000000, 0x000001a8, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c731, 0x00000000,
    0xfb2a4e14, 0x01003a0c, 0x00100061, 0x55054770,
    0x00000000, 0x0000000c, 0x00100070, 0x00018220,
    0x52461105, 0x00000001, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x55004e57,
    0x04100022, 0x0001c060, 0x000000f0, 0x000000d0,
    0x80000065, 0x59058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x5a058220, 0x02005904, 0x00000004,
    0x800c0061, 0x5b054410, 0x00000000, 0x76543210,
    0x800c1940, 0x5b458110, 0x01465b05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x5c058120, 0x02465b05, 0x00000002,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x00101966, 0x5d058220, 0x02465c05, 0x00000640,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02005a04, 0x00000000,
    0x00112e31, 0x3b0e0100, 0xfa005d0c, 0x04000000,
    0x00100024, 0x0001c060, 0x00000030, 0x00000030,
    0x00100070, 0x00018220, 0x52461105, 0x00000002,
    0x04108e62, 0x3b050220, 0x020017f4, 0x000018f4,
    0x00100025, 0x00004600, 0x00000000, 0x00000040,
    0x80008e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010cd31, 0x00000000, 0xfb2c5714, 0x01003b0c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x78901461, 0x7f800019, 0x28000061, 0x00102219,
    0x80000065, 0x5e058220, 0x02000054, 0xfffffc00,
    0x800c1161, 0x1c060220, 0x00441916, 0x00000000,
    0x80001a68, 0x5f058220, 0x02005e04, 0x00000004,
    0x800c0061, 0x60054410, 0x00000000, 0x76543210,
    0x800c1b62, 0x1b060aa0, 0x5a441906, 0x00441c06,
    0x800c1940, 0x60458110, 0x01466005, 0x00080008,
    0x800c0961, 0x19160220, 0x00441b06, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x61058120, 0x02466005, 0x00000002,
    0x80081a61, 0x1e070220, 0x00421917, 0x00000000,
    0x80080061, 0x1f070220, 0x00421927, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100066, 0x62058220, 0x02466105, 0x00000400,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80081a62, 0x1d070aa0, 0x5a421e07, 0x00421f07,
    0x80081161, 0x19270220, 0x00421d07, 0x00000000,
    0x80081961, 0x21070220, 0x00421917, 0x00000000,
    0x80081361, 0x22070220, 0x00421937, 0x00000000,
    0x80081962, 0x20070aa0, 0x5a422107, 0x00422207,
    0x80081161, 0x19370220, 0x00422007, 0x00000000,
    0x80081962, 0x19450aa0, 0x5a001934, 0x00341945,
    0x80081962, 0x19c50aa0, 0x5a0019b4, 0x003419c5,
    0x800c1162, 0x19850aa0, 0x5a001974, 0x00461985,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x3c050220, 0x000019f4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02005f04, 0x00000000,
    0x00112c31, 0x00020100, 0xfa08620c, 0x04003c0c,
    0x78900061, 0x7f80001a, 0x28000061, 0x0010241a,
    0x80000065, 0x63058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x64058220, 0x02006304, 0x00000004,
    0x800c0061, 0x65054410, 0x00000000, 0x76543210,
    0x800c1161, 0x24060220, 0x00441a16, 0x00000000,
    0x800c1a40, 0x65458110, 0x01466505, 0x00080008,
    0x800c1a62, 0x23060aa0, 0x5a441a06, 0x00442406,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x66058120, 0x02466505, 0x00000002,
    0x800c0961, 0x1a160220, 0x00442306, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100066, 0x67058220, 0x02466605, 0x00000440,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80081a61, 0x2a070220, 0x00421a17, 0x00000000,
    0x80080061, 0x2b070220, 0x00421a27, 0x00000000,
    0x80081962, 0x25070aa0, 0x5a422a07, 0x00422b07,
    0x80081161, 0x1a270220, 0x00422507, 0x00000000,
    0x80081961, 0x2d070220, 0x00421a17, 0x00000000,
    0x8008a661, 0x2e070220, 0x00421a37, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x2c070aa0, 0x5a422d07, 0x00422e07,
    0x80081161, 0x1a370220, 0x00422c07, 0x00000000,
    0x80081962, 0x1a450aa0, 0x5a001a34, 0x00341a45,
    0x80081962, 0x1ac50aa0, 0x5a001ab4, 0x00341ac5,
    0x800c1162, 0x1a850aa0, 0x5a001a74, 0x00461a85,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x0010a961, 0x3d050220, 0x00001af4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006404, 0x00000000,
    0x00112d31, 0x00020100, 0xfa08670c, 0x04003d0c,
    0x78900061, 0x7f80001b, 0x28000061, 0x0010261b,
    0x80000065, 0x68058220, 0x02000054, 0xfffffc00,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1161, 0x30060220, 0x00441b16, 0x00000000,
    0x80001a68, 0x69058220, 0x02006804, 0x00000004,
    0x800c0061, 0x6a054410, 0x00000000, 0x76543210,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x2f060aa0, 0x5a441b06, 0x00443006,
    0x800c1940, 0x6a458110, 0x01466a05, 0x00080008,
    0x800c0961, 0x1b160220, 0x00442f06, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x6b058120, 0x02466a05, 0x00000002,
    0x80081a61, 0x32070220, 0x00421b17, 0x00000000,
    0x8008a761, 0x33070220, 0x00421b27, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100066, 0x6c058220, 0x02466b05, 0x00000480,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80081a62, 0x31070aa0, 0x5a423207, 0x00423307,
    0x80081161, 0x1b270220, 0x00423107, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80081961, 0x35070220, 0x00421b17, 0x00000000,
    0x8008a861, 0x36070220, 0x00421b37, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x34070aa0, 0x5a423507, 0x00423607,
    0x80081161, 0x1b370220, 0x00423407, 0x00000000,
    0x80081962, 0x1b450aa0, 0x5a001b34, 0x00341b45,
    0x80081962, 0x1bc50aa0, 0x5a001bb4, 0x00341bc5,
    0x800c1162, 0x1b850aa0, 0x5a001b74, 0x00461b85,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x3e050220, 0x00001bf4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006904, 0x00000000,
    0x00112e31, 0x00020100, 0xfa086c0c, 0x04003e0c,
    0x78900061, 0xff80001c, 0x28000061, 0x0010271c,
    0x80000065, 0x6d058220, 0x02000054, 0xfffffc00,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1161, 0x38060220, 0x00441c16, 0x00000000,
    0x80001a68, 0x6e058220, 0x02006d04, 0x00000004,
    0x800c0061, 0x6f054410, 0x00000000, 0x76543210,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x37060aa0, 0x4a441c06, 0x00443806,
    0x800c1940, 0x6f458110, 0x01466f05, 0x00080008,
    0x800c0961, 0x1c160220, 0x00443706, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x70058120, 0x02466f05, 0x00000002,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80081a61, 0x3a070220, 0x00421c17, 0x00000000,
    0x8008ad61, 0x3b070220, 0x00421c27, 0x00000000,
    0x00101b66, 0x71058220, 0x02467005, 0x000004c0,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80081a62, 0x39070aa0, 0x4a423a07, 0x00423b07,
    0x80081161, 0x1c270220, 0x00423907, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80081961, 0x3d070220, 0x00421c17, 0x00000000,
    0x8008ae61, 0x3e070220, 0x00421c37, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x3c070aa0, 0x4a423d07, 0x00423e07,
    0x80081161, 0x1c370220, 0x00423c07, 0x00000000,
    0x80081962, 0x1c450aa0, 0x4a001c34, 0x00341c45,
    0x80081962, 0x1cc50aa0, 0x4a001cb4, 0x00341cc5,
    0x800c1162, 0x1c850aa0, 0x4a001c74, 0x00461c85,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x0010a861, 0x3f050220, 0x00001cf4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006e04, 0x00000000,
    0x00112f31, 0x00020100, 0xfa08710c, 0x04003f0c,
    0x78900061, 0xff80001d, 0x28000061, 0x0010281d,
    0x80000065, 0x72058220, 0x02000054, 0xfffffc00,
    0x800c1161, 0x40060220, 0x00441d16, 0x00000000,
    0x80001a68, 0x73058220, 0x02007204, 0x00000004,
    0x800c0061, 0x74054410, 0x00000000, 0x76543210,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x3f060aa0, 0x4a441d06, 0x00444006,
    0x800c1940, 0x74458110, 0x01467405, 0x00080008,
    0x800c0961, 0x1d160220, 0x00443f06, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x75058120, 0x02467405, 0x00000002,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80081a61, 0x42070220, 0x00421d17, 0x00000000,
    0x8008a861, 0x43070220, 0x00421d27, 0x00000000,
    0x00101b66, 0x76058220, 0x02467505, 0x00000500,
    0x80081a62, 0x41070aa0, 0x4a424207, 0x00424307,
    0x80081161, 0x1d270220, 0x00424107, 0x00000000,
    0x80081961, 0x45070220, 0x00421d17, 0x00000000,
    0x80080061, 0x46070220, 0x00421d37, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x44070aa0, 0x4a424507, 0x00424607,
    0x80081161, 0x1d370220, 0x00424407, 0x00000000,
    0x80081962, 0x1d450aa0, 0x4a001d34, 0x00341d45,
    0x80081962, 0x1dc50aa0, 0x4a001db4, 0x00341dc5,
    0x800c1162, 0x1d850aa0, 0x4a001d74, 0x00461d85,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x40050220, 0x00001df4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007304, 0x00000000,
    0x00112031, 0x00020100, 0xfa08760c, 0x0400400c,
    0x78900061, 0xff80001e, 0x28000061, 0x0010291e,
    0x80000065, 0x77058220, 0x02000054, 0xfffffc00,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x800c1161, 0x48060220, 0x00441e16, 0x00000000,
    0x80001a68, 0x78058220, 0x02007704, 0x00000004,
    0x800c0061, 0x79054410, 0x00000000, 0x76543210,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x47060aa0, 0x4a441e06, 0x00444806,
    0x800c1940, 0x79458110, 0x01467905, 0x00080008,
    0x800c0961, 0x1e160220, 0x00444706, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x7a058120, 0x02467905, 0x00000002,
    0x80081a61, 0x4a070220, 0x00421e17, 0x00000000,
    0x80080061, 0x4b070220, 0x00421e27, 0x00000000,
    0x00101b66, 0x7b058220, 0x02467a05, 0x00000540,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80081a62, 0x49070aa0, 0x4a424a07, 0x00424b07,
    0x80081161, 0x1e270220, 0x00424907, 0x00000000,
    0x80081961, 0x4d070220, 0x00421e17, 0x00000000,
    0x8008ab61, 0x4e070220, 0x00421e37, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x4c070aa0, 0x4a424d07, 0x00424e07,
    0x80081161, 0x1e370220, 0x00424c07, 0x00000000,
    0x80081962, 0x1e450aa0, 0x4a001e34, 0x00341e45,
    0x80081962, 0x1ec50aa0, 0x4a001eb4, 0x00341ec5,
    0x800c1162, 0x1e850aa0, 0x4a001e74, 0x00461e85,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x41050220, 0x00001ef4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007804, 0x00000000,
    0x00112131, 0x00020100, 0xfa087b0c, 0x0400410c,
    0x00100070, 0x00018220, 0x52461105, 0x00000003,
    0x04100022, 0x0001c060, 0x000002f0, 0x000002f0,
    0x00100069, 0x7c058770, 0x02341305, 0x00000002,
    0x00100070, 0x00018220, 0x52461105, 0x00000001,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x7c03017e, 0x04100022, 0x0001c060,
    0x000000f0, 0x000000c0, 0x80008065, 0x01058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x02058220,
    0x02000104, 0x00000004, 0x800c0061, 0x03054410,
    0x00000000, 0x76543210, 0x800c1940, 0x03458110,
    0x01460305, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x04058120,
    0x02460305, 0x00000002, 0x00101966, 0x05058220,
    0x02460405, 0x00000400, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000204, 0x00000000, 0x00112231, 0x420e0100,
    0xfa00050c, 0x04000000, 0x00100024, 0x0001c060,
    0x00000040, 0x00000040, 0x00100070, 0x00018220,
    0x52461105, 0x00000002, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x42050220,
    0x02001af4, 0x00001bf4, 0x00100025, 0x00004600,
    0x00000000, 0x000001a8, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x00000000,
    0xfb2a7e14, 0x0100420c, 0x00100061, 0x06054770,
    0x00000000, 0x00000010, 0x00100070, 0x00018220,
    0x52461105, 0x00000001, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x3800a340, 0x06007e08,
    0x04100022, 0x0001c060, 0x000000f0, 0x000000c0,
    0x80000065, 0x0a058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x0b058220, 0x02000a04, 0x00000004,
    0x800c0061, 0x0c054410, 0x00000000, 0x76543210,
    0x800c1940, 0x0c458110, 0x01460c05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x0d058120, 0x02460c05, 0x00000002,
    0x00101966, 0x0e058220, 0x02460d05, 0x000004c0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02000b04, 0x00000000,
    0x00112431, 0x430e0100, 0xfa000e0c, 0x04000000,
    0x00100024, 0x0001c060, 0x00000040, 0x00000040,
    0x00100070, 0x00018220, 0x52461105, 0x00000002,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x43050220, 0x02001df4, 0x00001ef4,
    0x00100025, 0x00004600, 0x00000000, 0x00000040,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x00000000, 0xfb2c0814, 0x0100430c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_primref_procedurals_to_primrefs = {
   .prog_data = {
      .base.nr_params = 18,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 4,
      .base.total_scratch = 2048,
      .base.total_shared = 0,
      .base.program_size = 15520,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_primref_procedurals_to_primrefs_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_primref_procedurals_to_primrefs_printfs,
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
      .push.cross_thread.dwords = 18,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 40,
   .arg_count = 6,
   .args = gfx20_bvh_build_primref_procedurals_to_primrefs_args,
   .code = gfx20_bvh_build_primref_procedurals_to_primrefs_code,
};
const char *gfx20_bvh_build_primref_procedurals_to_primrefs_sha1 = "4af0aa68600f9ac2fab78945069a948068102cd5";

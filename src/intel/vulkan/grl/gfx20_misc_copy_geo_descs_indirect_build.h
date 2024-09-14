#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_geo_descs_indirect_build_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_geo_descs_indirect_build_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_geo_descs_indirect_build_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g19<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g17<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g19UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g3<1>UW         0x76543210V                     { align1 WE_all 1Q };
mov(16)         g13<2>UD        g17<1,1,0>UD                    { align1 1H I@2 compacted };
add(8)          g3.8<1>UW       g3<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@2 };
mov(16)         g5<1>UQ         g13<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g2<1>UD         g3<8,8,1>UW                     { align1 1H };
shl(16)         g7<1>Q          g5<4,4,1>Q      0x00000004UD    { align1 1H I@2 };
and(16)         g4<1>UD         g2<8,8,1>UD     0x0000000fUD    { align1 1H I@2 };
mov(16)         g15<2>UD        g7<4,4,1>UQ                     { align1 1H I@2 };
add(16)         g8<1>D          g4<8,8,1>D      g15<8,4,2>D     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(16)  null<1>UD       g8<8,8,1>UD     g1.14<0,1,0>UD  { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mul(16)         acc0<1>UD       g8<8,8,1>UD     0x0038UW        { align1 1H };
mul(16)         g12<1>D         g8<1,1,0>D      56W             { align1 1H compacted };
and(1)          g18<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(16)         g16<2>UD        g8<1,1,0>UD                     { align1 1H compacted };
mach(16)        g11<1>UD        g8<8,8,1>UD     0x00000038UD    { align1 1H };
mov(16)         g13<2>UD        g12<1,1,0>UD                    { align1 1H I@4 compacted };
shr(1)          g21<1>UD        g18<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g22<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g9<1>UQ         g16<8,4,2>UD                    { align1 1H I@5 };
mov(16)         g13.1<2>UD      g11<1,1,0>UD                    { align1 1H I@4 compacted };
add(8)          g22.8<1>UW      g22<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@3 };
add(16)         g15<1>Q         g1.5<0,1,0>Q    g13<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g23<1>UD        g22<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g17UD           g15UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g21<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g23UD           g17UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
and(1)          g24<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g25<1>UD        g24<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g26<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g26.8<1>UW      g26<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g27<1>UD        g26<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g28<1>UD        g27<8,8,1>UD    0x00000040UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g25<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g28UD           g18UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $3 };
and(1)          g29<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g30<1>UD        g29<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g31<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g31.8<1>UW      g31<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g32<1>UD        g31<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g33<1>UD        g32<8,8,1>UD    0x00000080UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g30<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g33UD           g19UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
and(1)          g34<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g35<1>UD        g34<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g36<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g36.8<1>UW      g36<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g37<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g38<1>UD        g37<8,8,1>UD    0x000000c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g35<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g38UD           g20UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
mov(16)         g39<1>Q         0x0000000000000010Q             { align1 1H };
and(1)          g44<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g41<1>Q         g15<1,1,0>Q     g39<1,1,0>Q     { align1 1H I@2 compacted };
shr(1)          g47<1>UD        g44<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g48<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g43UD           g41UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
add(8)          g48.8<1>UW      g48<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g49<1>UD        g48<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g50<1>UD        g49<8,8,1>UD    0x00000100UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g47<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g50UD           g43UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
and(1)          g51<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g52<1>UD        g51<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g53<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g53.8<1>UW      g53<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g54<1>UD        g53<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g55<1>UD        g54<8,8,1>UD    0x00000140UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g52<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g55UD           g44UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
and(1)          g56<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g57<1>UD        g56<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g58<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g58.8<1>UW      g58<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g59<1>UD        g58<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g60<1>UD        g59<8,8,1>UD    0x00000180UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g57<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g60UD           g45UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
and(1)          g61<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g62<1>UD        g61<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g63<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g63.8<1>UW      g63<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g64<1>UD        g63<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g65<1>UD        g64<8,8,1>UD    0x000001c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g62<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g46UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
mov(16)         g66<1>Q         0x0000000000000020Q             { align1 1H };
and(1)          g71<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
add(16)         g68<1>Q         g15<1,1,0>Q     g66<1,1,0>Q     { align1 1H I@2 compacted };
shr(1)          g74<1>UD        g71<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g75<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g70UD           g68UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
add(8)          g75.8<1>UW      g75<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g76<1>UD        g75<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g77<1>UD        g76<8,8,1>UD    0x00000200UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g74<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g77UD           g70UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
and(1)          g78<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g79<1>UD        g78<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g80<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g80.8<1>UW      g80<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g81<1>UD        g80<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g82<1>UD        g81<8,8,1>UD    0x00000240UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g79<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g82UD           g71UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $11 };
and(1)          g83<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g84<1>UD        g83<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g85<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g85.8<1>UW      g85<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g86<1>UD        g85<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g87<1>UD        g86<8,8,1>UD    0x00000280UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g84<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g87UD           g72UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
and(1)          g88<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g89<1>UD        g88<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g90<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g90.8<1>UW      g90<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g91<1>UD        g90<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g92<1>UD        g91<8,8,1>UD    0x000002c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g89<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g92UD           g73UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
mov(16)         g93<1>Q         0x0000000000000030Q             { align1 1H };
and(1)          g98<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
add(16)         g95<1>Q         g15<1,1,0>Q     g93<1,1,0>Q     { align1 1H I@2 compacted };
shr(1)          g99<1>UD        g98<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g100<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g97UD           g95UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
add(8)          g100.8<1>UW     g100<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g101<1>UD       g100<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g102<1>UD       g101<8,8,1>UD   0x00000300UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g99<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g102UD          g97UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
and(1)          g103<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g104<1>UD       g103<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g105<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g105.8<1>UW     g105<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g106<1>UD       g105<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g107<1>UD       g106<8,8,1>UD   0x00000340UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g104<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g107UD          g98UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
shl(16)         g108<1>Q        g9<4,4,1>Q      0x00000004UD    { align1 1H };
mov.nz.f0.0(16) null<1>UD       g97<32,8,4>UB                   { align1 1H $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g110<1>Q        g1.6<0,1,0>Q    g108<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g112UD          g110UD          nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g17<2>UD        g113<1,1,0>UD                   { align1 1H $15.dst compacted };
mov(16)         g116<1>UQ       g17<8,4,2>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
and(1)          g118<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g119<1>UD       g118<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g120<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g120.8<1>UW     g120<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g121<1>UD       g120<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g122<1>UD       g121<8,8,1>UD   0x00000100UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g119<0,1,0>UD   0x00000000UD    { align1 WE_all 1N $15.dst };
send(16)        nullUD          g122UD          g112UD          0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $15 };
and(1)          g123<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g2<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g11<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g124<1>UD       g123<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g125<1>UW       0x76543210V                     { align1 WE_all 1Q };
shr(1)          g3<1>UD         g2<0,1,0>UD     0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g4<1>UW         0x76543210V                     { align1 WE_all 1Q };
shr(1)          g12<1>UD        g11<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g15<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g125.8<1>UW     g125<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g4.8<1>UW       g4<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@4 };
add(8)          g15.8<1>UW      g15<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g126<1>UD       g125<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g5<1>UD         g4<8,8,1>UW     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g16<1>UD        g15<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g124<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g127UD          g126UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
or(16)          g6<1>UD         g5<8,8,1>UD     0x00000040UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g3<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        g7UD            g6UD            nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
mov(16)         g8<2>UD         g127<1,1,0>UD                   { align1 1H $0.dst compacted };
mov(16)         g8.1<2>UD       g7<1,1,0>UD                     { align1 1H @1 $1.dst compacted };
add(16)         g10<1>Q         g8<1,1,0>Q      g116<1,1,0>Q    { align1 1H I@1 compacted };
mov(16)         g18<1>UD        g10<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g12<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g16UD           g18UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
and(1)          g17<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(16)         g22<1>UD        g10.1<8,4,2>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shr(1)          g18<1>UD        g17<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g19<1>UW        0x76543210V                     { align1 WE_all 1Q $0.src };
add(8)          g19.8<1>UW      g19<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g20<1>UD        g19<8,8,1>UW    0x00000002UD    { align1 1H $0.src };
or(16)          g21<1>UD        g20<8,8,1>UD    0x00000040UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g18<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g21UD           g22UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $3 };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
and(1)          g22<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mul(16)         g92<1>D         g112<1,1,0>D    3W              { align1 1H $15.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shr(1)          g23<1>UD        g22<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g24<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g24.8<1>UW      g24<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g25<1>UD        g24<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g26<1>UD        g25<8,8,1>UD    0x00000280UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g23<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g27UD           g26UD           nullUD          0x42100900                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d8u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
mov.nz.f0.0(16) null<1>UD       g27<32,8,4>UB                   { align1 1H $8.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
and(1)          g28<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $3.src };
shr(1)          g29<1>UD        g28<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g30<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g30.8<1>UW      g30<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g31<1>UD        g30<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g32<1>UD        g31<8,8,1>UD    0x00000200UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g29<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g32UD           g92UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
and(1)          g33<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
and(1)          g41<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
and(1)          g50<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
shr(1)          g34<1>UD        g33<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g35<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shr(1)          g42<1>UD        g41<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g43<1>UW        0x76543210V                     { align1 WE_all 1Q $5.src };
shr(1)          g51<1>UD        g50<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g52<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g35.8<1>UW      g35<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g43.8<1>UW      g43<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
add(8)          g52.8<1>UW      g52<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g36<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g44<1>UD        g43<8,8,1>UW    0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g53<1>UD        g52<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g37<1>UD        g36<8,8,1>UD    0x00000080UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
or(16)          g45<1>UD        g44<8,8,1>UD    0x000000c0UD    { align1 1H I@3 };
or(16)          g54<1>UD        g53<8,8,1>UD    0x00000080UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g34<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g38UD           g37UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g42<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g46UD           g45UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
mov(16)         g47<2>UD        g38<1,1,0>UD                    { align1 1H $4.dst compacted };
mov(16)         g47.1<2>UD      g46<1,1,0>UD                    { align1 1H @1 $7.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g49<1>Q         g47<1,1,0>Q     g116<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g23<1>UD        g49<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g51<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g54UD           g23UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
and(1)          g55<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
mov(16)         g24<1>UD        g49.1<8,4,2>UD                  { align1 1H };
shr(1)          g56<1>UD        g55<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g57<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g57.8<1>UW      g57<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g58<1>UD        g57<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g59<1>UD        g58<8,8,1>UD    0x000000c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g56<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g59UD           g24UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
and(1)          g60<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
and(1)          g68<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
and(1)          g80<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g86<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g98<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
shr(1)          g61<1>UD        g60<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g62<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shr(1)          g69<1>UD        g68<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g70<1>UW        0x76543210V                     { align1 WE_all 1Q $10.src };
shr(1)          g81<1>UD        g80<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g82<1>UW        0x76543210V                     { align1 WE_all 1Q $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shr(1)          g87<1>UD        g86<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g88<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g99<1>UD        g98<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g100<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g62.8<1>UW      g62<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g70.8<1>UW      g70<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g82.8<1>UW      g82<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g88.8<1>UW      g88<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g100.8<1>UW     g100<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g63<1>UD        g62<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g71<1>UD        g70<8,8,1>UW    0x00000002UD    { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g83<1>UD        g82<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g89<1>UD        g88<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g101<1>UD       g100<8,8,1>UW   0x00000002UD    { align1 1H };
or(16)          g64<1>UD        g63<8,8,1>UD    0x00000180UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
or(16)          g72<1>UD        g71<8,8,1>UD    0x000001c0UD    { align1 1H I@5 };
or(16)          g84<1>UD        g83<8,8,1>UD    0x00000100UD    { align1 1H I@5 };
or(16)          g90<1>UD        g89<8,8,1>UD    0x00000140UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
or(16)          g102<1>UD       g101<8,8,1>UD   0x00000100UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g61<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g65UD           g64UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g69<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g73UD           g72UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g81<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g85UD           g84UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g87<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g91UD           g90UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mul(16)         acc0<1>UD       g114<8,8,1>UD   g65<16,8,2>UW   { align1 1H $15.dst };
mul(16)         g75<1>D         g114<8,8,1>D    g65<16,8,2>UW   { align1 1H };
mul(16)         g9<1>D          g114<8,8,1>D    g65.1<16,8,2>UW { align1 1H };
mul(16)         g76<1>D         g114<8,8,1>D    g73<16,8,2>UW   { align1 1H $12.dst };
mul(16)         g10<1>D         g114<8,8,1>D    g73.1<16,8,2>UW { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g95<2>UD        g85<1,1,0>UD                    { align1 1H $7.dst compacted };
mach(16)        g74<1>UD        g114<1,1,0>UD   g65<1,1,0>UD    { align1 1H compacted };
add(16)         g75.1<2>UW      g75.1<16,8,2>UW g9<16,8,2>UW    { align1 1H I@5 };
add(16)         g76.1<2>UW      g76.1<16,8,2>UW g10<16,8,2>UW   { align1 1H I@4 };
mov(16)         g95.1<2>UD      g91<1,1,0>UD                    { align1 1H @4 $8.dst compacted };
mov(16)         g78<2>UD        g75<1,1,0>UD                    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g77<1>D         g74<1,1,0>D     g76<1,1,0>D     { align1 1H I@3 compacted };
mov(16)         g78.1<2>UD      g77<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g97<1>Q         g95<1,1,0>Q     g78<1,1,0>Q     { align1 1H I@1 compacted };
mov(16)         g25<1>UD        g97<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g99<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g102UD          g25UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
and(1)          g103<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(16)         g26<1>UD        g97.1<8,4,2>UD                  { align1 1H $8.src };
shr(1)          g104<1>UD       g103<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g105<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g105.8<1>UW     g105<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g106<1>UD       g105<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(16)          g107<1>UD       g106<8,8,1>UD   0x00000140UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g104<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g107UD          g26UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
and(1)          g108<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g109<1>UD       g108<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g110<1>UW       0x76543210V                     { align1 WE_all 1Q $15.src };
add(8)          g110.8<1>UW     g110<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g111<1>UD       g110<8,8,1>UW   0x00000002UD    { align1 1H $15.src };
or(16)          g118<1>UD       g111<8,8,1>UD   0x00000240UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g109<0,1,0>UD   0x00000000UD    { align1 WE_all 1N $13.src };
send(16)        nullUD          g118UD          g92UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
and(1)          g119<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g125<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g12<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g20<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
and(1)          g29<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g120<1>UD       g119<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g121<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shr(1)          g126<1>UD       g125<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g127<1>UW       0x76543210V                     { align1 WE_all 1Q };
shr(1)          g15<1>UD        g12<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g16<1>UW        0x76543210V                     { align1 WE_all 1Q $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
shr(1)          g21<1>UD        g20<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g22<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g30<1>UD        g29<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g31<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g121.8<1>UW     g121<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g127.8<1>UW     g127<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g16.8<1>UW      g16<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g22.8<1>UW      g22<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g31.8<1>UW      g31<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g122<1>UD       g121<8,8,1>UW   0x00000002UD    { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g2<1>UD         g127<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g17<1>UD        g16<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g23<1>UD        g22<8,8,1>UW    0x00000002UD    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
shl(16)         g32<1>UD        g31<8,8,1>UW    0x00000002UD    { align1 1H $13.src };
or(16)          g123<1>UD       g122<8,8,1>UD   0x00000180UD    { align1 1H I@5 };
or(16)          g3<1>UD         g2<8,8,1>UD     0x000001c0UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
or(16)          g18<1>UD        g17<8,8,1>UD    0x00000100UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
or(16)          g24<1>UD        g23<8,8,1>UD    0x00000140UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g33<1>UD        g32<8,8,1>UD    0x00000100UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g120<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g124UD          g123UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g126<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g4UD            g3UD            nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g15<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g19UD           g18UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g21<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g25UD           g24UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mul(16)         acc0<1>UD       g114<8,8,1>UD   g124<16,8,2>UW  { align1 1H $15.dst };
mul(16)         g6<1>D          g114<8,8,1>D    g124<16,8,2>UW  { align1 1H $1.src };
mul(16)         g11<1>D         g114<8,8,1>D    g124.1<16,8,2>UW { align1 1H };
mul(16)         g7<1>D          g114<8,8,1>D    g4<16,8,2>UW    { align1 1H $10.dst };
mul(16)         g12<1>D         g114<8,8,1>D    g4.1<16,8,2>UW  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g26<2>UD        g19<1,1,0>UD                    { align1 1H $2.dst compacted };
mach(16)        g5<1>UD         g114<1,1,0>UD   g124<1,1,0>UD   { align1 1H compacted };
add(16)         g6.1<2>UW       g6.1<16,8,2>UW  g11<16,8,2>UW   { align1 1H I@5 };
add(16)         g7.1<2>UW       g7.1<16,8,2>UW  g12<16,8,2>UW   { align1 1H I@4 };
mov(16)         g26.1<2>UD      g25<1,1,0>UD                    { align1 1H @4 $5.dst compacted };
mov(16)         g9<2>UD         g6<1,1,0>UD                     { align1 1H I@3 compacted };
add(16)         g8<1>D          g5<1,1,0>D      g7<1,1,0>D      { align1 1H I@3 compacted };
mov(16)         g9.1<2>UD       g8<1,1,0>UD                     { align1 1H I@1 compacted };
add(16)         g11<1>Q         g116<1,1,0>Q    g9<1,1,0>Q      { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g28<1>Q         g26<1,1,0>Q     g11<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g95<1>UD        g28<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g30<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g33UD           g95UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
and(1)          g34<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(16)         g96<1>UD        g28.1<8,4,2>UD                  { align1 1H $0.src };
shr(1)          g35<1>UD        g34<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g36<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g36.8<1>UW      g36<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g37<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g38<1>UD        g37<8,8,1>UD    0x00000140UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g35<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g38UD           g96UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };

LABEL3:
endif(16)       JIP:  LABEL1                                    { align1 1H };
and(1)          g41<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
and(1)          g46<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shr(1)          g42<1>UD        g41<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g43<1>UW        0x76543210V                     { align1 WE_all 1Q $5.src };
shr(1)          g47<1>UD        g46<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g48<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g43.8<1>UW      g43<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@3 };
add(8)          g48.8<1>UW      g48<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g44<1>UD        g43<8,8,1>UW    0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g49<1>UD        g48<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g42<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g45UD           g44UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
or(16)          g50<1>UD        g49<8,8,1>UD    0x00000040UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g47<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g51UD           g50UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
mov(16)         g52<2>UD        g45<1,1,0>UD                    { align1 1H $6.dst compacted };
mov(16)         g52.1<2>UD      g51<1,1,0>UD                    { align1 1H @1 $5.dst compacted };
or.nz.f0.0(16)  null<1>UD       g45<8,8,1>UD    g51<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
and(1)          g57<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g18<2>UD        g115<1,1,0>UD                   { align1 1H $15.dst compacted };
shr(1)          g58<1>UD        g57<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g59<1>UW        0x76543210V                     { align1 WE_all 1Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g54<1>UQ        g18<8,4,2>UD                    { align1 1H I@3 };
add(8)          g59.8<1>UW      g59<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g56<1>Q         g52<1,1,0>Q     g54<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g60<1>UD        g59<8,8,1>UW    0x00000002UD    { align1 1H };
mov(16)         g97<1>UD        g56<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g58<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g60UD           g97UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
and(1)          g61<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(16)         g98<1>UD        g56.1<8,4,2>UD                  { align1 1H $8.src };
shr(1)          g62<1>UD        g61<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g63<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g63.8<1>UW      g63<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g64<1>UD        g63<8,8,1>UW    0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(16)          g65<1>UD        g64<8,8,1>UD    0x00000040UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g62<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g98UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };

LABEL5:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g68<1>Q         g1.4<0,1,0>Q    g13<1,1,0>Q     { align1 1H compacted };
and(1)          g70<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
and(1)          g74<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g79<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g84<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shr(1)          g71<1>UD        g70<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g72<1>UW        0x76543210V                     { align1 WE_all 1Q $12.src };
shr(1)          g75<1>UD        g74<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g76<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g80<1>UD        g79<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g81<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g85<1>UD        g84<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g86<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g72.8<1>UW      g72<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g76.8<1>UW      g76<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g81.8<1>UW      g81<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g86.8<1>UW      g86<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g73<1>UD        g72<8,8,1>UW    0x00000002UD    { align1 1H $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g77<1>UD        g76<8,8,1>UW    0x00000002UD    { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g82<1>UD        g81<8,8,1>UW    0x00000002UD    { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g87<1>UD        g86<8,8,1>UW    0x00000002UD    { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g71<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g99UD           g73UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $11 };
or(16)          g78<1>UD        g77<8,8,1>UD    0x00000040UD    { align1 1H I@3 };
or(16)          g83<1>UD        g82<8,8,1>UD    0x00000080UD    { align1 1H I@3 };
or(16)          g88<1>UD        g87<8,8,1>UD    0x000000c0UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g75<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g100UD          g78UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g80<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g101UD          g83UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g85<0,1,0>UD    0x00000000UD    { align1 WE_all 1N $14.src };
send(16)        g102UD          g88UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
send(16)        nullUD          g68UD           g99UD           0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $15 };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
and(1)          g101<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $15.src };
and(1)          g106<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
add(16)         g111<1>Q        g68<1,1,0>Q     g39<1,1,0>Q     { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shr(1)          g90<1>UD        g89<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g91<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shr(1)          g97<1>UD        g96<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g98<1>UW        0x76543210V                     { align1 WE_all 1Q $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
shr(1)          g102<1>UD       g101<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g103<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shr(1)          g107<1>UD       g106<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g108<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g91.8<1>UW      g91<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g98.8<1>UW      g98<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g103.8<1>UW     g103<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g108.8<1>UW     g108<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g92<1>UD        g91<8,8,1>UW    0x00000002UD    { align1 1H $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g99<1>UD        g98<8,8,1>UW    0x00000002UD    { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g104<1>UD       g103<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g109<1>UD       g108<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g95<1>UD        g92<8,8,1>UD    0x00000100UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
or(16)          g100<1>UD       g99<8,8,1>UD    0x00000140UD    { align1 1H I@4 };
or(16)          g105<1>UD       g104<8,8,1>UD   0x00000180UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
or(16)          g110<1>UD       g109<8,8,1>UD   0x000001c0UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g90<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g113UD          g95UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g114UD          g100UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g102<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g115UD          g105UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g107<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g116UD          g110UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
send(16)        nullUD          g111UD          g113UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $4 };
and(1)          g112<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g122<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $15.src };
and(1)          g127<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
add(16)         g5<1>Q          g68<1,1,0>Q     g66<1,1,0>Q     { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shr(1)          g113<1>UD       g112<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g114<1>UW       0x76543210V                     { align1 WE_all 1Q $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shr(1)          g118<1>UD       g117<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g119<1>UW       0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shr(1)          g123<1>UD       g122<0,1,0>UD   0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g124<1>UW       0x76543210V                     { align1 WE_all 1Q };
shr(1)          g1<1>UD         g127<0,1,0>UD   0x00000004UD    { align1 WE_all 1N @7 $0.dst };
mov(8)          g2<1>UW         0x76543210V                     { align1 WE_all 1Q };
add(8)          g114.8<1>UW     g114<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g119.8<1>UW     g119<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g124.8<1>UW     g124<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g2.8<1>UW       g2<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g115<1>UD       g114<8,8,1>UW   0x00000002UD    { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g120<1>UD       g119<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g125<1>UD       g124<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g3<1>UD         g2<8,8,1>UW     0x00000002UD    { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g116<1>UD       g115<8,8,1>UD   0x00000200UD    { align1 1H I@4 };
or(16)          g121<1>UD       g120<8,8,1>UD   0x00000240UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
or(16)          g126<1>UD       g125<8,8,1>UD   0x00000280UD    { align1 1H I@4 };
or(16)          g4<1>UD         g3<8,8,1>UD     0x000002c0UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g113<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g7UD            g116UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g118<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g8UD            g121UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g123<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g9UD            g126UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g1<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        g10UD           g4UD            nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
send(16)        nullUD          g5UD            g7UD            0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $9 };
and(1)          g6<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
and(1)          g11<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
add(16)         g16<1>Q         g68<1,1,0>Q     g93<1,1,0>Q     { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shr(1)          g7<1>UD         g6<0,1,0>UD     0x00000004UD    { align1 WE_all 1N I@3 };
mov(8)          g8<1>UW         0x76543210V                     { align1 WE_all 1Q $9.src };
shr(1)          g12<1>UD        g11<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g13<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g8.8<1>UW       g8<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@3 };
add(8)          g13.8<1>UW      g13<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g9<1>UD         g8<8,8,1>UW     0x00000002UD    { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g14<1>UD        g13<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
or(16)          g10<1>UD        g9<8,8,1>UD     0x00000300UD    { align1 1H I@2 };
or(16)          g15<1>UD        g14<8,8,1>UD    0x00000340UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g7<0,1,0>UD     0x00000000UD    { align1 WE_all 1N };
send(16)        g8UD            g10UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g12<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g9UD            g15UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
send(16)        nullUD          g16UD           g8UD            0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };

LABEL0:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H $7.src compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_geo_descs_indirect_build_code[] = {
    0x80000065, 0x13058220, 0x02000004, 0xffffffc0,
    0x2c800061, 0x00110011, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00130c, 0x00340000, 0x800c0061, 0x03054410,
    0x00000000, 0x76543210, 0xb4001a61, 0x0010110d,
    0x800c1a40, 0x03458110, 0x01460305, 0x00080008,
    0x00101a61, 0x05050230, 0x00440d06, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x02050120, 0x00460305, 0x00000000,
    0x00101a69, 0x07058770, 0x02340505, 0x00000004,
    0x00101a65, 0x04058220, 0x02460205, 0x0000000f,
    0x00101a61, 0x0f060320, 0x00340705, 0x00000000,
    0x00101940, 0x08050660, 0x06460405, 0x00440f06,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00101970, 0x00010220, 0x52460805, 0x000001e4,
    0x04100022, 0x0001c060, 0x00002d80, 0x00002d80,
    0x00100041, 0x20018220, 0x01460805, 0x00380038,
    0x68000041, 0x0380080c, 0x80000065, 0x12058220,
    0x02000054, 0xfffffc00, 0xb4000061, 0x00100810,
    0x00100049, 0x0b058220, 0x02460805, 0x00000038,
    0xb4001c61, 0x00100c0d, 0x80001c68, 0x15058220,
    0x02001204, 0x00000004, 0x800c0061, 0x16054410,
    0x00000000, 0x76543210, 0x00101d61, 0x09050230,
    0x00441006, 0x00000000, 0xb4001c61, 0x00120b0d,
    0x800c1b40, 0x16458110, 0x01461605, 0x00080008,
    0x38801a40, 0x0d07010f, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x17058120,
    0x02461605, 0x00000002, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x11240000,
    0xfb000f14, 0x000c0000, 0x80008101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001504, 0x00000000, 0x00112231, 0x00020100,
    0xfa08170c, 0x0400110c, 0x80000065, 0x18058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x19058220,
    0x02001804, 0x00000004, 0x800c0061, 0x1a054410,
    0x00000000, 0x76543210, 0x800c1940, 0x1a458110,
    0x01461a05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x1b058120,
    0x02461a05, 0x00000002, 0x00101966, 0x1c058220,
    0x02461b05, 0x00000040, 0x80008101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001904, 0x00000000, 0x00112331, 0x00020100,
    0xfa081c0c, 0x0400120c, 0x80000065, 0x1d058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x1e058220,
    0x02001d04, 0x00000004, 0x800c0061, 0x1f054410,
    0x00000000, 0x76543210, 0x800c1940, 0x1f458110,
    0x01461f05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x20058120,
    0x02461f05, 0x00000002, 0x00101966, 0x21058220,
    0x02462005, 0x00000080, 0x80008101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001e04, 0x00000000, 0x00112031, 0x00020100,
    0xfa08210c, 0x0400130c, 0x80000065, 0x22058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x23058220,
    0x02002204, 0x00000004, 0x800c0061, 0x24054410,
    0x00000000, 0x76543210, 0x800c1940, 0x24458110,
    0x01462405, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x25058120,
    0x02462405, 0x00000002, 0x00101966, 0x26058220,
    0x02462505, 0x000000c0, 0x80008101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002304, 0x00000000, 0x00112031, 0x00020100,
    0xfa08260c, 0x0400140c, 0x00100061, 0x27054770,
    0x00000000, 0x00000010, 0x80000065, 0x2c058220,
    0x02000054, 0xfffffc00, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x27000f29,
    0x80001a68, 0x2f058220, 0x02002c04, 0x00000004,
    0x800c0061, 0x30054410, 0x00000000, 0x76543210,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x2b240000, 0xfb002914, 0x000c0000,
    0x800c1940, 0x30458110, 0x01463005, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x31058120, 0x02463005, 0x00000002,
    0x00101966, 0x32058220, 0x02463105, 0x00000100,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002f04, 0x00000000,
    0x00112531, 0x00020100, 0xfa08320c, 0x04002b0c,
    0x80000065, 0x33058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x34058220, 0x02003304, 0x00000004,
    0x800c0061, 0x35054410, 0x00000000, 0x76543210,
    0x800c1940, 0x35458110, 0x01463505, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x36058120, 0x02463505, 0x00000002,
    0x00101966, 0x37058220, 0x02463605, 0x00000140,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003404, 0x00000000,
    0x00112631, 0x00020100, 0xfa08370c, 0x04002c0c,
    0x80000065, 0x38058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x39058220, 0x02003804, 0x00000004,
    0x800c0061, 0x3a054410, 0x00000000, 0x76543210,
    0x800c1940, 0x3a458110, 0x01463a05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x3b058120, 0x02463a05, 0x00000002,
    0x00101966, 0x3c058220, 0x02463b05, 0x00000180,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003904, 0x00000000,
    0x00112731, 0x00020100, 0xfa083c0c, 0x04002d0c,
    0x80000065, 0x3d058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x3e058220, 0x02003d04, 0x00000004,
    0x800c0061, 0x3f054410, 0x00000000, 0x76543210,
    0x800c1940, 0x3f458110, 0x01463f05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x40058120, 0x02463f05, 0x00000002,
    0x00101966, 0x41058220, 0x02464005, 0x000001c0,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003e04, 0x00000000,
    0x00112831, 0x00020100, 0xfa08410c, 0x04002e0c,
    0x00100061, 0x42054770, 0x00000000, 0x00000020,
    0x80000065, 0x47058220, 0x02000054, 0xfffffc00,
    0x38001a40, 0x42000f44, 0x80001a68, 0x4a058220,
    0x02004704, 0x00000004, 0x800c0061, 0x4b054410,
    0x00000000, 0x76543210, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x46240000,
    0xfb004414, 0x000c0000, 0x800c1940, 0x4b458110,
    0x01464b05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x4c058120,
    0x02464b05, 0x00000002, 0x00101966, 0x4d058220,
    0x02464c05, 0x00000200, 0x80008901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004a04, 0x00000000, 0x00112a31, 0x00020100,
    0xfa084d0c, 0x0400460c, 0x80000065, 0x4e058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x4f058220,
    0x02004e04, 0x00000004, 0x800c0061, 0x50054410,
    0x00000000, 0x76543210, 0x800c1940, 0x50458110,
    0x01465005, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x51058120,
    0x02465005, 0x00000002, 0x00101966, 0x52058220,
    0x02465105, 0x00000240, 0x80008901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004f04, 0x00000000, 0x00112b31, 0x00020100,
    0xfa08520c, 0x0400470c, 0x80000065, 0x53058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x54058220,
    0x02005304, 0x00000004, 0x800c0061, 0x55054410,
    0x00000000, 0x76543210, 0x800c1940, 0x55458110,
    0x01465505, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x56058120,
    0x02465505, 0x00000002, 0x00101966, 0x57058220,
    0x02465605, 0x00000280, 0x80008901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005404, 0x00000000, 0x00112c31, 0x00020100,
    0xfa08570c, 0x0400480c, 0x80000065, 0x58058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x59058220,
    0x02005804, 0x00000004, 0x800c0061, 0x5a054410,
    0x00000000, 0x76543210, 0x800c1940, 0x5a458110,
    0x01465a05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x5b058120,
    0x02465a05, 0x00000002, 0x00101966, 0x5c058220,
    0x02465b05, 0x000002c0, 0x80008901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005904, 0x00000000, 0x00112d31, 0x00020100,
    0xfa085c0c, 0x0400490c, 0x00100061, 0x5d054770,
    0x00000000, 0x00000030, 0x80000065, 0x62058220,
    0x02000054, 0xfffffc00, 0x38001a40, 0x5d000f5f,
    0x80001a68, 0x63058220, 0x02006204, 0x00000004,
    0x800c0061, 0x64054410, 0x00000000, 0x76543210,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c031, 0x61140000, 0xfb005f14, 0x00040000,
    0x800c1940, 0x64458110, 0x01466405, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x65058120, 0x02466405, 0x00000002,
    0x00101966, 0x66058220, 0x02466505, 0x00000300,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006304, 0x00000000,
    0x00112e31, 0x00020100, 0xfa08660c, 0x0400610c,
    0x80000065, 0x67058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x68058220, 0x02006704, 0x00000004,
    0x800c0061, 0x69054410, 0x00000000, 0x76543210,
    0x800c1940, 0x69458110, 0x01466905, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x6a058120, 0x02466905, 0x00000002,
    0x00101966, 0x6b058220, 0x02466a05, 0x00000340,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006804, 0x00000000,
    0x00112831, 0x00020100, 0xfa086b0c, 0x0400620c,
    0x00100069, 0x6c058770, 0x02340905, 0x00000004,
    0x0010ae61, 0x00010020, 0x20666107, 0x00000000,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x6c08016e, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cf31, 0x70240000,
    0xfb006e14, 0x000c0000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0xb4008f61, 0x00107111,
    0x00101961, 0x74050230, 0x00441106, 0x00000000,
    0x04100022, 0x0001c060, 0x000016e0, 0x00000368,
    0x80000065, 0x76058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x77058220, 0x02007604, 0x00000004,
    0x800c0061, 0x78054410, 0x00000000, 0x76543210,
    0x800c1940, 0x78458110, 0x01467805, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x79058120, 0x02467805, 0x00000002,
    0x00101966, 0x7a058220, 0x02467905, 0x00000100,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80008f66, 0x10118220, 0x02007704, 0x00000000,
    0x00112f31, 0x00020100, 0xfa087a0c, 0x0400700c,
    0x80000065, 0x7b058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x02058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x0b058220, 0x02000054, 0xfffffc00,
    0x80001b68, 0x7c058220, 0x02007b04, 0x00000004,
    0x800c0061, 0x7d054410, 0x00000000, 0x76543210,
    0x80001c68, 0x03058220, 0x02000204, 0x00000004,
    0x800c0061, 0x04054410, 0x00000000, 0x76543210,
    0x80001d68, 0x0c058220, 0x02000b04, 0x00000004,
    0x800c0061, 0x0f054410, 0x00000000, 0x76543210,
    0x800c1d40, 0x7d458110, 0x01467d05, 0x00080008,
    0x800c1c40, 0x04458110, 0x01460405, 0x00080008,
    0x800c1b40, 0x0f458110, 0x01460f05, 0x00080008,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x7e058120, 0x02467d05, 0x00000002,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x05058120, 0x02460405, 0x00000002,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x10058120, 0x02460f05, 0x00000002,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007c04, 0x00000000,
    0x00112031, 0x7f0e0100, 0xfa007e0c, 0x04000000,
    0x00101a66, 0x06058220, 0x02460505, 0x00000040,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02000304, 0x00000000,
    0x00112131, 0x070e0100, 0xfa00060c, 0x04000000,
    0xb4008061, 0x00107f08, 0xb4012161, 0x00120708,
    0x38001940, 0x7400080a, 0x00101961, 0x12050220,
    0x00440a06, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000c04, 0x00000000, 0x00112231, 0x00020100,
    0xfa08100c, 0x0400120c, 0x80000065, 0x11058220,
    0x02000054, 0xfffffc00, 0x00100061, 0x16050220,
    0x00440a16, 0x00000000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80001a68, 0x12058220,
    0x02001104, 0x00000004, 0x800ca061, 0x13054410,
    0x00000000, 0x76543210, 0x800c1940, 0x13458110,
    0x01461305, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010a069, 0x14058120,
    0x02461305, 0x00000002, 0x00101966, 0x15058220,
    0x02461405, 0x00000040, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02001204, 0x00000000, 0x00112331, 0x00020100,
    0xfa08150c, 0x0400160c, 0x00100024, 0x0001c060,
    0x00001388, 0x00001388, 0x8000a365, 0x16058220,
    0x02000054, 0xfffffc00, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x68008f41, 0x0030705c,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80001a68, 0x17058220, 0x02001604, 0x00000004,
    0x800c0061, 0x18054410, 0x00000000, 0x76543210,
    0x800c1940, 0x18458110, 0x01461805, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x19058120, 0x02461805, 0x00000002,
    0x00101966, 0x1a058220, 0x02461905, 0x00000280,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001704, 0x00000000,
    0x00112831, 0x1b0e0100, 0xf2001a0c, 0x04020000,
    0x00108861, 0x00010020, 0x20661b07, 0x00000000,
    0x04100022, 0x0001c060, 0x00000f00, 0x00000910,
    0x8000a365, 0x1c058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x1d058220, 0x02001c04, 0x00000004,
    0x800c0061, 0x1e054410, 0x00000000, 0x76543210,
    0x800c1940, 0x1e458110, 0x01461e05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x1f058120, 0x02461e05, 0x00000002,
    0x00101966, 0x20058220, 0x02461f05, 0x00000200,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001d04, 0x00000000,
    0x00112d31, 0x00020100, 0xfa08200c, 0x04005c0c,
    0x8000a065, 0x21058220, 0x02000054, 0xfffffc00,
    0x8000a465, 0x29058220, 0x02000054, 0xfffffc00,
    0x8000a565, 0x32058220, 0x02000054, 0xfffffc00,
    0x80001b68, 0x22058220, 0x02002104, 0x00000004,
    0x800c0061, 0x23054410, 0x00000000, 0x76543210,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x80001c68, 0x2a058220, 0x02002904, 0x00000004,
    0x800ca561, 0x2b054410, 0x00000000, 0x76543210,
    0x80001d68, 0x33058220, 0x02003204, 0x00000004,
    0x800c0061, 0x34054410, 0x00000000, 0x76543210,
    0x800c1d40, 0x23458110, 0x01462305, 0x00080008,
    0x800c1c40, 0x2b458110, 0x01462b05, 0x00080008,
    0x800c1b40, 0x34458110, 0x01463405, 0x00080008,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x24058120, 0x02462305, 0x00000002,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x0010a669, 0x2c058120, 0x02462b05, 0x00000002,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x35058120, 0x02463405, 0x00000002,
    0x00101b66, 0x25058220, 0x02462405, 0x00000080,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x00101b66, 0x2d058220, 0x02462c05, 0x000000c0,
    0x00101b66, 0x36058220, 0x02463505, 0x00000080,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002204, 0x00000000,
    0x00112431, 0x260e0100, 0xfa00250c, 0x04000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002a04, 0x00000000,
    0x00112731, 0x2e0e0100, 0xfa002d0c, 0x04000000,
    0xb4008461, 0x0010262f, 0xb4012761, 0x00122e2f,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x74002f31, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x00101961, 0x17050220,
    0x00443106, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003304, 0x00000000, 0x00112231, 0x00020100,
    0xfa08360c, 0x0400170c, 0x8000a665, 0x37058220,
    0x02000054, 0xfffffc00, 0x00100061, 0x18050220,
    0x00443116, 0x00000000, 0x80001a68, 0x38058220,
    0x02003704, 0x00000004, 0x800c0061, 0x39054410,
    0x00000000, 0x76543210, 0x800c1940, 0x39458110,
    0x01463905, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x3a058120,
    0x02463905, 0x00000002, 0x00101966, 0x3b058220,
    0x02463a05, 0x000000c0, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003804, 0x00000000, 0x00112531, 0x00020100,
    0xfa083b0c, 0x0400180c, 0x8000a765, 0x3c058220,
    0x02000054, 0xfffffc00, 0x8000a965, 0x44058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x50058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x56058220,
    0x02000054, 0xfffffc00, 0x8000a865, 0x62058220,
    0x02000054, 0xfffffc00, 0x80001d68, 0x3d058220,
    0x02003c04, 0x00000004, 0x800c0061, 0x3e054410,
    0x00000000, 0x76543210, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80001e68, 0x45058220,
    0x02004404, 0x00000004, 0x800caa61, 0x46054410,
    0x00000000, 0x76543210, 0x80001f68, 0x51058220,
    0x02005004, 0x00000004, 0x800cab61, 0x52054410,
    0x00000000, 0x76543210, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x80001f68, 0x57058220,
    0x02005604, 0x00000004, 0x800c0061, 0x58054410,
    0x00000000, 0x76543210, 0x80001f68, 0x63058220,
    0x02006204, 0x00000004, 0x800c0061, 0x64054410,
    0x00000000, 0x76543210, 0x800c1f40, 0x3e458110,
    0x01463e05, 0x00080008, 0x800c1f40, 0x46458110,
    0x01464605, 0x00080008, 0x800c1f40, 0x52458110,
    0x01465205, 0x00080008, 0x800c1e40, 0x58458110,
    0x01465805, 0x00080008, 0x800c1d40, 0x64458110,
    0x01466405, 0x00080008, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x3f058120,
    0x02463e05, 0x00000002, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x0010ab69, 0x47058120,
    0x02464605, 0x00000002, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x53058120,
    0x02465205, 0x00000002, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x59058120,
    0x02465805, 0x00000002, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x65058120,
    0x02466405, 0x00000002, 0x00101d66, 0x40058220,
    0x02463f05, 0x00000180, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x00101d66, 0x48058220,
    0x02464705, 0x000001c0, 0x00101d66, 0x54058220,
    0x02465305, 0x00000100, 0x00101d66, 0x5a058220,
    0x02465905, 0x00000140, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x00101d66, 0x66058220,
    0x02466505, 0x00000100, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02003d04, 0x00000000, 0x00112631, 0x410e0100,
    0xfa00400c, 0x04000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004504, 0x00000000, 0x00112c31, 0x490e0100,
    0xfa00480c, 0x04000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005104, 0x00000000, 0x00112731, 0x550e0100,
    0xfa00540c, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005704, 0x00000000, 0x00112831, 0x5b0e0100,
    0xfa005a0c, 0x04000000, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x00108f41, 0x20010220,
    0x01467205, 0x00564106, 0x00100041, 0x4b050660,
    0x01467205, 0x00564106, 0x00100041, 0x09050660,
    0x01467205, 0x0056410e, 0x00108c41, 0x4c050660,
    0x01467205, 0x00564906, 0x00100041, 0x0a050660,
    0x01467205, 0x0056490e, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0xb4008761, 0x0010555f,
    0xe8000049, 0x4100724a, 0x00101d40, 0x4b0e0110,
    0x01564b0e, 0x00560906, 0x00101c40, 0x4c0e0110,
    0x01564c0e, 0x00560a06, 0xb4018861, 0x00125b5f,
    0xb4001b61, 0x00104b4e, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0xac001b40, 0x4c004a4d,
    0xb4001961, 0x00124d4e, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x38001940, 0x4e005f61,
    0x00101961, 0x19050220, 0x00446106, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006304, 0x00000000,
    0x00112e31, 0x00020100, 0xfa08660c, 0x0400190c,
    0x80000065, 0x67058220, 0x02000054, 0xfffffc00,
    0x0010a861, 0x1a050220, 0x00446116, 0x00000000,
    0x80001a68, 0x68058220, 0x02006704, 0x00000004,
    0x800c0061, 0x69054410, 0x00000000, 0x76543210,
    0x800c1940, 0x69458110, 0x01466905, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x6a058120, 0x02466905, 0x00000002,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x00101966, 0x6b058220, 0x02466a05, 0x00000140,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006804, 0x00000000,
    0x00112831, 0x00020100, 0xfa086b0c, 0x04001a0c,
    0x00100024, 0x0001c060, 0x00000600, 0x00000600,
    0x80000065, 0x6c058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x6d058220, 0x02006c04, 0x00000004,
    0x800caf61, 0x6e054410, 0x00000000, 0x76543210,
    0x800c1940, 0x6e458110, 0x01466e05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010af69, 0x6f058120, 0x02466e05, 0x00000002,
    0x00101966, 0x76058220, 0x02466f05, 0x00000240,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000ad66, 0x10118220, 0x02006d04, 0x00000000,
    0x00112d31, 0x00020100, 0xfa08760c, 0x04005c0c,
    0x80000065, 0x77058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x7d058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x0c058220, 0x02000054, 0xfffffc00,
    0x8000a065, 0x14058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x1d058220, 0x02000054, 0xfffffc00,
    0x80001d68, 0x78058220, 0x02007704, 0x00000004,
    0x800c0061, 0x79054410, 0x00000000, 0x76543210,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001e68, 0x7e058220, 0x02007d04, 0x00000004,
    0x800c0061, 0x7f054410, 0x00000000, 0x76543210,
    0x80001f68, 0x0f058220, 0x02000c04, 0x00000004,
    0x800ca261, 0x10054410, 0x00000000, 0x76543210,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80001f68, 0x15058220, 0x02001404, 0x00000004,
    0x800c0061, 0x16054410, 0x00000000, 0x76543210,
    0x80001f68, 0x1e058220, 0x02001d04, 0x00000004,
    0x800c0061, 0x1f054410, 0x00000000, 0x76543210,
    0x800c1f40, 0x79458110, 0x01467905, 0x00080008,
    0x800c1f40, 0x7f458110, 0x01467f05, 0x00080008,
    0x800c1f40, 0x10458110, 0x01461005, 0x00080008,
    0x800c1e40, 0x16458110, 0x01461605, 0x00080008,
    0x800c1d40, 0x1f458110, 0x01461f05, 0x00080008,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x0010af69, 0x7a058120, 0x02467905, 0x00000002,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x02058120, 0x02467f05, 0x00000002,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x11058120, 0x02461005, 0x00000002,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x0010a269, 0x17058120, 0x02461605, 0x00000002,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x0010ad69, 0x20058120, 0x02461f05, 0x00000002,
    0x00101d66, 0x7b058220, 0x02467a05, 0x00000180,
    0x00101d66, 0x03058220, 0x02460205, 0x000001c0,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x00101d66, 0x12058220, 0x02461105, 0x00000100,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x00101d66, 0x18058220, 0x02461705, 0x00000140,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00101d66, 0x21058220, 0x02462005, 0x00000100,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007804, 0x00000000,
    0x00112931, 0x7c0e0100, 0xfa007b0c, 0x04000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02007e04, 0x00000000,
    0x00112a31, 0x040e0100, 0xfa00030c, 0x04000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02000f04, 0x00000000,
    0x00112231, 0x130e0100, 0xfa00120c, 0x04000000,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001504, 0x00000000,
    0x00112531, 0x190e0100, 0xfa00180c, 0x04000000,
    0x80008901, 0x00000000, 0x00000000, 0x00000000,
    0x00108f41, 0x20010220, 0x01467205, 0x00567c06,
    0x0010a141, 0x06050660, 0x01467205, 0x00567c06,
    0x00100041, 0x0b050660, 0x01467205, 0x00567c0e,
    0x00108a41, 0x07050660, 0x01467205, 0x00560406,
    0x00100041, 0x0c050660, 0x01467205, 0x0056040e,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0xb4008261, 0x0010131a, 0xe8000049, 0x7c007205,
    0x00101d40, 0x060e0110, 0x0156060e, 0x00560b06,
    0x00101c40, 0x070e0110, 0x0156070e, 0x00560c06,
    0xb4018561, 0x0012191a, 0xb4001b61, 0x00100609,
    0xac001b40, 0x07000508, 0xb4001961, 0x00120809,
    0x38001940, 0x0900740b, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x38001940, 0x0b001a1c,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00101961, 0x5f050220, 0x00441c06, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02001e04, 0x00000000,
    0x00112031, 0x00020100, 0xfa08210c, 0x04005f0c,
    0x80000065, 0x22058220, 0x02000054, 0xfffffc00,
    0x0010a061, 0x60050220, 0x00441c16, 0x00000000,
    0x80001a68, 0x23058220, 0x02002204, 0x00000004,
    0x800c0061, 0x24054410, 0x00000000, 0x76543210,
    0x800c1940, 0x24458110, 0x01462405, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010a469, 0x25058120, 0x02462405, 0x00000002,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00101966, 0x26058220, 0x02462505, 0x00000140,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002304, 0x00000000,
    0x00112031, 0x00020100, 0xfa08260c, 0x0400600c,
    0x00100025, 0x00004600, 0x00000000, 0x000003a0,
    0x8000a465, 0x29058220, 0x02000054, 0xfffffc00,
    0x8000a865, 0x2e058220, 0x02000054, 0xfffffc00,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x80001a68, 0x2a058220, 0x02002904, 0x00000004,
    0x800ca561, 0x2b054410, 0x00000000, 0x76543210,
    0x80001b68, 0x2f058220, 0x02002e04, 0x00000004,
    0x800c0061, 0x30054410, 0x00000000, 0x76543210,
    0x800c1b40, 0x2b458110, 0x01462b05, 0x00080008,
    0x800c1a40, 0x30458110, 0x01463005, 0x00080008,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010a669, 0x2c058120, 0x02462b05, 0x00000002,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x31058120, 0x02463005, 0x00000002,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002a04, 0x00000000,
    0x00112631, 0x2d0e0100, 0xfa002c0c, 0x04000000,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x00101966, 0x32058220, 0x02463105, 0x00000040,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02002f04, 0x00000000,
    0x00112531, 0x330e0100, 0xfa00320c, 0x04000000,
    0xb4008661, 0x00102d34, 0xb4012561, 0x00123334,
    0x00100066, 0x00010220, 0x22462d05, 0x00463305,
    0x04100022, 0x0001c060, 0x00000200, 0x00000200,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x39058220, 0x02000054, 0xfffffc00,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0xb4008f61, 0x00107312, 0x80001a68, 0x3a058220,
    0x02003904, 0x00000004, 0x800ca561, 0x3b054410,
    0x00000000, 0x76543210, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x00101b61, 0x36050230,
    0x00441206, 0x00000000, 0x800c1a40, 0x3b458110,
    0x01463b05, 0x00080008, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x38000040, 0x36003438,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x3c058120, 0x02463b05, 0x00000002,
    0x00101a61, 0x61050220, 0x00443806, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003a04, 0x00000000,
    0x00112731, 0x00020100, 0xfa083c0c, 0x0400610c,
    0x80000065, 0x3d058220, 0x02000054, 0xfffffc00,
    0x0010a861, 0x62050220, 0x00443816, 0x00000000,
    0x80001a68, 0x3e058220, 0x02003d04, 0x00000004,
    0x800c0061, 0x3f054410, 0x00000000, 0x76543210,
    0x800c1940, 0x3f458110, 0x01463f05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010a669, 0x40058120, 0x02463f05, 0x00000002,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x00101966, 0x41058220, 0x02464005, 0x00000040,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003e04, 0x00000000,
    0x00112831, 0x00020100, 0xfa08410c, 0x0400620c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x00100025, 0x00004600, 0x00000000, 0x00000b30,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x0d030144, 0x8000aa65, 0x46058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x4a058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x4f058220,
    0x02000054, 0xfffffc00, 0x8000a765, 0x54058220,
    0x02000054, 0xfffffc00, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x80001c68, 0x47058220,
    0x02004604, 0x00000004, 0x800cac61, 0x48054410,
    0x00000000, 0x76543210, 0x80001d68, 0x4b058220,
    0x02004a04, 0x00000004, 0x800c0061, 0x4c054410,
    0x00000000, 0x76543210, 0x80001e68, 0x50058220,
    0x02004f04, 0x00000004, 0x800c0061, 0x51054410,
    0x00000000, 0x76543210, 0x80001f68, 0x55058220,
    0x02005404, 0x00000004, 0x800c0061, 0x56054410,
    0x00000000, 0x76543210, 0x800c1f40, 0x48458110,
    0x01464805, 0x00080008, 0x800c1e40, 0x4c458110,
    0x01464c05, 0x00080008, 0x800c1d40, 0x51458110,
    0x01465105, 0x00080008, 0x800c1c40, 0x56458110,
    0x01465605, 0x00080008, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010ad69, 0x49058120,
    0x02464805, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010aa69, 0x4d058120,
    0x02464c05, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010ab69, 0x52058120,
    0x02465105, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010ac69, 0x57058120,
    0x02465605, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004704, 0x00000000, 0x00112b31, 0x630e0100,
    0xfa00490c, 0x04000000, 0x00101b66, 0x4e058220,
    0x02464d05, 0x00000040, 0x00101b66, 0x53058220,
    0x02465205, 0x00000080, 0x00101b66, 0x58058220,
    0x02465705, 0x000000c0, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004b04, 0x00000000, 0x00112c31, 0x640e0100,
    0xfa004e0c, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005004, 0x00000000, 0x00112d31, 0x650e0100,
    0xfa00530c, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000ae66, 0x10118220,
    0x02005504, 0x00000000, 0x00112e31, 0x660e0100,
    0xfa00580c, 0x04000000, 0x80008b01, 0x00000000,
    0x00000000, 0x00000000, 0x80008c01, 0x00000000,
    0x00000000, 0x00000000, 0x80008d01, 0x00000000,
    0x00000000, 0x00000000, 0x80008e01, 0x00000000,
    0x00000000, 0x00000000, 0x0010cf31, 0x00000000,
    0xfb084414, 0x000c6324, 0x80000065, 0x59058220,
    0x02000054, 0xfffffc00, 0x8000a065, 0x60058220,
    0x02000054, 0xfffffc00, 0x8000af65, 0x65058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x6a058220,
    0x02000054, 0xfffffc00, 0x3800af40, 0x2700446f,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80001d68, 0x5a058220, 0x02005904, 0x00000004,
    0x800c0061, 0x5b054410, 0x00000000, 0x76543210,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001e68, 0x61058220, 0x02006004, 0x00000004,
    0x800ca861, 0x62054410, 0x00000000, 0x76543210,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80001f68, 0x66058220, 0x02006504, 0x00000004,
    0x800c0061, 0x67054410, 0x00000000, 0x76543210,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80001f68, 0x6b058220, 0x02006a04, 0x00000004,
    0x800c0061, 0x6c054410, 0x00000000, 0x76543210,
    0x800c1f40, 0x5b458110, 0x01465b05, 0x00080008,
    0x800c1e40, 0x62458110, 0x01466205, 0x00080008,
    0x800c1d40, 0x67458110, 0x01466705, 0x00080008,
    0x800c1c40, 0x6c458110, 0x01466c05, 0x00080008,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x0010ad69, 0x5c058120, 0x02465b05, 0x00000002,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x0010af69, 0x63058120, 0x02466205, 0x00000002,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x68058120, 0x02466705, 0x00000002,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x6d058120, 0x02466c05, 0x00000002,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00101c66, 0x5f058220, 0x02465c05, 0x00000100,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x00101c66, 0x64058220, 0x02466305, 0x00000140,
    0x00101c66, 0x69058220, 0x02466805, 0x00000180,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x00101c66, 0x6e058220, 0x02466d05, 0x000001c0,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02005a04, 0x00000000,
    0x00112031, 0x710e0100, 0xfa005f0c, 0x04000000,
    0x80008f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006104, 0x00000000,
    0x00112131, 0x720e0100, 0xfa00640c, 0x04000000,
    0x80008f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006604, 0x00000000,
    0x00112231, 0x730e0100, 0xfa00690c, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02006b04, 0x00000000,
    0x00112331, 0x740e0100, 0xfa006e0c, 0x04000000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x80008101, 0x00000000, 0x00000000, 0x00000000,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x00000000, 0xfb086f14, 0x000c7124,
    0x8000a465, 0x70058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x75058220, 0x02000054, 0xfffffc00,
    0x8000af65, 0x7a058220, 0x02000054, 0xfffffc00,
    0x80000065, 0x7f058220, 0x02000054, 0xfffffc00,
    0x3800a140, 0x42004405, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x80001d68, 0x71058220,
    0x02007004, 0x00000004, 0x800ca461, 0x72054410,
    0x00000000, 0x76543210, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x80001e68, 0x76058220,
    0x02007504, 0x00000004, 0x800c0061, 0x77054410,
    0x00000000, 0x76543210, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80001f68, 0x7b058220,
    0x02007a04, 0x00000004, 0x800c0061, 0x7c054410,
    0x00000000, 0x76543210, 0x8001e068, 0x01058220,
    0x02007f04, 0x00000004, 0x800c0061, 0x02054410,
    0x00000000, 0x76543210, 0x800c1f40, 0x72458110,
    0x01467205, 0x00080008, 0x800c1e40, 0x77458110,
    0x01467705, 0x00080008, 0x800c1d40, 0x7c458110,
    0x01467c05, 0x00080008, 0x800c1c40, 0x02458110,
    0x01460205, 0x00080008, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010a469, 0x73058120,
    0x02467205, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x78058120,
    0x02467705, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x7d058120,
    0x02467c05, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x0010aa69, 0x03058120,
    0x02460205, 0x00000002, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x00101c66, 0x74058220,
    0x02467305, 0x00000200, 0x00101c66, 0x79058220,
    0x02467805, 0x00000240, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x00101c66, 0x7e058220,
    0x02467d05, 0x00000280, 0x00101c66, 0x04058220,
    0x02460305, 0x000002c0, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007104, 0x00000000, 0x00112531, 0x070e0100,
    0xfa00740c, 0x04000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007604, 0x00000000, 0x00112631, 0x080e0100,
    0xfa00790c, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02007b04, 0x00000000, 0x00112731, 0x090e0100,
    0xfa007e0c, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02000104, 0x00000000, 0x00112831, 0x0a0e0100,
    0xfa00040c, 0x04000000, 0x80008501, 0x00000000,
    0x00000000, 0x00000000, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x00000000,
    0xfb080514, 0x000c0724, 0x8000a965, 0x06058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x0b058220,
    0x02000054, 0xfffffc00, 0x3800a240, 0x5d004410,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80001b68, 0x07058220, 0x02000604, 0x00000004,
    0x800ca961, 0x08054410, 0x00000000, 0x76543210,
    0x80001c68, 0x0c058220, 0x02000b04, 0x00000004,
    0x800c0061, 0x0d054410, 0x00000000, 0x76543210,
    0x800c1b40, 0x08458110, 0x01460805, 0x00080008,
    0x800c1a40, 0x0d458110, 0x01460d05, 0x00080008,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010a969, 0x09058120, 0x02460805, 0x00000002,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x0e058120, 0x02460d05, 0x00000002,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x00101a66, 0x0a058220, 0x02460905, 0x00000300,
    0x00101a66, 0x0f058220, 0x02460e05, 0x00000340,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02000704, 0x00000000,
    0x00112a31, 0x080e0100, 0xfa000a0c, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02000c04, 0x00000000,
    0x00112b31, 0x090e0100, 0xfa000f0c, 0x04000000,
    0x80008a01, 0x00000000, 0x00000000, 0x00000000,
    0x80008b01, 0x00000000, 0x00000000, 0x00000000,
    0x0010cc31, 0x00000000, 0xfb081014, 0x00040814,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x2c10a761, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_geo_descs_indirect_build = {
   .prog_data = {
      .base.nr_params = 15,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 0,
      .base.program_size = 11936,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_geo_descs_indirect_build_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_geo_descs_indirect_build_printfs,
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
      .push.cross_thread.dwords = 15,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 28,
   .arg_count = 4,
   .args = gfx20_misc_copy_geo_descs_indirect_build_args,
   .code = gfx20_misc_copy_geo_descs_indirect_build_code,
};
const char *gfx20_misc_copy_geo_descs_indirect_build_sha1 = "1a2eef11b5625793c0067f5fb86c9bf93a3255f1";

#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_BFS_pass1_initial_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_BFS_pass1_initial_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_BFS_pass1_initial_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g93<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g9<1>Q          0x0000000000000034Q             { align1 1H };
mov(16)         g14<1>Q         0x0000000000000008Q             { align1 1H };
mov(16)         g31<1>Q         0x0000000000000010Q             { align1 1H };
mov(16)         g41<1>Q         0x0000000000000020Q             { align1 1H };
mov(16)         g18<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
and(16)         g33<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H };
and(1)          g46<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(1)         g1UD            g93UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g36<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(8)          g50<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g37<2>UD        g18<1,1,0>UD                    { align1 1H I@5 compacted };
shl(16)         g34<1>D         g33<8,8,1>D     0x00000004UD    { align1 1H I@5 };
shr(1)          g49<1>UD        g46<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
add(8)          g36.8<1>UW      g36<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g50.8<1>UW      g50<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
mov(16)         g26<1>UQ        g37<8,4,2>UD                    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g35<1>UD        g36<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g51<1>UD        g50<8,8,1>UW    0x00000002UD    { align1 1H };
shl(16)         g28<1>Q         g26<4,4,1>Q     0x00000009UD    { align1 1H I@3 };
add(16)         g37<1>D         g35<1,1,0>D     g34<1,1,0>D     { align1 1H I@3 compacted };
mov(16)         g47<2>UD        g28<4,4,1>UQ                    { align1 1H I@2 };
and(16)         g8<1>UD         g37<8,8,1>UD    0x000001ffUD    { align1 1H I@2 };
add(16)         g29<1>D         g47<8,4,2>D     512D            { align1 1H I@2 };
mov(16)         g52<2>UD        g8<1,1,0>UD                     { align1 1H I@2 compacted };
add(16)         g40<1>D         g47<8,4,2>D     g8<8,8,1>D      { align1 1H };
mov(16)         g38<1>UQ        g52<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g11<1>Q         g1.5<0,1,0>Q    g9<1,1,0>Q      { align1 1H compacted };
add(16)         g16<1>Q         g1.5<0,1,0>Q    g14<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g13UD           g11UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g18UD           g16UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sel.l(16)       g30<1>UD        g29<1,1,0>UD    g13<1,1,0>UD    { align1 1H @6 $1.dst compacted };
mov(16)         g22<2>UD        g18<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g24<2>UD        g20<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g22.1<2>UD      g19<1,1,0>UD                    { align1 1H @2 $2.dst compacted };
mov(16)         g24.1<2>UD      g21<1,1,0>UD                    { align1 1H @2 $2.dst compacted };
add(16)         g43<1>Q         g24<1,1,0>Q     g41<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g45UD           g43UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
or(1)           a0.1<1>UD       g49<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g51UD           g45UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
and(1)          g52<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g53<1>UD        g52<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g54<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g54.8<1>UW      g54<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g55<1>UD        g54<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g56<1>UD        g55<8,8,1>UD    0x00000040UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g53<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g56UD           g46UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $5 };
and(1)          g57<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g58<1>UD        g57<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g59<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g59.8<1>UW      g59<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g60<1>UD        g59<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g61<1>UD        g60<8,8,1>UD    0x00000080UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g58<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g61UD           g47UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
and(1)          g62<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g63<1>UD        g62<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g64<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g64.8<1>UW      g64<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g65<1>UD        g64<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g66<1>UD        g65<8,8,1>UD    0x000000c0UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g63<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g66UD           g48UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $7 };
mov(16)         g67<1>Q         0x0000000000000030Q             { align1 1H };
and(1)          g72<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
add(16)         g69<1>Q         g67<1,1,0>Q     g24<1,1,0>Q     { align1 1H I@2 compacted };
shr(1)          g73<1>UD        g72<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g74<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g71UD           g69UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
add(8)          g74.8<1>UW      g74<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g75<1>UD        g74<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g76<1>UD        g75<8,8,1>UD    0x00000100UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g73<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g76UD           g71UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $9 };
and(1)          g77<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g78<1>UD        g77<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@1 };
mov(8)          g79<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g79.8<1>UW      g79<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g80<1>UD        g79<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g81<1>UD        g80<8,8,1>UD    0x00000140UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g78<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        nullUD          g81UD           g72UD           0x42000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $10 };
and(1)          g82<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g87<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g93<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
and(1)          g99<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shr(1)          g83<1>UD        g82<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@4 };
mov(8)          g84<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g88<1>UD        g87<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
mov(8)          g89<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g94<1>UD        g93<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@6 };
mov(8)          g95<1>UW        0x76543210V                     { align1 WE_all 1Q };
shr(1)          g100<1>UD       g99<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@7 };
mov(8)          g101<1>UW       0x76543210V                     { align1 WE_all 1Q };
add(8)          g84.8<1>UW      g84<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@7 };
add(8)          g89.8<1>UW      g89<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@6 };
add(8)          g95.8<1>UW      g95<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g101.8<1>UW     g101<8,8,1>UW   0x0008UW        { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g85<1>UD        g84<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g90<1>UD        g89<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g96<1>UD        g95<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shl(16)         g102<1>UD       g101<8,8,1>UW   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g83<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g86UD           g85UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $11 };
or(16)          g91<1>UD        g90<8,8,1>UD    0x00000040UD    { align1 1H I@3 };
or(16)          g97<1>UD        g96<8,8,1>UD    0x00000080UD    { align1 1H I@3 };
or(16)          g103<1>UD       g102<8,8,1>UD   0x000000c0UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g88<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g92UD           g91UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g94<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g98UD           g97UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x00000000UD    { align1 WE_all 1N };
send(16)        g104UD          g103UD          nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g106<1>F        g71<1,1,0>F     -g92<1,1,0>F    { align1 1H $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g107<1>F        g72<1,1,0>F     -g98<1,1,0>F    { align1 1H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
add(16)         g105<1>F        g104<1,1,0>F    -g86<1,1,0>F    { align1 1H $14.dst compacted };
sel.ge(16)      g109<1>F        g106<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sel.ge(16)      g110<1>F        g107<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
sel.ge(16)      g108<1>F        g105<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H F@3 };
math inv(16)    g113<1>F        g109<8,8,1>F    null<8,8,1>F    { align1 1H F@3 };
math inv(16)    g115<1>F        g110<8,8,1>F    null<8,8,1>F    { align1 1H F@2 };
math inv(16)    g111<1>F        g108<8,8,1>F    null<8,8,1>F    { align1 1H F@1 };
cmp.l.f0.0(16)  g117<1>F        g108<8,8,1>F    0x77f684dfF  /* 1e+34F */ { align1 1H };
cmp.g.f0.0(16)  g118<1>F        g105<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H };
mul(16)         g114<1>F        g113<8,8,1>F    0x417d70a4F  /* 15.84F */ { align1 1H M@3 };
mul(16)         g116<1>F        g115<8,8,1>F    0x417d70a4F  /* 15.84F */ { align1 1H M@2 };
mul(16)         g112<1>F        g111<8,8,1>F    0x417d70a4F  /* 15.84F */ { align1 1H M@1 };
and.nz.f0.0(16) null<1>UD       g117<8,8,1>UD   g118<8,8,1>UD   { align1 1H F@4 };
(+f0.0) sel(16) g119<1>UD       g112<8,8,1>UD   0x00000000UD    { align1 1H F@1 };
cmp.g.f0.0(16)  g120<1>F        g106<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g121<1>F        g109<8,8,1>F    0x77f684dfF  /* 1e+34F */ { align1 1H };
and.nz.f0.0(16) null<1>UD       g121<8,8,1>UD   g120<8,8,1>UD   { align1 1H F@1 };
(+f0.0) sel(16) g122<1>UD       g114<8,8,1>UD   0x00000000UD    { align1 1H F@5 };
cmp.g.f0.0(16)  g123<1>F        g107<8,8,1>F    0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g124<1>F        g110<8,8,1>F    0x77f684dfF  /* 1e+34F */ { align1 1H };
and.nz.f0.0(16) null<1>UD       g124<8,8,1>UD   g123<8,8,1>UD   { align1 1H F@1 };
(+f0.0) sel(16) g125<1>UD       g116<8,8,1>UD   0x00000000UD    { align1 1H F@6 };
cmp.l.f0.0(16)  g126<1>UD       g40<1,1,0>UD    g30<1,1,0>UD    { align1 1H compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g53<2>UD        g40<1,1,0>UD                    { align1 1H compacted };
mov(16)         g2<1>UQ         g53<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g4<1>Q          g2<4,4,1>Q      0x00000005UD    { align1 1H I@1 };
add(16)         g6<1>Q          g22<1,1,0>Q     g4<1,1,0>Q      { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g9UD            g6UD            nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g13<1>Q         g6<1,1,0>Q      g31<1,1,0>Q     { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g15UD           g13UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
shl(16)         g19<1>Q         g38<4,4,1>Q     0x00000002UD    { align1 1H };
mov(16)         g54<2>UD        g19<4,4,1>UQ                    { align1 1H I@1 };
mov(16)         g3<1>UD         g54<8,4,2>UD                    { align1 1H I@1 };
mov(16)         g2<1>UD         g54<8,4,2>UD                    { align1 1H };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g2<8,8,1>UD     0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
shl(16)         g20<1>D         g2<8,8,1>D      0x00000002UD    { align1 1H $15.src };
mov(16)         g21<1>UD        0x7f800000UD                    { align1 1H $15.src };
mov(16)         g22<1>UD        0x7f800000UD                    { align1 1H $15.src };
mov(16)         g23<1>UD        0x7f800000UD                    { align1 1H $15.src };
mov(16)         g24<1>UD        0x7f800000UD                    { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g20UD           g21UD           0x02003504                0x00000100
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 4 flat )  base_offset 0  { align1 1H $15 };
add(16)         g2<1>D          g2<8,8,1>D      2048D           { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
nop                                                             ;

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g3<8,8,1>UD     0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g21<1>D         g3<8,8,1>D      0x00000002UD    { align1 1H $15.src };
mov(16)         g23<1>UD        0x00000000UD                    { align1 1H $15.src compacted };
mov(16)         g24<1>UD        0x00000000UD                    { align1 1H $15.src compacted };
mov(16)         g25<1>UD        0x00000000UD                    { align1 1H $15.src compacted };
mov(16)         g26<1>UD        0x00000000UD                    { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g22<1>D         g21<8,8,1>D     1152D           { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g22UD           g23UD           0x02003504                0x00000100
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 4 flat )  base_offset 0  { align1 1H $15 };
add(16)         g3<1>D          g3<8,8,1>D      2048D           { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(1)         g23UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g24<1>UD        0x00000000UD                    { align1 WE_all 1Q $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(2)          g24.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g24.2<1>UD      g24.2<0,1,0>UD  0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g24UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $15 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g25<1>F         g9<1,1,0>F      g15<1,1,0>F     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g26<1>F         g10<1,1,0>F     g16<1,1,0>F     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g27<1>F         g11<1,1,0>F     g17<1,1,0>F     { align1 1H $1.dst compacted };
add(16)         g28<1>F         g25<1,1,0>F     -g86<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g29<1>F         g26<1,1,0>F     -g92<1,1,0>F    { align1 1H F@3 compacted };
add(16)         g30<1>F         g27<1,1,0>F     -g98<1,1,0>F    { align1 1H F@3 compacted };
mul(16)         g31<1>F         g28<1,1,0>F     g119<1,1,0>F    { align1 1H A@3 compacted };
mul(16)         g32<1>F         g29<1,1,0>F     g122<1,1,0>F    { align1 1H A@3 compacted };
mul(16)         g33<1>F         g30<1,1,0>F     g125<1,1,0>F    { align1 1H F@3 compacted };
mov(16)         g34<1>UD        g31<8,8,1>F                     { align1 1H F@3 };
mov(16)         g36<1>UD        g32<8,8,1>F                     { align1 1H F@2 };
mov(16)         g37<1>UD        g33<8,8,1>F                     { align1 1H F@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g126<8,8,1>UD   0x00000000UD    { align1 1H };
mov(16)         g4<1>UD         f0<0,1,0>UW                     { align1 1H };
and(16)         g38<1>UD        g35<8,8,1>UD    0x00000003UD    { align1 1H };
shr(16)         g39<1>UD        g35<8,8,1>UD    0x00000002UD    { align1 1H };
mov(1)          g29<1>D         1D                              { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g40<1>D         g29<0,1,0>D     g35<8,8,1>UD    { align1 1H };

LABEL8:
cmp.z.f0.0(16)  null<1>D        g4<8,8,1>D      0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
fbl(16)         g41<1>UD        g4<1,1,0>UD                     { align1 1H compacted };
mov(16)         a0<1>UW         0x0880UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g41<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0880UW        { align1 1H A@1 };
mov(16)         g42<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.z.f0.0(16)  g43<1>D         g42<1,1,0>D     g34<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g43<8,8,1>UD    g126<8,8,1>UD   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
(+f0.0) sel(16) g44<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
(+f0.0) sel(16) g45<1>UD        g16<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
(+f0.0) sel(16) g46<1>UD        g17<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
(+f0.0) sel(16) g47<1>UD        g9<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
(+f0.0) sel(16) g48<1>UD        g10<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g49<1>UD        g11<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g53<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g53<1>F         g44<1,1,0>F                     { align1 1H compacted };
mov(16)         g54<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g54<1>F         g45<1,1,0>F                     { align1 1H compacted };
mov(16)         g55<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g55<1>F         g46<1,1,0>F                     { align1 1H compacted };
mov(16)         g50<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g50<1>F         g47<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g51<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g51<1>F         g48<1,1,0>F                     { align1 1H compacted };
mov(16)         g52<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g52<1>F         g49<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     1D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(8)          g81<2>UD        g53.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g89<2>UD        g54.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(8)          g97<2>UD        g55.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g57<2>UD        g50.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g65<2>UD        g51.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g73<2>UD        g52.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g80<2>F         g53<8,4,2>F     g81<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.ge(8)       g88<2>F         g54<8,4,2>F     g89<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g96<2>F         g55<8,4,2>F     g97<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(8)        g56<2>F         g50<8,4,2>F     g57<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g64<2>F         g51<8,4,2>F     g65<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.l(8)        g72<2>F         g52<8,4,2>F     g73<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g53.1<2>UD      g80<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g54.1<2>UD      g88<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g55.1<2>UD      g96<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g50.1<2>UD      g56<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g51.1<2>UD      g64<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g52.1<2>UD      g72<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g83<4>UD        g53.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g84<4>UD        g53.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g91<4>UD        g54.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g92<4>UD        g54.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g99<4>UD        g55.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g100<4>UD       g55.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g59<4>UD        g50.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g60<4>UD        g50.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g67<4>UD        g51.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g68<4>UD        g51.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g75<4>UD        g52.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g76<4>UD        g52.2<8,2,4>UD                  { align1 WE_all 1N $9.src };
sel.ge(4)       g82<4>F         g83<8,2,4>F     g84<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g90<4>F         g91<8,2,4>F     g92<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g98<4>F         g99<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g58<4>F         g59<8,2,4>F     g60<8,2,4>F     { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g66<4>F         g67<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g74<4>F         g75<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g53.2<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g54.2<4>UD      g90<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g55.2<4>UD      g98<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g50.2<4>UD      g58<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g51.2<4>UD      g66<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g52.2<4>UD      g74<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g86<4>UD        g53.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g87<4>UD        g53.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g94<4>UD        g54.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g95<4>UD        g54.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g102<4>UD       g55.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g103<4>UD       g55.3<8,2,4>UD                  { align1 WE_all 1N $14.src };
mov(4)          g62<4>UD        g50.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g63<4>UD        g50.3<8,2,4>UD                  { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g70<4>UD        g51.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g71<4>UD        g51.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g78<4>UD        g52.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g79<4>UD        g52.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g85<4>F         g86<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.ge(4)       g93<4>F         g94<8,2,4>F     g95<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g101<4>F        g102<8,2,4>F    g103<8,2,4>F    { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(4)        g61<4>F         g62<8,2,4>F     g63<8,2,4>F     { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g69<4>F         g70<8,2,4>F     g71<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g77<4>F         g78<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g53.3<4>UD      g85<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g54.3<4>UD      g93<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g55.3<4>UD      g101<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g50.3<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g51.3<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g52.3<4>UD      g77<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g53.4<1>F       g53.3<0,1,0>F   g53.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g53.12<1>F      g53.11<0,1,0>F  g53.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g54.4<1>F       g54.3<0,1,0>F   g54.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g54.12<1>F      g54.11<0,1,0>F  g54.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g55.4<1>F       g55.3<0,1,0>F   g55.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g55.12<1>F      g55.11<0,1,0>F  g55.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g50.4<1>F       g50.3<0,1,0>F   g50.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g50.12<1>F      g50.11<0,1,0>F  g50.12<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g51.4<1>F       g51.3<0,1,0>F   g51.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g51.12<1>F      g51.11<0,1,0>F  g51.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g52.4<1>F       g52.3<0,1,0>F   g52.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g52.12<1>F      g52.11<0,1,0>F  g52.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g53.8<1>F       g53.7<0,1,0>F   g53.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g54.8<1>F       g54.7<0,1,0>F   g54.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g55.8<1>F       g55.7<0,1,0>F   g55.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g50.8<1>F       g50.7<0,1,0>F   g50.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g51.8<1>F       g51.7<0,1,0>F   g51.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g52.8<1>F       g52.7<0,1,0>F   g52.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g57<1>UD        g54.15<0,1,0>UD g53.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g56<1>UD        g51.15<0,1,0>UD g50.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g58<1>UD        g52.15<0,1,0>UD g56<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g59<1>UD        g55.15<0,1,0>UD g57<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g24<1>F         g58<1,1,0>F     -g59<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g40<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
mul(16)         g60<1>D         g42<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g61<1>D         g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g62<1>D         g60<8,8,1>D     g38<8,8,1>D     g61<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g63<1>D         g62<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g63UD           g24UD           0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $15 };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
or(16)          g64<1>D         ~g43<1,1,0>D    ~g126<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g64<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g65<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g4<1>UD         g4<1,1,0>UD     g65<1,1,0>UD    { align1 1H I@1 compacted };

LABEL6:
while(16)       JIP:  LABEL8                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g66<1>D         g36<8,8,1>D     16D             { align1 1H I@7 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g126<8,8,1>UD   0x00000000UD    { align1 1H };
mov(16)         g5<1>UD         f0<0,1,0>UW                     { align1 1H };

LABEL11:
cmp.z.f0.0(16)  null<1>D        g5<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
fbl(16)         g67<1>UD        g5<1,1,0>UD                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x1080UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g67<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x1080UW        { align1 1H A@1 };
mov(16)         g68<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.z.f0.0(16)  g69<1>D         g68<1,1,0>D     g66<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g69<8,8,1>UD    g126<8,8,1>UD   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
(+f0.0) sel(16) g70<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g71<1>UD        g16<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g72<1>UD        g17<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g73<1>UD        g9<8,8,1>UD     0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g74<1>UD        g10<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g75<1>UD        g11<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g79<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g79<1>F         g70<1,1,0>F                     { align1 1H compacted };
mov(16)         g80<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g80<1>F         g71<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g81<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g81<1>F         g72<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g76<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@3 compacted };
mov(16)         g76<1>F         g73<1,1,0>F                     { align1 1H compacted };
mov(16)         g77<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g77<1>F         g74<1,1,0>F                     { align1 1H compacted };
mov(16)         g78<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g78<1>F         g75<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     1D              { align1 1H };
mov(8)          g4<2>UD         g79.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(8)          g22<2>UD        g80.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g30<2>UD        g81.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g105<2>UD       g76.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g113<2>UD       g77.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g121<2>UD       g78.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g3<2>F          g79<8,4,2>F     g4<8,4,2>F      { align1 WE_all 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(8)       g21<2>F         g80<8,4,2>F     g22<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g29<2>F         g81<8,4,2>F     g30<8,4,2>F     { align1 WE_all 1Q A@4 };
sel.l(8)        g104<2>F        g76<8,4,2>F     g105<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.l(8)        g112<2>F        g77<8,4,2>F     g113<8,4,2>F    { align1 WE_all 1Q I@2 };
sel.l(8)        g120<2>F        g78<8,4,2>F     g121<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g79.1<2>UD      g3<8,4,2>UD                     { align1 WE_all 1Q A@6 };
mov(8)          g80.1<2>UD      g21<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g81.1<2>UD      g29<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g76.1<2>UD      g104<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g77.1<2>UD      g112<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g78.1<2>UD      g120<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g7<4>UD         g79.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g13<4>UD        g79.2<8,2,4>UD                  { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(4)          g24<4>UD        g80.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g25<4>UD        g80.2<8,2,4>UD                  { align1 WE_all 1N $1.src };
mov(4)          g32<4>UD        g81.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g33<4>UD        g81.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g107<4>UD       g76.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g108<4>UD       g76.2<8,2,4>UD                  { align1 WE_all 1N M@1 };
mov(4)          g115<4>UD       g77.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g116<4>UD       g77.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g123<4>UD       g78.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g124<4>UD       g78.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g6<4>F          g7<8,2,4>F      g13<8,2,4>F     { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(4)       g23<4>F         g24<8,2,4>F     g25<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g31<4>F         g32<8,2,4>F     g33<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g106<4>F        g107<8,2,4>F    g108<8,2,4>F    { align1 WE_all 1N I@5 };
sel.l(4)        g114<4>F        g115<8,2,4>F    g116<8,2,4>F    { align1 WE_all 1N I@3 };
sel.l(4)        g122<4>F        g123<8,2,4>F    g124<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g79.2<4>UD      g6<8,2,4>UD                     { align1 WE_all 1N F@6 };
mov(4)          g80.2<4>UD      g23<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g81.2<4>UD      g31<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g76.2<4>UD      g106<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g77.2<4>UD      g114<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g78.2<4>UD      g122<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g19<4>UD        g79.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g20<4>UD        g79.3<8,2,4>UD                  { align1 WE_all 1N $15.src };
mov(4)          g27<4>UD        g80.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g28<4>UD        g80.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g41<4>UD        g81.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g42<4>UD        g81.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g110<4>UD       g76.1<8,2,4>UD                  { align1 WE_all 1N A@2 };
mov(4)          g111<4>UD       g76.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g118<4>UD       g77.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g119<4>UD       g77.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g127<4>UD       g78.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g2<4>UD         g78.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g14<4>F         g19<8,2,4>F     g20<8,2,4>F     { align1 WE_all 1N $2.src };
sel.ge(4)       g26<4>F         g27<8,2,4>F     g28<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g35<4>F         g41<8,2,4>F     g42<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g109<4>F        g110<8,2,4>F    g111<8,2,4>F    { align1 WE_all 1N A@3 };
sel.l(4)        g117<4>F        g118<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@3 };
sel.l(4)        g125<4>F        g127<8,2,4>F    g2<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g79.3<4>UD      g14<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g80.3<4>UD      g26<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g81.3<4>UD      g35<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g76.3<4>UD      g109<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g77.3<4>UD      g117<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g78.3<4>UD      g125<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g79.12<1>F      g79.11<0,1,0>F  g79.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g80.4<1>F       g80.3<0,1,0>F   g80.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g80.12<1>F      g80.11<0,1,0>F  g80.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g81.4<1>F       g81.3<0,1,0>F   g81.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g81.12<1>F      g81.11<0,1,0>F  g81.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g76.4<1>F       g76.3<0,1,0>F   g76.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g76.12<1>F      g76.11<0,1,0>F  g76.12<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g77.12<1>F      g77.11<0,1,0>F  g77.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g78.12<1>F      g78.11<0,1,0>F  g78.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g79.8<1>F       g79.7<0,1,0>F   g79.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g80.8<1>F       g80.7<0,1,0>F   g80.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g81.8<1>F       g81.7<0,1,0>F   g81.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g76.8<1>F       g76.7<0,1,0>F   g76.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g77.8<1>F       g77.7<0,1,0>F   g77.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g78.8<1>F       g78.7<0,1,0>F   g78.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g83<1>UD        g80.15<0,1,0>UD g79.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g82<1>UD        g77.15<0,1,0>UD g76.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g84<1>UD        g78.15<0,1,0>UD g82<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g85<1>UD        g81.15<0,1,0>UD g83<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g25<1>F         g84<1,1,0>F     -g85<1,1,0>F    { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g40<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL10             { align1 1H };
mul(16)         g86<1>D         g68<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g87<1>D         g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g88<1>D         g86<8,8,1>D     g38<8,8,1>D     g87<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g89<1>D         g88<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g89UD           g25UD           0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $1 };

LABEL10:
endif(16)       JIP:  LABEL9                                    { align1 1H };
or(16)          g90<1>D         ~g69<1,1,0>D    ~g126<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g90<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g91<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g5<1>UD         g5<1,1,0>UD     g91<1,1,0>UD    { align1 1H I@1 compacted };

LABEL9:
while(16)       JIP:  LABEL11                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
add(16)         g92<1>D         g37<8,8,1>D     32D             { align1 1H };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g126<8,8,1>UD   0x00000000UD    { align1 1H };
mov(16)         g6<1>UD         f0<0,1,0>UW                     { align1 1H };

LABEL14:
cmp.z.f0.0(16)  null<1>D        g6<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
fbl(16)         g93<1>UD        g6<1,1,0>UD                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x1700UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g93<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x1700UW        { align1 1H A@1 };
mov(16)         g94<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g95<1>D         g94<1,1,0>D     g92<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g95<8,8,1>UD    g126<8,8,1>UD   { align1 1H I@1 };
(+f0.0) sel(16) g96<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
(+f0.0) sel(16) g97<1>UD        g16<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g98<1>UD        g17<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g99<1>UD        g9<8,8,1>UD     0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g100<1>UD       g10<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g101<1>UD       g11<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g105<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@6 compacted };
mov(16)         g105<1>F        g96<1,1,0>F                     { align1 1H compacted };
mov(16)         g106<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g106<1>F        g97<1,1,0>F                     { align1 1H compacted };
mov(16)         g107<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g107<1>F        g98<1,1,0>F                     { align1 1H compacted };
mov(16)         g102<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g102<1>F        g99<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g103<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g103<1>F        g100<1,1,0>F                    { align1 1H compacted };
mov(16)         g104<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g104<1>F        g101<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     1D              { align1 1H };
mov(8)          g68<2>UD        g105.1<8,4,2>UD                 { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g76<2>UD        g106.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
mov(8)          g84<2>UD        g107.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g44<2>UD        g102.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(8)          g52<2>UD        g103.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(8)          g60<2>UD        g104.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g67<2>F         g105<8,4,2>F    g68<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.ge(8)       g75<2>F         g106<8,4,2>F    g76<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g83<2>F         g107<8,4,2>F    g84<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.l(8)        g43<2>F         g102<8,4,2>F    g44<8,4,2>F     { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(8)        g51<2>F         g103<8,4,2>F    g52<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.l(8)        g59<2>F         g104<8,4,2>F    g60<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g105.1<2>UD     g67<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g106.1<2>UD     g75<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g107.1<2>UD     g83<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g102.1<2>UD     g43<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g103.1<2>UD     g51<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g104.1<2>UD     g59<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g70<4>UD        g105.1<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g71<4>UD        g105.2<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g78<4>UD        g106.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g79<4>UD        g106.2<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g86<4>UD        g107.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g87<4>UD        g107.2<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g46<4>UD        g102.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g47<4>UD        g102.2<8,2,4>UD                 { align1 WE_all 1N $6.src };
mov(4)          g54<4>UD        g103.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g55<4>UD        g103.2<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g62<4>UD        g104.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g63<4>UD        g104.2<8,2,4>UD                 { align1 WE_all 1N $15.src };
sel.ge(4)       g69<4>F         g70<8,2,4>F     g71<8,2,4>F     { align1 WE_all 1N $8.src };
sel.ge(4)       g77<4>F         g78<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(4)       g85<4>F         g86<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(4)        g45<4>F         g46<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g53<4>F         g54<8,2,4>F     g55<8,2,4>F     { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(4)        g61<4>F         g62<8,2,4>F     g63<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g105.2<4>UD     g69<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g106.2<4>UD     g77<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g107.2<4>UD     g85<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g102.2<4>UD     g45<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g103.2<4>UD     g53<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g104.2<4>UD     g61<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g73<4>UD        g105.1<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g74<4>UD        g105.3<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(4)          g81<4>UD        g106.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g82<4>UD        g106.3<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g89<4>UD        g107.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g90<4>UD        g107.3<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g49<4>UD        g102.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g50<4>UD        g102.3<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g57<4>UD        g103.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g58<4>UD        g103.3<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g65<4>UD        g104.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g66<4>UD        g104.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g72<4>F         g73<8,2,4>F     g74<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g80<4>F         g81<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g88<4>F         g89<8,2,4>F     g90<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g48<4>F         g49<8,2,4>F     g50<8,2,4>F     { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(4)        g56<4>F         g57<8,2,4>F     g58<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g64<4>F         g65<8,2,4>F     g66<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g105.3<4>UD     g72<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g106.3<4>UD     g80<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g107.3<4>UD     g88<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g102.3<4>UD     g48<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g103.3<4>UD     g56<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g104.3<4>UD     g64<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g105.4<1>F      g105.3<0,1,0>F  g105.4<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g105.12<1>F     g105.11<0,1,0>F g105.12<4,4,1>F { align1 WE_all 1N I@6 };
sel.ge(4)       g106.4<1>F      g106.3<0,1,0>F  g106.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g106.12<1>F     g106.11<0,1,0>F g106.12<4,4,1>F { align1 WE_all 1N I@5 };
sel.ge(4)       g107.4<1>F      g107.3<0,1,0>F  g107.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g107.12<1>F     g107.11<0,1,0>F g107.12<4,4,1>F { align1 WE_all 1N I@4 };
sel.l(4)        g102.4<1>F      g102.3<0,1,0>F  g102.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g102.12<1>F     g102.11<0,1,0>F g102.12<4,4,1>F { align1 WE_all 1N I@3 };
sel.l(4)        g103.4<1>F      g103.3<0,1,0>F  g103.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g103.12<1>F     g103.11<0,1,0>F g103.12<4,4,1>F { align1 WE_all 1N I@2 };
sel.l(4)        g104.4<1>F      g104.3<0,1,0>F  g104.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g104.12<1>F     g104.11<0,1,0>F g104.12<4,4,1>F { align1 WE_all 1N I@1 };
sel.ge(8)       g105.8<1>F      g105.7<0,1,0>F  g105.8<8,8,1>F  { align1 WE_all 1Q };
sel.ge(8)       g106.8<1>F      g106.7<0,1,0>F  g106.8<8,8,1>F  { align1 WE_all 1Q F@7 };
sel.ge(8)       g107.8<1>F      g107.7<0,1,0>F  g107.8<8,8,1>F  { align1 WE_all 1Q F@7 };
sel.l(8)        g102.8<1>F      g102.7<0,1,0>F  g102.8<8,8,1>F  { align1 WE_all 1Q F@7 };
sel.l(8)        g103.8<1>F      g103.7<0,1,0>F  g103.8<8,8,1>F  { align1 WE_all 1Q F@7 };
sel.l(8)        g104.8<1>F      g104.7<0,1,0>F  g104.8<8,8,1>F  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
(+f0.0) sel(16) g109<1>UD       g106.15<0,1,0>UD g105.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g108<1>UD       g103.15<0,1,0>UD g102.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g110<1>UD       g104.15<0,1,0>UD g108<8,8,1>UD  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g111<1>UD       g107.15<0,1,0>UD g109<8,8,1>UD  { align1 1H };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g26<1>F         g110<1,1,0>F    -g111<1,1,0>F   { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g40<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
mul(16)         g112<1>D        g94<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g113<1>D        g39<1,1,0>D     3W              { align1 1H compacted };
add3(16)        g114<1>D        g112<8,8,1>D    g38<8,8,1>D     g113<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g115<1>D        g114<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g115UD          g26UD           0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $2 };

LABEL13:
endif(16)       JIP:  LABEL12                                   { align1 1H };
or(16)          g116<1>D        ~g95<1,1,0>D    ~g126<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g116<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov(16)         g117<1>UD       f0<0,1,0>UW                     { align1 1H };
and(16)         g6<1>UD         g6<1,1,0>UD     g117<1,1,0>UD   { align1 1H I@1 compacted };

LABEL12:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g126<8,8,1>D                    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL15             { align1 1H };
shl(16)         g118<1>D        g34<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g119<1>D        g118<8,8,1>D    1152D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g119UD          nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
shl(16)         g120<1>D        g36<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g121<1>D        g120<8,8,1>D    1216D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g121UD          nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
shl(16)         g122<1>D        g37<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g123<1>D        g122<8,8,1>D    1280D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g123UD          nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };

LABEL15:
endif(16)       JIP:  LABEL16                                   { align1 1H };

LABEL16:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
send(1)         g124UD          g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(8)          g125<1>UD       0x00000000UD                    { align1 WE_all 1Q F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(2)          g125.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g125.2<1>UD     g125.2<0,1,0>UD 0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g125UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $7 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
mov(16)         g126<1>Q        0x0000000000002c58Q             { align1 1H };
mov(16)         g7<1>UD         g8<1,1,0>UD                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g2<1>Q          g126<1,1,0>Q    g1.4<0,1,0>Q    { align1 1H compacted };

LABEL19:
cmp.ge.f0.0(16) null<1>UD       g7<8,8,1>UD     0x00000120UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL17       UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g4<1>D          g7<8,8,1>D      0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g27UD           g4UD            nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g91<2>UD        g4<1,1,0>UD                     { align1 1H $8.src compacted };
mov(16)         g5<1>UQ         g91<8,4,2>UD                    { align1 1H I@1 };
cmp.nz.f0.0(16) null<1>F        g27<1,1,0>F     0x7f800000F  /* infF */ { align1 1H $8.dst compacted };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g9<1>Q          g2<1,1,0>Q      g5<1,1,0>Q      { align1 1H A@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g27UD           0x04040595                0x00000040
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $9 };

LABEL18:
endif(16)       JIP:  LABEL17                                   { align1 1H };
add(16)         g7<1>D          g7<8,8,1>D      512D            { align1 1H };

LABEL17:
while(16)       JIP:  LABEL19                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g10<1>Q         0x00000000000030d8Q             { align1 1H F@7 };

LABEL22:
cmp.ge.f0.0(16) null<1>UD       g8<8,8,1>UD     0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL20       UIP:  LABEL20             { align1 1H };
shl(16)         g12<1>D         g8<8,8,1>D      0x00000002UD    { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g14<1>D         g12<8,8,1>D     1152D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g92<2>UD        g12<1,1,0>UD                    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
send(16)        g28UD           g14UD           nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g13<1>UQ        g92<8,4,2>UD                    { align1 1H $10.src };
cmp.nz.f0.0(16) null<1>D        g28<8,8,1>D     0D              { align1 1H $10.dst };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL21             { align1 1H };
add(16)         g15<1>Q         g10<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H A@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g17<1>Q         g15<1,1,0>Q     g13<1,1,0>Q     { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g17UD           g28UD           0x0404058c                0x00000040
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $2 };

LABEL21:
endif(16)       JIP:  LABEL20                                   { align1 1H };
add(16)         g8<1>D          g8<8,8,1>D      512D            { align1 1H };

LABEL20:
while(16)       JIP:  LABEL22                                   { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_BFS_pass1_initial_code[] = {
    0x80000065, 0x5d058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x09054770, 0x00000000, 0x00000034,
    0x00100061, 0x0e054770, 0x00000000, 0x00000008,
    0x00100061, 0x1f054770, 0x00000000, 0x00000010,
    0x00100061, 0x29054770, 0x00000000, 0x00000020,
    0x2c800061, 0x00110012, 0x00100065, 0x21058220,
    0x02000024, 0x000000ff, 0x80000065, 0x2e058220,
    0x02000054, 0xfffffc00, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa005d0c, 0x00340000, 0x800c0061, 0x24054410,
    0x00000000, 0x76543210, 0x800c0061, 0x32054410,
    0x00000000, 0x76543210, 0xb4001d61, 0x00101225,
    0x00101d69, 0x22058660, 0x02462105, 0x00000004,
    0x80001d68, 0x31058220, 0x02002e04, 0x00000004,
    0x800c1d40, 0x24458110, 0x01462405, 0x00080008,
    0x800c1d40, 0x32458110, 0x01463205, 0x00080008,
    0x00101d61, 0x1a050230, 0x00442506, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x23050120, 0x00462405, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x33058120, 0x02463205, 0x00000002,
    0x00101b69, 0x1c058770, 0x02341a05, 0x00000009,
    0xac001b40, 0x22002325, 0x00101a61, 0x2f060320,
    0x00341c05, 0x00000000, 0x00101a65, 0x08058220,
    0x02462505, 0x000001ff, 0x00101a40, 0x1d058660,
    0x06442f06, 0x00000200, 0xb4001a61, 0x00100834,
    0x00100040, 0x28050660, 0x06442f06, 0x00460805,
    0x00101a61, 0x26050230, 0x00443406, 0x00000000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x0907010b, 0x38800040, 0x0e070110,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x0d0c0000, 0xfb000b14, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x12240000, 0xfb001014, 0x000c0000,
    0xe819c162, 0x0d001d1e, 0xb4008261, 0x00101216,
    0xb4008261, 0x00101418, 0xb4014261, 0x00121316,
    0xb4014261, 0x00121518, 0x38001940, 0x2900182b,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x2d240000, 0xfb002b14, 0x000c0000,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003104, 0x00000000,
    0x00112431, 0x00020100, 0xfa08330c, 0x04002d0c,
    0x80000065, 0x34058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x35058220, 0x02003404, 0x00000004,
    0x800c0061, 0x36054410, 0x00000000, 0x76543210,
    0x800c1940, 0x36458110, 0x01463605, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x37058120, 0x02463605, 0x00000002,
    0x00101966, 0x38058220, 0x02463705, 0x00000040,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003504, 0x00000000,
    0x00112531, 0x00020100, 0xfa08380c, 0x04002e0c,
    0x80000065, 0x39058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x3a058220, 0x02003904, 0x00000004,
    0x800c0061, 0x3b054410, 0x00000000, 0x76543210,
    0x800c1940, 0x3b458110, 0x01463b05, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x3c058120, 0x02463b05, 0x00000002,
    0x00101966, 0x3d058220, 0x02463c05, 0x00000080,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003a04, 0x00000000,
    0x00112631, 0x00020100, 0xfa083d0c, 0x04002f0c,
    0x80000065, 0x3e058220, 0x02000054, 0xfffffc00,
    0x80001968, 0x3f058220, 0x02003e04, 0x00000004,
    0x800c0061, 0x40054410, 0x00000000, 0x76543210,
    0x800c1940, 0x40458110, 0x01464005, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x41058120, 0x02464005, 0x00000002,
    0x00101966, 0x42058220, 0x02464105, 0x000000c0,
    0x80008301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003f04, 0x00000000,
    0x00112731, 0x00020100, 0xfa08420c, 0x0400300c,
    0x00100061, 0x43054770, 0x00000000, 0x00000030,
    0x80000065, 0x48058220, 0x02000054, 0xfffffc00,
    0x38001a40, 0x18004345, 0x80001a68, 0x49058220,
    0x02004804, 0x00000004, 0x800c0061, 0x4a054410,
    0x00000000, 0x76543210, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x47140000,
    0xfb004514, 0x00040000, 0x800c1940, 0x4a458110,
    0x01464a05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x4b058120,
    0x02464a05, 0x00000002, 0x00101966, 0x4c058220,
    0x02464b05, 0x00000100, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004904, 0x00000000, 0x00112931, 0x00020100,
    0xfa084c0c, 0x0400470c, 0x80000065, 0x4d058220,
    0x02000054, 0xfffffc00, 0x80001968, 0x4e058220,
    0x02004d04, 0x00000004, 0x800c0061, 0x4f054410,
    0x00000000, 0x76543210, 0x800c1940, 0x4f458110,
    0x01464f05, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x50058120,
    0x02464f05, 0x00000002, 0x00101966, 0x51058220,
    0x02465005, 0x00000140, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004e04, 0x00000000, 0x00112a31, 0x00020100,
    0xfa08510c, 0x0400480c, 0x80000065, 0x52058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x57058220,
    0x02000054, 0xfffffc00, 0x8000a065, 0x5d058220,
    0x02000054, 0xfffffc00, 0x80000065, 0x63058220,
    0x02000054, 0xfffffc00, 0x80001c68, 0x53058220,
    0x02005204, 0x00000004, 0x800c0061, 0x54054410,
    0x00000000, 0x76543210, 0x80001d68, 0x58058220,
    0x02005704, 0x00000004, 0x800c0061, 0x59054410,
    0x00000000, 0x76543210, 0x80001e68, 0x5e058220,
    0x02005d04, 0x00000004, 0x800c0061, 0x5f054410,
    0x00000000, 0x76543210, 0x80001f68, 0x64058220,
    0x02006304, 0x00000004, 0x800c0061, 0x65054410,
    0x00000000, 0x76543210, 0x800c1f40, 0x54458110,
    0x01465405, 0x00080008, 0x800c1e40, 0x59458110,
    0x01465905, 0x00080008, 0x800c1d40, 0x5f458110,
    0x01465f05, 0x00080008, 0x800c1c40, 0x65458110,
    0x01466505, 0x00080008, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x55058120,
    0x02465405, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x5a058120,
    0x02465905, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x60058120,
    0x02465f05, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x66058120,
    0x02466505, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005304, 0x00000000, 0x00112b31, 0x560e0100,
    0xfa00550c, 0x04000000, 0x00101b66, 0x5b058220,
    0x02465a05, 0x00000040, 0x00101b66, 0x61058220,
    0x02466005, 0x00000080, 0x00101b66, 0x67058220,
    0x02466605, 0x000000c0, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005804, 0x00000000, 0x00112c31, 0x5c0e0100,
    0xfa005b0c, 0x04000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02005e04, 0x00000000, 0x00112d31, 0x620e0100,
    0xfa00610c, 0x04000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02006404, 0x00000000, 0x00112e31, 0x680e0100,
    0xfa00670c, 0x04000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x20008c40, 0x5c20476a,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x20008d40, 0x6220486b, 0x80008b01, 0x00000000,
    0x00000000, 0x00000000, 0x20008e40, 0x56206869,
    0x00101362, 0x6d058aa0, 0x4a466a05, 0x0704ec3d,
    0x00101362, 0x6e058aa0, 0x4a466b05, 0x0704ec3d,
    0x00101362, 0x6c058aa0, 0x4a466905, 0x0704ec3d,
    0x00101338, 0x71050aa0, 0x1a466d05, 0x00460001,
    0x00101238, 0x73050aa0, 0x1a466e05, 0x00460001,
    0x00101138, 0x6f050aa0, 0x1a466c05, 0x00460001,
    0x00100070, 0x75058aa0, 0x5a466c05, 0x77f684df,
    0x00100070, 0x76058aa0, 0x3a466905, 0x0704ec3d,
    0x00102b41, 0x72058aa0, 0x0a467105, 0x417d70a4,
    0x00102a41, 0x74058aa0, 0x0a467305, 0x417d70a4,
    0x00102941, 0x70058aa0, 0x0a466f05, 0x417d70a4,
    0x00101465, 0x00010220, 0x22467505, 0x00467605,
    0x04101162, 0x77058220, 0x02467005, 0x00000000,
    0x00100070, 0x78058aa0, 0x3a466a05, 0x0704ec3d,
    0x00100070, 0x79058aa0, 0x5a466d05, 0x77f684df,
    0x00101165, 0x00010220, 0x22467905, 0x00467805,
    0x04101562, 0x7a058220, 0x02467205, 0x00000000,
    0x00100070, 0x7b058aa0, 0x3a466b05, 0x0704ec3d,
    0x00100070, 0x7c058aa0, 0x5a466e05, 0x77f684df,
    0x00101165, 0x00010220, 0x22467c05, 0x00467b05,
    0x04101662, 0x7d058220, 0x02467405, 0x00000000,
    0xe8180070, 0x1e00287e, 0x04100022, 0x0001c060,
    0x00000088, 0x00000088, 0xb4000061, 0x00102835,
    0x00101961, 0x02050230, 0x00443506, 0x00000000,
    0x00101969, 0x04058770, 0x02340205, 0x00000005,
    0x38001940, 0x04001606, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x09240000,
    0xfb000614, 0x000c0000, 0x3800a140, 0x1f00060d,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x0f240000, 0xfb000d14, 0x000c0000,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x00100069, 0x13058770, 0x02342605, 0x00000002,
    0x00101961, 0x36060320, 0x00341305, 0x00000000,
    0x00101961, 0x03050220, 0x00443606, 0x00000000,
    0x00100061, 0x02050220, 0x00443606, 0x00000000,
    0x00101970, 0x00018220, 0x42460205, 0x00000120,
    0x04100028, 0x0001c660, 0x00000090, 0x00000090,
    0x0010af69, 0x14058660, 0x02460205, 0x00000002,
    0x0010af61, 0x15054220, 0x00000000, 0x7f800000,
    0x0010af61, 0x16054220, 0x00000000, 0x7f800000,
    0x0010af61, 0x17054220, 0x00000000, 0x7f800000,
    0x0010af61, 0x18054220, 0x00000000, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cf31, 0x00000000, 0xea08140c, 0x000c1524,
    0x00100040, 0x02058660, 0x06460205, 0x00000800,
    0x00100027, 0x00014060, 0x00000000, 0xffffff60,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x42460305, 0x00000030,
    0x04100028, 0x0001c660, 0x00000090, 0x00000090,
    0x0010af69, 0x15058660, 0x02460305, 0x00000002,
    0x6480af61, 0x00000017, 0x6480af61, 0x00000018,
    0x6480af61, 0x00000019, 0x6480af61, 0x0000001a,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x00101d40, 0x16058660, 0x06461505, 0x00000480,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cf31, 0x00000000, 0xea08160c, 0x000c1724,
    0x00100040, 0x03058660, 0x06460305, 0x00000800,
    0x00100027, 0x00014060, 0x00000000, 0xffffff60,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x170c0000, 0xe23e000c, 0x00000000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x64a4af61, 0x00000018, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x80041961, 0x182d0000,
    0x0080002c, 0x00000000, 0x80001966, 0x18258220,
    0x02001824, 0x00000100, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8010cf31, 0x00000000,
    0x3008180c, 0x00000000, 0x80100001, 0x00000000,
    0xe0000000, 0x00000000, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x20008140, 0x0f000919,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x20008140, 0x10000a1a, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x20008140, 0x11000b1b,
    0x20001340, 0x5620191c, 0x20001340, 0x5c201a1d,
    0x20001340, 0x62201b1e, 0x20000b41, 0x77001c1f,
    0x20000b41, 0x7a001d20, 0x20001341, 0x7d001e21,
    0x00101361, 0x22050a20, 0x00461f05, 0x00000000,
    0x00101261, 0x24050a20, 0x00462005, 0x00000000,
    0x00101161, 0x25050a20, 0x00462105, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00100070, 0x00018220, 0x22467e05, 0x00000000,
    0x00100061, 0x04050120, 0x00003000, 0x00000000,
    0x00100065, 0x26058220, 0x02462305, 0x00000003,
    0x00100068, 0x27058220, 0x02462305, 0x00000002,
    0x80001261, 0x1d054660, 0x00000000, 0x00000001,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x28050660, 0x02001d04, 0x00462305,
    0x00101a70, 0x00018660, 0x16460405, 0x00000000,
    0x04100028, 0x0001c660, 0x00000928, 0x00000928,
    0x2c00004c, 0x00100429, 0x80101961, 0x10014110,
    0x00000000, 0x08800880, 0x00100069, 0x10018510,
    0x01562906, 0x00020002, 0x00100940, 0x10018110,
    0x01461001, 0x08800880, 0x00100961, 0x2a050220,
    0x00710000, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0xac301970, 0x22002a2b,
    0x00101965, 0x00010220, 0x22462b05, 0x00467e05,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x2c058220, 0x02460f05, 0xff800000,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x2d058220, 0x02461005, 0xff800000,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x2e058220, 0x02461105, 0xff800000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x2f058220, 0x02460905, 0x7f800000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x30058220, 0x02460a05, 0x7f800000,
    0x04100062, 0x31058220, 0x02460b05, 0x7f800000,
    0x78900e61, 0xff800035, 0x28000061, 0x00102c35,
    0x78900d61, 0xff800036, 0x28000061, 0x00102d36,
    0x78900c61, 0xff800037, 0x28000061, 0x00102e37,
    0x78900b61, 0x7f800032, 0x28000061, 0x00102f32,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x78901a61, 0x7f800033, 0x28000061, 0x00103033,
    0x78900961, 0x7f800034, 0x28000061, 0x00103134,
    0x00100070, 0x00018660, 0x16462605, 0x00000001,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1661, 0x51060220, 0x00443516, 0x00000000,
    0x800c1561, 0x59060220, 0x00443616, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1461, 0x61060220, 0x00443716, 0x00000000,
    0x800c1361, 0x39060220, 0x00443216, 0x00000000,
    0x800c1261, 0x41060220, 0x00443316, 0x00000000,
    0x800c1161, 0x49060220, 0x00443416, 0x00000000,
    0x800c1e62, 0x50060aa0, 0x4a443506, 0x00445106,
    0x800c1d62, 0x58060aa0, 0x4a443606, 0x00445906,
    0x800c1c62, 0x60060aa0, 0x4a443706, 0x00446106,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x38060aa0, 0x5a443206, 0x00443906,
    0x800c1a62, 0x40060aa0, 0x5a443306, 0x00444106,
    0x800c1962, 0x48060aa0, 0x5a443406, 0x00444906,
    0x800c0e61, 0x35160220, 0x00445006, 0x00000000,
    0x800c0d61, 0x36160220, 0x00445806, 0x00000000,
    0x800c0c61, 0x37160220, 0x00446006, 0x00000000,
    0x800c0b61, 0x32160220, 0x00443806, 0x00000000,
    0x800c0a61, 0x33160220, 0x00444006, 0x00000000,
    0x800c0961, 0x34160220, 0x00444806, 0x00000000,
    0x80081e61, 0x53070220, 0x00423517, 0x00000000,
    0x80080061, 0x54070220, 0x00423527, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x5b070220, 0x00423617, 0x00000000,
    0x80080061, 0x5c070220, 0x00423627, 0x00000000,
    0x80081f61, 0x63070220, 0x00423717, 0x00000000,
    0x80080061, 0x64070220, 0x00423727, 0x00000000,
    0x80081f61, 0x3b070220, 0x00423217, 0x00000000,
    0x80080061, 0x3c070220, 0x00423227, 0x00000000,
    0x80081f61, 0x43070220, 0x00423317, 0x00000000,
    0x80080061, 0x44070220, 0x00423327, 0x00000000,
    0x80080061, 0x4b070220, 0x00423417, 0x00000000,
    0x8008a961, 0x4c070220, 0x00423427, 0x00000000,
    0x80080062, 0x52070aa0, 0x4a425307, 0x00425407,
    0x80081f62, 0x5a070aa0, 0x4a425b07, 0x00425c07,
    0x80081f62, 0x62070aa0, 0x4a426307, 0x00426407,
    0x80081d62, 0x3a070aa0, 0x5a423b07, 0x00423c07,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80081b62, 0x42070aa0, 0x5a424307, 0x00424407,
    0x80081962, 0x4a070aa0, 0x5a424b07, 0x00424c07,
    0x80081661, 0x35270220, 0x00425207, 0x00000000,
    0x80081561, 0x36270220, 0x00425a07, 0x00000000,
    0x80081461, 0x37270220, 0x00426207, 0x00000000,
    0x80081361, 0x32270220, 0x00423a07, 0x00000000,
    0x80081261, 0x33270220, 0x00424207, 0x00000000,
    0x80081161, 0x34270220, 0x00424a07, 0x00000000,
    0x80081e61, 0x56070220, 0x00423517, 0x00000000,
    0x80080061, 0x57070220, 0x00423537, 0x00000000,
    0x80081f61, 0x5e070220, 0x00423617, 0x00000000,
    0x80080061, 0x5f070220, 0x00423637, 0x00000000,
    0x80081f61, 0x66070220, 0x00423717, 0x00000000,
    0x8008ae61, 0x67070220, 0x00423737, 0x00000000,
    0x80081f61, 0x3e070220, 0x00423217, 0x00000000,
    0x8008af61, 0x3f070220, 0x00423237, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x46070220, 0x00423317, 0x00000000,
    0x80080061, 0x47070220, 0x00423337, 0x00000000,
    0x80080061, 0x4e070220, 0x00423417, 0x00000000,
    0x80080061, 0x4f070220, 0x00423437, 0x00000000,
    0x8008ab62, 0x55070aa0, 0x4a425607, 0x00425707,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80081f62, 0x5d070aa0, 0x4a425e07, 0x00425f07,
    0x80081f62, 0x65070aa0, 0x4a426607, 0x00426707,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80081d62, 0x3d070aa0, 0x5a423e07, 0x00423f07,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80081b62, 0x45070aa0, 0x5a424607, 0x00424707,
    0x80081962, 0x4d070aa0, 0x5a424e07, 0x00424f07,
    0x80081661, 0x35370220, 0x00425507, 0x00000000,
    0x80081561, 0x36370220, 0x00425d07, 0x00000000,
    0x80081461, 0x37370220, 0x00426507, 0x00000000,
    0x80081361, 0x32370220, 0x00423d07, 0x00000000,
    0x80081261, 0x33370220, 0x00424507, 0x00000000,
    0x80081161, 0x34370220, 0x00424d07, 0x00000000,
    0x80081e62, 0x35450aa0, 0x4a003534, 0x00343545,
    0x80081e62, 0x35c50aa0, 0x4a0035b4, 0x003435c5,
    0x80081d62, 0x36450aa0, 0x4a003634, 0x00343645,
    0x80081d62, 0x36c50aa0, 0x4a0036b4, 0x003436c5,
    0x80081c62, 0x37450aa0, 0x4a003734, 0x00343745,
    0x80081c62, 0x37c50aa0, 0x4a0037b4, 0x003437c5,
    0x80081b62, 0x32450aa0, 0x5a003234, 0x00343245,
    0x80081b62, 0x32c50aa0, 0x5a0032b4, 0x003432c5,
    0x80081a62, 0x33450aa0, 0x5a003334, 0x00343345,
    0x80081a62, 0x33c50aa0, 0x5a0033b4, 0x003433c5,
    0x80081962, 0x34450aa0, 0x5a003434, 0x00343445,
    0x80081962, 0x34c50aa0, 0x5a0034b4, 0x003434c5,
    0x800c0062, 0x35850aa0, 0x4a003574, 0x00463585,
    0x800c1762, 0x36850aa0, 0x4a003674, 0x00463685,
    0x800c1762, 0x37850aa0, 0x4a003774, 0x00463785,
    0x800c1762, 0x32850aa0, 0x5a003274, 0x00463285,
    0x800c1762, 0x33850aa0, 0x5a003374, 0x00463385,
    0x800c1662, 0x34850aa0, 0x5a003474, 0x00463485,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x39050220, 0x020036f4, 0x000035f4,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x38050220, 0x020033f4, 0x000032f4,
    0x00100070, 0x00018660, 0x16462605, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x3a050220, 0x020034f4, 0x00463805,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x3b050220, 0x020037f4, 0x00463905,
    0x00100070, 0x00018660, 0x16462705, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x20780062, 0x3b203a18, 0x00100065, 0x00018220,
    0x22462805, 0x00000077, 0x04100022, 0x0001c060,
    0x00000080, 0x00000080, 0x68000041, 0x00602a3c,
    0x68000041, 0x0030273d, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100052, 0x3e040e68,
    0x0e0e3c05, 0x3d052605, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x3f058660,
    0x02463e05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cf31, 0x00000000,
    0xea2a3f0c, 0x0100180c, 0x00100025, 0x00004600,
    0x00000000, 0x00000050, 0xad800066, 0x7e202b40,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22464005, 0x00000000,
    0x00100061, 0x41050120, 0x00003000, 0x00000000,
    0xe8001965, 0x41000404, 0x00100027, 0x00014060,
    0x00000000, 0xfffff6c8, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x00101f40, 0x42058660,
    0x06462405, 0x00000010, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00100070, 0x00018220,
    0x22467e05, 0x00000000, 0x00100061, 0x05050120,
    0x00003000, 0x00000000, 0x00101970, 0x00018660,
    0x16460505, 0x00000000, 0x04100028, 0x0001c660,
    0x000008e8, 0x000008e8, 0x2c00004c, 0x00100543,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80100061, 0x10014110, 0x00000000, 0x10801080,
    0x00100069, 0x10018510, 0x01564306, 0x00020002,
    0x00100940, 0x10018110, 0x01461001, 0x10801080,
    0x00100961, 0x44050220, 0x00710000, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0xac301970, 0x42004445, 0x00101965, 0x00010220,
    0x22464505, 0x00467e05, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x46058220,
    0x02460f05, 0xff800000, 0x04100062, 0x47058220,
    0x02461005, 0xff800000, 0x04100062, 0x48058220,
    0x02461105, 0xff800000, 0x04100062, 0x49058220,
    0x02460905, 0x7f800000, 0x04100062, 0x4a058220,
    0x02460a05, 0x7f800000, 0x04100062, 0x4b058220,
    0x02460b05, 0x7f800000, 0x78900e61, 0xff80004f,
    0x28000061, 0x0010464f, 0x78900d61, 0xff800050,
    0x28000061, 0x00104750, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x78901c61, 0xff800051,
    0x28000061, 0x00104851, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x78901b61, 0x7f80004c,
    0x28000061, 0x0010494c, 0x78900a61, 0x7f80004d,
    0x28000061, 0x00104a4d, 0x78900961, 0x7f80004e,
    0x28000061, 0x00104b4e, 0x00100070, 0x00018660,
    0x16462605, 0x00000001, 0x800c1661, 0x04060220,
    0x00444f16, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x800c1561, 0x16060220,
    0x00445016, 0x00000000, 0x800c1461, 0x1e060220,
    0x00445116, 0x00000000, 0x800c1361, 0x69060220,
    0x00444c16, 0x00000000, 0x800c1261, 0x71060220,
    0x00444d16, 0x00000000, 0x800c1161, 0x79060220,
    0x00444e16, 0x00000000, 0x800c1e62, 0x03060aa0,
    0x4a444f06, 0x00440406, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x800c1d62, 0x15060aa0,
    0x4a445006, 0x00441606, 0x800c0c62, 0x1d060aa0,
    0x4a445106, 0x00441e06, 0x800c1b62, 0x68060aa0,
    0x5a444c06, 0x00446906, 0x800c1a62, 0x70060aa0,
    0x5a444d06, 0x00447106, 0x800c1962, 0x78060aa0,
    0x5a444e06, 0x00447906, 0x800c0e61, 0x4f160220,
    0x00440306, 0x00000000, 0x800c0d61, 0x50160220,
    0x00441506, 0x00000000, 0x800c0c61, 0x51160220,
    0x00441d06, 0x00000000, 0x800c0b61, 0x4c160220,
    0x00446806, 0x00000000, 0x800c0a61, 0x4d160220,
    0x00447006, 0x00000000, 0x800c0961, 0x4e160220,
    0x00447806, 0x00000000, 0x80081e61, 0x07070220,
    0x00424f17, 0x00000000, 0x8008a261, 0x0d070220,
    0x00424f27, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x18070220,
    0x00425017, 0x00000000, 0x8008a161, 0x19070220,
    0x00425027, 0x00000000, 0x80081f61, 0x20070220,
    0x00425117, 0x00000000, 0x80080061, 0x21070220,
    0x00425127, 0x00000000, 0x80081f61, 0x6b070220,
    0x00424c17, 0x00000000, 0x80082961, 0x6c070220,
    0x00424c27, 0x00000000, 0x80081f61, 0x73070220,
    0x00424d17, 0x00000000, 0x80080061, 0x74070220,
    0x00424d27, 0x00000000, 0x80080061, 0x7b070220,
    0x00424e17, 0x00000000, 0x80080061, 0x7c070220,
    0x00424e27, 0x00000000, 0x80080062, 0x06070aa0,
    0x4a420707, 0x00420d07, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80081f62, 0x17070aa0,
    0x4a421807, 0x00421907, 0x80081f62, 0x1f070aa0,
    0x4a422007, 0x00422107, 0x80081d62, 0x6a070aa0,
    0x5a426b07, 0x00426c07, 0x80081b62, 0x72070aa0,
    0x5a427307, 0x00427407, 0x80081962, 0x7a070aa0,
    0x5a427b07, 0x00427c07, 0x80081661, 0x4f270220,
    0x00420607, 0x00000000, 0x80081561, 0x50270220,
    0x00421707, 0x00000000, 0x80081461, 0x51270220,
    0x00421f07, 0x00000000, 0x80081361, 0x4c270220,
    0x00426a07, 0x00000000, 0x80081261, 0x4d270220,
    0x00427207, 0x00000000, 0x80081161, 0x4e270220,
    0x00427a07, 0x00000000, 0x80081e61, 0x13070220,
    0x00424f17, 0x00000000, 0x8008af61, 0x14070220,
    0x00424f37, 0x00000000, 0x80081f61, 0x1b070220,
    0x00425017, 0x00000000, 0x80080061, 0x1c070220,
    0x00425037, 0x00000000, 0x80081f61, 0x29070220,
    0x00425117, 0x00000000, 0x80080061, 0x2a070220,
    0x00425137, 0x00000000, 0x80080a61, 0x6e070220,
    0x00424c17, 0x00000000, 0x80080061, 0x6f070220,
    0x00424c37, 0x00000000, 0x80081f61, 0x76070220,
    0x00424d17, 0x00000000, 0x80080061, 0x77070220,
    0x00424d37, 0x00000000, 0x80080061, 0x7f070220,
    0x00424e17, 0x00000000, 0x80080061, 0x02070220,
    0x00424e37, 0x00000000, 0x8008a262, 0x0e070aa0,
    0x4a421307, 0x00421407, 0x80081f62, 0x1a070aa0,
    0x4a421b07, 0x00421c07, 0x80081f62, 0x23070aa0,
    0x4a422907, 0x00422a07, 0x80080b62, 0x6d070aa0,
    0x5a426e07, 0x00426f07, 0x80081b62, 0x75070aa0,
    0x5a427607, 0x00427707, 0x80081962, 0x7d070aa0,
    0x5a427f07, 0x00420207, 0x80081661, 0x4f370220,
    0x00420e07, 0x00000000, 0x80081561, 0x50370220,
    0x00421a07, 0x00000000, 0x80081461, 0x51370220,
    0x00422307, 0x00000000, 0x80081361, 0x4c370220,
    0x00426d07, 0x00000000, 0x80081261, 0x4d370220,
    0x00427507, 0x00000000, 0x80081161, 0x4e370220,
    0x00427d07, 0x00000000, 0x80081e62, 0x4f450aa0,
    0x4a004f34, 0x00344f45, 0x80081e62, 0x4fc50aa0,
    0x4a004fb4, 0x00344fc5, 0x80081d62, 0x50450aa0,
    0x4a005034, 0x00345045, 0x80081d62, 0x50c50aa0,
    0x4a0050b4, 0x003450c5, 0x80081c62, 0x51450aa0,
    0x4a005134, 0x00345145, 0x80081c62, 0x51c50aa0,
    0x4a0051b4, 0x003451c5, 0x80081b62, 0x4c450aa0,
    0x5a004c34, 0x00344c45, 0x80081b62, 0x4cc50aa0,
    0x5a004cb4, 0x00344cc5, 0x80081a62, 0x4d450aa0,
    0x5a004d34, 0x00344d45, 0x80081a62, 0x4dc50aa0,
    0x5a004db4, 0x00344dc5, 0x80081962, 0x4e450aa0,
    0x5a004e34, 0x00344e45, 0x80081962, 0x4ec50aa0,
    0x5a004eb4, 0x00344ec5, 0x800c0062, 0x4f850aa0,
    0x4a004f74, 0x00464f85, 0x800c1762, 0x50850aa0,
    0x4a005074, 0x00465085, 0x800c1762, 0x51850aa0,
    0x4a005174, 0x00465185, 0x800c1762, 0x4c850aa0,
    0x5a004c74, 0x00464c85, 0x800c1762, 0x4d850aa0,
    0x5a004d74, 0x00464d85, 0x800c1662, 0x4e850aa0,
    0x5a004e74, 0x00464e85, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x53050220,
    0x020050f4, 0x00004ff4, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x52050220,
    0x02004df4, 0x00004cf4, 0x00100070, 0x00018660,
    0x16462605, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x54050220,
    0x02004ef4, 0x00465205, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x55050220,
    0x020051f4, 0x00465305, 0x00100070, 0x00018660,
    0x16462705, 0x00000000, 0x20781a62, 0x55205419,
    0x00100065, 0x00018220, 0x22462805, 0x00000077,
    0x04100022, 0x0001c060, 0x00000090, 0x00000090,
    0x68000041, 0x00604456, 0x68000041, 0x00302757,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100052, 0x58040e68, 0x0e0e5605, 0x57052605,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x59058660, 0x02465805, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x00000000, 0xea2a590c, 0x0100190c,
    0x00100025, 0x00004600, 0x00000000, 0x00000060,
    0xad800066, 0x7e20455a, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00101a70, 0x00018220,
    0x22465a05, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x5b050120,
    0x00003000, 0x00000000, 0xe8001965, 0x5b000505,
    0x00100027, 0x00014060, 0x00000000, 0xfffff708,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x5c058660, 0x06462505, 0x00000020,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00100070, 0x00018220, 0x22467e05, 0x00000000,
    0x00100061, 0x06050120, 0x00003000, 0x00000000,
    0x00101970, 0x00018660, 0x16460605, 0x00000000,
    0x04100028, 0x0001c660, 0x00000998, 0x00000998,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x2c00004c, 0x0010065d, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80100061, 0x10014110,
    0x00000000, 0x17001700, 0x00100069, 0x10018510,
    0x01565d06, 0x00020002, 0x00100940, 0x10018110,
    0x01461001, 0x17001700, 0x00100961, 0x5e050220,
    0x00710000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac300070, 0x5c005e5f,
    0x00101965, 0x00010220, 0x22465f05, 0x00467e05,
    0x04100062, 0x60058220, 0x02460f05, 0xff800000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x61058220, 0x02461005, 0xff800000,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x62058220, 0x02461105, 0xff800000,
    0x04100062, 0x63058220, 0x02460905, 0x7f800000,
    0x04100062, 0x64058220, 0x02460a05, 0x7f800000,
    0x04100062, 0x65058220, 0x02460b05, 0x7f800000,
    0x78901e61, 0xff800069, 0x28000061, 0x00106069,
    0x78900d61, 0xff80006a, 0x28000061, 0x0010616a,
    0x78901c61, 0xff80006b, 0x28000061, 0x0010626b,
    0x78900b61, 0x7f800066, 0x28000061, 0x00106366,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x78901a61, 0x7f800067, 0x28000061, 0x00106467,
    0x78900961, 0x7f800068, 0x28000061, 0x00106568,
    0x00100070, 0x00018660, 0x16462605, 0x00000001,
    0x800c1661, 0x44060220, 0x00446916, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x800c1561, 0x4c060220, 0x00446a16, 0x00000000,
    0x800c1461, 0x54060220, 0x00446b16, 0x00000000,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x800c1361, 0x2c060220, 0x00446616, 0x00000000,
    0x800c1261, 0x34060220, 0x00446716, 0x00000000,
    0x800c1161, 0x3c060220, 0x00446816, 0x00000000,
    0x800c1e62, 0x43060aa0, 0x4a446906, 0x00444406,
    0x800c1d62, 0x4b060aa0, 0x4a446a06, 0x00444c06,
    0x800c1c62, 0x53060aa0, 0x4a446b06, 0x00445406,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x2b060aa0, 0x5a446606, 0x00442c06,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x800c1a62, 0x33060aa0, 0x5a446706, 0x00443406,
    0x800c1962, 0x3b060aa0, 0x5a446806, 0x00443c06,
    0x800c0e61, 0x69160220, 0x00444306, 0x00000000,
    0x800c0d61, 0x6a160220, 0x00444b06, 0x00000000,
    0x800c0c61, 0x6b160220, 0x00445306, 0x00000000,
    0x800c0b61, 0x66160220, 0x00442b06, 0x00000000,
    0x800c0a61, 0x67160220, 0x00443306, 0x00000000,
    0x800c0961, 0x68160220, 0x00443b06, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80081e61, 0x46070220, 0x00426917, 0x00000000,
    0x80080061, 0x47070220, 0x00426927, 0x00000000,
    0x80081f61, 0x4e070220, 0x00426a17, 0x00000000,
    0x80080061, 0x4f070220, 0x00426a27, 0x00000000,
    0x80081f61, 0x56070220, 0x00426b17, 0x00000000,
    0x80080061, 0x57070220, 0x00426b27, 0x00000000,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x2e070220, 0x00426617, 0x00000000,
    0x8008a661, 0x2f070220, 0x00426627, 0x00000000,
    0x80081f61, 0x36070220, 0x00426717, 0x00000000,
    0x80080061, 0x37070220, 0x00426727, 0x00000000,
    0x80080061, 0x3e070220, 0x00426817, 0x00000000,
    0x8008af61, 0x3f070220, 0x00426827, 0x00000000,
    0x8008a862, 0x45070aa0, 0x4a424607, 0x00424707,
    0x80081f62, 0x4d070aa0, 0x4a424e07, 0x00424f07,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80081f62, 0x55070aa0, 0x4a425607, 0x00425707,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x80081d62, 0x2d070aa0, 0x5a422e07, 0x00422f07,
    0x80081b62, 0x35070aa0, 0x5a423607, 0x00423707,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x3d070aa0, 0x5a423e07, 0x00423f07,
    0x80081661, 0x69270220, 0x00424507, 0x00000000,
    0x80081561, 0x6a270220, 0x00424d07, 0x00000000,
    0x80081461, 0x6b270220, 0x00425507, 0x00000000,
    0x80081361, 0x66270220, 0x00422d07, 0x00000000,
    0x80081261, 0x67270220, 0x00423507, 0x00000000,
    0x80081161, 0x68270220, 0x00423d07, 0x00000000,
    0x80081e61, 0x49070220, 0x00426917, 0x00000000,
    0x80080061, 0x4a070220, 0x00426937, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x51070220, 0x00426a17, 0x00000000,
    0x80080061, 0x52070220, 0x00426a37, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x59070220, 0x00426b17, 0x00000000,
    0x80080061, 0x5a070220, 0x00426b37, 0x00000000,
    0x80081f61, 0x31070220, 0x00426617, 0x00000000,
    0x80080061, 0x32070220, 0x00426637, 0x00000000,
    0x80081f61, 0x39070220, 0x00426717, 0x00000000,
    0x80080061, 0x3a070220, 0x00426737, 0x00000000,
    0x80080061, 0x41070220, 0x00426817, 0x00000000,
    0x80080061, 0x42070220, 0x00426837, 0x00000000,
    0x80080062, 0x48070aa0, 0x4a424907, 0x00424a07,
    0x80081f62, 0x50070aa0, 0x4a425107, 0x00425207,
    0x80081f62, 0x58070aa0, 0x4a425907, 0x00425a07,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80081d62, 0x30070aa0, 0x5a423107, 0x00423207,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x80081b62, 0x38070aa0, 0x5a423907, 0x00423a07,
    0x80081962, 0x40070aa0, 0x5a424107, 0x00424207,
    0x80081661, 0x69370220, 0x00424807, 0x00000000,
    0x80081561, 0x6a370220, 0x00425007, 0x00000000,
    0x80081461, 0x6b370220, 0x00425807, 0x00000000,
    0x80081361, 0x66370220, 0x00423007, 0x00000000,
    0x80081261, 0x67370220, 0x00423807, 0x00000000,
    0x80081161, 0x68370220, 0x00424007, 0x00000000,
    0x80081e62, 0x69450aa0, 0x4a006934, 0x00346945,
    0x80081e62, 0x69c50aa0, 0x4a0069b4, 0x003469c5,
    0x80081d62, 0x6a450aa0, 0x4a006a34, 0x00346a45,
    0x80081d62, 0x6ac50aa0, 0x4a006ab4, 0x00346ac5,
    0x80081c62, 0x6b450aa0, 0x4a006b34, 0x00346b45,
    0x80081c62, 0x6bc50aa0, 0x4a006bb4, 0x00346bc5,
    0x80081b62, 0x66450aa0, 0x5a006634, 0x00346645,
    0x80081b62, 0x66c50aa0, 0x5a0066b4, 0x003466c5,
    0x80081a62, 0x67450aa0, 0x5a006734, 0x00346745,
    0x80081a62, 0x67c50aa0, 0x5a0067b4, 0x003467c5,
    0x80081962, 0x68450aa0, 0x5a006834, 0x00346845,
    0x80081962, 0x68c50aa0, 0x5a0068b4, 0x003468c5,
    0x800c0062, 0x69850aa0, 0x4a006974, 0x00466985,
    0x800c1762, 0x6a850aa0, 0x4a006a74, 0x00466a85,
    0x800c1762, 0x6b850aa0, 0x4a006b74, 0x00466b85,
    0x800c1762, 0x66850aa0, 0x5a006674, 0x00466685,
    0x800c1762, 0x67850aa0, 0x5a006774, 0x00466785,
    0x800c1662, 0x68850aa0, 0x5a006874, 0x00466885,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x6d050220, 0x02006af4, 0x000069f4,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x6c050220, 0x020067f4, 0x000066f4,
    0x00100070, 0x00018660, 0x16462605, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x6e050220, 0x020068f4, 0x00466c05,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x6f050220, 0x02006bf4, 0x00466d05,
    0x00100070, 0x00018660, 0x16462705, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x20780062, 0x6f206e1a, 0x00100065, 0x00018220,
    0x22462805, 0x00000077, 0x04100022, 0x0001c060,
    0x00000080, 0x00000080, 0x68000041, 0x00605e70,
    0x68000041, 0x00302771, 0x00101952, 0x72040e68,
    0x0e0e7005, 0x71052605, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x73058660,
    0x02467205, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x00000000,
    0xea2a730c, 0x01001a0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000050, 0xad800066, 0x7e205f74,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22467405, 0x00000000,
    0x00100061, 0x75050120, 0x00003000, 0x00000000,
    0xe8001965, 0x75000606, 0x00100027, 0x00014060,
    0x00000000, 0xfffff658, 0x00100061, 0x00010660,
    0x20467e05, 0x00000000, 0x04100022, 0x0001c060,
    0x00000110, 0x00000110, 0x00100069, 0x76058660,
    0x02462205, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x77058660,
    0x06467605, 0x00000480, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x00000000,
    0xea10770c, 0x01000000, 0x00100069, 0x78058660,
    0x02462405, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x79058660,
    0x06467805, 0x000004c0, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c431, 0x00000000,
    0xea10790c, 0x01000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x7a058660,
    0x02462505, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x7b058660,
    0x06467a05, 0x00000500, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x00000000,
    0xea107b0c, 0x01000000, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x8000c631, 0x7c0c0000,
    0xe23e000c, 0x00000000, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x64a41161, 0x0000007d,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x7d2d0000, 0x0080002c, 0x00000000,
    0x80001966, 0x7d258220, 0x02007d24, 0x00000100,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8010c731, 0x00000000, 0x30087d0c, 0x00000000,
    0x80100001, 0x00000000, 0xe0000000, 0x00000000,
    0x00100061, 0x7e054770, 0x00000000, 0x00002c58,
    0x2c000061, 0x00100807, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x38000040, 0x01707e02,
    0x00101a70, 0x00018220, 0x42460705, 0x00000120,
    0x04100028, 0x0001c660, 0x00000128, 0x00000128,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x04058660, 0x02460705, 0x00000002,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c831, 0x1b0c0000, 0xea00040c, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xb400a861, 0x0010045b, 0x00101961, 0x05050230,
    0x00445b06, 0x00000000, 0x74508870, 0x7f801b00,
    0x04100022, 0x0001c060, 0x00000048, 0x00000048,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x38000a40, 0x05000209, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x00000000,
    0xfb2a0914, 0x01001b0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000020, 0x00100040, 0x07058660,
    0x06460705, 0x00000200, 0x00100027, 0x00014060,
    0x00000000, 0xfffffec8, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x00101761, 0x0a054770,
    0x00000000, 0x000030d8, 0x00101a70, 0x00018220,
    0x42460805, 0x00000030, 0x04100028, 0x0001c660,
    0x00000158, 0x00000158, 0x00108169, 0x0c058660,
    0x02460805, 0x00000002, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x0e058660,
    0x06460c05, 0x00000480, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0xb4001f61, 0x00100c5c,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010ca31, 0x1c0c0000, 0xea000e0c, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010aa61, 0x0d050230, 0x00445c06, 0x00000000,
    0x00108a70, 0x00018660, 0x26461c05, 0x00000000,
    0x04100022, 0x0001c060, 0x00000050, 0x00000050,
    0x38000f40, 0x01700a0f, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x38000940, 0x0d000f11,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x00000000, 0xfb181114, 0x01001c0c,
    0x00100025, 0x00004600, 0x00000000, 0x00000020,
    0x00100040, 0x08058660, 0x06460805, 0x00000200,
    0x00100027, 0x00014060, 0x00000000, 0xfffffe98,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_BFS_pass1_initial = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 1344,
      .base.program_size = 12352,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_BFS_pass1_initial_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_BFS_pass1_initial_printfs,
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
   .args = gfx20_bvh_build_BFS_BFS_pass1_initial_args,
   .code = gfx20_bvh_build_BFS_BFS_pass1_initial_code,
};
const char *gfx20_bvh_build_BFS_BFS_pass1_initial_sha1 = "9c1707e76f5d278e86e8b16f118a022b3fd6f622";

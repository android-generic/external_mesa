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

and(1)          g108<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g9<1>Q          0x0000000000000034Q             { align1 1H };
mov(16)         g14<1>Q         0x0000000000000008Q             { align1 1H };
mov(16)         g31<1>Q         0x0000000000000010Q             { align1 1H };
mov(16)         g41<1>Q         0x0000000000000020Q             { align1 1H };
mov(16)         g124<1>UD       g0.1<0,1,0>UD                   { align1 1H compacted };
and(16)         g33<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H };
and(1)          g46<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(1)         g1UD            g108UD          nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g36<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(8)          g50<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g43<2>UD        g124<1,1,0>UD                   { align1 1H I@5 compacted };
shl(16)         g34<1>D         g33<8,8,1>D     0x00000004UD    { align1 1H I@5 };
shr(1)          g49<1>UD        g46<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@5 };
add(8)          g36.8<1>UW      g36<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
add(8)          g50.8<1>UW      g50<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@5 };
mov(16)         g26<1>UQ        g43<8,4,2>UD                    { align1 1H I@5 };
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
and(1)          g93<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
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
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
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
mov(16)         g28<1>UD        0x7f800000UD                    { align1 1H $15.src };
mov(16)         g29<1>UD        0x7f800000UD                    { align1 1H $15.src };
mov(16)         g30<1>UD        0x7f800000UD                    { align1 1H $15.src };
mov(16)         g31<1>UD        0x7f800000UD                    { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g20UD           g28UD           0x02003504                0x00000100
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 4 flat )  base_offset 0  { align1 1H $15 };
add(16)         g2<1>D          g2<8,8,1>D      2048D           { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
nop                                                             ;

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g3<8,8,1>UD     0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g21<1>D         g3<8,8,1>D      0x00000002UD    { align1 1H };
mov(16)         g29<1>UD        0x00000000UD                    { align1 1H $15.src compacted };
mov(16)         g30<1>UD        0x00000000UD                    { align1 1H $15.src compacted };
mov(16)         g31<1>UD        0x00000000UD                    { align1 1H $15.src compacted };
mov(16)         g32<1>UD        0x00000000UD                    { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g22<1>D         g21<8,8,1>D     1152D           { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g22UD           g29UD           0x02003504                0x00000100
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 4 flat )  base_offset 0  { align1 1H $15 };
add(16)         g3<1>D          g3<8,8,1>D      2048D           { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(1)         g23UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g24<1>UD        0x00000000UD                    { align1 WE_all 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(2)          g24.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g24.2<1>UD      g24.2<0,1,0>UD  0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g24UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $1 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g25<1>F         g9<1,1,0>F      g15<1,1,0>F     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g26<1>F         g10<1,1,0>F     g16<1,1,0>F     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g27<1>F         g11<1,1,0>F     g17<1,1,0>F     { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g28<1>F         g25<1,1,0>F     -g86<1,1,0>F    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g29<1>F         g26<1,1,0>F     -g92<1,1,0>F    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g30<1>F         g27<1,1,0>F     -g98<1,1,0>F    { align1 1H F@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mul(16)         g31<1>F         g28<1,1,0>F     g119<1,1,0>F    { align1 1H A@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
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
mov(1)          g41<1>D         1D                              { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g40<1>D         g41<0,1,0>D     g35<8,8,1>UD    { align1 1H };

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
mov(16)         g3<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g3<1>F          g44<1,1,0>F                     { align1 1H compacted };
mov(16)         g5<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g5<1>F          g45<1,1,0>F                     { align1 1H compacted };
mov(16)         g6<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g6<1>F          g46<1,1,0>F                     { align1 1H compacted };
mov(16)         g125<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g125<1>F        g47<1,1,0>F                     { align1 1H compacted };
mov(16)         g127<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g127<1>F        g48<1,1,0>F                     { align1 1H compacted };
mov(16)         g2<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g2<1>F          g49<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     1D              { align1 1H };
mov(8)          g80<2>UD        g3.1<8,4,2>UD                   { align1 WE_all 1Q F@6 };
mov(8)          g88<2>UD        g5.1<8,4,2>UD                   { align1 WE_all 1Q F@5 };
mov(8)          g96<2>UD        g6.1<8,4,2>UD                   { align1 WE_all 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g56<2>UD        g125.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(8)          g64<2>UD        g127.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(8)          g72<2>UD        g2.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.ge(8)       g79<2>F         g3<8,4,2>F      g80<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.ge(8)       g87<2>F         g5<8,4,2>F      g88<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g95<2>F         g6<8,4,2>F      g96<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g55<2>F         g125<8,4,2>F    g56<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g63<2>F         g127<8,4,2>F    g64<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.l(8)        g71<2>F         g2<8,4,2>F      g72<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g3.1<2>UD       g79<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g5.1<2>UD       g87<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g6.1<2>UD       g95<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g125.1<2>UD     g55<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g127.1<2>UD     g63<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g2.1<2>UD       g71<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g82<4>UD        g3.1<8,2,4>UD                   { align1 WE_all 1N I@6 };
mov(4)          g83<4>UD        g3.2<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g90<4>UD        g5.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g91<4>UD        g5.2<8,2,4>UD                   { align1 WE_all 1N $12.src };
mov(4)          g98<4>UD        g6.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g99<4>UD        g6.2<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g58<4>UD        g125.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g59<4>UD        g125.2<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g66<4>UD        g127.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g67<4>UD        g127.2<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g74<4>UD        g2.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g75<4>UD        g2.2<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g81<4>F         g82<8,2,4>F     g83<8,2,4>F     { align1 WE_all 1N $10.src };
sel.ge(4)       g89<4>F         g90<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.ge(4)       g97<4>F         g98<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(4)        g57<4>F         g58<8,2,4>F     g59<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g65<4>F         g66<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g73<4>F         g74<8,2,4>F     g75<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g3.2<4>UD       g81<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g5.2<4>UD       g89<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g6.2<4>UD       g97<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g125.2<4>UD     g57<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g127.2<4>UD     g65<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g2.2<4>UD       g73<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g85<4>UD        g3.1<8,2,4>UD                   { align1 WE_all 1N I@6 };
mov(4)          g86<4>UD        g3.3<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g93<4>UD        g5.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g94<4>UD        g5.3<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g101<4>UD       g6.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g102<4>UD       g6.3<8,2,4>UD                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g61<4>UD        g125.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g62<4>UD        g125.3<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g69<4>UD        g127.1<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g70<4>UD        g127.3<8,2,4>UD                 { align1 WE_all 1N $8.src };
mov(4)          g77<4>UD        g2.1<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g78<4>UD        g2.3<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g84<4>F         g85<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g92<4>F         g93<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g100<4>F        g101<8,2,4>F    g102<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g60<4>F         g61<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g68<4>F         g69<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g76<4>F         g77<8,2,4>F     g78<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g3.3<4>UD       g84<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g5.3<4>UD       g92<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g6.3<4>UD       g100<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g125.3<4>UD     g60<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g127.3<4>UD     g68<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g2.3<4>UD       g76<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g3.4<1>F        g3.3<0,1,0>F    g3.4<4,4,1>F    { align1 WE_all 1N I@6 };
sel.ge(4)       g3.12<1>F       g3.11<0,1,0>F   g3.12<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g5.4<1>F        g5.3<0,1,0>F    g5.4<4,4,1>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g5.12<1>F       g5.11<0,1,0>F   g5.12<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g6.4<1>F        g6.3<0,1,0>F    g6.4<4,4,1>F    { align1 WE_all 1N I@4 };
sel.ge(4)       g6.12<1>F       g6.11<0,1,0>F   g6.12<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g125.4<1>F      g125.3<0,1,0>F  g125.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g125.12<1>F     g125.11<0,1,0>F g125.12<4,4,1>F { align1 WE_all 1N I@3 };
sel.l(4)        g127.4<1>F      g127.3<0,1,0>F  g127.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g127.12<1>F     g127.11<0,1,0>F g127.12<4,4,1>F { align1 WE_all 1N I@2 };
sel.l(4)        g2.4<1>F        g2.3<0,1,0>F    g2.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.l(4)        g2.12<1>F       g2.11<0,1,0>F   g2.12<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g3.8<1>F        g3.7<0,1,0>F    g3.8<8,8,1>F    { align1 WE_all 1Q };
sel.ge(8)       g5.8<1>F        g5.7<0,1,0>F    g5.8<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.ge(8)       g6.8<1>F        g6.7<0,1,0>F    g6.8<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.l(8)        g125.8<1>F      g125.7<0,1,0>F  g125.8<8,8,1>F  { align1 WE_all 1Q F@7 };
sel.l(8)        g127.8<1>F      g127.7<0,1,0>F  g127.8<8,8,1>F  { align1 WE_all 1Q F@7 };
sel.l(8)        g2.8<1>F        g2.7<0,1,0>F    g2.8<8,8,1>F    { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g51<1>UD        g5.15<0,1,0>UD  g3.15<0,1,0>UD  { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g50<1>UD        g127.15<0,1,0>UD g125.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g52<1>UD        g2.15<0,1,0>UD  g50<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g53<1>UD        g6.15<0,1,0>UD  g51<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
(+f0.0) sel(16) g30<1>F         g52<1,1,0>F     -g53<1,1,0>F    { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g40<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
mul(16)         g54<1>D         g42<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g55<1>D         g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g56<1>D         g54<8,8,1>D     g38<8,8,1>D     g55<1,1,1>D { align1 1H };
shl(16)         g57<1>D         g56<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g57UD           g30UD           0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $2 };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
or(16)          g58<1>D         ~g43<1,1,0>D    ~g126<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g58<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g59<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g4<1>UD         g4<1,1,0>UD     g59<1,1,0>UD    { align1 1H I@1 compacted };

LABEL6:
while(16)       JIP:  LABEL8                                    { align1 1H };
add(16)         g60<1>D         g36<8,8,1>D     16D             { align1 1H I@7 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g126<8,8,1>UD   0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
mov(16)         g5<1>UD         f0<0,1,0>UW                     { align1 1H };

LABEL11:
cmp.z.f0.0(16)  null<1>D        g5<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
fbl(16)         g61<1>UD        g5<1,1,0>UD                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0f00UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g61<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0f00UW        { align1 1H A@1 };
mov(16)         g62<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g63<1>D         g62<1,1,0>D     g60<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g63<8,8,1>UD    g126<8,8,1>UD   { align1 1H I@1 };
(+f0.0) sel(16) g64<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g65<1>UD        g16<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
(+f0.0) sel(16) g66<1>UD        g17<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g67<1>UD        g9<8,8,1>UD     0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g68<1>UD        g10<8,8,1>UD    0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
(+f0.0) sel(16) g69<1>UD        g11<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g19<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g19<1>F         g64<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g20<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g20<1>F         g65<1,1,0>F                     { align1 1H compacted };
mov(16)         g21<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g21<1>F         g66<1,1,0>F                     { align1 1H compacted };
mov(16)         g7<1>F          0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g7<1>F          g67<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g13<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g13<1>F         g68<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g14<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g14<1>F         g69<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     1D              { align1 1H };
mov(8)          g3<2>UD         g19.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g27<2>UD        g20.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g41<2>UD        g21.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g104<2>UD       g7.1<8,4,2>UD                   { align1 WE_all 1Q F@3 };
mov(8)          g112<2>UD       g13.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g120<2>UD       g14.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g2<2>F          g19<8,4,2>F     g3<8,4,2>F      { align1 WE_all 1Q A@6 };
sel.ge(8)       g26<2>F         g20<8,4,2>F     g27<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g35<2>F         g21<8,4,2>F     g41<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.l(8)        g103<2>F        g7<8,4,2>F      g104<8,4,2>F    { align1 WE_all 1Q I@3 };
sel.l(8)        g111<2>F        g13<8,4,2>F     g112<8,4,2>F    { align1 WE_all 1Q I@2 };
sel.l(8)        g119<2>F        g14<8,4,2>F     g120<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g19.1<2>UD      g2<8,4,2>UD                     { align1 WE_all 1Q A@6 };
mov(8)          g20.1<2>UD      g26<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g21.1<2>UD      g35<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g7.1<2>UD       g103<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g13.1<2>UD      g111<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g14.1<2>UD      g119<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g6<4>UD         g19.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g22<4>UD        g19.2<8,2,4>UD                  { align1 WE_all 1N $15.src };
mov(4)          g29<4>UD        g20.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g30<4>UD        g20.2<8,2,4>UD                  { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g43<4>UD        g21.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g44<4>UD        g21.2<8,2,4>UD                  { align1 WE_all 1N $3.src };
mov(4)          g106<4>UD       g7.1<8,2,4>UD                   { align1 WE_all 1N I@7 };
mov(4)          g107<4>UD       g7.2<8,2,4>UD                   { align1 WE_all 1N };
mov(4)          g114<4>UD       g13.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g115<4>UD       g13.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g122<4>UD       g14.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g123<4>UD       g14.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g4<4>F          g6<8,2,4>F      g22<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g28<4>F         g29<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g42<4>F         g43<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g105<4>F        g106<8,2,4>F    g107<8,2,4>F    { align1 WE_all 1N I@5 };
sel.l(4)        g113<4>F        g114<8,2,4>F    g115<8,2,4>F    { align1 WE_all 1N I@3 };
sel.l(4)        g121<4>F        g122<8,2,4>F    g123<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g19.2<4>UD      g4<8,2,4>UD                     { align1 WE_all 1N F@6 };
mov(4)          g20.2<4>UD      g28<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g21.2<4>UD      g42<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g7.2<4>UD       g105<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g13.2<4>UD      g113<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g14.2<4>UD      g121<8,2,4>UD                   { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g24<4>UD        g19.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g25<4>UD        g19.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g32<4>UD        g20.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g33<4>UD        g20.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g46<4>UD        g21.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g47<4>UD        g21.3<8,2,4>UD                  { align1 WE_all 1N $6.src };
mov(4)          g109<4>UD       g7.1<8,2,4>UD                   { align1 WE_all 1N A@3 };
mov(4)          g110<4>UD       g7.3<8,2,4>UD                   { align1 WE_all 1N M@2 };
mov(4)          g117<4>UD       g13.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g118<4>UD       g13.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g125<4>UD       g14.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g127<4>UD       g14.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g23<4>F         g24<8,2,4>F     g25<8,2,4>F     { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(4)       g31<4>F         g32<8,2,4>F     g33<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g45<4>F         g46<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g108<4>F        g109<8,2,4>F    g110<8,2,4>F    { align1 WE_all 1N A@1 };
sel.l(4)        g116<4>F        g117<8,2,4>F    g118<8,2,4>F    { align1 WE_all 1N I@3 };
sel.l(4)        g124<4>F        g125<8,2,4>F    g127<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g19.3<4>UD      g23<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g20.3<4>UD      g31<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g21.3<4>UD      g45<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g7.3<4>UD       g108<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g13.3<4>UD      g116<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g14.3<4>UD      g124<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g19.4<1>F       g19.3<0,1,0>F   g19.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g19.12<1>F      g19.11<0,1,0>F  g19.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g20.4<1>F       g20.3<0,1,0>F   g20.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g20.12<1>F      g20.11<0,1,0>F  g20.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g21.4<1>F       g21.3<0,1,0>F   g21.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g21.12<1>F      g21.11<0,1,0>F  g21.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@3 };
sel.l(4)        g7.12<1>F       g7.11<0,1,0>F   g7.12<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g13.4<1>F       g13.3<0,1,0>F   g13.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g13.12<1>F      g13.11<0,1,0>F  g13.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g14.4<1>F       g14.3<0,1,0>F   g14.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g14.12<1>F      g14.11<0,1,0>F  g14.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g19.8<1>F       g19.7<0,1,0>F   g19.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g20.8<1>F       g20.7<0,1,0>F   g20.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g21.8<1>F       g21.7<0,1,0>F   g21.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g7.8<1>F        g7.7<0,1,0>F    g7.8<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.l(8)        g13.8<1>F       g13.7<0,1,0>F   g13.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g14.8<1>F       g14.7<0,1,0>F   g14.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g71<1>UD        g20.15<0,1,0>UD g19.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g70<1>UD        g13.15<0,1,0>UD g7.15<0,1,0>UD  { align1 1H };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g72<1>UD        g14.15<0,1,0>UD g70<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g73<1>UD        g21.15<0,1,0>UD g71<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g31<1>F         g72<1,1,0>F     -g73<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g40<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL10             { align1 1H };
mul(16)         g74<1>D         g62<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g75<1>D         g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add3(16)        g76<1>D         g74<8,8,1>D     g38<8,8,1>D     g75<1,1,1>D { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g77<1>D         g76<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g77UD           g31UD           0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $3 };

LABEL10:
endif(16)       JIP:  LABEL9                                    { align1 1H };
or(16)          g78<1>D         ~g63<1,1,0>D    ~g126<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g78<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g79<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g5<1>UD         g5<1,1,0>UD     g79<1,1,0>UD    { align1 1H I@1 compacted };

LABEL9:
while(16)       JIP:  LABEL11                                   { align1 1H };
add(16)         g80<1>D         g37<8,8,1>D     32D             { align1 1H };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g126<8,8,1>UD   0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
mov(16)         g6<1>UD         f0<0,1,0>UW                     { align1 1H };

LABEL14:
cmp.z.f0.0(16)  null<1>D        g6<8,8,1>D      0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
fbl(16)         g81<1>UD        g6<1,1,0>UD                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x1400UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g81<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x1400UW        { align1 1H A@1 };
mov(16)         g82<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g83<1>D         g82<1,1,0>D     g80<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g83<8,8,1>UD    g126<8,8,1>UD   { align1 1H I@1 };
(+f0.0) sel(16) g84<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
(+f0.0) sel(16) g85<1>UD        g16<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g86<1>UD        g17<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g87<1>UD        g9<8,8,1>UD     0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g88<1>UD        g10<8,8,1>UD    0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g89<1>UD        g11<8,8,1>UD    0x7f800000UD    { align1 1H };
mov(16)         g25<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g25<1>F         g84<1,1,0>F                     { align1 1H compacted };
mov(16)         g26<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g26<1>F         g85<1,1,0>F                     { align1 1H compacted };
mov(16)         g27<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g27<1>F         g86<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g22<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@3 compacted };
mov(16)         g22<1>F         g87<1,1,0>F                     { align1 1H compacted };
mov(16)         g23<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g23<1>F         g88<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g24<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g24<1>F         g89<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     1D              { align1 1H };
mov(8)          g73<2>UD        g25.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g91<2>UD        g26.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g99<2>UD        g27.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g49<2>UD        g22.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g57<2>UD        g23.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g65<2>UD        g24.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g72<2>F         g25<8,4,2>F     g73<8,4,2>F     { align1 WE_all 1Q A@6 };
sel.ge(8)       g90<2>F         g26<8,4,2>F     g91<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g98<2>F         g27<8,4,2>F     g99<8,4,2>F     { align1 WE_all 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(8)        g48<2>F         g22<8,4,2>F     g49<8,4,2>F     { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(8)        g56<2>F         g23<8,4,2>F     g57<8,4,2>F     { align1 WE_all 1Q I@2 };
sel.l(8)        g64<2>F         g24<8,4,2>F     g65<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g25.1<2>UD      g72<8,4,2>UD                    { align1 WE_all 1Q A@6 };
mov(8)          g26.1<2>UD      g90<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g27.1<2>UD      g98<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g22.1<2>UD      g48<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g23.1<2>UD      g56<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g24.1<2>UD      g64<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g75<4>UD        g25.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g76<4>UD        g25.2<8,2,4>UD                  { align1 WE_all 1N $9.src };
mov(4)          g93<4>UD        g26.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g94<4>UD        g26.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g101<4>UD       g27.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g102<4>UD       g27.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g51<4>UD        g22.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g52<4>UD        g22.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g59<4>UD        g23.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g60<4>UD        g23.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g67<4>UD        g24.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g68<4>UD        g24.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g74<4>F         g75<8,2,4>F     g76<8,2,4>F     { align1 WE_all 1N };
sel.ge(4)       g92<4>F         g93<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g100<4>F        g101<8,2,4>F    g102<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g50<4>F         g51<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g58<4>F         g59<8,2,4>F     g60<8,2,4>F     { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g66<4>F         g67<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g25.2<4>UD      g74<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g26.2<4>UD      g92<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g27.2<4>UD      g100<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g22.2<4>UD      g50<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g23.2<4>UD      g58<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g24.2<4>UD      g66<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g78<4>UD        g25.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g79<4>UD        g25.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g96<4>UD        g26.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g97<4>UD        g26.3<8,2,4>UD                  { align1 WE_all 1N $13.src };
mov(4)          g104<4>UD       g27.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g105<4>UD       g27.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g54<4>UD        g22.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g55<4>UD        g22.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g62<4>UD        g23.1<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g63<4>UD        g23.3<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g70<4>UD        g24.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
mov(4)          g71<4>UD        g24.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g77<4>F         g78<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N $3.src };
sel.ge(4)       g95<4>F         g96<8,2,4>F     g97<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.ge(4)       g103<4>F        g104<8,2,4>F    g105<8,2,4>F    { align1 WE_all 1N I@7 };
sel.l(4)        g53<4>F         g54<8,2,4>F     g55<8,2,4>F     { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(4)        g61<4>F         g62<8,2,4>F     g63<8,2,4>F     { align1 WE_all 1N I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g69<4>F         g70<8,2,4>F     g71<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g25.3<4>UD      g77<8,2,4>UD                    { align1 WE_all 1N F@6 };
mov(4)          g26.3<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g27.3<4>UD      g103<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g22.3<4>UD      g53<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g23.3<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g24.3<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g25.4<1>F       g25.3<0,1,0>F   g25.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g25.12<1>F      g25.11<0,1,0>F  g25.12<4,4,1>F  { align1 WE_all 1N I@6 };
sel.ge(4)       g26.4<1>F       g26.3<0,1,0>F   g26.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g26.12<1>F      g26.11<0,1,0>F  g26.12<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g27.4<1>F       g27.3<0,1,0>F   g27.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g27.12<1>F      g27.11<0,1,0>F  g27.12<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g22.4<1>F       g22.3<0,1,0>F   g22.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g22.12<1>F      g22.11<0,1,0>F  g22.12<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g23.4<1>F       g23.3<0,1,0>F   g23.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g23.12<1>F      g23.11<0,1,0>F  g23.12<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g24.4<1>F       g24.3<0,1,0>F   g24.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g24.12<1>F      g24.11<0,1,0>F  g24.12<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g25.8<1>F       g25.7<0,1,0>F   g25.8<8,8,1>F   { align1 WE_all 1Q };
sel.ge(8)       g26.8<1>F       g26.7<0,1,0>F   g26.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.ge(8)       g27.8<1>F       g27.7<0,1,0>F   g27.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g22.8<1>F       g22.7<0,1,0>F   g22.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g23.8<1>F       g23.7<0,1,0>F   g23.8<8,8,1>F   { align1 WE_all 1Q F@7 };
sel.l(8)        g24.8<1>F       g24.7<0,1,0>F   g24.8<8,8,1>F   { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g91<1>UD        g26.15<0,1,0>UD g25.15<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g90<1>UD        g23.15<0,1,0>UD g22.15<0,1,0>UD { align1 1H };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g92<1>UD        g24.15<0,1,0>UD g90<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g93<1>UD        g27.15<0,1,0>UD g91<8,8,1>UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g32<1>F         g92<1,1,0>F     -g93<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g40<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
mul(16)         g94<1>D         g82<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g95<1>D         g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g96<1>D         g94<8,8,1>D     g38<8,8,1>D     g95<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g97<1>D         g96<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g97UD           g32UD           0x02040515                0x00000040
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $13 };

LABEL13:
endif(16)       JIP:  LABEL12                                   { align1 1H };
or(16)          g98<1>D         ~g83<1,1,0>D    ~g126<1,1,0>D   { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g98<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g99<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g6<1>UD         g6<1,1,0>UD     g99<1,1,0>UD    { align1 1H I@1 compacted };

LABEL12:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g126<8,8,1>D                    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL15             { align1 1H };
shl(16)         g100<1>D        g34<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g101<1>D        g100<8,8,1>D    1152D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g101UD          nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
shl(16)         g102<1>D        g36<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g103<1>D        g102<8,8,1>D    1216D           { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g103UD          nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
shl(16)         g104<1>D        g37<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g105<1>D        g104<8,8,1>D    1280D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g105UD          nullUD          0x02040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };

LABEL15:
endif(16)       JIP:  LABEL16                                   { align1 1H };

LABEL16:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
send(1)         g106UD          g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(16)         g107<1>UD       0x00000000UD                    { align1 WE_all 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(2)          g107.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g107.2<1>UD     g107.2<0,1,0>UD 0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g107UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $7 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N M@1 };
mov(16)         g108<1>Q        0x0000000000002c58Q             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
mov(16)         g7<1>UD         g8<1,1,0>UD                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add(16)         g110<1>Q        g108<1,1,0>Q    g1.4<0,1,0>Q    { align1 1H compacted };

LABEL19:
cmp.ge.f0.0(16) null<1>UD       g7<8,8,1>UD     0x00000120UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL17       UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g112<1>D        g7<8,8,1>D      0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g33UD           g112UD          nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g106<2>UD       g112<1,1,0>UD                   { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g113<1>UQ       g106<8,4,2>UD                   { align1 1H };
cmp.nz.f0.0(16) null<1>F        g33<1,1,0>F     0x7f800000F  /* infF */ { align1 1H $8.dst compacted };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g115<1>Q        g110<1,1,0>Q    g113<1,1,0>Q    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g115UD          g33UD           0x04040595                0x00000040
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $9 };

LABEL18:
endif(16)       JIP:  LABEL17                                   { align1 1H };
add(16)         g7<1>D          g7<8,8,1>D      512D            { align1 1H };

LABEL17:
while(16)       JIP:  LABEL19                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g116<1>Q        0x00000000000030d8Q             { align1 1H };

LABEL22:
cmp.ge.f0.0(16) null<1>UD       g8<8,8,1>UD     0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL20       UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g118<1>D        g8<8,8,1>D      0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g120<1>D        g118<8,8,1>D    1152D           { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         g107<2>UD       g118<1,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g34UD           g120UD          nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         g119<1>UQ       g107<8,4,2>UD                   { align1 1H $10.src };
cmp.nz.f0.0(16) null<1>D        g34<8,8,1>D     0D              { align1 1H $10.dst };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL21             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add(16)         g121<1>Q        g116<1,1,0>Q    g1.4<0,1,0>Q    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g123<1>Q        g121<1,1,0>Q    g119<1,1,0>Q    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g123UD          g34UD           0x0404058c                0x00000040
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $11 };

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
    0x80000065, 0x6c058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x09054770, 0x00000000, 0x00000034,
    0x00100061, 0x0e054770, 0x00000000, 0x00000008,
    0x00100061, 0x1f054770, 0x00000000, 0x00000010,
    0x00100061, 0x29054770, 0x00000000, 0x00000020,
    0x2c800061, 0x0011007c, 0x00100065, 0x21058220,
    0x02000024, 0x000000ff, 0x80000065, 0x2e058220,
    0x02000054, 0xfffffc00, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa006c0c, 0x00340000, 0x800c0061, 0x24054410,
    0x00000000, 0x76543210, 0x800c0061, 0x32054410,
    0x00000000, 0x76543210, 0xb4001d61, 0x00107c2b,
    0x00101d69, 0x22058660, 0x02462105, 0x00000004,
    0x80001d68, 0x31058220, 0x02002e04, 0x00000004,
    0x800c1d40, 0x24458110, 0x01462405, 0x00080008,
    0x800c1d40, 0x32458110, 0x01463205, 0x00080008,
    0x00101d61, 0x1a050230, 0x00442b06, 0x00000000,
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
    0x02000054, 0xfffffc00, 0x80000065, 0x5d058220,
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
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
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
    0x0010af61, 0x1c054220, 0x00000000, 0x7f800000,
    0x0010af61, 0x1d054220, 0x00000000, 0x7f800000,
    0x0010af61, 0x1e054220, 0x00000000, 0x7f800000,
    0x0010af61, 0x1f054220, 0x00000000, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cf31, 0x00000000, 0xea08140c, 0x000c1c24,
    0x00100040, 0x02058660, 0x06460205, 0x00000800,
    0x00100027, 0x00014060, 0x00000000, 0xffffff60,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x42460305, 0x00000030,
    0x04100028, 0x0001c660, 0x00000090, 0x00000090,
    0x00100069, 0x15058660, 0x02460305, 0x00000002,
    0x6480af61, 0x0000001d, 0x6480af61, 0x0000001e,
    0x6480af61, 0x0000001f, 0x6480af61, 0x00000020,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x00101d40, 0x16058660, 0x06461505, 0x00000480,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cf31, 0x00000000, 0xea08160c, 0x000c1d24,
    0x00100040, 0x03058660, 0x06460305, 0x00000800,
    0x00100027, 0x00014060, 0x00000000, 0xffffff60,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x170c0000, 0xe23e000c, 0x00000000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x64900061, 0x00000018, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x80041961, 0x182d0000,
    0x0080002c, 0x00000000, 0x80001966, 0x18258220,
    0x02001824, 0x00000100, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8010c131, 0x00000000,
    0x3008180c, 0x00000000, 0x80100001, 0x00000000,
    0xe0000000, 0x00000000, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x20008140, 0x0f000919,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x20008140, 0x10000a1a, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x20008140, 0x11000b1b,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x20001340, 0x5620191c, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x20001340, 0x5c201a1d,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x20001340, 0x62201b1e, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x20000b41, 0x77001c1f,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x20000b41, 0x7a001d20, 0x20001341, 0x7d001e21,
    0x00101361, 0x22050a20, 0x00461f05, 0x00000000,
    0x00101261, 0x24050a20, 0x00462005, 0x00000000,
    0x00101161, 0x25050a20, 0x00462105, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00100070, 0x00018220, 0x22467e05, 0x00000000,
    0x00100061, 0x04050120, 0x00003000, 0x00000000,
    0x00100065, 0x26058220, 0x02462305, 0x00000003,
    0x00100068, 0x27058220, 0x02462305, 0x00000002,
    0x80000061, 0x29054660, 0x00000000, 0x00000001,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x28050660, 0x02002904, 0x00462305,
    0x00101a70, 0x00018660, 0x16460405, 0x00000000,
    0x04100028, 0x0001c660, 0x000008e8, 0x000008e8,
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
    0x78900e61, 0xff800003, 0x28000061, 0x00102c03,
    0x78900d61, 0xff800005, 0x28000061, 0x00102d05,
    0x78900c61, 0xff800006, 0x28000061, 0x00102e06,
    0x78900b61, 0x7f80007d, 0x28000061, 0x00102f7d,
    0x78901a61, 0x7f80007f, 0x28000061, 0x0010307f,
    0x78900961, 0x7f800002, 0x28000061, 0x00103102,
    0x00100070, 0x00018660, 0x16462605, 0x00000001,
    0x800c1661, 0x50060220, 0x00440316, 0x00000000,
    0x800c1561, 0x58060220, 0x00440516, 0x00000000,
    0x800c1461, 0x60060220, 0x00440616, 0x00000000,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x800c1361, 0x38060220, 0x00447d16, 0x00000000,
    0x800c1261, 0x40060220, 0x00447f16, 0x00000000,
    0x800c1161, 0x48060220, 0x00440216, 0x00000000,
    0x800c1e62, 0x4f060aa0, 0x4a440306, 0x00445006,
    0x800c1d62, 0x57060aa0, 0x4a440506, 0x00445806,
    0x800c1c62, 0x5f060aa0, 0x4a440606, 0x00446006,
    0x800c1b62, 0x37060aa0, 0x5a447d06, 0x00443806,
    0x800c1a62, 0x3f060aa0, 0x5a447f06, 0x00444006,
    0x800c1962, 0x47060aa0, 0x5a440206, 0x00444806,
    0x800c0e61, 0x03160220, 0x00444f06, 0x00000000,
    0x800c0d61, 0x05160220, 0x00445706, 0x00000000,
    0x800c0c61, 0x06160220, 0x00445f06, 0x00000000,
    0x800c0b61, 0x7d160220, 0x00443706, 0x00000000,
    0x800c0a61, 0x7f160220, 0x00443f06, 0x00000000,
    0x800c0961, 0x02160220, 0x00444706, 0x00000000,
    0x80081e61, 0x52070220, 0x00420317, 0x00000000,
    0x80080061, 0x53070220, 0x00420327, 0x00000000,
    0x80081f61, 0x5a070220, 0x00420517, 0x00000000,
    0x8008ac61, 0x5b070220, 0x00420527, 0x00000000,
    0x80081f61, 0x62070220, 0x00420617, 0x00000000,
    0x80080061, 0x63070220, 0x00420627, 0x00000000,
    0x80081f61, 0x3a070220, 0x00427d17, 0x00000000,
    0x80080061, 0x3b070220, 0x00427d27, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x42070220, 0x00427f17, 0x00000000,
    0x80080061, 0x43070220, 0x00427f27, 0x00000000,
    0x80080061, 0x4a070220, 0x00420217, 0x00000000,
    0x80080061, 0x4b070220, 0x00420227, 0x00000000,
    0x8008aa62, 0x51070aa0, 0x4a425207, 0x00425307,
    0x80081f62, 0x59070aa0, 0x4a425a07, 0x00425b07,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80081f62, 0x61070aa0, 0x4a426207, 0x00426307,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80081d62, 0x39070aa0, 0x5a423a07, 0x00423b07,
    0x80081b62, 0x41070aa0, 0x5a424207, 0x00424307,
    0x80081962, 0x49070aa0, 0x5a424a07, 0x00424b07,
    0x80081661, 0x03270220, 0x00425107, 0x00000000,
    0x80081561, 0x05270220, 0x00425907, 0x00000000,
    0x80081461, 0x06270220, 0x00426107, 0x00000000,
    0x80081361, 0x7d270220, 0x00423907, 0x00000000,
    0x80081261, 0x7f270220, 0x00424107, 0x00000000,
    0x80081161, 0x02270220, 0x00424907, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80081e61, 0x55070220, 0x00420317, 0x00000000,
    0x80080061, 0x56070220, 0x00420337, 0x00000000,
    0x80081f61, 0x5d070220, 0x00420517, 0x00000000,
    0x80080061, 0x5e070220, 0x00420537, 0x00000000,
    0x80081f61, 0x65070220, 0x00420617, 0x00000000,
    0x80080061, 0x66070220, 0x00420637, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x3d070220, 0x00427d17, 0x00000000,
    0x80080061, 0x3e070220, 0x00427d37, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x45070220, 0x00427f17, 0x00000000,
    0x8008a861, 0x46070220, 0x00427f37, 0x00000000,
    0x80080061, 0x4d070220, 0x00420217, 0x00000000,
    0x80080061, 0x4e070220, 0x00420237, 0x00000000,
    0x80080062, 0x54070aa0, 0x4a425507, 0x00425607,
    0x80081f62, 0x5c070aa0, 0x4a425d07, 0x00425e07,
    0x80081f62, 0x64070aa0, 0x4a426507, 0x00426607,
    0x80081d62, 0x3c070aa0, 0x5a423d07, 0x00423e07,
    0x80081b62, 0x44070aa0, 0x5a424507, 0x00424607,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x4c070aa0, 0x5a424d07, 0x00424e07,
    0x80081661, 0x03370220, 0x00425407, 0x00000000,
    0x80081561, 0x05370220, 0x00425c07, 0x00000000,
    0x80081461, 0x06370220, 0x00426407, 0x00000000,
    0x80081361, 0x7d370220, 0x00423c07, 0x00000000,
    0x80081261, 0x7f370220, 0x00424407, 0x00000000,
    0x80081161, 0x02370220, 0x00424c07, 0x00000000,
    0x80081e62, 0x03450aa0, 0x4a000334, 0x00340345,
    0x80081e62, 0x03c50aa0, 0x4a0003b4, 0x003403c5,
    0x80081d62, 0x05450aa0, 0x4a000534, 0x00340545,
    0x80081d62, 0x05c50aa0, 0x4a0005b4, 0x003405c5,
    0x80081c62, 0x06450aa0, 0x4a000634, 0x00340645,
    0x80081c62, 0x06c50aa0, 0x4a0006b4, 0x003406c5,
    0x80081b62, 0x7d450aa0, 0x5a007d34, 0x00347d45,
    0x80081b62, 0x7dc50aa0, 0x5a007db4, 0x00347dc5,
    0x80081a62, 0x7f450aa0, 0x5a007f34, 0x00347f45,
    0x80081a62, 0x7fc50aa0, 0x5a007fb4, 0x00347fc5,
    0x80081962, 0x02450aa0, 0x5a000234, 0x00340245,
    0x80081962, 0x02c50aa0, 0x5a0002b4, 0x003402c5,
    0x800c0062, 0x03850aa0, 0x4a000374, 0x00460385,
    0x800c1762, 0x05850aa0, 0x4a000574, 0x00460585,
    0x800c1762, 0x06850aa0, 0x4a000674, 0x00460685,
    0x800c1762, 0x7d850aa0, 0x5a007d74, 0x00467d85,
    0x800c1762, 0x7f850aa0, 0x5a007f74, 0x00467f85,
    0x800c1662, 0x02850aa0, 0x5a000274, 0x00460285,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x0410a462, 0x33050220, 0x020005f4, 0x000003f4,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x32050220, 0x02007ff4, 0x00007df4,
    0x00100070, 0x00018660, 0x16462605, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x34050220, 0x020002f4, 0x00463205,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x35050220, 0x020006f4, 0x00463305,
    0x00100070, 0x00018660, 0x16462705, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x20781a62, 0x3520341e, 0x00100065, 0x00018220,
    0x22462805, 0x00000077, 0x04100022, 0x0001c060,
    0x00000070, 0x00000070, 0x68000041, 0x00602a36,
    0x68000041, 0x00302737, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100052, 0x38040e68,
    0x0e0e3605, 0x37052605, 0x00101969, 0x39058660,
    0x02463805, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x00000000,
    0xea2a390c, 0x01001e0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000050, 0xad800066, 0x7e202b3a,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22463a05, 0x00000000,
    0x00100061, 0x3b050120, 0x00003000, 0x00000000,
    0xe8001965, 0x3b000404, 0x00100027, 0x00014060,
    0x00000000, 0xfffff708, 0x00101f40, 0x3c058660,
    0x06462405, 0x00000010, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00100070, 0x00018220,
    0x22467e05, 0x00000000, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x05050120,
    0x00003000, 0x00000000, 0x00101970, 0x00018660,
    0x16460505, 0x00000000, 0x04100028, 0x0001c660,
    0x00000938, 0x00000938, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x2c00004c, 0x0010053d,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80100061, 0x10014110, 0x00000000, 0x0f000f00,
    0x00100069, 0x10018510, 0x01563d06, 0x00020002,
    0x00100940, 0x10018110, 0x01461001, 0x0f000f00,
    0x00100961, 0x3e050220, 0x00710000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xac300070, 0x3c003e3f, 0x00101965, 0x00010220,
    0x22463f05, 0x00467e05, 0x04100062, 0x40058220,
    0x02460f05, 0xff800000, 0x04100062, 0x41058220,
    0x02461005, 0xff800000, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x42058220,
    0x02461105, 0xff800000, 0x04100062, 0x43058220,
    0x02460905, 0x7f800000, 0x04100062, 0x44058220,
    0x02460a05, 0x7f800000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x45058220,
    0x02460b05, 0x7f800000, 0x78900e61, 0xff800013,
    0x28000061, 0x00104013, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x78900d61, 0xff800014,
    0x28000061, 0x00104114, 0x78900c61, 0xff800015,
    0x28000061, 0x00104215, 0x78900b61, 0x7f800007,
    0x28000061, 0x00104307, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x78900a61, 0x7f80000d,
    0x28000061, 0x0010440d, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x78900961, 0x7f80000e,
    0x28000061, 0x0010450e, 0x00100070, 0x00018660,
    0x16462605, 0x00000001, 0x800c1661, 0x03060220,
    0x00441316, 0x00000000, 0x800c1561, 0x1b060220,
    0x00441416, 0x00000000, 0x800c1461, 0x29060220,
    0x00441516, 0x00000000, 0x800c1361, 0x68060220,
    0x00440716, 0x00000000, 0x800c1261, 0x70060220,
    0x00440d16, 0x00000000, 0x800c1161, 0x78060220,
    0x00440e16, 0x00000000, 0x800c0e62, 0x02060aa0,
    0x4a441306, 0x00440306, 0x800c1d62, 0x1a060aa0,
    0x4a441406, 0x00441b06, 0x800c1c62, 0x23060aa0,
    0x4a441506, 0x00442906, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x800c1b62, 0x67060aa0,
    0x5a440706, 0x00446806, 0x800c1a62, 0x6f060aa0,
    0x5a440d06, 0x00447006, 0x800c1962, 0x77060aa0,
    0x5a440e06, 0x00447806, 0x800c0e61, 0x13160220,
    0x00440206, 0x00000000, 0x800c0d61, 0x14160220,
    0x00441a06, 0x00000000, 0x800c0c61, 0x15160220,
    0x00442306, 0x00000000, 0x800c0b61, 0x07160220,
    0x00446706, 0x00000000, 0x800c0a61, 0x0d160220,
    0x00446f06, 0x00000000, 0x800c0961, 0x0e160220,
    0x00447706, 0x00000000, 0x80081e61, 0x06070220,
    0x00421317, 0x00000000, 0x8008af61, 0x16070220,
    0x00421327, 0x00000000, 0x80081f61, 0x1d070220,
    0x00421417, 0x00000000, 0x8008a261, 0x1e070220,
    0x00421427, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x2b070220,
    0x00421517, 0x00000000, 0x8008a361, 0x2c070220,
    0x00421527, 0x00000000, 0x80081f61, 0x6a070220,
    0x00420717, 0x00000000, 0x80080061, 0x6b070220,
    0x00420727, 0x00000000, 0x80081f61, 0x72070220,
    0x00420d17, 0x00000000, 0x80080061, 0x73070220,
    0x00420d27, 0x00000000, 0x80080061, 0x7a070220,
    0x00420e17, 0x00000000, 0x80080061, 0x7b070220,
    0x00420e27, 0x00000000, 0x80080062, 0x04070aa0,
    0x4a420607, 0x00421607, 0x80081f62, 0x1c070aa0,
    0x4a421d07, 0x00421e07, 0x80081f62, 0x2a070aa0,
    0x4a422b07, 0x00422c07, 0x80081d62, 0x69070aa0,
    0x5a426a07, 0x00426b07, 0x80081b62, 0x71070aa0,
    0x5a427207, 0x00427307, 0x80081962, 0x79070aa0,
    0x5a427a07, 0x00427b07, 0x80081661, 0x13270220,
    0x00420407, 0x00000000, 0x80081561, 0x14270220,
    0x00421c07, 0x00000000, 0x80081461, 0x15270220,
    0x00422a07, 0x00000000, 0x80081361, 0x07270220,
    0x00426907, 0x00000000, 0x80081261, 0x0d270220,
    0x00427107, 0x00000000, 0x80081161, 0x0e270220,
    0x00427907, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80081e61, 0x18070220,
    0x00421317, 0x00000000, 0x80080061, 0x19070220,
    0x00421337, 0x00000000, 0x80081f61, 0x20070220,
    0x00421417, 0x00000000, 0x80080061, 0x21070220,
    0x00421437, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x80081f61, 0x2e070220,
    0x00421517, 0x00000000, 0x8008a661, 0x2f070220,
    0x00421537, 0x00000000, 0x80080b61, 0x6d070220,
    0x00420717, 0x00000000, 0x80082a61, 0x6e070220,
    0x00420737, 0x00000000, 0x80081f61, 0x75070220,
    0x00420d17, 0x00000000, 0x80080061, 0x76070220,
    0x00420d37, 0x00000000, 0x80080061, 0x7d070220,
    0x00420e17, 0x00000000, 0x80080061, 0x7f070220,
    0x00420e37, 0x00000000, 0x80080062, 0x17070aa0,
    0x4a421807, 0x00421907, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x80081f62, 0x1f070aa0,
    0x4a422007, 0x00422107, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x80081f62, 0x2d070aa0,
    0x4a422e07, 0x00422f07, 0x80080962, 0x6c070aa0,
    0x5a426d07, 0x00426e07, 0x80081b62, 0x74070aa0,
    0x5a427507, 0x00427607, 0x80081962, 0x7c070aa0,
    0x5a427d07, 0x00427f07, 0x80081661, 0x13370220,
    0x00421707, 0x00000000, 0x80081561, 0x14370220,
    0x00421f07, 0x00000000, 0x80081461, 0x15370220,
    0x00422d07, 0x00000000, 0x80081361, 0x07370220,
    0x00426c07, 0x00000000, 0x80081261, 0x0d370220,
    0x00427407, 0x00000000, 0x80081161, 0x0e370220,
    0x00427c07, 0x00000000, 0x80081e62, 0x13450aa0,
    0x4a001334, 0x00341345, 0x80081e62, 0x13c50aa0,
    0x4a0013b4, 0x003413c5, 0x80081d62, 0x14450aa0,
    0x4a001434, 0x00341445, 0x80081d62, 0x14c50aa0,
    0x4a0014b4, 0x003414c5, 0x80081c62, 0x15450aa0,
    0x4a001534, 0x00341545, 0x80081c62, 0x15c50aa0,
    0x4a0015b4, 0x003415c5, 0x80081b62, 0x07450aa0,
    0x5a000734, 0x00340745, 0x80081b62, 0x07c50aa0,
    0x5a0007b4, 0x003407c5, 0x80081a62, 0x0d450aa0,
    0x5a000d34, 0x00340d45, 0x80081a62, 0x0dc50aa0,
    0x5a000db4, 0x00340dc5, 0x80081962, 0x0e450aa0,
    0x5a000e34, 0x00340e45, 0x80081962, 0x0ec50aa0,
    0x5a000eb4, 0x00340ec5, 0x800c0062, 0x13850aa0,
    0x4a001374, 0x00461385, 0x800c1762, 0x14850aa0,
    0x4a001474, 0x00461485, 0x800c1762, 0x15850aa0,
    0x4a001574, 0x00461585, 0x800c1762, 0x07850aa0,
    0x5a000774, 0x00460785, 0x800c1762, 0x0d850aa0,
    0x5a000d74, 0x00460d85, 0x800c1662, 0x0e850aa0,
    0x5a000e74, 0x00460e85, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x47050220,
    0x020014f4, 0x000013f4, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x46050220,
    0x02000df4, 0x000007f4, 0x00100070, 0x00018660,
    0x16462605, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x48050220,
    0x02000ef4, 0x00464605, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x04100062, 0x49050220,
    0x020015f4, 0x00464705, 0x00100070, 0x00018660,
    0x16462705, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x20780062, 0x4920481f,
    0x00100065, 0x00018220, 0x22462805, 0x00000077,
    0x04100022, 0x0001c060, 0x00000090, 0x00000090,
    0x68000041, 0x00603e4a, 0x68000041, 0x0030274b,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x00101952, 0x4c040e68, 0x0e0e4a05, 0x4b052605,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x4d058660, 0x02464c05, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x00000000, 0xea2a4d0c, 0x01001f0c,
    0x00100025, 0x00004600, 0x00000000, 0x00000050,
    0xad800066, 0x7e203f4e, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00101a70, 0x00018220,
    0x22464e05, 0x00000000, 0x00100061, 0x4f050120,
    0x00003000, 0x00000000, 0xe8001965, 0x4f000505,
    0x00100027, 0x00014060, 0x00000000, 0xfffff6b8,
    0x00100040, 0x50058660, 0x06462505, 0x00000020,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00100070, 0x00018220, 0x22467e05, 0x00000000,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x06050120, 0x00003000, 0x00000000,
    0x00101970, 0x00018660, 0x16460605, 0x00000000,
    0x04100028, 0x0001c660, 0x00000928, 0x00000928,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x2c00004c, 0x00100651, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80100061, 0x10014110,
    0x00000000, 0x14001400, 0x00100069, 0x10018510,
    0x01565106, 0x00020002, 0x00100940, 0x10018110,
    0x01461001, 0x14001400, 0x00100961, 0x52050220,
    0x00710000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac300070, 0x50005253,
    0x00101965, 0x00010220, 0x22465305, 0x00467e05,
    0x04100062, 0x54058220, 0x02460f05, 0xff800000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x55058220, 0x02461005, 0xff800000,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x56058220, 0x02461105, 0xff800000,
    0x04100062, 0x57058220, 0x02460905, 0x7f800000,
    0x04100062, 0x58058220, 0x02460a05, 0x7f800000,
    0x04100062, 0x59058220, 0x02460b05, 0x7f800000,
    0x78900e61, 0xff800019, 0x28000061, 0x00105419,
    0x78900d61, 0xff80001a, 0x28000061, 0x0010551a,
    0x78900c61, 0xff80001b, 0x28000061, 0x0010561b,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x78900b61, 0x7f800016, 0x28000061, 0x00105716,
    0x78900a61, 0x7f800017, 0x28000061, 0x00105817,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x78900961, 0x7f800018, 0x28000061, 0x00105918,
    0x00100070, 0x00018660, 0x16462605, 0x00000001,
    0x800c1661, 0x49060220, 0x00441916, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x800c1561, 0x5b060220, 0x00441a16, 0x00000000,
    0x800c1461, 0x63060220, 0x00441b16, 0x00000000,
    0x800c1361, 0x31060220, 0x00441616, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x800c1261, 0x39060220, 0x00441716, 0x00000000,
    0x800c1161, 0x41060220, 0x00441816, 0x00000000,
    0x800c0e62, 0x48060aa0, 0x4a441906, 0x00444906,
    0x800c1d62, 0x5a060aa0, 0x4a441a06, 0x00445b06,
    0x800c1c62, 0x62060aa0, 0x4a441b06, 0x00446306,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x800c1b62, 0x30060aa0, 0x5a441606, 0x00443106,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x800c1a62, 0x38060aa0, 0x5a441706, 0x00443906,
    0x800c1962, 0x40060aa0, 0x5a441806, 0x00444106,
    0x800c0e61, 0x19160220, 0x00444806, 0x00000000,
    0x800c0d61, 0x1a160220, 0x00445a06, 0x00000000,
    0x800c0c61, 0x1b160220, 0x00446206, 0x00000000,
    0x800c0b61, 0x16160220, 0x00443006, 0x00000000,
    0x800c0a61, 0x17160220, 0x00443806, 0x00000000,
    0x800c0961, 0x18160220, 0x00444006, 0x00000000,
    0x80081e61, 0x4b070220, 0x00421917, 0x00000000,
    0x8008a961, 0x4c070220, 0x00421927, 0x00000000,
    0x80081f61, 0x5d070220, 0x00421a17, 0x00000000,
    0x80080061, 0x5e070220, 0x00421a27, 0x00000000,
    0x80081f61, 0x65070220, 0x00421b17, 0x00000000,
    0x80080061, 0x66070220, 0x00421b27, 0x00000000,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x80081f61, 0x33070220, 0x00421617, 0x00000000,
    0x80080061, 0x34070220, 0x00421627, 0x00000000,
    0x80081f61, 0x3b070220, 0x00421717, 0x00000000,
    0x80080061, 0x3c070220, 0x00421727, 0x00000000,
    0x80080061, 0x43070220, 0x00421817, 0x00000000,
    0x80080061, 0x44070220, 0x00421827, 0x00000000,
    0x80080062, 0x4a070aa0, 0x4a424b07, 0x00424c07,
    0x80081f62, 0x5c070aa0, 0x4a425d07, 0x00425e07,
    0x80081f62, 0x64070aa0, 0x4a426507, 0x00426607,
    0x80081d62, 0x32070aa0, 0x5a423307, 0x00423407,
    0x80081b62, 0x3a070aa0, 0x5a423b07, 0x00423c07,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x42070aa0, 0x5a424307, 0x00424407,
    0x80081661, 0x19270220, 0x00424a07, 0x00000000,
    0x80081561, 0x1a270220, 0x00425c07, 0x00000000,
    0x80081461, 0x1b270220, 0x00426407, 0x00000000,
    0x80081361, 0x16270220, 0x00423207, 0x00000000,
    0x80081261, 0x17270220, 0x00423a07, 0x00000000,
    0x80081161, 0x18270220, 0x00424207, 0x00000000,
    0x80081e61, 0x4e070220, 0x00421917, 0x00000000,
    0x80080061, 0x4f070220, 0x00421937, 0x00000000,
    0x80081f61, 0x60070220, 0x00421a17, 0x00000000,
    0x8008ad61, 0x61070220, 0x00421a37, 0x00000000,
    0x80081f61, 0x68070220, 0x00421b17, 0x00000000,
    0x80080061, 0x69070220, 0x00421b37, 0x00000000,
    0x80081f61, 0x36070220, 0x00421617, 0x00000000,
    0x80080061, 0x37070220, 0x00421637, 0x00000000,
    0x80081f61, 0x3e070220, 0x00421717, 0x00000000,
    0x80080061, 0x3f070220, 0x00421737, 0x00000000,
    0x8008a861, 0x46070220, 0x00421817, 0x00000000,
    0x80080061, 0x47070220, 0x00421837, 0x00000000,
    0x8008a362, 0x4d070aa0, 0x4a424e07, 0x00424f07,
    0x80081f62, 0x5f070aa0, 0x4a426007, 0x00426107,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x80081f62, 0x67070aa0, 0x4a426807, 0x00426907,
    0x80081d62, 0x35070aa0, 0x5a423607, 0x00423707,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80081b62, 0x3d070aa0, 0x5a423e07, 0x00423f07,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80081962, 0x45070aa0, 0x5a424607, 0x00424707,
    0x80081661, 0x19370220, 0x00424d07, 0x00000000,
    0x80081561, 0x1a370220, 0x00425f07, 0x00000000,
    0x80081461, 0x1b370220, 0x00426707, 0x00000000,
    0x80081361, 0x16370220, 0x00423507, 0x00000000,
    0x80081261, 0x17370220, 0x00423d07, 0x00000000,
    0x80081161, 0x18370220, 0x00424507, 0x00000000,
    0x80081e62, 0x19450aa0, 0x4a001934, 0x00341945,
    0x80081e62, 0x19c50aa0, 0x4a0019b4, 0x003419c5,
    0x80081d62, 0x1a450aa0, 0x4a001a34, 0x00341a45,
    0x80081d62, 0x1ac50aa0, 0x4a001ab4, 0x00341ac5,
    0x80081c62, 0x1b450aa0, 0x4a001b34, 0x00341b45,
    0x80081c62, 0x1bc50aa0, 0x4a001bb4, 0x00341bc5,
    0x80081b62, 0x16450aa0, 0x5a001634, 0x00341645,
    0x80081b62, 0x16c50aa0, 0x5a0016b4, 0x003416c5,
    0x80081a62, 0x17450aa0, 0x5a001734, 0x00341745,
    0x80081a62, 0x17c50aa0, 0x5a0017b4, 0x003417c5,
    0x80081962, 0x18450aa0, 0x5a001834, 0x00341845,
    0x80081962, 0x18c50aa0, 0x5a0018b4, 0x003418c5,
    0x800c0062, 0x19850aa0, 0x4a001974, 0x00461985,
    0x800c1762, 0x1a850aa0, 0x4a001a74, 0x00461a85,
    0x800c1762, 0x1b850aa0, 0x4a001b74, 0x00461b85,
    0x800c1762, 0x16850aa0, 0x5a001674, 0x00461685,
    0x800c1762, 0x17850aa0, 0x5a001774, 0x00461785,
    0x800c1662, 0x18850aa0, 0x5a001874, 0x00461885,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x5b050220, 0x02001af4, 0x000019f4,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x5a050220, 0x020017f4, 0x000016f4,
    0x00100070, 0x00018660, 0x16462605, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x5c050220, 0x020018f4, 0x00465a05,
    0x80000c01, 0x00000000, 0x00000000, 0x00000000,
    0x04100062, 0x5d050220, 0x02001bf4, 0x00465b05,
    0x00100070, 0x00018660, 0x16462705, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x20780062, 0x5d205c20, 0x00100065, 0x00018220,
    0x22462805, 0x00000077, 0x04100022, 0x0001c060,
    0x00000080, 0x00000080, 0x68000041, 0x0060525e,
    0x68000041, 0x0030275f, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100052, 0x60040e68,
    0x0e0e5e05, 0x5f052605, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x61058660,
    0x02466005, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cd31, 0x00000000,
    0xea2a610c, 0x0100200c, 0x00100025, 0x00004600,
    0x00000000, 0x00000050, 0xad800066, 0x7e205362,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00101a70, 0x00018220, 0x22466205, 0x00000000,
    0x00100061, 0x63050120, 0x00003000, 0x00000000,
    0xe8001965, 0x63000606, 0x00100027, 0x00014060,
    0x00000000, 0xfffff6c8, 0x00100061, 0x00010660,
    0x20467e05, 0x00000000, 0x04100022, 0x0001c060,
    0x00000100, 0x00000100, 0x00100069, 0x64058660,
    0x02462205, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x65058660,
    0x06466405, 0x00000480, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c431, 0x00000000,
    0xea10650c, 0x01000000, 0x00100069, 0x66058660,
    0x02462405, 0x00000002, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x00101940, 0x67058660,
    0x06466605, 0x000004c0, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ce31, 0x00000000,
    0xea10670c, 0x01000000, 0x00100069, 0x68058660,
    0x02462505, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x69058660,
    0x06466805, 0x00000500, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x00000000,
    0xea10690c, 0x01000000, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x8000c631, 0x6a0c0000,
    0xe23e000c, 0x00000000, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x64900061, 0x0000006b,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x6b2d0000, 0x0080002c, 0x00000000,
    0x80001966, 0x6b258220, 0x02006b24, 0x00000100,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8010c731, 0x00000000, 0x30086b0c, 0x00000000,
    0x80100001, 0x00000000, 0xe0000000, 0x00000000,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x6c054770, 0x00000000, 0x00002c58,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x2c000061, 0x00100807, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x38000040, 0x01706c6e,
    0x00101a70, 0x00018220, 0x42460705, 0x00000120,
    0x04100028, 0x0001c660, 0x00000148, 0x00000148,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x70058660, 0x02460705, 0x00000002,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c831, 0x210c0000, 0xea00700c, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0xb400a861, 0x0010706a, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x71050230,
    0x00446a06, 0x00000000, 0x74508870, 0x7f802100,
    0x04100022, 0x0001c060, 0x00000058, 0x00000058,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x38000040, 0x71006e73, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x00000000,
    0xfb2a7314, 0x0100210c, 0x00100025, 0x00004600,
    0x00000000, 0x00000020, 0x00100040, 0x07058660,
    0x06460705, 0x00000200, 0x00100027, 0x00014060,
    0x00000000, 0xfffffea8, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x74054770,
    0x00000000, 0x000030d8, 0x00101a70, 0x00018220,
    0x42460805, 0x00000030, 0x04100028, 0x0001c660,
    0x00000188, 0x00000188, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x76058660,
    0x02460805, 0x00000002, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x78058660,
    0x06467605, 0x00000480, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xb4000061, 0x0010766b,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010ca31, 0x220c0000, 0xea00780c, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x0010aa61, 0x77050230, 0x00446b06, 0x00000000,
    0x00108a70, 0x00018660, 0x26462205, 0x00000000,
    0x04100022, 0x0001c060, 0x00000070, 0x00000070,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x38000040, 0x01707479, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x38000040, 0x7700797b,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cb31, 0x00000000, 0xfb187b14, 0x0100220c,
    0x00100025, 0x00004600, 0x00000000, 0x00000020,
    0x00100040, 0x08058660, 0x06460805, 0x00000200,
    0x00100027, 0x00014060, 0x00000000, 0xfffffe68,
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
      .base.program_size = 12400,
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
const char *gfx20_bvh_build_BFS_BFS_pass1_initial_sha1 = "39013c77cf0cd8602b830355dab6bf7f1fcc3166";

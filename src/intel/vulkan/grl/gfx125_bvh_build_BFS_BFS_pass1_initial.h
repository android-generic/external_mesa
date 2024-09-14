#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_BFS_pass1_initial_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_BFS_pass1_initial_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_BFS_pass1_initial_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g88<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
and(16)         g70<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
mov(16)         g4<1>UD         g0.1<0,1,0>UD                   { align1 1H };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g88UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g76<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g72<1>D         g70<8,8,1>D     0x00000004UD    { align1 1H I@4 };
shl(16)         g65<1>D         g4<8,8,1>D      0x00000009UD    { align1 1H I@4 };
add(8)          g76.8<1>UW      g76<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@3 compacted };
add(16)         g67<1>D         g65<1,1,0>D     512D            { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g74<1>UD        g76<8,8,1>UW                    { align1 1H };
shl(16)         g98<1>UD        g76<8,8,1>UW    0x00000002UD    { align1 1H };
add(16)         g77<1>D         g74<1,1,0>D     g72<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g36<1>D         g2.2<0,1,0>D    52D             { align1 1H compacted };
add(16)         g47<1>D         g2.2<0,1,0>D    8D              { align1 1H compacted };
cmp.l.f0.0(16)  g38<1>UD        g36<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@2 compacted };
mov(8)          g42<2>UD        g36<4,4,1>UD                    { align1 1Q };
mov(8)          g44<2>UD        g37<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H I@4 compacted };
mov(8)          g53<2>UD        g47<4,4,1>UD                    { align1 1Q };
mov(8)          g55<2>UD        g48<4,4,1>UD                    { align1 2Q };
and(16)         g35<1>UD        g77<1,1,0>UD    0x000001ffUD    { align1 1H I@7 compacted };
add(16)         g40<1>D         -g38<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@7 compacted };
add(16)         g51<1>D         -g49<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@5 compacted };
mov(8)          g42.1<2>UD      g40<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g44.1<2>UD      g41<4,4,1>UD                    { align1 2Q I@3 };
mov(8)          g53.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g55.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g46UD           g42UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g57UD           g53UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sel.l(16)       g69<1>UD        g67<1,1,0>UD    g46<1,1,0>UD    { align1 1H $1.dst compacted };
add(16)         g79<1>D         g61<1,1,0>D     32D             { align1 1H $2.dst compacted };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    g61<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g85<2>UD        g79<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $0.src };
mov(8)          g87<2>UD        g80<4,4,1>UD                    { align1 2Q };
add(16)         g78<1>D         g65<1,1,0>D     g35<1,1,0>D     { align1 1H compacted };
add(16)         g83<1>D         -g81<1,1,0>D    g63<1,1,0>D     { align1 1H @4 $2.dst compacted };
mov(8)          g85.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g87.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g89UD           g85UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g98UD           g89UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g101<1>UD       g98<1,1,0>UD    0x00000040UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g101UD          g91UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g103<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g104<1>UD       g98<1,1,0>UD    0x00000080UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g103<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g104UD          g93UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g106<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g107<1>UD       g98<1,1,0>UD    0x000000c0UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g106<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g107UD          g95UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
add(16)         g109<1>D        g61<1,1,0>D     48D             { align1 1H compacted };
and(1)          g123<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g124<1>UD       g98<1,1,0>UD    0x00000100UD    { align1 1H compacted };
cmp.l.f0.0(16)  g111<1>UD       g109<1,1,0>UD   0x00000030UD    { align1 1H I@3 compacted };
mov(8)          g115<2>UD       g109<4,4,1>UD                   { align1 1Q };
mov(8)          g117<2>UD       g110<4,4,1>UD                   { align1 2Q };
add(16)         g113<1>D        -g111<1,1,0>D   g63<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g115.1<2>UD     g113<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g117.1<2>UD     g114<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g119UD          g115UD          nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g123<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g124UD          g119UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
and(1)          g125<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
or(16)          g126<1>UD       g98<1,1,0>UD    0x00000140UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g125<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g126UD          g121UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
and(1)          g127<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
and(1)          g41<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g33<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g39<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g127<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g31UD           g98UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g41<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g42UD           g107UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g33<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g37UD           g101UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g39<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g40UD           g104UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g44<1>F         g42<1,1,0>F     -g31<1,1,0>F    { align1 1H $12.dst compacted };
sel.ge(16)      g47<1>F         g44<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@1 };
cmp.l.f0.0(16)  g71<1>F         g47<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H F@1 };
math inv(16)    g50<1>F         g47<8,8,1>F     null<8,8,1>F    { align1 1H $15 };
cmp.g.f0.0(16)  g76<1>F         g44<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g45<1>F         g119<1,1,0>F    -g37<1,1,0>F    { align1 1H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mul(16)         g52<1>F         g50<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $15.dst };
and.nz.f0.0(16) null<1>UD       g71<8,8,1>UD    g76<8,8,1>UD    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sel.ge(16)      g48<1>F         g45<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@2 };
(+f0.0) sel(16) g80<1>UD        g52<1,1,0>UD    0x00000000UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
math inv(16)    g53<1>F         g48<8,8,1>F     null<8,8,1>F    { align1 1H $0 };
cmp.g.f0.0(16)  g82<1>F         g45<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g84<1>F         g48<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g46<1>F         g121<1,1,0>F    -g40<1,1,0>F    { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mul(16)         g55<1>F         g53<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $0.dst };
and.nz.f0.0(16) null<1>UD       g84<8,8,1>UD    g82<8,8,1>UD    { align1 1H F@3 };
sel.ge(16)      g49<1>F         g46<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
(+f0.0) sel(16) g85<1>UD        g55<1,1,0>UD    0x00000000UD    { align1 1H F@2 compacted };
math inv(16)    g65<1>F         g49<8,8,1>F     null<8,8,1>F    { align1 1H @1 $1 };
cmp.g.f0.0(16)  g87<1>F         g46<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
cmp.l.f0.0(16)  g89<1>F         g49<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $1.src };
mul(16)         g67<1>F         g65<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $1.dst };
and.nz.f0.0(16) null<1>UD       g89<8,8,1>UD    g87<8,8,1>UD    { align1 1H F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
(+f0.0) sel(16) g90<1>UD        g67<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g92<1>UD        g78<1,1,0>UD    g69<1,1,0>UD    { align1 1H $5.src compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g94<1>D         g78<8,8,1>D     0x00000005UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g97<1>D         g57<1,1,0>D     g94<1,1,0>D     { align1 1H @1 $2.dst compacted };
shr(16)         g95<1>UD        g78<1,1,0>UD    0x0000001bUD    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g99<1>UD        g97<1,1,0>UD    g57<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g107<1>D        g97<1,1,0>D     16D             { align1 1H $12.src compacted };
mov(8)          g103<2>UD       g97<4,4,1>UD                    { align1 1Q $14.src };
mov(8)          g105<2>UD       g98<4,4,1>UD                    { align1 2Q $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add3(16)        g101<1>D        g59<8,8,1>D     g95<8,8,1>D     -g99<1,1,1>D { align1 1H @4 $2.dst };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g97<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g113<2>UD       g107<4,4,1>UD                   { align1 1Q };
mov(8)          g115<2>UD       g108<4,4,1>UD                   { align1 2Q $8.src };
mov(8)          g105.1<2>UD     g102<4,4,1>UD                   { align1 2Q I@4 };
mov(8)          g103.1<2>UD     g101<4,4,1>UD                   { align1 1Q I@5 };
add(16)         g111<1>D        -g109<1,1,0>D   g101<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g3UD            g103UD          nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
mov(8)          g113.1<2>UD     g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g115.1<2>UD     g112<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g11UD           g113UD          nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
shl(16)         g29<1>D         g35<8,8,1>D     0x00000002UD    { align1 1H };
mov(16)         g27<1>UD        g29<8,8,1>UD                    { align1 1H I@1 };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g27<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
shl(16)         g114<1>D        g27<8,8,1>D     0x00000002UD    { align1 1H $8.src };
mov(16)         g19<1>UD        0x7f800000UD                    { align1 1H $8.src };
mov(16)         g21<1>UD        0x7f800000UD                    { align1 1H $8.src };
mov(16)         g23<1>UD        0x7f800000UD                    { align1 1H $8.src };
mov(16)         g25<1>UD        0x7f800000UD                    { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g114UD          g19UD           0x04003504                0x00000200
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $8 };
add(16)         g27<1>D         g27<8,8,1>D     2048D           { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
nop                                                             ;

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g29<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g115<1>D        g29<8,8,1>D     0x00000002UD    { align1 1H $8.src };
mov(16)         g20<1>UD        0x00000000UD                    { align1 1H $8.src };
mov(16)         g22<1>UD        0x00000000UD                    { align1 1H $8.src };
mov(16)         g24<1>UD        0x00000000UD                    { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g26<1>UD        0x00000000UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g117<1>D        g115<1,1,0>D    1152D           { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g117UD          g20UD           0x04003504                0x00000200
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $8 };
add(16)         g29<1>D         g29<8,8,1>D     2048D           { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
send(1)         g118UD          g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mov(8)          g119<1>UD       0x00000000UD                    { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(2)          g119.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g119UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $3 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
add(16)         g120<1>F        g3<1,1,0>F      g11<1,1,0>F     { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g123<1>F        g120<1,1,0>F    -g31<1,1,0>F    { align1 1H F@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
add(16)         g121<1>F        g5<1,1,0>F      g13<1,1,0>F     { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mul(16)         g19<1>F         g123<1,1,0>F    g80<1,1,0>F     { align1 1H F@2 compacted };
add(16)         g124<1>F        g121<1,1,0>F    -g37<1,1,0>F    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
add(16)         g122<1>F        g7<1,1,0>F      g15<1,1,0>F     { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mul(16)         g21<1>F         g124<1,1,0>F    g85<1,1,0>F     { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g125<1>F        g122<1,1,0>F    -g40<1,1,0>F    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g26<1>UD        g21<8,8,1>F                     { align1 1H A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mul(16)         g23<1>F         g125<1,1,0>F    g90<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         g28<1>UD        g23<8,8,1>F                     { align1 1H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g24<1>UD        g19<8,8,1>F                     { align1 1H F@6 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g92<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g30<1>UD        f0<0,1,0>UW                     { align1 1H F@7 };
mov(1)          g48<1>D         1D                              { align1 WE_all 1N };
and(16)         g37<1>UD        g74<1,1,0>UD    0x00000003UD    { align1 1H F@5 compacted };
shr(16)         g39<1>UD        g74<1,1,0>UD    0x00000002UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
shl(16)         g41<1>D         g48<0,1,0>D     g74<8,8,1>UD    { align1 1H };

LABEL8:
cmp.z.f0.0(16)  null<1>D        g30<8,8,1>D     0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
fbl(16)         g43<1>UD        g30<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         a0<1>UW         0x0300UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g43<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0300UW        { align1 1H A@1 };
mov(16)         g45<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g47<1>D         g45<1,1,0>D     g24<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g47<8,8,1>UD    g92<8,8,1>UD    { align1 1H I@1 };
(+f0.0) sel(16) g49<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g51<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g53<1>UD        g3<8,8,1>UD     0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g55<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g64<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g64<1>F         g49<1,1,0>F                     { align1 1H compacted };
mov(16)         g66<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g66<1>F         g51<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mov(16)         g58<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g58<1>F         g53<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mov(16)         g60<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g60<1>F         g55<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g52<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g56<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(8)          g109<2>UD       g64.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g122<2>UD       g66.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g80<2>UD        g60.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g68<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g68<1>F         g52<1,1,0>F                     { align1 1H compacted };
mov(8)          g54<2>UD        g58.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(16)         g62<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g62<1>F         g56<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     1D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.ge(8)       g107<2>F        g64<8,4,2>F     g109<8,4,2>F    { align1 WE_all 1Q I@5 };
sel.ge(8)       g120<2>F        g66<8,4,2>F     g122<8,4,2>F    { align1 WE_all 1Q I@4 };
sel.l(8)        g78<2>F         g60<8,4,2>F     g80<8,4,2>F     { align1 WE_all 1Q I@3 };
mov(8)          g43<2>UD        g68.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
sel.l(8)        g49<2>F         g58<8,4,2>F     g54<8,4,2>F     { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g96<2>UD        g62.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g64.1<2>UD      g107<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g66.1<2>UD      g120<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g60.1<2>UD      g78<8,4,2>UD                    { align1 WE_all 1Q A@2 };
sel.ge(8)       g33<2>F         g68<8,4,2>F     g43<8,4,2>F     { align1 WE_all 1Q I@5 };
mov(8)          g58.1<2>UD      g49<8,4,2>UD                    { align1 WE_all 1Q A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(8)        g94<2>F         g62<8,4,2>F     g96<8,4,2>F     { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g114<4>UD       g64.2<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g112<4>UD       g64.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g19<4>UD        g66.2<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g125<4>UD       g66.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g85<4>UD        g60.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g83<4>UD        g60.1<8,2,4>UD                  { align1 WE_all 1N $4.src };
mov(8)          g68.1<2>UD      g33<8,4,2>UD                    { align1 WE_all 1Q F@2 };
mov(4)          g72<4>UD        g58.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g70<4>UD        g58.1<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g62.1<2>UD      g94<8,4,2>UD                    { align1 WE_all 1Q F@1 };
sel.ge(4)       g110<4>F        g112<8,2,4>F    g114<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g123<4>F        g125<8,2,4>F    g19<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g81<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g53<4>UD        g68.2<8,2,4>UD                  { align1 WE_all 1N A@4 };
mov(4)          g51<4>UD        g68.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g55<4>F         g70<8,2,4>F     g72<8,2,4>F     { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g101<4>UD       g62.2<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g99<4>UD        g62.1<8,2,4>UD                  { align1 WE_all 1N $11.src };
mov(4)          g64.2<4>UD      g110<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g66.2<4>UD      g123<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g60.2<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.ge(4)       g49<4>F         g51<8,2,4>F     g53<8,2,4>F     { align1 WE_all 1N I@6 };
mov(4)          g58.2<4>UD      g55<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g97<4>F         g99<8,2,4>F     g101<8,2,4>F    { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g119<4>UD       g64.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g117<4>UD       g64.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g32<4>UD        g66.3<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g22<4>UD        g66.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g90<4>UD        g60.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g88<4>UD        g60.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g68.2<4>UD      g49<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g77<4>UD        g58.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g75<4>UD        g58.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g62.2<4>UD      g97<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g115<4>F        g117<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g20<4>F         g22<8,2,4>F     g32<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g86<4>F         g88<8,2,4>F     g90<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g70<4>UD        g68.3<8,2,4>UD                  { align1 WE_all 1N A@4 };
mov(4)          g56<4>UD        g68.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g73<4>F         g75<8,2,4>F     g77<8,2,4>F     { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g106<4>UD       g62.3<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g104<4>UD       g62.1<8,2,4>UD                  { align1 WE_all 1N $14.src };
mov(4)          g64.3<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g66.3<4>UD      g20<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g60.3<4>UD      g86<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.ge(4)       g54<4>F         g56<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@6 };
mov(4)          g58.3<4>UD      g73<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.l(4)        g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g64.4<1>F       g64.3<0,1,0>F   g64.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g65.4<1>F       g65.3<0,1,0>F   g65.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g66.4<1>F       g66.3<0,1,0>F   g66.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g67.4<1>F       g67.3<0,1,0>F   g67.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g60.4<1>F       g60.3<0,1,0>F   g60.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g61.4<1>F       g61.3<0,1,0>F   g61.4<4,4,1>F   { align1 WE_all 1N I@2 };
mov(4)          g68.3<4>UD      g54<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.l(4)        g58.4<1>F       g58.3<0,1,0>F   g58.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g59.4<1>F       g59.3<0,1,0>F   g59.4<4,4,1>F   { align1 WE_all 1N I@2 };
mov(4)          g62.3<4>UD      g102<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(8)       g65<1>F         g64.7<0,1,0>F   g65<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g67<1>F         g66.7<0,1,0>F   g67<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(8)        g61<1>F         g60.7<0,1,0>F   g61<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(4)       g68.4<1>F       g68.3<0,1,0>F   g68.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g69.4<1>F       g69.3<0,1,0>F   g69.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(8)        g59<1>F         g58.7<0,1,0>F   g59<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(4)        g62.4<1>F       g62.3<0,1,0>F   g62.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g63.4<1>F       g63.3<0,1,0>F   g63.4<4,4,1>F   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g72<1>UD        g67.7<0,1,0>UD  g65.7<0,1,0>UD  { align1 1H };
sel.ge(8)       g69<1>F         g68.7<0,1,0>F   g69<8,8,1>F     { align1 WE_all 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g70<1>UD        g61.7<0,1,0>UD  g59.7<0,1,0>UD  { align1 1H };
sel.l(8)        g63<1>F         g62.7<0,1,0>F   g63<8,8,1>F     { align1 WE_all 1Q F@2 };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g74<1>UD        g63.7<0,1,0>UD  g70<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g76<1>UD        g69.7<0,1,0>UD  g72<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g19<1>F         g74<1,1,0>F     -g76<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g41<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g77<1>D         g45<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g79<1>D         g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g81<1>D         g77<8,8,1>D     g37<8,8,1>D     g79<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g83<1>D         g81<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g83UD           g19UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g84<1>D         ~g47<1,1,0>D    ~g92<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g84<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g85<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g30<1>UD        g30<1,1,0>UD    g85<1,1,0>UD    { align1 1H I@1 compacted };

LABEL6:
while(16)       JIP:  LABEL8                                    { align1 1H };
add(16)         g86<1>D         g26<1,1,0>D     16D             { align1 1H A@3 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g92<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@5 };
mov(16)         g31<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL11:
cmp.z.f0.0(16)  null<1>D        g31<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
fbl(16)         g88<1>UD        g31<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         a0<1>UW         0x0ac0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g88<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0ac0UW        { align1 1H A@1 };
mov(16)         g90<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
cmp.z.f0.0(16)  g94<1>D         g90<1,1,0>D     g86<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g94<8,8,1>UD    g92<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
(+f0.0) sel(16) g96<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
(+f0.0) sel(16) g98<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
(+f0.0) sel(16) g100<1>UD       g3<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
(+f0.0) sel(16) g102<1>UD       g5<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g111<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g111<1>F        g96<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g113<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g113<1>F        g98<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g105<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g105<1>F        g100<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g107<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g107<1>F        g102<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g99<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g103<1>UD       g7<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(8)          g33<2>UD        g111.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
mov(8)          g55<2>UD        g113.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(8)          g73<2>UD        g105.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(8)          g88<2>UD        g107.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g115<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g115<1>F        g99<1,1,0>F                     { align1 1H compacted };
mov(16)         g109<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g109<1>F        g103<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g22<2>F         g111<8,4,2>F    g33<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g53<2>F         g113<8,4,2>F    g55<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g71<2>F         g105<8,4,2>F    g73<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g84<2>F         g107<8,4,2>F    g88<8,4,2>F     { align1 WE_all 1Q I@2 };
mov(8)          g68<2>UD        g115.1<8,4,2>UD                 { align1 WE_all 1Q F@6 };
mov(8)          g120<2>UD       g109.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
mov(8)          g111.1<2>UD     g22<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g113.1<2>UD     g53<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g105.1<2>UD     g71<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g107.1<2>UD     g84<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sel.ge(8)       g66<2>F         g115<8,4,2>F    g68<8,4,2>F     { align1 WE_all 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.l(8)        g118<2>F        g109<8,4,2>F    g120<8,4,2>F    { align1 WE_all 1Q I@5 };
mov(4)          g47<4>UD        g111.2<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g45<4>UD        g111.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g60<4>UD        g113.2<8,2,4>UD                 { align1 WE_all 1N @5 $2.dst };
mov(4)          g58<4>UD        g113.1<8,2,4>UD                 { align1 WE_all 1N $2.dst };
mov(4)          g78<4>UD        g105.2<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g76<4>UD        g105.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g100<4>UD       g107.2<8,2,4>UD                 { align1 WE_all 1N A@7 };
mov(4)          g98<4>UD        g107.1<8,2,4>UD                 { align1 WE_all 1N F@7 };
mov(8)          g115.1<2>UD     g66<8,4,2>UD                    { align1 WE_all 1Q F@2 };
mov(8)          g109.1<2>UD     g118<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.ge(4)       g43<4>F         g45<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sel.ge(4)       g56<4>F         g58<8,2,4>F     g60<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g74<4>F         g76<8,2,4>F     g78<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g96<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g71<4>UD        g115.1<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g125<4>UD       g109.2<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g123<4>UD       g109.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g111.2<4>UD     g43<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g113.2<4>UD     g56<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g105.2<4>UD     g74<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g107.2<4>UD     g96<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g121<4>F        g123<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@5 };
mov(4)          g52<4>UD        g111.3<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g50<4>UD        g111.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g65<4>UD        g113.3<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g63<4>UD        g113.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g83<4>UD        g105.3<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g81<4>UD        g105.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g117<4>UD       g107.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g103<4>UD       g107.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g73<4>UD        g115.2<8,2,4>UD                 { align1 WE_all 1N F@7 };
mov(4)          g109.2<4>UD     g121<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g48<4>F         g50<8,2,4>F     g52<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g79<4>F         g81<8,2,4>F     g83<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g101<4>F        g103<8,2,4>F    g117<8,2,4>F    { align1 WE_all 1N I@3 };
sel.ge(4)       g69<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g21<4>UD        g109.3<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g19<4>UD        g109.1<8,2,4>UD                 { align1 WE_all 1N $4.src };
mov(4)          g111.3<4>UD     g48<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g113.3<4>UD     g61<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g105.3<4>UD     g79<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g107.3<4>UD     g101<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g115.2<4>UD     g69<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g126<4>F        g19<8,2,4>F     g21<8,2,4>F     { align1 WE_all 1N I@6 };
sel.ge(4)       g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g112.4<1>F      g112.3<0,1,0>F  g112.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g114.4<1>F      g114.3<0,1,0>F  g114.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g105.4<1>F      g105.3<0,1,0>F  g105.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g106.4<1>F      g106.3<0,1,0>F  g106.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g107.4<1>F      g107.3<0,1,0>F  g107.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@2 };
mov(4)          g78<4>UD        g115.3<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g76<4>UD        g115.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g109.3<4>UD     g126<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(8)       g112<1>F        g111.7<0,1,0>F  g112<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.ge(8)       g114<1>F        g113.7<0,1,0>F  g114<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.l(8)        g106<1>F        g105.7<0,1,0>F  g106<8,8,1>F    { align1 WE_all 1Q F@5 };
sel.l(8)        g108<1>F        g107.7<0,1,0>F  g108<8,8,1>F    { align1 WE_all 1Q F@4 };
sel.ge(4)       g74<4>F         g76<8,2,4>F     g78<8,2,4>F     { align1 WE_all 1N I@2 };
sel.l(4)        g109.4<1>F      g109.3<0,1,0>F  g109.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g110.4<1>F      g110.3<0,1,0>F  g110.4<4,4,1>F  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g119<1>UD       g114.7<0,1,0>UD g112.7<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g117<1>UD       g108.7<0,1,0>UD g106.7<0,1,0>UD { align1 1H };
mov(4)          g115.3<4>UD     g74<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(8)        g110<1>F        g109.7<0,1,0>F  g110<8,8,1>F    { align1 WE_all 1Q F@1 };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     2D              { align1 1H };
sel.ge(4)       g115.4<1>F      g115.3<0,1,0>F  g115.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g116.4<1>F      g116.3<0,1,0>F  g116.4<4,4,1>F  { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
(+f0.0) sel(16) g121<1>UD       g110.7<0,1,0>UD g117<1,1,0>UD   { align1 1H compacted };
sel.ge(8)       g116<1>F        g115.7<0,1,0>F  g116<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g123<1>UD       g116.7<0,1,0>UD g119<1,1,0>UD   { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g33<1>F         g121<1,1,0>F    -g123<1,1,0>F   { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g41<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL10             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g124<1>D        g90<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g126<1>D        g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g19<1>D         g124<8,8,1>D    g37<8,8,1>D     g126<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g21<1>D         g19<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g21UD           g33UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };

LABEL10:
endif(16)       JIP:  LABEL9                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
or(16)          g22<1>D         ~g94<1,1,0>D    ~g92<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g22<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g33<1>UD        f0<0,1,0>UW                     { align1 1H F@1 };
and(16)         g31<1>UD        g31<1,1,0>UD    g33<1,1,0>UD    { align1 1H I@1 compacted };

LABEL9:
while(16)       JIP:  LABEL11                                   { align1 1H };
add(16)         g43<1>D         g28<1,1,0>D     32D             { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g92<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
mov(16)         g32<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL14:
cmp.z.f0.0(16)  null<1>D        g32<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
fbl(16)         g45<1>UD        g32<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0560UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g45<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0560UW        { align1 1H A@1 };
mov(16)         g47<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g49<1>D         g47<1,1,0>D     g43<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g49<8,8,1>UD    g92<8,8,1>UD    { align1 1H I@1 };
(+f0.0) sel(16) g51<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g53<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g55<1>UD        g3<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g57<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g66<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g66<1>F         g51<1,1,0>F                     { align1 1H compacted };
mov(16)         g68<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g68<1>F         g53<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mov(16)         g60<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g60<1>F         g55<1,1,0>F                     { align1 1H compacted };
mov(16)         g62<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g62<1>F         g57<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g54<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g58<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(8)          g123<2>UD       g66.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g51<2>UD        g68.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g81<2>UD        g60.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g97<2>UD        g62.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g70<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g70<1>F         g54<1,1,0>F                     { align1 1H compacted };
mov(16)         g64<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g64<1>F         g58<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g121<2>F        g66<8,4,2>F     g123<8,4,2>F    { align1 WE_all 1Q A@5 };
sel.ge(8)       g45<2>F         g68<8,4,2>F     g51<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(8)        g79<2>F         g60<8,4,2>F     g81<8,4,2>F     { align1 WE_all 1Q A@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(8)        g95<2>F         g62<8,4,2>F     g97<8,4,2>F     { align1 WE_all 1Q I@2 };
mov(8)          g77<2>UD        g70.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(8)          g110<2>UD       g64.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g66.1<2>UD      g121<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g68.1<2>UD      g45<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g60.1<2>UD      g79<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g62.1<2>UD      g95<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sel.ge(8)       g75<2>F         g70<8,4,2>F     g77<8,4,2>F     { align1 WE_all 1Q I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(8)        g108<2>F        g64<8,4,2>F     g110<8,4,2>F    { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g19<4>UD        g66.2<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g126<4>UD       g66.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g56<4>UD        g68.2<8,2,4>UD                  { align1 WE_all 1N A@5 };
mov(4)          g54<4>UD        g68.1<8,2,4>UD                  { align1 WE_all 1N F@7 };
mov(4)          g86<4>UD        g60.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g84<4>UD        g60.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g102<4>UD       g62.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g100<4>UD       g62.1<8,2,4>UD                  { align1 WE_all 1N $13.src };
mov(8)          g70.1<2>UD      g75<8,4,2>UD                    { align1 WE_all 1Q F@2 };
mov(8)          g64.1<2>UD      g108<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.ge(4)       g124<4>F        g126<8,2,4>F    g19<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g52<4>F         g54<8,2,4>F     g56<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(4)        g82<4>F         g84<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(4)        g98<4>F         g100<8,2,4>F    g102<8,2,4>F    { align1 WE_all 1N I@3 };
mov(4)          g80<4>UD        g70.1<8,2,4>UD                  { align1 WE_all 1N A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g115<4>UD       g64.2<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g113<4>UD       g64.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g66.2<4>UD      g124<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g68.2<4>UD      g52<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g60.2<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g62.2<4>UD      g98<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g111<4>F        g113<8,2,4>F    g115<8,2,4>F    { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g30<4>UD        g66.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g22<4>UD        g66.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g74<4>UD        g68.3<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g72<4>UD        g68.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g94<4>UD        g60.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g89<4>UD        g60.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g107<4>UD       g62.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g105<4>UD       g62.1<8,2,4>UD                  { align1 WE_all 1N $14.src };
mov(4)          g82<4>UD        g70.2<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g64.2<4>UD      g111<8,2,4>UD                   { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g20<4>F         g22<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g57<4>F         g72<8,2,4>F     g74<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g87<4>F         g89<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.l(4)        g103<4>F        g105<8,2,4>F    g107<8,2,4>F    { align1 WE_all 1N I@3 };
sel.ge(4)       g78<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g120<4>UD       g64.3<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g118<4>UD       g64.1<8,2,4>UD                  { align1 WE_all 1N $3.src };
mov(4)          g66.3<4>UD      g20<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g68.3<4>UD      g57<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g60.3<4>UD      g87<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g62.3<4>UD      g103<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g70.2<4>UD      g78<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g116<4>F        g118<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@6 };
sel.ge(4)       g66.4<1>F       g66.3<0,1,0>F   g66.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g67.4<1>F       g67.3<0,1,0>F   g67.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g68.4<1>F       g68.3<0,1,0>F   g68.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g69.4<1>F       g69.3<0,1,0>F   g69.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g60.4<1>F       g60.3<0,1,0>F   g60.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g61.4<1>F       g61.3<0,1,0>F   g61.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g62.4<1>F       g62.3<0,1,0>F   g62.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g63.4<1>F       g63.3<0,1,0>F   g63.4<4,4,1>F   { align1 WE_all 1N I@2 };
mov(4)          g87<4>UD        g70.3<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g85<4>UD        g70.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g64.3<4>UD      g116<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(8)       g67<1>F         g66.7<0,1,0>F   g67<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g69<1>F         g68.7<0,1,0>F   g69<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.l(8)        g61<1>F         g60.7<0,1,0>F   g61<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.l(8)        g63<1>F         g62.7<0,1,0>F   g63<8,8,1>F     { align1 WE_all 1Q F@4 };
sel.ge(4)       g83<4>F         g85<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N I@2 };
sel.l(4)        g64.4<1>F       g64.3<0,1,0>F   g64.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g65.4<1>F       g65.3<0,1,0>F   g65.4<4,4,1>F   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g74<1>UD        g69.7<0,1,0>UD  g67.7<0,1,0>UD  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g72<1>UD        g63.7<0,1,0>UD  g61.7<0,1,0>UD  { align1 1H };
mov(4)          g70.3<4>UD      g83<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(8)        g65<1>F         g64.7<0,1,0>F   g65<8,8,1>F     { align1 WE_all 1Q F@1 };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     2D              { align1 1H };
sel.ge(4)       g70.4<1>F       g70.3<0,1,0>F   g70.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g71.4<1>F       g71.3<0,1,0>F   g71.4<4,4,1>F   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
(+f0.0) sel(16) g76<1>UD        g65.7<0,1,0>UD  g72<1,1,0>UD    { align1 1H compacted };
sel.ge(8)       g71<1>F         g70.7<0,1,0>F   g71<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g78<1>UD        g71.7<0,1,0>UD  g74<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g45<1>F         g76<1,1,0>F     -g78<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g41<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g79<1>D         g47<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g81<1>D         g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g83<1>D         g79<8,8,1>D     g37<8,8,1>D     g81<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
shl(16)         g85<1>D         g83<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g85UD           g45UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL13:
endif(16)       JIP:  LABEL12                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
or(16)          g86<1>D         ~g49<1,1,0>D    ~g92<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g86<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
mov(16)         g87<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g32<1>UD        g32<1,1,0>UD    g87<1,1,0>UD    { align1 1H I@1 compacted };

LABEL12:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g92<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL15             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@6 };
shl(16)         g88<1>D         g24<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g90<1>D         g88<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g90UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
shl(16)         g91<1>D         g26<8,8,1>D     0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g93<1>D         g91<1,1,0>D     1216D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g93UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g94<1>D         g28<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g96<1>D         g94<1,1,0>D     1280D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g96UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };

LABEL15:
endif(16)       JIP:  LABEL16                                   { align1 1H };

LABEL16:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
send(1)         g97UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mov(8)          g98<1>UD        0x00000000UD                    { align1 WE_all 1Q $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(2)          g98.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g98UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $9 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g99<1>D         g2<0,1,0>D      11352D          { align1 1H };
mov(16)         g33<1>UD        g35<8,8,1>UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g101<1>UD       g99<8,8,1>UD    0x00002c58UD    { align1 1H };

LABEL19:
cmp.ge.f0.0(16) null<1>UD       g33<8,8,1>UD    0x00000120UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL17       UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
shl(16)         g103<1>D        g33<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g46UD           g103UD          nullUD          0x04200500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
cmp.nz.f0.0(16) null<1>F        g46<1,1,0>F     0x7f800000F  /* infF */ { align1 1H $14.dst compacted };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g105<1>D        g99<1,1,0>D     g103<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   g99<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g111<2>UD       g105<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g113<2>UD       g106<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add3(16)        g109<1>D        -g101<8,8,1>D   g2.1<0,1,0>D    -g107<1,1,1>D { align1 1H };
mov(8)          g111.1<2>UD     g109<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g113.1<2>UD     g110<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g111UD          g46UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL18:
endif(16)       JIP:  LABEL17                                   { align1 1H };
add(16)         g33<1>D         g33<1,1,0>D     512D            { align1 1H compacted };

LABEL17:
while(16)       JIP:  LABEL19                                   { align1 1H };
nop                                                             ;

LABEL22:
cmp.ge.f0.0(16) null<1>UD       g35<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL20       UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
shl(16)         g112<1>D        g35<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g114<1>D        g112<1,1,0>D    1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g47UD           g114UD          nullUD          0x04200500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
cmp.nz.f0.0(16) null<1>D        g47<8,8,1>D     0D              { align1 1H $8.dst };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL21             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
add(16)         g115<1>D        g2<0,1,0>D      12504D          { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g117<1>UD       g115<8,8,1>UD   0x000030d8UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
add(16)         g119<1>D        g115<1,1,0>D    g112<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g115<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g3<2>UD         g119<4,4,1>UD                   { align1 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g5<2>UD         g120<4,4,1>UD                   { align1 2Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add3(16)        g123<1>D        -g117<8,8,1>D   g2.1<0,1,0>D    -g121<1,1,1>D { align1 1H };
mov(8)          g5.1<2>UD       g124<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g3.1<2>UD       g123<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g3UD            g47UD           0x0804058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL21:
endif(16)       JIP:  LABEL20                                   { align1 1H };
add(16)         g35<1>D         g35<1,1,0>D     512D            { align1 1H compacted };

LABEL20:
while(16)       JIP:  LABEL22                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q F@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_BFS_pass1_initial_code[] = {
    0x80000065, 0x58058220, 0x02000004, 0xffffffc0,
    0xe0460065, 0x0ff10043, 0x00040061, 0x04050220,
    0x00000024, 0x00000000, 0x80000065, 0x61058220,
    0x020000a4, 0xfffffc00, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00580c, 0x00340000, 0x80030061, 0x4c054410,
    0x00000000, 0x76543210, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041c69, 0x48058660,
    0x02464605, 0x00000004, 0x00041c69, 0x41058660,
    0x02460405, 0x00000009, 0x644c1b40, 0x00804c95,
    0xa0431a40, 0x20004103, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x4a050120,
    0x00464c05, 0x00000000, 0x00040069, 0x62058120,
    0x02464c05, 0x00000002, 0xa04d1a40, 0x48004a02,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0240040, 0x03410243, 0xa02f0040, 0x00810243,
    0x27261a70, 0x0210242b, 0x00030061, 0x2a060220,
    0x00342405, 0x00000000, 0x00130061, 0x2c060220,
    0x00342505, 0x00000000, 0x27311c70, 0x02102f2b,
    0x00030061, 0x35060220, 0x00342f05, 0x00000000,
    0x00130061, 0x37060220, 0x00343005, 0x00000000,
    0xe0231f65, 0x1ff04d03, 0xa0281f40, 0x0212261a,
    0xa0331d40, 0x0212311a, 0x00031a61, 0x2a260220,
    0x00342805, 0x00000000, 0x00131b61, 0x2c260220,
    0x00342905, 0x00000000, 0x00031b61, 0x35260220,
    0x00343305, 0x00000000, 0x00131c61, 0x37260220,
    0x00343405, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x2e140000,
    0xfb002a24, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x39440000,
    0xfb003524, 0x000c0000, 0x27452162, 0x2e004303,
    0xa04f2240, 0x02003d03, 0x27511970, 0x3d004f03,
    0x00030061, 0x55060220, 0x00344f05, 0x00000000,
    0x80103001, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x57060220, 0x00345005, 0x00000000,
    0xa04e0040, 0x23004102, 0xa053c240, 0x3f025102,
    0x00031961, 0x55260220, 0x00345305, 0x00000000,
    0x00131a61, 0x57260220, 0x00345405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x59440000, 0xfb005524, 0x000c0000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006104, 0x0000008f,
    0x00049431, 0x00020100, 0xfa086214, 0x04005904,
    0x80000065, 0x64058220, 0x020000a4, 0xfffffc00,
    0xe0653466, 0x04006203, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006404, 0x0000008f, 0x00049531, 0x00020100,
    0xfa086514, 0x04005b04, 0x80000065, 0x67058220,
    0x020000a4, 0xfffffc00, 0xe0680066, 0x08006203,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006704, 0x0000008f,
    0x00049631, 0x00020100, 0xfa086814, 0x04005d04,
    0x80000065, 0x6a058220, 0x020000a4, 0xfffffc00,
    0xe06b0066, 0x0c006203, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006a04, 0x0000008f, 0x00049731, 0x00020100,
    0xfa086b14, 0x04005f04, 0xa06d0040, 0x03003d03,
    0x80000065, 0x7b058220, 0x020000a4, 0xfffffc00,
    0xe07c0066, 0x10006203, 0xe76f1b70, 0x03006d03,
    0x00030061, 0x73060220, 0x00346d05, 0x00000000,
    0x00130061, 0x75060220, 0x00346e05, 0x00000000,
    0xa0711b40, 0x3f026f02, 0x00031961, 0x73260220,
    0x00347105, 0x00000000, 0x00131a61, 0x75260220,
    0x00347205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x77240000,
    0xfb007324, 0x00040000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007b04, 0x0000008f, 0x00049931, 0x00020100,
    0xfa087c14, 0x04007704, 0x80003965, 0x7d058220,
    0x020000a4, 0xfffffc00, 0xe07e0066, 0x14006203,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007d04, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa087e14, 0x04007904,
    0x80003a65, 0x7f058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x29058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x21058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x27058220, 0x020000a4, 0xfffffc00,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007f04, 0x0000000f,
    0x00049b31, 0x1f160100, 0xfa006214, 0x04000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002904, 0x0000000f,
    0x00049c31, 0x2a160100, 0xfa006b14, 0x04000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002104, 0x0000000f,
    0x00049d31, 0x25160100, 0xfa006514, 0x04000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002704, 0x0000000f,
    0x00049e31, 0x28160100, 0xfa006814, 0x04000000,
    0x80002b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x202c2c40, 0x1f202a00, 0x00041162, 0x2f058aa0,
    0x4a462c05, 0x0704ec3d, 0x00041170, 0x47058aa0,
    0x5a462f05, 0x77f684df, 0x00044f38, 0x32050aa0,
    0x1a462f05, 0x00460001, 0x00040070, 0x4c058aa0,
    0x3a462c05, 0x0704ec3d, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x202d2d40, 0x25207700,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00042f41, 0x34058aa0, 0x0a463205, 0x417d70a4,
    0x00041365, 0x00010220, 0x22464705, 0x00464c05,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x00041262, 0x30058aa0, 0x4a462d05, 0x0704ec3d,
    0xef501262, 0x00003403, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044038, 0x35050aa0,
    0x1a463005, 0x00460001, 0x00040070, 0x52058aa0,
    0x3a462d05, 0x0704ec3d, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00043070, 0x54058aa0,
    0x5a463005, 0x77f684df, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x202e2e40, 0x28207900,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00042041, 0x37058aa0, 0x0a463505, 0x417d70a4,
    0x00041365, 0x00010220, 0x22465405, 0x00465205,
    0x00041262, 0x31058aa0, 0x4a462e05, 0x0704ec3d,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xef551262, 0x00003703, 0x00049138, 0x41050aa0,
    0x1a463105, 0x00460001, 0x00043370, 0x57058aa0,
    0x3a462e05, 0x0704ec3d, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x00043170, 0x59058aa0,
    0x5a463105, 0x77f684df, 0x00042141, 0x43058aa0,
    0x0a464105, 0x417d70a4, 0x00041265, 0x00010220,
    0x22465905, 0x00465705, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xef5a1162, 0x00004303,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x275c3570, 0x45004e03, 0x01040022, 0x0001c060,
    0x00000160, 0x00000160, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x00043669, 0x5e058660,
    0x02464e05, 0x00000005, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0619240, 0x5e003902,
    0xe05f3768, 0x01b04e03, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x27631a70, 0x39006103,
    0xa06b3c40, 0x01006103, 0x00033e61, 0x67060220,
    0x00346105, 0x00000000, 0x00133e61, 0x69060220,
    0x00346205, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x0004c252, 0x65040e68,
    0x0e2e3b05, 0x63055f05, 0x276d1c70, 0x61006b03,
    0x00030061, 0x71060220, 0x00346b05, 0x00000000,
    0x00133861, 0x73060220, 0x00346c05, 0x00000000,
    0x00131c61, 0x69260220, 0x00346605, 0x00000000,
    0x00031d61, 0x67260220, 0x00346505, 0x00000000,
    0xa06f1d40, 0x65026d02, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x03440000,
    0xfb006724, 0x000c0000, 0x00031961, 0x71260220,
    0x00346f05, 0x00000000, 0x00131a61, 0x73260220,
    0x00347005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x0b440000,
    0xfb007124, 0x000c0000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040069, 0x1d058660,
    0x02462305, 0x00000002, 0x00041961, 0x1b050220,
    0x00461d05, 0x00000000, 0x00041970, 0x00018220,
    0x42461b05, 0x00000120, 0x01040028, 0x0001c660,
    0x00000090, 0x00000090, 0x00043869, 0x72058660,
    0x02461b05, 0x00000002, 0x00043861, 0x13054220,
    0x00000000, 0x7f800000, 0x00043861, 0x15054220,
    0x00000000, 0x7f800000, 0x00043861, 0x17054220,
    0x00000000, 0x7f800000, 0x00043861, 0x19054220,
    0x00000000, 0x7f800000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xea087214, 0x000c1344, 0x00040040, 0x1b058660,
    0x06461b05, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xffffff60, 0x00000060, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x42461d05, 0x00000030, 0x01040028, 0x0001c660,
    0x000000b8, 0x000000b8, 0x00043869, 0x73058660,
    0x02461d05, 0x00000002, 0x00043861, 0x14054220,
    0x00000000, 0x00000000, 0x00043861, 0x16054220,
    0x00000000, 0x00000000, 0x00043861, 0x18054220,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041f61, 0x1a054220,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa0751d40, 0x48007303,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xea087514, 0x000c1444,
    0x00040040, 0x1d058660, 0x06461d05, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xffffff38,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80004231, 0x760c0000, 0xe23e000c, 0x00000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80030061, 0x77054220, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80011961, 0x77550000, 0x0000005c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80044331, 0x00000000, 0x3008770c, 0x00000000,
    0x80040001, 0x00000000, 0xe0000000, 0x00000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x20782e40, 0x0b000300, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x207b1140, 0x1f207800,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x20792e40, 0x0d000500, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x20131241, 0x50007b00,
    0x207c1240, 0x25207900, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x207a2e40, 0x0f000700,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x20151241, 0x55007c00, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x207d1240, 0x28207a00,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00040a61, 0x1a050a20, 0x00461505, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x20170941, 0x5a007d00, 0x00040961, 0x1c050a20,
    0x00461705, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041661, 0x18050a20,
    0x00461305, 0x00000000, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x22465c05, 0x00000000, 0x00041761, 0x1e050120,
    0x00003000, 0x00000000, 0x80000061, 0x30054660,
    0x00000000, 0x00000001, 0xe0251565, 0x00304a03,
    0xe0271268, 0x00204a03, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x29050660,
    0x02003004, 0x00464a05, 0x00041a70, 0x00018660,
    0x16461e05, 0x00000000, 0x01040028, 0x0001c660,
    0x00000998, 0x00000998, 0x0004004c, 0x2b050220,
    0x00461e05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x03000300, 0x00040069, 0x10018510,
    0x01562b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03000300, 0xe02d0961, 0x001b0004,
    0xac2f1970, 0x18002d02, 0x00041965, 0x00010220,
    0x22462f05, 0x00465c05, 0x01040062, 0x31058220,
    0x02460b05, 0xff800000, 0x01040062, 0x33058220,
    0x02460d05, 0xff800000, 0x01040062, 0x35058220,
    0x02460305, 0x7f800000, 0x01040062, 0x37058220,
    0x02460505, 0x7f800000, 0xa3400c61, 0xff810000,
    0x60400061, 0x00103100, 0xa3421b61, 0xff810000,
    0x60420061, 0x00103300, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0xa33a0a61, 0x7f810000,
    0x603a0061, 0x00103500, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0xa33c1961, 0x7f810000,
    0x603c0061, 0x00103700, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x34058220,
    0x02460f05, 0xff800000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x38058220,
    0x02460705, 0x7f800000, 0x80031461, 0x6d060220,
    0x00444026, 0x00000000, 0x80031361, 0x7a060220,
    0x00444226, 0x00000000, 0x80031161, 0x50060220,
    0x00443c26, 0x00000000, 0xa3440d61, 0xff810000,
    0x60440061, 0x00103400, 0x80031261, 0x36060220,
    0x00443a26, 0x00000000, 0xa33e0d61, 0x7f810000,
    0x603e0061, 0x00103800, 0x00040070, 0x00018660,
    0x16462505, 0x00000001, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80031d62, 0x6b060aa0,
    0x4a444006, 0x00446d06, 0x80031c62, 0x78060aa0,
    0x4a444206, 0x00447a06, 0x80031b62, 0x4e060aa0,
    0x5a443c06, 0x00445006, 0x80031561, 0x2b060220,
    0x00444426, 0x00000000, 0x80031b62, 0x31060aa0,
    0x5a443a06, 0x00443606, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031561, 0x60060220,
    0x00443e26, 0x00000000, 0x80030c61, 0x40260220,
    0x00446b06, 0x00000000, 0x80030b61, 0x42260220,
    0x00447806, 0x00000000, 0x80030a61, 0x3c260220,
    0x00444e06, 0x00000000, 0x80031d62, 0x21060aa0,
    0x4a444406, 0x00442b06, 0x80030a61, 0x3a260220,
    0x00443106, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031d62, 0x5e060aa0,
    0x5a443e06, 0x00446006, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x72070220,
    0x00424047, 0x00000000, 0x80023861, 0x70070220,
    0x00424027, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021d61, 0x13070220,
    0x00424247, 0x00000000, 0x80020061, 0x7d070220,
    0x00424227, 0x00000000, 0x80021e61, 0x55070220,
    0x00423c47, 0x00000000, 0x80023461, 0x53070220,
    0x00423c27, 0x00000000, 0x80031261, 0x44260220,
    0x00442106, 0x00000000, 0x80021f61, 0x48070220,
    0x00423a47, 0x00000000, 0x80020061, 0x46070220,
    0x00423a27, 0x00000000, 0x80031161, 0x3e260220,
    0x00445e06, 0x00000000, 0x80021f62, 0x6e070aa0,
    0x4a427007, 0x00427207, 0x80021f62, 0x7b070aa0,
    0x4a427d07, 0x00421307, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x51070aa0,
    0x5a425307, 0x00425507, 0x80020c61, 0x35070220,
    0x00424447, 0x00000000, 0x80020061, 0x33070220,
    0x00424427, 0x00000000, 0x80021c62, 0x37070aa0,
    0x5a424607, 0x00424807, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b61, 0x65070220,
    0x00423e47, 0x00000000, 0x80023b61, 0x63070220,
    0x00423e27, 0x00000000, 0x80021461, 0x40470220,
    0x00426e07, 0x00000000, 0x80021361, 0x42470220,
    0x00427b07, 0x00000000, 0x80021261, 0x3c470220,
    0x00425107, 0x00000000, 0x80021e62, 0x31070aa0,
    0x4a423307, 0x00423507, 0x80021261, 0x3a470220,
    0x00423707, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x61070aa0,
    0x5a426307, 0x00426507, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x77070220,
    0x00424067, 0x00000000, 0x80023861, 0x75070220,
    0x00424027, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021d61, 0x20070220,
    0x00424267, 0x00000000, 0x80020061, 0x16070220,
    0x00424227, 0x00000000, 0x80021e61, 0x5a070220,
    0x00423c67, 0x00000000, 0x80020061, 0x58070220,
    0x00423c27, 0x00000000, 0x80021261, 0x44470220,
    0x00423107, 0x00000000, 0x80021f61, 0x4d070220,
    0x00423a67, 0x00000000, 0x80020061, 0x4b070220,
    0x00423a27, 0x00000000, 0x80021161, 0x3e470220,
    0x00426107, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021f62, 0x73070aa0,
    0x4a427507, 0x00427707, 0x80021f62, 0x14070aa0,
    0x4a421607, 0x00422007, 0x80021d62, 0x56070aa0,
    0x5a425807, 0x00425a07, 0x80020c61, 0x46070220,
    0x00424467, 0x00000000, 0x80020061, 0x38070220,
    0x00424427, 0x00000000, 0x80021c62, 0x49070aa0,
    0x5a424b07, 0x00424d07, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b61, 0x6a070220,
    0x00423e67, 0x00000000, 0x80023e61, 0x68070220,
    0x00423e27, 0x00000000, 0x80021461, 0x40670220,
    0x00427307, 0x00000000, 0x80021361, 0x42670220,
    0x00421407, 0x00000000, 0x80021261, 0x3c670220,
    0x00425607, 0x00000000, 0x80021e62, 0x36070aa0,
    0x4a423807, 0x00424607, 0x80021261, 0x3a670220,
    0x00424907, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x66070aa0,
    0x5a426807, 0x00426a07, 0x80021c62, 0x40850aa0,
    0x4a004064, 0x00344085, 0x80021c62, 0x41850aa0,
    0x4a004164, 0x00344185, 0x80021b62, 0x42850aa0,
    0x4a004264, 0x00344285, 0x80021b62, 0x43850aa0,
    0x4a004364, 0x00344385, 0x80021a62, 0x3c850aa0,
    0x5a003c64, 0x00343c85, 0x80021a62, 0x3d850aa0,
    0x5a003d64, 0x00343d85, 0x80021761, 0x44670220,
    0x00423607, 0x00000000, 0x80021a62, 0x3a850aa0,
    0x5a003a64, 0x00343a85, 0x80021a62, 0x3b850aa0,
    0x5a003b64, 0x00343b85, 0x80021761, 0x3e670220,
    0x00426607, 0x00000000, 0x80031762, 0x41050aa0,
    0x4a0040e4, 0x00464105, 0x80031662, 0x43050aa0,
    0x4a0042e4, 0x00464305, 0x80031562, 0x3d050aa0,
    0x5a003ce4, 0x00463d05, 0x80021a62, 0x44850aa0,
    0x4a004464, 0x00344485, 0x80021a62, 0x45850aa0,
    0x4a004564, 0x00344585, 0x80031662, 0x3b050aa0,
    0x5a003ae4, 0x00463b05, 0x80021962, 0x3e850aa0,
    0x5a003e64, 0x00343e85, 0x80021962, 0x3f850aa0,
    0x5a003f64, 0x00343f85, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x48050220,
    0x020043e4, 0x000041e4, 0x80031462, 0x45050aa0,
    0x4a0044e4, 0x00464505, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x46050220,
    0x02003de4, 0x00003be4, 0x80031262, 0x3f050aa0,
    0x5a003ee4, 0x00463f05, 0x00040070, 0x00018660,
    0x16462505, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f4a0062, 0x46013f83,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f4c0062, 0x48014583, 0x00040070, 0x00018660,
    0x16462705, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x2f130062, 0x4c204a00,
    0x00040065, 0x00018220, 0x22462905, 0x00000077,
    0x01040022, 0x0001c060, 0x00000090, 0x00000090,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x604d0041, 0x00602d02, 0x604f0041, 0x00302702,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x51040e68, 0x0e0e4d05, 0x4f052505,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x53058660, 0x02465105, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xea2a5314, 0x01001314,
    0x00040025, 0x00004600, 0x00000000, 0x00000060,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xa0540066, 0x5c222f02, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22465405, 0x00000000, 0x00040061, 0x55050120,
    0x00003000, 0x00000000, 0x201e1965, 0x55001e03,
    0x00040027, 0x00014060, 0x00000000, 0xfffff658,
    0xa0560b40, 0x01001a03, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x22465c05, 0x00000000, 0x80000d01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x1f050120,
    0x00003000, 0x00000000, 0x00041970, 0x00018660,
    0x16461f05, 0x00000000, 0x01040028, 0x0001c660,
    0x00000978, 0x00000978, 0x0004004c, 0x58050220,
    0x00461f05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x0ac00ac0, 0x00040069, 0x10018510,
    0x01565806, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0ac00ac0, 0xe05a0961, 0x001b0004,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0xac5e1970, 0x56005a02, 0x00041965, 0x00010220,
    0x22465e05, 0x00465c05, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x60058220,
    0x02460b05, 0xff800000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x62058220,
    0x02460d05, 0xff800000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x64058220,
    0x02460305, 0x7f800000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x66058220,
    0x02460505, 0x7f800000, 0xa36f1c61, 0xff810000,
    0x606f0061, 0x00106000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa3711b61, 0xff810000,
    0x60710061, 0x00106200, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa3691a61, 0x7f810000,
    0x60690061, 0x00106400, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa36b1961, 0x7f810000,
    0x606b0061, 0x00106600, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x63058220,
    0x02460f05, 0xff800000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x67058220,
    0x02460705, 0x7f800000, 0x80031461, 0x21060220,
    0x00446f26, 0x00000000, 0x80031361, 0x37060220,
    0x00447126, 0x00000000, 0x80031261, 0x49060220,
    0x00446926, 0x00000000, 0x80031161, 0x58060220,
    0x00446b26, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa3730e61, 0xff810000,
    0x60730061, 0x00106300, 0xa36d0d61, 0x7f810000,
    0x606d0061, 0x00106700, 0x00040070, 0x00018660,
    0x16462505, 0x00000001, 0x80031d62, 0x16060aa0,
    0x4a446f06, 0x00442106, 0x80031c62, 0x35060aa0,
    0x4a447106, 0x00443706, 0x80031b62, 0x47060aa0,
    0x5a446906, 0x00444906, 0x80031a62, 0x54060aa0,
    0x5a446b06, 0x00445806, 0x80031661, 0x44060220,
    0x00447326, 0x00000000, 0x80031561, 0x78060220,
    0x00446d26, 0x00000000, 0x80030c61, 0x6f260220,
    0x00441606, 0x00000000, 0x80030b61, 0x71260220,
    0x00443506, 0x00000000, 0x80030a61, 0x69260220,
    0x00444706, 0x00000000, 0x80030961, 0x6b260220,
    0x00445406, 0x00000000, 0x80031e62, 0x42060aa0,
    0x4a447306, 0x00444406, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031d62, 0x76060aa0,
    0x5a446d06, 0x00447806, 0x80021c61, 0x2f070220,
    0x00426f47, 0x00000000, 0x80020061, 0x2d070220,
    0x00426f27, 0x00000000, 0x8002d261, 0x3c070220,
    0x00427147, 0x00000000, 0x80022261, 0x3a070220,
    0x00427127, 0x00000000, 0x80021e61, 0x4e070220,
    0x00426947, 0x00000000, 0x80020061, 0x4c070220,
    0x00426927, 0x00000000, 0x80020f61, 0x64070220,
    0x00426b47, 0x00000000, 0x80021761, 0x62070220,
    0x00426b27, 0x00000000, 0x80031261, 0x73260220,
    0x00444206, 0x00000000, 0x80031161, 0x6d260220,
    0x00447606, 0x00000000, 0x80021f62, 0x2b070aa0,
    0x4a422d07, 0x00422f07, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80021f62, 0x38070aa0,
    0x4a423a07, 0x00423c07, 0x80021d62, 0x4a070aa0,
    0x5a424c07, 0x00424e07, 0x80021b62, 0x60070aa0,
    0x5a426207, 0x00426407, 0x80021a61, 0x47070220,
    0x00427327, 0x00000000, 0x80021a61, 0x7d070220,
    0x00426d47, 0x00000000, 0x80020061, 0x7b070220,
    0x00426d27, 0x00000000, 0x80021461, 0x6f470220,
    0x00422b07, 0x00000000, 0x80021361, 0x71470220,
    0x00423807, 0x00000000, 0x80021261, 0x69470220,
    0x00424a07, 0x00000000, 0x80021161, 0x6b470220,
    0x00426007, 0x00000000, 0x80021d62, 0x79070aa0,
    0x5a427b07, 0x00427d07, 0x80021c61, 0x34070220,
    0x00426f67, 0x00000000, 0x80020061, 0x32070220,
    0x00426f27, 0x00000000, 0x80021d61, 0x41070220,
    0x00427167, 0x00000000, 0x80020061, 0x3f070220,
    0x00427127, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021e61, 0x53070220,
    0x00426967, 0x00000000, 0x80020061, 0x51070220,
    0x00426927, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x75070220,
    0x00426b67, 0x00000000, 0x80020061, 0x67070220,
    0x00426b27, 0x00000000, 0x80021761, 0x49070220,
    0x00427347, 0x00000000, 0x80021161, 0x6d470220,
    0x00427907, 0x00000000, 0x80021f62, 0x30070aa0,
    0x4a423207, 0x00423407, 0x80021f62, 0x3d070aa0,
    0x4a423f07, 0x00424107, 0x80021d62, 0x4f070aa0,
    0x5a425107, 0x00425307, 0x80021b62, 0x65070aa0,
    0x5a426707, 0x00427507, 0x80021a62, 0x45070aa0,
    0x4a424707, 0x00424907, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x15070220,
    0x00426d67, 0x00000000, 0x80023461, 0x13070220,
    0x00426d27, 0x00000000, 0x80021561, 0x6f670220,
    0x00423007, 0x00000000, 0x80021461, 0x71670220,
    0x00423d07, 0x00000000, 0x80021361, 0x69670220,
    0x00424f07, 0x00000000, 0x80021261, 0x6b670220,
    0x00426507, 0x00000000, 0x80021161, 0x73470220,
    0x00424507, 0x00000000, 0x80021e62, 0x7e070aa0,
    0x5a421307, 0x00421507, 0x80021d62, 0x6f850aa0,
    0x4a006f64, 0x00346f85, 0x80021d62, 0x70850aa0,
    0x4a007064, 0x00347085, 0x80021c62, 0x71850aa0,
    0x4a007164, 0x00347185, 0x80021c62, 0x72850aa0,
    0x4a007264, 0x00347285, 0x80021b62, 0x69850aa0,
    0x5a006964, 0x00346985, 0x80021b62, 0x6a850aa0,
    0x5a006a64, 0x00346a85, 0x80021a62, 0x6b850aa0,
    0x5a006b64, 0x00346b85, 0x80021a62, 0x6c850aa0,
    0x5a006c64, 0x00346c85, 0x80021961, 0x4e070220,
    0x00427367, 0x00000000, 0x80020061, 0x4c070220,
    0x00427327, 0x00000000, 0x80021761, 0x6d670220,
    0x00427e07, 0x00000000, 0x80031762, 0x70050aa0,
    0x4a006fe4, 0x00467005, 0x80031662, 0x72050aa0,
    0x4a0071e4, 0x00467205, 0x80031562, 0x6a050aa0,
    0x5a0069e4, 0x00466a05, 0x80031462, 0x6c050aa0,
    0x5a006be4, 0x00466c05, 0x80021a62, 0x4a070aa0,
    0x4a424c07, 0x00424e07, 0x80021962, 0x6d850aa0,
    0x5a006d64, 0x00346d85, 0x80021962, 0x6e850aa0,
    0x5a006e64, 0x00346e85, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x77050220,
    0x020072e4, 0x000070e4, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x75050220,
    0x02006ce4, 0x00006ae4, 0x80021361, 0x73670220,
    0x00424a07, 0x00000000, 0x80031162, 0x6e050aa0,
    0x5a006de4, 0x00466e05, 0x00040070, 0x00018660,
    0x16462505, 0x00000002, 0x80021a62, 0x73850aa0,
    0x4a007364, 0x00347385, 0x80021a62, 0x74850aa0,
    0x4a007464, 0x00347485, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x2f790062, 0x75016e83,
    0x80031162, 0x74050aa0, 0x4a0073e4, 0x00467405,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f7b0062, 0x77017483, 0x00040070, 0x00018660,
    0x16462705, 0x00000000, 0x2f211a62, 0x7b207900,
    0x00040065, 0x00018220, 0x22462905, 0x00000077,
    0x01040022, 0x0001c060, 0x00000090, 0x00000090,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x607c0041, 0x00605a02, 0x607e0041, 0x00302702,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x13040e68, 0x0e0e7c05, 0x7e052505,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x15058660, 0x02461305, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x00000000, 0xea2a1514, 0x01002114,
    0x00040025, 0x00004600, 0x00000000, 0x00000070,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa0160066, 0x5c225e02, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22461605, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x00041161, 0x21050120,
    0x00003000, 0x00000000, 0x201f1965, 0x21001f03,
    0x00040027, 0x00014060, 0x00000000, 0xfffff678,
    0xa02b0040, 0x02001c03, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x22465c05, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x20050120,
    0x00003000, 0x00000000, 0x00041970, 0x00018660,
    0x16462005, 0x00000000, 0x01040028, 0x0001c660,
    0x00000a78, 0x00000a78, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x0004004c, 0x2d050220,
    0x00462005, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x05600560, 0x00040069, 0x10018510,
    0x01562d06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x05600560, 0xe02f0961, 0x001b0004,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xac310070, 0x2b002f02, 0x00041965, 0x00010220,
    0x22463105, 0x00465c05, 0x01040062, 0x33058220,
    0x02460b05, 0xff800000, 0x01040062, 0x35058220,
    0x02460d05, 0xff800000, 0x01040062, 0x37058220,
    0x02460305, 0x7f800000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x39058220,
    0x02460505, 0x7f800000, 0xa3421c61, 0xff810000,
    0x60420061, 0x00103300, 0xa3440b61, 0xff810000,
    0x60440061, 0x00103500, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0xa33c1a61, 0x7f810000,
    0x603c0061, 0x00103700, 0xa33e0961, 0x7f810000,
    0x603e0061, 0x00103900, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x36058220,
    0x02460f05, 0xff800000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x3a058220,
    0x02460705, 0x7f800000, 0x80031461, 0x7b060220,
    0x00444226, 0x00000000, 0x80031361, 0x33060220,
    0x00444426, 0x00000000, 0x80031261, 0x51060220,
    0x00443c26, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x61060220,
    0x00443e26, 0x00000000, 0xa3460e61, 0xff810000,
    0x60460061, 0x00103600, 0xa3400d61, 0x7f810000,
    0x60400061, 0x00103a00, 0x00040070, 0x00018660,
    0x16462505, 0x00000001, 0x80030d62, 0x79060aa0,
    0x4a444206, 0x00447b06, 0x80031c62, 0x2d060aa0,
    0x4a444406, 0x00443306, 0x80030b62, 0x4f060aa0,
    0x5a443c06, 0x00445106, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031a62, 0x5f060aa0,
    0x5a443e06, 0x00446106, 0x80031661, 0x4d060220,
    0x00444626, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80031561, 0x6e060220,
    0x00444026, 0x00000000, 0x80030c61, 0x42260220,
    0x00447906, 0x00000000, 0x80030b61, 0x44260220,
    0x00442d06, 0x00000000, 0x80030a61, 0x3c260220,
    0x00444f06, 0x00000000, 0x80030961, 0x3e260220,
    0x00445f06, 0x00000000, 0x80031e62, 0x4b060aa0,
    0x4a444606, 0x00444d06, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80031d62, 0x6c060aa0,
    0x5a444006, 0x00446e06, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x13070220,
    0x00424247, 0x00000000, 0x80020061, 0x7e070220,
    0x00424227, 0x00000000, 0x80020d61, 0x38070220,
    0x00424447, 0x00000000, 0x80021761, 0x36070220,
    0x00424427, 0x00000000, 0x80021e61, 0x56070220,
    0x00423c47, 0x00000000, 0x80023861, 0x54070220,
    0x00423c27, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x66070220,
    0x00423e47, 0x00000000, 0x80023d61, 0x64070220,
    0x00423e27, 0x00000000, 0x80031261, 0x46260220,
    0x00444b06, 0x00000000, 0x80031161, 0x40260220,
    0x00446c06, 0x00000000, 0x80021f62, 0x7c070aa0,
    0x4a427e07, 0x00421307, 0x80021f62, 0x34070aa0,
    0x4a423607, 0x00423807, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x52070aa0,
    0x5a425407, 0x00425607, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x62070aa0,
    0x5a426407, 0x00426607, 0x80020a61, 0x50070220,
    0x00424627, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021a61, 0x73070220,
    0x00424047, 0x00000000, 0x80023861, 0x71070220,
    0x00424027, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021461, 0x42470220,
    0x00427c07, 0x00000000, 0x80021361, 0x44470220,
    0x00423407, 0x00000000, 0x80021261, 0x3c470220,
    0x00425207, 0x00000000, 0x80021161, 0x3e470220,
    0x00426207, 0x00000000, 0x80021d62, 0x6f070aa0,
    0x5a427107, 0x00427307, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x1e070220,
    0x00424267, 0x00000000, 0x80020061, 0x16070220,
    0x00424227, 0x00000000, 0x80021d61, 0x4a070220,
    0x00424467, 0x00000000, 0x80020061, 0x48070220,
    0x00424427, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80021e61, 0x5e070220,
    0x00423c67, 0x00000000, 0x80020061, 0x59070220,
    0x00423c27, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x6b070220,
    0x00423e67, 0x00000000, 0x80023e61, 0x69070220,
    0x00423e27, 0x00000000, 0x80020061, 0x52070220,
    0x00424647, 0x00000000, 0x80021161, 0x40470220,
    0x00426f07, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021f62, 0x14070aa0,
    0x4a421607, 0x00421e07, 0x80021f62, 0x39070aa0,
    0x4a424807, 0x00424a07, 0x80021d62, 0x57070aa0,
    0x5a425907, 0x00425e07, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x67070aa0,
    0x5a426907, 0x00426b07, 0x80021a62, 0x4e070aa0,
    0x4a425007, 0x00425207, 0x80021961, 0x78070220,
    0x00424067, 0x00000000, 0x80023361, 0x76070220,
    0x00424027, 0x00000000, 0x80021561, 0x42670220,
    0x00421407, 0x00000000, 0x80021461, 0x44670220,
    0x00423907, 0x00000000, 0x80021361, 0x3c670220,
    0x00425707, 0x00000000, 0x80021261, 0x3e670220,
    0x00426707, 0x00000000, 0x80021161, 0x46470220,
    0x00424e07, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021e62, 0x74070aa0,
    0x5a427607, 0x00427807, 0x80021d62, 0x42850aa0,
    0x4a004264, 0x00344285, 0x80021d62, 0x43850aa0,
    0x4a004364, 0x00344385, 0x80021c62, 0x44850aa0,
    0x4a004464, 0x00344485, 0x80021c62, 0x45850aa0,
    0x4a004564, 0x00344585, 0x80021b62, 0x3c850aa0,
    0x5a003c64, 0x00343c85, 0x80021b62, 0x3d850aa0,
    0x5a003d64, 0x00343d85, 0x80021a62, 0x3e850aa0,
    0x5a003e64, 0x00343e85, 0x80021a62, 0x3f850aa0,
    0x5a003f64, 0x00343f85, 0x80021961, 0x57070220,
    0x00424667, 0x00000000, 0x80020061, 0x55070220,
    0x00424627, 0x00000000, 0x80021761, 0x40670220,
    0x00427407, 0x00000000, 0x80031762, 0x43050aa0,
    0x4a0042e4, 0x00464305, 0x80031662, 0x45050aa0,
    0x4a0044e4, 0x00464505, 0x80031562, 0x3d050aa0,
    0x5a003ce4, 0x00463d05, 0x80031462, 0x3f050aa0,
    0x5a003ee4, 0x00463f05, 0x80021a62, 0x53070aa0,
    0x4a425507, 0x00425707, 0x80021962, 0x40850aa0,
    0x5a004064, 0x00344085, 0x80021962, 0x41850aa0,
    0x5a004164, 0x00344185, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x4a050220,
    0x020045e4, 0x000043e4, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x48050220,
    0x02003fe4, 0x00003de4, 0x80021361, 0x46670220,
    0x00425307, 0x00000000, 0x80031162, 0x41050aa0,
    0x5a0040e4, 0x00464105, 0x00040070, 0x00018660,
    0x16462505, 0x00000002, 0x80021a62, 0x46850aa0,
    0x4a004664, 0x00344685, 0x80021a62, 0x47850aa0,
    0x4a004764, 0x00344785, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x2f4c0062, 0x48014183,
    0x80031162, 0x47050aa0, 0x4a0046e4, 0x00464705,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f4e0062, 0x4a014783, 0x00040070, 0x00018660,
    0x16462705, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x2f2d0062, 0x4e204c00,
    0x00040065, 0x00018220, 0x22462905, 0x00000077,
    0x01040022, 0x0001c060, 0x00000090, 0x00000090,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x604f0041, 0x00602f02, 0x60510041, 0x00302702,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x53040e68, 0x0e0e4f05, 0x51052505,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x55058660, 0x02465305, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xea2a5514, 0x01002d14,
    0x00040025, 0x00004600, 0x00000000, 0x00000080,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0xa0560066, 0x5c223102, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22465605, 0x00000000, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x57050120,
    0x00003000, 0x00000000, 0x20201965, 0x57002003,
    0x00040027, 0x00014060, 0x00000000, 0xfffff578,
    0x00040061, 0x00010660, 0x20465c05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000128, 0x00000128,
    0x80000e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x58058660, 0x02461805, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa05a0040, 0x48005803, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xea105a14, 0x01000000, 0x00043669, 0x5b058660,
    0x02461a05, 0x00000002, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa05d0040, 0x4c005b03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xea105d14, 0x01000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x5e058660, 0x02461c05, 0x00000002,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0600040, 0x50005e03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xea106014, 0x01000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80004831, 0x610c0000,
    0xe23e000c, 0x00000000, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80033b61, 0x62054220,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x62550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044931, 0x00000000,
    0x3008620c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040040, 0x63058660,
    0x06000204, 0x00002c58, 0x00041f61, 0x21050220,
    0x00462305, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x65058220,
    0x52466305, 0x00002c58, 0x00041a70, 0x00018220,
    0x42462105, 0x00000120, 0x01040028, 0x0001c660,
    0x00000180, 0x00000180, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x67058660,
    0x02462105, 0x00000002, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x2e140000,
    0xea006714, 0x00000000, 0xae002e70, 0x7f802e01,
    0x01040022, 0x0001c060, 0x00000100, 0x00000100,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0xa0690040, 0x67006302, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x276b0070, 0x63006903,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x6f060220, 0x00346905, 0x00000000,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x71060220, 0x00346a05, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x6d042e68, 0x06266505, 0x6b050224,
    0x00031961, 0x6f260220, 0x00346d05, 0x00000000,
    0x00131a61, 0x71260220, 0x00346e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xfb2a6f24, 0x01002e14,
    0x00040025, 0x00004600, 0x00000000, 0x00000018,
    0xa0210040, 0x20002103, 0x00040027, 0x00014060,
    0x00000000, 0xfffffe70, 0x00000060, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x42462305, 0x00000030, 0x01040028, 0x0001c660,
    0x00000220, 0x00000220, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x70058660,
    0x02462305, 0x00000002, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa0720040, 0x48007003,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x2f140000, 0xea007214, 0x00000000,
    0x00042870, 0x00018660, 0x26462f05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000160, 0x00000160,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x00040040, 0x73058660, 0x06000204, 0x000030d8,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x75058220, 0x52467305, 0x000030d8,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0xa0770040, 0x70007302, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x27790070, 0x73007703,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00031761, 0x03060220, 0x00347705, 0x00000000,
    0x80103801, 0x00000000, 0x00000000, 0x00000000,
    0x00131761, 0x05060220, 0x00347805, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x7b042e68, 0x06267505, 0x79050224,
    0x00131961, 0x05260220, 0x00347c05, 0x00000000,
    0x00031a61, 0x03260220, 0x00347b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xfb180324, 0x01002f14,
    0x00040025, 0x00004600, 0x00000000, 0x00000018,
    0xa0230040, 0x20002303, 0x00040027, 0x00014060,
    0x00000000, 0xfffffdd0, 0x80031161, 0x7e050220,
    0x00460005, 0x00000000, 0x80040931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_BFS_pass1_initial = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 1344,
      .base.program_size = 12976,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_BFS_pass1_initial_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_BFS_pass1_initial_printfs,
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
   .args = gfx125_bvh_build_BFS_BFS_pass1_initial_args,
   .code = gfx125_bvh_build_BFS_BFS_pass1_initial_code,
};
const char *gfx125_bvh_build_BFS_BFS_pass1_initial_sha1 = "6c4b56ec5993cef226cbaae2a4a3ffe0b069c729";

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

and(1)          g87<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
and(16)         g70<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
mov(16)         g89<1>UD        g0.1<0,1,0>UD                   { align1 1H };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g87UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g76<1>UW        0x76543210V                     { align1 WE_all 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g72<1>D         g70<8,8,1>D     0x00000004UD    { align1 1H I@4 };
shl(16)         g65<1>D         g89<8,8,1>D     0x00000009UD    { align1 1H I@4 };
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
mov(1)          g54<1>D         1D                              { align1 WE_all 1N };
and(16)         g37<1>UD        g74<1,1,0>UD    0x00000003UD    { align1 1H F@5 compacted };
shr(16)         g39<1>UD        g74<1,1,0>UD    0x00000002UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
shl(16)         g41<1>D         g54<0,1,0>D     g74<8,8,1>UD    { align1 1H };

LABEL8:
cmp.z.f0.0(16)  null<1>D        g30<8,8,1>D     0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
fbl(16)         g43<1>UD        g30<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         a0<1>UW         0x0300UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g43<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0300UW        { align1 1H A@1 };
mov(16)         g45<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g47<1>D         g45<1,1,0>D     g24<1,1,0>D     { align1 1H I@1 compacted };
and.nz.f0.0(16) null<1>UD       g47<8,8,1>UD    g92<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
(+f0.0) sel(16) g49<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H F@1 };
(+f0.0) sel(16) g51<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
(+f0.0) sel(16) g53<1>UD        g3<8,8,1>UD     0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g55<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g98<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g98<1>F         g49<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g100<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g100<1>F        g51<1,1,0>F                     { align1 1H compacted };
mov(16)         g90<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g90<1>F         g53<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g94<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g94<1>F         g55<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g52<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g56<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g114<2>UD       g98.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g19<2>UD        g100.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
mov(8)          g60<2>UD        g90.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
mov(8)          g73<2>UD        g94.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g102<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g102<1>F        g52<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g96<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g96<1>F         g56<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     1D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(8)       g112<2>F        g98<8,4,2>F     g114<8,4,2>F    { align1 WE_all 1Q I@5 };
sel.ge(8)       g125<2>F        g100<8,4,2>F    g19<8,4,2>F     { align1 WE_all 1Q A@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sel.l(8)        g58<2>F         g90<8,4,2>F     g60<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g71<2>F         g94<8,4,2>F     g73<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g52<2>UD        g102.1<8,4,2>UD                 { align1 WE_all 1Q F@6 };
mov(8)          g86<2>UD        g96.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g98.1<2>UD      g112<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g100.1<2>UD     g125<8,4,2>UD                   { align1 WE_all 1Q A@3 };
mov(8)          g90.1<2>UD      g58<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g94.1<2>UD      g71<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sel.ge(8)       g50<2>F         g102<8,4,2>F    g52<8,4,2>F     { align1 WE_all 1Q I@6 };
sel.l(8)        g84<2>F         g96<8,4,2>F     g86<8,4,2>F     { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g119<4>UD       g98.2<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g117<4>UD       g98.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
mov(4)          g32<4>UD        g100.2<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g22<4>UD        g100.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g65<4>UD        g90.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g63<4>UD        g90.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g78<4>UD        g94.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g76<4>UD        g94.1<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g102.1<2>UD     g50<8,4,2>UD                    { align1 WE_all 1Q F@2 };
mov(8)          g96.1<2>UD      g84<8,4,2>UD                    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g115<4>F        g117<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g20<4>F         g22<8,2,4>F     g32<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g74<4>F         g76<8,2,4>F     g78<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g57<4>UD        g102.2<8,2,4>UD                 { align1 WE_all 1N I@2 };
mov(4)          g55<4>UD        g102.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g106<4>UD       g96.2<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g104<4>UD       g96.1<8,2,4>UD                  { align1 WE_all 1N $14.src };
mov(4)          g98.2<4>UD      g115<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g100.2<4>UD     g20<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g90.2<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g94.2<4>UD      g74<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g53<4>F         g55<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g87<4>F         g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g124<4>UD       g98.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g122<4>UD       g98.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g49<4>UD        g100.3<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g43<4>UD        g100.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g70<4>UD        g90.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g68<4>UD        g90.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g83<4>UD        g94.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g81<4>UD        g94.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g102.2<4>UD     g53<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g96.2<4>UD      g87<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g120<4>F        g122<8,2,4>F    g124<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g33<4>F         g43<8,2,4>F     g49<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g66<4>F         g68<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@5 };
sel.l(4)        g79<4>F         g81<8,2,4>F     g83<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g62<4>UD        g102.3<8,2,4>UD                 { align1 WE_all 1N A@2 };
mov(4)          g60<4>UD        g102.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g111<4>UD       g96.3<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g109<4>UD       g96.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g98.3<4>UD      g120<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g100.3<4>UD     g33<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g90.3<4>UD      g66<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g94.3<4>UD      g79<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g58<4>F         g60<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g107<4>F        g109<8,2,4>F    g111<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g98.4<1>F       g98.3<0,1,0>F   g98.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g99.4<1>F       g99.3<0,1,0>F   g99.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g100.4<1>F      g100.3<0,1,0>F  g100.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.ge(4)       g101.4<1>F      g101.3<0,1,0>F  g101.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g90.4<1>F       g90.3<0,1,0>F   g90.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g91.4<1>F       g91.3<0,1,0>F   g91.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g94.4<1>F       g94.3<0,1,0>F   g94.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g95.4<1>F       g95.3<0,1,0>F   g95.4<4,4,1>F   { align1 WE_all 1N I@1 };
mov(4)          g102.3<4>UD     g58<8,2,4>UD                    { align1 WE_all 1N F@7 };
mov(4)          g96.3<4>UD      g107<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(8)       g99<1>F         g98.7<0,1,0>F   g99<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g101<1>F        g100.7<0,1,0>F  g101<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.l(8)        g91<1>F         g90.7<0,1,0>F   g91<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.l(8)        g95<1>F         g94.7<0,1,0>F   g95<8,8,1>F     { align1 WE_all 1Q F@4 };
sel.ge(4)       g102.4<1>F      g102.3<0,1,0>F  g102.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.ge(4)       g103.4<1>F      g103.3<0,1,0>F  g103.4<4,4,1>F  { align1 WE_all 1N I@2 };
sel.l(4)        g96.4<1>F       g96.3<0,1,0>F   g96.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g97.4<1>F       g97.3<0,1,0>F   g97.4<4,4,1>F   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g59<1>UD        g101.7<0,1,0>UD g99.7<0,1,0>UD  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g57<1>UD        g95.7<0,1,0>UD  g91.7<0,1,0>UD  { align1 1H };
sel.ge(8)       g103<1>F        g102.7<0,1,0>F  g103<8,8,1>F    { align1 WE_all 1Q F@3 };
sel.l(8)        g97<1>F         g96.7<0,1,0>F   g97<8,8,1>F     { align1 WE_all 1Q F@2 };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     2D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g61<1>UD        g97.7<0,1,0>UD  g57<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g63<1>UD        g103.7<0,1,0>UD g59<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g49<1>F         g61<1,1,0>F     -g63<1,1,0>F    { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g41<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g64<1>D         g45<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g66<1>D         g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g68<1>D         g64<8,8,1>D     g37<8,8,1>D     g66<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g70<1>D         g68<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g70UD           g49UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
or(16)          g71<1>D         ~g47<1,1,0>D    ~g92<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g71<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g72<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g30<1>UD        g30<1,1,0>UD    g72<1,1,0>UD    { align1 1H I@1 compacted };

LABEL6:
while(16)       JIP:  LABEL8                                    { align1 1H };
add(16)         g73<1>D         g26<1,1,0>D     16D             { align1 1H I@4 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g92<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@5 };
mov(16)         g31<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL11:
cmp.z.f0.0(16)  null<1>D        g31<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@7 };
fbl(16)         g75<1>UD        g31<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0920UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g75<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0920UW        { align1 1H A@1 };
mov(16)         g77<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.z.f0.0(16)  g79<1>D         g77<1,1,0>D     g73<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g79<8,8,1>UD    g92<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
(+f0.0) sel(16) g81<1>UD        g11<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g83<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
(+f0.0) sel(16) g85<1>UD        g3<8,8,1>UD     0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g87<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g109<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g109<1>F        g81<1,1,0>F                     { align1 1H compacted };
mov(16)         g111<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g111<1>F        g83<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g103<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g103<1>F        g85<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g105<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g105<1>F        g87<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g84<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g88<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(8)          g19<2>UD        g109.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(8)          g50<2>UD        g111.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(8)          g65<2>UD        g103.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g113<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g113<1>F        g84<1,1,0>F                     { align1 1H compacted };
mov(8)          g86<2>UD        g105.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g107<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g107<1>F        g88<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g126<2>F        g109<8,4,2>F    g19<8,4,2>F     { align1 WE_all 1Q A@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.ge(8)       g48<2>F         g111<8,4,2>F    g50<8,4,2>F     { align1 WE_all 1Q A@4 };
sel.l(8)        g63<2>F         g103<8,4,2>F    g65<8,4,2>F     { align1 WE_all 1Q A@3 };
sel.l(8)        g82<2>F         g105<8,4,2>F    g86<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g115<2>UD       g107.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
mov(8)          g109.1<2>UD     g126<8,4,2>UD                   { align1 WE_all 1Q A@4 };
mov(8)          g111.1<2>UD     g48<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g103.1<2>UD     g63<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g105.1<2>UD     g82<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.l(8)        g100<2>F        g107<8,4,2>F    g115<8,4,2>F    { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g33<4>UD        g109.2<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g22<4>UD        g109.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g55<4>UD        g111.2<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g53<4>UD        g111.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g70<4>UD        g103.2<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g68<4>UD        g103.1<8,2,4>UD                 { align1 WE_all 1N };
mov(8)          g63<2>UD        g113.1<8,4,2>UD                 { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g94<4>UD        g105.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g89<4>UD        g105.1<8,2,4>UD                 { align1 WE_all 1N F@6 };
mov(8)          g107.1<2>UD     g100<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.ge(4)       g20<4>F         g22<8,2,4>F     g33<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g51<4>F         g53<8,2,4>F     g55<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g66<4>F         g68<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(8)       g61<2>F         g113<8,4,2>F    g63<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(4)        g87<4>F         g89<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g120<4>UD       g107.2<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g118<4>UD       g107.1<8,2,4>UD                 { align1 WE_all 1N $3.src };
mov(4)          g109.2<4>UD     g20<8,2,4>UD                    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g111.2<4>UD     g51<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g103.2<4>UD     g66<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(8)          g113.1<2>UD     g61<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(4)          g105.2<4>UD     g87<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g116<4>F        g118<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@6 };
mov(4)          g47<4>UD        g109.3<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g45<4>UD        g109.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g58<4>UD        g111.1<8,2,4>UD                 { align1 WE_all 1N @6 $2.dst };
mov(4)          g81<4>UD        g103.3<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g75<4>UD        g103.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g68<4>UD        g113.2<8,2,4>UD                 { align1 WE_all 1N A@4 };
mov(4)          g66<4>UD        g113.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g60<4>UD        g111.3<8,2,4>UD                 { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g99<4>UD        g105.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g97<4>UD        g105.1<8,2,4>UD                 { align1 WE_all 1N $11.src };
mov(4)          g107.2<4>UD     g116<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g43<4>F         g45<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g71<4>F         g75<8,2,4>F     g81<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g64<4>F         g66<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sel.ge(4)       g56<4>F         g58<8,2,4>F     g60<8,2,4>F     { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g125<4>UD       g107.3<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g123<4>UD       g107.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g109.3<4>UD     g43<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g103.3<4>UD     g71<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g113.2<4>UD     g64<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g111.3<4>UD     g56<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g105.3<4>UD     g95<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g121<4>F        g123<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@6 };
sel.ge(4)       g109.4<1>F      g109.3<0,1,0>F  g109.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g110.4<1>F      g110.3<0,1,0>F  g110.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.l(4)        g103.4<1>F      g103.3<0,1,0>F  g103.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g104.4<1>F      g104.3<0,1,0>F  g104.4<4,4,1>F  { align1 WE_all 1N I@4 };
mov(4)          g75<4>UD        g113.3<8,2,4>UD                 { align1 WE_all 1N A@3 };
mov(4)          g71<4>UD        g113.1<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g112.4<1>F      g112.3<0,1,0>F  g112.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g105.4<1>F      g105.3<0,1,0>F  g105.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g106.4<1>F      g106.3<0,1,0>F  g106.4<4,4,1>F  { align1 WE_all 1N I@3 };
mov(4)          g107.3<4>UD     g121<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(8)       g110<1>F        g109.7<0,1,0>F  g110<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.l(8)        g104<1>F        g103.7<0,1,0>F  g104<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.ge(4)       g69<4>F         g71<8,2,4>F     g75<8,2,4>F     { align1 WE_all 1N I@2 };
sel.ge(8)       g112<1>F        g111.7<0,1,0>F  g112<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.l(8)        g106<1>F        g105.7<0,1,0>F  g106<8,8,1>F    { align1 WE_all 1Q F@5 };
sel.l(4)        g107.4<1>F      g107.3<0,1,0>F  g107.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@1 };
mov(4)          g113.3<4>UD     g69<8,2,4>UD                    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g94<1>UD        g112.7<0,1,0>UD g110.7<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
(+f0.0) sel(16) g89<1>UD        g106.7<0,1,0>UD g104.7<0,1,0>UD { align1 1H };
sel.l(8)        g108<1>F        g107.7<0,1,0>F  g108<8,8,1>F    { align1 WE_all 1Q F@1 };
sel.ge(4)       g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.ge(4)       g114.4<1>F      g114.3<0,1,0>F  g114.4<4,4,1>F  { align1 WE_all 1N I@3 };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g114<1>F        g113.7<0,1,0>F  g114<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g96<1>UD        g108.7<0,1,0>UD g89<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g98<1>UD        g114.7<0,1,0>UD g94<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g50<1>F         g96<1,1,0>F     -g98<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g41<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL10             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g99<1>D         g77<1,1,0>D     6W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mul(16)         g101<1>D        g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g103<1>D        g99<8,8,1>D     g37<8,8,1>D     g101<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
shl(16)         g105<1>D        g103<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g105UD          g50UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

LABEL10:
endif(16)       JIP:  LABEL9                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
or(16)          g106<1>D        ~g79<1,1,0>D    ~g92<1,1,0>D    { align1 1H $14.src compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g106<8,8,1>UD   0x00000000UD    { align1 1H I@2 };
mov(16)         g107<1>UD       f0<0,1,0>UW                     { align1 1H };
and(16)         g31<1>UD        g31<1,1,0>UD    g107<1,1,0>UD   { align1 1H I@1 compacted };

LABEL9:
while(16)       JIP:  LABEL11                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g108<1>D        g28<1,1,0>D     32D             { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g92<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
mov(16)         g32<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL14:
cmp.z.f0.0(16)  null<1>D        g32<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL12       UIP:  LABEL12             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
fbl(16)         g110<1>UD       g32<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         a0<1>UW         0x0d80UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g110<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0d80UW        { align1 1H A@1 };
mov(16)         g112<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g114<1>D        g112<1,1,0>D    g108<1,1,0>D    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g114<8,8,1>UD   g92<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
(+f0.0) sel(16) g116<1>UD       g11<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
(+f0.0) sel(16) g118<1>UD       g13<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g120<1>UD       g3<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g122<1>UD       g5<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g30<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g30<1>F         g116<1,1,0>F                    { align1 1H compacted };
mov(16)         g43<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g43<1>F         g118<1,1,0>F                    { align1 1H compacted };
mov(16)         g126<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g126<1>F        g120<1,1,0>F                    { align1 1H compacted };
mov(16)         g19<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@1 compacted };
mov(16)         g19<1>F         g122<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g119<1>UD       g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g123<1>UD       g7<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(8)          g50<2>UD        g30.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g63<2>UD        g43.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g78<2>UD        g126.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g94<2>UD        g19.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g45<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g45<1>F         g119<1,1,0>F                    { align1 1H compacted };
mov(16)         g21<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g21<1>F         g123<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     1D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.ge(8)       g48<2>F         g30<8,4,2>F     g50<8,4,2>F     { align1 WE_all 1Q A@5 };
sel.ge(8)       g61<2>F         g43<8,4,2>F     g63<8,4,2>F     { align1 WE_all 1Q A@4 };
sel.l(8)        g76<2>F         g126<8,4,2>F    g78<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g89<2>F         g19<8,4,2>F     g94<8,4,2>F     { align1 WE_all 1Q A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(8)          g110<2>UD       g21.1<8,4,2>UD                  { align1 WE_all 1Q F@5 };
mov(8)          g30.1<2>UD      g48<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g43.1<2>UD      g61<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g126.1<2>UD     g76<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g19.1<2>UD      g89<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.l(8)        g105<2>F        g21<8,4,2>F     g110<8,4,2>F    { align1 WE_all 1Q I@5 };
mov(4)          g55<4>UD        g30.2<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g53<4>UD        g30.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g68<4>UD        g43.2<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g66<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g83<4>UD        g126.2<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g81<4>UD        g126.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g99<4>UD        g19.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g97<4>UD        g19.1<8,2,4>UD                  { align1 WE_all 1N $11.src };
mov(8)          g76<2>UD        g45.1<8,4,2>UD                  { align1 WE_all 1Q F@7 };
mov(8)          g21.1<2>UD      g105<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.ge(4)       g51<4>F         g53<8,2,4>F     g55<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g64<4>F         g66<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g79<4>F         g81<8,2,4>F     g83<8,2,4>F     { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@3 };
sel.ge(8)       g74<2>F         g45<8,4,2>F     g76<8,4,2>F     { align1 WE_all 1Q I@2 };
mov(4)          g120<4>UD       g21.2<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g118<4>UD       g21.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g30.2<4>UD      g51<8,2,4>UD                    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g43.2<4>UD      g64<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g126.2<4>UD     g79<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g19.2<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(8)          g45.1<2>UD      g74<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sel.l(4)        g116<4>F        g118<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@6 };
mov(4)          g60<4>UD        g30.3<8,2,4>UD                  { align1 WE_all 1N @5 $2.dst };
mov(4)          g58<4>UD        g30.1<8,2,4>UD                  { align1 WE_all 1N $2.dst };
mov(4)          g71<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g88<4>UD        g126.3<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g86<4>UD        g126.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g104<4>UD       g19.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(4)          g102<4>UD       g19.1<8,2,4>UD                  { align1 WE_all 1N $13.src };
mov(4)          g81<4>UD        g45.2<8,2,4>UD                  { align1 WE_all 1N A@4 };
mov(4)          g79<4>UD        g45.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g21.2<4>UD      g116<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g73<4>UD        g43.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sel.ge(4)       g56<4>F         g58<8,2,4>F     g60<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g84<4>F         g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.l(4)        g100<4>F        g102<8,2,4>F    g104<8,2,4>F    { align1 WE_all 1N I@5 };
sel.ge(4)       g77<4>F         g79<8,2,4>F     g81<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g47<4>UD        g21.3<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g123<4>UD       g21.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.ge(4)       g69<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N I@3 };
mov(4)          g30.3<4>UD      g56<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g126.3<4>UD     g84<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g19.3<4>UD      g100<8,2,4>UD                   { align1 WE_all 1N F@3 };
mov(4)          g45.2<4>UD      g77<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.l(4)        g121<4>F        g123<8,2,4>F    g47<8,2,4>F     { align1 WE_all 1N I@5 };
mov(4)          g43.3<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@2 };
sel.ge(4)       g30.4<1>F       g30.3<0,1,0>F   g30.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g31.4<1>F       g31.3<0,1,0>F   g31.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g126.4<1>F      g126.3<0,1,0>F  g126.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g127.4<1>F      g127.3<0,1,0>F  g127.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g19.4<1>F       g19.3<0,1,0>F   g19.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g20.4<1>F       g20.3<0,1,0>F   g20.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g86<4>UD        g45.3<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g84<4>UD        g45.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g21.3<4>UD      g121<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(4)       g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(8)       g31<1>F         g30.7<0,1,0>F   g31<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g127<1>F        g126.7<0,1,0>F  g127<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.l(8)        g20<1>F         g19.7<0,1,0>F   g20<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(4)       g82<4>F         g84<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N I@2 };
sel.l(4)        g21.4<1>F       g21.3<0,1,0>F   g21.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g22.4<1>F       g22.3<0,1,0>F   g22.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g44<1>F         g43.7<0,1,0>F   g44<8,8,1>F     { align1 WE_all 1Q F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g124<1>UD       g20.7<0,1,0>UD  g127.7<0,1,0>UD { align1 1H };
mov(4)          g45.3<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@4 };
sel.l(8)        g22<1>F         g21.7<0,1,0>F   g22<8,8,1>F     { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g126<1>UD       g44.7<0,1,0>UD  g31.7<0,1,0>UD  { align1 1H };
sel.ge(4)       g45.4<1>F       g45.3<0,1,0>F   g45.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g46.4<1>F       g46.3<0,1,0>F   g46.4<4,4,1>F   { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g46<1>F         g45.7<0,1,0>F   g46<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
(+f0.0) sel(16) g19<1>UD        g22.7<0,1,0>UD  g124<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g21<1>UD        g46.7<0,1,0>UD  g126<1,1,0>UD   { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g39<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g51<1>F         g19<1,1,0>F     -g21<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g41<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g22<1>D         g112<1,1,0>D    6W              { align1 1H compacted };
mul(16)         g30<1>D         g39<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add3(16)        g43<1>D         g22<8,8,1>D     g37<8,8,1>D     g30<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
shl(16)         g45<1>D         g43<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g45UD           g51UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

LABEL13:
endif(16)       JIP:  LABEL12                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(16)          g46<1>D         ~g114<1,1,0>D   ~g92<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g46<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g47<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g32<1>UD        g32<1,1,0>UD    g47<1,1,0>UD    { align1 1H I@1 compacted };

LABEL12:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g92<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL15             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
shl(16)         g48<1>D         g24<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g50<1>D         g48<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g50UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
shl(16)         g51<1>D         g26<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g53<1>D         g51<1,1,0>D     1216D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g53UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
shl(16)         g54<1>D         g28<8,8,1>D     0x00000002UD    { align1 1H $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g56<1>D         g54<1,1,0>D     1280D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g56UD           nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };

LABEL15:
endif(16)       JIP:  LABEL16                                   { align1 1H };

LABEL16:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
send(1)         g57UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
mov(8)          g58<1>UD        0x00000000UD                    { align1 WE_all 1Q $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(2)          g58.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g58UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $5 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
add(16)         g59<1>D         g2<0,1,0>D      11352D          { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
mov(16)         g33<1>UD        g35<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g61<1>UD        g59<8,8,1>UD    0x00002c58UD    { align1 1H };

LABEL19:
cmp.ge.f0.0(16) null<1>UD       g33<8,8,1>UD    0x00000120UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL17       UIP:  LABEL17             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
shl(16)         g63<1>D         g33<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g52UD           g63UD           nullUD          0x04200500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
cmp.nz.f0.0(16) null<1>F        g52<1,1,0>F     0x7f800000F  /* infF */ { align1 1H $6.dst compacted };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL18             { align1 1H };
add(16)         g65<1>D         g59<1,1,0>D     g63<1,1,0>D     { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g67<1>UD        g65<1,1,0>UD    g59<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(8)          g71<2>UD        g65<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
mov(8)          g73<2>UD        g66<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add3(16)        g69<1>D         -g61<8,8,1>D    g2.1<0,1,0>D    -g67<1,1,1>D { align1 1H };
mov(8)          g71.1<2>UD      g69<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g73.1<2>UD      g70<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g71UD           g52UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

LABEL18:
endif(16)       JIP:  LABEL17                                   { align1 1H };
add(16)         g33<1>D         g33<1,1,0>D     512D            { align1 1H compacted };

LABEL17:
while(16)       JIP:  LABEL19                                   { align1 1H };
nop                                                             ;

LABEL22:
cmp.ge.f0.0(16) null<1>UD       g35<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL20       UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@7 };
shl(16)         g72<1>D         g35<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g74<1>D         g72<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g53UD           g74UD           nullUD          0x04200500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
cmp.nz.f0.0(16) null<1>D        g53<8,8,1>D     0D              { align1 1H $14.dst };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL21             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
add(16)         g75<1>D         g2<0,1,0>D      12504D          { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g77<1>UD        g75<8,8,1>UD    0x000030d8UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
add(16)         g79<1>D         g75<1,1,0>D     g72<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    g75<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
mov(8)          g85<2>UD        g79<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@7 };
mov(8)          g87<2>UD        g80<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add3(16)        g83<1>D         -g77<8,8,1>D    g2.1<0,1,0>D    -g81<1,1,1>D { align1 1H };
mov(8)          g87.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g85.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g85UD           g53UD           0x0804058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

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
    0x80000065, 0x57058220, 0x02000004, 0xffffffc0,
    0xe0460065, 0x0ff10043, 0x00040061, 0x59050220,
    0x00000024, 0x00000000, 0x80000065, 0x61058220,
    0x020000a4, 0xfffffc00, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80004031, 0x01140000,
    0xfa00570c, 0x00340000, 0x80030061, 0x4c054410,
    0x00000000, 0x76543210, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x00041c69, 0x48058660,
    0x02464605, 0x00000004, 0x00041c69, 0x41058660,
    0x02465905, 0x00000009, 0x644c1b40, 0x00804c95,
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
    0x00003000, 0x00000000, 0x80000061, 0x36054660,
    0x00000000, 0x00000001, 0xe0251565, 0x00304a03,
    0xe0271268, 0x00204a03, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x29050660,
    0x02003604, 0x00464a05, 0x00041a70, 0x00018660,
    0x16461e05, 0x00000000, 0x01040028, 0x0001c660,
    0x000009a8, 0x000009a8, 0x0004004c, 0x2b050220,
    0x00461e05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x03000300, 0x00040069, 0x10018510,
    0x01562b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03000300, 0xe02d0961, 0x001b0004,
    0xac2f1970, 0x18002d02, 0x00041965, 0x00010220,
    0x22462f05, 0x00465c05, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x01041162, 0x31058220,
    0x02460b05, 0xff800000, 0x01040062, 0x33058220,
    0x02460d05, 0xff800000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x35058220,
    0x02460305, 0x7f800000, 0x01040062, 0x37058220,
    0x02460505, 0x7f800000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xa3621c61, 0xff810000,
    0x60620061, 0x00103100, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0xa3641b61, 0xff810000,
    0x60640061, 0x00103300, 0xa35a0a61, 0x7f810000,
    0x605a0061, 0x00103500, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa35e1961, 0x7f810000,
    0x605e0061, 0x00103700, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x34058220,
    0x02460f05, 0xff800000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01042262, 0x38058220,
    0x02460705, 0x7f800000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031461, 0x72060220,
    0x00446226, 0x00000000, 0x80031361, 0x13060220,
    0x00446426, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80031261, 0x3c060220,
    0x00445a26, 0x00000000, 0x80031161, 0x49060220,
    0x00445e26, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa3660e61, 0xff810000,
    0x60660061, 0x00103400, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0xa3600d61, 0x7f810000,
    0x60600061, 0x00103800, 0x00040070, 0x00018660,
    0x16462505, 0x00000001, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031d62, 0x70060aa0,
    0x4a446206, 0x00447206, 0x80030c62, 0x7d060aa0,
    0x4a446406, 0x00441306, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80031b62, 0x3a060aa0,
    0x5a445a06, 0x00443c06, 0x80031a62, 0x47060aa0,
    0x5a445e06, 0x00444906, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031661, 0x34060220,
    0x00446626, 0x00000000, 0x80031561, 0x56060220,
    0x00446026, 0x00000000, 0x80030c61, 0x62260220,
    0x00447006, 0x00000000, 0x80030b61, 0x64260220,
    0x00447d06, 0x00000000, 0x80030a61, 0x5a260220,
    0x00443a06, 0x00000000, 0x80030961, 0x5e260220,
    0x00444706, 0x00000000, 0x80031e62, 0x32060aa0,
    0x4a446606, 0x00443406, 0x80031d62, 0x54060aa0,
    0x5a446006, 0x00445606, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x77070220,
    0x00426247, 0x00000000, 0x80023861, 0x75070220,
    0x00426227, 0x00000000, 0x80021d61, 0x20070220,
    0x00426447, 0x00000000, 0x80020061, 0x16070220,
    0x00426427, 0x00000000, 0x80021e61, 0x41070220,
    0x00425a47, 0x00000000, 0x80020061, 0x3f070220,
    0x00425a27, 0x00000000, 0x80021f61, 0x4e070220,
    0x00425e47, 0x00000000, 0x80020061, 0x4c070220,
    0x00425e27, 0x00000000, 0x80031261, 0x66260220,
    0x00443206, 0x00000000, 0x80031161, 0x60260220,
    0x00445406, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021f62, 0x73070aa0,
    0x4a427507, 0x00427707, 0x80021f62, 0x14070aa0,
    0x4a421607, 0x00422007, 0x80021d62, 0x3d070aa0,
    0x5a423f07, 0x00424107, 0x80021b62, 0x4a070aa0,
    0x5a424c07, 0x00424e07, 0x80021a61, 0x39070220,
    0x00426647, 0x00000000, 0x80020061, 0x37070220,
    0x00426627, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b61, 0x6a070220,
    0x00426047, 0x00000000, 0x80023e61, 0x68070220,
    0x00426027, 0x00000000, 0x80021461, 0x62470220,
    0x00427307, 0x00000000, 0x80021361, 0x64470220,
    0x00421407, 0x00000000, 0x80021261, 0x5a470220,
    0x00423d07, 0x00000000, 0x80021161, 0x5e470220,
    0x00424a07, 0x00000000, 0x80021f62, 0x35070aa0,
    0x4a423707, 0x00423907, 0x80021d62, 0x57070aa0,
    0x5a426807, 0x00426a07, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x7c070220,
    0x00426267, 0x00000000, 0x80020061, 0x7a070220,
    0x00426227, 0x00000000, 0x80021d61, 0x31070220,
    0x00426467, 0x00000000, 0x80020061, 0x2b070220,
    0x00426427, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021e61, 0x46070220,
    0x00425a67, 0x00000000, 0x80020061, 0x44070220,
    0x00425a27, 0x00000000, 0x80021f61, 0x53070220,
    0x00425e67, 0x00000000, 0x80020061, 0x51070220,
    0x00425e27, 0x00000000, 0x80021261, 0x66470220,
    0x00423507, 0x00000000, 0x80021161, 0x60470220,
    0x00425707, 0x00000000, 0x80021f62, 0x78070aa0,
    0x4a427a07, 0x00427c07, 0x80021f62, 0x21070aa0,
    0x4a422b07, 0x00423107, 0x80021d62, 0x42070aa0,
    0x5a424407, 0x00424607, 0x80021b62, 0x4f070aa0,
    0x5a425107, 0x00425307, 0x80020a61, 0x3e070220,
    0x00426667, 0x00000000, 0x80020061, 0x3c070220,
    0x00426627, 0x00000000, 0x80021b61, 0x6f070220,
    0x00426067, 0x00000000, 0x80020061, 0x6d070220,
    0x00426027, 0x00000000, 0x80021461, 0x62670220,
    0x00427807, 0x00000000, 0x80021361, 0x64670220,
    0x00422107, 0x00000000, 0x80021261, 0x5a670220,
    0x00424207, 0x00000000, 0x80021161, 0x5e670220,
    0x00424f07, 0x00000000, 0x80021f62, 0x3a070aa0,
    0x4a423c07, 0x00423e07, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x6b070aa0,
    0x5a426d07, 0x00426f07, 0x80021c62, 0x62850aa0,
    0x4a006264, 0x00346285, 0x80021c62, 0x63850aa0,
    0x4a006364, 0x00346385, 0x80021b62, 0x64850aa0,
    0x4a006464, 0x00346485, 0x80021b62, 0x65850aa0,
    0x4a006564, 0x00346585, 0x80021a62, 0x5a850aa0,
    0x5a005a64, 0x00345a85, 0x80021a62, 0x5b850aa0,
    0x5a005b64, 0x00345b85, 0x80021962, 0x5e850aa0,
    0x5a005e64, 0x00345e85, 0x80021962, 0x5f850aa0,
    0x5a005f64, 0x00345f85, 0x80021761, 0x66670220,
    0x00423a07, 0x00000000, 0x80021761, 0x60670220,
    0x00426b07, 0x00000000, 0x80031762, 0x63050aa0,
    0x4a0062e4, 0x00466305, 0x80031662, 0x65050aa0,
    0x4a0064e4, 0x00466505, 0x80031562, 0x5b050aa0,
    0x5a005ae4, 0x00465b05, 0x80031462, 0x5f050aa0,
    0x5a005ee4, 0x00465f05, 0x80021a62, 0x66850aa0,
    0x4a006664, 0x00346685, 0x80021a62, 0x67850aa0,
    0x4a006764, 0x00346785, 0x80021962, 0x60850aa0,
    0x5a006064, 0x00346085, 0x80021962, 0x61850aa0,
    0x5a006164, 0x00346185, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x3b050220,
    0x020065e4, 0x000063e4, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x39050220,
    0x02005fe4, 0x00005be4, 0x80031362, 0x67050aa0,
    0x4a0066e4, 0x00466705, 0x80031262, 0x61050aa0,
    0x5a0060e4, 0x00466105, 0x00040070, 0x00018660,
    0x16462505, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f3d0062, 0x39016183,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f3f0062, 0x3b016783, 0x00040070, 0x00018660,
    0x16462705, 0x00000000, 0x2f311a62, 0x3f203d00,
    0x00040065, 0x00018220, 0x22462905, 0x00000077,
    0x01040022, 0x0001c060, 0x00000090, 0x00000090,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x60400041, 0x00602d02, 0x60420041, 0x00302702,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x44040e68, 0x0e0e4005, 0x42052505,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x46058660, 0x02464405, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xea2a4614, 0x01003114,
    0x00040025, 0x00004600, 0x00000000, 0x00000060,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0xa0470066, 0x5c222f02, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22464705, 0x00000000, 0x00040061, 0x48050120,
    0x00003000, 0x00000000, 0x201e1965, 0x48001e03,
    0x00040027, 0x00014060, 0x00000000, 0xfffff648,
    0xa0491c40, 0x01001a03, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x22465c05, 0x00000000, 0x80000d01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x1f050120,
    0x00003000, 0x00000000, 0x00041970, 0x00018660,
    0x16461f05, 0x00000000, 0x01040028, 0x0001c660,
    0x00000a28, 0x00000a28, 0x80000f01, 0x00000000,
    0x00000000, 0x00000000, 0x0004004c, 0x4b050220,
    0x00461f05, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x09200920, 0x00040069, 0x10018510,
    0x01564b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x09200920, 0xe04d0961, 0x001b0004,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xac4f0070, 0x49004d02, 0x00041965, 0x00010220,
    0x22464f05, 0x00465c05, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x51058220,
    0x02460b05, 0xff800000, 0x01040062, 0x53058220,
    0x02460d05, 0xff800000, 0x80001301, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x55058220,
    0x02460305, 0x7f800000, 0x01040062, 0x57058220,
    0x02460505, 0x7f800000, 0xa36d1c61, 0xff810000,
    0x606d0061, 0x00105100, 0xa36f0b61, 0xff810000,
    0x606f0061, 0x00105300, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa3671a61, 0x7f810000,
    0x60670061, 0x00105500, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa3691961, 0x7f810000,
    0x60690061, 0x00105700, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x54058220,
    0x02460f05, 0xff800000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x58058220,
    0x02460705, 0x7f800000, 0x80031461, 0x13060220,
    0x00446d26, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80031361, 0x32060220,
    0x00446f26, 0x00000000, 0x80031261, 0x41060220,
    0x00446726, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa3710d61, 0xff810000,
    0x60710061, 0x00105400, 0x80031261, 0x56060220,
    0x00446926, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xa36b0d61, 0x7f810000,
    0x606b0061, 0x00105800, 0x00040070, 0x00018660,
    0x16462505, 0x00000001, 0x80030d62, 0x7e060aa0,
    0x4a446d06, 0x00441306, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80030c62, 0x30060aa0,
    0x4a446f06, 0x00443206, 0x80030b62, 0x3f060aa0,
    0x5a446706, 0x00444106, 0x80031a62, 0x52060aa0,
    0x5a446906, 0x00445606, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031561, 0x73060220,
    0x00446b26, 0x00000000, 0x80030c61, 0x6d260220,
    0x00447e06, 0x00000000, 0x80030b61, 0x6f260220,
    0x00443006, 0x00000000, 0x80030a61, 0x67260220,
    0x00443f06, 0x00000000, 0x80030961, 0x69260220,
    0x00445206, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80031d62, 0x64060aa0,
    0x5a446b06, 0x00447306, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021c61, 0x21070220,
    0x00426d47, 0x00000000, 0x80020061, 0x16070220,
    0x00426d27, 0x00000000, 0x80021d61, 0x37070220,
    0x00426f47, 0x00000000, 0x80020061, 0x35070220,
    0x00426f27, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021e61, 0x46070220,
    0x00426747, 0x00000000, 0x80020061, 0x44070220,
    0x00426727, 0x00000000, 0x80031761, 0x3f060220,
    0x00447126, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x5e070220,
    0x00426947, 0x00000000, 0x80021661, 0x59070220,
    0x00426927, 0x00000000, 0x80031161, 0x6b260220,
    0x00446406, 0x00000000, 0x80021f62, 0x14070aa0,
    0x4a421607, 0x00422107, 0x80021f62, 0x33070aa0,
    0x4a423507, 0x00423707, 0x80021d62, 0x42070aa0,
    0x5a424407, 0x00424607, 0x80031c62, 0x3d060aa0,
    0x4a447106, 0x00443f06, 0x80021a62, 0x57070aa0,
    0x5a425907, 0x00425e07, 0x80021961, 0x78070220,
    0x00426b47, 0x00000000, 0x80023361, 0x76070220,
    0x00426b27, 0x00000000, 0x80021561, 0x6d470220,
    0x00421407, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021461, 0x6f470220,
    0x00423307, 0x00000000, 0x80021361, 0x67470220,
    0x00424207, 0x00000000, 0x80030a61, 0x71260220,
    0x00443d06, 0x00000000, 0x80021161, 0x69470220,
    0x00425707, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021e62, 0x74070aa0,
    0x5a427607, 0x00427807, 0x80021d61, 0x2f070220,
    0x00426d67, 0x00000000, 0x80020061, 0x2d070220,
    0x00426d27, 0x00000000, 0x8002e261, 0x3a070220,
    0x00426f27, 0x00000000, 0x80021e61, 0x51070220,
    0x00426767, 0x00000000, 0x80020061, 0x4b070220,
    0x00426727, 0x00000000, 0x80020c61, 0x44070220,
    0x00427147, 0x00000000, 0x80020061, 0x42070220,
    0x00427127, 0x00000000, 0x80022261, 0x3c070220,
    0x00426f67, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x63070220,
    0x00426967, 0x00000000, 0x80023b61, 0x61070220,
    0x00426927, 0x00000000, 0x80021161, 0x6b470220,
    0x00427407, 0x00000000, 0x80021f62, 0x2b070aa0,
    0x4a422d07, 0x00422f07, 0x80021f62, 0x47070aa0,
    0x5a424b07, 0x00425107, 0x80021d62, 0x40070aa0,
    0x4a424207, 0x00424407, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80021c62, 0x38070aa0,
    0x4a423a07, 0x00423c07, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021a62, 0x5f070aa0,
    0x5a426107, 0x00426307, 0x80021961, 0x7d070220,
    0x00426b67, 0x00000000, 0x80020061, 0x7b070220,
    0x00426b27, 0x00000000, 0x80021561, 0x6d670220,
    0x00422b07, 0x00000000, 0x80021461, 0x67670220,
    0x00424707, 0x00000000, 0x80021361, 0x71470220,
    0x00424007, 0x00000000, 0x80021261, 0x6f670220,
    0x00423807, 0x00000000, 0x80021161, 0x69670220,
    0x00425f07, 0x00000000, 0x80021e62, 0x79070aa0,
    0x5a427b07, 0x00427d07, 0x80021d62, 0x6d850aa0,
    0x4a006d64, 0x00346d85, 0x80021d62, 0x6e850aa0,
    0x4a006e64, 0x00346e85, 0x80021c62, 0x67850aa0,
    0x5a006764, 0x00346785, 0x80021c62, 0x68850aa0,
    0x5a006864, 0x00346885, 0x80020b61, 0x4b070220,
    0x00427167, 0x00000000, 0x80020061, 0x47070220,
    0x00427127, 0x00000000, 0x80021c62, 0x6f850aa0,
    0x4a006f64, 0x00346f85, 0x80021c62, 0x70850aa0,
    0x4a007064, 0x00347085, 0x80021b62, 0x69850aa0,
    0x5a006964, 0x00346985, 0x80021b62, 0x6a850aa0,
    0x5a006a64, 0x00346a85, 0x80021761, 0x6b670220,
    0x00427907, 0x00000000, 0x80031762, 0x6e050aa0,
    0x4a006de4, 0x00466e05, 0x80031662, 0x68050aa0,
    0x5a0067e4, 0x00466805, 0x80021a62, 0x45070aa0,
    0x4a424707, 0x00424b07, 0x80031662, 0x70050aa0,
    0x4a006fe4, 0x00467005, 0x80031562, 0x6a050aa0,
    0x5a0069e4, 0x00466a05, 0x80021962, 0x6b850aa0,
    0x5a006b64, 0x00346b85, 0x80021962, 0x6c850aa0,
    0x5a006c64, 0x00346c85, 0x80021561, 0x71670220,
    0x00424507, 0x00000000, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x5e050220,
    0x020070e4, 0x00006ee4, 0x80001301, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x59050220,
    0x02006ae4, 0x000068e4, 0x80031162, 0x6c050aa0,
    0x5a006be4, 0x00466c05, 0x80021b62, 0x71850aa0,
    0x4a007164, 0x00347185, 0x80021b62, 0x72850aa0,
    0x4a007264, 0x00347285, 0x00040070, 0x00018660,
    0x16462505, 0x00000002, 0x80031162, 0x72050aa0,
    0x4a0071e4, 0x00467205, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0x2f600062, 0x59016c83,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f620062, 0x5e017283, 0x00040070, 0x00018660,
    0x16462705, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x2f320062, 0x62206000,
    0x00040065, 0x00018220, 0x22462905, 0x00000077,
    0x01040022, 0x0001c060, 0x000000a0, 0x000000a0,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x60630041, 0x00604d02, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x60650041, 0x00302702,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x67040e68, 0x0e0e6305, 0x65052505,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x69058660, 0x02466705, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xea2a6914, 0x01003214,
    0x00040025, 0x00004600, 0x00000000, 0x00000060,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0xa06a3e66, 0x5c224f02, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22466a05, 0x00000000, 0x00040061, 0x6b050120,
    0x00003000, 0x00000000, 0x201f1965, 0x6b001f03,
    0x00040027, 0x00014060, 0x00000000, 0xfffff5c8,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xa06c0040, 0x02001c03, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00040070, 0x00018220,
    0x22465c05, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x20050120,
    0x00003000, 0x00000000, 0x00041970, 0x00018660,
    0x16462005, 0x00000000, 0x01040028, 0x0001c660,
    0x00000a98, 0x00000a98, 0x80001701, 0x00000000,
    0x00000000, 0x00000000, 0x0004004c, 0x6e050220,
    0x00462005, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80040061, 0x10014110,
    0x00000000, 0x0d800d80, 0x00040069, 0x10018510,
    0x01566e06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x0d800d80, 0xe0700961, 0x001b0004,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xac720070, 0x6c007002, 0x00041965, 0x00010220,
    0x22467205, 0x00465c05, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x74058220,
    0x02460b05, 0xff800000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x76058220,
    0x02460d05, 0xff800000, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x78058220,
    0x02460305, 0x7f800000, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x7a058220,
    0x02460505, 0x7f800000, 0xa31e1c61, 0xff810000,
    0x601e0061, 0x00107400, 0xa32b0b61, 0xff810000,
    0x602b0061, 0x00107600, 0xa37e0a61, 0x7f810000,
    0x607e0061, 0x00107800, 0xa3130961, 0x7f810000,
    0x60130061, 0x00107a00, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x77058220,
    0x02460f05, 0xff800000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x7b058220,
    0x02460705, 0x7f800000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80031461, 0x32060220,
    0x00441e26, 0x00000000, 0x80031361, 0x3f060220,
    0x00442b26, 0x00000000, 0x80031261, 0x4e060220,
    0x00447e26, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x5e060220,
    0x00441326, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0xa32d0e61, 0xff810000,
    0x602d0061, 0x00107700, 0xa3150d61, 0x7f810000,
    0x60150061, 0x00107b00, 0x00040070, 0x00018660,
    0x16462505, 0x00000001, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80030d62, 0x30060aa0,
    0x4a441e06, 0x00443206, 0x80030c62, 0x3d060aa0,
    0x4a442b06, 0x00443f06, 0x80031b62, 0x4c060aa0,
    0x5a447e06, 0x00444e06, 0x80030a62, 0x59060aa0,
    0x5a441306, 0x00445e06, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031561, 0x6e060220,
    0x00441526, 0x00000000, 0x80030c61, 0x1e260220,
    0x00443006, 0x00000000, 0x80030b61, 0x2b260220,
    0x00443d06, 0x00000000, 0x80030a61, 0x7e260220,
    0x00444c06, 0x00000000, 0x80030961, 0x13260220,
    0x00445906, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80031d62, 0x69060aa0,
    0x5a441506, 0x00446e06, 0x80021c61, 0x37070220,
    0x00421e47, 0x00000000, 0x80020061, 0x35070220,
    0x00421e27, 0x00000000, 0x80021d61, 0x44070220,
    0x00422b47, 0x00000000, 0x80020061, 0x42070220,
    0x00422b27, 0x00000000, 0x80021e61, 0x53070220,
    0x00427e47, 0x00000000, 0x80020061, 0x51070220,
    0x00427e27, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x63070220,
    0x00421347, 0x00000000, 0x80023b61, 0x61070220,
    0x00421327, 0x00000000, 0x80031761, 0x4c060220,
    0x00442d26, 0x00000000, 0x80031161, 0x15260220,
    0x00446906, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021f62, 0x33070aa0,
    0x4a423507, 0x00423707, 0x80021f62, 0x40070aa0,
    0x4a424207, 0x00424407, 0x80021d62, 0x4f070aa0,
    0x5a425107, 0x00425307, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x5f070aa0,
    0x5a426107, 0x00426307, 0x80031a62, 0x4a060aa0,
    0x4a442d06, 0x00444c06, 0x80021961, 0x78070220,
    0x00421547, 0x00000000, 0x80020061, 0x76070220,
    0x00421527, 0x00000000, 0x80021561, 0x1e470220,
    0x00423307, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80021461, 0x2b470220,
    0x00424007, 0x00000000, 0x80021361, 0x7e470220,
    0x00424f07, 0x00000000, 0x80021261, 0x13470220,
    0x00425f07, 0x00000000, 0x80030961, 0x2d260220,
    0x00444a06, 0x00000000, 0x80021e62, 0x74070aa0,
    0x5a427607, 0x00427807, 0x8002d261, 0x3c070220,
    0x00421e67, 0x00000000, 0x80022261, 0x3a070220,
    0x00421e27, 0x00000000, 0x80021e61, 0x47070220,
    0x00422b27, 0x00000000, 0x80021e61, 0x58070220,
    0x00427e67, 0x00000000, 0x80020061, 0x56070220,
    0x00427e27, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021f61, 0x68070220,
    0x00421367, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80023d61, 0x66070220,
    0x00421327, 0x00000000, 0x80020c61, 0x51070220,
    0x00422d47, 0x00000000, 0x80020061, 0x4f070220,
    0x00422d27, 0x00000000, 0x80021161, 0x15470220,
    0x00427407, 0x00000000, 0x80020061, 0x49070220,
    0x00422b67, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80021f62, 0x38070aa0,
    0x4a423a07, 0x00423c07, 0x80021f62, 0x54070aa0,
    0x5a425607, 0x00425807, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80021d62, 0x64070aa0,
    0x5a426607, 0x00426807, 0x80021b62, 0x4d070aa0,
    0x4a424f07, 0x00425107, 0x80021a61, 0x2f070220,
    0x00421567, 0x00000000, 0x80020061, 0x7b070220,
    0x00421527, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80021b62, 0x45070aa0,
    0x4a424707, 0x00424907, 0x80021561, 0x1e670220,
    0x00423807, 0x00000000, 0x80021461, 0x7e670220,
    0x00425407, 0x00000000, 0x80021361, 0x13670220,
    0x00426407, 0x00000000, 0x80021261, 0x2d470220,
    0x00424d07, 0x00000000, 0x80021d62, 0x79070aa0,
    0x5a427b07, 0x00422f07, 0x80021261, 0x2b670220,
    0x00424507, 0x00000000, 0x80021d62, 0x1e850aa0,
    0x4a001e64, 0x00341e85, 0x80021d62, 0x1f850aa0,
    0x4a001f64, 0x00341f85, 0x80021c62, 0x7e850aa0,
    0x5a007e64, 0x00347e85, 0x80021c62, 0x7f850aa0,
    0x5a007f64, 0x00347f85, 0x80021b62, 0x13850aa0,
    0x5a001364, 0x00341385, 0x80021b62, 0x14850aa0,
    0x5a001464, 0x00341485, 0x80021a61, 0x56070220,
    0x00422d67, 0x00000000, 0x80020061, 0x54070220,
    0x00422d27, 0x00000000, 0x80021761, 0x15670220,
    0x00427907, 0x00000000, 0x80021c62, 0x2b850aa0,
    0x4a002b64, 0x00342b85, 0x80021c62, 0x2c850aa0,
    0x4a002c64, 0x00342c85, 0x80031762, 0x1f050aa0,
    0x4a001ee4, 0x00461f05, 0x80031662, 0x7f050aa0,
    0x5a007ee4, 0x00467f05, 0x80031562, 0x14050aa0,
    0x5a0013e4, 0x00461405, 0x80021a62, 0x52070aa0,
    0x4a425407, 0x00425607, 0x80021962, 0x15850aa0,
    0x5a001564, 0x00341585, 0x80021962, 0x16850aa0,
    0x5a001664, 0x00341685, 0x80031762, 0x2c050aa0,
    0x4a002be4, 0x00462c05, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x7c050220,
    0x020014e4, 0x00007fe4, 0x80021461, 0x2d670220,
    0x00425207, 0x00000000, 0x80031262, 0x16050aa0,
    0x5a0015e4, 0x00461605, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x7e050220,
    0x02002ce4, 0x00001fe4, 0x80021a62, 0x2d850aa0,
    0x4a002d64, 0x00342d85, 0x80021a62, 0x2e850aa0,
    0x4a002e64, 0x00342e85, 0x00040070, 0x00018660,
    0x16462505, 0x00000002, 0x80031162, 0x2e050aa0,
    0x4a002de4, 0x00462e05, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x2f130062, 0x7c011683,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x2f150062, 0x7e012e83, 0x00040070, 0x00018660,
    0x16462705, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x2f330062, 0x15201300,
    0x00040065, 0x00018220, 0x22462905, 0x00000077,
    0x01040022, 0x0001c060, 0x00000090, 0x00000090,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x60160041, 0x00607002, 0x601e0041, 0x00302702,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x2b040e68, 0x0e0e1605, 0x1e052505,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x2d058660, 0x02462b05, 0x00000002,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xea2a2d14, 0x01003314,
    0x00040025, 0x00004600, 0x00000000, 0x00000070,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0xa02e0066, 0x5c227202, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22462e05, 0x00000000, 0x00040061, 0x2f050120,
    0x00003000, 0x00000000, 0x20201965, 0x2f002003,
    0x00040027, 0x00014060, 0x00000000, 0xfffff558,
    0x00040061, 0x00010660, 0x20465c05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000148, 0x00000148,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x30058660, 0x02461805, 0x00000002,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa0320040, 0x48003003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044e31, 0x00000000,
    0xea103214, 0x01000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x33058660,
    0x02461a05, 0x00000002, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0350040, 0x4c003303,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xea103514, 0x01000000,
    0x00043e69, 0x36058660, 0x02461c05, 0x00000002,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xa0380040, 0x50003603, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x00000000,
    0xea103814, 0x01000000, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80004431, 0x390c0000,
    0xe23e000c, 0x00000000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80032261, 0x3a054220,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x3a550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044531, 0x00000000,
    0x30083a0c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x00040040, 0x3b058660,
    0x06000204, 0x00002c58, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x21050220,
    0x00462305, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x3d058220,
    0x52463b05, 0x00002c58, 0x00041a70, 0x00018220,
    0x42462105, 0x00000120, 0x01040028, 0x0001c660,
    0x00000180, 0x00000180, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x3f058660,
    0x02462105, 0x00000002, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x34140000,
    0xea003f14, 0x00000000, 0xae002670, 0x7f803401,
    0x01040022, 0x0001c060, 0x000000f0, 0x000000f0,
    0xa0413640, 0x3f003b02, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x27430070, 0x3b004103,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x47060220, 0x00344105, 0x00000000,
    0x80103e01, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x49060220, 0x00344205, 0x00000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x45042e68, 0x06263d05, 0x43050224,
    0x00031961, 0x47260220, 0x00344505, 0x00000000,
    0x00131a61, 0x49260220, 0x00344605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb2a4724, 0x01003414,
    0x00040025, 0x00004600, 0x00000000, 0x00000018,
    0xa0210040, 0x20002103, 0x00040027, 0x00014060,
    0x00000000, 0xfffffe70, 0x00000060, 0x00000000,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x42462305, 0x00000030, 0x01040028, 0x0001c660,
    0x00000230, 0x00000230, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000f01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x48058660,
    0x02462305, 0x00000002, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0xa04a0040, 0x48004803,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x35140000, 0xea004a14, 0x00000000,
    0x00042e70, 0x00018660, 0x26463505, 0x00000000,
    0x01040022, 0x0001c060, 0x00000170, 0x00000170,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x00040040, 0x4b058660, 0x06000204, 0x000030d8,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x4d058220, 0x52464b05, 0x000030d8,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0xa04f0040, 0x48004b02, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x27510070, 0x4b004f03,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x55060220, 0x00344f05, 0x00000000,
    0x80103e01, 0x00000000, 0x00000000, 0x00000000,
    0x80101701, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x57060220, 0x00345005, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x00040052, 0x53042e68, 0x06264d05, 0x51050224,
    0x00131961, 0x57260220, 0x00345405, 0x00000000,
    0x00031a61, 0x55260220, 0x00345305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb185524, 0x01003514,
    0x00040025, 0x00004600, 0x00000000, 0x00000018,
    0xa0230040, 0x20002303, 0x00040027, 0x00014060,
    0x00000000, 0xfffffdc0, 0x80031161, 0x7e050220,
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
      .base.program_size = 13264,
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
const char *gfx125_bvh_build_BFS_BFS_pass1_initial_sha1 = "63b1a3e0bcc6ddfb7e8cfe2cb884b59c57eb24f1";

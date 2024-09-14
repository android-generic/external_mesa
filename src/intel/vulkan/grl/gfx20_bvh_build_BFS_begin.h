#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_begin_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_begin_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_begin_args[] = {
   { 0, 8 },
   { 8, 4 },
   { 12, 4 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 8 },
   { 48, 8 },
   { 56, 8 },
   { 64, 8 },
   { 72, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g113<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g97<1>Q         0x0000000000000024Q             { align1 1H };
mov(16)         g48<1>Q         0x0000000000000024Q             { align1 2H };
and(32)         g56<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g113UD          nullUD          0x0220e500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V32, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g62<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(32)         g58<1>D         g56<8,8,1>D     0x00000005UD    { align1 I@2 };
add(8)          g62.8<1>UW      g62<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
add(16)         g62.16<1>UW     g62<16,16,1>UW  0x0010UW        { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(32)         g60<1>UD        g62<16,16,1>UW                  { align1 };
add(32)         g63<1>D         g60<1,1,0>D     g58<1,1,0>D     { align1 I@1 compacted };
and.z.f0.0(32)  g43<1>UD        g63<8,8,1>UD    0x000001ffUD    { align1 I@1 };
mov(16)         g65<2>UD        g43<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g67<2>UD        g44<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g35<1>UQ        g65<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g64<1>UQ        g67<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g50<1>Q         g2.2<0,1,0>Q    g97<1,1,0>Q     { align1 1H compacted };
add(16)         g52<1>Q         g2.2<0,1,0>Q    g48<1,1,0>Q     { align1 2H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g54UD           g50UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $0 };
(+f0.0) if(32)  JIP:  LABEL0          UIP:  LABEL0              { align1 };
mov(16)         g56<1>Q         g2.3<0,1,0>Q                    { align1 1H };
mov(16)         g58<1>Q         g2.3<0,1,0>Q                    { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(32)         g66<1>UD        g1.12<0,1,0>UD                  { align1 compacted };
mov(32)         g68<1>UD        g1.13<0,1,0>UD                  { align1 compacted };
mov(32)         g70<1>UD        g1.14<0,1,0>UD                  { align1 compacted };
mov(32)         g72<1>UD        g1.15<0,1,0>UD                  { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g56UD           g66UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $1 };
mov(16)         g37<1>Q         0x0000000000000010Q             { align1 1H };
mov(16)         g66<1>Q         0x0000000000000010Q             { align1 2H $1.src };
mov(16)         g39<1>Q         0x0000000000000020Q             { align1 1H };
mov(16)         g72<1>Q         0x0000000000000020Q             { align1 2H $1.src };
mov(16)         g79<1>UD        g2<0,1,0>UD                     { align1 2H compacted };
mov(16)         g81<1>UD        g2.1<0,1,0>UD                   { align1 2H compacted };
mov(16)         g83<1>UD        g2.4<0,1,0>UD                   { align1 2H compacted };
mov(16)         g85<1>UD        g2.5<0,1,0>UD                   { align1 2H };
mov(16)         g78<1>UD        g2<0,1,0>UD                     { align1 1H compacted };
mov(16)         g80<1>UD        g2.1<0,1,0>UD                   { align1 1H compacted };
mov(16)         g82<1>UD        g2.4<0,1,0>UD                   { align1 1H compacted };
mov(16)         g84<1>UD        g2.5<0,1,0>UD                   { align1 1H };
add(16)         g68<1>Q         g2.3<0,1,0>Q    g37<1,1,0>Q     { align1 1H $1.src compacted };
add(16)         g70<1>Q         g2.3<0,1,0>Q    g66<1,1,0>Q     { align1 2H $1.src compacted };
add(16)         g74<1>Q         g2.3<0,1,0>Q    g39<1,1,0>Q     { align1 1H compacted };
add(16)         g76<1>Q         g2.3<0,1,0>Q    g72<1,1,0>Q     { align1 2H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(32)        nullUD          g68UD           g78UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $2 };
mov(16)         g80<1>UD        g2.2<0,1,0>UD                   { align1 2H $2.src compacted };
mov(16)         g82<1>UD        g2.3<0,1,0>UD                   { align1 2H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.dst };
mov(16)         g84<1>UD        g2.8<0,1,0>UD                   { align1 2H $2.src compacted };
mov(16)         g86<1>UD        g2.9<0,1,0>UD                   { align1 2H compacted };
mov(16)         g79<1>UD        g2.2<0,1,0>UD                   { align1 1H $2.src compacted };
mov(16)         g81<1>UD        g2.3<0,1,0>UD                   { align1 1H $2.src compacted };
mov(16)         g83<1>UD        g2.8<0,1,0>UD                   { align1 1H $2.src compacted };
mov(16)         g85<1>UD        g2.9<0,1,0>UD                   { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g74UD           g79UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $3 };
mov(16)         g41<1>Q         0x0000000000000030Q             { align1 1H };
mov(16)         g75<1>Q         0x0000000000000030Q             { align1 2H $3.src };
mov(16)         g12<1>UD        g2.10<0,1,0>UD                  { align1 1H compacted };
mov(16)         g16<1>UD        g1.10<0,1,0>UD                  { align1 1H compacted };
mov(16)         g18<1>UD        g1.11<0,1,0>UD                  { align1 1H compacted };
mov(16)         g13<1>UD        g2.10<0,1,0>UD                  { align1 2H compacted };
mov(16)         g17<1>UD        g1.10<0,1,0>UD                  { align1 2H compacted };
mov(16)         g19<1>UD        g1.11<0,1,0>UD                  { align1 2H compacted };
mov(16)         g15<1>UD        g55<1,1,0>UD                    { align1 2H $0.dst compacted };
mov(16)         g14<1>UD        g54<1,1,0>UD                    { align1 1H $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g77<1>Q         g2.3<0,1,0>Q    g41<1,1,0>Q     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
add(16)         g79<1>Q         g2.3<0,1,0>Q    g75<1,1,0>Q     { align1 2H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g77UD           g12UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $4 };
mov(16)         g98<1>Q         0x000000000005f82cQ             { align1 1H };
mov(16)         g78<1>Q         0x000000000005f82cQ             { align1 2H $4.src };
mov(32)         g84<1>UD        0x00000000UD                    { align1 $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g80<1>Q         g1.4<0,1,0>Q    g98<1,1,0>Q     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
add(16)         g82<1>Q         g1.4<0,1,0>Q    g78<1,1,0>Q     { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g80UD           g84UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g85<1>Q         g2<0,1,0>Q                      { align1 1H $5.src };
mov(16)         g87<1>Q         g2<0,1,0>Q                      { align1 2H };
mov(32)         g89<1>UD        0x00000001UD                    { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g85UD           g89UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $6 };
mov(16)         g99<1>Q         0x0000000000002c2cQ             { align1 1H };
mov(16)         g81<1>Q         0x0000000000002c2cQ             { align1 2H $5.src };
mov(16)         g13<1>UD        0x00000000UD                    { align1 1H $4.src compacted };
mov(16)         g17<1>UD        0x00000000UD                    { align1 1H $4.src compacted };
mov(16)         g19<1>UD        0x00000000UD                    { align1 1H $4.src compacted };
mov(16)         g14<1>UD        0x00000000UD                    { align1 2H $4.src compacted };
mov(16)         g18<1>UD        0x00000000UD                    { align1 2H $4.src compacted };
mov(16)         g20<1>UD        0x00000000UD                    { align1 2H compacted };
mov(16)         g16<1>UD        g55<1,1,0>UD                    { align1 2H $4.src compacted };
mov(16)         g15<1>UD        g54<1,1,0>UD                    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g83<1>Q         g1.4<0,1,0>Q    g99<1,1,0>Q     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
add(16)         g85<1>Q         g1.4<0,1,0>Q    g81<1,1,0>Q     { align1 2H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g83UD           g13UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $7 };
mov(16)         g100<1>Q        0x000000000000082eQ             { align1 1H };
mov(16)         g84<1>Q         0x000000000000082eQ             { align1 2H $7.src };
mov(32)         g90<1>UD        0x0000UW                        { align1 $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g86<1>Q         g100<1,1,0>Q    g1.4<0,1,0>Q    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
add(16)         g88<1>Q         g84<1,1,0>Q     g1.4<0,1,0>Q    { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g86UD           g90UD           0x08000b84                0x00000080
                            ugm MsgDesc: ( store, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $8 };
mov(16)         g101<1>Q        0x0000000000002c3cQ             { align1 1H };
mov(16)         g91<1>Q         0x0000000000002c3cQ             { align1 2H $8.src };
mov(16)         g28<1>D         0D                              { align1 2H };
mov(16)         g30<1>D         0D                              { align1 2H };
mov(16)         g32<1>D         0D                              { align1 2H };
mov(16)         g34<1>D         0D                              { align1 2H };
mov(16)         g27<1>D         0D                              { align1 1H };
mov(16)         g29<1>D         0D                              { align1 1H };
mov(16)         g31<1>D         0D                              { align1 1H };
mov(16)         g33<1>D         0D                              { align1 1H };
add(16)         g93<1>Q         g101<1,1,0>Q    g1.4<0,1,0>Q    { align1 1H I@7 compacted };
add(16)         g95<1>Q         g91<1,1,0>Q     g1.4<0,1,0>Q    { align1 2H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g93UD           g27UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $9 };
mov(16)         g90<1>Q         g2.2<0,1,0>Q                    { align1 1H $8.src };
mov(16)         g92<1>Q         g2.2<0,1,0>Q                    { align1 2H $9.src };
add(16)         g94<1>Q         g2.2<0,1,0>Q    g37<1,1,0>Q     { align1 1H $9.src compacted };
add(16)         g96<1>Q         g2.2<0,1,0>Q    g66<1,1,0>Q     { align1 2H $9.src compacted };
add(16)         g98<1>Q         g2<0,1,0>Q      g39<1,1,0>Q     { align1 1H compacted };
add(16)         g100<1>Q        g2<0,1,0>Q      g72<1,1,0>Q     { align1 2H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(32)        g3UD            g90UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(32)        g11UD           g94UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $7.src };
mov(16)         g20<1>UD        g4<1,1,0>UD                     { align1 2H $0.dst compacted };
mov(16)         g22<1>UD        g6<1,1,0>UD                     { align1 2H $0.dst compacted };
mov(16)         g24<1>UD        g8<1,1,0>UD                     { align1 2H $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g19<1>UD        g3<1,1,0>UD                     { align1 1H $0.dst compacted };
mov(16)         g21<1>UD        g5<1,1,0>UD                     { align1 1H $0.dst compacted };
mov(16)         g23<1>UD        g7<1,1,0>UD                     { align1 1H $0.dst compacted };
mov(16)         g26<1>UD        g12<1,1,0>UD                    { align1 2H $0.dst compacted };
mov(16)         g25<1>UD        g11<1,1,0>UD                    { align1 1H $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g98UD           g19UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $10 };
add(16)         g99<1>Q         g41<1,1,0>Q     g2<0,1,0>Q      { align1 1H $10.src compacted };
add(16)         g101<1>Q        g75<1,1,0>Q     g2<0,1,0>Q      { align1 2H $10.src compacted };
mov(32)         g91<1>UD        g13<1,1,0>UD                    { align1 $0.dst compacted };
mov(32)         g93<1>UD        g15<1,1,0>UD                    { align1 $0.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g99UD           g91UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 $11 };
add(16)         g100<1>Q        g1.4<0,1,0>Q    g37<1,1,0>Q     { align1 1H $11.src compacted };
add(16)         g102<1>Q        g1.4<0,1,0>Q    g66<1,1,0>Q     { align1 2H $11.src compacted };
mov(16)         g93<1>D         0D                              { align1 2H $11.src };
mov(16)         g95<1>D         0D                              { align1 2H $0.src };
mov(16)         g92<1>D         0D                              { align1 1H $11.src };
mov(16)         g94<1>D         0D                              { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g100UD          g92UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 $0 };
mov(16)         g107<1>Q        0x0000000000000040Q             { align1 1H };
mov(16)         g101<1>Q        0x0000000000000040Q             { align1 2H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g103<1>Q        g2.3<0,1,0>Q    g107<1,1,0>Q    { align1 1H I@2 compacted };
add(16)         g105<1>Q        g2.3<0,1,0>Q    g101<1,1,0>Q    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g103UD          g27UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $0 };

LABEL0:
endif(32)       JIP:  LABEL1                                    { align1 };

LABEL1:
mov(16)         g108<1>Q        0x0000000000000028Q             { align1 1H };
mov(16)         g104<1>Q        0x0000000000000028Q             { align1 2H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g117<1>Q        g1.4<0,1,0>Q    g108<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
add(16)         g106<1>Q        g1.4<0,1,0>Q    g104<1,1,0>Q    { align1 2H I@2 compacted };

LABEL3:
cmp.ge.f0.0(32) null<1>UD       g43<8,8,1>UD    0x00000100UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL2        UIP:  LABEL2              { align1 };
cmp.nz.f0.0(32) g108<1>D        g43<8,8,1>D     0D              { align1 };
shl(32)         g110<1>D        g43<8,8,1>D     0x00000002UD    { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(32)         g93<1>D         -g108<1,1,0>D                   { align1 I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g68<2>UD        g110<1,1,0>UD                   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g70<2>UD        g111<1,1,0>UD                   { align1 2H I@3 compacted };
mov(16)         g119<1>UQ       g68<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g111<1>UQ       g70<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g113<1>Q        g117<1,1,0>Q    g119<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
add(16)         g115<1>Q        g106<1,1,0>Q    g111<1,1,0>Q    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g113UD          g93UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $0 };
add(32)         g43<1>D         g43<8,8,1>D     512D            { align1 };

LABEL2:
while(32)       JIP:  LABEL3                                    { align1 };
mov(16)         g120<1>Q        0x0000000000002c58Q             { align1 1H };
mov(16)         g114<1>Q        0x0000000000002c58Q             { align1 2H $0.src };
shl(16)         g16<1>Q         g35<4,4,1>Q     0x00000002UD    { align1 1H $0.dst };
shl(16)         g118<1>Q        g64<4,4,1>Q     0x00000002UD    { align1 2H I@5 };
add(16)         g14<1>Q         g120<1,1,0>Q    g1.4<0,1,0>Q    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
add(16)         g116<1>Q        g114<1,1,0>Q    g1.4<0,1,0>Q    { align1 2H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g71<2>UD        g16<4,4,1>UQ                    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
mov(16)         g73<2>UD        g118<4,4,1>UQ                   { align1 2H I@4 };
mov(16)         g47<1>UD        g71<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g48<1>UD        g73<8,4,2>UD                    { align1 2H I@2 };
mov(32)         g44<1>UD        g47<1,1,0>UD                    { align1 I@1 compacted };

LABEL5:
cmp.ge.f0.0(32) null<1>UD       g44<8,8,1>UD    0x00000120UD    { align1 I@1 };
(+f0.0) break(32) JIP:  LABEL4        UIP:  LABEL4              { align1 };
shl(32)         g119<1>D        g44<8,8,1>D     0x00000002UD    { align1 };
mov(32)         g94<1>UD        0x7f800000UD                    { align1 $0.src };
mov(16)         g74<2>UD        g119<1,1,0>UD                   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $4.src };
mov(16)         g76<2>UD        g120<1,1,0>UD                   { align1 2H I@3 compacted };
mov(16)         g17<1>UQ        g74<8,4,2>UD                    { align1 1H @2 $0.dst };
mov(16)         g121<1>UQ       g76<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g123<1>Q        g14<1,1,0>Q     g17<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g125<1>Q        g116<1,1,0>Q    g121<1,1,0>Q    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g123UD          g94UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $12 };
add(32)         g124<1>D        g119<8,8,1>D    4D              { align1 $12.src };
mov(16)         g77<2>UD        g124<1,1,0>UD                   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $5.src };
mov(16)         g79<2>UD        g125<1,1,0>UD                   { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g18<1>UQ        g77<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $12.src };
mov(16)         g125<1>UQ       g79<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g2<1>Q          g14<1,1,0>Q     g18<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g4<1>Q          g116<1,1,0>Q    g125<1,1,0>Q    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g2UD            g94UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $0 };
add(32)         g3<1>D          g119<8,8,1>D    8D              { align1 $0.src };
mov(16)         g80<2>UD        g3<1,1,0>UD                     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $7.src };
mov(16)         g82<2>UD        g4<1,1,0>UD                     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g19<1>UQ        g80<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(16)         g4<1>UQ         g82<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g6<1>Q          g14<1,1,0>Q     g19<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.dst };
add(16)         g8<1>Q          g116<1,1,0>Q    g4<1,1,0>Q      { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g6UD            g94UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $13 };
add(32)         g7<1>D          g119<8,8,1>D    12D             { align1 $13.src };
mov(16)         g83<2>UD        g7<1,1,0>UD                     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $8.src };
mov(16)         g85<2>UD        g8<1,1,0>UD                     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g20<1>UQ        g83<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $13.src };
mov(16)         g8<1>UQ         g85<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g10<1>Q         g14<1,1,0>Q     g20<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
add(16)         g12<1>Q         g116<1,1,0>Q    g8<1,1,0>Q      { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g10UD           g94UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $0 };
add(32)         g44<1>D         g44<8,8,1>D     2048D           { align1 };

LABEL4:
while(32)       JIP:  LABEL5                                    { align1 };
mov(16)         g21<1>Q         0x00000000000030d8Q             { align1 1H $10.src };
mov(16)         g11<1>Q         0x00000000000030d8Q             { align1 2H $0.src };
mov(32)         g45<1>UD        g47<1,1,0>UD                    { align1 I@3 compacted };
add(16)         g35<1>Q         g21<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
add(16)         g13<1>Q         g11<1,1,0>Q     g1.4<0,1,0>Q    { align1 2H I@3 compacted };

LABEL7:
cmp.ge.f0.0(32) null<1>UD       g45<8,8,1>UD    0x00000030UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL6        UIP:  LABEL6              { align1 };
shl(32)         g15<1>D         g45<8,8,1>D     0x00000002UD    { align1 };
mov(32)         g95<1>UD        0x00000000UD                    { align1 $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g86<2>UD        g15<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $8.src };
mov(16)         g88<2>UD        g16<1,1,0>UD                    { align1 2H I@3 compacted };
mov(16)         g37<1>UQ        g86<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g17<1>UQ        g88<8,4,2>UD                    { align1 2H @2 $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g19<1>Q         g35<1,1,0>Q     g37<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g21<1>Q         g13<1,1,0>Q     g17<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g19UD           g95UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $10 };
add(32)         g20<1>D         g15<8,8,1>D     4D              { align1 $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g89<2>UD        g20<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(16)         g91<2>UD        g21<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g38<1>UQ        g89<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $10.src };
mov(16)         g21<1>UQ        g91<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g23<1>Q         g35<1,1,0>Q     g38<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $10.src };
add(16)         g25<1>Q         g13<1,1,0>Q     g21<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g23UD           g95UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $10 };
add(32)         g24<1>D         g15<8,8,1>D     8D              { align1 $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g92<2>UD        g24<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $10.src };
mov(16)         g97<2>UD        g25<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g39<1>UQ        g92<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $10.src };
mov(16)         g25<1>UQ        g97<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g27<1>Q         g35<1,1,0>Q     g39<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
add(16)         g29<1>Q         g13<1,1,0>Q     g25<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g27UD           g95UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $0 };
add(32)         g28<1>D         g15<8,8,1>D     12D             { align1 $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g98<2>UD        g28<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(16)         g100<2>UD       g29<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g40<1>UQ        g98<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(16)         g29<1>UQ        g100<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g31<1>Q         g35<1,1,0>Q     g40<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
add(16)         g33<1>Q         g13<1,1,0>Q     g29<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g31UD           g95UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $0 };
add(32)         g45<1>D         g45<8,8,1>D     2048D           { align1 };

LABEL6:
while(32)       JIP:  LABEL7                                    { align1 };
mov(16)         g41<1>Q         0x0000000000003198Q             { align1 1H };
mov(16)         g32<1>Q         0x0000000000003198Q             { align1 2H $0.src };
cmp.l.f0.0(32)  null<1>UD       g47<8,8,1>UD    0x00000018UD    { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g56<1>Q         g41<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
add(16)         g34<1>Q         g32<1,1,0>Q     g1.4<0,1,0>Q    { align1 2H I@3 compacted };
(+f0.0) if(32)  JIP:  LABEL8          UIP:  LABEL8              { align1 };
shl(32)         g36<1>D         g47<8,8,1>D     0x00000002UD    { align1 I@7 };
mov(32)         g96<1>UD        0x7f800000UD                    { align1 $0.src };
mov(16)         g101<2>UD       g36<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(16)         g103<2>UD       g37<1,1,0>UD                    { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g58<1>UQ        g101<8,4,2>UD                   { align1 1H I@2 };
mov(16)         g38<1>UQ        g103<8,4,2>UD                   { align1 2H I@2 };
add(16)         g40<1>Q         g56<1,1,0>Q     g58<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g42<1>Q         g34<1,1,0>Q     g38<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g40UD           g96UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $14 };
add(32)         g41<1>D         g36<8,8,1>D     4D              { align1 $14.src };
mov(16)         g104<2>UD       g41<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g106<2>UD       g42<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g59<1>UQ        g104<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $14.src };
mov(16)         g42<1>UQ        g106<8,4,2>UD                   { align1 2H I@2 };
add(16)         g44<1>Q         g56<1,1,0>Q     g59<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g46<1>Q         g34<1,1,0>Q     g42<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g44UD           g96UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $15 };
add(32)         g45<1>D         g36<8,8,1>D     8D              { align1 $15.src };
mov(16)         g107<2>UD       g45<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g109<2>UD       g46<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g60<1>UQ        g107<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $15.src };
mov(16)         g46<1>UQ        g109<8,4,2>UD                   { align1 2H I@2 };
add(16)         g48<1>Q         g56<1,1,0>Q     g60<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
add(16)         g50<1>Q         g34<1,1,0>Q     g46<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g48UD           g96UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $0 };
add(32)         g49<1>D         g36<8,8,1>D     12D             { align1 $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(16)         g110<2>UD       g49<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(16)         g112<2>UD       g50<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g61<1>UQ        g110<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(16)         g50<1>UQ        g112<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g52<1>Q         g56<1,1,0>Q     g61<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.dst };
add(16)         g54<1>Q         g34<1,1,0>Q     g50<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g52UD           g96UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $0 };

LABEL8:
endif(32)       JIP:  LABEL9                                    { align1 };

LABEL9:
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(32)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_begin_code[] = {
    0x80000065, 0x71058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x61054770, 0x00000000, 0x00000024,
    0x02100061, 0x30054770, 0x00000000, 0x00000024,
    0x00140065, 0x38058220, 0x02000024, 0x000000ff,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x01140000, 0xfa00710c, 0x00380000,
    0x800c0061, 0x3e054410, 0x00000000, 0x76543210,
    0x00141a69, 0x3a058660, 0x02463805, 0x00000005,
    0x800c1a40, 0x3e458110, 0x01463e05, 0x00080008,
    0x80101940, 0x3e858110, 0x01583e05, 0x00100010,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00140061, 0x3c050120, 0x00583e05, 0x00000000,
    0xac201940, 0x3a003c3f, 0x00141965, 0x2b058220,
    0x12463f05, 0x000001ff, 0xb4001961, 0x00102b41,
    0xb4081a61, 0x00102c43, 0x00101a61, 0x23050230,
    0x00444106, 0x00000000, 0x02101a61, 0x40050230,
    0x00444306, 0x00000000, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x61040232,
    0x38880040, 0x30040234, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c031, 0x36140000,
    0xfb003224, 0x00000000, 0x04140022, 0x0001c060,
    0x000007b8, 0x000007b8, 0x00100061, 0x38050770,
    0x00000264, 0x00000000, 0x02100061, 0x3a050770,
    0x00000264, 0x00000000, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x2ca00061, 0x00180142,
    0x2ca00061, 0x001b0144, 0x2ca00061, 0x001d0146,
    0x00140061, 0x48050220, 0x000001f4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c131, 0x00000000, 0xfb083824, 0x000c4244,
    0x00100061, 0x25054770, 0x00000000, 0x00000010,
    0x0210a161, 0x42054770, 0x00000000, 0x00000010,
    0x00100061, 0x27054770, 0x00000000, 0x00000020,
    0x0210a161, 0x48054770, 0x00000000, 0x00000020,
    0x2c880061, 0x0010024f, 0x2c880061, 0x00110251,
    0x2c880061, 0x00140253, 0x02100061, 0x55050220,
    0x00000254, 0x00000000, 0x2c800061, 0x0010024e,
    0x2c800061, 0x00110250, 0x2c800061, 0x00140252,
    0x00100061, 0x54050220, 0x00000254, 0x00000000,
    0x3880a140, 0x250c0244, 0x3888a140, 0x420c0246,
    0x38800040, 0x270c024a, 0x38880040, 0x480c024c,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x0014c231, 0x00000000, 0xfb084424, 0x000c4e44,
    0x2c88a261, 0x00160250, 0x2c88a261, 0x00190252,
    0x82008001, 0x00000000, 0x00000000, 0x00000000,
    0x2c88a261, 0x00130254, 0x2c880061, 0x001f0256,
    0x2c80a261, 0x0016024f, 0x2c80a261, 0x00190251,
    0x2c80a261, 0x00130253, 0x2c80a261, 0x001f0255,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c331, 0x00000000, 0xfb084a24, 0x000c4f44,
    0x00100061, 0x29054770, 0x00000000, 0x00000030,
    0x0210a361, 0x4b054770, 0x00000000, 0x00000030,
    0x2c800061, 0x0017020c, 0x2c800061, 0x00170110,
    0x2c800061, 0x001e0112, 0x2c880061, 0x0017020d,
    0x2c880061, 0x00170111, 0x2c880061, 0x001e0113,
    0x2c088061, 0x0010370f, 0x2c008061, 0x0010360e,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x38801f40, 0x290c024d, 0x8200a301, 0x00000000,
    0x00000000, 0x00000000, 0x38881f40, 0x4b0c024f,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c431, 0x00000000, 0xfb084d24, 0x000c0c44,
    0x00100061, 0x62054770, 0x00000000, 0x0005f82c,
    0x0210a461, 0x4e054770, 0x00000000, 0x0005f82c,
    0x64a0a361, 0x00000054, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x38801b40, 0x62030150,
    0x8200a301, 0x00000000, 0x00000000, 0x00000000,
    0x38881b40, 0x4e030152, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c531, 0x00000000,
    0xfb085024, 0x00005414, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x0010a561, 0x55050770,
    0x00000204, 0x00000000, 0x02100061, 0x57050770,
    0x00000204, 0x00000000, 0x64a00061, 0x00100059,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c631, 0x00000000, 0xfb085524, 0x00005914,
    0x00100061, 0x63054770, 0x00000000, 0x00002c2c,
    0x0210a561, 0x51054770, 0x00000000, 0x00002c2c,
    0x6480a461, 0x0000000d, 0x6480a461, 0x00000011,
    0x6480a461, 0x00000013, 0x6488a461, 0x0000000e,
    0x6488a461, 0x00000012, 0x64880061, 0x00000014,
    0x2c08a461, 0x00103710, 0x2c00a461, 0x0010360f,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x38801f40, 0x63030153, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x38881f40, 0x51030155,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c731, 0x00000000, 0xfb085324, 0x000c0d44,
    0x00100061, 0x64054770, 0x00000000, 0x0000082e,
    0x0210a761, 0x54054770, 0x00000000, 0x0000082e,
    0x0014a661, 0x5a054120, 0x00000000, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x38001b40, 0x01706456, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x38081b40, 0x01705458,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c831, 0x00000000, 0xf7085624, 0x00025a14,
    0x00100061, 0x65054770, 0x00000000, 0x00002c3c,
    0x0210a861, 0x5b054770, 0x00000000, 0x00002c3c,
    0x02100061, 0x1c054660, 0x00000000, 0x00000000,
    0x02100061, 0x1e054660, 0x00000000, 0x00000000,
    0x02100061, 0x20054660, 0x00000000, 0x00000000,
    0x02100061, 0x22054660, 0x00000000, 0x00000000,
    0x00100061, 0x1b054660, 0x00000000, 0x00000000,
    0x00100061, 0x1d054660, 0x00000000, 0x00000000,
    0x00100061, 0x1f054660, 0x00000000, 0x00000000,
    0x00100061, 0x21054660, 0x00000000, 0x00000000,
    0x38001f40, 0x0170655d, 0x38081f40, 0x01705b5f,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c931, 0x00000000, 0xfb085d24, 0x000c1b44,
    0x0010a861, 0x5a050770, 0x00000244, 0x00000000,
    0x0210a961, 0x5c050770, 0x00000244, 0x00000000,
    0x3880a940, 0x2504025e, 0x3888a940, 0x42040260,
    0x38800040, 0x27000262, 0x38880040, 0x48000264,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x03440000, 0xfb005a24, 0x000c0000,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x0b440000, 0xfb005e24, 0x000c0000,
    0x8200a701, 0x00000000, 0x00000000, 0x00000000,
    0x2c088061, 0x00100414, 0x2c088061, 0x00100616,
    0x2c088061, 0x00100818, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x2c008061, 0x00100313,
    0x2c008061, 0x00100515, 0x2c008061, 0x00100717,
    0x2c088061, 0x00100c1a, 0x2c008061, 0x00100b19,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014ca31, 0x00000000, 0xfb086224, 0x000c1344,
    0x3800aa40, 0x02102963, 0x3808aa40, 0x02104b65,
    0x2c208061, 0x00100d5b, 0x2c208061, 0x00100f5d,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014cb31, 0x00000000, 0xfb086324, 0x00045b24,
    0x3880ab40, 0x25030164, 0x3888ab40, 0x42030166,
    0x0210ab61, 0x5d054660, 0x00000000, 0x00000000,
    0x0210a061, 0x5f054660, 0x00000000, 0x00000000,
    0x0010ab61, 0x5c054660, 0x00000000, 0x00000000,
    0x0010ab61, 0x5e054660, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x00000000, 0xfb086424, 0x00045c24,
    0x00100061, 0x6b054770, 0x00000000, 0x00000040,
    0x0210a061, 0x65054770, 0x00000000, 0x00000040,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x6b0c0267, 0x38881a40, 0x650c0269,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x00000000, 0xfb086724, 0x000c1b44,
    0x00140025, 0x00004600, 0x00000000, 0x00000010,
    0x00100061, 0x6c054770, 0x00000000, 0x00000028,
    0x0210a061, 0x68054770, 0x00000000, 0x00000028,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x6c030175, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0x38881a40, 0x6803016a,
    0x00141a70, 0x00018220, 0x42462b05, 0x00000100,
    0x04140028, 0x0001c660, 0x000000f8, 0x000000f8,
    0x00140070, 0x6c058660, 0x26462b05, 0x00000000,
    0x00140069, 0x6e058660, 0x02462b05, 0x00000002,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x7da01a61, 0x00106c5d, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0xb4001a61, 0x00106e44,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0xb4081b61, 0x00106f46, 0x00101a61, 0x77050230,
    0x00444406, 0x00000000, 0x02101a61, 0x6f050230,
    0x00444606, 0x00000000, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x77007571,
    0x8200a001, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x6f006a73, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c031, 0x00000000,
    0xfb087124, 0x00005d14, 0x00140040, 0x2b058660,
    0x06462b05, 0x00000200, 0x00140027, 0x00014060,
    0x00000000, 0xfffffef8, 0x00100061, 0x78054770,
    0x00000000, 0x00002c58, 0x0210a061, 0x72054770,
    0x00000000, 0x00002c58, 0x00108069, 0x10058770,
    0x02342305, 0x00000002, 0x02101d69, 0x76058770,
    0x02344005, 0x00000002, 0x38001c40, 0x0170780e,
    0x8200a001, 0x00000000, 0x00000000, 0x00000000,
    0x38081c40, 0x01707274, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x00101c61, 0x47060320,
    0x00341005, 0x00000000, 0x8200a301, 0x00000000,
    0x00000000, 0x00000000, 0x02101c61, 0x49060320,
    0x00347605, 0x00000000, 0x00101a61, 0x2f050220,
    0x00444706, 0x00000000, 0x02101a61, 0x30050220,
    0x00444906, 0x00000000, 0x2c201961, 0x00102f2c,
    0x00141970, 0x00018220, 0x42462c05, 0x00000120,
    0x04140028, 0x0001c660, 0x00000320, 0x00000320,
    0x00140069, 0x77058660, 0x02462c05, 0x00000002,
    0x0014a061, 0x5e054220, 0x00000000, 0x7f800000,
    0xb4001a61, 0x0010774a, 0x8200a401, 0x00000000,
    0x00000000, 0x00000000, 0xb4081b61, 0x0010784c,
    0x00114061, 0x11050230, 0x00444a06, 0x00000000,
    0x02101a61, 0x79050230, 0x00444c06, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x11000e7b, 0x38081a40, 0x7900747d,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014cc31, 0x00000000, 0xfb087b24, 0x00005e14,
    0x0014ac40, 0x7c058660, 0x06467705, 0x00000004,
    0xb4001961, 0x00107c4d, 0x8200a501, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x00107d4f,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x12050230, 0x00444d06, 0x00000000,
    0x8200ac01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x7d050230, 0x00444f06, 0x00000000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x12000e02, 0x38081a40, 0x7d007404,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x00000000, 0xfb080224, 0x00005e14,
    0x0014a040, 0x03058660, 0x06467705, 0x00000008,
    0xb4001961, 0x00100350, 0x8200a701, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x00100452,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x13050230, 0x00445006, 0x00000000,
    0x8200a001, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x04050230, 0x00445206, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x13000e06, 0x82008001, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x04007408,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014cd31, 0x00000000, 0xfb080624, 0x00005e14,
    0x0014ad40, 0x07058660, 0x06467705, 0x0000000c,
    0xb4001961, 0x00100753, 0x8200a801, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x00100855,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x14050230, 0x00445306, 0x00000000,
    0x8200ad01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x08050230, 0x00445506, 0x00000000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x14000e0a, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x0800740c,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x00000000, 0xfb080a24, 0x00005e14,
    0x00140040, 0x2c058660, 0x06462c05, 0x00000800,
    0x00140027, 0x00014060, 0x00000000, 0xfffffcd0,
    0x0010aa61, 0x15054770, 0x00000000, 0x000030d8,
    0x0210a061, 0x0b054770, 0x00000000, 0x000030d8,
    0x2c201b61, 0x00102f2d, 0x38001b40, 0x01701523,
    0x8200a001, 0x00000000, 0x00000000, 0x00000000,
    0x38081b40, 0x01700b0d, 0x00141a70, 0x00018220,
    0x42462d05, 0x00000030, 0x04140028, 0x0001c660,
    0x00000358, 0x00000358, 0x00140069, 0x0f058660,
    0x02462d05, 0x00000002, 0x64a0a061, 0x0000005f,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0xb4001a61, 0x00100f56, 0x8200a801, 0x00000000,
    0x00000000, 0x00000000, 0xb4081b61, 0x00101058,
    0x00101a61, 0x25050230, 0x00445606, 0x00000000,
    0x02114061, 0x11050230, 0x00445806, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x25002313, 0x38081a40, 0x11000d15,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014ca31, 0x00000000, 0xfb081324, 0x00005f14,
    0x0014aa40, 0x14058660, 0x06460f05, 0x00000004,
    0x8200a001, 0x00000000, 0x00000000, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0xb4001961, 0x00101459, 0x8200ab01, 0x00000000,
    0x00000000, 0x00000000, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x0010155b,
    0x00101a61, 0x26050230, 0x00445906, 0x00000000,
    0x8200aa01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x15050230, 0x00445b06, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x26002317, 0x8200aa01, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x15000d19,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014ca31, 0x00000000, 0xfb081724, 0x00005f14,
    0x0014aa40, 0x18058660, 0x06460f05, 0x00000008,
    0x8200aa01, 0x00000000, 0x00000000, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0xb4001961, 0x0010185c, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0x8200aa01, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x00101961,
    0x00101a61, 0x27050230, 0x00445c06, 0x00000000,
    0x8200aa01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x19050230, 0x00446106, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x2700231b, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x19000d1d,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x00000000, 0xfb081b24, 0x00005f14,
    0x0014a040, 0x1c058660, 0x06460f05, 0x0000000c,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0xb4001961, 0x00101c62, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x00101d64,
    0x00101a61, 0x28050230, 0x00446206, 0x00000000,
    0x8200a001, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x1d050230, 0x00446406, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x2800231f, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x1d000d21,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x00000000, 0xfb081f24, 0x00005f14,
    0x00140040, 0x2d058660, 0x06462d05, 0x00000800,
    0x00140027, 0x00014060, 0x00000000, 0xfffffc98,
    0x00100061, 0x29054770, 0x00000000, 0x00003198,
    0x0210a061, 0x20054770, 0x00000000, 0x00003198,
    0x00140070, 0x00018220, 0x52462f05, 0x00000018,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x38001b40, 0x01702938, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0x38081b40, 0x01702022,
    0x04140022, 0x0001c060, 0x000002a0, 0x000002a0,
    0x00141f69, 0x24058660, 0x02462f05, 0x00000002,
    0x0014a061, 0x60054220, 0x00000000, 0x7f800000,
    0xb4001a61, 0x00102465, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0xb4081b61, 0x00102567,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x3a050230, 0x00446506, 0x00000000,
    0x02101a61, 0x26050230, 0x00446706, 0x00000000,
    0x38001a40, 0x3a003828, 0x38081a40, 0x2600222a,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014ce31, 0x00000000, 0xfb082824, 0x00006014,
    0x0014ae40, 0x29058660, 0x06462405, 0x00000004,
    0xb4001961, 0x00102968, 0xb4081a61, 0x00102a6a,
    0x00101a61, 0x3b050230, 0x00446806, 0x00000000,
    0x8200ae01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x2a050230, 0x00446a06, 0x00000000,
    0x38001a40, 0x3b00382c, 0x38081a40, 0x2a00222e,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014cf31, 0x00000000, 0xfb082c24, 0x00006014,
    0x0014af40, 0x2d058660, 0x06462405, 0x00000008,
    0xb4001961, 0x00102d6b, 0xb4081a61, 0x00102e6d,
    0x00101a61, 0x3c050230, 0x00446b06, 0x00000000,
    0x8200af01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x2e050230, 0x00446d06, 0x00000000,
    0x38001a40, 0x3c003830, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x2e002232,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x00000000, 0xfb083024, 0x00006014,
    0x0014a040, 0x31058660, 0x06462405, 0x0000000c,
    0x8200a001, 0x00000000, 0x00000000, 0x00000000,
    0xb4001961, 0x0010316e, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x00103270,
    0x00101a61, 0x3d050230, 0x00446e06, 0x00000000,
    0x8200a001, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x32050230, 0x00447006, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x3d003834, 0x82008001, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x32002236,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x00000000, 0xfb083424, 0x00006014,
    0x00140025, 0x00004600, 0x00000000, 0x00000010,
    0x2c100061, 0x0010007e, 0x80141931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_begin = {
   .prog_data = {
      .base.nr_params = 27,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 4,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5488,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_begin_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_begin_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 512, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 4,
      .prog_spilled = 0,
      .uses_barrier = false,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 27,
      .push.cross_thread.regs = 4,
      .push.cross_thread.size = 128,
   },
   .args_size = 76,
   .arg_count = 11,
   .args = gfx20_bvh_build_BFS_begin_args,
   .code = gfx20_bvh_build_BFS_begin_code,
};
const char *gfx20_bvh_build_BFS_begin_sha1 = "b428ba467572faefbfc447b4615126a04d0755a6";

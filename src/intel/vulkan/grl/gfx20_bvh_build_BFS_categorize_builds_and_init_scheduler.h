#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_categorize_builds_and_init_scheduler_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_categorize_builds_and_init_scheduler_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_categorize_builds_and_init_scheduler_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g67<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g71<1>Q         0x0000000000000028Q             { align1 1H };
mov(16)         g49<1>Q         0x0000000000000028Q             { align1 2H };
mov.nz.f0.0(32) null<1>UD       g0.1<0,1,0>UD                   { align1 };
and(32)         g57<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g1UD            g67UD           nullUD          0x0220e500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V32, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g96<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(32)         g92<1>D         g57<8,8,1>D     0x00000005UD    { align1 I@2 };
add(8)          g96.8<1>UW      g96<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
add(16)         g96.16<1>UW     g96<16,16,1>UW  0x0010UW        { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(32)         g94<1>UD        g96<16,16,1>UW                  { align1 };
add(32)         g97<1>D         g94<1,1,0>D     g92<1,1,0>D     { align1 I@1 compacted };
and(32)         g47<1>UD        g97<8,8,1>UD    0x000001ffUD    { align1 I@1 };
mov(32)         g51<1>UD        g47<1,1,0>UD                    { align1 I@1 compacted };
(+f0.0) if(32)  JIP:  LABEL1          UIP:  LABEL0              { align1 };
mov(16)         g36<1>Q         0x000000000000002cQ             { align1 1H };
mov(16)         g98<1>Q         0x000000000000002cQ             { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g31<1>Q         g1.4<0,1,0>Q    g71<1,1,0>Q     { align1 1H compacted };
add(16)         g100<1>Q        g1.4<0,1,0>Q    g49<1,1,0>Q     { align1 2H compacted };

LABEL3:
cmp.ge.f0.0(32) null<1>UD       g47<8,8,1>UD    0x00000100UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL2        UIP:  LABEL2              { align1 };
cmp.nz.f0.0(32) g102<1>D        g47<8,8,1>D     0D              { align1 };
shl(32)         g104<1>D        g47<8,8,1>D     0x00000002UD    { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(32)         g111<1>D        -g102<1,1,0>D                   { align1 I@2 compacted };
mov(16)         g113<2>UD       g104<1,1,0>UD                   { align1 1H I@2 compacted };
mov(16)         g115<2>UD       g105<1,1,0>UD                   { align1 2H I@3 compacted };
mov(16)         g33<1>UQ        g113<8,4,2>UD                   { align1 1H I@2 };
mov(16)         g105<1>UQ       g115<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g107<1>Q        g31<1,1,0>Q     g33<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
add(16)         g109<1>Q        g100<1,1,0>Q    g105<1,1,0>Q    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g107UD          g111UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $1 };
add(32)         g47<1>D         g47<8,8,1>D     512D            { align1 };

LABEL2:
while(32)       JIP:  LABEL3                                    { align1 };
shl(32)         g53<1>D         g94<8,8,1>D     0x00000002UD    { align1 };
mov(16)         g34<1>Q         0x0000000000002c2cQ             { align1 1H };
mov(16)         g108<1>Q        0x0000000000002c2cQ             { align1 2H $1.src };
mov(16)         g40<1>Q         0x00000000000004acQ             { align1 1H };
mov(16)         g112<1>Q        0x00000000000004acQ             { align1 2H $1.src };
add(16)         g38<1>Q         g1.4<0,1,0>Q    g34<1,1,0>Q     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
add(16)         g110<1>Q        g1.4<0,1,0>Q    g108<1,1,0>Q    { align1 2H I@4 compacted };

LABEL9:
cmp.ge.f0.0(32) null<1>UD       g57<8,8,1>UD    0x00000100UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL4        UIP:  LABEL4              { align1 };
mul(16)         acc0<1>UD       g57<8,8,1>UD    0x05ccUW        { align1 1H };
mul(32)         g115<1>D        g57<1,1,0>D     1484W           { align1 $2.src compacted };
mov(32)         g44<1>UD        g53<1,1,0>UD                    { align1 I@7 compacted };
mach(16)        g35<1>UD        g57<8,8,1>UD    0x000005ccUD    { align1 1H };
mov(16)         g42<2>UD        g115<1,1,0>UD                   { align1 1H I@3 compacted };
mov(16)         g117<2>UD       g116<1,1,0>UD                   { align1 2H I@4 compacted };
mul(16)         acc0<1>UD       g58<8,8,1>UD    0x05ccUW        { align1 2H };
mov(16)         g42.1<2>UD      g35<1,1,0>UD                    { align1 1H I@3 compacted };
mach(16)        g114<1>UD       g58<8,8,1>UD    0x000005ccUD    { align1 2H $2.src };
add(16)         g55<1>Q         g38<1,1,0>Q     g42<1,1,0>Q     { align1 1H I@2 compacted };
mov(16)         g117.1<2>UD     g114<1,1,0>UD                   { align1 2H I@2 compacted };
add(16)         g42<1>Q         g55<1,1,0>Q     g36<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g59<1>Q         g40<1,1,0>Q     g55<1,1,0>Q     { align1 1H $2.src compacted };
add(16)         g119<1>Q        g110<1,1,0>Q    g117<1,1,0>Q    { align1 2H I@3 compacted };
add(16)         g121<1>Q        g119<1,1,0>Q    g98<1,1,0>Q     { align1 2H I@1 compacted };
add(16)         g123<1>Q        g112<1,1,0>Q    g119<1,1,0>Q    { align1 2H compacted };

LABEL6:
cmp.ge.f0.0(32) null<1>UD       g44<8,8,1>UD    0x00000030UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL5        UIP:  LABEL5              { align1 };
shl(32)         g125<1>D        g44<8,8,1>D     0x00000002UD    { align1 };
mov(32)         g114<1>UD       0x00000000UD                    { align1 $2.src compacted };
mov(16)         g116<2>UD       g125<1,1,0>UD                   { align1 1H I@2 compacted };
mov(16)         g118<2>UD       g126<1,1,0>UD                   { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g61<1>UQ        g116<8,4,2>UD                   { align1 1H I@2 };
mov(16)         g3<1>UQ         g118<8,4,2>UD                   { align1 2H I@2 };
add(16)         g5<1>Q          g59<1,1,0>Q     g61<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g7<1>Q          g123<1,1,0>Q    g3<1,1,0>Q      { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g5UD            g114UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $3 };
add(32)         g6<1>D          g125<8,8,1>D    4D              { align1 $3.src };
mov(16)         g119<2>UD       g6<1,1,0>UD                     { align1 1H I@1 compacted };
mov(16)         g3<2>UD         g7<1,1,0>UD                     { align1 2H I@2 compacted };
mov(16)         g62<1>UQ        g119<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
mov(16)         g7<1>UQ         g3<8,4,2>UD                     { align1 2H I@2 };
add(16)         g9<1>Q          g59<1,1,0>Q     g62<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g11<1>Q         g123<1,1,0>Q    g7<1,1,0>Q      { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g9UD            g114UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $4 };
add(32)         g10<1>D         g125<8,8,1>D    8D              { align1 $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g4<2>UD         g10<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g6<2>UD         g11<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g63<1>UQ        g4<8,4,2>UD                     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $4.src };
mov(16)         g11<1>UQ        g6<8,4,2>UD                     { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g13<1>Q         g59<1,1,0>Q     g63<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g15<1>Q         g123<1,1,0>Q    g11<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g13UD           g114UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $2 };
add(32)         g14<1>D         g125<8,8,1>D    12D             { align1 $2.src };
mov(16)         g7<2>UD         g14<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $4.src };
mov(16)         g9<2>UD         g15<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g64<1>UQ        g7<8,4,2>UD                     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g15<1>UQ        g9<8,4,2>UD                     { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g17<1>Q         g59<1,1,0>Q     g64<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
add(16)         g19<1>Q         g123<1,1,0>Q    g15<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g17UD           g114UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $2 };
add(32)         g44<1>D         g44<8,8,1>D     128D            { align1 };

LABEL5:
while(32)       JIP:  LABEL6                                    { align1 };
mov(32)         g55<1>UD        g53<1,1,0>UD                    { align1 compacted };

LABEL8:
cmp.ge.f0.0(32) null<1>UD       g55<8,8,1>UD    0x00000120UD    { align1 I@1 };
(+f0.0) break(32) JIP:  LABEL7        UIP:  LABEL7              { align1 };
shl(32)         g18<1>D         g55<8,8,1>D     0x00000002UD    { align1 $2.src };
mov(32)         g115<1>UD       0x7f800000UD                    { align1 $2.src };
mov(16)         g10<2>UD        g18<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g12<2>UD        g19<1,1,0>UD                    { align1 2H I@3 compacted };
mov(16)         g65<1>UQ        g10<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g20<1>UQ        g12<8,4,2>UD                    { align1 2H I@2 };
add(16)         g22<1>Q         g42<1,1,0>Q     g65<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g24<1>Q         g121<1,1,0>Q    g20<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g22UD           g115UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $5 };
add(32)         g23<1>D         g18<8,8,1>D     4D              { align1 $5.src };
mov(16)         g13<2>UD        g23<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g15<2>UD        g24<1,1,0>UD                    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g66<1>UQ        g13<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $5.src };
mov(16)         g24<1>UQ        g15<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g26<1>Q         g42<1,1,0>Q     g66<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g28<1>Q         g121<1,1,0>Q    g24<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g26UD           g115UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $1 };
add(32)         g27<1>D         g18<8,8,1>D     8D              { align1 $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g16<2>UD        g27<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g20<2>UD        g28<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g67<1>UQ        g16<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
mov(16)         g28<1>UQ        g20<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g30<1>Q         g42<1,1,0>Q     g67<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g32<1>Q         g121<1,1,0>Q    g28<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g30UD           g115UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $6 };
add(32)         g31<1>D         g18<8,8,1>D     12D             { align1 $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g21<2>UD        g31<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g23<2>UD        g32<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g68<1>UQ        g21<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g32<1>UQ        g23<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g59<1>Q         g42<1,1,0>Q     g68<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
add(16)         g61<1>Q         g121<1,1,0>Q    g32<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g59UD           g115UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $2 };
add(32)         g55<1>D         g55<8,8,1>D     128D            { align1 };

LABEL7:
while(32)       JIP:  LABEL8                                    { align1 };
add(32)         g57<1>D         g57<8,8,1>D     16D             { align1 };

LABEL4:
while(32)       JIP:  LABEL9                                    { align1 };
cmp.z.f0.0(32)  null<1>D        g51<8,8,1>D     0D              { align1 };
(+f0.0) if(32)  JIP:  LABEL10         UIP:  LABEL10             { align1 };
mov(16)         g69<1>Q         0x000000000005f82cQ             { align1 1H };
mov(16)         g60<1>Q         0x000000000005f82cQ             { align1 2H $2.src };
mov(32)         g116<1>UD       0x00000000UD                    { align1 $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g62<1>Q         g1.4<0,1,0>Q    g69<1,1,0>Q     { align1 1H I@3 compacted };
add(16)         g64<1>Q         g1.4<0,1,0>Q    g60<1,1,0>Q     { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g62UD           g116UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $2 };

LABEL10:
endif(32)       JIP:  LABEL11                                   { align1 };

LABEL11:
else(32)        JIP:  LABEL0          UIP:  LABEL0              { align1 };

LABEL1:
mov(16)         g73<1>Q         0x0000000000000008Q             { align1 1H };
mov(16)         g53<1>Q         0x0000000000000008Q             { align1 2H I@7 };
mov(16)         g75<1>Q         0x0000000000000010Q             { align1 1H };
mov(16)         g55<1>Q         0x0000000000000010Q             { align1 2H };
mov(16)         g77<1>Q         0x0000000000000018Q             { align1 1H };
mov(16)         g57<1>Q         0x0000000000000018Q             { align1 2H };
mov(16)         g79<1>Q         0x0000000000000020Q             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g59<1>Q         0x0000000000000020Q             { align1 2H I@7 };
cmp.z.f0.0(32)  null<1>D        g51<8,8,1>D     0D              { align1 I@7 };
(+f0.0) if(32)  JIP:  LABEL12         UIP:  LABEL12             { align1 };
mov(16)         g120<1>D        0D                              { align1 2H };
mov(16)         g122<1>D        0D                              { align1 2H };
mov(16)         g124<1>D        0D                              { align1 2H };
mov(16)         g119<1>D        0D                              { align1 1H };
mov(16)         g121<1>D        0D                              { align1 1H };
mov(16)         g123<1>D        0D                              { align1 1H };
mov(32)         g117<1>UD       0x00000000UD                    { align1 $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g117UD          g119UD          0x04002504                0x00000180
                            slm MsgDesc: ( store, a32, d32, V3, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 6 flat )  base_offset 0  { align1 $2 };

LABEL12:
endif(32)       JIP:  LABEL0                                    { align1 };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
send(1)         g63UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mov(8)          g64<1>UD        0x00000000UD                    { align1 WE_all 1Q $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(2)          g64.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g64.2<1>UD      g64.2<0,1,0>UD  0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g64UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all $8 };
sync bar(32)                    null<0,1,0>UB                   { align1 WE_all };
mov(16)         g81<1>Q         0x0000000000000024Q             { align1 1H };
mov(16)         g61<1>Q         0x0000000000000024Q             { align1 2H $2.src };
mov(32)         g65<1>UD        0x00000000UD                    { align1 $2.src compacted };
mov(32)         g68<1>UD        0x00000000UD                    { align1 compacted };
mov(32)         g83<1>UD        0x00000000UD                    { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(32)         g63<1>UD        g47<1,1,0>UD                    { align1 $2.src compacted };

LABEL14:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.ge.f0.0(32) null<1>UD       g63<8,8,1>UD    g2<0,1,0>UD     { align1 I@1 };
(+f0.0) break(32) JIP:  LABEL13       UIP:  LABEL13             { align1 };
add(32)         g109<1>D        g83<8,8,1>D     1D              { align1 I@4 };
add(32)         g111<1>D        g68<8,8,1>D     1D              { align1 I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(32)         g117<1>D        g65<8,8,1>D     1D              { align1 I@6 };
mov(16)         g24<2>UD        g63<1,1,0>UD                    { align1 1H compacted };
mov(16)         g26<2>UD        g64<1,1,0>UD                    { align1 2H $1.src compacted };
add(32)         g63<1>D         g63<8,8,1>D     512D            { align1 };
mov(16)         g87<1>UQ        g24<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g85<1>UQ        g26<8,4,2>UD                    { align1 2H I@3 };
shl(16)         g93<1>Q         g87<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
shl(16)         g87<1>Q         g85<4,4,1>Q     0x00000003UD    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g89<1>Q         g1.5<0,1,0>Q    g93<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $9.src };
add(16)         g91<1>Q         g1.5<0,1,0>Q    g87<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g97UD           g89UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g107<2>UD       g97<1,1,0>UD                    { align1 1H $9.dst compacted };
mov(16)         g101<2>UD       g98<1,1,0>UD                    { align1 2H $9.dst compacted };
mov(16)         g107.1<2>UD     g99<1,1,0>UD                    { align1 1H @2 $9.dst compacted };
mov(16)         g101.1<2>UD     g100<1,1,0>UD                   { align1 2H @2 $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g103<1>Q        g107<1,1,0>Q    g81<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
add(16)         g105<1>Q        g101<1,1,0>Q    g61<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g107UD          g103UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.le.f0.0(32) g113<1>UD       g107<8,8,1>UD   0x00000100UD    { align1 $1.dst };
(+f0.0) sel(32) g115<1>UD       g83<8,8,1>UD    g109<8,8,1>UD   { align1 $2.src };
cmp.g.f0.0(32)  g119<1>UD       g107<8,8,1>UD   0x00000006UD    { align1 $2.src };
(+f0.0) sel(32) g83<1>UD        g115<8,8,1>UD   g83<8,8,1>UD    { align1 I@2 };
and.nz.f0.0(32) null<1>UD       g119<8,8,1>UD   g113<8,8,1>UD   { align1 I@2 };
(+f0.0) sel(32) g68<1>UD        g111<8,8,1>UD   g68<8,8,1>UD    { align1 };
cmp.nz.f0.0(32) null<1>D        g119<8,8,1>D    0D              { align1 };
(+f0.0) sel(32) g65<1>UD        g65<8,8,1>UD    g117<8,8,1>UD   { align1 };

LABEL13:
while(32)       JIP:  LABEL14                                   { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(32)         g122<1>D        0D                              { align1 WE_all I@4 };
mov(32)         g122<1>D        g65<1,1,0>D                     { align1 compacted };
add(32)         g124<1>W        g96<16,16,1>UW  -1W             { align1 WE_all $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x1e80UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g124<16,16,1>W  0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x1e80UW        { align1 WE_all 1H A@1 };
mov(16)         g120<1>UD       g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 };
mov(16)         a0<1>UW         0x1e80UW                        { align1 WE_all 2H };
shl(16)         a0<1>UW         g124.16<16,16,1>W 0x0002UW      { align1 WE_all 2H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x1e80UW        { align1 WE_all 2H A@1 };
mov(16)         g121<1>UD       g[a0]<VxH,1,0>UD                { align1 WE_all 2H A@1 };
mov(1)          g120<1>D        0D                              { align1 WE_all 1N I@1 };
add(8)          g121.1<2>D      g121<8,4,2>D    g121.1<8,4,2>D  { align1 WE_all 1Q I@2 };
add(8)          g120.1<2>D      g120<8,4,2>D    g120.1<8,4,2>D  { align1 WE_all 1Q I@2 };
add(4)          g121.2<4>D      g121.1<8,2,4>D  g121.2<8,2,4>D  { align1 WE_all 1N I@2 };
add(4)          g120.2<4>D      g120.1<8,2,4>D  g120.2<8,2,4>D  { align1 WE_all 1N I@2 };
add(4)          g121.3<4>D      g121.1<8,2,4>D  g121.3<8,2,4>D  { align1 WE_all 1N I@2 };
add(4)          g120.3<4>D      g120.1<8,2,4>D  g120.3<8,2,4>D  { align1 WE_all 1N I@2 };
add(4)          g121.4<1>D      g121.3<0,1,0>D  g121.4<4,4,1>D  { align1 WE_all 1N I@2 };
add(4)          g121.12<1>D     g121.11<0,1,0>D g121.12<4,4,1>D { align1 WE_all 1N I@3 };
add(4)          g120.4<1>D      g120.3<0,1,0>D  g120.4<4,4,1>D  { align1 WE_all 1N I@3 };
add(4)          g120.12<1>D     g120.11<0,1,0>D g120.12<4,4,1>D { align1 WE_all 1N I@4 };
add(8)          g121.8<1>D      g121.7<0,1,0>D  g121.8<8,8,1>D  { align1 WE_all 1Q I@3 };
add(8)          g120.8<1>D      g120.7<0,1,0>D  g120.8<8,8,1>D  { align1 WE_all 1Q I@2 };
add(16)         g121<1>D        g120.15<0,1,0>D g121<8,8,1>D    { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(1)          g30<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g30<1>UD        g30<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(32)         g5<1>D          g120<1,1,0>D    g65<1,1,0>D     { align1 compacted };
mov(1)          g31<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g31<1>UD        g31<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g31<1>UD        g30<0,1,0>UD    g31<0,1,0>UD    { align1 WE_all 1N I@1 compacted };
lzd(1)          g32<1>UD        g31<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
add(1)          g3<1>UD         -g32<0,1,0>UD   0x001fUW        { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(32)         g125<1>UD       g3<0,1,0>UD                     { align1 compacted };
mov(1)          g33<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g33<1>UD        g33<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(32)         g12<1>UD        g96<16,16,1>UW                  { align1 $2.src };
fbl(1)          g8<1>UD         g33<0,1,0>UD                    { align1 WE_all 1N I@2 compacted };
shl(1)          a0<1>UD         g8<0,1,0>UD     0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001e00UD    { align1 WE_all 1N A@1 };
mov(1)          g10<1>UD        g[a0 320]<0,1,0>UD              { align1 WE_all 1N A@1 };
cmp.z.f0.0(32)  null<1>D        g12<8,8,1>D     g8<0,1,0>D      { align1 I@3 };
shl(1)          a0<1>UD         g10<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@2 };
mov(1)          g7<1>UD         g[a0 320]<0,1,0>UD              { align1 WE_all 1N A@1 };
(+f0.0) if(32)  JIP:  LABEL15         UIP:  LABEL15             { align1 };
mov(32)         g122<1>UD       0x00000000UD                    { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(32)         g125<1>UD       g7<0,1,0>UD                     { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g66UD           g122UD          g125UD          0x0424050c                0x00000080
                            slm MsgDesc: ( atomic_add, a32, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 $0 };

LABEL15:
endif(32)       JIP:  LABEL0                                    { align1 };
mov(1)          g34<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g34<1>UD        g34<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(32)         g19<1>D         0D                              { align1 WE_all $2.src };
mov(32)         g19<1>D         g68<1,1,0>D                     { align1 compacted };
fbl(1)          g13<1>UD        g34<0,1,0>UD                    { align1 WE_all 1N I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x04c0UW                        { align1 WE_all 1H I@2 };
shl(16)         a0<1>UW         g124<16,16,1>W  0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x04c0UW        { align1 WE_all 1H A@1 };
mov(16)         g17<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 };
mov(16)         a0<1>UW         0x04c0UW                        { align1 WE_all 2H };
shl(16)         a0<1>UW         g124.16<16,16,1>W 0x0002UW      { align1 WE_all 2H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x04c0UW        { align1 WE_all 2H A@1 };
mov(16)         g18<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 2H A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(1)          a0<1>UD         g13<0,1,0>UD    0x00000002UD    { align1 WE_all 1N $0.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g15<1>UD        g[a0 128]<0,1,0>UD              { align1 WE_all 1N A@1 };
mov(1)          g17<1>D         0D                              { align1 WE_all 1N I@2 };
add(8)          g18.1<2>D       g18<8,4,2>D     g18.1<8,4,2>D   { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(32)         g41<1>D         g15<0,1,0>D     g120<1,1,0>D    { align1 compacted };
add(8)          g17.1<2>D       g17<8,4,2>D     g17.1<8,4,2>D   { align1 WE_all 1Q I@3 };
add(4)          g18.2<4>D       g18.1<8,2,4>D   g18.2<8,2,4>D   { align1 WE_all 1N I@3 };
add(4)          g17.2<4>D       g17.1<8,2,4>D   g17.2<8,2,4>D   { align1 WE_all 1N I@2 };
add(4)          g18.3<4>D       g18.1<8,2,4>D   g18.3<8,2,4>D   { align1 WE_all 1N I@2 };
add(4)          g17.3<4>D       g17.1<8,2,4>D   g17.3<8,2,4>D   { align1 WE_all 1N I@2 };
add(4)          g18.4<1>D       g18.3<0,1,0>D   g18.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(4)          g18.12<1>D      g18.11<0,1,0>D  g18.12<4,4,1>D  { align1 WE_all 1N I@3 };
add(4)          g17.4<1>D       g17.3<0,1,0>D   g17.4<4,4,1>D   { align1 WE_all 1N I@3 };
add(4)          g17.12<1>D      g17.11<0,1,0>D  g17.12<4,4,1>D  { align1 WE_all 1N I@4 };
add(8)          g18.8<1>D       g18.7<0,1,0>D   g18.8<8,8,1>D   { align1 WE_all 1Q I@3 };
add(8)          g17.8<1>D       g17.7<0,1,0>D   g17.8<8,8,1>D   { align1 WE_all 1Q I@2 };
add(16)         g18<1>D         g17.15<0,1,0>D  g18<8,8,1>D     { align1 WE_all 1H I@1 };
mov(1)          g35<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g35<1>UD        g35<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(32)         g29<1>UD        g96<16,16,1>UW                  { align1 $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(32)         g24<1>D         g17<1,1,0>D     g68<1,1,0>D     { align1 compacted };
mov(1)          g36<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g36<1>UD        g36<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
cmp.z.f0.0(32)  null<1>D        g29<8,8,1>D     g13<0,1,0>D     { align1 I@3 };
and(1)          g36<1>UD        g35<0,1,0>UD    g36<0,1,0>UD    { align1 WE_all 1N I@2 compacted };
lzd(1)          g37<1>UD        g36<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
add(1)          g22<1>UD        -g37<0,1,0>UD   0x001fUW        { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(32)         g20<1>UD        g22<0,1,0>UD                    { align1 compacted };
shl(1)          a0<1>UD         g13<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000400UD    { align1 WE_all 1N A@1 };
mov(1)          g28<1>UD        g[a0 256]<0,1,0>UD              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(1)          a0<1>UD         g28<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g26<1>UD        g[a0]<0,1,0>UD                  { align1 WE_all 1N A@1 };
(+f0.0) if(32)  JIP:  LABEL16         UIP:  LABEL16             { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(32)         g126<1>UD       0x00000004UD                    { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(32)         g3<1>UD         g26<0,1,0>UD                    { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g69UD           g126UD          g3UD            0x0424050c                0x00000080
                            slm MsgDesc: ( atomic_add, a32, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 $0 };

LABEL16:
endif(32)       JIP:  LABEL0                                    { align1 };
mov(1)          g38<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g38<1>UD        g38<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(32)         g36<1>D         0D                              { align1 WE_all };
mov(32)         g36<1>D         g83<1,1,0>D                     { align1 compacted };
fbl(1)          g30<1>UD        g38<0,1,0>UD                    { align1 WE_all 1N I@2 compacted };
mov(16)         a0<1>UW         0x0900UW                        { align1 WE_all 1H I@2 };
shl(16)         a0<1>UW         g124<16,16,1>W  0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0900UW        { align1 WE_all 1H A@1 };
mov(16)         g34<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 };
mov(16)         a0<1>UW         0x0900UW                        { align1 WE_all 2H };
shl(16)         a0<1>UW         g124.16<16,16,1>W 0x0002UW      { align1 WE_all 2H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0900UW        { align1 WE_all 2H A@1 };
mov(16)         g35<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 2H A@1 };
shl(1)          a0<1>UD         g30<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @2 $0.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g32<1>UD        g[a0 320]<0,1,0>UD              { align1 WE_all 1N A@1 };
mov(1)          g34<1>D         0D                              { align1 WE_all 1N I@2 };
add(8)          g35.1<2>D       g35<8,4,2>D     g35.1<8,4,2>D   { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(32)         g43<1>D         g32<0,1,0>D     g17<1,1,0>D     { align1 compacted };
add(8)          g34.1<2>D       g34<8,4,2>D     g34.1<8,4,2>D   { align1 WE_all 1Q I@3 };
add(4)          g35.2<4>D       g35.1<8,2,4>D   g35.2<8,2,4>D   { align1 WE_all 1N I@3 };
add(4)          g34.2<4>D       g34.1<8,2,4>D   g34.2<8,2,4>D   { align1 WE_all 1N I@2 };
add(4)          g35.3<4>D       g35.1<8,2,4>D   g35.3<8,2,4>D   { align1 WE_all 1N I@2 };
add(4)          g34.3<4>D       g34.1<8,2,4>D   g34.3<8,2,4>D   { align1 WE_all 1N I@2 };
add(4)          g35.4<1>D       g35.3<0,1,0>D   g35.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(4)          g35.12<1>D      g35.11<0,1,0>D  g35.12<4,4,1>D  { align1 WE_all 1N I@3 };
add(4)          g34.4<1>D       g34.3<0,1,0>D   g34.4<4,4,1>D   { align1 WE_all 1N I@3 };
add(4)          g34.12<1>D      g34.11<0,1,0>D  g34.12<4,4,1>D  { align1 WE_all 1N I@4 };
add(8)          g35.8<1>D       g35.7<0,1,0>D   g35.8<8,8,1>D   { align1 WE_all 1Q I@3 };
add(8)          g34.8<1>D       g34.7<0,1,0>D   g34.8<8,8,1>D   { align1 WE_all 1Q I@2 };
add(16)         g35<1>D         g34.15<0,1,0>D  g35<8,8,1>D     { align1 WE_all 1H I@1 };
mov(1)          g63<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g63<1>UD        g63<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(32)         g66<1>UD        g96<16,16,1>UW                  { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(32)         g45<1>D         g34<1,1,0>D     g83<1,1,0>D     { align1 compacted };
mov(1)          g64<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g64<1>UD        g64<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
cmp.z.f0.0(32)  null<1>D        g66<8,8,1>D     g30<0,1,0>D     { align1 I@3 };
and(1)          g64<1>UD        g63<0,1,0>UD    g64<0,1,0>UD    { align1 WE_all 1N I@2 compacted };
lzd(1)          g65<1>UD        g64<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
add(1)          g39<1>UD        -g65<0,1,0>UD   0x001fUW        { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(32)         g37<1>UD        g39<0,1,0>UD                    { align1 compacted };
shl(1)          a0<1>UD         g30<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g65<1>UD        g[a0 320]<0,1,0>UD              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g65<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g63<1>UD        g[a0 320]<0,1,0>UD              { align1 WE_all 1N A@1 };
(+f0.0) if(32)  JIP:  LABEL17         UIP:  LABEL17             { align1 };
mov(32)         g4<1>UD         0x00000008UD                    { align1 $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(32)         g6<1>UD         g63<0,1,0>UD                    { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g84UD           g4UD            g6UD            0x0424050c                0x00000080
                            slm MsgDesc: ( atomic_add, a32, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 $0 };

LABEL17:
endif(32)       JIP:  LABEL0                                    { align1 };
mov(1)          g66<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g66<1>UD        g66<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g67<1>UD        g66<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g67<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @1 $0.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001400UD    { align1 WE_all 1N A@1 };
mov(1)          g69<1>UD        g[a0 256]<0,1,0>UD              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(32)         g45<1>D         g69<0,1,0>D     g34<1,1,0>D     { align1 compacted };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g70UD           g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
mov(8)          g83<1>UD        0x00000000UD                    { align1 WE_all 1Q compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(2)          g83.10<1>UB     g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
or(1)           g83.2<1>UD      g83.2<0,1,0>UD  0x00000100UD    { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g83UD           nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all $11 };
sync bar(32)                    null<0,1,0>UB                   { align1 WE_all };
mov(32)         g7<1>UD         0x00000000UD                    { align1 WE_all $0.src };
mov(16)         g87<1>Q         0x0000000000000034Q             { align1 1H };
mov(16)         g67<1>Q         0x0000000000000034Q             { align1 2H };
mov(16)         g89<1>Q         0x0000000000000030Q             { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N I@7 };
mov(16)         g69<1>Q         0x0000000000000030Q             { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g95UD           g7UD            nullUD          0x0210d500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g83<1>UQ        g95<0,1,0>UD                    { align1 1H };
mov(16)         g63<1>UQ        g95<0,1,0>UD                    { align1 2H };
mov(16)         g108<1>UQ       g95.1<0,1,0>UD                  { align1 1H };
mov(16)         g91<1>UQ        g95.1<0,1,0>UD                  { align1 2H $9.src };
add(16)         g85<1>Q         g83<1,1,0>Q     g108<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N I@2 };
add(16)         g65<1>Q         g63<1,1,0>Q     g91<1,1,0>Q     { align1 2H compacted };

LABEL22:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.ge.f0.0(32) null<1>UD       g47<8,8,1>UD    g2<0,1,0>UD     { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL18       UIP:  LABEL18             { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(16)         g27<2>UD        g47<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g29<2>UD        g48<1,1,0>UD                    { align1 2H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g21<1>UQ        g27<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
mov(16)         g23<1>UQ        g29<8,4,2>UD                    { align1 2H I@2 };
shl(16)         g109<1>Q        g21<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
shl(16)         g92<1>Q         g23<4,4,1>Q     0x00000003UD    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g11<1>Q         g1.5<0,1,0>Q    g109<1,1,0>Q    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
add(16)         g13<1>Q         g1.5<0,1,0>Q    g92<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g3UD            g11UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g7<2>UD         g3<1,1,0>UD                     { align1 1H $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $13.dst };
mov(16)         g9<2>UD         g4<1,1,0>UD                     { align1 2H $14.dst compacted };
mov(16)         g7.1<2>UD       g5<1,1,0>UD                     { align1 1H @2 $14.dst compacted };
mov(16)         g9.1<2>UD       g6<1,1,0>UD                     { align1 2H @2 $14.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g17<1>Q         g7<1,1,0>Q      g81<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N I@2 };
add(16)         g19<1>Q         g9<1,1,0>Q      g61<1,1,0>Q     { align1 2H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g11UD           g17UD           nullUD          0x08602580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V3, L1STATE_L3MOCS dst_len = 6, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $15 };
cmp.g.f0.0(32)  null<1>UD       g11<8,8,1>UD    0x00000006UD    { align1 $15.dst };
(+f0.0) if(32)  JIP:  LABEL20         UIP:  LABEL19             { align1 };
add(32)         g17<1>D         g45<8,8,1>D     1D              { align1 $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
add(32)         g19<1>D         g43<8,8,1>D     1D              { align1 $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
cmp.le.f0.0(32) null<1>UD       g11<8,8,1>UD    0x00000100UD    { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g31<2>UD        g45<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g33<2>UD        g46<1,1,0>UD                    { align1 2H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g35<2>UD        g43<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g37<2>UD        g44<1,1,0>UD                    { align1 2H compacted };
(+f0.0) sel(32) g45<1>UD        g45<8,8,1>UD    g17<8,8,1>UD    { align1 I@7 };
(+f0.0) sel(32) g43<1>UD        g19<8,8,1>UD    g43<8,8,1>UD    { align1 I@7 };
mov(16)         g27<1>UQ        g31<8,4,2>UD                    { align1 1H I@6 };
mov(16)         g17<1>UQ        g33<8,4,2>UD                    { align1 2H I@6 };
mov(16)         g31<1>UQ        g35<8,4,2>UD                    { align1 1H I@6 };
mov(16)         g19<1>UQ        g37<8,4,2>UD                    { align1 2H I@6 };
add(16)         g33<1>Q         g85<1,1,0>Q     g27<1,1,0>Q     { align1 1H I@4 compacted };
add(16)         g27<1>Q         g65<1,1,0>Q     g17<1,1,0>Q     { align1 2H I@4 compacted };
add(16)         g17<1>Q         g83<1,1,0>Q     g31<1,1,0>Q     { align1 1H I@4 compacted };
add(16)         g31<1>Q         g63<1,1,0>Q     g19<1,1,0>Q     { align1 2H I@4 compacted };
(+f0.0) sel(16) g19<1>UD        g17.1<8,4,2>UD  g33.1<8,4,2>UD  { align1 1H I@2 };
(+f0.0) sel(16) g35<1>UD        g17<8,4,2>UD    g33<8,4,2>UD    { align1 1H };
(+f0.0) sel(16) g20<1>UD        g31.1<8,4,2>UD  g27.1<8,4,2>UD  { align1 2H I@3 };
(+f0.0) sel(16) g36<1>UD        g31<8,4,2>UD    g27<8,4,2>UD    { align1 2H };
mul(16)         acc0<1>UD       g35<8,8,1>UD    0x0058UW        { align1 1H I@3 };
mul(32)         g98<1>D         g19<1,1,0>D     88W             { align1 I@3 compacted };
mul(32)         g96<1>D         g35<1,1,0>D     88W             { align1 I@3 compacted };
mach(16)        g93<1>UD        g35<8,8,1>UD    0x00000058UD    { align1 1H };
mov(16)         g29<2>UD        g96<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N I@3 };
mov(16)         g25<2>UD        g97<1,1,0>UD                    { align1 2H compacted };
mul(16)         acc0<1>UD       g36<8,8,1>UD    0x0058UW        { align1 2H };
mach(16)        g94<1>UD        g36<8,8,1>UD    0x00000058UD    { align1 2H };
add(32)         g100<1>D        g93<1,1,0>D     g98<1,1,0>D     { align1 I@1 compacted };
mov(16)         g29.1<2>UD      g100<1,1,0>UD                   { align1 1H I@1 compacted };
mov(16)         g25.1<2>UD      g101<1,1,0>UD                   { align1 2H I@2 compacted };
add(16)         g37<1>Q         g1.7<0,1,0>Q    g29<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
add(16)         g39<1>Q         g1.7<0,1,0>Q    g25<1,1,0>Q     { align1 2H I@2 compacted };
else(32)        JIP:  LABEL19         UIP:  LABEL19             { align1 };

LABEL20:
add(32)         g91<1>D         g41<8,8,1>D     1D              { align1 };
mul(16)         acc0<1>UD       g41<8,8,1>UD    0x0058UW        { align1 1H };
mul(32)         g102<1>D        g41<1,1,0>D     88W             { align1 $1.src compacted };
mach(16)        g110<1>UD       g41<8,8,1>UD    0x00000058UD    { align1 1H };
mov(16)         g111<2>UD       g102<1,1,0>UD                   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
mov(16)         g104<2>UD       g103<1,1,0>UD                   { align1 2H I@3 compacted };
mul(16)         acc0<1>UD       g42<8,8,1>UD    0x0058UW        { align1 2H };
mov(16)         g111.1<2>UD     g110<1,1,0>UD                   { align1 1H I@3 compacted };
mach(16)        g101<1>UD       g42<8,8,1>UD    0x00000058UD    { align1 2H };
mov(32)         g41<1>UD        g91<1,1,0>UD                    { align1 I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g37<1>Q         g1.7<0,1,0>Q    g111<1,1,0>Q    { align1 1H compacted };
mov(16)         g104.1<2>UD     g101<1,1,0>UD                   { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
add(16)         g39<1>Q         g1.7<0,1,0>Q    g104<1,1,0>Q    { align1 2H I@1 compacted };

LABEL19:
endif(32)       JIP:  LABEL18                                   { align1 };
shl(16)         g112<1>Q        g21<4,4,1>Q     0x00000006UD    { align1 1H I@4 };
shl(16)         g105<1>Q        g23<4,4,1>Q     0x00000006UD    { align1 2H $1.src };
add(16)         g93<1>Q         g1.6<0,1,0>Q    g112<1,1,0>Q    { align1 1H I@2 compacted };
add(16)         g91<1>Q         g1.6<0,1,0>Q    g105<1,1,0>Q    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g17<1>Q         g93<1,1,0>Q     g73<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $15.src };
add(16)         g19<1>Q         g91<1,1,0>Q     g53<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g21UD           g17UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
send(32)        nullUD          g37UD           g21UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 $1 };
add(16)         g17<1>Q         g93<1,1,0>Q     g75<1,1,0>Q     { align1 1H $0.src compacted };
add(16)         g19<1>Q         g91<1,1,0>Q     g55<1,1,0>Q     { align1 2H $0.src compacted };
add(16)         g21<1>Q         g37<1,1,0>Q     g73<1,1,0>Q     { align1 1H $1.src compacted };
add(16)         g23<1>Q         g39<1,1,0>Q     g53<1,1,0>Q     { align1 2H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(32)        g25UD           g17UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g21UD           g25UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 $3 };
add(16)         g21<1>Q         g93<1,1,0>Q     g77<1,1,0>Q     { align1 1H $3.src compacted };
add(16)         g23<1>Q         g91<1,1,0>Q     g57<1,1,0>Q     { align1 2H $3.src compacted };
add(16)         g25<1>Q         g37<1,1,0>Q     g75<1,1,0>Q     { align1 1H $3.src compacted };
add(16)         g27<1>Q         g39<1,1,0>Q     g55<1,1,0>Q     { align1 2H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(32)        g29UD           g21UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g17<2>UD        g29<1,1,0>UD                    { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g19<2>UD        g30<1,1,0>UD                    { align1 2H $4.dst compacted };
mov(16)         g17.1<2>UD      g31<1,1,0>UD                    { align1 1H @2 $4.dst compacted };
mov(16)         g19.1<2>UD      g32<1,1,0>UD                    { align1 2H @2 $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(32)        nullUD          g25UD           g29UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 $5 };
add(16)         g21<1>Q         g93<1,1,0>Q     g79<1,1,0>Q     { align1 1H $4.src compacted };
add(16)         g23<1>Q         g91<1,1,0>Q     g59<1,1,0>Q     { align1 2H $4.src compacted };
add(16)         g25<1>Q         g37<1,1,0>Q     g77<1,1,0>Q     { align1 1H $5.src compacted };
add(16)         g27<1>Q         g39<1,1,0>Q     g57<1,1,0>Q     { align1 2H $5.src compacted };
mov(16)         g30<1>UD        g4<1,1,0>UD                     { align1 2H $5.src compacted };
mov(16)         g32<1>UD        g6<1,1,0>UD                     { align1 2H $5.src compacted };
mov(16)         g29<1>UD        g3<1,1,0>UD                     { align1 1H $5.src compacted };
mov(16)         g31<1>UD        g5<1,1,0>UD                     { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g3UD            g21UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $6 };
mov(16)         g34<1>UD        g4<1,1,0>UD                     { align1 2H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.dst };
mov(16)         g36<1>UD        g6<1,1,0>UD                     { align1 2H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(16)         g33<1>UD        g3<1,1,0>UD                     { align1 1H compacted };
mov(16)         g35<1>UD        g5<1,1,0>UD                     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g25UD           g29UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $6 };
add(16)         g3<1>Q          g37<1,1,0>Q     g87<1,1,0>Q     { align1 1H compacted };
add(16)         g5<1>Q          g39<1,1,0>Q     g67<1,1,0>Q     { align1 2H compacted };
mov(16)         g22<1>UD        g12<1,1,0>UD                    { align1 2H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g24<1>UD        g16<1,1,0>UD                    { align1 2H $15.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g26<1>UD        g14<1,1,0>UD                    { align1 2H $15.dst compacted };
mov(16)         g21<1>UD        g11<1,1,0>UD                    { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g23<1>UD        g15<1,1,0>UD                    { align1 1H $15.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g25<1>UD        g13<1,1,0>UD                    { align1 1H $15.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g3UD            g21UD           0x08002584                0x00000180
                            ugm MsgDesc: ( store, a64, d32, V3, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat )  base_offset 0  { align1 $7 };
add(16)         g3<1>Q          g93<1,1,0>Q     g89<1,1,0>Q     { align1 1H $7.src compacted };
add(16)         g5<1>Q          g91<1,1,0>Q     g69<1,1,0>Q     { align1 2H $7.src compacted };
add(16)         g21<1>Q         g37<1,1,0>Q     g89<1,1,0>Q     { align1 1H $7.src compacted };
add(16)         g23<1>Q         g39<1,1,0>Q     g69<1,1,0>Q     { align1 2H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(32)        g25UD           g3UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g21UD           g25UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $9 };
add(16)         g3<1>Q          g93<1,1,0>Q     g71<1,1,0>Q     { align1 1H $8.src compacted };
add(16)         g5<1>Q          g91<1,1,0>Q     g49<1,1,0>Q     { align1 2H $8.src compacted };
add(16)         g21<1>Q         g37<1,1,0>Q     g71<1,1,0>Q     { align1 1H $9.src compacted };
add(16)         g23<1>Q         g39<1,1,0>Q     g49<1,1,0>Q     { align1 2H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(32)        g25UD           g3UD            nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g21UD           g25UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 $1 };
cmp.g.f0.0(32)  null<1>UD       g11<8,8,1>UD    0x00000100UD    { align1 };
(+f0.0) if(32)  JIP:  LABEL21         UIP:  LABEL21             { align1 };
mov(32)         g26<1>UD        0x00000001UD                    { align1 $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g17UD           g26UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
send(32)        g21UD           g7UD            nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $1 };
add(16)         g11<1>Q         g7<1,1,0>Q      g75<1,1,0>Q     { align1 1H $1.src compacted };
add(16)         g13<1>Q         g9<1,1,0>Q      g55<1,1,0>Q     { align1 2H $1.src compacted };
add(16)         g37<1>Q         g17<1,1,0>Q     g79<1,1,0>Q     { align1 1H $10.src compacted };
add(16)         g39<1>Q         g19<1,1,0>Q     g59<1,1,0>Q     { align1 2H $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(32)        g3UD            g11UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g30<1>UD        g22<1,1,0>UD                    { align1 2H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g32<1>UD        g24<1,1,0>UD                    { align1 2H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g34<1>UD        g26<1,1,0>UD                    { align1 2H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g29<1>UD        g21<1,1,0>UD                    { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g31<1>UD        g23<1,1,0>UD                    { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g33<1>UD        g25<1,1,0>UD                    { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g36<1>UD        g4<1,1,0>UD                     { align1 2H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g35<1>UD        g3<1,1,0>UD                     { align1 1H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g37UD           g29UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $6 };
add(16)         g11<1>Q         g89<1,1,0>Q     g17<1,1,0>Q     { align1 1H $13.src compacted };
add(16)         g13<1>Q         g69<1,1,0>Q     g19<1,1,0>Q     { align1 2H $13.src compacted };
mov(16)         g16<1>UD        g6<1,1,0>UD                     { align1 2H $13.dst compacted };
mov(16)         g15<1>UD        g5<1,1,0>UD                     { align1 1H $13.dst compacted };
mov(16)         g17<1>UD        g7<1,1,0>UD                     { align1 1H $13.dst compacted };
mov(16)         g18<1>UD        g8<1,1,0>UD                     { align1 2H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g11UD           g15UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 $2 };

LABEL21:
endif(32)       JIP:  LABEL18                                   { align1 };
add(32)         g47<1>D         g47<8,8,1>D     512D            { align1 };

LABEL18:
while(32)       JIP:  LABEL22                                   { align1 };
cmp.z.f0.0(32)  null<1>D        g51<8,8,1>D     0D              { align1 };
(+f0.0) if(32)  JIP:  LABEL23         UIP:  LABEL23             { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g106<1>Q        g1.4<0,1,0>Q    g75<1,1,0>Q     { align1 1H $1.src compacted };
add(16)         g108<1>Q        g1.4<0,1,0>Q    g55<1,1,0>Q     { align1 2H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(32)         g27<1>UD        g95<0,1,0>UD                    { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(32)         g29<1>UD        g95.1<0,1,0>UD                  { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g106UD          g27UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(32)         g32<1>D         g95<0,1,0>D     g95.1<0,1,0>D   { align1 compacted };
mov(32)         g28<1>UD        0x00000008UD                    { align1 WE_all $1.src };
add(16)         g108<1>Q        g1.4<0,1,0>Q    g79<1,1,0>Q     { align1 1H $1.src compacted };
add(16)         g110<1>Q        g1.4<0,1,0>Q    g59<1,1,0>Q     { align1 2H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g107UD          g28UD           nullUD          0x0210d500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g31<1>UD        g107<0,1,0>UD                   { align1 2H compacted };
mov(16)         g30<1>UD        g107<0,1,0>UD                   { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g108UD          g30UD           0x08001584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 4 flat )  base_offset 0  { align1 $6 };

LABEL23:
endif(32)       JIP:  LABEL0                                    { align1 };

LABEL0:
endif(32)       JIP:  LABEL24                                   { align1 };

LABEL24:
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H $0.src compacted };
send(32)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_categorize_builds_and_init_scheduler_code[] = {
    0x80000065, 0x43058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x47054770, 0x00000000, 0x00000028,
    0x02100061, 0x31054770, 0x00000000, 0x00000028,
    0x00140061, 0x00010220, 0x20000014, 0x00000000,
    0x00140065, 0x39058220, 0x02000024, 0x000000ff,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x01140000, 0xfa00430c, 0x00380000,
    0x800c0061, 0x60054410, 0x00000000, 0x76543210,
    0x00141a69, 0x5c058660, 0x02463905, 0x00000005,
    0x800c1a40, 0x60458110, 0x01466005, 0x00080008,
    0x80101940, 0x60858110, 0x01586005, 0x00100010,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00140061, 0x5e050120, 0x00586005, 0x00000000,
    0xac201940, 0x5c005e61, 0x00141965, 0x2f058220,
    0x02466105, 0x000001ff, 0x2c201961, 0x00102f33,
    0x04140022, 0x0001c060, 0x000026d8, 0x00000900,
    0x00100061, 0x24054770, 0x00000000, 0x0000002c,
    0x02100061, 0x62054770, 0x00000000, 0x0000002c,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x4703011f, 0x38880040, 0x31030164,
    0x00141a70, 0x00018220, 0x42462f05, 0x00000100,
    0x04140028, 0x0001c660, 0x000000d8, 0x000000d8,
    0x00140070, 0x66058660, 0x26462f05, 0x00000000,
    0x00140069, 0x68058660, 0x02462f05, 0x00000002,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x7da01a61, 0x0010666f, 0xb4001a61, 0x00106871,
    0xb4081b61, 0x00106973, 0x00101a61, 0x21050230,
    0x00447106, 0x00000000, 0x02101a61, 0x69050230,
    0x00447306, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x21001f6b,
    0x8200a101, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x6900646d, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c131, 0x00000000,
    0xfb086b24, 0x00006f14, 0x00140040, 0x2f058660,
    0x06462f05, 0x00000200, 0x00140027, 0x00014060,
    0x00000000, 0xffffff18, 0x00140069, 0x35058660,
    0x02465e05, 0x00000002, 0x00100061, 0x22054770,
    0x00000000, 0x00002c2c, 0x0210a161, 0x6c054770,
    0x00000000, 0x00002c2c, 0x00100061, 0x28054770,
    0x00000000, 0x000004ac, 0x0210a161, 0x70054770,
    0x00000000, 0x000004ac, 0x38801c40, 0x22030126,
    0x8200a101, 0x00000000, 0x00000000, 0x00000000,
    0x38881c40, 0x6c03016e, 0x00141a70, 0x00018220,
    0x42463905, 0x00000100, 0x04140028, 0x0001c660,
    0x00000680, 0x00000680, 0x00100041, 0x20018220,
    0x01463905, 0x05cc05cc, 0x6820a241, 0x5cc03973,
    0x2c201f61, 0x0010352c, 0x00100049, 0x23058220,
    0x02463905, 0x000005cc, 0xb4001b61, 0x0010732a,
    0xb4081c61, 0x00107475, 0x02100041, 0x20018220,
    0x01463a05, 0x05cc05cc, 0xb4001b61, 0x0012232a,
    0x0210a249, 0x72058220, 0x02463a05, 0x000005cc,
    0x38001a40, 0x2a002637, 0xb4081a61, 0x00127275,
    0x38001a40, 0x2400372a, 0x3800a240, 0x3700283b,
    0x38081b40, 0x75006e77, 0x38081940, 0x62007779,
    0x38080040, 0x7700707b, 0x00141a70, 0x00018220,
    0x42462c05, 0x00000030, 0x04140028, 0x0001c660,
    0x00000298, 0x00000298, 0x00140069, 0x7d058660,
    0x02462c05, 0x00000002, 0x64a0a261, 0x00000072,
    0xb4001a61, 0x00107d74, 0xb4081b61, 0x00107e76,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x3d050230, 0x00447406, 0x00000000,
    0x02101a61, 0x03050230, 0x00447606, 0x00000000,
    0x38001a40, 0x3d003b05, 0x38081a40, 0x03007b07,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c331, 0x00000000, 0xfb080524, 0x00007214,
    0x0014a340, 0x06058660, 0x06467d05, 0x00000004,
    0xb4001961, 0x00100677, 0xb4081a61, 0x00100703,
    0x00101a61, 0x3e050230, 0x00447706, 0x00000000,
    0x8200a301, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x07050230, 0x00440306, 0x00000000,
    0x38001a40, 0x3e003b09, 0x38081a40, 0x07007b0b,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c431, 0x00000000, 0xfb080924, 0x00007214,
    0x0014a440, 0x0a058660, 0x06467d05, 0x00000008,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0xb4001961, 0x00100a04, 0xb4081a61, 0x00100b06,
    0x00101a61, 0x3f050230, 0x00440406, 0x00000000,
    0x8200a401, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x0b050230, 0x00440606, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x3f003b0d, 0x38081a40, 0x0b007b0f,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c231, 0x00000000, 0xfb080d24, 0x00007214,
    0x0014a240, 0x0e058660, 0x06467d05, 0x0000000c,
    0xb4001961, 0x00100e07, 0x8200a401, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x00100f09,
    0x00101a61, 0x40050230, 0x00440706, 0x00000000,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x0f050230, 0x00440906, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x40003b11, 0x8200a201, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x0f007b13,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c231, 0x00000000, 0xfb081124, 0x00007214,
    0x00140040, 0x2c058660, 0x06462c05, 0x00000080,
    0x00140027, 0x00014060, 0x00000000, 0xfffffd58,
    0x2c200061, 0x00103537, 0x00141970, 0x00018220,
    0x42463705, 0x00000120, 0x04140028, 0x0001c660,
    0x000002e0, 0x000002e0, 0x0014a269, 0x12058660,
    0x02463705, 0x00000002, 0x0014a261, 0x73054220,
    0x00000000, 0x7f800000, 0xb4001a61, 0x0010120a,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0xb4081b61, 0x0010130c, 0x00101a61, 0x41050230,
    0x00440a06, 0x00000000, 0x8200a201, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x14050230,
    0x00440c06, 0x00000000, 0x38001a40, 0x41002a16,
    0x38081a40, 0x14007918, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c531, 0x00000000,
    0xfb081624, 0x00007314, 0x0014a540, 0x17058660,
    0x06461205, 0x00000004, 0xb4001961, 0x0010170d,
    0xb4081a61, 0x0010180f, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x42050230,
    0x00440d06, 0x00000000, 0x8200a501, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x18050230,
    0x00440f06, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x42002a1a,
    0x38081a40, 0x1800791c, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c131, 0x00000000,
    0xfb081a24, 0x00007314, 0x0014a140, 0x1b058660,
    0x06461205, 0x00000008, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0xb4001961, 0x00101b10,
    0xb4081a61, 0x00101c14, 0x00101a61, 0x43050230,
    0x00441006, 0x00000000, 0x8200a101, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x1c050230,
    0x00441406, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x43002a1e,
    0x38081a40, 0x1c007920, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c631, 0x00000000,
    0xfb081e24, 0x00007314, 0x0014a640, 0x1f058660,
    0x06461205, 0x0000000c, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0xb4001961, 0x00101f15,
    0xb4081a61, 0x00102017, 0x00101a61, 0x44050230,
    0x00441506, 0x00000000, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x20050230,
    0x00441706, 0x00000000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x44002a3b,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x2000793d, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c231, 0x00000000,
    0xfb083b24, 0x00007314, 0x00140040, 0x37058660,
    0x06463705, 0x00000080, 0x00140027, 0x00014060,
    0x00000000, 0xfffffd10, 0x00140040, 0x39058660,
    0x06463905, 0x00000010, 0x00140027, 0x00014060,
    0x00000000, 0xfffff970, 0x00140070, 0x00018660,
    0x16463305, 0x00000000, 0x04140022, 0x0001c060,
    0x00000078, 0x00000078, 0x00100061, 0x45054770,
    0x00000000, 0x0005f82c, 0x0210a261, 0x3c054770,
    0x00000000, 0x0005f82c, 0x64a0a261, 0x00000074,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x38801b40, 0x4503013e, 0x38881b40, 0x3c030140,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c231, 0x00000000, 0xfb083e24, 0x00007414,
    0x00140025, 0x00004600, 0x00000000, 0x00000010,
    0x00140024, 0x0001c060, 0x00001de8, 0x00001de8,
    0x00100061, 0x49054770, 0x00000000, 0x00000008,
    0x02101f61, 0x35054770, 0x00000000, 0x00000008,
    0x00100061, 0x4b054770, 0x00000000, 0x00000010,
    0x02100061, 0x37054770, 0x00000000, 0x00000010,
    0x00100061, 0x4d054770, 0x00000000, 0x00000018,
    0x02100061, 0x39054770, 0x00000000, 0x00000018,
    0x00100061, 0x4f054770, 0x00000000, 0x00000020,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0x02101f61, 0x3b054770, 0x00000000, 0x00000020,
    0x00141f70, 0x00018660, 0x16463305, 0x00000000,
    0x04140022, 0x0001c060, 0x00000098, 0x00000098,
    0x02100061, 0x78054660, 0x00000000, 0x00000000,
    0x02100061, 0x7a054660, 0x00000000, 0x00000000,
    0x02100061, 0x7c054660, 0x00000000, 0x00000000,
    0x00100061, 0x77054660, 0x00000000, 0x00000000,
    0x00100061, 0x79054660, 0x00000000, 0x00000000,
    0x00100061, 0x7b054660, 0x00000000, 0x00000000,
    0x64a0a261, 0x00000075, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c231, 0x00000000,
    0xea087514, 0x00087734, 0x00140025, 0x00004600,
    0x00000000, 0x00001ca0, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x8000c731, 0x3f0c0000,
    0xe23e000c, 0x00000000, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x64a4a261, 0x00000040,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x402d0000, 0x0080002c, 0x00000000,
    0x80001966, 0x40258220, 0x02004024, 0x00000100,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8014c831, 0x00000000, 0x3008400c, 0x00000000,
    0x80140001, 0x00000000, 0xe0000000, 0x00000000,
    0x00100061, 0x51054770, 0x00000000, 0x00000024,
    0x0210a261, 0x3d054770, 0x00000000, 0x00000024,
    0x64a0a261, 0x00000041, 0x64a00061, 0x00000044,
    0x64a00061, 0x00000053, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x2c20a261, 0x00102f3f,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00141970, 0x00010220, 0x42463f05, 0x00000204,
    0x04140028, 0x0001c660, 0x00000220, 0x00000220,
    0x00141c40, 0x6d058660, 0x06465305, 0x00000001,
    0x00141e40, 0x6f058660, 0x06464405, 0x00000001,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x00141e40, 0x75058660, 0x06464105, 0x00000001,
    0xb4000061, 0x00103f18, 0xb408a161, 0x0010401a,
    0x00140040, 0x3f058660, 0x06463f05, 0x00000200,
    0x00101b61, 0x57050230, 0x00441806, 0x00000000,
    0x02101b61, 0x55050230, 0x00441a06, 0x00000000,
    0x00101a69, 0x5d058770, 0x02345705, 0x00000003,
    0x02101a69, 0x57058770, 0x02345505, 0x00000003,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x5d070159, 0x8200a901, 0x00000000,
    0x00000000, 0x00000000, 0x38881a40, 0x5707015b,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c931, 0x61240000, 0xfb005924, 0x00040000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0xb4008961, 0x0010616b, 0xb4088961, 0x00106265,
    0xb4014961, 0x0012636b, 0xb4094961, 0x00126465,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x51006b67, 0x8200a101, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x3d006569,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c131, 0x6b140000, 0xfb006724, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x00148170, 0x71058220, 0x62466b05, 0x00000100,
    0x0414a262, 0x73050220, 0x02465305, 0x00466d05,
    0x0014a270, 0x77058220, 0x32466b05, 0x00000006,
    0x04141a62, 0x53050220, 0x02467305, 0x00465305,
    0x00141a65, 0x00010220, 0x22467705, 0x00467105,
    0x04140062, 0x44050220, 0x02466f05, 0x00464405,
    0x00140070, 0x00018660, 0x26467705, 0x00000000,
    0x04140062, 0x41050220, 0x02464105, 0x00467505,
    0x00140027, 0x00014060, 0x00000000, 0xfffffdc0,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80141c61, 0x7a054660, 0x00000000, 0x00000000,
    0x7c200061, 0x0010417a, 0x8014a240, 0x7c058150,
    0x05586005, 0xffffffff, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80101961, 0x10014110,
    0x00000000, 0x1e801e80, 0x80100069, 0x10018510,
    0x01587c05, 0x00020002, 0x80100940, 0x10018110,
    0x01461001, 0x1e801e80, 0x80100961, 0x78050220,
    0x00710000, 0x00000000, 0x82100061, 0x10014110,
    0x00000000, 0x1e801e80, 0x82100069, 0x10018510,
    0x01587c85, 0x00020002, 0x82100940, 0x10018110,
    0x01461001, 0x1e801e80, 0x82100961, 0x79050220,
    0x00710000, 0x00000000, 0x80001961, 0x78054660,
    0x00000000, 0x00000000, 0x800c1a40, 0x79160660,
    0x06447906, 0x00447916, 0x800c1a40, 0x78160660,
    0x06447806, 0x00447816, 0x80081a40, 0x79270660,
    0x06427917, 0x00427927, 0x80081a40, 0x78270660,
    0x06427817, 0x00427827, 0x80081a40, 0x79370660,
    0x06427917, 0x00427937, 0x80081a40, 0x78370660,
    0x06427817, 0x00427837, 0x80081a40, 0x79450660,
    0x06007934, 0x00347945, 0x80081b40, 0x79c50660,
    0x060079b4, 0x003479c5, 0x80081b40, 0x78450660,
    0x06007834, 0x00347845, 0x80081c40, 0x78c50660,
    0x060078b4, 0x003478c5, 0x800c1b40, 0x79850660,
    0x06007974, 0x00467985, 0x800c1a40, 0x78850660,
    0x06007874, 0x00467885, 0x80101940, 0x79050660,
    0x060078f4, 0x00467905, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0xec840961, 0x0010401e,
    0x80000965, 0x1e058220, 0x02001e04, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xac200040, 0x41007805, 0xec840961, 0x0016701f,
    0x80000965, 0x1f058220, 0x02001f04, 0xffffffff,
    0xe8841965, 0x1f101e1f, 0x2c84194a, 0x00101f20,
    0xf3041940, 0x01f02003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x2ca00061, 0x0010037d,
    0xec840961, 0x00104021, 0x80000965, 0x21058220,
    0x02002104, 0xffffffff, 0x0014a261, 0x0c050120,
    0x00586005, 0x00000000, 0x2c841a4c, 0x00102108,
    0x80001969, 0x10018220, 0x02000804, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00001e00,
    0x80000961, 0x0a050220, 0x00010280, 0x00000000,
    0x00141b70, 0x00010660, 0x16460c05, 0x00000804,
    0x80001a69, 0x10018220, 0x02000a04, 0x00000002,
    0x80000961, 0x07050220, 0x00010280, 0x00000000,
    0x04140022, 0x0001c060, 0x00000060, 0x00000060,
    0x64a00061, 0x0000007a, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x2ca00061, 0x0010077d,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x42140000, 0xea187a14, 0x01007d14,
    0x00140025, 0x00004600, 0x00000000, 0x00001628,
    0xec840961, 0x00104022, 0x80000965, 0x22058220,
    0x02002204, 0xffffffff, 0x8014a261, 0x13054660,
    0x00000000, 0x00000000, 0x7c200061, 0x00104413,
    0x2c841a4c, 0x0010220d, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x10014110,
    0x00000000, 0x04c004c0, 0x80100069, 0x10018510,
    0x01587c05, 0x00020002, 0x80100940, 0x10018110,
    0x01461001, 0x04c004c0, 0x80100961, 0x11050220,
    0x00710000, 0x00000000, 0x82100061, 0x10014110,
    0x00000000, 0x04c004c0, 0x82100069, 0x10018510,
    0x01587c85, 0x00020002, 0x82100940, 0x10018110,
    0x01461001, 0x04c004c0, 0x82100961, 0x12050220,
    0x00710000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80008069, 0x10018220,
    0x02000d04, 0x00000002, 0x80000940, 0x10018220,
    0x02001000, 0x00001000, 0x80000961, 0x0f050220,
    0x00010100, 0x00000000, 0x80001a61, 0x11054660,
    0x00000000, 0x00000000, 0x800c1b40, 0x12160660,
    0x06441206, 0x00441216, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xaca00040, 0x78000f29,
    0x800c1b40, 0x11160660, 0x06441106, 0x00441116,
    0x80081b40, 0x12270660, 0x06421217, 0x00421227,
    0x80081a40, 0x11270660, 0x06421117, 0x00421127,
    0x80081a40, 0x12370660, 0x06421217, 0x00421237,
    0x80081a40, 0x11370660, 0x06421117, 0x00421137,
    0x80081a40, 0x12450660, 0x06001234, 0x00341245,
    0x80081b40, 0x12c50660, 0x060012b4, 0x003412c5,
    0x80081b40, 0x11450660, 0x06001134, 0x00341145,
    0x80081c40, 0x11c50660, 0x060011b4, 0x003411c5,
    0x800c1b40, 0x12850660, 0x06001274, 0x00461285,
    0x800c1a40, 0x11850660, 0x06001174, 0x00461185,
    0x80101940, 0x12050660, 0x060011f4, 0x00461205,
    0xec840961, 0x00104023, 0x80000965, 0x23058220,
    0x02002304, 0xffffffff, 0x0014a661, 0x1d050120,
    0x00586005, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xac200040, 0x44001118,
    0xec840961, 0x00167024, 0x80000965, 0x24058220,
    0x02002404, 0xffffffff, 0x00141b70, 0x00010660,
    0x16461d05, 0x00000d04, 0xe8841a65, 0x24102324,
    0x2c84194a, 0x00102425, 0xf3041940, 0x01f02516,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x2ca00061, 0x00101614, 0x80001969, 0x10018220,
    0x02000d04, 0x00000002, 0x80000940, 0x10018220,
    0x02001000, 0x00000400, 0x80000961, 0x1c050220,
    0x00010200, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02001c04, 0x00000002, 0x80000940, 0x10018220,
    0x02001000, 0x00000600, 0x80000961, 0x1a050220,
    0x00010000, 0x00000000, 0x04140022, 0x0001c060,
    0x00000060, 0x00000060, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x64a00061, 0x0040007e,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x2ca00061, 0x00101a03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c031, 0x45140000,
    0xea187e14, 0x01000314, 0x00140025, 0x00004600,
    0x00000000, 0x000012b0, 0xec840961, 0x00104026,
    0x80000965, 0x26058220, 0x02002604, 0xffffffff,
    0x80140061, 0x24054660, 0x00000000, 0x00000000,
    0x7c200061, 0x00105324, 0x2c841a4c, 0x0010261e,
    0x80101a61, 0x10014110, 0x00000000, 0x09000900,
    0x80100069, 0x10018510, 0x01587c05, 0x00020002,
    0x80100940, 0x10018110, 0x01461001, 0x09000900,
    0x80100961, 0x22050220, 0x00710000, 0x00000000,
    0x82100061, 0x10014110, 0x00000000, 0x09000900,
    0x82100069, 0x10018510, 0x01587c85, 0x00020002,
    0x82100940, 0x10018110, 0x01461001, 0x09000900,
    0x82100961, 0x23050220, 0x00710000, 0x00000000,
    0x80014069, 0x10018220, 0x02001e04, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00001000,
    0x80000961, 0x20050220, 0x00010280, 0x00000000,
    0x80001a61, 0x22054660, 0x00000000, 0x00000000,
    0x800c1b40, 0x23160660, 0x06442306, 0x00442316,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xaca00040, 0x1100202b, 0x800c1b40, 0x22160660,
    0x06442206, 0x00442216, 0x80081b40, 0x23270660,
    0x06422317, 0x00422327, 0x80081a40, 0x22270660,
    0x06422217, 0x00422227, 0x80081a40, 0x23370660,
    0x06422317, 0x00422337, 0x80081a40, 0x22370660,
    0x06422217, 0x00422237, 0x80081a40, 0x23450660,
    0x06002334, 0x00342345, 0x80081b40, 0x23c50660,
    0x060023b4, 0x003423c5, 0x80081b40, 0x22450660,
    0x06002234, 0x00342245, 0x80081c40, 0x22c50660,
    0x060022b4, 0x003422c5, 0x800c1b40, 0x23850660,
    0x06002374, 0x00462385, 0x800c1a40, 0x22850660,
    0x06002274, 0x00462285, 0x80101940, 0x23050660,
    0x060022f4, 0x00462305, 0xec840961, 0x0010403f,
    0x80000965, 0x3f058220, 0x02003f04, 0xffffffff,
    0x00140061, 0x42050120, 0x00586005, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xac200040, 0x5300222d, 0xec840961, 0x00167040,
    0x80000965, 0x40058220, 0x02004004, 0xffffffff,
    0x00141b70, 0x00010660, 0x16464205, 0x00001e04,
    0xe8841a65, 0x40103f40, 0x2c84194a, 0x00104041,
    0xf3041940, 0x01f04127, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x2ca00061, 0x00102725,
    0x80001969, 0x10018220, 0x02001e04, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x41050220, 0x00010280, 0x00000000,
    0x80001969, 0x10018220, 0x02004104, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x3f050220, 0x00010280, 0x00000000,
    0x04140022, 0x0001c060, 0x00000050, 0x00000050,
    0x64a0a061, 0x00800004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x2ca00061, 0x00103f06,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c031, 0x54140000, 0xea180414, 0x01000614,
    0x00140025, 0x00004600, 0x00000000, 0x00000f78,
    0xec840961, 0x00104042, 0x80000965, 0x42058220,
    0x02004204, 0xffffffff, 0x2c84194c, 0x00104243,
    0x80012069, 0x10018220, 0x02004304, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00001400,
    0x80000961, 0x45050220, 0x00010200, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xaca00040, 0x2200452d, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ca31, 0x460c0000,
    0xe23e000c, 0x00000000, 0x80008a01, 0x00000000,
    0x00000000, 0x00000000, 0x64a40061, 0x00000053,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x532d0000, 0x0080002c, 0x00000000,
    0x80001966, 0x53258220, 0x02005324, 0x00000100,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8014cb31, 0x00000000, 0x3008530c, 0x00000000,
    0x80140001, 0x00000000, 0xe0000000, 0x00000000,
    0x8014a061, 0x07054220, 0x00000000, 0x00000000,
    0x00100061, 0x57054770, 0x00000000, 0x00000034,
    0x02100061, 0x43054770, 0x00000000, 0x00000034,
    0x0010a961, 0x59054770, 0x00000000, 0x00000030,
    0x82001f01, 0x00000000, 0x00000000, 0x00000000,
    0x02100061, 0x45054770, 0x00000000, 0x00000030,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x8000cc31, 0x5f0c0000, 0xea00070c, 0x00340000,
    0x80008c01, 0x00000000, 0x00000000, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x53050230, 0x00005f04, 0x00000000,
    0x02100061, 0x3f050230, 0x00005f04, 0x00000000,
    0x00100061, 0x6c050230, 0x00005f14, 0x00000000,
    0x0210a961, 0x5b050230, 0x00005f14, 0x00000000,
    0x38001a40, 0x6c005355, 0x82001a01, 0x00000000,
    0x00000000, 0x00000000, 0x38080040, 0x5b003f41,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00141a70, 0x00010220, 0x42462f05, 0x00000204,
    0x04140028, 0x0001c660, 0x00000be0, 0x00000be0,
    0x80008101, 0x00000000, 0x00000000, 0x00000000,
    0x8200a601, 0x00000000, 0x00000000, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x80008d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x80008101, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00102f1b, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0xb4080061, 0x0010301d,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x15050230, 0x00441b06, 0x00000000,
    0x8200a101, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x17050230, 0x00441d06, 0x00000000,
    0x00101a69, 0x6d058770, 0x02341505, 0x00000003,
    0x02101a69, 0x5c058770, 0x02341705, 0x00000003,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x6d07010b, 0x8200a201, 0x00000000,
    0x00000000, 0x00000000, 0x38881a40, 0x5c07010d,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014ce31, 0x03240000, 0xfb000b24, 0x00040000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0xb4008e61, 0x00100307, 0x82008d01, 0x00000000,
    0x00000000, 0x00000000, 0xb4088e61, 0x00100409,
    0xb4014e61, 0x00120507, 0xb4094e61, 0x00120609,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x51000711, 0x82001a01, 0x00000000,
    0x00000000, 0x00000000, 0x38080040, 0x3d000913,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014cf31, 0x0b340000, 0xfb001124, 0x00080000,
    0x00148f70, 0x00018220, 0x32460b05, 0x00000006,
    0x04140022, 0x0001c060, 0x00000348, 0x00000278,
    0x0014af40, 0x11058660, 0x06462d05, 0x00000001,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x8200a601, 0x00000000, 0x00000000, 0x00000000,
    0x0014af40, 0x13058660, 0x06462b05, 0x00000001,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x8200a601, 0x00000000, 0x00000000, 0x00000000,
    0x00140070, 0x00018220, 0x62460b05, 0x00000100,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00102d1f, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0xb4080061, 0x00102e21,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00102b23, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0xb4080061, 0x00102c25,
    0x04141f62, 0x2d050220, 0x02462d05, 0x00461105,
    0x04141f62, 0x2b050220, 0x02461305, 0x00462b05,
    0x00101e61, 0x1b050230, 0x00441f06, 0x00000000,
    0x02101e61, 0x11050230, 0x00442106, 0x00000000,
    0x00101e61, 0x1f050230, 0x00442306, 0x00000000,
    0x02101e61, 0x13050230, 0x00442506, 0x00000000,
    0x38001c40, 0x1b005521, 0x38081c40, 0x1100411b,
    0x38001c40, 0x1f005311, 0x38081c40, 0x13003f1f,
    0x04101a62, 0x13050220, 0x02441116, 0x00442116,
    0x04100062, 0x23050220, 0x02441106, 0x00442106,
    0x06101b62, 0x14050220, 0x02441f16, 0x00441b16,
    0x06100062, 0x24050220, 0x02441f06, 0x00441b06,
    0x00101b41, 0x20018220, 0x01462305, 0x00580058,
    0x68201b41, 0x05801362, 0x68201b41, 0x05802360,
    0x00100049, 0x5d058220, 0x02462305, 0x00000058,
    0xb4001a61, 0x0010601d, 0x8200a101, 0x00000000,
    0x00000000, 0x00000000, 0x82001b01, 0x00000000,
    0x00000000, 0x00000000, 0xb4080061, 0x00106119,
    0x02100041, 0x20018220, 0x01462405, 0x00580058,
    0x02100049, 0x5e058220, 0x02462405, 0x00000058,
    0xac201940, 0x62005d64, 0xb4001961, 0x0012641d,
    0xb4081a61, 0x00126519, 0x38801a40, 0x1d0d0125,
    0x8200a601, 0x00000000, 0x00000000, 0x00000000,
    0x38881a40, 0x190d0127, 0x00140024, 0x0001c060,
    0x000000e0, 0x000000e0, 0x00140040, 0x5b058660,
    0x06462905, 0x00000001, 0x00100041, 0x20018220,
    0x01462905, 0x00580058, 0x6820a141, 0x05802966,
    0x00100049, 0x6e058220, 0x02462905, 0x00000058,
    0xb4001a61, 0x0010666f, 0x8200a101, 0x00000000,
    0x00000000, 0x00000000, 0xb4081b61, 0x00106768,
    0x02100041, 0x20018220, 0x01462a05, 0x00580058,
    0xb4001b61, 0x00126e6f, 0x02100049, 0x65058220,
    0x02462a05, 0x00000058, 0x2c201f61, 0x00105b29,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x6f0d0125, 0xb4081b61, 0x00126568,
    0x8200a601, 0x00000000, 0x00000000, 0x00000000,
    0x38881940, 0x680d0127, 0x00140025, 0x00004600,
    0x00000000, 0x00000668, 0x00101c69, 0x70058770,
    0x02341505, 0x00000006, 0x0210a169, 0x69058770,
    0x02341705, 0x00000006, 0x38801a40, 0x7008015d,
    0x38881a40, 0x6908015b, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x49005d11,
    0x8200af01, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x35005b13, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c031, 0x15240000,
    0xfb001124, 0x00040000, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x0014c131, 0x00000000,
    0xfb082524, 0x00041524, 0x3800a040, 0x4b005d11,
    0x3808a040, 0x37005b13, 0x3800a140, 0x49002515,
    0x3808a140, 0x35002717, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0014c231, 0x19240000,
    0xfb001124, 0x00040000, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c331, 0x00000000,
    0xfb081524, 0x00041924, 0x3800a340, 0x4d005d15,
    0x3808a340, 0x39005b17, 0x3800a340, 0x4b002519,
    0x3808a340, 0x3700271b, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0014c431, 0x1d240000,
    0xfb001524, 0x00040000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0xb4008461, 0x00101d11,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0xb4088461, 0x00101e13, 0xb4014461, 0x00121f11,
    0xb4094461, 0x00122013, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x0014c531, 0x00000000,
    0xfb081924, 0x00041d24, 0x3800a440, 0x4f005d15,
    0x3808a440, 0x3b005b17, 0x3800a540, 0x4d002519,
    0x3808a540, 0x3900271b, 0x2c08a561, 0x0010041e,
    0x2c08a561, 0x00100620, 0x2c00a561, 0x0010031d,
    0x2c00a561, 0x0010051f, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c631, 0x03240000,
    0xfb001524, 0x00040000, 0x2c088661, 0x00100422,
    0x82008601, 0x00000000, 0x00000000, 0x00000000,
    0x2c080061, 0x00100624, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x2c000061, 0x00100321,
    0x2c008661, 0x00100523, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c631, 0x00000000,
    0xfb081924, 0x000c1d44, 0x38000040, 0x57002503,
    0x38080040, 0x43002705, 0x2c08a661, 0x00100c16,
    0x8200a601, 0x00000000, 0x00000000, 0x00000000,
    0x2c088f61, 0x00101018, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x2c088f61, 0x00100e1a,
    0x2c00a661, 0x00100b15, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x2c008f61, 0x00100f17,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x2c008f61, 0x00100d19, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c731, 0x00000000,
    0xfb080324, 0x00081534, 0x3800a740, 0x59005d03,
    0x3808a740, 0x45005b05, 0x3800a740, 0x59002515,
    0x3808a740, 0x45002717, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0014c831, 0x19140000,
    0xfb000324, 0x00000000, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c931, 0x00000000,
    0xfb081524, 0x00001914, 0x3800a840, 0x47005d03,
    0x3808a840, 0x31005b05, 0x3800a940, 0x47002515,
    0x3808a940, 0x31002717, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0014c031, 0x19240000,
    0xfb000324, 0x00040000, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c131, 0x00000000,
    0xfb081524, 0x00041924, 0x00140070, 0x00018220,
    0x32460b05, 0x00000100, 0x04140022, 0x0001c060,
    0x000001d8, 0x000001d8, 0x64a0a161, 0x0010001a,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014ca31, 0x00000000, 0xfb081124, 0x00001a14,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x0014c131, 0x15440000, 0xfb000724, 0x000c0000,
    0x3800a140, 0x4b00070b, 0x3808a140, 0x3700090d,
    0x3800aa40, 0x4f001125, 0x3808aa40, 0x3b001327,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x0014cd31, 0x03440000, 0xfb000b24, 0x000c0000,
    0x8200a601, 0x00000000, 0x00000000, 0x00000000,
    0x2c088161, 0x0010161e, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x2c088161, 0x00101820,
    0x8200a601, 0x00000000, 0x00000000, 0x00000000,
    0x2c088161, 0x00101a22, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x2c008161, 0x0010151d,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x2c008161, 0x0010171f, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x2c008161, 0x00101921,
    0x8200a601, 0x00000000, 0x00000000, 0x00000000,
    0x2c088d61, 0x00100424, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x2c008d61, 0x00100323,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c631, 0x00000000, 0xfb082524, 0x000c1d44,
    0x3800ad40, 0x1100590b, 0x3808ad40, 0x1300450d,
    0x2c088d61, 0x00100610, 0x2c008d61, 0x0010050f,
    0x2c008d61, 0x00100711, 0x2c088d61, 0x00100812,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c231, 0x00000000, 0xfb080b24, 0x00040f24,
    0x00140025, 0x00004600, 0x00000000, 0x00000020,
    0x00140040, 0x2f058660, 0x06462f05, 0x00000200,
    0x00140027, 0x00014060, 0x00000000, 0xfffff400,
    0x00140070, 0x00018660, 0x16463305, 0x00000000,
    0x04140022, 0x0001c060, 0x00000128, 0x00000128,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x3880a140, 0x4b03016a, 0x38880040, 0x3703016c,
    0x80008101, 0x00000000, 0x00000000, 0x00000000,
    0x2ca00061, 0x00105f1b, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x2ca00061, 0x00115f1d,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c131, 0x00000000, 0xfb086a24, 0x00041b24,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0xaca00040, 0x5f405f20, 0x8014a161, 0x1c054220,
    0x00000000, 0x00000008, 0x3880a140, 0x4f03016c,
    0x38880040, 0x3b03016e, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c131, 0x6b0c0000,
    0xea001c0c, 0x00340000, 0x82008101, 0x00000000,
    0x00000000, 0x00000000, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x2c880061, 0x00106b1f,
    0x2c80a161, 0x00106b1e, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c631, 0x00000000,
    0xfb086c24, 0x00041e24, 0x00140025, 0x00004600,
    0x00000000, 0x00000010, 0x00140025, 0x00004600,
    0x00000000, 0x00000010, 0x2c10a061, 0x0010007e,
    0x80141931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_categorize_builds_and_init_scheduler = {
   .prog_data = {
      .base.nr_params = 17,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 4,
      .base.total_scratch = 0,
      .base.total_shared = 12,
      .base.program_size = 10224,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_categorize_builds_and_init_scheduler_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_categorize_builds_and_init_scheduler_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 512, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 4,
      .prog_spilled = 0,
      .uses_barrier = true,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 17,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 36,
   .arg_count = 5,
   .args = gfx20_bvh_build_BFS_categorize_builds_and_init_scheduler_args,
   .code = gfx20_bvh_build_BFS_categorize_builds_and_init_scheduler_code,
};
const char *gfx20_bvh_build_BFS_categorize_builds_and_init_scheduler_sha1 = "c3c3bddabbe40326710b1a8053272d12e3437806";

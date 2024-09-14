#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_leaf_primref_to_procedurals_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_leaf_primref_to_procedurals_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_leaf_primref_to_procedurals_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
   { 44, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g116<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g48<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g116UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g117<1>UD       g116<0,1,0>UD   0x00000040UD    { align1 WE_all 1N $0.src compacted };
shl(16)         g73<1>D         g48<8,8,1>D     0x00000004UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g3UD            g117UD          nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(16)         g98<1>D         g73<1,1,0>D     16D             { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g86<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g88<1>UD        g86<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g92<2>UD        g86<4,4,1>UD                    { align1 1Q };
mov(8)          g94<2>UD        g87<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.z.f0.0(16)  null<1>D        g3.2<0,1,0>D    8D              { align1 1H };
add(16)         g90<1>D         -g88<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g92.1<2>UD      g90<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g94.1<2>UD      g91<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g96UD           g92UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sel.l(16)       g75<1>UD        g98<1,1,0>UD    g96<1,1,0>UD    { align1 1H @7 $2.dst compacted };
mul(16)         g89<1>D         g3.2<0,1,0>D    g96.1<16,8,2>UW { align1 1H };
mul(16)         g99<1>D         g3.2<0,1,0>D    g96<16,8,2>UW   { align1 1H };
add(16)         g99.1<2>UW      g99.1<16,8,2>UW g89<16,8,2>UW   { align1 1H I@1 };
(-f0.0) sel(16) g6<1>UD         g99<8,8,1>UD    0x00000004UD    { align1 1H I@1 };
cmp.nz.f0.0(16) null<1>D        g73<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
add(16)         g100<1>D        g73<1,1,0>D     -1D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mul(16)         g102<1>D        g100<8,8,1>D    g3.4<0,1,0>UW   { align1 1H I@1 };
mul(16)         g90<1>D         g100<8,8,1>D    g3.5<0,1,0>UW   { align1 1H };
add(16)         g102.1<2>UW     g102.1<16,8,2>UW g90<16,8,2>UW  { align1 1H I@1 };
add(16)         g104<1>D        g102<1,1,0>D    g6<1,1,0>D      { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g4<1>UD         g104<1,1,0>UD   g102<1,1,0>UD   { align1 1H I@1 compacted };
add(16)         g108<1>D        g2.4<0,1,0>D    g104<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g114<2>UD       g108<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g116<2>UD       g109<4,4,1>UD                   { align1 2Q };
add3(16)        g112<1>D        g2.5<0,1,0>D    -g4<8,8,1>D     -g110<1,1,1>D { align1 1H I@3 };
mov(8)          g114.1<2>UD     g112<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g116.1<2>UD     g113<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g68UD           g114UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g68<1>UD        0xffffffffUD                    { align1 1H $1.dst };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.ge.f0.0(16) g115<1>UD       g73<1,1,0>UD    g96<1,1,0>UD    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mul(16)         g117<1>D        g73<8,8,1>D     g3.4<0,1,0>UW   { align1 1H };
mul(16)         g91<1>D         g73<8,8,1>D     g3.5<0,1,0>UW   { align1 1H $2.src };
add(16)         g117.1<2>UW     g117.1<16,8,2>UW g91<16,8,2>UW  { align1 1H I@1 };
add(16)         g119<1>D        g117<1,1,0>D    g6<1,1,0>D      { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g117<1,1,0>UD   { align1 1H I@1 compacted };
add(16)         g123<1>D        g2.4<0,1,0>D    g119<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g125<1>UD       g123<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g8<2>UD         g123<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g10<2>UD        g124<4,4,1>UD                   { align1 2Q $3.src };
add3(16)        g106<1>D        g2.5<0,1,0>D    -g121<8,8,1>D   -g125<1,1,1>D { align1 1H I@3 };
mov(8)          g8.1<2>UD       g106<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g10.1<2>UD      g107<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g12UD           g8UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.nz.f0.0(16) g70<1>D         g12<1,1,0>D     g68<1,1,0>D     { align1 1H $3.dst compacted };

LABEL3:
endif(16)       JIP:  LABEL5                                    { align1 1H };
or.nz.f0.0(16)  null<1>UD       g70<8,8,1>UD    g115<8,8,1>UD   { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL5        UIP:  LABEL5              { align1 1H };
add(16)         g73<1>D         g73<1,1,0>D     1D              { align1 1H compacted };

LABEL5:
while(16)       JIP:  LABEL2                                    { align1 1H };
add(16)         g13<1>D         g75<1,1,0>D     -1D             { align1 1H I@7 compacted };
mul(16)         g15<1>D         g13<8,8,1>D     g3.4<0,1,0>UW   { align1 1H I@1 };
mul(16)         g92<1>D         g13<8,8,1>D     g3.5<0,1,0>UW   { align1 1H $2.src };
add(16)         g15.1<2>UW      g15.1<16,8,2>UW g92<16,8,2>UW   { align1 1H I@1 };
add(16)         g17<1>D         g15<1,1,0>D     g6<1,1,0>D      { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g19<1>UD        g17<1,1,0>UD    g15<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g21<1>D         g2.4<0,1,0>D    g17<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g23<1>UD        g21<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g27<2>UD        g21<4,4,1>UD                    { align1 1Q };
mov(8)          g29<2>UD        g22<4,4,1>UD                    { align1 2Q };
add3(16)        g25<1>D         g2.5<0,1,0>D    -g19<8,8,1>D    -g23<1,1,1>D { align1 1H I@3 };
mov(8)          g27.1<2>UD      g25<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g29.1<2>UD      g26<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g27UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };

LABEL9:
cmp.ge.f0.0(16) g33<1>UD        g75<1,1,0>UD    g96<1,1,0>UD    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL6              { align1 1H };
else(16)        JIP:  LABEL6          UIP:  LABEL6              { align1 1H };

LABEL7:
mul(16)         g35<1>D         g75<8,8,1>D     g3.4<0,1,0>UW   { align1 1H };
mul(16)         g93<1>D         g75<8,8,1>D     g3.5<0,1,0>UW   { align1 1H $2.src };
add(16)         g35.1<2>UW      g35.1<16,8,2>UW g93<16,8,2>UW   { align1 1H I@1 };
add(16)         g37<1>D         g35<1,1,0>D     g6<1,1,0>D      { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g39<1>UD        g37<1,1,0>UD    g35<1,1,0>UD    { align1 1H I@1 compacted };
add(16)         g41<1>D         g2.4<0,1,0>D    g37<1,1,0>D     { align1 1H compacted };
cmp.l.f0.0(16)  g43<1>UD        g41<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g47<2>UD        g41<4,4,1>UD                    { align1 1Q $5.src };
mov(8)          g49<2>UD        g42<4,4,1>UD                    { align1 2Q $5.src };
add3(16)        g45<1>D         g2.5<0,1,0>D    -g39<8,8,1>D    -g43<1,1,1>D { align1 1H I@3 };
mov(8)          g47.1<2>UD      g45<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g49.1<2>UD      g46<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g51UD           g47UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
cmp.nz.f0.0(16) g71<1>D         g51<1,1,0>D     g31<1,1,0>D     { align1 1H $5.dst compacted };

LABEL6:
endif(16)       JIP:  LABEL8                                    { align1 1H };
or.nz.f0.0(16)  null<1>UD       g71<8,8,1>UD    g33<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL8        UIP:  LABEL8              { align1 1H };
add(16)         g75<1>D         g75<1,1,0>D     1D              { align1 1H compacted };

LABEL8:
while(16)       JIP:  LABEL9                                    { align1 1H };
mov(8)          g68<1>UW        0x76543210V                     { align1 WE_all 1Q $1.dst };
mov(16)         g67<2>B         3W                              { align1 1H };
add(8)          g68.8<1>UW      g68<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g8<1>UD         g68<8,8,1>UW                    { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
and(16)         g10<1>UD        g8<1,1,0>UD     0x0000000fUD    { align1 1H I@1 compacted };
add(16)         g106<1>D        g73<1,1,0>D     g10<1,1,0>D     { align1 1H I@1 compacted };

LABEL23:
add(16)         g69<1>D         g75<1,1,0>D     g10<1,1,0>D     { align1 1H @6 $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g71<1>UD        g69<1,1,0>UD    g75<1,1,0>UD    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g77<1>UD        g106<1,1,0>UD   g69<1,1,0>UD    { align1 1H I@3 compacted };
mov(16)         g73<1>D         -g71<8,8,1>D                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
and(16)         g81<1>UD        ~g71<8,8,1>D    g77<8,8,1>UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.g.f0.0(16)  g87<1>UD        g73<1,1,0>UD    0x00000000UD    { align1 1H I@2 compacted };
or.nz.f0.0(16)  null<1>UD       g87<8,8,1>UD    g81<8,8,1>UD    { align1 1H I@1 };
(-f0.0) break(16) JIP:  LABEL10       UIP:  LABEL10             { align1 1H };
mul(16)         g88<1>D         g106<8,8,1>D    g3.4<0,1,0>UW   { align1 1H };
mul(16)         g94<1>D         g106<8,8,1>D    g3.5<0,1,0>UW   { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g88.1<2>UW      g88.1<16,8,2>UW g94<16,8,2>UW   { align1 1H I@1 };
add(16)         g90<1>D         g88<1,1,0>D     g3.3<0,1,0>D    { align1 1H I@1 compacted };
add(16)         g104<1>D        g88<1,1,0>D     g6<1,1,0>D      { align1 1H compacted };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g88<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g94<1>D         g2.4<0,1,0>D    g90<1,1,0>D     { align1 1H compacted };
add(16)         g108<1>D        g2.4<0,1,0>D    g104<1,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g96<1>UD        g94<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g100<2>UD       g94<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g102<2>UD       g95<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g4<1>UD         g104<1,1,0>UD   g88<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g12<2>UD        g108<4,4,1>UD                   { align1 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $9.src };
mov(8)          g14<2>UD        g109<4,4,1>UD                   { align1 2Q I@6 };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H compacted };
add3(16)        g98<1>D         g2.5<0,1,0>D    -g92<8,8,1>D    -g96<1,1,1>D { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g115<1>UD       g106<1,1,0>UD   g75<1,1,0>UD    { align1 1H compacted };
add3(16)        g112<1>D        g2.5<0,1,0>D    -g4<8,8,1>D     -g110<1,1,1>D { align1 1H I@3 };
mov(8)          g100.1<2>UD     g98<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g102.1<2>UD     g99<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g12.1<2>UD      g112<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g14.1<2>UD      g113<4,4,1>UD                   { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g54UD           g100UD          nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g113UD          g12UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.z.f0.0(16)  g117<1>D        g113<1,1,0>D    g113<0,1,0>D    { align1 1H $9.dst compacted };
and.nz.f0.0(16) null<1>UD       g115<8,8,1>UD   g117<8,8,1>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(1)          g101<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g101<1>UD       g101<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(1)          g102<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g102<1>UD       g102<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g102<1>UD       g101<0,1,0>UD   g102<0,1,0>UD   { align1 WE_all 1N I@1 compacted };
mov(1)          g118<1>UD       g102<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g77<1>UD        g118<0,1,0>UD                   { align1 1H };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g77<1>UD        0x00000000UD                    { align1 1H I@2 };

LABEL11:
endif(16)       JIP:  LABEL10                                   { align1 1H };
shl(16)         g119<1>D        g10<8,8,1>D     0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g119UD          g54UD           0x04000504                0x00000080
                            slm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
cmp.l.f0.0(16)  null<1>UD       g10<8,8,1>UD    0x00000008UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g10<8,8,1>UD    g77<0,1,0>UD    { align1 1H I@5 };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
send(16)        g85UD           g119UD          nullUD          0x04200500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
shl(16)         g120<1>D        g85<8,8,1>D     0x00000005UD    { align1 1H $6.dst };
shr(16)         g122<1>UD       g85<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
add(16)         g124<1>D        g2.2<0,1,0>D    g120<1,1,0>D    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g126<1>UD       g124<1,1,0>UD   g2.2<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g13<2>UD        g124<4,4,1>UD                   { align1 1Q $9.src };
mov(8)          g15<2>UD        g125<4,4,1>UD                   { align1 2Q $9.src };
add(16)         g19<1>D         g124<1,1,0>D    16D             { align1 1H $9.dst compacted };
add3(16)        g17<1>D         g2.3<0,1,0>D    g122<8,8,1>D    -g126<1,1,1>D { align1 1H @4 $9.dst };
cmp.l.f0.0(16)  g21<1>UD        g19<1,1,0>UD    g124<1,1,0>UD   { align1 1H @2 $9.dst compacted };
mov(8)          g25<2>UD        g19<4,4,1>UD                    { align1 1Q $4.src };
mov(8)          g27<2>UD        g20<4,4,1>UD                    { align1 2Q $4.src };
mov(8)          g13.1<2>UD      g17<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g15.1<2>UD      g18<4,4,1>UD                    { align1 2Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
add(16)         g29<1>D         -g21<1,1,0>D    g17<1,1,0>D     { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g17UD           g13UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
mov(8)          g25.1<2>UD      g29<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g27.1<2>UD      g30<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g29UD           g25UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
and(16)         g39<1>UD        g23<8,8,1>UD    0x07ffffffUD    { align1 1H $9.dst };
shr(16)         g83<1>UD        g35<1,1,0>UD    0x0000001dUD    { align1 1H $4.dst compacted };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
mov(16)         g39<1>UD        0xffffffffUD                    { align1 1H I@3 };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
add(16)         g30<1>D         g8<1,1,0>D      15D             { align1 1H $4.dst compacted };
add(16)         g32<1>D         g8<1,1,0>D      -1D             { align1 1H $4.dst compacted };
add(16)         g43<1>D         g8<1,1,0>D      1D              { align1 1H compacted };
cmp.l.f0.0(16)  null<1>D        g30<8,8,1>D     16D             { align1 1H I@3 };
mov(16)         a0<1>UW         0x04e0UW                        { align1 WE_all 1H @3 $4.dst };
shl(16)         a0<1>UW         g32<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x04e0UW        { align1 1H A@1 };
mov(16)         g34<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
mov(16)         a0<1>UW         0x04e0UW                        { align1 WE_all 1H I@3 };
shl(16)         a0<1>UW         g43<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x04e0UW        { align1 1H A@1 };
mov(16)         g45<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
(-f0.0) sel(16) g41<1>UD        g34<8,8,1>UD    0xffffffffUD    { align1 1H I@2 };
cmp.l.f0.0(16)  g47<1>D         g43<1,1,0>D     16D             { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
(+f0.0) sel(16) g49<1>UD        g45<8,8,1>UD    0xffffffffUD    { align1 1H $5.dst };
cmp.nz.f0.0(16) g51<1>D         g41<1,1,0>D     g39<1,1,0>D     { align1 1H @3 $5.dst compacted };
cmp.nz.f0.0(16) null<1>D        g47<8,8,1>D     0D              { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g53<1>D         -g51<8,8,1>D                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         a0<1>UW         0x06a0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g43<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x06a0UW        { align1 1H A@1 };
mov(16)         g55<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
(+f0.0) sel(16) g69<1>UD        g55<1,1,0>UD    0x00000000UD    { align1 1H I@1 compacted };
cmp.nz.f0.0(16) null<1>D        g51<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g71<1>UD        g10<1,1,0>UD    0x00000000UD    { align1 1H compacted };
mov(8)          g88<2>UD        g71<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g73<2>UD        g72<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g88.1<2>UD      0x00000000UD                    { align1 1Q I@2 };
mov(8)          g73.1<2>UD      0x00000000UD                    { align1 2Q I@2 };
mov(8)          g97<2>UD        0x00000000UD                    { align1 WE_all 1Q I@2 };
mov(8)          g97<2>UD        g88<8,4,2>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $8.src };
mov(8)          g99<2>UD        0x00000000UD                    { align1 WE_all 2Q I@2 };
mov(8)          g99<2>UD        g73<8,4,2>UD                    { align1 2Q };
mov(8)          g64<2>UD        g97<8,4,2>UD                    { align1 WE_all 1Q I@2 };
mov(8)          g97.1<2>UD      0x00000000UD                    { align1 WE_all 1Q };
mov(8)          g97.1<2>UD      g88.1<8,4,2>UD                  { align1 1Q };
mov(8)          g37<2>UD        g99<8,4,2>UD                    { align1 WE_all 2Q I@3 };
mov(8)          g99.1<2>UD      0x00000000UD                    { align1 WE_all 2Q };
mov(8)          g99.1<2>UD      g73.1<8,4,2>UD                  { align1 2Q };
mov(8)          g64.1<2>UD      g97.1<8,4,2>UD                  { align1 WE_all 1Q I@3 };
mov(8)          g37.1<2>UD      g99.1<8,4,2>UD                  { align1 WE_all 2Q I@2 };
cmp.g.f0.0(4)   null<1>UD       g64<8,2,4>UD    g64.2<8,2,4>UD  { align1 WE_all 1N I@2 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g64.1<8,2,4>UD  g64.3<8,2,4>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g64.1<8,2,4>UD  g64.3<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g64.2<4>UD      g64<8,2,4>UD                    { align1 WE_all 1N };
(+f0.0) mov(4)  g64.3<4>UD      g64.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g64.2<0,1,0>UD  g64.4<4,2,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g64.3<0,1,0>UD  g64.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g64.3<0,1,0>UD  g64.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g64.4<2>UD      g64.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g64.5<2>UD      g64.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g65.2<0,1,0>UD  g65.4<4,2,2>UD  { align1 WE_all 1N I@6 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g65.3<0,1,0>UD  g65.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g65.3<0,1,0>UD  g65.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g65.4<2>UD      g65.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g65.5<2>UD      g65.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g64.6<0,1,0>UD  g65<8,4,2>UD    { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g64.7<0,1,0>UD  g65.1<8,4,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g64.7<0,1,0>UD  g65.1<8,4,2>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g65<2>UD        g64.6<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(4)  g65.1<2>UD      g64.7<0,1,0>UD                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(8)          g87<1>D         g10<8,8,1>D     -g64<8,4,2>D    { align1 1Q };
cmp.g.f0.0(4)   null<1>UD       g37<8,2,4>UD    g37.2<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) cmp.z.f0.0(4) null<1>UD g37.1<8,2,4>UD  g37.3<8,2,4>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g37.1<8,2,4>UD  g37.3<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g37.2<4>UD      g37<8,2,4>UD                    { align1 WE_all 1N };
(+f0.0) mov(4)  g37.3<4>UD      g37.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g37.2<0,1,0>UD  g37.4<4,2,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g37.3<0,1,0>UD  g37.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g37.3<0,1,0>UD  g37.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g37.4<2>UD      g37.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g37.5<2>UD      g37.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g38.2<0,1,0>UD  g38.4<4,2,2>UD  { align1 WE_all 1N I@6 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g38.3<0,1,0>UD  g38.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g38.3<0,1,0>UD  g38.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g38.4<2>UD      g38.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g38.5<2>UD      g38.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g37.6<0,1,0>UD  g38<8,4,2>UD    { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g37.7<0,1,0>UD  g38.1<8,4,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g37.7<0,1,0>UD  g38.1<8,4,2>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g38<2>UD        g37.6<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(4)  g38.1<2>UD      g37.7<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(8)   null<1>UD       g65.6<0,1,0>UD  g37<8,4,2>UD    { align1 WE_all 1Q I@1 };
(+f0.0) cmp.z.f0.0(8) null<1>UD g65.7<0,1,0>UD  g37.1<8,4,2>UD  { align1 WE_all 1Q };
(-f0.0) cmp.g.f0.0(8) null<1>UD g65.7<0,1,0>UD  g37.1<8,4,2>UD  { align1 WE_all 1Q };
(+f0.0) mov(8)  g37<2>UD        g65.6<0,1,0>UD                  { align1 WE_all 1Q };
(+f0.0) mov(8)  g37.1<2>UD      g65.7<0,1,0>UD                  { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@1 };
add(8)          g88<1>D         g11<8,8,1>D     -g37<8,4,2>D    { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g10<8,8,1>UD    g77<0,1,0>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL16             { align1 1H };
mov(16)         g53<1>D         0D                              { align1 WE_all 1H };
mov(16)         g53<1>D         -g51<8,8,1>D                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g10<8,8,1>D     0D              { align1 1H };
add(8)          g53.1<2>D       g53<8,4,2>D     g53.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g53.2<4>D       g53.1<8,2,4>D   g53.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g53.3<4>D       g53.1<8,2,4>D   g53.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g53.4<1>D       g53.3<0,1,0>D   g53.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g54.4<1>D       g54.3<0,1,0>D   g54.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g54<1>D         g53.7<0,1,0>D   g54<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g89<1>D         g54.7<0,1,0>D                   { align1 1H };
(+f0.0) if(16)  JIP:  LABEL18         UIP:  LABEL17             { align1 1H };
add(16)         g91<1>D         g2.6<0,1,0>D    28D             { align1 1H compacted };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g41<2>UD        g91<4,4,1>UD                    { align1 1Q };
mov(8)          g43<2>UD        g92<4,4,1>UD                    { align1 2Q };
add(16)         g95<1>D         -g93<1,1,0>D    g2.7<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g41.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g43.1<2>UD      g96<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(1)          g103<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g103<1>UD       g103<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g104<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g104<1>UD       g104<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g104<1>UD       g103<0,1,0>UD   g104<0,1,0>UD   { align1 WE_all 1N I@1 compacted };
mov(1)          g97<1>UD        g104<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g99<1>UD        g97<0,1,0>UD                    { align1 1H };
mul(16)         g55<1>D         g99<8,8,1>D     g89<16,8,2>UW   { align1 1H I@1 };
mul(16)         g95<1>D         g99<8,8,1>D     g89.1<16,8,2>UW { align1 1H };
add(16)         g55.1<2>UW      g55.1<16,8,2>UW g95<16,8,2>UW   { align1 1H I@1 };
mov(1)          g105<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g105<1>UD       g105<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
fbl(1)          g101<1>UD       g105<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g8<8,8,1>D      g101<0,1,0>D    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL19         UIP:  LABEL19             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g79UD           g41UD           g55UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };

LABEL19:
endif(16)       JIP:  LABEL20                                   { align1 1H };
mov(1)          g108<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g108<1>UD       g108<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
fbl(1)          g102<1>UD       g108<0,1,0>UD                   { align1 WE_all 1N I@1 };
shl(1)          a0<1>UD         g102<0,1,0>UD   0x00000002UD    { align1 WE_all 1N @1 $6.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g104<1>UD       g[a0 480]<0,1,0>UD              { align1 WE_all 1N A@1 };
mov(1)          g112<1>UD       mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g112<1>UD       g112<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
mov(16)         g108<1>UD       g68<8,8,1>UW                    { align1 1H };
mov(1)          g66<1>D         1D                              { align1 WE_all 1N };
mov(1)          g115<1>UD       sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g115<1>UD       g115<0,1,0>UD   0xffffffffUD    { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g110<1>D        -g66<0,1,0>D    g108<8,8,1>UD   { align1 1H };
and(1)          g115<1>UD       g112<0,1,0>UD   g115<0,1,0>UD   { align1 WE_all 1N I@2 compacted };
mov(1)          g4<1>UD         g115<0,1,0>UD                   { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g115<1>UD       g4<0,1,0>UD     ~g110<8,8,1>D   { align1 1H };
cbit(16)        g117<1>UD       g115<8,8,1>UD                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mul(16)         g119<1>D        g117<8,8,1>D    g89<16,8,2>UW   { align1 1H I@1 };
mul(16)         g96<1>D         g117<8,8,1>D    g89.1<16,8,2>UW { align1 1H };
add(16)         g119.1<2>UW     g119.1<16,8,2>UW g96<16,8,2>UW  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g81<1>D         g104<0,1,0>D    g119<1,1,0>D    { align1 1H compacted };

LABEL20:
else(16)        JIP:  LABEL17         UIP:  LABEL17             { align1 1H };

LABEL18:
mov(16)         g81<1>UD        0x00000000UD                    { align1 1H I@2 };

LABEL17:
endif(16)       JIP:  LABEL16                                   { align1 1H };
mov(16)         g120<1>D        0D                              { align1 WE_all 1H $6.src };
mov(16)         g120<1>D        -g51<8,8,1>D                    { align1 1H };
cmp.nz.f0.0(16) null<1>D        g49<8,8,1>D     g39<8,8,1>D     { align1 1H };
add(8)          g120.1<2>D      g120<8,4,2>D    g120.1<8,4,2>D  { align1 WE_all 1Q I@2 };
add(4)          g120.2<4>D      g120.1<8,2,4>D  g120.2<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g120.3<4>D      g120.1<8,2,4>D  g120.3<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g120.4<1>D      g120.3<0,1,0>D  g120.4<4,4,1>D  { align1 WE_all 1N I@1 };
add(4)          g121.4<1>D      g121.3<0,1,0>D  g121.4<4,4,1>D  { align1 WE_all 1N I@2 };
add(8)          g121<1>D        g120.7<0,1,0>D  g121<1,1,0>D    { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g122<1>D        65535W          g81.0<0,1,0>D   g120<1,1,1>D { align1 1H };
(+f0.0) if(16)  JIP:  LABEL21         UIP:  LABEL21             { align1 1H };
and(16)         g124<1>UD       g39<8,8,1>UD    0x00ffffffUD    { align1 1H };
shl(16)         g126<1>D        g122<8,8,1>D    0x00000006UD    { align1 1H I@3 };
shr(16)         g12<1>UD        g122<1,1,0>UD   0x0000001aUD    { align1 1H $9.src compacted };
shl(16)         g19<1>D         g83<8,8,1>D     0x0000001eUD    { align1 1H $9.dst };
add(16)         g21<1>D         g87<1,1,0>D     1D              { align1 1H $9.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g58<1>UD        g124<8,8,1>UD   0xff000000UD    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g14<1>D         g2.6<0,1,0>D    g126<1,1,0>D    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g60<1>UD        g39<1,1,0>UD    g19<1,1,0>UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g62<1>UD        g21<8,8,1>UD    0xfffffff0UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H $9.dst compacted };
mov(8)          g42<2>UD        g14<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g44<2>UD        g15<4,4,1>UD                    { align1 2Q $6.src };
add3(16)        g18<1>D         g2.7<0,1,0>D    g12<8,8,1>D     -g16<1,1,1>D { align1 1H @3 $9.dst };
mov(8)          g42.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g44.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g42UD           g58UD           0x08002584                0x00000180
                            ugm MsgDesc: ( store, a64, d32, V3, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat )  base_offset 0  { align1 1H $6 };

LABEL21:
endif(16)       JIP:  LABEL16                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g22<1>D         g85<8,8,1>D     0x00000005UD    { align1 1H $9.dst };
shr(16)         g24<1>UD        g85<1,1,0>UD    0x0000001bUD    { align1 1H $4.src compacted };
add(16)         g26<1>D         g2.2<0,1,0>D    16D             { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
shl(16)         g40<1>D         g122<8,8,1>D    0x00000006UD    { align1 1H I@6 };
shr(16)         g47<1>UD        g122<1,1,0>UD   0x0000001aUD    { align1 1H compacted };
shl(16)         g73<1>D         g87<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
cmp.l.f0.0(16)  g28<1>UD        g26<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H $4.dst compacted };
add(16)         g32<1>D         g26<1,1,0>D     g22<1,1,0>D     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g60<1>D         g2.6<0,1,0>D    g40<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g30<1>D         -g28<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g34<1>UD        g32<1,1,0>UD    g26<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g43<2>UD        g32<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g45<2>UD        g33<4,4,1>UD                    { align1 2Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g62<1>UD        g60<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@5 compacted };
add(16)         g81<1>D         g60<1,1,0>D     12D             { align1 1H compacted };
add3(16)        g39<1>D         g30<8,8,1>D     g24<8,8,1>D     -g34<1,1,1>D { align1 1H I@5 };
add3(16)        g71<1>D         g2.7<0,1,0>D    g47<8,8,1>D     -g62<1,1,1>D { align1 1H I@3 };
add(16)         g89<1>D         g81<1,1,0>D     g73<1,1,0>D     { align1 1H I@3 compacted };
cmp.l.f0.0(16)  g87<1>UD        g81<1,1,0>UD    g60<1,1,0>UD    { align1 1H compacted };
mov(8)          g43.1<2>UD      g39<4,4,1>UD                    { align1 1Q I@4 };
mov(8)          g45.1<2>UD      g40<4,4,1>UD                    { align1 2Q I@5 };
cmp.l.f0.0(16)  g91<1>UD        g89<1,1,0>UD    g81<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g55<2>UD        g89<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g57<2>UD        g90<4,4,1>UD                    { align1 2Q $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g47UD           g43UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
add3(16)        g93<1>D         -g87<8,8,1>D    g71<8,8,1>D     -g91<1,1,1>D { align1 1H I@3 };
mov(8)          g55.1<2>UD      g93<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g57.1<2>UD      g94<4,4,1>UD                    { align1 2Q I@2 };
and(16)         g62<1>UD        g53<8,8,1>UD    0x1fffffffUD    { align1 1H $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g55UD           g62UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
cmp.z.f0.0(16)  null<1>D        g10<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL22         UIP:  LABEL22             { align1 1H };
shl(16)         g94<1>D         g113<8,8,1>D    0x00000006UD    { align1 1H };
shr(16)         g96<1>UD        g113<1,1,0>UD   0x0000001aUD    { align1 1H compacted };
add(16)         g98<1>D         g2.6<0,1,0>D    g94<1,1,0>D     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g100<1>UD       g98<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@1 compacted };
add(16)         g104<1>D        g60<1,1,0>D     -g98<1,1,0>D    { align1 1H compacted };
add(16)         g12<1>D         g98<1,1,0>D     12D             { align1 1H $9.src compacted };
cmp.l.f0.0(16)  g4<1>UD         g60<1,1,0>UD    g98<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add3(16)        g102<1>D        g2.7<0,1,0>D    g96<8,8,1>D     -g100<1,1,1>D { align1 1H I@4 };
cmp.g.f0.0(16)  g110<1>UD       g104<1,1,0>UD   0x00000000UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g56<2>UD        g12<4,4,1>UD                    { align1 1Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $6.src };
mov(8)          g58<2>UD        g13<4,4,1>UD                    { align1 2Q I@5 };
add3(16)        g108<1>D        g71<8,8,1>D     -g102<8,8,1>D   g4<1,1,1>D { align1 1H I@4 };
add(16)         g115<1>D        -g108<1,1,0>D   g110<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>D        g108<8,8,1>D    0D              { align1 1H };
(+f0.0) sel(16) g117<1>UD       g115<1,1,0>UD   g108<1,1,0>UD   { align1 1H I@2 compacted };
(+f0.0) sel(16) g119<1>D        -g104<1,1,0>D   g104<1,1,0>D    { align1 1H $6.src compacted };
shl(16)         g123<1>D        g117<8,8,1>D    0x0000001aUD    { align1 1H I@2 };
shr(16)         g121<1>UD       g119<1,1,0>UD   0x00000006UD    { align1 1H I@2 compacted };
or(16)          g125<1>UD       g121<1,1,0>UD   g123<1,1,0>UD   { align1 1H I@1 compacted };
(+f0.0) sel(16) g71<1>D         -g125<1,1,0>D   g125<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g14<1>UD        g12<1,1,0>UD    g98<1,1,0>UD    { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g16<1>D         -g14<1,1,0>D    g102<1,1,0>D    { align1 1H $9.dst compacted };
mov(8)          g56.1<2>UD      g16<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g58.1<2>UD      g17<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g56UD           g71UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };
add(16)         g17<1>D         g98<1,1,0>D     16D             { align1 1H $9.dst compacted };
mov(16)         g81<1>UD        g67<16,8,2>UB                   { align1 1H };
cmp.l.f0.0(16)  g19<1>UD        g17<1,1,0>UD    g98<1,1,0>UD    { align1 1H @2 $9.dst compacted };
mov(8)          g23<2>UD        g17<4,4,1>UD                    { align1 1Q };
mov(8)          g25<2>UD        g18<4,4,1>UD                    { align1 2Q };
add(16)         g21<1>D         -g19<1,1,0>D    g102<1,1,0>D    { align1 1H @3 $9.dst compacted };
mov(8)          g23.1<2>UD      g21<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g25.1<2>UD      g22<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g23UD           g81UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };

LABEL22:
endif(16)       JIP:  LABEL16                                   { align1 1H };
or(16)          g24<1>UD        g69<1,1,0>UD    g73<1,1,0>UD    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(16)         g26<1>D         g113<8,8,1>D    0x00000006UD    { align1 1H $7.src };
shr(16)         g28<1>UD        g113<1,1,0>UD   0x0000001aUD    { align1 1H compacted };
add(16)         g30<1>D         g2.6<0,1,0>D    22D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g100<4>UB       g24<8,8,1>UD                    { align1 1H I@4 };
cmp.l.f0.0(16)  g32<1>UD        g30<1,1,0>UD    g2.6<0,1,0>UD   { align1 1H I@2 compacted };
add(16)         g34<1>D         g30<1,1,0>D     g26<1,1,0>D     { align1 1H I@5 compacted };
mov(16)         g87<1>UD        g100<32,8,4>UB                  { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add3(16)        g41<1>D         -g32<8,8,1>D    g2.7<0,1,0>D    g28<1,1,1>D { align1 1H I@3 };
cmp.l.f0.0(16)  g39<1>UD        g34<1,1,0>UD    g30<1,1,0>UD    { align1 1H I@3 compacted };
add(16)         g43<1>D         g34<1,1,0>D     g10<1,1,0>D     { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.l.f0.0(16)  g45<1>UD        g43<1,1,0>UD    g34<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g57<2>UD        g43<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g59<2>UD        g44<4,4,1>UD                    { align1 2Q $6.src };
add3(16)        g47<1>D         -g39<8,8,1>D    g41<8,8,1>D     -g45<1,1,1>D { align1 1H @3 $5.dst };
mov(8)          g57.1<2>UD      g47<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g59.1<2>UD      g48<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g57UD           g87UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $6 };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };

LABEL13:
endif(16)       JIP:  LABEL10                                   { align1 1H };
add(16)         g106<1>D        g106<1,1,0>D    g77<0,1,0>D     { align1 1H I@4 compacted };

LABEL10:
while(16)       JIP:  LABEL23                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_leaf_primref_to_procedurals_code[] = {
    0x80000065, 0x74058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x30050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00740c, 0x00340000,
    0xe2753040, 0x04017403, 0x00041a69, 0x49058660,
    0x02463005, 0x00000004, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00750c, 0x00300000, 0xa0621940, 0x01004903,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0560040, 0x02410203, 0x27581970, 0x02105603,
    0x00030061, 0x5c060220, 0x00345605, 0x00000000,
    0x00130061, 0x5e060220, 0x00345705, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x00040070, 0x00018660, 0x16000344, 0x00000008,
    0xa05a1c40, 0x02125812, 0x00031961, 0x5c260220,
    0x00345a05, 0x00000000, 0x00131a61, 0x5e260220,
    0x00345b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x60140000,
    0xfb005c24, 0x00000000, 0x274bf262, 0x60006203,
    0x00040041, 0x59050660, 0x01000344, 0x00566016,
    0x00040041, 0x63050660, 0x01000344, 0x00566006,
    0x00041940, 0x63160110, 0x01566316, 0x00565906,
    0x11041962, 0x06058220, 0x02466305, 0x00000004,
    0x00040070, 0x00018660, 0x26464905, 0x00000000,
    0x01040022, 0x0001c060, 0x00000118, 0x00000108,
    0xa0640040, 0xfff04903, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00041941, 0x66050660,
    0x01466405, 0x00000344, 0x00040041, 0x5a050660,
    0x01466405, 0x00000354, 0x00041940, 0x66160110,
    0x01566616, 0x00565a06, 0xa0681940, 0x06006602,
    0x27041970, 0x66006803, 0xa06c0040, 0x6801025a,
    0x276e1970, 0x02106c0b, 0x00030061, 0x72060220,
    0x00346c05, 0x00000000, 0x80103101, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x74060220,
    0x00346d05, 0x00000000, 0x00041b52, 0x70040660,
    0x0eae02a4, 0x6e050405, 0x00031961, 0x72260220,
    0x00347005, 0x00000000, 0x00131a61, 0x74260220,
    0x00347105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x44140000,
    0xfb007224, 0x00000000, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00042161, 0x44054220,
    0x00000000, 0xffffffff, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x25731a70, 0x60004903,
    0x01040022, 0x0001c060, 0x00000108, 0x00000020,
    0x00040024, 0x0001c060, 0x000000f8, 0x000000f8,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00040041, 0x75050660, 0x01464905, 0x00000344,
    0x00043241, 0x5b050660, 0x01464905, 0x00000354,
    0x00041940, 0x75160110, 0x01567516, 0x00565b06,
    0xa0771940, 0x06007502, 0x27791970, 0x75007703,
    0xa07b0040, 0x7701025a, 0x277d1970, 0x02107b0b,
    0x00033361, 0x08060220, 0x00347b05, 0x00000000,
    0x00133361, 0x0a060220, 0x00347c05, 0x00000000,
    0x00041b52, 0x6a040660, 0x0eae02a4, 0x7d057905,
    0x00031961, 0x08260220, 0x00346a05, 0x00000000,
    0x00131a61, 0x0a260220, 0x00346b05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x0c140000, 0xfb000824, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0xae462370, 0x44000c02, 0x00040025, 0x00004600,
    0x00000000, 0x00000038, 0x00041a66, 0x00010220,
    0x22464605, 0x00467305, 0x01040028, 0x0001c660,
    0x00000018, 0x00000018, 0xa0490040, 0x00104903,
    0x00040027, 0x00014060, 0x00000000, 0xfffffea8,
    0xa00d1f40, 0xfff04b03, 0x00041941, 0x0f050660,
    0x01460d05, 0x00000344, 0x00043241, 0x5c050660,
    0x01460d05, 0x00000354, 0x00041940, 0x0f160110,
    0x01560f16, 0x00565c06, 0xa0111940, 0x06000f02,
    0x27131970, 0x0f001103, 0xa0150040, 0x1101025a,
    0x27171970, 0x0210150b, 0x00030061, 0x1b060220,
    0x00341505, 0x00000000, 0x00130061, 0x1d060220,
    0x00341605, 0x00000000, 0x00041b52, 0x19040660,
    0x0eae02a4, 0x17051305, 0x00031961, 0x1b260220,
    0x00341905, 0x00000000, 0x00131a61, 0x1d260220,
    0x00341a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x1f140000,
    0xfb001b24, 0x00000000, 0x25211a70, 0x60004b03,
    0x01040022, 0x0001c060, 0x000000f8, 0x00000020,
    0x00040024, 0x0001c060, 0x000000e8, 0x000000e8,
    0x00040041, 0x23050660, 0x01464b05, 0x00000344,
    0x00043241, 0x5d050660, 0x01464b05, 0x00000354,
    0x00041940, 0x23160110, 0x01562316, 0x00565d06,
    0xa0251940, 0x06002302, 0x27271970, 0x23002503,
    0xa0290040, 0x2501025a, 0x272b1970, 0x0210290b,
    0x00033561, 0x2f060220, 0x00342905, 0x00000000,
    0x00133561, 0x31060220, 0x00342a05, 0x00000000,
    0x00041b52, 0x2d040660, 0x0eae02a4, 0x2b052705,
    0x00031961, 0x2f260220, 0x00342d05, 0x00000000,
    0x00131a61, 0x31260220, 0x00342e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044531, 0x33140000, 0xfb002f24, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0xae472570, 0x1f003302, 0x00040025, 0x00004600,
    0x00000000, 0x00000038, 0x00041a66, 0x00010220,
    0x22464705, 0x00462105, 0x01040028, 0x0001c660,
    0x00000018, 0x00000018, 0xa04b0040, 0x00104b03,
    0x00040027, 0x00014060, 0x00000000, 0xfffffec8,
    0x80032161, 0x44054410, 0x00000000, 0x76543210,
    0x00040061, 0x43064540, 0x00000000, 0x00030003,
    0x64441a40, 0x00804495, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00043361, 0x08050120,
    0x00464405, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xe00a1965, 0x00f00803,
    0xa06a1940, 0x0a004902, 0xa045e140, 0x0a004b02,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x27471970, 0x4b004503, 0x274d1b70, 0x45006a03,
    0x00041a61, 0x49052660, 0x00464705, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00041a65, 0x51052620, 0x02464705, 0x00464d05,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xeb571a70, 0x00004903, 0x00041966, 0x00010220,
    0x22465705, 0x00465105, 0x11040028, 0x0001c660,
    0x000015f8, 0x000015f8, 0x00040041, 0x58050660,
    0x01466a05, 0x00000344, 0x00043241, 0x5e050660,
    0x01466a05, 0x00000354, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041940, 0x58160110,
    0x01565816, 0x00565e06, 0xa05a1940, 0x0310581a,
    0xa0680040, 0x06005802, 0x275c1a70, 0x58005a03,
    0xa05e0040, 0x5a01025a, 0xa06c1b40, 0x6801025a,
    0x27601a70, 0x02105e0b, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x64060220,
    0x00345e05, 0x00000000, 0x80103801, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x66060220,
    0x00345f05, 0x00000000, 0x27040070, 0x58006803,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00031d61, 0x0c060220, 0x00346c05, 0x00000000,
    0x80103901, 0x00000000, 0x00000000, 0x00000000,
    0x00131e61, 0x0e060220, 0x00346d05, 0x00000000,
    0x276e0070, 0x02106c0b, 0x00041f52, 0x62040660,
    0x0eae02a4, 0x60055c05, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27730070, 0x4b006a03,
    0x00041b52, 0x70040660, 0x0eae02a4, 0x6e050405,
    0x00031b61, 0x64260220, 0x00346205, 0x00000000,
    0x00131c61, 0x66260220, 0x00346305, 0x00000000,
    0x00031b61, 0x0c260220, 0x00347005, 0x00000000,
    0x00131c61, 0x0e260220, 0x00347105, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x36140000, 0xfb006424, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x71140000, 0xfb000c24, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xac752970, 0x71107102, 0x00041965, 0x00010220,
    0x22467305, 0x00467505, 0x01040022, 0x0001c060,
    0x000000b8, 0x000000a8, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xe2650961, 0x00114004,
    0x80000965, 0x65058220, 0x02006504, 0xffffffff,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xe2660961, 0x00117044, 0x80000965, 0x66058220,
    0x02006604, 0xffffffff, 0x22661965, 0x66116503,
    0x80001961, 0x76050220, 0x00006604, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0004004d, 0x4d050220, 0x00007604, 0x00000000,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041a61, 0x4d054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00001330,
    0x00043669, 0x77058660, 0x02460a05, 0x00000002,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xea087714, 0x00003614,
    0x00040070, 0x00018220, 0x52460a05, 0x00000008,
    0x01040022, 0x0001c060, 0x000012b8, 0x000012b8,
    0x00041d70, 0x00010220, 0x52460a05, 0x00004d04,
    0x01040022, 0x0001c060, 0x00000188, 0x00000178,
    0x00044631, 0x55140000, 0xea007714, 0x00000000,
    0x00042669, 0x78058660, 0x02465505, 0x00000005,
    0xe07a0068, 0x01b05503, 0xa07c1a40, 0x78010242,
    0x277e1970, 0x02107c2b, 0x00033961, 0x0d060220,
    0x00347c05, 0x00000000, 0x00133961, 0x0f060220,
    0x00347d05, 0x00000000, 0xa0132940, 0x01007c03,
    0x0004c952, 0x11040660, 0x0e2e0264, 0x7e057a05,
    0x2715a970, 0x7c001303, 0x00033461, 0x19060220,
    0x00341305, 0x00000000, 0x00133461, 0x1b060220,
    0x00341405, 0x00000000, 0x00031c61, 0x0d260220,
    0x00341105, 0x00000000, 0x00131d61, 0x0f260220,
    0x00341205, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0xa01d2440, 0x11021502,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x11440000, 0xfb000d24, 0x000c0000,
    0x00031961, 0x19260220, 0x00341d05, 0x00000000,
    0x00131a61, 0x1b260220, 0x00341e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x1d440000, 0xfb001924, 0x000c0000,
    0x00042965, 0x27058220, 0x02461705, 0x07ffffff,
    0xe0532468, 0x01d02303, 0x00040024, 0x0001c060,
    0x00000020, 0x00000020, 0x00041b61, 0x27054220,
    0x00000000, 0xffffffff, 0x00040025, 0x00004600,
    0x00000000, 0x00001110, 0xa01e2440, 0x00f00803,
    0xa0202440, 0xfff00803, 0xa02b0040, 0x00100803,
    0x00041b70, 0x00018660, 0x56461e05, 0x00000010,
    0x8004b461, 0x10014110, 0x00000000, 0x04e004e0,
    0x00040069, 0x10018510, 0x01562006, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x04e004e0,
    0xe0220961, 0x001b0004, 0x80041b61, 0x10014110,
    0x00000000, 0x04e004e0, 0x00040069, 0x10018510,
    0x01562b06, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x04e004e0, 0xe02d0961, 0x001b0004,
    0x11041a62, 0x29058220, 0x02462205, 0xffffffff,
    0xa72f3570, 0x01002b03, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x01042562, 0x31058220,
    0x02462d05, 0xffffffff, 0xae33b570, 0x27002902,
    0x00041b70, 0x00018660, 0x26462f05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041a61, 0x35052660, 0x00463305, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80041961, 0x10014110, 0x00000000, 0x06a006a0,
    0x00040069, 0x10018510, 0x01562b06, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06a006a0,
    0xe0370961, 0x001b0004, 0xef451962, 0x00003703,
    0x00040070, 0x00018660, 0x26463305, 0x00000000,
    0xef470062, 0x00000a03, 0x00031961, 0x58060220,
    0x00344705, 0x00000000, 0x00131a61, 0x49060220,
    0x00344805, 0x00000000, 0x00031a61, 0x58264220,
    0x00000000, 0x00000000, 0x00131a61, 0x49264220,
    0x00000000, 0x00000000, 0x80031a61, 0x61064220,
    0x00000000, 0x00000000, 0x00030061, 0x61060220,
    0x00445806, 0x00000000, 0x80103801, 0x00000000,
    0x00000000, 0x00000000, 0x80131a61, 0x63064220,
    0x00000000, 0x00000000, 0x00130061, 0x63060220,
    0x00444906, 0x00000000, 0x80031a61, 0x40060220,
    0x00446106, 0x00000000, 0x80030061, 0x61264220,
    0x00000000, 0x00000000, 0x00030061, 0x61260220,
    0x00445826, 0x00000000, 0x80131b61, 0x25060220,
    0x00446306, 0x00000000, 0x80130061, 0x63264220,
    0x00000000, 0x00000000, 0x00130061, 0x63260220,
    0x00444926, 0x00000000, 0x80031b61, 0x40260220,
    0x00446126, 0x00000000, 0x80131a61, 0x25260220,
    0x00446326, 0x00000000, 0x80021a70, 0x00010220,
    0x32424007, 0x00424047, 0x81020070, 0x00010220,
    0x12424027, 0x00424067, 0x91020070, 0x00010220,
    0x32424027, 0x00424067, 0x81020061, 0x40470220,
    0x00424007, 0x00000000, 0x81021961, 0x40670220,
    0x00424027, 0x00000000, 0x80011970, 0x00010220,
    0x32004044, 0x00324086, 0x81010070, 0x00010220,
    0x12004064, 0x003240a6, 0x91010070, 0x00010220,
    0x32004064, 0x003240a6, 0x81010061, 0x40860220,
    0x00004044, 0x00000000, 0x81011961, 0x40a60220,
    0x00004064, 0x00000000, 0x80011e70, 0x00010220,
    0x32004144, 0x00324186, 0x81010070, 0x00010220,
    0x12004164, 0x003241a6, 0x91010070, 0x00010220,
    0x32004164, 0x003241a6, 0x81010061, 0x41860220,
    0x00004144, 0x00000000, 0x81011961, 0x41a60220,
    0x00004164, 0x00000000, 0x80021970, 0x00010220,
    0x320040c4, 0x00444106, 0x81020070, 0x00010220,
    0x120040e4, 0x00444126, 0x91020070, 0x00010220,
    0x320040e4, 0x00444126, 0x81020061, 0x41060220,
    0x000040c4, 0x00000000, 0x81021961, 0x41260220,
    0x000040e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00030040, 0x57050660,
    0x06460a05, 0x02444006, 0x80020070, 0x00010220,
    0x32422507, 0x00422547, 0x81020070, 0x00010220,
    0x12422527, 0x00422567, 0x91020070, 0x00010220,
    0x32422527, 0x00422567, 0x81020061, 0x25470220,
    0x00422507, 0x00000000, 0x81021961, 0x25670220,
    0x00422527, 0x00000000, 0x80011970, 0x00010220,
    0x32002544, 0x00322586, 0x81010070, 0x00010220,
    0x12002564, 0x003225a6, 0x91010070, 0x00010220,
    0x32002564, 0x003225a6, 0x81010061, 0x25860220,
    0x00002544, 0x00000000, 0x81011961, 0x25a60220,
    0x00002564, 0x00000000, 0x80011e70, 0x00010220,
    0x32002644, 0x00322686, 0x81010070, 0x00010220,
    0x12002664, 0x003226a6, 0x91010070, 0x00010220,
    0x32002664, 0x003226a6, 0x81010061, 0x26860220,
    0x00002644, 0x00000000, 0x81011961, 0x26a60220,
    0x00002664, 0x00000000, 0x80021970, 0x00010220,
    0x320025c4, 0x00442606, 0x81020070, 0x00010220,
    0x120025e4, 0x00442626, 0x91020070, 0x00010220,
    0x320025e4, 0x00442626, 0x81020061, 0x26060220,
    0x000025c4, 0x00000000, 0x81021961, 0x26260220,
    0x000025e4, 0x00000000, 0x80031970, 0x00010220,
    0x320041c4, 0x00442506, 0x81030070, 0x00010220,
    0x120041e4, 0x00442526, 0x91030070, 0x00010220,
    0x320041e4, 0x00442526, 0x81030061, 0x25060220,
    0x000041c4, 0x00000000, 0x81031961, 0x25260220,
    0x000041e4, 0x00000000, 0x80101901, 0x00000000,
    0x00000000, 0x00000000, 0x00130040, 0x58050660,
    0x06460b05, 0x02442506, 0x00040070, 0x00010220,
    0x52460a05, 0x00004d04, 0x01040022, 0x0001c060,
    0x00000b50, 0x00000b50, 0x80040061, 0x35054660,
    0x00000000, 0x00000000, 0x00040061, 0x35052660,
    0x00463305, 0x00000000, 0x00040070, 0x00018660,
    0x16460a05, 0x00000000, 0x80031a40, 0x35260660,
    0x06443506, 0x00443526, 0x80021940, 0x35470660,
    0x06423527, 0x00423547, 0x80021940, 0x35670660,
    0x06423527, 0x00423567, 0x80021940, 0x35850660,
    0x06003564, 0x00343585, 0x80021a40, 0x36850660,
    0x06003664, 0x00343685, 0xa4361940, 0x36013582,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x59050660, 0x000036e4, 0x00000000,
    0x01040022, 0x0001c060, 0x00000340, 0x00000330,
    0xa05b0040, 0x01c1026b, 0x275d1970, 0x02105b4b,
    0x00030061, 0x29060220, 0x00345b05, 0x00000000,
    0x00130061, 0x2b060220, 0x00345c05, 0x00000000,
    0xa05f1b40, 0x02125d52, 0x00031961, 0x29260220,
    0x00345f05, 0x00000000, 0x00131a61, 0x2b260220,
    0x00346005, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xe2670961, 0x00114004,
    0x80000965, 0x67058220, 0x02006704, 0xffffffff,
    0xe2680961, 0x00117044, 0x80000965, 0x68058220,
    0x02006804, 0xffffffff, 0x22681965, 0x68116703,
    0x80001961, 0x61050220, 0x00006804, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0004004d, 0x63050220, 0x00006104, 0x00000000,
    0x00041941, 0x37050660, 0x01466305, 0x00565906,
    0x00040041, 0x5f050660, 0x01466305, 0x00565916,
    0x00041940, 0x37160110, 0x01563716, 0x00565f06,
    0xe2690961, 0x00114004, 0x80000965, 0x69058220,
    0x02006904, 0xffffffff, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x8000194c, 0x65050220,
    0x00006904, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x00010660,
    0x16460805, 0x00006504, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x4f140000,
    0xfb182924, 0x01003714, 0x00040025, 0x00004600,
    0x00000000, 0x00000188, 0xe26c0961, 0x00114004,
    0x80000965, 0x6c058220, 0x02006c04, 0xffffffff,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x8000194c, 0x66050220, 0x00006c04, 0x00000000,
    0x80009669, 0x10018220, 0x02006604, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x68050220, 0x00010780, 0x00000000,
    0xe2700961, 0x00114004, 0x80000965, 0x70058220,
    0x02007004, 0xffffffff, 0x00040061, 0x6c050120,
    0x00464405, 0x00000000, 0x80000061, 0x42054660,
    0x00000000, 0x00000001, 0xe2730961, 0x00117044,
    0x80000965, 0x73058220, 0x02007304, 0xffffffff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x6e052660, 0x02004204, 0x00466c05,
    0x22731a65, 0x73117003, 0x80001961, 0x04050220,
    0x00007304, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040065, 0x73050220,
    0x06000404, 0x02466e05, 0x0004194d, 0x75050220,
    0x00467305, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041941, 0x77050660,
    0x01467505, 0x00565906, 0x00040041, 0x60050660,
    0x01467505, 0x00565916, 0x00041940, 0x77160110,
    0x01567716, 0x00566006, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0510040, 0x77016802,
    0x00040024, 0x0001c060, 0x00000020, 0x00000020,
    0x00041a61, 0x51054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000758,
    0x80043661, 0x78054660, 0x00000000, 0x00000000,
    0x00040061, 0x78052660, 0x00463305, 0x00000000,
    0x00040070, 0x00010660, 0x26463105, 0x00462705,
    0x80031a40, 0x78260660, 0x06447806, 0x00447826,
    0x80021940, 0x78470660, 0x06427827, 0x00427847,
    0x80021940, 0x78670660, 0x06427827, 0x00427867,
    0x80021940, 0x78850660, 0x06007864, 0x00347885,
    0x80021a40, 0x79850660, 0x06007964, 0x00347985,
    0xa4791940, 0x79017882, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x7a044560,
    0x0606ffff, 0x78055104, 0x01040022, 0x0001c060,
    0x00000148, 0x00000148, 0x00040065, 0x7c058220,
    0x02462705, 0x00ffffff, 0x00041b69, 0x7e058660,
    0x02467a05, 0x00000006, 0xe00c3968, 0x01a07a03,
    0x00042969, 0x13058660, 0x02465305, 0x0000001e,
    0xa0152940, 0x00105703, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041d66, 0x3a058220,
    0x02467c05, 0xff000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xa00e1d40, 0x7e01026a,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x203c1c66, 0x13002703, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x00041c66, 0x3e058220,
    0x02461505, 0xfffffff0, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27102970, 0x02100e4b,
    0x00033661, 0x2a060220, 0x00340e05, 0x00000000,
    0x00133661, 0x2c060220, 0x00340f05, 0x00000000,
    0x0004b952, 0x12040660, 0x0e2e02e4, 0x10050c05,
    0x00031961, 0x2a260220, 0x00341205, 0x00000000,
    0x00131a61, 0x2c260220, 0x00341305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb082a24, 0x00083a34,
    0x00040025, 0x00004600, 0x00000000, 0x00000558,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x00042969, 0x16058660, 0x02465505, 0x00000005,
    0xe0183468, 0x01b05503, 0xa01a3440, 0x01010243,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041e69, 0x28058660, 0x02467a05, 0x00000006,
    0xe02f0068, 0x01a07a03, 0x00040069, 0x49058660,
    0x02465705, 0x00000002, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x271c2470, 0x02101a2b,
    0xa0201f40, 0x16001a02, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xa03c1d40, 0x2801026a,
    0xa01e1b40, 0x02121c1a, 0x27221b70, 0x1a002003,
    0x00033661, 0x2b060220, 0x00342005, 0x00000000,
    0x00133661, 0x2d060220, 0x00342105, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x273e1d70, 0x02103c4b, 0xa0510040, 0x00c03c03,
    0x00041d52, 0x27040e68, 0x0e2e1e05, 0x22051805,
    0x00041b52, 0x47040660, 0x0e2e02e4, 0x3e052f05,
    0xa0591b40, 0x49005102, 0x27570070, 0x3c005103,
    0x00031c61, 0x2b260220, 0x00342705, 0x00000000,
    0x00131d61, 0x2d260220, 0x00342805, 0x00000000,
    0x275b1c70, 0x51005903, 0x00033661, 0x37060220,
    0x00345905, 0x00000000, 0x00133661, 0x39060220,
    0x00345a05, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x2f440000,
    0xfb002b24, 0x000c0000, 0x00041b52, 0x5d042e68,
    0x0e2e5705, 0x5b054705, 0x00031961, 0x37260220,
    0x00345d05, 0x00000000, 0x00131a61, 0x39260220,
    0x00345e05, 0x00000000, 0x00042565, 0x3e058220,
    0x02463505, 0x1fffffff, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xfb083724, 0x00003e14, 0x00040070, 0x00018660,
    0x16460a05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000210, 0x00000210, 0x00040069, 0x5e058660,
    0x02467105, 0x00000006, 0xe0600068, 0x01a07103,
    0xa0621a40, 0x5e01026a, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x27641970, 0x0210624b,
    0xa0680040, 0x62203c02, 0xa00c3940, 0x00c06203,
    0x27040070, 0x62003c03, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x00041c52, 0x66040660,
    0x0e2e02e4, 0x64056005, 0xeb6e1c70, 0x00006803,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00031c61, 0x38060220, 0x00340c05, 0x00000000,
    0x80103601, 0x00000000, 0x00000000, 0x00000000,
    0x00131d61, 0x3a060220, 0x00340d05, 0x00000000,
    0x00041c52, 0x6c040e68, 0x0e8e4705, 0x04056605,
    0xa0731940, 0x6e026c02, 0x00040070, 0x00018660,
    0x56466c05, 0x00000000, 0x2f751a62, 0x6c007303,
    0xaf773662, 0x68026802, 0x00041a69, 0x7b058660,
    0x02467505, 0x0000001a, 0xe0791a68, 0x00607703,
    0x207d1966, 0x7b007903, 0xaf471962, 0x7d027d02,
    0x270e3970, 0x62000c03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0102940, 0x66020e02,
    0x00031961, 0x38260220, 0x00341005, 0x00000000,
    0x00131a61, 0x3a260220, 0x00341105, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xfb083824, 0x00004714,
    0xa0112940, 0x01006203, 0x00040061, 0x51050020,
    0x00564306, 0x00000000, 0x2713a970, 0x62001103,
    0x00030061, 0x17060220, 0x00341105, 0x00000000,
    0x00130061, 0x19060220, 0x00341205, 0x00000000,
    0xa015b940, 0x66021302, 0x00031961, 0x17260220,
    0x00341505, 0x00000000, 0x00131a61, 0x19260220,
    0x00341605, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xf3081724, 0x00025114, 0x00040025, 0x00004600,
    0x00000000, 0x00000140, 0x20183766, 0x49004503,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00043769, 0x1a058660, 0x02467105, 0x00000006,
    0xe01c0068, 0x01a07103, 0xa01e0040, 0x0161026b,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00041c61, 0x64070200, 0x00461805, 0x00000000,
    0x27201a70, 0x02101e4b, 0xa0221d40, 0x1a001e02,
    0x00041b61, 0x57050020, 0x00666407, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041b52, 0x29042e68, 0x06062005, 0x1c0502e4,
    0x27271b70, 0x1e002203, 0xa02b3540, 0x0a002202,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x272d1970, 0x22002b03, 0x00033661, 0x39060220,
    0x00342b05, 0x00000000, 0x00133661, 0x3b060220,
    0x00342c05, 0x00000000, 0x0004b552, 0x2f042e68,
    0x0e2e2705, 0x2d052905, 0x00031961, 0x39260220,
    0x00342f05, 0x00000000, 0x00131a61, 0x3b260220,
    0x00343005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xf3083924, 0x00025714, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa06a1c40, 0x4d106a02,
    0x00040027, 0x00014060, 0x00000000, 0xffffe988,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_leaf_primref_to_procedurals = {
   .prog_data = {
      .base.nr_params = 20,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 0,
      .base.total_shared = 64,
      .base.program_size = 7472,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_leaf_primref_to_procedurals_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_leaf_primref_to_procedurals_printfs,
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
      .push.cross_thread.dwords = 20,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 48,
   .arg_count = 7,
   .args = gfx125_bvh_build_leaf_primref_to_procedurals_args,
   .code = gfx125_bvh_build_leaf_primref_to_procedurals_code,
};
const char *gfx125_bvh_build_leaf_primref_to_procedurals_sha1 = "6d39840de4ba8f2a1461d542d757280648a1273f";

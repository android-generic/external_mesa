#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_BFS_BFS_pass1_indexed_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_BFS_BFS_pass1_indexed_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_BFS_BFS_pass1_indexed_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g23<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g29<1>UD        0x00000000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g23UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g23<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g46<1>D         g2<0,1,0>D      1064D           { align1 1H compacted };
add(16)         g58<1>D         g2<0,1,0>D      1068D           { align1 1H compacted };
cmp.l.f0.0(16)  g48<1>UD        g46<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@2 compacted };
mov(8)          g52<2>UD        g46<4,4,1>UD                    { align1 1Q };
mov(8)          g54<2>UD        g47<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  g60<1>UD        g58<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@4 compacted };
add(16)         g50<1>D         -g48<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@4 compacted };
mov(8)          g52.1<2>UD      g50<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g54.1<2>UD      g51<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g56UD           g52UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };

LABEL3:
shl(16)         g62<1>D         g29<8,8,1>D     0x00000002UD    { align1 1H I@4 };
add(16)         g64<1>D         g58<1,1,0>D     g62<1,1,0>D     { align1 1H I@1 compacted };
cmp.l.f0.0(16)  g66<1>UD        g64<1,1,0>UD    g58<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g70<2>UD        g64<4,4,1>UD                    { align1 1Q };
mov(8)          g72<2>UD        g65<4,4,1>UD                    { align1 2Q };
add3(16)        g68<1>D         -g60<8,8,1>D    g2.1<0,1,0>D    -g66<1,1,1>D { align1 1H I@3 };
mov(8)          g70.1<2>UD      g68<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g72.1<2>UD      g69<4,4,1>UD                    { align1 2Q I@2 };
mov(1)          g22<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g22<1>UD        g22<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          f0<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N };
fbl(1)          g74<1>UD        g22<0,1,0>UD                    { align1 WE_all 1N I@2 };
mov(8)          g82<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(1)          a0<1>UD         g74<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g76<2>D         g[a0 192]<0,1,0>D               { align1 WE_all 1N A@1 };
mov(1)          g76.1<2>D       g[a0 196]<0,1,0>D               { align1 WE_all 1N };
add(8)          g82.8<1>UW      g82<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g16.1<2>D       g76.1<0,1,0>D                   { align1 WE_all 1Q I@2 };
add(16)         g81<1>W         g82<16,16,1>UW  -1W             { align1 WE_all 1H I@2 };
mov(8)          g16<2>D         g76<0,1,0>D                     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0.any16h) send(1) g71UD    g16UD           nullUD          0x0220d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
mov(16)         g79<1>D         0D                              { align1 WE_all 1H @5 $2.dst };
mov(16)         g79<1>D         g71<8,8,1>D                     { align1 1H };
mov(16)         a0<1>UW         0x09e0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g81<8,8,1>W     0x0002UW        { align1 WE_all 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x09e0UW        { align1 WE_all 1H A@1 };
mov(16)         g77<1>UD        g[a0]<VxH,1,0>UD                { align1 WE_all 1H A@1 compacted };
mov(1)          g77<1>D         0D                              { align1 WE_all 1N I@1 };
add(8)          g77.1<2>D       g77<8,4,2>D     g77.1<8,4,2>D   { align1 WE_all 1Q I@1 };
add(4)          g77.2<4>D       g77.1<8,2,4>D   g77.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g77.3<4>D       g77.1<8,2,4>D   g77.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g77.4<1>D       g77.3<0,1,0>D   g77.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g78.4<1>D       g78.3<0,1,0>D   g78.4<4,4,1>D   { align1 WE_all 1N I@2 };
add(8)          g78<1>D         g77.7<0,1,0>D   g78<1,1,0>D     { align1 WE_all 1Q I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g31<1>D         g23<1,1,0>D     -g77<1,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g83<1>UD        g31<1,1,0>UD    g71<1,1,0>UD    { align1 1H I@1 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g83<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov.nz.f0.0(16) g27<1>UD        f0<0,1,0>UW                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g25<1>UD        0xffffffffUD                    { align1 1H };
break(16)       JIP:  LABEL0          UIP:  LABEL1              { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };
add(16)         g84<1>D         g77<1,1,0>D     g71<1,1,0>D     { align1 1H compacted };
add(16)         g29<1>D         g29<1,1,0>D     16D             { align1 1H compacted };
add(16)         g23<1>D         g23<1,1,0>D     -g85.7<0,1,0>D  { align1 1H I@2 compacted };
cmp.ge.f0.0(16) null<1>UD       g29<8,8,1>UD    g56<8,8,1>UD    { align1 1H @2 $1.dst };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
mov(16)         g25<1>UD        0x00000000UD                    { align1 1H I@7 };
break(16)       JIP:  LABEL2          UIP:  LABEL1              { align1 1H };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov.nz.f0.0(16) null<1>D        g25<8,8,1>D                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL4              { align1 1H };
fbl(16)         g85<1>UD        g27<8,8,1>UD                    { align1 1H I@6 };
cmp.z.f0.0(16)  null<1>D        g27<8,8,1>D     0D              { align1 1H };
(-f0.0) sel(16) g87<1>UD        g85<8,8,1>UD    0x00000020UD    { align1 1H I@2 };
add(16)         g33<1>D         g29<1,1,0>D     g87<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         a0<1>UW         0x03e0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g87<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03e0UW        { align1 1H A@1 };
mov(16)         g35<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
else(16)        JIP:  LABEL4          UIP:  LABEL4              { align1 1H };

LABEL5:
mov(16)         g33<1>UD        0x00000000UD                    { align1 1H I@3 };
mov(16)         g35<1>UD        0x00000000UD                    { align1 1H I@3 };

LABEL4:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
shl(16)         g88<1>D         g33<8,8,1>D     0x00000002UD    { align1 1H I@3 };
add(16)         g90<1>D         g2<0,1,0>D      2094D           { align1 1H };
add(16)         g14<1>D         g2.2<0,1,0>D    52D             { align1 1H compacted };
and(16)         g58<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 1H compacted };
shl(16)         g37<1>D         g35<8,8,1>D     0x00000009UD    { align1 1H I@6 };
add(16)         g47<1>D         g2.2<0,1,0>D    16D             { align1 1H compacted };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@5 compacted };
add(16)         g94<1>D         g90<1,1,0>D     g88<1,1,0>D     { align1 1H I@7 compacted };
mov(8)          g62<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(8)          g20<2>UD        g14<4,4,1>UD                    { align1 1Q I@7 };
mov(8)          g22<2>UD        g15<4,4,1>UD                    { align1 2Q I@7 };
shl(16)         g60<1>D         g58<8,8,1>D     0x00000004UD    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g53<2>UD        g47<4,4,1>UD                    { align1 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N I@7 };
mov(8)          g55<2>UD        g48<4,4,1>UD                    { align1 2Q $1.dst };
cmp.l.f0.0(16)  g96<1>UD        g94<1,1,0>UD    g90<1,1,0>UD    { align1 1H I@7 compacted };
mov(8)          g100<2>UD       g94<4,4,1>UD                    { align1 1Q };
mov(8)          g102<2>UD       g95<4,4,1>UD                    { align1 2Q };
add(8)          g62.8<1>UW      g62<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@7 compacted };
add3(16)        g98<1>D         -g92<8,8,1>D    g2.1<0,1,0>D    -g96<1,1,1>D { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g3<1>UD         g62<8,8,1>UW                    { align1 1H };
mov(8)          g102.1<2>UD     g99<4,4,1>UD                    { align1 2Q I@2 };
mov(8)          g100.1<2>UD     g98<4,4,1>UD                    { align1 1Q I@3 };
add(16)         g63<1>D         g3<1,1,0>D      g60<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g104UD          g100UD          nullUD          0x08200b80                0x00000000
                            ugm MsgDesc: ( load, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
and(16)         g45<1>UD        g63<1,1,0>UD    0x000001ffUD    { align1 1H I@1 compacted };
mov(16)         g108<1>UD       g104<16,8,2>UW                  { align1 1H $3.dst };
add(16)         g105<1>D        g2<0,1,0>D      11308D          { align1 1H };
mul(16)         g110<1>D        g108<1,1,0>D    1484W           { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g107<1>UD       g105<1,1,0>UD   g2<0,1,0>UD     { align1 1H I@2 compacted };
add(16)         g112<1>D        g105<1,1,0>D    g110<1,1,0>D    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  g114<1>UD       g112<1,1,0>UD   g105<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g118<2>UD       g112<4,4,1>UD                   { align1 1Q };
mov(8)          g120<2>UD       g113<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
add3(16)        g116<1>D        -g107<8,8,1>D   g2.1<0,1,0>D    -g114<1,1,1>D { align1 1H I@4 };
add(16)         g18<1>D         -g16<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
mov(8)          g120.1<2>UD     g117<4,4,1>UD                   { align1 2Q I@2 };
mov(8)          g118.1<2>UD     g116<4,4,1>UD                   { align1 1Q I@3 };
mov(8)          g20.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@3 };
mov(8)          g22.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g5UD            g118UD          nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g24UD           g20UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(8)          g17.1<2>D       g2.3<0,1,0>D                    { align1 1Q };
mov(8)          g17<2>D         g2.2<0,1,0>D                    { align1 1Q I@1 };
mov(8)          g19.1<2>D       g2.3<0,1,0>D                    { align1 2Q $5.src };
mov(8)          g19<2>D         g2.2<0,1,0>D                    { align1 2Q I@1 };
and(16)         g13<1>UD        g11<1,1,0>UD    0x00000001UD    { align1 1H $4.dst compacted };
add(16)         g39<1>D         g5<1,1,0>D      g37<1,1,0>D     { align1 1H $4.dst compacted };
cmp.nz.f0.0(16) null<1>D        g13<8,8,1>D     0D              { align1 1H I@2 };
add(16)         g64<1>D         g39<1,1,0>D     g45<1,1,0>D     { align1 1H I@2 compacted };
add(16)         g41<1>D         g39<1,1,0>D     512D            { align1 1H compacted };
(+f0.0) sel(16) g33<1>UD        g24<1,1,0>UD    0x00000000UD    { align1 1H $5.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g17UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sel.l(16)       g43<1>UD        g41<1,1,0>UD    g7<1,1,0>UD     { align1 1H @2 $4.dst compacted };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  g66<1>UD        g64<1,1,0>UD    g39<1,1,0>UD    { align1 1H I@5 compacted };
cmp.l.f0.0(16)  g68<1>UD        g64<1,1,0>UD    g43<1,1,0>UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g51<1>D         -g49<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@3 compacted };
and.nz.f0.0(16) g70<1>UD        ~g66<8,8,1>D    g68<8,8,1>UD    { align1 1H I@2 };
mov(8)          g53.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@2 };
mov(8)          g55.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g57UD           g53UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
add(16)         g72<1>D         g33<1,1,0>D     g64<1,1,0>D     { align1 1H I@7 compacted };
cmp.l.f0.0(16)  g74<1>UD        g72<1,1,0>UD    g33<1,1,0>UD    { align1 1H I@1 compacted };
shl(16)         g78<1>D         g72<8,8,1>D     0x00000002UD    { align1 1H };
shr(16)         g81<1>UD        g72<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
add(16)         g76<1>D         -g74<1,1,0>D    -g66<1,1,0>D    { align1 1H I@3 compacted };
add(16)         g85<1>D         g25<1,1,0>D     g78<1,1,0>D     { align1 1H @3 $6.dst compacted };
shl(16)         g79<1>D         g76<8,8,1>D     0x00000002UD    { align1 1H I@2 };
cmp.l.f0.0(16)  g87<1>UD        g85<1,1,0>UD    g25<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g91<2>UD        g85<4,4,1>UD                    { align1 1Q };
mov(8)          g93<2>UD        g86<4,4,1>UD                    { align1 2Q };
or(16)          g83<1>UD        g79<1,1,0>UD    g81<1,1,0>UD    { align1 1H I@4 compacted };
add3(16)        g89<1>D         g27<8,8,1>D     g83<8,8,1>D     -g87<1,1,1>D { align1 1H @1 $6.dst };
mov(8)          g93.1<2>UD      g90<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g91.1<2>UD      g89<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g36UD           g91UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };

LABEL7:
endif(16)       JIP:  LABEL8                                    { align1 1H };

LABEL8:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g92<1>D         g57<1,1,0>D     32D             { align1 1H $7.dst compacted };
shl(16)         g97<1>D         g9<8,8,1>D      0x00000005UD    { align1 1H $4.dst };
shr(16)         g99<1>UD        g9<1,1,0>UD     0x0000001bUD    { align1 1H $3.src compacted };
and(1)          g126<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
shl(16)         g1<1>UD         g62<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
cmp.l.f0.0(16)  g94<1>UD        g92<1,1,0>UD    g57<1,1,0>UD    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g101<1>D        g92<1,1,0>D     g97<1,1,0>D     { align1 1H I@5 compacted };
add(16)         g96<1>D         -g94<1,1,0>D    g59<1,1,0>D     { align1 1H @2 $7.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g103<1>UD       g101<1,1,0>UD   g92<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g107<2>UD       g101<4,4,1>UD                   { align1 1Q };
mov(8)          g109<2>UD       g102<4,4,1>UD                   { align1 2Q };
add3(16)        g105<1>D        g96<8,8,1>D     g99<8,8,1>D     -g103<1,1,1>D { align1 1H I@3 };
mov(8)          g109.1<2>UD     g106<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g107.1<2>UD     g105<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g118UD          g107UD          nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g126<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g1UD            g118UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g5<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g6<1>UD         g1<1,1,0>UD     0x00000040UD    { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g5<0,1,0>UD     0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g6UD            g120UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g8<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g9<1>UD         g1<1,1,0>UD     0x00000080UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g8<0,1,0>UD     0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g9UD            g122UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g11<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g12<1>UD        g1<1,1,0>UD     0x000000c0UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g11<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g12UD           g124UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
add(16)         g14<1>D         g101<1,1,0>D    16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
and(1)          g42<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g43<1>UD        g1<1,1,0>UD     0x00000100UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
cmp.l.f0.0(16)  g16<1>UD        g14<1,1,0>UD    0x00000010UD    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g20<2>UD        g14<4,4,1>UD                    { align1 1Q $6.src };
mov(8)          g22<2>UD        g15<4,4,1>UD                    { align1 2Q $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g18<1>D         -g16<1,1,0>D    g105<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g22.1<2>UD      g19<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g20.1<2>UD      g18<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g38UD           g20UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g42<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g43UD           g38UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
and(1)          g44<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(16)          g47<1>UD        g1<1,1,0>UD     0x00000140UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g44<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g47UD           g40UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
and(1)          g48<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
and(1)          g56<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
and(1)          g51<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g54<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g48<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g49UD           g1UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g56<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g57UD           g12UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g51<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $6.src };
send(16)        g52UD           g6UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g54<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $6.src };
send(16)        g55UD           g9UD            nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
add(16)         g59<1>F         g57<1,1,0>F     -g49<1,1,0>F    { align1 1H $6.dst compacted };
sel.ge(16)      g62<1>F         g59<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
cmp.l.f0.0(16)  g76<1>F         g62<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H };
math inv(16)    g65<1>F         g62<8,8,1>F     null<8,8,1>F    { align1 1H $14 };
cmp.g.f0.0(16)  g78<1>F         g59<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g60<1>F         g38<1,1,0>F     -g52<1,1,0>F    { align1 1H $6.dst compacted };
mul(16)         g67<1>F         g65<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $14.dst };
and.nz.f0.0(16) null<1>UD       g76<8,8,1>UD    g78<8,8,1>UD    { align1 1H F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sel.ge(16)      g63<1>F         g60<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@2 };
(+f0.0) sel(16) g79<1>UD        g67<1,1,0>UD    0x00000000UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
math inv(16)    g68<1>F         g63<8,8,1>F     null<8,8,1>F    { align1 1H $15 };
cmp.g.f0.0(16)  g81<1>F         g60<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g83<1>F         g63<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g61<1>F         g40<1,1,0>F     -g55<1,1,0>F    { align1 1H $6.dst compacted };
mul(16)         g72<1>F         g68<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H $15.dst };
and.nz.f0.0(16) null<1>UD       g83<8,8,1>UD    g81<8,8,1>UD    { align1 1H F@3 };
sel.ge(16)      g64<1>F         g61<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H F@2 };
(+f0.0) sel(16) g84<1>UD        g72<1,1,0>UD    0x00000000UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
math inv(16)    g73<1>F         g64<8,8,1>F     null<8,8,1>F    { align1 1H $0 };
cmp.g.f0.0(16)  g86<1>F         g61<8,8,1>F     0x704ec3dF  /* 1e-34F */ { align1 1H };
cmp.l.f0.0(16)  g88<1>F         g64<8,8,1>F     0x77f684dfF  /* 1e+34F */ { align1 1H $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mul(16)         g75<1>F         g73<8,8,1>F     0x417d70a4F  /* 15.84F */ { align1 1H I@4 };
and.nz.f0.0(16) null<1>UD       g88<8,8,1>UD    g86<8,8,1>UD    { align1 1H F@2 };
(+f0.0) sel(16) g89<1>UD        g75<1,1,0>UD    0x00000000UD    { align1 1H F@1 compacted };
mov.nz.f0.0(16) null<1>D        g70<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL9              { align1 1H };
shl(16)         g91<1>D         g36<8,8,1>D     0x00000005UD    { align1 1H $8.dst };
add(16)         g94<1>D         g29<1,1,0>D     g91<1,1,0>D     { align1 1H @1 $6.dst compacted };
shr(16)         g92<1>UD        g36<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
cmp.l.f0.0(16)  g96<1>UD        g94<1,1,0>UD    g29<1,1,0>UD    { align1 1H I@2 compacted };
add(16)         g104<1>D        g94<1,1,0>D     16D             { align1 1H compacted };
mov(8)          g100<2>UD       g94<4,4,1>UD                    { align1 1Q };
mov(8)          g102<2>UD       g95<4,4,1>UD                    { align1 2Q };
add3(16)        g98<1>D         g31<8,8,1>D     g92<8,8,1>D     -g96<1,1,1>D { align1 1H @4 $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
cmp.l.f0.0(16)  g106<1>UD       g104<1,1,0>UD   g94<1,1,0>UD    { align1 1H I@4 compacted };
mov(8)          g118<2>UD       g104<4,4,1>UD                   { align1 1Q $6.src };
mov(8)          g120<2>UD       g105<4,4,1>UD                   { align1 2Q $6.src };
mov(8)          g102.1<2>UD     g99<4,4,1>UD                    { align1 2Q I@4 };
mov(8)          g100.1<2>UD     g98<4,4,1>UD                    { align1 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g108<1>D        -g106<1,1,0>D   g98<1,1,0>D     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g5UD            g100UD          nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(8)          g118.1<2>UD     g108<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g120.1<2>UD     g109<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g13UD           g118UD          nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };

LABEL9:
endif(16)       JIP:  LABEL10                                   { align1 1H };

LABEL10:
shl(16)         g39<1>D         g45<8,8,1>D     0x00000002UD    { align1 1H F@6 };
mov(16)         g37<1>UD        g39<8,8,1>UD                    { align1 1H @1 $8.dst };

LABEL12:
cmp.ge.f0.0(16) null<1>UD       g37<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
shl(16)         g119<1>D        g37<8,8,1>D     0x00000002UD    { align1 1H $6.src };
mov(16)         g21<1>UD        0x7f800000UD                    { align1 1H $6.src };
mov(16)         g23<1>UD        0x7f800000UD                    { align1 1H $6.src };
mov(16)         g25<1>UD        0x7f800000UD                    { align1 1H $6.dst };
mov(16)         g27<1>UD        0x7f800000UD                    { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g119UD          g21UD           0x04003504                0x00000200
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };
add(16)         g37<1>D         g37<8,8,1>D     2048D           { align1 1H };

LABEL11:
while(16)       JIP:  LABEL12                                   { align1 1H };
nop                                                             ;

LABEL14:
cmp.ge.f0.0(16) null<1>UD       g39<8,8,1>UD    0x00000030UD    { align1 1H A@2 };
(+f0.0) break(16) JIP:  LABEL13       UIP:  LABEL13             { align1 1H };
shl(16)         g120<1>D        g39<8,8,1>D     0x00000002UD    { align1 1H $6.src };
mov(16)         g22<1>UD        0x00000000UD                    { align1 1H $6.src };
mov(16)         g24<1>UD        0x00000000UD                    { align1 1H $6.dst };
mov(16)         g26<1>UD        0x00000000UD                    { align1 1H $6.dst };
mov(16)         g28<1>UD        0x00000000UD                    { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g122<1>D        g120<1,1,0>D    1152D           { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g122UD          g22UD           0x04003504                0x00000200
                            slm MsgDesc: ( store, a32, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 8 flat )  base_offset 0  { align1 1H $6 };
add(16)         g39<1>D         g39<8,8,1>D     2048D           { align1 1H A@6 };

LABEL13:
while(16)       JIP:  LABEL14                                   { align1 1H };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
send(1)         g123UD          g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g124<1>UD       0x00000000UD                    { align1 WE_all 1Q $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(2)          g124.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g124UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $2 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g125<1>F        g5<1,1,0>F      g13<1,1,0>F     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g1<1>F          g9<1,1,0>F      g17<1,1,0>F     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g21<1>F         g125<1,1,0>F    -g49<1,1,0>F    { align1 1H F@2 compacted };
add(16)         g126<1>F        g7<1,1,0>F      g15<1,1,0>F     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
mul(16)         g25<1>F         g21<1,1,0>F     g79<1,1,0>F     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g22<1>F         g126<1,1,0>F    -g52<1,1,0>F    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g27<1>F         g22<1,1,0>F     g84<1,1,0>F     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g23<1>F         g1<1,1,0>F      -g55<1,1,0>F    { align1 1H F@6 compacted };
mov(16)         g32<1>UD        g27<8,8,1>F                     { align1 1H @2 $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mul(16)         g29<1>F         g23<1,1,0>F     g89<1,1,0>F     { align1 1H A@1 compacted };
mov(16)         g34<1>UD        g29<8,8,1>F                     { align1 1H F@1 };
mov(16)         g30<1>UD        g25<8,8,1>F                     { align1 1H @5 $6.dst };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g70<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g40<1>UD        f0<0,1,0>UW                     { align1 1H I@7 };
mov(1)          g56<1>D         1D                              { align1 WE_all 1N F@2 };
and(16)         g36<1>UD        g3<1,1,0>UD     0x00000003UD    { align1 1H $8.dst compacted };
shr(16)         g38<1>UD        g3<1,1,0>UD     0x00000002UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
shl(16)         g47<1>D         g56<0,1,0>D     g3<8,8,1>UD     { align1 1H $12.src };

LABEL17:
cmp.z.f0.0(16)  null<1>D        g40<8,8,1>D     0D              { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL15       UIP:  LABEL15             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
fbl(16)         g49<1>UD        g40<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         a0<1>UW         0x03c0UW                        { align1 WE_all 1H A@1 };
shl(16)         a0<1>UW         g49<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x03c0UW        { align1 1H A@1 };
mov(16)         g51<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
cmp.z.f0.0(16)  g53<1>D         g51<1,1,0>D     g30<1,1,0>D     { align1 1H A@1 compacted };
and.nz.f0.0(16) null<1>UD       g53<8,8,1>UD    g70<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g55<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g57<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g59<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g61<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g72<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@4 compacted };
mov(16)         g72<1>F         g55<1,1,0>F                     { align1 1H compacted };
mov(16)         g74<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H I@3 compacted };
mov(16)         g74<1>F         g57<1,1,0>F                     { align1 1H compacted };
mov(16)         g64<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g64<1>F         g59<1,1,0>F                     { align1 1H compacted };
mov(16)         g66<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g66<1>F         g61<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g58<1>UD        g17<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g62<1>UD        g9<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g121<2>UD       g72.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
mov(8)          g24<2>UD        g74.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g68<2>UD        g64.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g90<2>UD        g66.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g76<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g76<1>F         g58<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g36<8,8,1>D     1D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(8)       g119<2>F        g72<8,4,2>F     g121<8,4,2>F    { align1 WE_all 1Q I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(8)       g22<2>F         g74<8,4,2>F     g24<8,4,2>F     { align1 WE_all 1Q A@4 };
sel.l(8)        g60<2>F         g64<8,4,2>F     g68<8,4,2>F     { align1 WE_all 1Q I@3 };
sel.l(8)        g88<2>F         g66<8,4,2>F     g90<8,4,2>F     { align1 WE_all 1Q A@2 };
mov(16)         g68<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@6 compacted };
mov(16)         g68<1>F         g62<1,1,0>F                     { align1 1H compacted };
mov(8)          g58<2>UD        g76.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g72.1<2>UD      g119<8,4,2>UD                   { align1 WE_all 1Q A@5 };
mov(8)          g74.1<2>UD      g22<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g64.1<2>UD      g60<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g66.1<2>UD      g88<8,4,2>UD                    { align1 WE_all 1Q A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g103<2>UD       g68.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g56<2>F         g76<8,4,2>F     g58<8,4,2>F     { align1 WE_all 1Q I@6 };
mov(4)          g126<4>UD       g72.2<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g124<4>UD       g72.1<8,2,4>UD                  { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g42<4>UD        g74.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g27<4>UD        g74.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g82<4>UD        g64.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g80<4>UD        g64.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g95<4>UD        g66.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g93<4>UD        g66.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(8)        g101<2>F        g68<8,4,2>F     g103<8,4,2>F    { align1 WE_all 1Q I@7 };
mov(8)          g76.1<2>UD      g56<8,4,2>UD                    { align1 WE_all 1Q F@2 };
sel.ge(4)       g122<4>F        g124<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g25<4>F         g27<8,2,4>F     g42<8,2,4>F     { align1 WE_all 1N I@6 };
sel.l(4)        g78<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@4 };
sel.l(4)        g91<4>F         g93<8,2,4>F     g95<8,2,4>F     { align1 WE_all 1N I@2 };
mov(8)          g68.1<2>UD      g101<8,4,2>UD                   { align1 WE_all 1Q A@5 };
mov(4)          g61<4>UD        g76.1<8,2,4>UD                  { align1 WE_all 1N A@2 };
mov(4)          g72.2<4>UD      g122<8,2,4>UD                   { align1 WE_all 1N F@4 };
mov(4)          g74.2<4>UD      g25<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g64.2<4>UD      g78<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g66.2<4>UD      g91<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(4)          g108<4>UD       g68.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g106<4>UD       g68.1<8,2,4>UD                  { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g21<4>UD        g72.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g3<4>UD         g72.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g55<4>UD        g74.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g49<4>UD        g74.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g87<4>UD        g64.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g85<4>UD        g64.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g78<4>UD        g76.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g100<4>UD       g66.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g98<4>UD        g66.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g104<4>F        g106<8,2,4>F    g108<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g1<4>F          g3<8,2,4>F      g21<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(4)       g43<4>F         g49<8,2,4>F     g55<8,2,4>F     { align1 WE_all 1N I@6 };
sel.l(4)        g83<4>F         g85<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N I@4 };
sel.ge(4)       g59<4>F         g61<8,2,4>F     g78<8,2,4>F     { align1 WE_all 1N I@3 };
sel.l(4)        g96<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g68.2<4>UD      g104<8,2,4>UD                   { align1 WE_all 1N F@6 };
mov(4)          g72.3<4>UD      g1<8,2,4>UD                     { align1 WE_all 1N F@5 };
mov(4)          g74.3<4>UD      g43<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g64.3<4>UD      g83<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g76.2<4>UD      g59<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g66.3<4>UD      g96<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g118<4>UD       g68.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g114<4>UD       g68.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g72.4<1>F       g72.3<0,1,0>F   g72.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g73.4<1>F       g73.3<0,1,0>F   g73.4<4,4,1>F   { align1 WE_all 1N I@7 };
sel.ge(4)       g74.4<1>F       g74.3<0,1,0>F   g74.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g75.4<1>F       g75.3<0,1,0>F   g75.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.l(4)        g64.4<1>F       g64.3<0,1,0>F   g64.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g65.4<1>F       g65.3<0,1,0>F   g65.4<4,4,1>F   { align1 WE_all 1N I@5 };
mov(4)          g83<4>UD        g76.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g81<4>UD        g76.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g66.4<1>F       g66.3<0,1,0>F   g66.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.l(4)        g67.4<1>F       g67.3<0,1,0>F   g67.4<4,4,1>F   { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g109<4>F        g114<8,2,4>F    g118<8,2,4>F    { align1 WE_all 1N I@3 };
sel.ge(8)       g73<1>F         g72.7<0,1,0>F   g73<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.ge(8)       g75<1>F         g74.7<0,1,0>F   g75<8,8,1>F     { align1 WE_all 1Q F@7 };
sel.l(8)        g65<1>F         g64.7<0,1,0>F   g65<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(4)       g79<4>F         g81<8,2,4>F     g83<8,2,4>F     { align1 WE_all 1N I@1 };
sel.l(8)        g67<1>F         g66.7<0,1,0>F   g67<8,8,1>F     { align1 WE_all 1Q F@6 };
mov(4)          g68.3<4>UD      g109<8,2,4>UD                   { align1 WE_all 1N F@6 };
mov(4)          g76.3<4>UD      g79<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g80<1>UD        g75.7<0,1,0>UD  g73.7<0,1,0>UD  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g78<1>UD        g67.7<0,1,0>UD  g65.7<0,1,0>UD  { align1 1H };
sel.l(4)        g68.4<1>F       g68.3<0,1,0>F   g68.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.l(4)        g69.4<1>F       g69.3<0,1,0>F   g69.4<4,4,1>F   { align1 WE_all 1N I@4 };
sel.ge(4)       g76.4<1>F       g76.3<0,1,0>F   g76.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.ge(4)       g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@3 };
cmp.z.f0.0(16)  null<1>D        g36<8,8,1>D     2D              { align1 1H };
sel.l(8)        g69<1>F         g68.7<0,1,0>F   g69<8,8,1>F     { align1 WE_all 1Q F@3 };
sel.ge(8)       g77<1>F         g76.7<0,1,0>F   g77<8,8,1>F     { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g82<1>UD        g69.7<0,1,0>UD  g78<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g84<1>UD        g77.7<0,1,0>UD  g80<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     0D              { align1 1H };
(+f0.0) sel(16) g21<1>F         g82<1,1,0>F     -g84<1,1,0>F    { align1 1H I@2 compacted };
and.nz.f0.0(16) null<1>UD       g47<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL16             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g85<1>D         g51<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g87<1>D         g38<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g89<1>D         g85<8,8,1>D     g36<8,8,1>D     g87<1,1,1>D { align1 1H };
shl(16)         g91<1>D         g89<8,8,1>D     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g91UD           g21UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL16:
endif(16)       JIP:  LABEL15                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(16)          g92<1>D         ~g53<1,1,0>D    ~g70<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g92<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g93<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g40<1>UD        g40<1,1,0>UD    g93<1,1,0>UD    { align1 1H I@1 compacted };

LABEL15:
while(16)       JIP:  LABEL17                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g94<1>D         g32<1,1,0>D     16D             { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g70<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
mov(16)         g41<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL20:
cmp.z.f0.0(16)  null<1>D        g41<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL18       UIP:  LABEL18             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
fbl(16)         g96<1>UD        g41<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         a0<1>UW         0x0bc0UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g96<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0bc0UW        { align1 1H A@1 };
mov(16)         g98<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g100<1>D        g98<1,1,0>D     g94<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g100<8,8,1>UD   g70<8,8,1>UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g102<1>UD       g13<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g104<1>UD       g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
(+f0.0) sel(16) g106<1>UD       g5<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
(+f0.0) sel(16) g108<1>UD       g7<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g122<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H I@4 compacted };
mov(16)         g122<1>F        g102<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g124<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g124<1>F        g104<1,1,0>F                    { align1 1H compacted };
mov(16)         g114<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@2 compacted };
mov(16)         g114<1>F        g106<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g118<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g118<1>F        g108<1,1,0>F                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g105<1>UD       g17<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g109<1>UD       g9<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(8)          g57<2>UD        g122.1<8,4,2>UD                 { align1 WE_all 1Q F@4 };
mov(8)          g72<2>UD        g124.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(8)          g86<2>UD        g114.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
mov(16)         g126<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H A@5 compacted };
mov(16)         g126<1>F        g105<1,1,0>F                    { align1 1H compacted };
mov(8)          g107<2>UD       g118.1<8,4,2>UD                 { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g120<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H A@5 compacted };
mov(16)         g120<1>F        g109<1,1,0>F                    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g36<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g55<2>F         g122<8,4,2>F    g57<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g68<2>F         g124<8,4,2>F    g72<8,4,2>F     { align1 WE_all 1Q A@4 };
sel.l(8)        g84<2>F         g114<8,4,2>F    g86<8,4,2>F     { align1 WE_all 1Q A@3 };
sel.l(8)        g103<2>F        g118<8,4,2>F    g107<8,4,2>F    { align1 WE_all 1Q I@2 };
mov(8)          g26<2>UD        g120.1<8,4,2>UD                 { align1 WE_all 1Q F@5 };
mov(8)          g122.1<2>UD     g55<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g124.1<2>UD     g68<8,4,2>UD                    { align1 WE_all 1Q A@3 };
mov(8)          g114.1<2>UD     g84<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(8)          g118.1<2>UD     g103<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sel.l(8)        g24<2>F         g120<8,4,2>F    g26<8,4,2>F     { align1 WE_all 1Q I@5 };
mov(4)          g62<4>UD        g122.2<8,2,4>UD                 { align1 WE_all 1N I@4 };
mov(4)          g60<4>UD        g122.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g77<4>UD        g124.2<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g75<4>UD        g124.1<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g91<4>UD        g114.2<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g89<4>UD        g114.1<8,2,4>UD                 { align1 WE_all 1N };
mov(8)          g85<2>UD        g126.1<8,4,2>UD                 { align1 WE_all 1Q F@3 };
mov(4)          g1<4>UD         g118.2<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g110<4>UD       g118.1<8,2,4>UD                 { align1 WE_all 1N F@6 };
mov(8)          g120.1<2>UD     g24<8,4,2>UD                    { align1 WE_all 1Q F@1 };
sel.ge(4)       g58<4>F         g60<8,2,4>F     g62<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g73<4>F         g75<8,2,4>F     g77<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g87<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(8)       g83<2>F         g126<8,4,2>F    g85<8,4,2>F     { align1 WE_all 1Q I@4 };
sel.l(4)        g108<4>F        g110<8,2,4>F    g1<8,2,4>F      { align1 WE_all 1N I@2 };
mov(4)          g49<4>UD        g120.2<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g43<4>UD        g120.1<8,2,4>UD                 { align1 WE_all 1N $11.src };
mov(4)          g122.2<4>UD     g58<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g124.2<4>UD     g73<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g114.2<4>UD     g87<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(8)          g126.1<2>UD     g83<8,4,2>UD                    { align1 WE_all 1Q A@2 };
mov(4)          g118.2<4>UD     g108<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g27<4>F         g43<8,2,4>F     g49<8,2,4>F     { align1 WE_all 1N I@6 };
mov(4)          g67<4>UD        g122.3<8,2,4>UD                 { align1 WE_all 1N I@5 };
mov(4)          g65<4>UD        g122.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g80<4>UD        g124.1<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g102<4>UD       g114.3<8,2,4>UD                 { align1 WE_all 1N I@6 };
mov(4)          g96<4>UD        g114.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g90<4>UD        g126.2<8,2,4>UD                 { align1 WE_all 1N A@4 };
mov(4)          g88<4>UD        g126.1<8,2,4>UD                 { align1 WE_all 1N F@4 };
mov(4)          g82<4>UD        g124.3<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g23<4>UD        g118.3<8,2,4>UD                 { align1 WE_all 1N I@7 };
mov(4)          g21<4>UD        g118.1<8,2,4>UD                 { align1 WE_all 1N $8.src };
mov(4)          g120.2<4>UD     g27<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@7 };
sel.l(4)        g92<4>F         g96<8,2,4>F     g102<8,2,4>F    { align1 WE_all 1N I@7 };
sel.ge(4)       g86<4>F         g88<8,2,4>F     g90<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g78<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@4 };
sel.l(4)        g2<4>F          g21<8,2,4>F     g23<8,2,4>F     { align1 WE_all 1N I@2 };
mov(4)          g54<4>UD        g120.3<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g52<4>UD        g120.1<8,2,4>UD                 { align1 WE_all 1N };
mov(4)          g122.3<4>UD     g63<8,2,4>UD                    { align1 WE_all 1N F@5 };
mov(4)          g114.3<4>UD     g92<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g126.2<4>UD     g86<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g124.3<4>UD     g78<8,2,4>UD                    { align1 WE_all 1N F@2 };
mov(4)          g118.3<4>UD     g2<8,2,4>UD                     { align1 WE_all 1N F@1 };
sel.l(4)        g50<4>F         g52<8,2,4>F     g54<8,2,4>F     { align1 WE_all 1N I@6 };
sel.ge(4)       g122.4<1>F      g122.3<0,1,0>F  g122.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.ge(4)       g123.4<1>F      g123.3<0,1,0>F  g123.4<4,4,1>F  { align1 WE_all 1N I@5 };
sel.l(4)        g114.4<1>F      g114.3<0,1,0>F  g114.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g115.4<1>F      g115.3<0,1,0>F  g115.4<4,4,1>F  { align1 WE_all 1N I@4 };
mov(4)          g102<4>UD       g126.3<8,2,4>UD                 { align1 WE_all 1N A@3 };
mov(4)          g96<4>UD        g126.1<8,2,4>UD                 { align1 WE_all 1N F@7 };
sel.ge(4)       g124.4<1>F      g124.3<0,1,0>F  g124.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.ge(4)       g125.4<1>F      g125.3<0,1,0>F  g125.4<4,4,1>F  { align1 WE_all 1N I@4 };
sel.l(4)        g118.4<1>F      g118.3<0,1,0>F  g118.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.l(4)        g119.4<1>F      g119.3<0,1,0>F  g119.4<4,4,1>F  { align1 WE_all 1N I@3 };
mov(4)          g120.3<4>UD     g50<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.ge(8)       g123<1>F        g122.7<0,1,0>F  g123<8,8,1>F    { align1 WE_all 1Q F@7 };
sel.l(8)        g115<1>F        g114.7<0,1,0>F  g115<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.ge(4)       g91<4>F         g96<8,2,4>F     g102<8,2,4>F    { align1 WE_all 1N I@2 };
sel.ge(8)       g125<1>F        g124.7<0,1,0>F  g125<8,8,1>F    { align1 WE_all 1Q F@6 };
sel.l(8)        g119<1>F        g118.7<0,1,0>F  g119<8,8,1>F    { align1 WE_all 1Q F@5 };
sel.l(4)        g120.4<1>F      g120.3<0,1,0>F  g120.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g121.4<1>F      g121.3<0,1,0>F  g121.4<4,4,1>F  { align1 WE_all 1N I@1 };
mov(4)          g126.3<4>UD     g91<8,2,4>UD                    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g3<1>UD         g125.7<0,1,0>UD g123.7<0,1,0>UD { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
(+f0.0) sel(16) g1<1>UD         g119.7<0,1,0>UD g115.7<0,1,0>UD { align1 1H };
sel.l(8)        g121<1>F        g120.7<0,1,0>F  g121<8,8,1>F    { align1 WE_all 1Q F@1 };
sel.ge(4)       g126.4<1>F      g126.3<0,1,0>F  g126.4<4,4,1>F  { align1 WE_all 1N I@3 };
sel.ge(4)       g127.4<1>F      g127.3<0,1,0>F  g127.4<4,4,1>F  { align1 WE_all 1N I@3 };
cmp.z.f0.0(16)  null<1>D        g36<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g127<1>F        g126.7<0,1,0>F  g127<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g21<1>UD        g121.7<0,1,0>UD g1<1,1,0>UD     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g23<1>UD        g127.7<0,1,0>UD g3<1,1,0>UD     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g49<1>F         g21<1,1,0>F     -g23<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g47<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL19         UIP:  LABEL19             { align1 1H };
mul(16)         g24<1>D         g98<1,1,0>D     6W              { align1 1H F@1 compacted };
mul(16)         g26<1>D         g38<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g28<1>D         g24<8,8,1>D     g36<8,8,1>D     g26<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g43<1>D         g28<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g43UD           g49UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };

LABEL19:
endif(16)       JIP:  LABEL18                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
or(16)          g49<1>D         ~g100<1,1,0>D   ~g70<1,1,0>D    { align1 1H F@1 compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g49<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g50<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g41<1>UD        g41<1,1,0>UD    g50<1,1,0>UD    { align1 1H I@1 compacted };

LABEL18:
while(16)       JIP:  LABEL20                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
add(16)         g51<1>D         g34<1,1,0>D     32D             { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g70<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
mov(16)         g42<1>UD        f0<0,1,0>UW                     { align1 1H };

LABEL23:
cmp.z.f0.0(16)  null<1>D        g42<8,8,1>D     0D              { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL21       UIP:  LABEL21             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
fbl(16)         g53<1>UD        g42<8,8,1>UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
mov(16)         a0<1>UW         0x0660UW                        { align1 WE_all 1H };
shl(16)         a0<1>UW         g53<16,8,2>W    0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0660UW        { align1 1H A@1 };
mov(16)         g55<1>UD        g[a0]<VxH,1,0>UD                { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  g57<1>D         g55<1,1,0>D     g51<1,1,0>D     { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g57<8,8,1>UD    g70<8,8,1>UD    { align1 1H I@1 };
(+f0.0) sel(16) g59<1>UD        g13<8,8,1>UD    0xff800000UD    { align1 1H };
(+f0.0) sel(16) g61<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g63<1>UD        g5<8,8,1>UD     0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
(+f0.0) sel(16) g65<1>UD        g7<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g76<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@2 compacted };
mov(16)         g76<1>F         g59<1,1,0>F                     { align1 1H compacted };
mov(16)         g78<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@3 compacted };
mov(16)         g78<1>F         g61<1,1,0>F                     { align1 1H compacted };
mov(16)         g68<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H A@2 compacted };
mov(16)         g68<1>F         g63<1,1,0>F                     { align1 1H compacted };
mov(16)         g72<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@1 compacted };
mov(16)         g72<1>F         g65<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g62<1>UD        g17<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g66<1>UD        g9<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(8)          g74<2>UD        g76.1<8,4,2>UD                  { align1 WE_all 1Q F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g94<2>UD        g78.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g105<2>UD       g68.1<8,4,2>UD                  { align1 WE_all 1Q F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(8)          g123<2>UD       g72.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
mov(16)         g80<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H A@6 compacted };
mov(16)         g80<1>F         g62<1,1,0>F                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g36<8,8,1>D     1D              { align1 1H };
sel.ge(8)       g64<2>F         g76<8,4,2>F     g74<8,4,2>F     { align1 WE_all 1Q I@5 };
sel.ge(8)       g92<2>F         g78<8,4,2>F     g94<8,4,2>F     { align1 WE_all 1Q I@4 };
mov(16)         g74<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@6 compacted };
mov(16)         g74<1>F         g66<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(8)        g103<2>F        g68<8,4,2>F     g105<8,4,2>F    { align1 WE_all 1Q I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(8)        g121<2>F        g72<8,4,2>F     g123<8,4,2>F    { align1 WE_all 1Q I@2 };
mov(8)          g114<2>UD       g80.1<8,4,2>UD                  { align1 WE_all 1Q F@6 };
mov(8)          g76.1<2>UD      g64<8,4,2>UD                    { align1 WE_all 1Q A@5 };
mov(8)          g78.1<2>UD      g92<8,4,2>UD                    { align1 WE_all 1Q A@4 };
mov(8)          g26<2>UD        g74.1<8,4,2>UD                  { align1 WE_all 1Q F@3 };
mov(8)          g68.1<2>UD      g103<8,4,2>UD                   { align1 WE_all 1Q A@2 };
mov(8)          g72.1<2>UD      g121<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sel.ge(8)       g105<2>F        g80<8,4,2>F     g114<8,4,2>F    { align1 WE_all 1Q I@6 };
mov(4)          g86<4>UD        g76.2<8,2,4>UD                  { align1 WE_all 1N I@5 };
mov(4)          g84<4>UD        g76.1<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g99<4>UD        g78.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g97<4>UD        g78.1<8,2,4>UD                  { align1 WE_all 1N };
sel.l(8)        g24<2>F         g74<8,4,2>F     g26<8,4,2>F     { align1 WE_all 1Q I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(4)          g110<4>UD       g68.2<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g108<4>UD       g68.1<8,2,4>UD                  { align1 WE_all 1N $9.src };
mov(4)          g1<4>UD         g72.2<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g126<4>UD       g72.1<8,2,4>UD                  { align1 WE_all 1N };
mov(8)          g80.1<2>UD      g105<8,4,2>UD                   { align1 WE_all 1Q F@2 };
sel.ge(4)       g82<4>F         g84<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N I@7 };
sel.ge(4)       g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@6 };
mov(8)          g74.1<2>UD      g24<8,4,2>UD                    { align1 WE_all 1Q F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(4)        g124<4>F        g126<8,2,4>F    g1<8,2,4>F      { align1 WE_all 1N I@3 };
mov(4)          g76.2<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@3 };
mov(4)          g78.2<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g106<4>F        g108<8,2,4>F    g110<8,2,4>F    { align1 WE_all 1N I@4 };
mov(4)          g49<4>UD        g74.2<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g40<4>UD        g74.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g72.2<4>UD      g124<8,2,4>UD                   { align1 WE_all 1N F@2 };
mov(4)          g126<4>UD       g80.2<8,2,4>UD                  { align1 WE_all 1N A@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g91<4>UD        g76.3<8,2,4>UD                  { align1 WE_all 1N I@6 };
mov(4)          g89<4>UD        g76.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g104<4>UD       g78.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g102<4>UD       g78.1<8,2,4>UD                  { align1 WE_all 1N $6.src };
mov(4)          g68.2<4>UD      g106<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g27<4>F         g40<8,2,4>F     g49<8,2,4>F     { align1 WE_all 1N I@7 };
mov(4)          g23<4>UD        g72.3<8,2,4>UD                  { align1 WE_all 1N I@7 };
mov(4)          g21<4>UD        g72.1<8,2,4>UD                  { align1 WE_all 1N $8.src };
mov(4)          g124<4>UD       g80.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g87<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(4)       g100<4>F        g102<8,2,4>F    g104<8,2,4>F    { align1 WE_all 1N I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g120<4>UD       g68.3<8,2,4>UD                  { align1 WE_all 1N I@4 };
mov(4)          g118<4>UD       g68.1<8,2,4>UD                  { align1 WE_all 1N $6.src };
mov(4)          g74.2<4>UD      g27<8,2,4>UD                    { align1 WE_all 1N F@3 };
sel.l(4)        g2<4>F          g21<8,2,4>F     g23<8,2,4>F     { align1 WE_all 1N I@5 };
sel.ge(4)       g122<4>F        g124<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N I@4 };
mov(4)          g76.3<4>UD      g87<8,2,4>UD                    { align1 WE_all 1N F@4 };
mov(4)          g78.3<4>UD      g100<8,2,4>UD                   { align1 WE_all 1N F@3 };
sel.l(4)        g114<4>F        g118<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@4 };
mov(4)          g61<4>UD        g74.3<8,2,4>UD                  { align1 WE_all 1N I@3 };
mov(4)          g59<4>UD        g74.1<8,2,4>UD                  { align1 WE_all 1N };
mov(4)          g72.3<4>UD      g2<8,2,4>UD                     { align1 WE_all 1N F@3 };
mov(4)          g80.2<4>UD      g122<8,2,4>UD                   { align1 WE_all 1N F@2 };
sel.ge(4)       g76.4<1>F       g76.3<0,1,0>F   g76.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@6 };
sel.ge(4)       g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@5 };
sel.ge(4)       g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@5 };
mov(4)          g68.3<4>UD      g114<8,2,4>UD                   { align1 WE_all 1N F@5 };
sel.l(4)        g53<4>F         g59<8,2,4>F     g61<8,2,4>F     { align1 WE_all 1N I@4 };
sel.l(4)        g72.4<1>F       g72.3<0,1,0>F   g72.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g73.4<1>F       g73.3<0,1,0>F   g73.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g21<4>UD        g80.3<8,2,4>UD                  { align1 WE_all 1N A@2 };
mov(4)          g3<4>UD         g80.1<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(8)       g77<1>F         g76.7<0,1,0>F   g77<8,8,1>F     { align1 WE_all 1Q F@6 };
sel.ge(8)       g79<1>F         g78.7<0,1,0>F   g79<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.l(4)        g68.4<1>F       g68.3<0,1,0>F   g68.4<4,4,1>F   { align1 WE_all 1N I@3 };
sel.l(4)        g69.4<1>F       g69.3<0,1,0>F   g69.4<4,4,1>F   { align1 WE_all 1N I@3 };
mov(4)          g74.3<4>UD      g53<8,2,4>UD                    { align1 WE_all 1N F@7 };
sel.l(8)        g73<1>F         g72.7<0,1,0>F   g73<8,8,1>F     { align1 WE_all 1Q F@5 };
sel.ge(4)       g1<4>F          g3<8,2,4>F      g21<8,2,4>F     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
(+f0.0) sel(16) g84<1>UD        g79.7<0,1,0>UD  g77.7<0,1,0>UD  { align1 1H };
sel.l(8)        g69<1>F         g68.7<0,1,0>F   g69<8,8,1>F     { align1 WE_all 1Q F@3 };
sel.l(4)        g74.4<1>F       g74.3<0,1,0>F   g74.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g75.4<1>F       g75.3<0,1,0>F   g75.4<4,4,1>F   { align1 WE_all 1N I@2 };
mov(4)          g80.3<4>UD      g1<8,2,4>UD                     { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
(+f0.0) sel(16) g82<1>UD        g73.7<0,1,0>UD  g69.7<0,1,0>UD  { align1 1H };
sel.l(8)        g75<1>F         g74.7<0,1,0>F   g75<8,8,1>F     { align1 WE_all 1Q F@1 };
sel.ge(4)       g80.4<1>F       g80.3<0,1,0>F   g80.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.ge(4)       g81.4<1>F       g81.3<0,1,0>F   g81.4<4,4,1>F   { align1 WE_all 1N I@2 };
cmp.z.f0.0(16)  null<1>D        g36<8,8,1>D     2D              { align1 1H };
sel.ge(8)       g81<1>F         g80.7<0,1,0>F   g81<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
(+f0.0) sel(16) g86<1>UD        g75.7<0,1,0>UD  g82<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
(+f0.0) sel(16) g88<1>UD        g81.7<0,1,0>UD  g84<1,1,0>UD    { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g53<1>F         g86<1,1,0>F     -g88<1,1,0>F    { align1 1H compacted };
and.nz.f0.0(16) null<1>UD       g47<8,8,1>UD    0x00000077UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL22         UIP:  LABEL22             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mul(16)         g89<1>D         g55<1,1,0>D     6W              { align1 1H compacted };
mul(16)         g91<1>D         g38<1,1,0>D     3W              { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g93<1>D         g89<8,8,1>D     g36<8,8,1>D     g91<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g95<1>D         g93<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        nullUD          g95UD           g53UD           0x04040515                0x00000080
                            slm MsgDesc: ( atomic_fmin, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };

LABEL22:
endif(16)       JIP:  LABEL21                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
or(16)          g96<1>D         ~g57<1,1,0>D    ~g70<1,1,0>D    { align1 1H compacted };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g96<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g97<1>UD        f0<0,1,0>UW                     { align1 1H };
and(16)         g42<1>UD        g42<1,1,0>UD    g97<1,1,0>UD    { align1 1H I@1 compacted };

LABEL21:
while(16)       JIP:  LABEL23                                   { align1 1H };
mov.nz.f0.0(16) null<1>D        g70<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL24         UIP:  LABEL24             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
shl(16)         g98<1>D         g30<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g100<1>D        g98<1,1,0>D     1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g100UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@7 };
shl(16)         g101<1>D        g32<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g103<1>D        g101<1,1,0>D    1216D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g103UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
shl(16)         g104<1>D        g34<8,8,1>D     0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g106<1>D        g104<1,1,0>D    1280D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g106UD          nullUD          0x04040508                0x00000000
                            slm MsgDesc: ( atomic_inc, a32, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };

LABEL24:
endif(16)       JIP:  LABEL25                                   { align1 1H };

LABEL25:
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync allwr(1)                   null<0,1,0>UB                   { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
send(1)         g107UD          g0UD            nullUD          0x0210011f                0x00000000
                            slm MsgDesc: ( fence, a32, threadgroup, none, normal_routing dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
mov(8)          g108<1>UD       0x00000000UD                    { align1 WE_all 1Q $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(2)          g108.10<1>UB    g0.11<0,1,0>UB                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g108UD          nullUD          0x02000004                0x00000000
                            gateway MsgDesc: (barrier msg)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H $5 };
sync bar(16)                    null<0,1,0>UB                   { align1 WE_all 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
mov(16)         g43<1>UD        g45<8,8,1>UD                    { align1 1H };

LABEL28:
cmp.ge.f0.0(16) null<1>UD       g43<8,8,1>UD    0x00000120UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL26       UIP:  LABEL26             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shl(16)         g109<1>D        g43<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g54UD           g109UD          nullUD          0x04200500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
cmp.nz.f0.0(16) null<1>F        g54<1,1,0>F     0x7f800000F  /* infF */ { align1 1H $9.dst compacted };
(+f0.0) if(16)  JIP:  LABEL27         UIP:  LABEL27             { align1 1H };
add(16)         g114<1>D        g112<1,1,0>D    44D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
cmp.l.f0.0(16)  g118<1>UD       g114<1,1,0>UD   g112<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
add(16)         g120<1>D        g114<1,1,0>D    g109<1,1,0>D    { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g114<1,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
mov(8)          g1<2>UD         g120<4,4,1>UD                   { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@7 };
mov(8)          g3<2>UD         g121<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add3(16)        g124<1>D        -g118<8,8,1>D   g116<8,8,1>D    -g122<1,1,1>D { align1 1H };
mov(8)          g3.1<2>UD       g125<4,4,1>UD                   { align1 2Q I@1 };
mov(8)          g1.1<2>UD       g124<4,4,1>UD                   { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g1UD            g54UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };

LABEL27:
endif(16)       JIP:  LABEL26                                   { align1 1H };
add(16)         g43<1>D         g43<1,1,0>D     512D            { align1 1H compacted };

LABEL26:
while(16)       JIP:  LABEL28                                   { align1 1H };
nop                                                             ;

LABEL31:
cmp.ge.f0.0(16) null<1>UD       g45<8,8,1>UD    0x00000030UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL29       UIP:  LABEL29             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
shl(16)         g2<1>D          g45<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
add(16)         g4<1>D          g2<1,1,0>D      1152D           { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
send(16)        g55UD           g4UD            nullUD          0x04200500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
cmp.nz.f0.0(16) null<1>D        g55<8,8,1>D     0D              { align1 1H $3.dst };
(+f0.0) if(16)  JIP:  LABEL30         UIP:  LABEL30             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g5<1>D          g112<1,1,0>D    1196D           { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.l.f0.0(16)  g7<1>UD         g5<1,1,0>UD     g112<1,1,0>UD   { align1 1H A@1 compacted };
add(16)         g9<1>D          g5<1,1,0>D      g2<1,1,0>D      { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g11<1>UD        g9<1,1,0>UD     g5<1,1,0>UD     { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g15<2>UD        g9<4,4,1>UD                     { align1 1Q F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $3.src };
mov(8)          g17<2>UD        g10<4,4,1>UD                    { align1 2Q F@7 };
add3(16)        g13<1>D         -g7<8,8,1>D     g116<8,8,1>D    -g11<1,1,1>D { align1 1H A@3 };
mov(8)          g17.1<2>UD      g14<4,4,1>UD                    { align1 2Q I@1 };
mov(8)          g15.1<2>UD      g13<4,4,1>UD                    { align1 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g15UD           g55UD           0x0804058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };

LABEL30:
endif(16)       JIP:  LABEL29                                   { align1 1H };
add(16)         g45<1>D         g45<1,1,0>D     512D            { align1 1H compacted };

LABEL29:
while(16)       JIP:  LABEL31                                   { align1 1H };
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q F@2 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_BFS_BFS_pass1_indexed_code[] = {
    0x80000065, 0x17058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x1d054220, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00170c, 0x00340000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x17050220, 0x00000024, 0x00000000,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa02e0040, 0x42810203, 0xa03a0040, 0x42c10203,
    0x27301a70, 0x02102e03, 0x00030061, 0x34060220,
    0x00342e05, 0x00000000, 0x00130061, 0x36060220,
    0x00342f05, 0x00000000, 0x273c1c70, 0x02103a03,
    0xa0321c40, 0x02123012, 0x00031961, 0x34260220,
    0x00343205, 0x00000000, 0x00131a61, 0x36260220,
    0x00343305, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x38140000,
    0xfb003424, 0x00000000, 0x00041c69, 0x3e058660,
    0x02461d05, 0x00000002, 0xa0401940, 0x3e003a02,
    0x27421970, 0x3a004003, 0x00030061, 0x46060220,
    0x00344005, 0x00000000, 0x00130061, 0x48060220,
    0x00344105, 0x00000000, 0x00041b52, 0x44042e68,
    0x06263c05, 0x42050224, 0x00031961, 0x46260220,
    0x00344405, 0x00000000, 0x00131a61, 0x48260220,
    0x00344505, 0x00000000, 0xe2160961, 0x00114004,
    0x80000965, 0x16058220, 0x02001604, 0xffffffff,
    0x80000061, 0x30010220, 0x00004000, 0x00000000,
    0x80001a4c, 0x4a050220, 0x00001604, 0x00000000,
    0x80030061, 0x52054410, 0x00000000, 0x76543210,
    0x80001a69, 0x10018220, 0x02004a04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x4c060660, 0x00010300, 0x00000000,
    0x80000061, 0x4c260660, 0x00010310, 0x00000000,
    0x64521a40, 0x00805295, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031a61, 0x10260660,
    0x00004c24, 0x00000000, 0x80041a40, 0x51058150,
    0x05585205, 0xffffffff, 0x80031a61, 0x10060660,
    0x00004c04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8a004231, 0x47140000,
    0xfb00100c, 0x00340000, 0x8004d261, 0x4f054660,
    0x00000000, 0x00000000, 0x00040061, 0x4f050660,
    0x00464705, 0x00000000, 0x80041961, 0x10014110,
    0x00000000, 0x09e009e0, 0x80040069, 0x10018510,
    0x01465105, 0x00020002, 0x80040940, 0x10018110,
    0x01461001, 0x09e009e0, 0xe34d0961, 0x001b0004,
    0x80001961, 0x4d054660, 0x00000000, 0x00000000,
    0x80031940, 0x4d260660, 0x06444d06, 0x00444d26,
    0x80021940, 0x4d470660, 0x06424d27, 0x00424d47,
    0x80021940, 0x4d670660, 0x06424d27, 0x00424d67,
    0x80021940, 0x4d850660, 0x06004d64, 0x00344d85,
    0x80021a40, 0x4e850660, 0x06004e64, 0x00344e85,
    0xa44e1940, 0x4e014d82, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa01f0040, 0x4d201702,
    0x27531970, 0x47001f03, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22465305, 0x00000000, 0x00040061, 0x1b050120,
    0x20003000, 0x00000000, 0x01040022, 0x0001c060,
    0x00000030, 0x00000030, 0x00040061, 0x19054220,
    0x00000000, 0xffffffff, 0x00040028, 0x0001c660,
    0x00000088, 0x00000010, 0x00040025, 0x00004600,
    0x00000000, 0x00000078, 0xa0540040, 0x47004d02,
    0xa01d0040, 0x01001d03, 0xa0171a40, 0x55301752,
    0x0004a170, 0x00010220, 0x42461d05, 0x00463805,
    0x01040022, 0x0001c060, 0x00000030, 0x00000030,
    0x00041f61, 0x19054220, 0x00000000, 0x00000000,
    0x00040028, 0x0001c660, 0x00000020, 0x00000010,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00040027, 0x00014060, 0x00000000, 0xfffffce8,
    0x00041a61, 0x00010660, 0x20461905, 0x00000000,
    0x01040022, 0x0001c060, 0x000000b0, 0x00000090,
    0x00041e4c, 0x55050220, 0x00461b05, 0x00000000,
    0x00040070, 0x00018660, 0x16461b05, 0x00000000,
    0x11041a62, 0x57058220, 0x02465505, 0x00000020,
    0xa0211940, 0x57001d02, 0x80040061, 0x10014110,
    0x00000000, 0x03e003e0, 0x00040069, 0x10018510,
    0x01565706, 0x00020002, 0x00040940, 0x10018110,
    0x01461001, 0x03e003e0, 0xe0230961, 0x001b0004,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00041b61, 0x21054220, 0x00000000, 0x00000000,
    0x00041b61, 0x23054220, 0x00000000, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00041b69, 0x58058660, 0x02462105, 0x00000002,
    0x00040040, 0x5a058660, 0x06000204, 0x0000082e,
    0xa00e0040, 0x03410243, 0xe03a0065, 0x0ff10043,
    0x00041e69, 0x25058660, 0x02462305, 0x00000009,
    0xa02f0040, 0x01010243, 0x275c1d70, 0x02105a03,
    0xa05e1f40, 0x58005a02, 0x80030061, 0x3e054410,
    0x00000000, 0x76543210, 0x00031f61, 0x14060220,
    0x00340e05, 0x00000000, 0x00131f61, 0x16060220,
    0x00340f05, 0x00000000, 0x00041f69, 0x3c058660,
    0x02463a05, 0x00000004, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00031f61, 0x35060220,
    0x00342f05, 0x00000000, 0x80101f01, 0x00000000,
    0x00000000, 0x00000000, 0x00132161, 0x37060220,
    0x00343005, 0x00000000, 0x27601f70, 0x5a005e03,
    0x00030061, 0x64060220, 0x00345e05, 0x00000000,
    0x00130061, 0x66060220, 0x00345f05, 0x00000000,
    0x643e1f40, 0x00803e95, 0x00041c52, 0x62042e68,
    0x06265c05, 0x60050224, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x03050120,
    0x00463e05, 0x00000000, 0x00131a61, 0x66260220,
    0x00346305, 0x00000000, 0x00031b61, 0x64260220,
    0x00346205, 0x00000000, 0xa03f1b40, 0x3c000302,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x68140000, 0xf7006424, 0x00020000,
    0xe02d1965, 0x1ff03f03, 0x00042361, 0x6c050120,
    0x00566806, 0x00000000, 0x00040040, 0x69058660,
    0x06000204, 0x00002c2c, 0x606e1a41, 0x5cc06c02,
    0x276b1a70, 0x02106903, 0xa0701a40, 0x6e006902,
    0x27721970, 0x69007003, 0x00030061, 0x76060220,
    0x00347005, 0x00000000, 0x00130061, 0x78060220,
    0x00347105, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x27100070, 0x02100e2b,
    0x00041c52, 0x74042e68, 0x06266b05, 0x72050224,
    0xa0121a40, 0x0212101a, 0x00131a61, 0x78260220,
    0x00347505, 0x00000000, 0x00031b61, 0x76260220,
    0x00347405, 0x00000000, 0x00031b61, 0x14260220,
    0x00341205, 0x00000000, 0x00131c61, 0x16260220,
    0x00341305, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x05440000,
    0xfb007624, 0x000c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x18140000,
    0xfb001424, 0x00000000, 0x00030061, 0x11260660,
    0x00000264, 0x00000000, 0x00031961, 0x11060660,
    0x00000244, 0x00000000, 0x00133561, 0x13260660,
    0x00000264, 0x00000000, 0x00131961, 0x13060660,
    0x00000244, 0x00000000, 0xe00d2465, 0x00100b03,
    0xa0272440, 0x25000502, 0x00041a70, 0x00018660,
    0x26460d05, 0x00000000, 0xa0401a40, 0x2d002702,
    0xa0290040, 0x20002703, 0xef212562, 0x00001803,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x19440000, 0xfb001124, 0x000c0000,
    0x272ba462, 0x07002903, 0x27310070, 0x02102f2b,
    0x27421d70, 0x27004003, 0x27441b70, 0x2b004003,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0331b40, 0x0212311a, 0x00041a65, 0x46052620,
    0x22464205, 0x00464405, 0x00031a61, 0x35260220,
    0x00343305, 0x00000000, 0x00131b61, 0x37260220,
    0x00343405, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x39240000,
    0xfb003524, 0x00040000, 0x01040022, 0x0001c060,
    0x000000d8, 0x000000d8, 0xa0481f40, 0x40002102,
    0x274a1970, 0x21004803, 0x00040069, 0x4e058660,
    0x02464805, 0x00000002, 0xe0510068, 0x01e04803,
    0xa04c1b40, 0x42224a02, 0xa055b640, 0x4e001902,
    0x00041a69, 0x4f058660, 0x02464c05, 0x00000002,
    0x27571a70, 0x19005503, 0x00030061, 0x5b060220,
    0x00345505, 0x00000000, 0x00130061, 0x5d060220,
    0x00345605, 0x00000000, 0x20531c66, 0x51004f03,
    0x00049652, 0x59040e68, 0x0e2e1b05, 0x57055305,
    0x00131961, 0x5d260220, 0x00345a05, 0x00000000,
    0x00031a61, 0x5b260220, 0x00345905, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x24140000, 0xfb005b24, 0x00000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0xa05c2740, 0x02003903, 0x00042469, 0x61058660,
    0x02460905, 0x00000005, 0xe0633368, 0x01b00903,
    0x80000065, 0x7e058220, 0x020000a4, 0xfffffc00,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x01058120, 0x02463e05, 0x00000002,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x275e1d70, 0x39005c03, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0651d40, 0x61005c02,
    0xa060a740, 0x3b025e02, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x27671a70, 0x5c006503,
    0x00030061, 0x6b060220, 0x00346505, 0x00000000,
    0x00130061, 0x6d060220, 0x00346605, 0x00000000,
    0x00041b52, 0x69040e68, 0x0e2e6005, 0x67056305,
    0x00131961, 0x6d260220, 0x00346a05, 0x00000000,
    0x00031a61, 0x6b260220, 0x00346905, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x76440000, 0xfb006b24, 0x000c0000,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007e04, 0x0000008f,
    0x00049631, 0x00020100, 0xfa080114, 0x04007604,
    0x80000065, 0x05058220, 0x020000a4, 0xfffffc00,
    0xe0063666, 0x04000103, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02000504, 0x0000008f, 0x00049631, 0x00020100,
    0xfa080614, 0x04007804, 0x80000065, 0x08058220,
    0x020000a4, 0xfffffc00, 0xe0090066, 0x08000103,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02000804, 0x0000008f,
    0x00049631, 0x00020100, 0xfa080914, 0x04007a04,
    0x80000065, 0x0b058220, 0x020000a4, 0xfffffc00,
    0xe00c0066, 0x0c000103, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02000b04, 0x0000008f, 0x00049a31, 0x00020100,
    0xfa080c14, 0x04007c04, 0xa00e0040, 0x01006503,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x2a058220, 0x020000a4, 0xfffffc00,
    0xe02b0066, 0x10000103, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0xe7101b70, 0x01000e03,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00033661, 0x14060220, 0x00340e05, 0x00000000,
    0x00133561, 0x16060220, 0x00340f05, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa0121b40, 0x69021002, 0x00131961, 0x16260220,
    0x00341305, 0x00000000, 0x00031a61, 0x14260220,
    0x00341205, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x26240000,
    0xfb001424, 0x00040000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02002a04, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa082b14, 0x04002604, 0x80003b65, 0x2c058220,
    0x020000a4, 0xfffffc00, 0xe02f0066, 0x14000103,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002c04, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa082f14, 0x04002804,
    0x80003c65, 0x30058220, 0x020000a4, 0xfffffc00,
    0x80003765, 0x38058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x33058220, 0x020000a4, 0xfffffc00,
    0x80003765, 0x36058220, 0x020000a4, 0xfffffc00,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003004, 0x0000000f,
    0x00049d31, 0x31160100, 0xfa000114, 0x04000000,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003804, 0x0000000f,
    0x00049631, 0x39160100, 0xfa000c14, 0x04000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80003666, 0x10218220, 0x02003304, 0x0000000f,
    0x00049631, 0x34160100, 0xfa000614, 0x04000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003666, 0x10218220, 0x02003604, 0x0000000f,
    0x00049631, 0x37160100, 0xfa000914, 0x04000000,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x203b2640, 0x31203900, 0x00041162, 0x3e058aa0,
    0x4a463b05, 0x0704ec3d, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040070, 0x4c058aa0,
    0x5a463e05, 0x77f684df, 0x00044e38, 0x41050aa0,
    0x1a463e05, 0x00460001, 0x00040070, 0x4e058aa0,
    0x3a463b05, 0x0704ec3d, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x203c2640, 0x34202600,
    0x00042e41, 0x43058aa0, 0x0a464105, 0x417d70a4,
    0x00041365, 0x00010220, 0x22464c05, 0x00464e05,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x00041262, 0x3f058aa0, 0x4a463c05, 0x0704ec3d,
    0xef4f1262, 0x00004303, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044f38, 0x44050aa0,
    0x1a463f05, 0x00460001, 0x00040070, 0x51058aa0,
    0x3a463c05, 0x0704ec3d, 0x00043f70, 0x53058aa0,
    0x5a463f05, 0x77f684df, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x203d2640, 0x37202800,
    0x00042f41, 0x48058aa0, 0x0a464405, 0x417d70a4,
    0x00041365, 0x00010220, 0x22465305, 0x00465105,
    0x00041262, 0x40058aa0, 0x4a463d05, 0x0704ec3d,
    0xef541262, 0x00004803, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044038, 0x49050aa0,
    0x1a464005, 0x00460001, 0x00040070, 0x56058aa0,
    0x3a463d05, 0x0704ec3d, 0x00043070, 0x58058aa0,
    0x5a464005, 0x77f684df, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00041c41, 0x4b058aa0,
    0x0a464905, 0x417d70a4, 0x00041265, 0x00010220,
    0x22465805, 0x00465605, 0xef591162, 0x00004b03,
    0x00040061, 0x00010660, 0x20464605, 0x00000000,
    0x01040022, 0x0001c060, 0x00000140, 0x00000140,
    0x00042869, 0x5b058660, 0x02462405, 0x00000005,
    0xa05e9640, 0x5b001d02, 0xe05c0068, 0x01b02403,
    0x27601a70, 0x1d005e03, 0xa0680040, 0x01005e03,
    0x00030061, 0x64060220, 0x00345e05, 0x00000000,
    0x00130061, 0x66060220, 0x00345f05, 0x00000000,
    0x0004c652, 0x62040e68, 0x0e2e1f05, 0x60055c05,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x276a1c70, 0x5e006803, 0x00033661, 0x76060220,
    0x00346805, 0x00000000, 0x00133661, 0x78060220,
    0x00346905, 0x00000000, 0x00131c61, 0x66260220,
    0x00346305, 0x00000000, 0x00031d61, 0x64260220,
    0x00346205, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0xa06c1d40, 0x62026a02,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x05440000, 0xfb006424, 0x000c0000,
    0x00031961, 0x76260220, 0x00346c05, 0x00000000,
    0x00131a61, 0x78260220, 0x00346d05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x0d440000, 0xfb007624, 0x000c0000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x00041669, 0x27058660, 0x02462d05, 0x00000002,
    0x00049861, 0x25050220, 0x00462705, 0x00000000,
    0x00041970, 0x00018220, 0x42462505, 0x00000120,
    0x01040028, 0x0001c660, 0x00000090, 0x00000090,
    0x00043669, 0x77058660, 0x02462505, 0x00000002,
    0x00043661, 0x15054220, 0x00000000, 0x7f800000,
    0x00043661, 0x17054220, 0x00000000, 0x7f800000,
    0x00042661, 0x19054220, 0x00000000, 0x7f800000,
    0x00042661, 0x1b054220, 0x00000000, 0x7f800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xea087714, 0x000c1544,
    0x00040040, 0x25058660, 0x06462505, 0x00000800,
    0x00040027, 0x00014060, 0x00000000, 0xffffff60,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00040a70, 0x00018220, 0x42462705, 0x00000030,
    0x01040028, 0x0001c660, 0x000000a8, 0x000000a8,
    0x00043669, 0x78058660, 0x02462705, 0x00000002,
    0x00043661, 0x16054220, 0x00000000, 0x00000000,
    0x00042661, 0x18054220, 0x00000000, 0x00000000,
    0x00042661, 0x1a054220, 0x00000000, 0x00000000,
    0x00042661, 0x1c054220, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa07a1d40, 0x48007803, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xea087a14, 0x000c1644, 0x00040e40, 0x27058660,
    0x06462705, 0x00000800, 0x00040027, 0x00014060,
    0x00000000, 0xffffff48, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80000001, 0x00000000,
    0x30000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x7b0c0000,
    0xe23e000c, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x80033a61, 0x7c054220,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80011961, 0x7c550000,
    0x0000005c, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80044231, 0x00000000,
    0x30087c0c, 0x00000000, 0x80040001, 0x00000000,
    0xe0000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x207d2640, 0x0d000500,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x20012640, 0x11000900, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x20151240, 0x31207d00,
    0x207e2640, 0x0f000700, 0x80001201, 0x00000000,
    0x00000000, 0x00000000, 0x20192641, 0x4f001500,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20161240, 0x34207e00, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x201b2641, 0x54001600,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x20171640, 0x37200100, 0x0004a661, 0x20050a20,
    0x00461b05, 0x00000000, 0x80002601, 0x00000000,
    0x00000000, 0x00000000, 0x201d0941, 0x59001700,
    0x00041161, 0x22050a20, 0x00461d05, 0x00000000,
    0x0004d661, 0x1e050a20, 0x00461905, 0x00000000,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22464605, 0x00000000,
    0x00041f61, 0x28050120, 0x00003000, 0x00000000,
    0x80001261, 0x38054660, 0x00000000, 0x00000001,
    0xe0242865, 0x00300303, 0xe0260068, 0x00200303,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00043c69, 0x2f050660, 0x02003804, 0x00460305,
    0x00041a70, 0x00018660, 0x16462805, 0x00000000,
    0x01040028, 0x0001c660, 0x00000948, 0x00000948,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x31050220, 0x00462805, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80040961, 0x10014110, 0x00000000, 0x03c003c0,
    0x00040069, 0x10018510, 0x01563106, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x03c003c0,
    0xe0330961, 0x001b0004, 0xac350970, 0x1e003302,
    0x00041965, 0x00010220, 0x22463505, 0x00464605,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x37058220, 0x02460d05, 0xff800000,
    0x01040062, 0x39058220, 0x02460f05, 0xff800000,
    0x01040062, 0x3b058220, 0x02460505, 0x7f800000,
    0x01040062, 0x3d058220, 0x02460705, 0x7f800000,
    0xa3480c61, 0xff810000, 0x60480061, 0x00103700,
    0xa34a1b61, 0xff810000, 0x604a0061, 0x00103900,
    0xa3401a61, 0x7f810000, 0x60400061, 0x00103b00,
    0xa3421961, 0x7f810000, 0x60420061, 0x00103d00,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x3a058220, 0x02461105, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x3e058220, 0x02460905, 0x7f800000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031461, 0x79060220, 0x00444826, 0x00000000,
    0x80031361, 0x18060220, 0x00444a26, 0x00000000,
    0x80031261, 0x44060220, 0x00444026, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x5a060220, 0x00444226, 0x00000000,
    0xa34c0e61, 0xff810000, 0x604c0061, 0x00103a00,
    0x00040070, 0x00018660, 0x16462405, 0x00000001,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031d62, 0x77060aa0, 0x4a444806, 0x00447906,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80030c62, 0x16060aa0, 0x4a444a06, 0x00441806,
    0x80031b62, 0x3c060aa0, 0x5a444006, 0x00444406,
    0x80030a62, 0x58060aa0, 0x5a444206, 0x00445a06,
    0xa3441e61, 0x7f810000, 0x60440061, 0x00103e00,
    0x80031661, 0x3a060220, 0x00444c26, 0x00000000,
    0x80030d61, 0x48260220, 0x00447706, 0x00000000,
    0x80030c61, 0x4a260220, 0x00441606, 0x00000000,
    0x80030b61, 0x40260220, 0x00443c06, 0x00000000,
    0x80030a61, 0x42260220, 0x00445806, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x67060220, 0x00444426, 0x00000000,
    0x80031e62, 0x38060aa0, 0x4a444c06, 0x00443a06,
    0x80021d61, 0x7e070220, 0x00424847, 0x00000000,
    0x80023261, 0x7c070220, 0x00424827, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x2a070220, 0x00424a47, 0x00000000,
    0x80020061, 0x1b070220, 0x00424a27, 0x00000000,
    0x80021f61, 0x52070220, 0x00424047, 0x00000000,
    0x80020061, 0x50070220, 0x00424027, 0x00000000,
    0x80021f61, 0x5f070220, 0x00424247, 0x00000000,
    0x80020061, 0x5d070220, 0x00424227, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031f62, 0x65060aa0, 0x5a444406, 0x00446706,
    0x80031261, 0x4c260220, 0x00443806, 0x00000000,
    0x80021f62, 0x7a070aa0, 0x4a427c07, 0x00427e07,
    0x80021e62, 0x19070aa0, 0x4a421b07, 0x00422a07,
    0x80021c62, 0x4e070aa0, 0x5a425007, 0x00425207,
    0x80021a62, 0x5b070aa0, 0x5a425d07, 0x00425f07,
    0x80030d61, 0x44260220, 0x00446506, 0x00000000,
    0x80020a61, 0x3d070220, 0x00424c27, 0x00000000,
    0x80021461, 0x48470220, 0x00427a07, 0x00000000,
    0x80021361, 0x4a470220, 0x00421907, 0x00000000,
    0x80021261, 0x40470220, 0x00424e07, 0x00000000,
    0x80021161, 0x42470220, 0x00425b07, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x6c070220, 0x00424447, 0x00000000,
    0x80023961, 0x6a070220, 0x00424427, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x15070220, 0x00424867, 0x00000000,
    0x80020061, 0x03070220, 0x00424827, 0x00000000,
    0x80021f61, 0x37070220, 0x00424a67, 0x00000000,
    0x80020061, 0x31070220, 0x00424a27, 0x00000000,
    0x80021f61, 0x57070220, 0x00424067, 0x00000000,
    0x80020061, 0x55070220, 0x00424027, 0x00000000,
    0x80020061, 0x4e070220, 0x00424c47, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021f61, 0x64070220, 0x00424267, 0x00000000,
    0x80020061, 0x62070220, 0x00424227, 0x00000000,
    0x80021f62, 0x68070aa0, 0x5a426a07, 0x00426c07,
    0x80021f62, 0x01070aa0, 0x4a420307, 0x00421507,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021e62, 0x2b070aa0, 0x4a423107, 0x00423707,
    0x80021c62, 0x53070aa0, 0x5a425507, 0x00425707,
    0x80021b62, 0x3b070aa0, 0x4a423d07, 0x00424e07,
    0x80021962, 0x60070aa0, 0x5a426207, 0x00426407,
    0x80021661, 0x44470220, 0x00426807, 0x00000000,
    0x80021561, 0x48670220, 0x00420107, 0x00000000,
    0x80021461, 0x4a670220, 0x00422b07, 0x00000000,
    0x80021361, 0x40670220, 0x00425307, 0x00000000,
    0x80021261, 0x4c470220, 0x00423b07, 0x00000000,
    0x80021161, 0x42670220, 0x00426007, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x76070220, 0x00424467, 0x00000000,
    0x80020061, 0x72070220, 0x00424427, 0x00000000,
    0x80021f62, 0x48850aa0, 0x4a004864, 0x00344885,
    0x80021f62, 0x49850aa0, 0x4a004964, 0x00344985,
    0x80021e62, 0x4a850aa0, 0x4a004a64, 0x00344a85,
    0x80021e62, 0x4b850aa0, 0x4a004b64, 0x00344b85,
    0x80021d62, 0x40850aa0, 0x5a004064, 0x00344085,
    0x80021d62, 0x41850aa0, 0x5a004164, 0x00344185,
    0x80021c61, 0x53070220, 0x00424c67, 0x00000000,
    0x80020061, 0x51070220, 0x00424c27, 0x00000000,
    0x80021d62, 0x42850aa0, 0x5a004264, 0x00344285,
    0x80021d62, 0x43850aa0, 0x5a004364, 0x00344385,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x6d070aa0, 0x5a427207, 0x00427607,
    0x80031762, 0x49050aa0, 0x4a0048e4, 0x00464905,
    0x80031762, 0x4b050aa0, 0x4a004ae4, 0x00464b05,
    0x80031662, 0x41050aa0, 0x5a0040e4, 0x00464105,
    0x80021962, 0x4f070aa0, 0x4a425107, 0x00425307,
    0x80031662, 0x43050aa0, 0x5a0042e4, 0x00464305,
    0x80021661, 0x44670220, 0x00426d07, 0x00000000,
    0x80021261, 0x4c670220, 0x00424f07, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x50050220, 0x02004be4, 0x000049e4,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x4e050220, 0x020043e4, 0x000041e4,
    0x80021c62, 0x44850aa0, 0x5a004464, 0x00344485,
    0x80021c62, 0x45850aa0, 0x5a004564, 0x00344585,
    0x80021b62, 0x4c850aa0, 0x4a004c64, 0x00344c85,
    0x80021b62, 0x4d850aa0, 0x4a004d64, 0x00344d85,
    0x00040070, 0x00018660, 0x16462405, 0x00000002,
    0x80031362, 0x45050aa0, 0x5a0044e4, 0x00464505,
    0x80031262, 0x4d050aa0, 0x4a004ce4, 0x00464d05,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f520062, 0x4e014583, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f540062, 0x50014d83,
    0x00040070, 0x00018660, 0x16462605, 0x00000000,
    0x2f151a62, 0x54205200, 0x00040065, 0x00018220,
    0x22462f05, 0x00000077, 0x01040022, 0x0001c060,
    0x00000080, 0x00000080, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x60550041, 0x00603302,
    0x60570041, 0x00302602, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x59040e68,
    0x0e0e5505, 0x57052405, 0x00041969, 0x5b058660,
    0x02465905, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xea2a5b14, 0x01001514, 0x00040025, 0x00004600,
    0x00000000, 0x00000060, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xa05c0066, 0x46223502,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22465c05, 0x00000000,
    0x00040061, 0x5d050120, 0x00003000, 0x00000000,
    0x20281965, 0x5d002803, 0x00040027, 0x00014060,
    0x00000000, 0xfffff6a8, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa05e0040, 0x01002003,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22464605, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x29050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16462905, 0x00000000,
    0x01040028, 0x0001c660, 0x00000928, 0x00000928,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x60050220, 0x00462905, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x0bc00bc0,
    0x00040069, 0x10018510, 0x01566006, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x0bc00bc0,
    0xe0620961, 0x001b0004, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac640070, 0x5e006202,
    0x00041965, 0x00010220, 0x22466405, 0x00464605,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x66058220, 0x02460d05, 0xff800000,
    0x01040062, 0x68058220, 0x02460f05, 0xff800000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6a058220, 0x02460505, 0x7f800000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6c058220, 0x02460705, 0x7f800000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa37a1c61, 0xff810000, 0x607a0061, 0x00106600,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0xa37c0b61, 0xff810000, 0x607c0061, 0x00106800,
    0xa3721a61, 0x7f810000, 0x60720061, 0x00106a00,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa3761961, 0x7f810000, 0x60760061, 0x00106c00,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x69058220, 0x02461105, 0xff800000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6d058220, 0x02460905, 0x7f800000,
    0x80031461, 0x39060220, 0x00447a26, 0x00000000,
    0x80031361, 0x48060220, 0x00447c26, 0x00000000,
    0x80031261, 0x56060220, 0x00447226, 0x00000000,
    0xa37e0d61, 0xff810000, 0x607e0061, 0x00106900,
    0x80031261, 0x6b060220, 0x00447626, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0xa3780d61, 0x7f810000, 0x60780061, 0x00106d00,
    0x00040070, 0x00018660, 0x16462405, 0x00000001,
    0x80031d62, 0x37060aa0, 0x4a447a06, 0x00443906,
    0x80030c62, 0x44060aa0, 0x4a447c06, 0x00444806,
    0x80030b62, 0x54060aa0, 0x5a447206, 0x00445606,
    0x80031a62, 0x67060aa0, 0x5a447606, 0x00446b06,
    0x80031561, 0x1a060220, 0x00447826, 0x00000000,
    0x80030c61, 0x7a260220, 0x00443706, 0x00000000,
    0x80030b61, 0x7c260220, 0x00444406, 0x00000000,
    0x80030a61, 0x72260220, 0x00445406, 0x00000000,
    0x80030961, 0x76260220, 0x00446706, 0x00000000,
    0x80031d62, 0x18060aa0, 0x5a447806, 0x00441a06,
    0x80021c61, 0x3e070220, 0x00427a47, 0x00000000,
    0x80020061, 0x3c070220, 0x00427a27, 0x00000000,
    0x80021d61, 0x4d070220, 0x00427c47, 0x00000000,
    0x80020061, 0x4b070220, 0x00427c27, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x5b070220, 0x00427247, 0x00000000,
    0x80020061, 0x59070220, 0x00427227, 0x00000000,
    0x80031361, 0x55060220, 0x00447e26, 0x00000000,
    0x80021f61, 0x01070220, 0x00427647, 0x00000000,
    0x80021661, 0x6e070220, 0x00427627, 0x00000000,
    0x80031161, 0x78260220, 0x00441806, 0x00000000,
    0x80021f62, 0x3a070aa0, 0x4a423c07, 0x00423e07,
    0x80021f62, 0x49070aa0, 0x4a424b07, 0x00424d07,
    0x80021d62, 0x57070aa0, 0x5a425907, 0x00425b07,
    0x80031c62, 0x53060aa0, 0x4a447e06, 0x00445506,
    0x80021a62, 0x6c070aa0, 0x5a426e07, 0x00420107,
    0x80021961, 0x31070220, 0x00427847, 0x00000000,
    0x80023b61, 0x2b070220, 0x00427827, 0x00000000,
    0x80021561, 0x7a470220, 0x00423a07, 0x00000000,
    0x80021461, 0x7c470220, 0x00424907, 0x00000000,
    0x80021361, 0x72470220, 0x00425707, 0x00000000,
    0x80030a61, 0x7e260220, 0x00445306, 0x00000000,
    0x80021161, 0x76470220, 0x00426c07, 0x00000000,
    0x80021e62, 0x1b070aa0, 0x5a422b07, 0x00423107,
    0x80021d61, 0x43070220, 0x00427a67, 0x00000000,
    0x80020061, 0x41070220, 0x00427a27, 0x00000000,
    0x80021e61, 0x50070220, 0x00427c27, 0x00000000,
    0x80021e61, 0x66070220, 0x00427267, 0x00000000,
    0x80020061, 0x60070220, 0x00427227, 0x00000000,
    0x80020c61, 0x5a070220, 0x00427e47, 0x00000000,
    0x80021461, 0x58070220, 0x00427e27, 0x00000000,
    0x80020061, 0x52070220, 0x00427c67, 0x00000000,
    0x80021f61, 0x17070220, 0x00427667, 0x00000000,
    0x80023861, 0x15070220, 0x00427627, 0x00000000,
    0x80021161, 0x78470220, 0x00421b07, 0x00000000,
    0x80021f62, 0x3f070aa0, 0x4a424107, 0x00424307,
    0x80021f62, 0x5c070aa0, 0x5a426007, 0x00426607,
    0x80021d62, 0x56070aa0, 0x4a425807, 0x00425a07,
    0x80021c62, 0x4e070aa0, 0x4a425007, 0x00425207,
    0x80021a62, 0x02070aa0, 0x5a421507, 0x00421707,
    0x80021961, 0x36070220, 0x00427867, 0x00000000,
    0x80020061, 0x34070220, 0x00427827, 0x00000000,
    0x80021561, 0x7a670220, 0x00423f07, 0x00000000,
    0x80021461, 0x72670220, 0x00425c07, 0x00000000,
    0x80021361, 0x7e470220, 0x00425607, 0x00000000,
    0x80021261, 0x7c670220, 0x00424e07, 0x00000000,
    0x80021161, 0x76670220, 0x00420207, 0x00000000,
    0x80021e62, 0x32070aa0, 0x5a423407, 0x00423607,
    0x80021d62, 0x7a850aa0, 0x4a007a64, 0x00347a85,
    0x80021d62, 0x7b850aa0, 0x4a007b64, 0x00347b85,
    0x80021c62, 0x72850aa0, 0x5a007264, 0x00347285,
    0x80021c62, 0x73850aa0, 0x5a007364, 0x00347385,
    0x80020b61, 0x66070220, 0x00427e67, 0x00000000,
    0x80021761, 0x60070220, 0x00427e27, 0x00000000,
    0x80021c62, 0x7c850aa0, 0x4a007c64, 0x00347c85,
    0x80021c62, 0x7d850aa0, 0x4a007d64, 0x00347d85,
    0x80021b62, 0x76850aa0, 0x5a007664, 0x00347685,
    0x80021b62, 0x77850aa0, 0x5a007764, 0x00347785,
    0x80021761, 0x78670220, 0x00423207, 0x00000000,
    0x80031762, 0x7b050aa0, 0x4a007ae4, 0x00467b05,
    0x80031662, 0x73050aa0, 0x5a0072e4, 0x00467305,
    0x80021a62, 0x5b070aa0, 0x4a426007, 0x00426607,
    0x80031662, 0x7d050aa0, 0x4a007ce4, 0x00467d05,
    0x80031562, 0x77050aa0, 0x5a0076e4, 0x00467705,
    0x80021962, 0x78850aa0, 0x5a007864, 0x00347885,
    0x80021962, 0x79850aa0, 0x5a007964, 0x00347985,
    0x80021561, 0x7e670220, 0x00425b07, 0x00000000,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x03050220, 0x02007de4, 0x00007be4,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x01050220, 0x020077e4, 0x000073e4,
    0x80031162, 0x79050aa0, 0x5a0078e4, 0x00467905,
    0x80021b62, 0x7e850aa0, 0x4a007e64, 0x00347e85,
    0x80021b62, 0x7f850aa0, 0x4a007f64, 0x00347f85,
    0x00040070, 0x00018660, 0x16462405, 0x00000002,
    0x80031162, 0x7f050aa0, 0x4a007ee4, 0x00467f05,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f150062, 0x01017983, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f170062, 0x03017f83,
    0x00040070, 0x00018660, 0x16462605, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f310062, 0x17201500, 0x00040065, 0x00018220,
    0x22462f05, 0x00000077, 0x01040022, 0x0001c060,
    0x00000080, 0x00000080, 0x60181141, 0x00606202,
    0x601a0041, 0x00302602, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x1c040e68,
    0x0e0e1805, 0x1a052405, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x2b058660,
    0x02461c05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044b31, 0x00000000,
    0xea2a2b14, 0x01003114, 0x00040025, 0x00004600,
    0x00000000, 0x00000060, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0311166, 0x46226402,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22463105, 0x00000000,
    0x00040061, 0x32050120, 0x00003000, 0x00000000,
    0x20291965, 0x32002903, 0x00040027, 0x00014060,
    0x00000000, 0xfffff6c8, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0330040, 0x02002203,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00040070, 0x00018220, 0x22464605, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2a050120, 0x00003000, 0x00000000,
    0x00041970, 0x00018660, 0x16462a05, 0x00000000,
    0x01040028, 0x0001c660, 0x00000998, 0x00000998,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x0004004c, 0x35050220, 0x00462a05, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80040061, 0x10014110, 0x00000000, 0x06600660,
    0x00040069, 0x10018510, 0x01563506, 0x00020002,
    0x00040940, 0x10018110, 0x01461001, 0x06600660,
    0xe0370961, 0x001b0004, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac390070, 0x33003702,
    0x00041965, 0x00010220, 0x22463905, 0x00464605,
    0x01040062, 0x3b058220, 0x02460d05, 0xff800000,
    0x01040062, 0x3d058220, 0x02460f05, 0xff800000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x3f058220, 0x02460505, 0x7f800000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x41058220, 0x02460705, 0x7f800000,
    0xa34c0a61, 0xff810000, 0x604c0061, 0x00103b00,
    0xa34e0b61, 0xff810000, 0x604e0061, 0x00103d00,
    0xa3440a61, 0x7f810000, 0x60440061, 0x00103f00,
    0xa3481961, 0x7f810000, 0x60480061, 0x00104100,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x3e058220, 0x02461105, 0xff800000,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x42058220, 0x02460905, 0x7f800000,
    0x80031461, 0x4a060220, 0x00444c26, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80031361, 0x5e060220, 0x00444e26, 0x00000000,
    0x80031261, 0x69060220, 0x00444426, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x7b060220, 0x00444826, 0x00000000,
    0xa3500e61, 0xff810000, 0x60500061, 0x00103e00,
    0x00040070, 0x00018660, 0x16462405, 0x00000001,
    0x80031d62, 0x40060aa0, 0x4a444c06, 0x00444a06,
    0x80031c62, 0x5c060aa0, 0x4a444e06, 0x00445e06,
    0xa34a1e61, 0x7f810000, 0x604a0061, 0x00104200,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031b62, 0x67060aa0, 0x5a444406, 0x00446906,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80031a62, 0x79060aa0, 0x5a444806, 0x00447b06,
    0x80031661, 0x72060220, 0x00445026, 0x00000000,
    0x80030d61, 0x4c260220, 0x00444006, 0x00000000,
    0x80030c61, 0x4e260220, 0x00445c06, 0x00000000,
    0x80031361, 0x1a060220, 0x00444a26, 0x00000000,
    0x80030a61, 0x44260220, 0x00446706, 0x00000000,
    0x80030961, 0x48260220, 0x00447906, 0x00000000,
    0x80031e62, 0x69060aa0, 0x4a445006, 0x00447206,
    0x80021d61, 0x56070220, 0x00424c47, 0x00000000,
    0x80020061, 0x54070220, 0x00424c27, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x63070220, 0x00424e47, 0x00000000,
    0x80020061, 0x61070220, 0x00424e27, 0x00000000,
    0x80031f62, 0x18060aa0, 0x5a444a06, 0x00441a06,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x6e070220, 0x00424447, 0x00000000,
    0x80023961, 0x6c070220, 0x00424427, 0x00000000,
    0x80021f61, 0x01070220, 0x00424847, 0x00000000,
    0x80020061, 0x7e070220, 0x00424827, 0x00000000,
    0x80031261, 0x50260220, 0x00446906, 0x00000000,
    0x80021f62, 0x52070aa0, 0x4a425407, 0x00425607,
    0x80021e62, 0x5f070aa0, 0x4a426107, 0x00426307,
    0x80031361, 0x4a260220, 0x00441806, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021b62, 0x7c070aa0, 0x5a427e07, 0x00420107,
    0x80021361, 0x4c470220, 0x00425207, 0x00000000,
    0x80021261, 0x4e470220, 0x00425f07, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021c62, 0x6a070aa0, 0x5a426c07, 0x00426e07,
    0x80021b61, 0x31070220, 0x00424a47, 0x00000000,
    0x80020061, 0x28070220, 0x00424a27, 0x00000000,
    0x80021261, 0x48470220, 0x00427c07, 0x00000000,
    0x80020a61, 0x7e070220, 0x00425047, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021e61, 0x5b070220, 0x00424c67, 0x00000000,
    0x80020061, 0x59070220, 0x00424c27, 0x00000000,
    0x80021f61, 0x68070220, 0x00424e67, 0x00000000,
    0x80023661, 0x66070220, 0x00424e27, 0x00000000,
    0x80021161, 0x44470220, 0x00426a07, 0x00000000,
    0x80021f62, 0x1b070aa0, 0x5a422807, 0x00423107,
    0x80021f61, 0x17070220, 0x00424867, 0x00000000,
    0x80023861, 0x15070220, 0x00424827, 0x00000000,
    0x80020061, 0x7c070220, 0x00425027, 0x00000000,
    0x80021f62, 0x57070aa0, 0x4a425907, 0x00425b07,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021d62, 0x64070aa0, 0x4a426607, 0x00426807,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021c61, 0x78070220, 0x00424467, 0x00000000,
    0x80023661, 0x76070220, 0x00424427, 0x00000000,
    0x80021361, 0x4a470220, 0x00421b07, 0x00000000,
    0x80021d62, 0x02070aa0, 0x5a421507, 0x00421707,
    0x80021c62, 0x7a070aa0, 0x4a427c07, 0x00427e07,
    0x80021461, 0x4c670220, 0x00425707, 0x00000000,
    0x80021361, 0x4e670220, 0x00426407, 0x00000000,
    0x80021c62, 0x72070aa0, 0x5a427607, 0x00427807,
    0x80021b61, 0x3d070220, 0x00424a67, 0x00000000,
    0x80020061, 0x3b070220, 0x00424a27, 0x00000000,
    0x80021361, 0x48670220, 0x00420207, 0x00000000,
    0x80021261, 0x50470220, 0x00427a07, 0x00000000,
    0x80021e62, 0x4c850aa0, 0x4a004c64, 0x00344c85,
    0x80021e62, 0x4d850aa0, 0x4a004d64, 0x00344d85,
    0x80021d62, 0x4e850aa0, 0x4a004e64, 0x00344e85,
    0x80021d62, 0x4f850aa0, 0x4a004f64, 0x00344f85,
    0x80021561, 0x44670220, 0x00427207, 0x00000000,
    0x80021c62, 0x35070aa0, 0x5a423b07, 0x00423d07,
    0x80021b62, 0x48850aa0, 0x5a004864, 0x00344885,
    0x80021b62, 0x49850aa0, 0x5a004964, 0x00344985,
    0x80020a61, 0x15070220, 0x00425067, 0x00000000,
    0x80020061, 0x03070220, 0x00425027, 0x00000000,
    0x80031662, 0x4d050aa0, 0x4a004ce4, 0x00464d05,
    0x80031562, 0x4f050aa0, 0x4a004ee4, 0x00464f05,
    0x80021b62, 0x44850aa0, 0x5a004464, 0x00344485,
    0x80021b62, 0x45850aa0, 0x5a004564, 0x00344585,
    0x80021761, 0x4a670220, 0x00423507, 0x00000000,
    0x80031562, 0x49050aa0, 0x5a0048e4, 0x00464905,
    0x80021a62, 0x01070aa0, 0x4a420307, 0x00421507,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x54050220, 0x02004fe4, 0x00004de4,
    0x80031362, 0x45050aa0, 0x5a0044e4, 0x00464505,
    0x80021a62, 0x4a850aa0, 0x5a004a64, 0x00344a85,
    0x80021a62, 0x4b850aa0, 0x5a004b64, 0x00344b85,
    0x80021461, 0x50670220, 0x00420107, 0x00000000,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x52050220, 0x020049e4, 0x000045e4,
    0x80031162, 0x4b050aa0, 0x5a004ae4, 0x00464b05,
    0x80021a62, 0x50850aa0, 0x4a005064, 0x00345085,
    0x80021a62, 0x51850aa0, 0x4a005164, 0x00345185,
    0x00040070, 0x00018660, 0x16462405, 0x00000002,
    0x80031162, 0x51050aa0, 0x4a0050e4, 0x00465105,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f560062, 0x52014b83, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x2f580062, 0x54015183,
    0x00040070, 0x00018660, 0x16462605, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x2f350062, 0x58205600, 0x00040065, 0x00018220,
    0x22462f05, 0x00000077, 0x01040022, 0x0001c060,
    0x00000090, 0x00000090, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x60590041, 0x00603702,
    0x605b0041, 0x00302602, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x5d040e68,
    0x0e0e5905, 0x5b052405, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x5f058660,
    0x02465d05, 0x00000002, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xea2a5f14, 0x01003514, 0x00040025, 0x00004600,
    0x00000000, 0x00000060, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0600066, 0x46223902,
    0x80000061, 0x30014110, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x22466005, 0x00000000,
    0x00040061, 0x61050120, 0x00003000, 0x00000000,
    0x202a1965, 0x61002a03, 0x00040027, 0x00014060,
    0x00000000, 0xfffff658, 0x00040061, 0x00010660,
    0x20464605, 0x00000000, 0x01040022, 0x0001c060,
    0x00000148, 0x00000148, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x00040069, 0x62058660,
    0x02461e05, 0x00000002, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa0640040, 0x48006203,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044631, 0x00000000, 0xea106414, 0x01000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001701, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x65058660, 0x02462005, 0x00000002,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa0670040, 0x4c006503, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044631, 0x00000000,
    0xea106714, 0x01000000, 0x00043669, 0x68058660,
    0x02462205, 0x00000002, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xa06a0040, 0x50006803,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xea106a14, 0x01000000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80000001, 0x00000000, 0x30000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80004431, 0x6b0c0000, 0xe23e000c, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80033961, 0x6c054220, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80011961, 0x6c550000, 0x0000005c, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80044531, 0x00000000, 0x30086c0c, 0x00000000,
    0x80040001, 0x00000000, 0xe0000000, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2b050220, 0x00462d05, 0x00000000,
    0x00041970, 0x00018220, 0x42462b05, 0x00000120,
    0x01040028, 0x0001c660, 0x00000200, 0x00000200,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x6d058660, 0x02462b05, 0x00000002,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x36140000, 0xea006d14, 0x00000000,
    0xae002970, 0x7f803601, 0x01040022, 0x0001c060,
    0x00000180, 0x00000180, 0xa0720040, 0x02c07003,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x27760070, 0x70007203, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001601, 0x00000000,
    0x00000000, 0x00000000, 0xa0783940, 0x6d007202,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x277a0070, 0x72007803, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001301, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x01060220,
    0x00347805, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x80101701, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x03060220,
    0x00347905, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x7c042e68,
    0x0e2e7605, 0x7a057405, 0x00131961, 0x03260220,
    0x00347d05, 0x00000000, 0x00031a61, 0x01260220,
    0x00347c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb2a0124, 0x01003614, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa02b0040, 0x20002b03,
    0x00040027, 0x00014060, 0x00000000, 0xfffffdf0,
    0x00000060, 0x00000000, 0x00000000, 0x00000000,
    0x00041a70, 0x00018220, 0x42462d05, 0x00000030,
    0x01040028, 0x0001c660, 0x000001b0, 0x000001b0,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x02058660, 0x02462d05, 0x00000002,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0xa0040040, 0x48000203, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x37140000,
    0xea000414, 0x00000000, 0x00042370, 0x00018660,
    0x26463705, 0x00000000, 0x01040022, 0x0001c060,
    0x000000f0, 0x000000f0, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0xa0051740, 0x4ac07003,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x27070970, 0x70000503, 0xa0091740, 0x02000502,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x270b2670, 0x05000903, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x00031661, 0x0f060220,
    0x00340905, 0x00000000, 0x80103301, 0x00000000,
    0x00000000, 0x00000000, 0x00131761, 0x11060220,
    0x00340a05, 0x00000000, 0x00040b52, 0x0d042e68,
    0x0e2e0705, 0x0b057405, 0x00131961, 0x11260220,
    0x00340e05, 0x00000000, 0x00031a61, 0x0f260220,
    0x00340d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x00000000,
    0xfb180f24, 0x01003714, 0x00040025, 0x00004600,
    0x00000000, 0x00000018, 0xa02d0040, 0x20002d03,
    0x00040027, 0x00014060, 0x00000000, 0xfffffe40,
    0x80031261, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_BFS_BFS_pass1_indexed = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 1024,
      .base.total_shared = 1344,
      .base.program_size = 14656,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_BFS_BFS_pass1_indexed_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_BFS_BFS_pass1_indexed_printfs,
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
   .args = gfx125_bvh_build_BFS_BFS_pass1_indexed_args,
   .code = gfx125_bvh_build_BFS_BFS_pass1_indexed_code,
};
const char *gfx125_bvh_build_BFS_BFS_pass1_indexed_sha1 = "a0d160c8c874824890e94c3a9cdd7dc0c7f50e66";

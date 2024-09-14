#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_leaf_primref_to_procedurals_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_leaf_primref_to_procedurals_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_leaf_primref_to_procedurals_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
   { 44, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g43<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g16<1>Q         0x0000000000000010Q             { align1 1H };
mov(16)         g18<1>Q         0x0000000000000024Q             { align1 1H };
mov(16)         g108<1>UD       g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g43UD           nullUD          0x0220e500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V32, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g125<2>UD       g108<1,1,0>UD                   { align1 1H I@1 compacted };
mov(16)         g23<1>UQ        g125<8,4,2>UD                   { align1 1H I@1 };
shl(16)         g25<1>Q         g23<4,4,1>Q     0x00000004UD    { align1 1H I@1 };
mov(16)         g3<2>UD         g25<4,4,1>UQ                    { align1 1H I@1 };
mov(16)         g8<1>UD         g3<8,4,2>UD                     { align1 1H I@1 };
add(16)         g26<1>D         g3<8,4,2>D      16D             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g20<1>Q         g1.4<0,1,0>Q    g18<1,1,0>Q     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.z.f0.0(16)  null<1>D        g2.2<0,1,0>D    8D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g22UD           g20UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mul(16)         g27<1>D         g2.2<0,1,0>D    g22<16,8,2>UW   { align1 1H $1.dst };
mul(16)         g117<1>D        g2.2<0,1,0>D    g22.1<16,8,2>UW { align1 1H };
sel.l(16)       g9<1>UD         g26<1,1,0>UD    g22<1,1,0>UD    { align1 1H I@5 compacted };
add(16)         g27.1<2>UW      g27.1<16,8,2>UW g117<16,8,2>UW  { align1 1H I@2 };
(-f0.0) sel(16) g28<1>UD        g27<8,8,1>UD    0x00000004UD    { align1 1H I@1 };
cmp.nz.f0.0(16) null<1>D        g3<8,4,2>D      0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
add(16)         g29<1>D         g3<8,4,2>D      -1D             { align1 1H };
mul(16)         g30<1>D         g29<8,8,1>D     g2.4<0,1,0>UW   { align1 1H I@1 };
mul(16)         g118<1>D        g29<8,8,1>D     g2.5<0,1,0>UW   { align1 1H };
mov(16)         g6<2>UD         g28<1,1,0>UD                    { align1 1H I@6 compacted };
add(16)         g30.1<2>UW      g30.1<16,8,2>UW g118<16,8,2>UW  { align1 1H I@2 };
mov(16)         g33<1>UQ        g6<8,4,2>UD                     { align1 1H I@2 };
mov(16)         g4<2>UD         g30<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g31<1>UQ        g4<8,4,2>UD                     { align1 1H I@1 };
add(16)         g35<1>Q         g31<1,1,0>Q     g33<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g37<1>Q         g1.6<0,1,0>Q    g35<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g5UD            g37UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g5<1>UD         0xffffffffUD                    { align1 1H $2.dst };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
mov(16)         g10<2>UD        g28<1,1,0>UD                    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g38<1>UQ        g10<8,4,2>UD                    { align1 1H I@1 };

LABEL6:
cmp.ge.f0.0(16) g40<1>UD        g8<1,1,0>UD     g22<1,1,0>UD    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
mul(16)         g41<1>D         g8<8,8,1>D      g2.4<0,1,0>UW   { align1 1H };
mul(16)         g119<1>D        g8<8,8,1>D      g2.5<0,1,0>UW   { align1 1H };
add(16)         g41.1<2>UW      g41.1<16,8,2>UW g119<16,8,2>UW  { align1 1H I@1 };
mov(16)         g11<2>UD        g41<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g42<1>UQ        g11<8,4,2>UD                    { align1 1H I@1 };
add(16)         g44<1>Q         g42<1,1,0>Q     g38<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g46<1>Q         g1.6<0,1,0>Q    g44<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g48UD           g46UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
cmp.nz.f0.0(16) g6<1>D          g48<1,1,0>D     g5<1,1,0>D      { align1 1H $3.dst compacted };

LABEL3:
endif(16)       JIP:  LABEL5                                    { align1 1H };
or.nz.f0.0(16)  null<1>UD       g6<8,8,1>UD     g40<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL5        UIP:  LABEL5              { align1 1H };
add(16)         g8<1>D          g8<8,8,1>D      1D              { align1 1H };

LABEL5:
while(16)       JIP:  LABEL6                                    { align1 1H };
add(16)         g49<1>D         g9<8,8,1>D      -1D             { align1 1H I@7 };
mul(16)         g50<1>D         g49<8,8,1>D     g2.4<0,1,0>UW   { align1 1H I@1 };
mul(16)         g120<1>D        g49<8,8,1>D     g2.5<0,1,0>UW   { align1 1H };
add(16)         g50.1<2>UW      g50.1<16,8,2>UW g120<16,8,2>UW  { align1 1H I@1 };
mov(16)         g12<2>UD        g50<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g51<1>UQ        g12<8,4,2>UD                    { align1 1H I@1 };
add(16)         g53<1>Q         g51<1,1,0>Q     g38<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g55<1>Q         g1.6<0,1,0>Q    g53<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g57UD           g55UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };

LABEL10:
cmp.ge.f0.0(16) g58<1>UD        g9<1,1,0>UD     g22<1,1,0>UD    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mul(16)         g59<1>D         g9<8,8,1>D      g2.4<0,1,0>UW   { align1 1H };
mul(16)         g121<1>D        g9<8,8,1>D      g2.5<0,1,0>UW   { align1 1H };
add(16)         g59.1<2>UW      g59.1<16,8,2>UW g121<16,8,2>UW  { align1 1H I@1 };
mov(16)         g13<2>UD        g59<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g60<1>UQ        g13<8,4,2>UD                    { align1 1H I@1 };
add(16)         g62<1>Q         g60<1,1,0>Q     g38<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g64<1>Q         g1.6<0,1,0>Q    g62<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g66UD           g64UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
cmp.nz.f0.0(16) g7<1>D          g66<1,1,0>D     g57<1,1,0>D     { align1 1H $5.dst compacted };

LABEL7:
endif(16)       JIP:  LABEL9                                    { align1 1H };
or.nz.f0.0(16)  null<1>UD       g7<8,8,1>UD     g58<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL9        UIP:  LABEL9              { align1 1H };
add(16)         g9<1>D          g9<8,8,1>D      1D              { align1 1H };

LABEL9:
while(16)       JIP:  LABEL10                                   { align1 1H };
mov(16)         g72<1>Q         0x000000000000001cQ             { align1 1H };
mov(16)         g74<1>Q         0x000000000000000cQ             { align1 1H };
mov(16)         g76<1>Q         0x0000000000000016Q             { align1 1H };
mov(8)          g68<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g4<2>B          3W                              { align1 1H };
add(8)          g68.8<1>UW      g68<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g67<1>UD        g68<8,8,1>UW                    { align1 1H };
and(16)         g69<1>UD        g67<8,8,1>UD    0x0000000fUD    { align1 1H I@1 };
mov(16)         g18<2>UD        g69<1,1,0>UD                    { align1 1H I@1 compacted };
add(16)         g15<1>D         g8<1,1,0>D      g69<1,1,0>D     { align1 1H compacted };
mov(16)         g70<1>UQ        g18<8,4,2>UD                    { align1 1H I@2 };

LABEL24:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g19<2>UD        g9<1,1,0>UD                     { align1 1H compacted };
mov(16)         g78<1>UQ        g19<8,4,2>UD                    { align1 1H I@1 };
add(16)         g80<1>Q         g78<1,1,0>Q     g70<1,1,0>Q     { align1 1H I@1 compacted };
cmp.z.f0.0(16)  g82<1>D         g80.1<8,4,2>D   0D              { align1 1H I@1 };
cmp.l.f0.0(16)  g83<1>UD        g15<8,8,1>UD    g80<8,4,2>UD    { align1 1H I@6 };
cmp.g.f0.0(16)  g85<1>UD        g80.1<8,4,2>UD  0x00000000UD    { align1 1H $6.src };
and(16)         g84<1>UD        g82<1,1,0>UD    g83<1,1,0>UD    { align1 1H I@2 compacted };
or.nz.f0.0(16)  null<1>UD       g85<8,8,1>UD    g84<8,8,1>UD    { align1 1H I@1 };
(-f0.0) break(16) JIP:  LABEL11       UIP:  LABEL11             { align1 1H };
mul(16)         g86<1>D         g15<8,8,1>D     g2.4<0,1,0>UW   { align1 1H $6.src };
mul(16)         g122<1>D        g15<8,8,1>D     g2.5<0,1,0>UW   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g89<1>UQ        g2.3<0,1,0>UD                   { align1 1H };
cmp.l.f0.0(16)  g100<1>UD       g15<1,1,0>UD    g9<1,1,0>UD     { align1 1H compacted };
add(16)         g86.1<2>UW      g86.1<16,8,2>UW g122<16,8,2>UW  { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g20<2>UD        g86<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g87<1>UQ        g20<8,4,2>UD                    { align1 1H I@1 };
add(16)         g91<1>Q         g87<1,1,0>Q     g89<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g95<1>Q         g87<1,1,0>Q     g38<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g93<1>Q         g1.6<0,1,0>Q    g91<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g97<1>Q         g1.6<0,1,0>Q    g95<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g110UD          g93UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g99UD           g97UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
cmp.z.f0.0(16)  g101<1>D        g99<1,1,0>D     g99<0,1,0>D     { align1 1H $6.dst compacted };
and.nz.f0.0(16) null<1>UD       g100<8,8,1>UD   g101<8,8,1>UD   { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL12             { align1 1H };
mov(1)          g33<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g33<1>UD        g33<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g34<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g34<1>UD        g34<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g34<1>UD        g33<0,1,0>UD    g34<0,1,0>UD    { align1 WE_all 1N I@1 compacted };
mov(1)          g102<1>UD       g34<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g10<1>UD        g102<0,1,0>UD                   { align1 1H compacted };
else(16)        JIP:  LABEL12         UIP:  LABEL12             { align1 1H };

LABEL13:
mov(16)         g10<1>UD        0x00000000UD                    { align1 1H I@2 compacted };

LABEL12:
endif(16)       JIP:  LABEL11                                   { align1 1H };
shl(16)         g103<1>D        g69<8,8,1>D     0x00000002UD    { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g103UD          g110UD          0x02000504                0x00000040
                            slm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 1H $8 };
cmp.l.f0.0(16)  null<1>UD       g69<8,8,1>UD    0x00000008UD    { align1 1H };
mov(16)         g21<2>UD        g99<1,1,0>UD                    { align1 1H compacted };
mov(16)         g104<1>UQ       g21<8,4,2>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL14             { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g69<8,8,1>UD    g10<0,1,0>UD    { align1 1H I@7 };
(+f0.0) if(16)  JIP:  LABEL16         UIP:  LABEL15             { align1 1H };
shl(16)         g106<1>Q        g70<4,4,1>Q     0x00000002UD    { align1 1H $6.src };
mov(16)         g22<2>UD        g106<4,4,1>UQ                   { align1 1H I@1 };
mov(16)         g107<1>UD       g22<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g14UD           g107UD          nullUD          0x02100500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(16)         g24<2>UD        g14<1,1,0>UD                    { align1 1H $6.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g108<1>UQ       g24<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shl(16)         g110<1>Q        g108<4,4,1>Q    0x00000005UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g112<1>Q        g1.5<0,1,0>Q    g110<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g114UD          g112UD          nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g118<1>Q        g112<1,1,0>Q    g16<1,1,0>Q     { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g120UD          g118UD          nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
and(16)         g26<1>UD        g117<8,8,1>UD   0x07ffffffUD    { align1 1H $6.dst };
shr(16)         g13<1>UD        g123<8,8,1>UD   0x0000001dUD    { align1 1H $10.dst };
else(16)        JIP:  LABEL15         UIP:  LABEL15             { align1 1H };

LABEL16:
mov(16)         g26<1>UD        0xffffffffUD                    { align1 1H I@3 };

LABEL15:
endif(16)       JIP:  LABEL14                                   { align1 1H };
add(16)         g121<1>D        g67<8,8,1>D     15D             { align1 1H $10.dst };
add(16)         g122<1>D        g67<8,8,1>D     -1D             { align1 1H $10.dst };
add(16)         g125<1>D        g67<8,8,1>D     1D              { align1 1H };
cmp.l.f0.0(16)  null<1>D        g121<8,8,1>D    16D             { align1 1H I@3 };
mov(16)         a0<1>UW         0x0680UW                        { align1 WE_all 1H I@3 };
shl(16)         a0<1>UW         g122<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0680UW        { align1 1H A@1 };
mov(16)         g123<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 };
mov(16)         a0<1>UW         0x0680UW                        { align1 WE_all 1H I@3 };
shl(16)         a0<1>UW         g125<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x0680UW        { align1 1H A@1 };
mov(16)         g126<1>UD       g[a0]<VxH,1,0>UD                { align1 1H A@1 };
(-f0.0) sel(16) g124<1>UD       g123<8,8,1>UD   0xffffffffUD    { align1 1H I@2 };
cmp.l.f0.0(16)  g127<1>D        g125<8,8,1>D    16D             { align1 1H };
(+f0.0) sel(16) g5<1>UD         g126<8,8,1>UD   0xffffffffUD    { align1 1H @3 $2.dst };
cmp.nz.f0.0(16) g6<1>D          g124<1,1,0>D    g26<1,1,0>D     { align1 1H I@3 compacted };
cmp.nz.f0.0(16) null<1>D        g127<8,8,1>D    0D              { align1 1H I@3 };
mov(16)         g7<1>D          -g6<1,1,0>D                     { align1 1H I@2 compacted };
mov(16)         a0<1>UW         0x01c0UW                        { align1 WE_all 1H I@1 };
shl(16)         a0<1>UW         g125<16,8,2>W   0x0002UW        { align1 1H };
add(16)         a0<1>UW         a0<8,8,1>UW     0x01c0UW        { align1 1H A@1 };
mov(16)         g8<1>UD         g[a0]<VxH,1,0>UD                { align1 1H A@1 };
(+f0.0) sel(16) g18<1>UD        g8<8,8,1>UD     0x00000000UD    { align1 1H I@1 };
cmp.nz.f0.0(16) null<1>D        g6<8,8,1>D      0D              { align1 1H };
(+f0.0) sel(16) g19<1>UD        g69<8,8,1>UD    0x00000000UD    { align1 1H };
mov(16)         g20<2>UD        g19<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g20.1<2>UD      0x00000000UD                    { align1 1H I@1 };
mov(16)         g22<1>UQ        0x0000000000000000UQ            { align1 WE_all 1H I@1 };
mov(16)         g22<1>UQ        g20<1,1,0>UQ                    { align1 1H compacted };
cmp.g.f0.0(4)   null<1>UD       g22<8,2,4>UD    g22.2<8,2,4>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g22.1<8,2,4>UD  g22.3<8,2,4>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g22.1<8,2,4>UD  g22.3<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g22.2<4>UD      g22<8,2,4>UD                    { align1 WE_all 1N };
(+f0.0) mov(4)  g22.3<4>UD      g22.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g22.2<0,1,0>UD  g22.4<4,2,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g22.3<0,1,0>UD  g22.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g22.3<0,1,0>UD  g22.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g22.4<2>UD      g22.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g22.5<2>UD      g22.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g22.10<0,1,0>UD g22.12<4,2,2>UD { align1 WE_all 1N I@6 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g22.11<0,1,0>UD g22.13<4,2,2>UD { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g22.11<0,1,0>UD g22.13<4,2,2>UD { align1 WE_all 1N };
(+f0.0) mov(2)  g22.12<2>UD     g22.10<0,1,0>UD                 { align1 WE_all 1N };
(+f0.0) mov(2)  g22.13<2>UD     g22.11<0,1,0>UD                 { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g22.6<0,1,0>UD  g22.8<8,4,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g22.7<0,1,0>UD  g22.9<8,4,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g22.7<0,1,0>UD  g22.9<8,4,2>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g22.8<2>UD      g22.6<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(4)  g22.9<2>UD      g22.7<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g23<8,2,4>UD    g23.2<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) cmp.z.f0.0(4) null<1>UD g23.1<8,2,4>UD  g23.3<8,2,4>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g23.1<8,2,4>UD  g23.3<8,2,4>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g23.2<4>UD      g23<8,2,4>UD                    { align1 WE_all 1N };
(+f0.0) mov(4)  g23.3<4>UD      g23.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g23.2<0,1,0>UD  g23.4<4,2,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g23.3<0,1,0>UD  g23.5<4,2,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g23.3<0,1,0>UD  g23.5<4,2,2>UD  { align1 WE_all 1N };
(+f0.0) mov(2)  g23.4<2>UD      g23.2<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(2)  g23.5<2>UD      g23.3<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(2)   null<1>UD       g23.10<0,1,0>UD g23.12<4,2,2>UD { align1 WE_all 1N I@6 };
(+f0.0) cmp.z.f0.0(2) null<1>UD g23.11<0,1,0>UD g23.13<4,2,2>UD { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(2) null<1>UD g23.11<0,1,0>UD g23.13<4,2,2>UD { align1 WE_all 1N };
(+f0.0) mov(2)  g23.12<2>UD     g23.10<0,1,0>UD                 { align1 WE_all 1N };
(+f0.0) mov(2)  g23.13<2>UD     g23.11<0,1,0>UD                 { align1 WE_all 1N I@1 };
cmp.g.f0.0(4)   null<1>UD       g23.6<0,1,0>UD  g23.8<8,4,2>UD  { align1 WE_all 1N I@1 };
(+f0.0) cmp.z.f0.0(4) null<1>UD g23.7<0,1,0>UD  g23.9<8,4,2>UD  { align1 WE_all 1N };
(-f0.0) cmp.g.f0.0(4) null<1>UD g23.7<0,1,0>UD  g23.9<8,4,2>UD  { align1 WE_all 1N };
(+f0.0) mov(4)  g23.8<2>UD      g23.6<0,1,0>UD                  { align1 WE_all 1N };
(+f0.0) mov(4)  g23.9<2>UD      g23.7<0,1,0>UD                  { align1 WE_all 1N I@1 };
cmp.g.f0.0(8)   null<1>UD       g22.14<0,1,0>UD g23<8,4,2>UD    { align1 WE_all 1Q I@1 };
(+f0.0) cmp.z.f0.0(8) null<1>UD g22.15<0,1,0>UD g23.1<8,4,2>UD  { align1 WE_all 1Q };
(-f0.0) cmp.g.f0.0(8) null<1>UD g22.15<0,1,0>UD g23.1<8,4,2>UD  { align1 WE_all 1Q };
(+f0.0) mov(8)  g23<2>UD        g22.14<0,1,0>UD                 { align1 WE_all 1Q };
(+f0.0) mov(8)  g23.1<2>UD      g22.15<0,1,0>UD                 { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g24<1>Q         -g22<4,4,1>Q                    { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g69<8,8,1>UD    g10<0,1,0>UD    { align1 1H };
mov(16)         g27<2>UD        g24<4,4,1>UQ                    { align1 1H I@2 };
add(16)         g25<1>D         g69<8,8,1>D     g27<8,4,2>D     { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL17             { align1 1H };
mov(16)         g109<1>D        0D                              { align1 WE_all 1H };
mov(16)         g109<1>D        -g6<1,1,0>D                     { align1 1H compacted };
cmp.z.f0.0(16)  null<1>D        g69<8,8,1>D     0D              { align1 1H };
add(8)          g109.1<2>D      g109<8,4,2>D    g109.1<8,4,2>D  { align1 WE_all 1Q I@2 };
add(4)          g109.2<4>D      g109.1<8,2,4>D  g109.2<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g109.3<4>D      g109.1<8,2,4>D  g109.3<8,2,4>D  { align1 WE_all 1N I@1 };
add(4)          g109.4<1>D      g109.3<0,1,0>D  g109.4<4,4,1>D  { align1 WE_all 1N I@1 };
add(4)          g109.12<1>D     g109.11<0,1,0>D g109.12<4,4,1>D { align1 WE_all 1N I@2 };
add(8)          g109.8<1>D      g109.7<0,1,0>D  g109.8<8,8,1>D  { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g27<1>D         g109.15<0,1,0>D                 { align1 1H };
(+f0.0) if(16)  JIP:  LABEL19         UIP:  LABEL18             { align1 1H };
add(16)         g28<1>Q         g1.7<0,1,0>Q    g72<1,1,0>Q     { align1 1H compacted };
mov(1)          g35<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g35<1>UD        g35<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g36<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g36<1>UD        g36<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g36<1>UD        g35<0,1,0>UD    g36<0,1,0>UD    { align1 WE_all 1N I@1 compacted };
mov(1)          g30<1>UD        g36<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g31<1>UD        g30<0,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mul(16)         g111<1>D        g31<8,8,1>D     g27<16,8,2>UW   { align1 1H I@1 };
mul(16)         g123<1>D        g31<8,8,1>D     g27.1<16,8,2>UW { align1 1H };
add(16)         g111.1<2>UW     g111.1<16,8,2>UW g123<16,8,2>UW { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(1)          g37<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g37<1>UD        g37<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g32<1>UD        g37<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g67<8,8,1>D     g32<0,1,0>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL20         UIP:  LABEL20             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g11UD           g28UD           g111UD          0x0414058c                0x00000040
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 1, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $9 };

LABEL20:
endif(16)       JIP:  LABEL21                                   { align1 1H };
mov(1)          g40<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g40<1>UD        g40<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g33<1>UD        g40<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g33<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @1 $9.dst };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000200UD    { align1 WE_all 1N A@1 };
mov(1)          g34<1>UD        g[a0 192]<0,1,0>UD              { align1 WE_all 1N A@1 };
mov(1)          g41<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g41<1>UD        g41<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g3<1>D          1D                              { align1 WE_all 1N };
mov(1)          g42<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g42<1>UD        g42<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(8)          g37<1>UW        0x76543210V                     { align1 WE_all 1Q };
and(1)          g42<1>UD        g41<0,1,0>UD    g42<0,1,0>UD    { align1 WE_all 1N I@2 compacted };
add(8)          g37.8<1>UW      g37<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
mov(1)          g35<1>UD        g42<0,1,0>UD                    { align1 WE_all 1N I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g36<1>UD        g37<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g40<1>D         -g3<0,1,0>D     g36<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g41<1>UD        g35<0,1,0>UD    ~g40<8,8,1>D    { align1 1H };
cbit(16)        g42<1>UD        g41<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mul(16)         g43<1>D         g42<8,8,1>D     g27<16,8,2>UW   { align1 1H I@1 };
mul(16)         g124<1>D        g42<8,8,1>D     g27.1<16,8,2>UW { align1 1H };
add(16)         g43.1<2>UW      g43.1<16,8,2>UW g124<16,8,2>UW  { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g12<1>D         g34<0,1,0>D     g43<1,1,0>D     { align1 1H compacted };

LABEL21:
else(16)        JIP:  LABEL18         UIP:  LABEL18             { align1 1H };

LABEL19:
mov(16)         g12<1>UD        0x00000000UD                    { align1 1H I@2 compacted };

LABEL18:
endif(16)       JIP:  LABEL17                                   { align1 1H };
mov(16)         g44<1>D         0D                              { align1 WE_all 1H };
mov(16)         g44<1>D         -g6<1,1,0>D                     { align1 1H compacted };
cmp.nz.f0.0(16) null<1>D        g5<8,8,1>D      g26<8,8,1>D     { align1 1H };
add(8)          g44.1<2>D       g44<8,4,2>D     g44.1<8,4,2>D   { align1 WE_all 1Q I@2 };
add(4)          g44.2<4>D       g44.1<8,2,4>D   g44.2<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g44.3<4>D       g44.1<8,2,4>D   g44.3<8,2,4>D   { align1 WE_all 1N I@1 };
add(4)          g44.4<1>D       g44.3<0,1,0>D   g44.4<4,4,1>D   { align1 WE_all 1N I@1 };
add(4)          g44.12<1>D      g44.11<0,1,0>D  g44.12<4,4,1>D  { align1 WE_all 1N I@2 };
add(8)          g44.8<1>D       g44.7<0,1,0>D   g44.8<8,8,1>D   { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add3(16)        g45<1>D         65535W          g12.0<0,1,0>D   g44<1,1,1>D { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g28<2>UD        g45<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g46<1>UQ        g28<8,4,2>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL22         UIP:  LABEL22             { align1 1H };
and(16)         g48<1>UD        g26<8,8,1>UD    0x00ffffffUD    { align1 1H };
shl(16)         g49<1>Q         g46<4,4,1>Q     0x00000006UD    { align1 1H I@3 };
shl(16)         g53<1>D         g13<8,8,1>D     0x0000001eUD    { align1 1H };
add(16)         g54<1>D         g25<8,8,1>D     1D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g112<1>UD       g48<8,8,1>UD    0xff000000UD    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g51<1>Q         g1.7<0,1,0>Q    g49<1,1,0>Q     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g113<1>UD       g26<1,1,0>UD    g53<1,1,0>UD    { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(16)          g114<1>UD       g54<8,8,1>UD    0xfffffff0UD    { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g51UD           g112UD          0x04002584                0x000000c0
                            ugm MsgDesc: ( store, a64, d32, V3, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 3 flat )  base_offset 0  { align1 1H $6 };

LABEL22:
endif(16)       JIP:  LABEL17                                   { align1 1H };
add(16)         g59<1>Q         g1.5<0,1,0>Q    g16<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
shl(16)         g64<1>Q         g46<4,4,1>Q     0x00000006UD    { align1 1H I@4 };
shl(16)         g80<1>D         g25<8,8,1>D     0x00000002UD    { align1 1H I@7 };
mov(16)         g29<2>UD        g14<1,1,0>UD                    { align1 1H compacted };
add(16)         g78<1>Q         g1.7<0,1,0>Q    g64<1,1,0>Q     { align1 1H I@3 compacted };
mov(16)         g31<2>UD        g80<1,1,0>UD                    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g55<1>UQ        g29<8,4,2>UD                    { align1 1H I@3 };
add(16)         g83<1>Q         g78<1,1,0>Q     g74<1,1,0>Q     { align1 1H I@3 compacted };
mov(16)         g81<1>UQ        g31<8,4,2>UD                    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
shl(16)         g57<1>Q         g55<4,4,1>Q     0x00000005UD    { align1 1H I@3 };
add(16)         g85<1>Q         g83<1,1,0>Q     g81<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g61<1>Q         g59<1,1,0>Q     g57<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g63UD           g61UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
and(16)         g113<1>UD       g66<8,8,1>UD    0x1fffffffUD    { align1 1H $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g85UD           g113UD          0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $6 };
cmp.z.f0.0(16)  null<1>D        g69<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL23         UIP:  LABEL23             { align1 1H };
shl(16)         g86<1>Q         g104<4,4,1>Q    0x00000006UD    { align1 1H $6.src };
add(16)         g88<1>Q         g1.7<0,1,0>Q    g86<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g90<1>Q         g78<1,1,0>Q     -g88<1,1,0>Q    { align1 1H I@1 compacted };
add(16)         g98<1>Q         g88<1,1,0>Q     g74<1,1,0>Q     { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g92<1>Q         (abs)g90<4,4,1>Q                { align1 1H I@2 };
cmp.l.f0.0(16)  null<1>D        g90.1<8,4,2>D   0D              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shr(16)         g94<1>UQ        g92<4,4,1>UQ    0x00000006UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g96<1>Q         -g94<4,4,1>Q                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
(+f0.0) sel(16) g114<1>UD       g96<8,4,2>UD    g94<8,4,2>UD    { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g98UD           g114UD          0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $6 };
add(16)         g99<1>Q         g88<1,1,0>Q     g16<1,1,0>Q     { align1 1H $6.src compacted };
mov(16)         g115<1>UD       g4<16,8,2>UB                    { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g99UD           g115UD          0x04000984                0x00000040
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $6 };

LABEL23:
endif(16)       JIP:  LABEL17                                   { align1 1H };
or(16)          g100<1>UD       g18<1,1,0>UD    g80<1,1,0>UD    { align1 1H $6.src compacted };
shl(16)         g101<1>Q        g104<4,4,1>Q    0x00000006UD    { align1 1H };
add(16)         g103<1>Q        g1.7<0,1,0>Q    g76<1,1,0>Q     { align1 1H $8.src compacted };
mov(16)         g32<4>UB        g100<8,8,1>UD                   { align1 1H I@3 };
add(16)         g105<1>Q        g103<1,1,0>Q    g101<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g116<1>UD       g32<32,8,4>UB                   { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g107<1>Q        g105<1,1,0>Q    g70<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g107UD          g116UD          0x04000984                0x00000040
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $6 };

LABEL17:
endif(16)       JIP:  LABEL14                                   { align1 1H };

LABEL14:
endif(16)       JIP:  LABEL11                                   { align1 1H };
add(16)         g15<1>D         g15<1,1,0>D     g10<0,1,0>D     { align1 1H I@6 compacted };

LABEL11:
while(16)       JIP:  LABEL24                                   { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_leaf_primref_to_procedurals_code[] = {
    0x80000065, 0x2b058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x10054770, 0x00000000, 0x00000010,
    0x00100061, 0x12054770, 0x00000000, 0x00000024,
    0x2c800061, 0x0011006c, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x01140000,
    0xfa002b0c, 0x00380000, 0xb4001961, 0x00106c7d,
    0x00101961, 0x17050230, 0x00447d06, 0x00000000,
    0x00101969, 0x19058770, 0x02341705, 0x00000004,
    0x00101961, 0x03060320, 0x00341905, 0x00000000,
    0x00101961, 0x08050220, 0x00440306, 0x00000000,
    0x00100040, 0x1a058660, 0x06440306, 0x00000010,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38801f40, 0x12030114, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x00100070, 0x00018660,
    0x16000224, 0x00000008, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x160c0000,
    0xfb001414, 0x00000000, 0x00108141, 0x1b050660,
    0x01000224, 0x00561606, 0x00100041, 0x75050660,
    0x01000224, 0x0056160e, 0xe8181d62, 0x16001a09,
    0x00101a40, 0x1b0e0110, 0x01561b0e, 0x00567506,
    0x14101962, 0x1c058220, 0x02461b05, 0x00000004,
    0x00100070, 0x00018660, 0x26440306, 0x00000000,
    0x04100022, 0x0001c060, 0x000000d0, 0x000000c0,
    0x00100040, 0x1d058660, 0x06440306, 0xffffffff,
    0x00101941, 0x1e050660, 0x01461d05, 0x00000224,
    0x00100041, 0x76050660, 0x01461d05, 0x0000022c,
    0xb4001e61, 0x00101c06, 0x00101a40, 0x1e0e0110,
    0x01561e0e, 0x00567606, 0x00101a61, 0x21050230,
    0x00440606, 0x00000000, 0xb4001a61, 0x00101e04,
    0x00101961, 0x1f050230, 0x00440406, 0x00000000,
    0x38001940, 0x21001f23, 0x38801940, 0x23080125,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x050c0000, 0xfb002514, 0x00000000,
    0x00100024, 0x0001c060, 0x00000020, 0x00000020,
    0x00108261, 0x05054220, 0x00000000, 0xffffffff,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0xb4001d61, 0x00101c0a, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x00101961, 0x26050230,
    0x00440a06, 0x00000000, 0xe8141a70, 0x16000828,
    0x04100022, 0x0001c060, 0x000000d0, 0x00000020,
    0x00100024, 0x0001c060, 0x000000c0, 0x000000c0,
    0x00100041, 0x29050660, 0x01460805, 0x00000224,
    0x00100041, 0x77050660, 0x01460805, 0x0000022c,
    0x00101940, 0x290e0110, 0x0156290e, 0x00567706,
    0xb4001961, 0x0010290b, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x00101961, 0x2a050230,
    0x00440b06, 0x00000000, 0x38001940, 0x26002a2c,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x38801940, 0x2c08012e, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x300c0000,
    0xfb002e14, 0x00000000, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0xac508370, 0x05003006,
    0x00100025, 0x00004600, 0x00000000, 0x00000040,
    0x00101a66, 0x00010220, 0x22460605, 0x00462805,
    0x04100028, 0x0001c660, 0x00000020, 0x00000020,
    0x00100040, 0x08058660, 0x06460805, 0x00000001,
    0x00100027, 0x00014060, 0x00000000, 0xfffffee8,
    0x00101f40, 0x31058660, 0x06460905, 0xffffffff,
    0x00101941, 0x32050660, 0x01463105, 0x00000224,
    0x00100041, 0x78050660, 0x01463105, 0x0000022c,
    0x00101940, 0x320e0110, 0x0156320e, 0x00567806,
    0xb4001961, 0x0010320c, 0x00101961, 0x33050230,
    0x00440c06, 0x00000000, 0x38001940, 0x26003335,
    0x38801940, 0x35080137, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c431, 0x390c0000,
    0xfb003714, 0x00000000, 0xe8141a70, 0x1600093a,
    0x04100022, 0x0001c060, 0x000000c0, 0x00000020,
    0x00100024, 0x0001c060, 0x000000b0, 0x000000b0,
    0x00100041, 0x3b050660, 0x01460905, 0x00000224,
    0x00100041, 0x79050660, 0x01460905, 0x0000022c,
    0x00101940, 0x3b0e0110, 0x01563b0e, 0x00567906,
    0xb4001961, 0x00103b0d, 0x00101961, 0x3c050230,
    0x00440d06, 0x00000000, 0x38001940, 0x26003c3e,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x38801940, 0x3e080140, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x420c0000,
    0xfb004014, 0x00000000, 0x80008401, 0x00000000,
    0x00000000, 0x00000000, 0xac508570, 0x39004207,
    0x00100025, 0x00004600, 0x00000000, 0x00000040,
    0x00101a66, 0x00010220, 0x22460705, 0x00463a05,
    0x04100028, 0x0001c660, 0x00000020, 0x00000020,
    0x00100040, 0x09058660, 0x06460905, 0x00000001,
    0x00100027, 0x00014060, 0x00000000, 0xfffffef8,
    0x00100061, 0x48054770, 0x00000000, 0x0000001c,
    0x00100061, 0x4a054770, 0x00000000, 0x0000000c,
    0x00100061, 0x4c054770, 0x00000000, 0x00000016,
    0x800c0061, 0x44054410, 0x00000000, 0x76543210,
    0x00100061, 0x04064540, 0x00000000, 0x00030003,
    0x800c1a40, 0x44458110, 0x01464405, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x43050120, 0x00464405, 0x00000000,
    0x00101965, 0x45058220, 0x02464305, 0x0000000f,
    0xb4001961, 0x00104512, 0xac000040, 0x4500080f,
    0x00101a61, 0x46050230, 0x00441206, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00100913, 0x00101961, 0x4e050230,
    0x00441306, 0x00000000, 0x38001940, 0x46004e50,
    0x00101970, 0x52058660, 0x16445016, 0x00000000,
    0x00101e70, 0x53050220, 0x52460f05, 0x00445006,
    0x0010a670, 0x55058220, 0x32445016, 0x00000000,
    0xe8001a65, 0x53005254, 0x00101966, 0x00010220,
    0x22465505, 0x00465405, 0x14100028, 0x0001c660,
    0x00001128, 0x00001128, 0x0010a641, 0x56050660,
    0x01460f05, 0x00000224, 0x00100041, 0x7a050660,
    0x01460f05, 0x0000022c, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x59050230,
    0x00000234, 0x00000000, 0xe8180070, 0x09000f64,
    0x00101b40, 0x560e0110, 0x0156560e, 0x00567a06,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0xb4001961, 0x00105614, 0x00101961, 0x57050230,
    0x00441406, 0x00000000, 0x38001940, 0x5900575b,
    0x38000040, 0x2600575f, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x38801a40, 0x5b08015d,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x5f080161, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c731, 0x6e0c0000,
    0xfb005d14, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x630c0000,
    0xfb006114, 0x00000000, 0xac308670, 0x63106365,
    0x00101965, 0x00010220, 0x22466405, 0x00466505,
    0x04100022, 0x0001c060, 0x00000080, 0x00000078,
    0xec840961, 0x00104021, 0x80000965, 0x21058220,
    0x02002104, 0xffffffff, 0xec840961, 0x00167022,
    0x80000965, 0x22058220, 0x02002204, 0xffffffff,
    0xe8841965, 0x22102122, 0x2c841961, 0x00102266,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x2c80004d, 0x0010660a, 0x00100024, 0x0001c060,
    0x00000018, 0x00000018, 0x64801a61, 0x0000000a,
    0x00100025, 0x00004600, 0x00000000, 0x00000f70,
    0x0010a869, 0x67058660, 0x02464505, 0x00000002,
    0x80008701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c831, 0x00000000, 0xea08670c, 0x00006e0c,
    0x00100070, 0x00018220, 0x52464505, 0x00000008,
    0xb4000061, 0x00106315, 0x00101961, 0x68050230,
    0x00441506, 0x00000000, 0x04100022, 0x0001c060,
    0x00000ee0, 0x00000ee0, 0x00101f70, 0x00010220,
    0x52464505, 0x00000a04, 0x04100022, 0x0001c060,
    0x00000168, 0x00000158, 0x0010a669, 0x6a058770,
    0x02344605, 0x00000002, 0x00101961, 0x16060320,
    0x00346a05, 0x00000000, 0x00101961, 0x6b050220,
    0x00441606, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x0e0c0000,
    0xea006b0c, 0x00000000, 0xb4008661, 0x00100e18,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x00101961, 0x6c050230, 0x00441806, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x00101969, 0x6e058770, 0x02346c05, 0x00000005,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x38801940, 0x6e070170, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x72240000,
    0xfb007014, 0x000c0000, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x3800a640, 0x10007076,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010ca31, 0x78240000, 0xfb007614, 0x000c0000,
    0x00108665, 0x1a058220, 0x02467505, 0x07ffffff,
    0x00108a68, 0x0d058220, 0x02467b05, 0x0000001d,
    0x00100024, 0x0001c060, 0x00000020, 0x00000020,
    0x00101b61, 0x1a054220, 0x00000000, 0xffffffff,
    0x00100025, 0x00004600, 0x00000000, 0x00000d58,
    0x00108a40, 0x79058660, 0x06464305, 0x0000000f,
    0x00108a40, 0x7a058660, 0x06464305, 0xffffffff,
    0x00100040, 0x7d058660, 0x06464305, 0x00000001,
    0x00101b70, 0x00018660, 0x56467905, 0x00000010,
    0x80101b61, 0x10014110, 0x00000000, 0x06800680,
    0x00100069, 0x10018510, 0x01567a06, 0x00020002,
    0x00100940, 0x10018110, 0x01461001, 0x06800680,
    0x00100961, 0x7b050220, 0x00710000, 0x00000000,
    0x80101b61, 0x10014110, 0x00000000, 0x06800680,
    0x00100069, 0x10018510, 0x01567d06, 0x00020002,
    0x00100940, 0x10018110, 0x01461001, 0x06800680,
    0x00100961, 0x7e050220, 0x00710000, 0x00000000,
    0x14101a62, 0x7c058220, 0x02467b05, 0xffffffff,
    0x00100070, 0x7f058660, 0x56467d05, 0x00000010,
    0x04116262, 0x05058220, 0x02467e05, 0xffffffff,
    0xac501b70, 0x1a007c06, 0x00101b70, 0x00018660,
    0x26467f05, 0x00000000, 0x7d801a61, 0x00100607,
    0x80101961, 0x10014110, 0x00000000, 0x01c001c0,
    0x00100069, 0x10018510, 0x01567d06, 0x00020002,
    0x00100940, 0x10018110, 0x01461001, 0x01c001c0,
    0x00100961, 0x08050220, 0x00710000, 0x00000000,
    0x04101962, 0x12058220, 0x02460805, 0x00000000,
    0x00100070, 0x00018660, 0x26460605, 0x00000000,
    0x04100062, 0x13058220, 0x02464505, 0x00000000,
    0xb4001961, 0x00101314, 0x00101961, 0x14164220,
    0x00000000, 0x00000000, 0x80101961, 0x16054330,
    0x00000000, 0x00000000, 0xa4000061, 0x00101416,
    0x80081970, 0x00010220, 0x32421607, 0x00421627,
    0x84080070, 0x00010220, 0x12421617, 0x00421637,
    0x94080070, 0x00010220, 0x32421617, 0x00421637,
    0x84080061, 0x16270220, 0x00421607, 0x00000000,
    0x84081961, 0x16370220, 0x00421617, 0x00000000,
    0x80041970, 0x00010220, 0x32001624, 0x00321646,
    0x84040070, 0x00010220, 0x12001634, 0x00321656,
    0x94040070, 0x00010220, 0x32001634, 0x00321656,
    0x84040061, 0x16460220, 0x00001624, 0x00000000,
    0x84041961, 0x16560220, 0x00001634, 0x00000000,
    0x80041e70, 0x00010220, 0x320016a4, 0x003216c6,
    0x84040070, 0x00010220, 0x120016b4, 0x003216d6,
    0x94040070, 0x00010220, 0x320016b4, 0x003216d6,
    0x84040061, 0x16c60220, 0x000016a4, 0x00000000,
    0x84041961, 0x16d60220, 0x000016b4, 0x00000000,
    0x80081970, 0x00010220, 0x32001664, 0x00441686,
    0x84080070, 0x00010220, 0x12001674, 0x00441696,
    0x94080070, 0x00010220, 0x32001674, 0x00441696,
    0x84080061, 0x16860220, 0x00001664, 0x00000000,
    0x84081961, 0x16960220, 0x00001674, 0x00000000,
    0x80080070, 0x00010220, 0x32421707, 0x00421727,
    0x84080070, 0x00010220, 0x12421717, 0x00421737,
    0x94080070, 0x00010220, 0x32421717, 0x00421737,
    0x84080061, 0x17270220, 0x00421707, 0x00000000,
    0x84081961, 0x17370220, 0x00421717, 0x00000000,
    0x80041970, 0x00010220, 0x32001724, 0x00321746,
    0x84040070, 0x00010220, 0x12001734, 0x00321756,
    0x94040070, 0x00010220, 0x32001734, 0x00321756,
    0x84040061, 0x17460220, 0x00001724, 0x00000000,
    0x84041961, 0x17560220, 0x00001734, 0x00000000,
    0x80041e70, 0x00010220, 0x320017a4, 0x003217c6,
    0x84040070, 0x00010220, 0x120017b4, 0x003217d6,
    0x94040070, 0x00010220, 0x320017b4, 0x003217d6,
    0x84040061, 0x17c60220, 0x000017a4, 0x00000000,
    0x84041961, 0x17d60220, 0x000017b4, 0x00000000,
    0x80081970, 0x00010220, 0x32001764, 0x00441786,
    0x84080070, 0x00010220, 0x12001774, 0x00441796,
    0x94080070, 0x00010220, 0x32001774, 0x00441796,
    0x84080061, 0x17860220, 0x00001764, 0x00000000,
    0x84081961, 0x17960220, 0x00001774, 0x00000000,
    0x800c1970, 0x00010220, 0x320016e4, 0x00441706,
    0x840c0070, 0x00010220, 0x120016f4, 0x00441716,
    0x940c0070, 0x00010220, 0x320016f4, 0x00441716,
    0x840c0061, 0x17060220, 0x000016e4, 0x00000000,
    0x840c1961, 0x17160220, 0x000016f4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x18052770, 0x00341605, 0x00000000,
    0x00100070, 0x00010220, 0x52464505, 0x00000a04,
    0x00101a61, 0x1b060320, 0x00341805, 0x00000000,
    0x00101940, 0x19050660, 0x06464505, 0x00441b06,
    0x04100022, 0x0001c060, 0x00000868, 0x00000868,
    0x80100061, 0x6d054660, 0x00000000, 0x00000000,
    0x7d800061, 0x0010066d, 0x00100070, 0x00018660,
    0x16464505, 0x00000000, 0x800c1a40, 0x6d160660,
    0x06446d06, 0x00446d16, 0x80081940, 0x6d270660,
    0x06426d17, 0x00426d27, 0x80081940, 0x6d370660,
    0x06426d17, 0x00426d37, 0x80081940, 0x6d450660,
    0x06006d34, 0x00346d45, 0x80081a40, 0x6dc50660,
    0x06006db4, 0x00346dc5, 0x800c1940, 0x6d850660,
    0x06006d74, 0x00466d85, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x1b050660,
    0x00006df4, 0x00000000, 0x04100022, 0x0001c060,
    0x000002d8, 0x000002d0, 0x38800040, 0x480d011c,
    0xec840961, 0x00104023, 0x80000965, 0x23058220,
    0x02002304, 0xffffffff, 0xec840961, 0x00167024,
    0x80000965, 0x24058220, 0x02002404, 0xffffffff,
    0xe8841965, 0x24102324, 0x2c841961, 0x0010241e,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x2c80004d, 0x00101e1f, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x00101941, 0x6f050660,
    0x01461f05, 0x00561b06, 0x00100041, 0x7b050660,
    0x01461f05, 0x00561b0e, 0x00101940, 0x6f0e0110,
    0x01566f0e, 0x00567b06, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0xec840961, 0x00104025,
    0x80000965, 0x25058220, 0x02002504, 0xffffffff,
    0x2c84194c, 0x00102520, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100070, 0x00010660,
    0x16464305, 0x00002004, 0x04100022, 0x0001c060,
    0x00000030, 0x00000030, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x0b0c0000,
    0xfb181c14, 0x01006f0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000190, 0xec840961, 0x00104028,
    0x80000965, 0x28058220, 0x02002804, 0xffffffff,
    0x2c84194c, 0x00102821, 0x80012969, 0x10018220,
    0x02002104, 0x00000002, 0x80000940, 0x10018220,
    0x02001000, 0x00000200, 0x80000961, 0x22050220,
    0x00010180, 0x00000000, 0xec840961, 0x00104029,
    0x80000965, 0x29058220, 0x02002904, 0xffffffff,
    0x80000061, 0x03054660, 0x00000000, 0x00000001,
    0xec840961, 0x0016702a, 0x80000965, 0x2a058220,
    0x02002a04, 0xffffffff, 0x800c0061, 0x25054410,
    0x00000000, 0x76543210, 0xe8841a65, 0x2a10292a,
    0x800c1a40, 0x25458110, 0x01462505, 0x00080008,
    0x2c841a61, 0x00102a23, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x24050120,
    0x00462505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x28052660,
    0x02000304, 0x00462405, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100065, 0x29050220,
    0x06002304, 0x02462805, 0x2c00194d, 0x0010292a,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00101941, 0x2b050660, 0x01462a05, 0x00561b06,
    0x00100041, 0x7c050660, 0x01462a05, 0x00561b0e,
    0x00101940, 0x2b0e0110, 0x01562b0e, 0x00567c06,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xac800040, 0x2b00220c, 0x00100024, 0x0001c060,
    0x00000018, 0x00000018, 0x64801a61, 0x0000000c,
    0x00100025, 0x00004600, 0x00000000, 0x000004d8,
    0x80100061, 0x2c054660, 0x00000000, 0x00000000,
    0x7d800061, 0x0010062c, 0x00100070, 0x00010660,
    0x26460505, 0x00461a05, 0x800c1a40, 0x2c160660,
    0x06442c06, 0x00442c16, 0x80081940, 0x2c270660,
    0x06422c17, 0x00422c27, 0x80081940, 0x2c370660,
    0x06422c17, 0x00422c37, 0x80081940, 0x2c450660,
    0x06002c34, 0x00342c45, 0x80081a40, 0x2cc50660,
    0x06002cb4, 0x00342cc5, 0x800c1940, 0x2c850660,
    0x06002c74, 0x00462c85, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100052, 0x2d044560,
    0x0606ffff, 0x2c050c04, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0xb4001961, 0x00102d1c,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x00101961, 0x2e050230, 0x00441c06, 0x00000000,
    0x04100022, 0x0001c060, 0x000000e0, 0x000000e0,
    0x00100065, 0x30058220, 0x02461a05, 0x00ffffff,
    0x00101b69, 0x31058770, 0x02342e05, 0x00000006,
    0x00100069, 0x35058660, 0x02460d05, 0x0000001e,
    0x00100040, 0x36058660, 0x06461905, 0x00000001,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x00101c66, 0x70058220, 0x02463005, 0xff000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x38801c40, 0x310d0133, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0xe8001c66, 0x35001a71,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00108666, 0x72058220, 0x02463605, 0xfffffff0,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x00000000, 0xfb083314, 0x0008701c,
    0x00100025, 0x00004600, 0x00000000, 0x00000308,
    0x38800040, 0x1007013b, 0x80008501, 0x00000000,
    0x00000000, 0x00000000, 0x00101c69, 0x40058770,
    0x02342e05, 0x00000006, 0x00101f69, 0x50058660,
    0x02461905, 0x00000002, 0xb4000061, 0x00100e1d,
    0x38801b40, 0x400d014e, 0xb4001b61, 0x0010501f,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x00101b61, 0x37050230, 0x00441d06, 0x00000000,
    0x38001b40, 0x4a004e53, 0x00101b61, 0x51050230,
    0x00441f06, 0x00000000, 0x80008401, 0x00000000,
    0x00000000, 0x00000000, 0x00101b69, 0x39058770,
    0x02343705, 0x00000005, 0x38001a40, 0x51005355,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x39003b3d, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x3f240000,
    0xfb003d14, 0x000c0000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x00108565, 0x71058220,
    0x02464205, 0x1fffffff, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x00000000,
    0xfb085514, 0x0000710c, 0x00100070, 0x00018660,
    0x16464505, 0x00000000, 0x04100022, 0x0001c060,
    0x00000120, 0x00000120, 0x0010a669, 0x56058770,
    0x02346805, 0x00000006, 0x38801940, 0x560d0158,
    0x38001940, 0x58204e5a, 0x3800a640, 0x4a005862,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x5c051770, 0x00345a05, 0x00000000,
    0x00100070, 0x00018660, 0x56445a16, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x00101a68, 0x5e058330, 0x02345c05, 0x00000006,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x00101961, 0x60052770, 0x00345e05, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x04108662, 0x72050220, 0x02446006, 0x00445e06,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x00000000, 0xfb086214, 0x0000720c,
    0x3800a640, 0x10005863, 0x00108661, 0x73050020,
    0x00560406, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x00000000,
    0xf3086314, 0x0002730c, 0x00100025, 0x00004600,
    0x00000000, 0x000000a0, 0xe800a666, 0x50001264,
    0x00100069, 0x65058770, 0x02346805, 0x00000006,
    0x3880a840, 0x4c0d0167, 0x00101b61, 0x20070200,
    0x00466405, 0x00000000, 0x38001a40, 0x65006769,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00108661, 0x74050020, 0x00662007, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x4600696b, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x00000000,
    0xf3086b14, 0x0002740c, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100025, 0x00004600,
    0x00000000, 0x00000018, 0xac001e40, 0x0a100f0f,
    0x00100027, 0x00014060, 0x00000000, 0xffffee50,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_leaf_primref_to_procedurals = {
   .prog_data = {
      .base.nr_params = 20,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 4,
      .base.total_scratch = 0,
      .base.total_shared = 64,
      .base.program_size = 6080,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_leaf_primref_to_procedurals_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_leaf_primref_to_procedurals_printfs,
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
   .args = gfx20_bvh_build_leaf_primref_to_procedurals_args,
   .code = gfx20_bvh_build_leaf_primref_to_procedurals_code,
};
const char *gfx20_bvh_build_leaf_primref_to_procedurals_sha1 = "7dad662e1e0fbe48716f2d20d1d51f936aeb5e0c";

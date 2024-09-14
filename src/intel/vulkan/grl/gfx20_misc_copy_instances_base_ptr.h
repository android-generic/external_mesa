#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_instances_base_ptr_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_instances_base_ptr_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_instances_base_ptr_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g33<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g9<1>Q          0x0000000000000098Q             { align1 1H };
mov(16)         g111<1>UD       g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g33UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g8<1>UD         g111<1,1,0>UD                   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g11<1>Q         g9<1,1,0>Q      g1.4<0,1,0>Q    { align1 1H I@3 compacted };
mov(16)         g4<2>UD         g1.6<0,1,0>UQ                   { align1 1H };
and(16)         g19<1>UD        g1.12<0,1,0>UD  0xffffff00UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g13UD           g11UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
shr(16)         g18<1>UD        g4<8,4,2>UD     0x00000008UD    { align1 1H I@2 };
mov(16)         g6<2>UD         g19<1,1,0>UD                    { align1 1H I@2 compacted };
add3(16)        g26<1>D         65534W          -g18<8,8,1>D    g111<1,1,1>D { align1 1H I@2 };
mov(16)         g20<1>UQ        g6<8,4,2>UD                     { align1 1H I@2 };
mov(16)         g27<1>D         -g26<1,1,0>D                    { align1 1H I@2 compacted };
add(16)         g22<1>Q         g1.6<0,1,0>Q    -g20<1,1,0>Q    { align1 1H I@2 compacted };
and(16)         g24<1>UD        g22<8,4,2>UD    0xffffffc0UD    { align1 1H I@1 };
shr(16)         g25<1>UD        g24<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g27<8,8,1>UD    g25<8,8,1>UD    { align1 1H I@1 };
mov(16)         g2<2>UD         g13<1,1,0>UD                    { align1 1H $1.dst compacted };
mov(16)         g14<1>UQ        g2<8,4,2>UD                     { align1 1H I@1 };
add(16)         g16<1>Q         g1.4<0,1,0>Q    g14<1,1,0>Q     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g28<1>D         -g26<8,8,1>D    0x00000006UD    { align1 1H };
or.z.f0.0(16)   null<1>UD       g1.10<0,1,0>UD  g1.11<0,1,0>UD  { align1 1H };
add(16)         g29<1>D         g19<1,1,0>D     g28<1,1,0>D     { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
shr(16)         g30<1>UD        g29<8,8,1>UD    0x00000006UD    { align1 1H I@2 };
mov(16)         g9<2>UD         g30<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g31<1>UQ        g9<8,4,2>UD                     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g33<1>Q         g31<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g35UD           g33UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
mov(16)         g2<2>UD         g35<1,1,0>UD                    { align1 1H $0.dst compacted };
mov(16)         g2.1<2>UD       g36<1,1,0>UD                    { align1 1H @1 $0.dst compacted };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g10<2>UD        g29<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g36<1>UQ        g10<8,4,2>UD                    { align1 1H I@1 };
add(16)         g2<1>Q          g1.5<0,1,0>Q    g36<1,1,0>Q     { align1 1H I@1 compacted };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g11<2>UD        g29<1,1,0>UD                    { align1 1H $1.src compacted };
mov(16)         g37<1>UQ        g11<8,4,2>UD                    { align1 1H I@1 };
add(16)         g39<1>Q         g16<1,1,0>Q     g37<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g28<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g28<1>UD        g28<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g41<1>UD        g28<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g41<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g42<1>UQ        g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g41<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g44<1>UQ        g[a0 448]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g112<1>Q        g42<0,1,0>Q                     { align1 WE_all 1H I@2 };
mov(16)         g114<1>Q        g44<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g40UD           g112UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g114UD          g40UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $3 };

LABEL0:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shr(16)         g45<1>UD        g19<8,8,1>UD    0x00000008UD    { align1 1H };
or(16)          g46<1>UD        g1.10<0,1,0>UD  g1.11<0,1,0>UD  { align1 1H compacted };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g8<8,8,1>UD     g45<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g47<1>D         g8<8,8,1>D      0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g46<8,8,1>D     0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
shr(16)         g48<1>UD        g47<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g12<2>UD        g48<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g49<1>UQ        g12<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(16)         g51<1>Q         g49<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g53UD           g51UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g3<2>UD         g53<1,1,0>UD                    { align1 1H $4.dst compacted };
mov(16)         g3.1<2>UD       g54<1,1,0>UD                    { align1 1H @1 $4.dst compacted };
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
mov(16)         g13<2>UD        g47<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g54<1>UQ        g13<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g3<1>Q          g1.5<0,1,0>Q    g54<1,1,0>Q     { align1 1H compacted };

LABEL5:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g14<2>UD        g47<1,1,0>UD                    { align1 1H compacted };
mov(16)         g55<1>UQ        g14<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g57<1>Q         g16<1,1,0>Q     g55<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g29<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g29<1>UD        g29<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g59<1>UD        g29<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g59<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g60<1>UQ        g[a0 192]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g59<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g62<1>UQ        g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g115<1>Q        g60<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g117<1>Q        g62<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g58UD           g115UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g117UD          g58UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g63<1>D         g47<8,8,1>D     64D             { align1 1H };
cmp.z.f0.0(16)  null<1>D        g46<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
shr(16)         g64<1>UD        g63<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g19<2>UD        g64<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g65<1>UQ        g19<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(16)         g67<1>Q         g65<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g69UD           g67UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mov(16)         g4<2>UD         g69<1,1,0>UD                    { align1 1H $8.dst compacted };
mov(16)         g4.1<2>UD       g70<1,1,0>UD                    { align1 1H @1 $8.dst compacted };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g20<2>UD        g63<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g70<1>UQ        g20<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g4<1>Q          g1.5<0,1,0>Q    g70<1,1,0>Q     { align1 1H compacted };

LABEL7:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g21<2>UD        g63<1,1,0>UD                    { align1 1H compacted };
mov(16)         g71<1>UQ        g21<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g73<1>Q         g16<1,1,0>Q     g71<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g30<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g30<1>UD        g30<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g75<1>UD        g30<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g75<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g76<1>UQ        g[a0 256]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g75<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001200UD    { align1 WE_all 1N A@1 };
mov(1)          g78<1>UQ        g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
mov(16)         g118<1>Q        g76<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g120<1>Q        g78<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g74UD           g118UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g120UD          g74UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g79<1>D         g47<8,8,1>D     128D            { align1 1H };
cmp.z.f0.0(16)  null<1>D        g46<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
shr(16)         g80<1>UD        g79<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g22<2>UD        g80<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g81<1>UQ        g22<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(16)         g83<1>Q         g81<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g85UD           g83UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
mov(16)         g5<2>UD         g85<1,1,0>UD                    { align1 1H $11.dst compacted };
mov(16)         g5.1<2>UD       g86<1,1,0>UD                    { align1 1H @1 $11.dst compacted };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
mov(16)         g23<2>UD        g79<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g86<1>UQ        g23<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g5<1>Q          g1.5<0,1,0>Q    g86<1,1,0>Q     { align1 1H compacted };

LABEL9:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g24<2>UD        g79<1,1,0>UD                    { align1 1H compacted };
mov(16)         g87<1>UQ        g24<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g89<1>Q         g16<1,1,0>Q     g87<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g31<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g31<1>UD        g31<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g91<1>UD        g31<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g91<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g92<1>UQ        g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g91<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001600UD    { align1 WE_all 1N A@1 };
mov(1)          g94<1>UQ        g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
mov(16)         g121<1>Q        g92<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g123<1>Q        g94<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g90UD           g121UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g123UD          g90UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g95<1>D         g47<8,8,1>D     192D            { align1 1H };
cmp.z.f0.0(16)  null<1>D        g46<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
shr(16)         g96<1>UD        g95<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g25<2>UD        g96<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g97<1>UQ        g25<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
shl(16)         g99<1>Q         g97<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g101UD          g99UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
mov(16)         g6<2>UD         g101<1,1,0>UD                   { align1 1H $14.dst compacted };
mov(16)         g6.1<2>UD       g102<1,1,0>UD                   { align1 1H @1 $14.dst compacted };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g26<2>UD        g95<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g102<1>UQ       g26<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g6<1>Q          g1.5<0,1,0>Q    g102<1,1,0>Q    { align1 1H compacted };

LABEL11:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g27<2>UD        g95<1,1,0>UD                    { align1 1H compacted };
mov(16)         g103<1>UQ       g27<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g105<1>Q        g16<1,1,0>Q     g103<1,1,0>Q    { align1 1H I@1 compacted };
mov(1)          g32<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g32<1>UD        g32<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g107<1>UD       g32<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g107<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g108<1>UQ       g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g107<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001a00UD    { align1 WE_all 1N A@1 };
mov(1)          g110<1>UQ       g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
mov(16)         g124<1>Q        g108<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g126<1>Q        g110<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g106UD          g124UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g126UD          g106UD          0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $15 };
add3(16)        g8<1>D          0x0003UW        g18<8,8,1>D     g8<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL13                                   { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H $15.src compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_instances_base_ptr_code[] = {
    0x80000065, 0x21058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x09054770, 0x00000000, 0x00000098,
    0x2c800061, 0x0011006f, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00210c, 0x00340000, 0x2c001961, 0x00106f08,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001b40, 0x0170090b, 0x00100061, 0x04060320,
    0x000001c4, 0x00000000, 0x00100065, 0x13058220,
    0x020001c4, 0xffffff00, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x0d0c0000,
    0xfb000b14, 0x00000000, 0x00101a68, 0x12058220,
    0x02440406, 0x00000008, 0xb4001a61, 0x00101306,
    0x00101a52, 0x1a044560, 0x0e8efffe, 0x6f051205,
    0x00101a61, 0x14050230, 0x00440606, 0x00000000,
    0x7d801a61, 0x00101a1b, 0x38801a40, 0x14280116,
    0x00101965, 0x18058220, 0x02441606, 0xffffffc0,
    0x00101968, 0x19058220, 0x02461805, 0x00000006,
    0x00101970, 0x00010220, 0x52461b05, 0x00461905,
    0xb4008161, 0x00100d02, 0x00101961, 0x0e050230,
    0x00440206, 0x00000000, 0x38801940, 0x0e030110,
    0x04100022, 0x0001c060, 0x00000210, 0x00000210,
    0x00100069, 0x1c05a660, 0x02461a05, 0x00000006,
    0x00100066, 0x00010220, 0x120001a4, 0x000001b4,
    0xac001a40, 0x1c00131d, 0x04100022, 0x0001c060,
    0x000000c8, 0x00000098, 0x00101a68, 0x1e058220,
    0x02461d05, 0x00000006, 0xb4001961, 0x00101e09,
    0x00101961, 0x1f050230, 0x00440906, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00101969, 0x21058770, 0x02341f05, 0x00000003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c031, 0x23140000, 0xfb002114, 0x00040000,
    0xb4008061, 0x00102302, 0xb4012061, 0x00122402,
    0x00100024, 0x0001c060, 0x00000040, 0x00000040,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0xb4001a61, 0x00101d0a, 0x00101961, 0x24050230,
    0x00440a06, 0x00000000, 0x38801940, 0x24070102,
    0x00100025, 0x00004600, 0x00000000, 0x00000110,
    0xb400a161, 0x00101d0b, 0x00101961, 0x25050230,
    0x00440b06, 0x00000000, 0x38001940, 0x25001027,
    0xec840961, 0x0010401c, 0x80000965, 0x1c058220,
    0x02001c04, 0xffffffff, 0x2c84194c, 0x00101c29,
    0x80001969, 0x10018220, 0x02002904, 0x00000003,
    0x80000961, 0x2a050330, 0x00010100, 0x00000000,
    0x80001c69, 0x10018220, 0x02002904, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000800,
    0x80000961, 0x2c050330, 0x00010380, 0x00000000,
    0x80101a61, 0x70050770, 0x00002a04, 0x00000000,
    0x80101a61, 0x72050770, 0x00002c04, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c231, 0x280c0000, 0xfb00700c, 0x00340000,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c331, 0x00000000, 0xfb08720c, 0x0034280c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100068, 0x2d058220, 0x02461305, 0x00000008,
    0xe8800066, 0x01c7012e, 0x00101a70, 0x00010220,
    0x42460805, 0x00462d05, 0x04100028, 0x0001c660,
    0x00000900, 0x00000900, 0x00100069, 0x2f058660,
    0x02460805, 0x00000008, 0x00101c70, 0x00018660,
    0x16462e05, 0x00000000, 0x04100022, 0x0001c060,
    0x000000d8, 0x000000a8, 0x00101b68, 0x30058220,
    0x02462f05, 0x00000006, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0xb4001961, 0x0010300c,
    0x00101961, 0x31050230, 0x00440c06, 0x00000000,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x00101969, 0x33058770, 0x02343105, 0x00000003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x35140000, 0xfb003314, 0x00040000,
    0xb4008461, 0x00103503, 0xb4012461, 0x00123603,
    0x00100024, 0x0001c060, 0x00000040, 0x00000040,
    0xb4001b61, 0x00102f0d, 0x00101961, 0x36050230,
    0x00440d06, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x36070103,
    0x00100025, 0x00004600, 0x00000000, 0x000007f8,
    0xb4000061, 0x00102f0e, 0x00101961, 0x37050230,
    0x00440e06, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x38001940, 0x37001039,
    0xec840961, 0x0010401d, 0x80000965, 0x1d058220,
    0x02001d04, 0xffffffff, 0x2c84194c, 0x00101d3b,
    0x80001969, 0x10018220, 0x02003b04, 0x00000003,
    0x80000961, 0x3c050330, 0x00010180, 0x00000000,
    0x80001c69, 0x10018220, 0x02003b04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000e00,
    0x80000961, 0x3e050330, 0x00010080, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x73050770, 0x00003c04, 0x00000000,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x75050770, 0x00003e04, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c631, 0x3a0c0000, 0xfb00730c, 0x00340000,
    0x80008601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c531, 0x00000000, 0xfb08750c, 0x00343a0c,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x3f058660, 0x06462f05, 0x00000040,
    0x00100070, 0x00018660, 0x16462e05, 0x00000000,
    0x04100022, 0x0001c060, 0x000000c8, 0x00000098,
    0x00101b68, 0x40058220, 0x02463f05, 0x00000006,
    0xb4001961, 0x00104013, 0x00101961, 0x41050230,
    0x00441306, 0x00000000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x00101969, 0x43058770,
    0x02344105, 0x00000003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x45140000,
    0xfb004314, 0x00040000, 0xb4008861, 0x00104504,
    0xb4012861, 0x00124604, 0x00100024, 0x0001c060,
    0x00000040, 0x00000040, 0xb4001b61, 0x00103f14,
    0x00101961, 0x46050230, 0x00441406, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x46070104, 0x00100025, 0x00004600,
    0x00000000, 0x000005b0, 0xb4000061, 0x00103f15,
    0x00101961, 0x47050230, 0x00441506, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x47001049, 0xec840961, 0x0010401e,
    0x80000965, 0x1e058220, 0x02001e04, 0xffffffff,
    0x2c84194c, 0x00101e4b, 0x80001969, 0x10018220,
    0x02004b04, 0x00000003, 0x80000961, 0x4c050330,
    0x00010200, 0x00000000, 0x80001c69, 0x10018220,
    0x02004b04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001200, 0x80000961, 0x4e050330,
    0x00010080, 0x00000000, 0x80101a61, 0x76050770,
    0x00004c04, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x78050770,
    0x00004e04, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c731, 0x4a0c0000,
    0xfb00760c, 0x00340000, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c931, 0x00000000,
    0xfb08780c, 0x00344a0c, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x4f058660,
    0x06462f05, 0x00000080, 0x00100070, 0x00018660,
    0x16462e05, 0x00000000, 0x04100022, 0x0001c060,
    0x000000c8, 0x00000098, 0x00101b68, 0x50058220,
    0x02464f05, 0x00000006, 0xb4001961, 0x00105016,
    0x00101961, 0x51050230, 0x00441606, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x00101969, 0x53058770, 0x02345105, 0x00000003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cb31, 0x55140000, 0xfb005314, 0x00040000,
    0xb4008b61, 0x00105505, 0xb4012b61, 0x00125605,
    0x00100024, 0x0001c060, 0x00000040, 0x00000040,
    0xb4001b61, 0x00104f17, 0x00101961, 0x56050230,
    0x00441706, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x56070105,
    0x00100025, 0x00004600, 0x00000000, 0x00000378,
    0xb4000061, 0x00104f18, 0x00101961, 0x57050230,
    0x00441806, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x38001940, 0x57001059,
    0xec840961, 0x0010401f, 0x80000965, 0x1f058220,
    0x02001f04, 0xffffffff, 0x2c84194c, 0x00101f5b,
    0x80001969, 0x10018220, 0x02005b04, 0x00000003,
    0x80000961, 0x5c050330, 0x00010280, 0x00000000,
    0x80001c69, 0x10018220, 0x02005b04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001600,
    0x80000961, 0x5e050330, 0x00010080, 0x00000000,
    0x80101a61, 0x79050770, 0x00005c04, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x7b050770, 0x00005e04, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000ca31, 0x5a0c0000, 0xfb00790c, 0x00340000,
    0x80008a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000cc31, 0x00000000, 0xfb087b0c, 0x00345a0c,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x5f058660, 0x06462f05, 0x000000c0,
    0x00100070, 0x00018660, 0x16462e05, 0x00000000,
    0x04100022, 0x0001c060, 0x000000c8, 0x00000098,
    0x00101b68, 0x60058220, 0x02465f05, 0x00000006,
    0xb4001961, 0x00106019, 0x00101961, 0x61050230,
    0x00441906, 0x00000000, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x00101969, 0x63058770,
    0x02346105, 0x00000003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ce31, 0x65140000,
    0xfb006314, 0x00040000, 0xb4008e61, 0x00106506,
    0xb4012e61, 0x00126606, 0x00100024, 0x0001c060,
    0x00000040, 0x00000040, 0xb4001b61, 0x00105f1a,
    0x00101961, 0x66050230, 0x00441a06, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x66070106, 0x00100025, 0x00004600,
    0x00000000, 0x00000140, 0xb4000061, 0x00105f1b,
    0x00101961, 0x67050230, 0x00441b06, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x67001069, 0xec840961, 0x00104020,
    0x80000965, 0x20058220, 0x02002004, 0xffffffff,
    0x2c84194c, 0x0010206b, 0x80001969, 0x10018220,
    0x02006b04, 0x00000003, 0x80000961, 0x6c050330,
    0x00010300, 0x00000000, 0x80001c69, 0x10018220,
    0x02006b04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001a00, 0x80000961, 0x6e050330,
    0x00010080, 0x00000000, 0x80101a61, 0x7c050770,
    0x00006c04, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x7e050770,
    0x00006e04, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000cd31, 0x6a0c0000,
    0xfb007c0c, 0x00340000, 0x80008d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000cf31, 0x00000000,
    0xfb087e0c, 0x00346a0c, 0x00100052, 0x08044160,
    0x0e0e0003, 0x08051205, 0x00100027, 0x00014060,
    0x00000000, 0xfffff6f0, 0x2c10af61, 0x0010007e,
    0x80101931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_instances_base_ptr = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 3264,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_instances_base_ptr_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_instances_base_ptr_printfs,
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
      .push.cross_thread.dwords = 14,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 24,
   .arg_count = 3,
   .args = gfx20_misc_copy_instances_base_ptr_args,
   .code = gfx20_misc_copy_instances_base_ptr_code,
};
const char *gfx20_misc_copy_instances_base_ptr_sha1 = "ff93b948ddfc77c2ec4781d009bea962b11325da";

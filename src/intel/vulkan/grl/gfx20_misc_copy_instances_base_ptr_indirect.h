#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_instances_base_ptr_indirect_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_instances_base_ptr_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_instances_base_ptr_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g64<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g9<1>Q          0x0000000000000098Q             { align1 1H };
mov(16)         g5<1>UD         g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g64UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g8<1>UD         g5<1,1,0>UD                     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g11<1>Q         g9<1,1,0>Q      g1.4<0,1,0>Q    { align1 1H I@3 compacted };
mov(16)         g6<1>Q          g1.6<0,1,0>Q                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g13UD           g11UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g17UD           g6UD            nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(16)         g31<2>UD        g13<1,1,0>UD                    { align1 1H $1.dst compacted };
mov(16)         g33<2>UD        g17<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g35<2>UD        g18<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g14<1>UQ        g31<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g18<1>UQ        g33<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g22<1>UQ        g35<8,4,2>UD                    { align1 1H I@3 };
add(16)         g16<1>Q         g1.4<0,1,0>Q    g14<1,1,0>Q     { align1 1H I@3 compacted };
shl(16)         g20<1>Q         g18<4,4,1>Q     0x00000006UD    { align1 1H I@3 };
mov(16)         g37<2>UD        g20<4,4,1>UQ                    { align1 1H I@1 };
and(16)         g25<1>UD        g20<8,4,2>UD    0xffffff00UD    { align1 1H };
shr(16)         g24<1>UD        g37<8,4,2>UD    0x00000008UD    { align1 1H I@2 };
mov(16)         g39<2>UD        g25<1,1,0>UD                    { align1 1H I@2 compacted };
add3(16)        g32<1>D         65534W          -g24<8,8,1>D    g5<1,1,1>D { align1 1H I@2 };
mov(16)         g26<1>UQ        g39<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g33<1>D         -g32<1,1,0>D                    { align1 1H I@2 compacted };
add(16)         g28<1>Q         g20<1,1,0>Q     -g26<1,1,0>Q    { align1 1H I@2 compacted };
and(16)         g30<1>UD        g28<8,4,2>UD    0xffffffc0UD    { align1 1H I@1 };
shr(16)         g31<1>UD        g30<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    g31<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g34<1>D         -g32<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g36<1>Q         g1.5<0,1,0>Q    g22<1,1,0>Q     { align1 1H compacted };
add(16)         g35<1>D         g25<1,1,0>D     g34<1,1,0>D     { align1 1H I@2 compacted };
or.z.f0.0(16)   null<1>UD       g36<8,4,2>UD    g36.1<8,4,2>UD  { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
shr(16)         g37<1>UD        g35<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g40<2>UD        g37<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g38<1>UQ        g40<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g40<1>Q         g38<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g42UD           g40UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g2<2>UD         g42<1,1,0>UD                    { align1 1H $3.dst compacted };
mov(16)         g2.1<2>UD       g43<1,1,0>UD                    { align1 1H @1 $3.dst compacted };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g41<2>UD        g35<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g43<1>UQ        g41<8,4,2>UD                    { align1 1H I@1 };
add(16)         g45<1>Q         g22<1,1,0>Q     g43<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g2<1>Q          g1.5<0,1,0>Q    g45<1,1,0>Q     { align1 1H I@1 compacted };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g42<2>UD        g35<1,1,0>UD                    { align1 1H compacted };
mov(16)         g46<1>UQ        g42<8,4,2>UD                    { align1 1H I@1 };
add(16)         g48<1>Q         g16<1,1,0>Q     g46<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g59<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g59<1>UD        g59<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g50<1>UD        g59<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g50<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g51<1>UQ        g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g50<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g53<1>UQ        g[a0]<0,1,0>UQ                  { align1 WE_all 1N A@1 };
mov(16)         g9<1>Q          g51<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g11<1>Q         g53<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g49UD           g9UD            nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g11UD           g49UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $1 };

LABEL0:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shr(16)         g54<1>UD        g25<8,8,1>UD    0x00000008UD    { align1 1H };
add(16)         g55<1>Q         g1.5<0,1,0>Q    g22<1,1,0>Q     { align1 1H compacted };
or(16)          g57<1>UD        g55<8,4,2>UD    g55.1<8,4,2>UD  { align1 1H I@1 };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g8<8,8,1>UD     g54<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g58<1>D         g8<8,8,1>D      0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g57<8,8,1>D     0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
shr(16)         g59<1>UD        g58<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g43<2>UD        g59<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g60<1>UQ        g43<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g62<1>Q         g60<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g64UD           g62UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g3<2>UD         g64<1,1,0>UD                    { align1 1H $5.dst compacted };
mov(16)         g3.1<2>UD       g65<1,1,0>UD                    { align1 1H @1 $5.dst compacted };
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
mov(16)         g44<2>UD        g58<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g65<1>UQ        g44<8,4,2>UD                    { align1 1H I@1 };
add(16)         g67<1>Q         g22<1,1,0>Q     g65<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g3<1>Q          g1.5<0,1,0>Q    g67<1,1,0>Q     { align1 1H compacted };

LABEL5:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g45<2>UD        g58<1,1,0>UD                    { align1 1H compacted };
mov(16)         g68<1>UQ        g45<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g70<1>Q         g16<1,1,0>Q     g68<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g60<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g60<1>UD        g60<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g72<1>UD        g60<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g72<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g73<1>UQ        g[a0 192]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g72<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g75<1>UQ        g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g12<1>Q         g73<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g14<1>Q         g75<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g71UD           g12UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g14UD           g71UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g76<1>D         g58<8,8,1>D     64D             { align1 1H };
cmp.z.f0.0(16)  null<1>D        g57<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
shr(16)         g77<1>UD        g76<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g46<2>UD        g77<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g78<1>UQ        g46<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shl(16)         g80<1>Q         g78<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g82UD           g80UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov(16)         g4<2>UD         g82<1,1,0>UD                    { align1 1H $7.dst compacted };
mov(16)         g4.1<2>UD       g83<1,1,0>UD                    { align1 1H @1 $7.dst compacted };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g47<2>UD        g76<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g83<1>UQ        g47<8,4,2>UD                    { align1 1H I@1 };
add(16)         g85<1>Q         g22<1,1,0>Q     g83<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g4<1>Q          g1.5<0,1,0>Q    g85<1,1,0>Q     { align1 1H compacted };

LABEL7:
endif(16)       JIP:  LABEL4                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g48<2>UD        g76<1,1,0>UD                    { align1 1H compacted };
mov(16)         g86<1>UQ        g48<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g88<1>Q         g16<1,1,0>Q     g86<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g61<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g61<1>UD        g61<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g90<1>UD        g61<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g90<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g91<1>UQ        g[a0 256]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g90<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001600UD    { align1 WE_all 1N A@1 };
mov(1)          g93<1>UQ        g[a0]<0,1,0>UQ                  { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g18<1>Q         g91<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g20<1>Q         g93<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g89UD           g18UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g20UD           g89UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g94<1>D         g58<8,8,1>D     128D            { align1 1H };
cmp.z.f0.0(16)  null<1>D        g57<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
shr(16)         g95<1>UD        g94<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g49<2>UD        g95<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g96<1>UQ        g49<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shl(16)         g98<1>Q         g96<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g100UD          g98UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g5<2>UD         g100<1,1,0>UD                   { align1 1H $10.dst compacted };
mov(16)         g5.1<2>UD       g101<1,1,0>UD                   { align1 1H @1 $10.dst compacted };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g50<2>UD        g94<1,1,0>UD                    { align1 1H compacted };
mov(16)         g101<1>UQ       g50<8,4,2>UD                    { align1 1H I@1 };
add(16)         g103<1>Q        g22<1,1,0>Q     g101<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g5<1>Q          g1.5<0,1,0>Q    g103<1,1,0>Q    { align1 1H compacted };

LABEL9:
endif(16)       JIP:  LABEL4                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
mov(16)         g51<2>UD        g94<1,1,0>UD                    { align1 1H compacted };
mov(16)         g104<1>UQ       g51<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g106<1>Q        g16<1,1,0>Q     g104<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(1)          g62<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g62<1>UD        g62<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g108<1>UD       g62<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g108<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g109<1>UQ       g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g108<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001a00UD    { align1 WE_all 1N A@1 };
mov(1)          g111<1>UQ       g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g25<1>Q         g109<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g27<1>Q         g111<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g107UD          g25UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g27UD           g107UD          0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g112<1>D        g58<8,8,1>D     192D            { align1 1H };
cmp.z.f0.0(16)  null<1>D        g57<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
shr(16)         g113<1>UD       g112<8,8,1>UD   0x00000006UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g52<2>UD        g113<1,1,0>UD                   { align1 1H compacted };
mov(16)         g114<1>UQ       g52<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
shl(16)         g116<1>Q        g114<4,4,1>Q    0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g118UD          g116UD          nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g6<2>UD         g118<1,1,0>UD                   { align1 1H $14.dst compacted };
mov(16)         g6.1<2>UD       g119<1,1,0>UD                   { align1 1H @1 $14.dst compacted };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g55<2>UD        g112<1,1,0>UD                   { align1 1H I@3 compacted };
mov(16)         g119<1>UQ       g55<8,4,2>UD                    { align1 1H I@1 };
add(16)         g121<1>Q        g22<1,1,0>Q     g119<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g6<1>Q          g1.5<0,1,0>Q    g121<1,1,0>Q    { align1 1H compacted };

LABEL11:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g58<2>UD        g112<1,1,0>UD                   { align1 1H compacted };
mov(16)         g122<1>UQ       g58<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g124<1>Q        g16<1,1,0>Q     g122<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(1)          g63<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g63<1>UD        g63<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g126<1>UD       g63<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g126<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g2<1>UQ         g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g126<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001e00UD    { align1 WE_all 1N A@1 };
mov(1)          g4<1>UQ         g[a0 256]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g28<1>Q         g2<0,1,0>Q                      { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g30<1>Q         g4<0,1,0>Q                      { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g125UD          g28UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g30UD           g125UD          0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $15 };
add3(16)        g8<1>D          0x0003UW        g24<8,8,1>D     g8<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL13                                   { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_instances_base_ptr_indirect_code[] = {
    0x80000065, 0x40058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x09054770, 0x00000000, 0x00000098,
    0x2c800061, 0x00110005, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00400c, 0x00340000, 0x2c001961, 0x00100508,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001b40, 0x0170090b, 0x00100061, 0x06050770,
    0x000001c4, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x0d0c0000,
    0xfb000b14, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x11140000,
    0xfb000614, 0x00040000, 0xb4008161, 0x00100d1f,
    0xb4008261, 0x00101121, 0xb4008261, 0x00101223,
    0x00101b61, 0x0e050230, 0x00441f06, 0x00000000,
    0x00101b61, 0x12050230, 0x00442106, 0x00000000,
    0x00101b61, 0x16050230, 0x00442306, 0x00000000,
    0x38801b40, 0x0e030110, 0x00101b69, 0x14058770,
    0x02341205, 0x00000006, 0x00101961, 0x25060320,
    0x00341405, 0x00000000, 0x00100065, 0x19058220,
    0x02441406, 0xffffff00, 0x00101a68, 0x18058220,
    0x02442506, 0x00000008, 0xb4001a61, 0x00101927,
    0x00101a52, 0x20044560, 0x0e8efffe, 0x05051805,
    0x00101a61, 0x1a050230, 0x00442706, 0x00000000,
    0x7d801a61, 0x00102021, 0x38001a40, 0x1a20141c,
    0x00101965, 0x1e058220, 0x02441c06, 0xffffffc0,
    0x00101968, 0x1f058220, 0x02461e05, 0x00000006,
    0x00101970, 0x00010220, 0x52462105, 0x00461f05,
    0x04100022, 0x0001c060, 0x00000220, 0x00000220,
    0x00100069, 0x2205a660, 0x02462005, 0x00000006,
    0x38800040, 0x16070124, 0xac001a40, 0x22001923,
    0x00101a66, 0x00010220, 0x12442406, 0x00442416,
    0x04100022, 0x0001c060, 0x000000c0, 0x00000088,
    0x00101b68, 0x25058220, 0x02462305, 0x00000006,
    0xb4001961, 0x00102528, 0x00101961, 0x26050230,
    0x00442806, 0x00000000, 0x00101969, 0x28058770,
    0x02342605, 0x00000003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x2a140000,
    0xfb002814, 0x00040000, 0xb4008361, 0x00102a02,
    0xb4012361, 0x00122b02, 0x00100024, 0x0001c060,
    0x00000048, 0x00000048, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0xb4001b61, 0x00102329,
    0x00101961, 0x2b050230, 0x00442906, 0x00000000,
    0x38001940, 0x2b00162d, 0x38801940, 0x2d070102,
    0x00100025, 0x00004600, 0x00000000, 0x00000120,
    0xb4000061, 0x0010232a, 0x00101961, 0x2e050230,
    0x00442a06, 0x00000000, 0x38001940, 0x2e001030,
    0xec840961, 0x0010403b, 0x80000965, 0x3b058220,
    0x02003b04, 0xffffffff, 0x2c84194c, 0x00103b32,
    0x80001969, 0x10018220, 0x02003204, 0x00000003,
    0x80000961, 0x33050330, 0x00010100, 0x00000000,
    0x80001c69, 0x10018220, 0x02003204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000c00,
    0x80000961, 0x35050330, 0x00010000, 0x00000000,
    0x80101a61, 0x09050770, 0x00003304, 0x00000000,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x0b050770, 0x00003504, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c431, 0x310c0000, 0xfb00090c, 0x00340000,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c131, 0x00000000, 0xfb080b0c, 0x0034310c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100068, 0x36058220, 0x02461905, 0x00000008,
    0x38800040, 0x16070137, 0x00101966, 0x39050220,
    0x02443706, 0x00443716, 0x00101a70, 0x00010220,
    0x42460805, 0x00463605, 0x04100028, 0x0001c660,
    0x00000a00, 0x00000a00, 0x00100069, 0x3a058660,
    0x02460805, 0x00000008, 0x00101c70, 0x00018660,
    0x16463905, 0x00000000, 0x04100022, 0x0001c060,
    0x000000e0, 0x000000a8, 0x00101b68, 0x3b058220,
    0x02463a05, 0x00000006, 0xb4001961, 0x00103b2b,
    0x00101961, 0x3c050230, 0x00442b06, 0x00000000,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x00101969, 0x3e058770, 0x02343c05, 0x00000003,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x40140000, 0xfb003e14, 0x00040000,
    0xb4008561, 0x00104003, 0xb4012561, 0x00124103,
    0x00100024, 0x0001c060, 0x00000048, 0x00000048,
    0xb4001b61, 0x00103a2c, 0x00101961, 0x41050230,
    0x00442c06, 0x00000000, 0x38001940, 0x41001643,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x43070103, 0x00100025, 0x00004600,
    0x00000000, 0x000008f0, 0xb4000061, 0x00103a2d,
    0x00101961, 0x44050230, 0x00442d06, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x44001046, 0xec840961, 0x0010403c,
    0x80000965, 0x3c058220, 0x02003c04, 0xffffffff,
    0x2c84194c, 0x00103c48, 0x80001969, 0x10018220,
    0x02004804, 0x00000003, 0x80000961, 0x49050330,
    0x00010180, 0x00000000, 0x80001c69, 0x10018220,
    0x02004804, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001000, 0x80000961, 0x4b050330,
    0x00010300, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x0c050770,
    0x00004904, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x0e050770,
    0x00004b04, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c131, 0x470c0000,
    0xfb000c0c, 0x00340000, 0x80008101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c631, 0x00000000,
    0xfb080e0c, 0x0034470c, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x4c058660,
    0x06463a05, 0x00000040, 0x00100070, 0x00018660,
    0x16463905, 0x00000000, 0x04100022, 0x0001c060,
    0x000000d0, 0x00000098, 0x00101b68, 0x4d058220,
    0x02464c05, 0x00000006, 0xb4001961, 0x00104d2e,
    0x00101961, 0x4e050230, 0x00442e06, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x00101969, 0x50058770, 0x02344e05, 0x00000003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x52140000, 0xfb005014, 0x00040000,
    0xb4008761, 0x00105204, 0xb4012761, 0x00125304,
    0x00100024, 0x0001c060, 0x00000048, 0x00000048,
    0xb4001b61, 0x00104c2f, 0x00101961, 0x53050230,
    0x00442f06, 0x00000000, 0x38001940, 0x53001655,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x55070104, 0x00100025, 0x00004600,
    0x00000000, 0x000006b0, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0xb4000061, 0x00104c30,
    0x00101961, 0x56050230, 0x00443006, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x56001058, 0xec840961, 0x0010403d,
    0x80000965, 0x3d058220, 0x02003d04, 0xffffffff,
    0x2c84194c, 0x00103d5a, 0x80001969, 0x10018220,
    0x02005a04, 0x00000003, 0x80000961, 0x5b050330,
    0x00010200, 0x00000000, 0x80001c69, 0x10018220,
    0x02005a04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001600, 0x80000961, 0x5d050330,
    0x00010000, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x12050770,
    0x00005b04, 0x00000000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x14050770,
    0x00005d04, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c931, 0x590c0000,
    0xfb00120c, 0x00340000, 0x80008901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c831, 0x00000000,
    0xfb08140c, 0x0034590c, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x5e058660,
    0x06463a05, 0x00000080, 0x00100070, 0x00018660,
    0x16463905, 0x00000000, 0x04100022, 0x0001c060,
    0x00000110, 0x000000b8, 0x00101b68, 0x5f058220,
    0x02465e05, 0x00000006, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0xb4001961, 0x00105f31,
    0x00101961, 0x60050230, 0x00443106, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x00101969, 0x62058770, 0x02346005, 0x00000003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010ca31, 0x64140000, 0xfb006214, 0x00040000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0xb4008a61, 0x00106405, 0xb4012a61, 0x00126505,
    0x00100024, 0x0001c060, 0x00000068, 0x00000068,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00105e32, 0x00101961, 0x65050230,
    0x00443206, 0x00000000, 0x38001940, 0x65001667,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x67070105, 0x00100025, 0x00004600,
    0x00000000, 0x00000410, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xb4000061, 0x00105e33,
    0x00101961, 0x68050230, 0x00443306, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x6800106a, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0xec840961, 0x0010403e,
    0x80000965, 0x3e058220, 0x02003e04, 0xffffffff,
    0x2c84194c, 0x00103e6c, 0x80001969, 0x10018220,
    0x02006c04, 0x00000003, 0x80000961, 0x6d050330,
    0x00010280, 0x00000000, 0x80001c69, 0x10018220,
    0x02006c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001a00, 0x80000961, 0x6f050330,
    0x00010100, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x19050770,
    0x00006d04, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x1b050770,
    0x00006f04, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000cc31, 0x6b0c0000,
    0xfb00190c, 0x00340000, 0x80008c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000cb31, 0x00000000,
    0xfb081b0c, 0x00346b0c, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x70058660,
    0x06463a05, 0x000000c0, 0x00100070, 0x00018660,
    0x16463905, 0x00000000, 0x04100022, 0x0001c060,
    0x00000110, 0x000000c8, 0x00101b68, 0x71058220,
    0x02467005, 0x00000006, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xb4000061, 0x00107134,
    0x00101961, 0x72050230, 0x00443406, 0x00000000,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x00101969, 0x74058770, 0x02347205, 0x00000003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010ce31, 0x76140000, 0xfb007414, 0x00040000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0xb4008e61, 0x00107606, 0xb4012e61, 0x00127706,
    0x00100024, 0x0001c060, 0x00000058, 0x00000058,
    0xb4001b61, 0x00107037, 0x00101961, 0x77050230,
    0x00443706, 0x00000000, 0x38001940, 0x77001679,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x79070106, 0x00100025, 0x00004600,
    0x00000000, 0x00000150, 0xb4000061, 0x0010703a,
    0x00101961, 0x7a050230, 0x00443a06, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x7a00107c, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0xec840961, 0x0010403f,
    0x80000965, 0x3f058220, 0x02003f04, 0xffffffff,
    0x2c84194c, 0x00103f7e, 0x80001969, 0x10018220,
    0x02007e04, 0x00000003, 0x80000961, 0x02050330,
    0x00010300, 0x00000000, 0x80001c69, 0x10018220,
    0x02007e04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001e00, 0x80000961, 0x04050330,
    0x00010200, 0x00000000, 0x80101a61, 0x1c050770,
    0x00000204, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x1e050770,
    0x00000404, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000cd31, 0x7d0c0000,
    0xfb001c0c, 0x00340000, 0x80008d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000cf31, 0x00000000,
    0xfb081e0c, 0x00347d0c, 0x00100052, 0x08044160,
    0x0e0e0003, 0x08051805, 0x00100027, 0x00014060,
    0x00000000, 0xfffff5f0, 0x2c100061, 0x0010007e,
    0x80101931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_instances_base_ptr_indirect = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 3664,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_instances_base_ptr_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_instances_base_ptr_indirect_printfs,
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
   .args = gfx20_misc_copy_instances_base_ptr_indirect_args,
   .code = gfx20_misc_copy_instances_base_ptr_indirect_code,
};
const char *gfx20_misc_copy_instances_base_ptr_indirect_sha1 = "1f6eb32c02878851fb9114d9939ece8f62aeb667";

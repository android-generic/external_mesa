#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_instances_indirect_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_instances_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_instances_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g65<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g5<1>UD         g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g65UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g18<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g33<2>UD        g5<1,1,0>UD                     { align1 1H I@2 compacted };
add(8)          g18.8<1>UW      g18<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
mov(16)         g19<1>UQ        g33<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g17<1>UD        g18<8,8,1>UW                    { align1 1H };
shl(16)         g21<1>Q         g19<4,4,1>Q     0x00000004UD    { align1 1H I@2 };
mov(16)         g35<2>UD        g21<4,4,1>UQ                    { align1 1H I@1 };
add.z.f0.0(16)  null<1>D        g17<8,8,1>D     g35<8,4,2>D     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g6<1>Q          g1.6<0,1,0>Q                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g9UD            g6UD            nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g29<2>UD        g9<1,1,0>UD                     { align1 1H $1.dst compacted };
mov(16)         g31<2>UD        g10<1,1,0>UD                    { align1 1H $1.dst compacted };
mov(16)         g11<1>UQ        g29<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g15<1>UQ        g31<8,4,2>UD                    { align1 1H I@2 };
shl(16)         g13<1>Q         g11<4,4,1>Q     0x00000006UD    { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g22<1>Q         0x000000000000009cQ             { align1 1H };
add(16)         g24<1>Q         g22<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g24UD           g9UD            0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $2 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
mov(16)         g8<1>UD         g5<1,1,0>UD                     { align1 1H compacted };
and(16)         g26<1>UD        g13<8,4,2>UD    0xffffff00UD    { align1 1H I@4 };
mov(16)         g36<2>UD        g13<4,4,1>UQ                    { align1 1H };
mov(16)         g38<2>UD        g26<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shr(16)         g25<1>UD        g36<8,4,2>UD    0x00000008UD    { align1 1H I@2 };
mov(16)         g27<1>UQ        g38<8,4,2>UD                    { align1 1H I@2 };
add3(16)        g33<1>D         65534W          -g25<8,8,1>D    g5<1,1,1>D { align1 1H I@2 };
add(16)         g29<1>Q         g13<1,1,0>Q     -g27<1,1,0>Q    { align1 1H I@2 compacted };
mov(16)         g34<1>D         -g33<1,1,0>D                    { align1 1H I@2 compacted };
and(16)         g31<1>UD        g29<8,4,2>UD    0xffffffc0UD    { align1 1H I@2 };
shr(16)         g32<1>UD        g31<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    g32<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
shl(16)         g35<1>D         -g33<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g37<1>Q         g1.5<0,1,0>Q    g15<1,1,0>Q     { align1 1H compacted };
add(16)         g36<1>D         g26<1,1,0>D     g35<1,1,0>D     { align1 1H I@2 compacted };
or.z.f0.0(16)   null<1>UD       g37<8,4,2>UD    g37.1<8,4,2>UD  { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
shr(16)         g38<1>UD        g36<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g41<2>UD        g38<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g39<1>UQ        g41<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g41<1>Q         g39<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g43UD           g41UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g2<2>UD         g43<1,1,0>UD                    { align1 1H $3.dst compacted };
mov(16)         g2.1<2>UD       g44<1,1,0>UD                    { align1 1H @1 $3.dst compacted };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g42<2>UD        g36<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g44<1>UQ        g42<8,4,2>UD                    { align1 1H I@1 };
add(16)         g46<1>Q         g15<1,1,0>Q     g44<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g2<1>Q          g1.5<0,1,0>Q    g46<1,1,0>Q     { align1 1H I@1 compacted };

LABEL3:
endif(16)       JIP:  LABEL2                                    { align1 1H };
mov(16)         g43<2>UD        g36<1,1,0>UD                    { align1 1H compacted };
mov(16)         g47<1>UQ        g43<8,4,2>UD                    { align1 1H I@1 };
add(16)         g49<1>Q         g1.4<0,1,0>Q    g47<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g60<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g60<1>UD        g60<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g51<1>UD        g60<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g52<1>UQ        g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g54<1>UQ        g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g9<1>Q          g52<0,1,0>Q                     { align1 WE_all 1H I@2 };
mov(16)         g11<1>Q         g54<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g50UD           g9UD            nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g11UD           g50UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $4 };

LABEL2:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shr(16)         g55<1>UD        g26<8,8,1>UD    0x00000008UD    { align1 1H };
add(16)         g56<1>Q         g1.5<0,1,0>Q    g15<1,1,0>Q     { align1 1H compacted };
or(16)          g58<1>UD        g56<8,4,2>UD    g56.1<8,4,2>UD  { align1 1H I@1 };

LABEL15:
cmp.ge.f0.0(16) null<1>UD       g8<8,8,1>UD     g55<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g59<1>D         g8<8,8,1>D      0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g58<8,8,1>D     0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
shr(16)         g60<1>UD        g59<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g44<2>UD        g60<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g61<1>UQ        g44<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
shl(16)         g63<1>Q         g61<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g65UD           g63UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g3<2>UD         g65<1,1,0>UD                    { align1 1H $5.dst compacted };
mov(16)         g3.1<2>UD       g66<1,1,0>UD                    { align1 1H @1 $5.dst compacted };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g45<2>UD        g59<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g66<1>UQ        g45<8,4,2>UD                    { align1 1H I@1 };
add(16)         g68<1>Q         g15<1,1,0>Q     g66<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g3<1>Q          g1.5<0,1,0>Q    g68<1,1,0>Q     { align1 1H compacted };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
mov(16)         g46<2>UD        g59<1,1,0>UD                    { align1 1H compacted };
mov(16)         g69<1>UQ        g46<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g71<1>Q         g1.4<0,1,0>Q    g69<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g61<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g61<1>UD        g61<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g73<1>UD        g61<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g73<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g74<1>UQ        g[a0 192]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g73<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g76<1>UQ        g[a0 448]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g12<1>Q         g74<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g17<1>Q         g76<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g72UD           g12UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g17UD           g72UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g77<1>D         g59<8,8,1>D     64D             { align1 1H };
cmp.z.f0.0(16)  null<1>D        g58<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
shr(16)         g78<1>UD        g77<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g47<2>UD        g78<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g79<1>UQ        g47<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
shl(16)         g81<1>Q         g79<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g83UD           g81UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
mov(16)         g4<2>UD         g83<1,1,0>UD                    { align1 1H $9.dst compacted };
mov(16)         g4.1<2>UD       g84<1,1,0>UD                    { align1 1H @1 $9.dst compacted };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
mov(16)         g48<2>UD        g77<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g84<1>UQ        g48<8,4,2>UD                    { align1 1H I@1 };
add(16)         g86<1>Q         g15<1,1,0>Q     g84<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g4<1>Q          g1.5<0,1,0>Q    g86<1,1,0>Q     { align1 1H compacted };

LABEL9:
endif(16)       JIP:  LABEL6                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g49<2>UD        g77<1,1,0>UD                    { align1 1H compacted };
mov(16)         g87<1>UQ        g49<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g89<1>Q         g1.4<0,1,0>Q    g87<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g62<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g62<1>UD        g62<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g91<1>UD        g62<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g91<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g92<1>UQ        g[a0 256]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g91<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001600UD    { align1 WE_all 1N A@1 };
mov(1)          g94<1>UQ        g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
mov(16)         g18<1>Q         g92<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g20<1>Q         g94<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g90UD           g18UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g20UD           g90UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g95<1>D         g59<8,8,1>D     128D            { align1 1H };
cmp.z.f0.0(16)  null<1>D        g58<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
shr(16)         g96<1>UD        g95<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g50<2>UD        g96<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g97<1>UQ        g50<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(16)         g99<1>Q         g97<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g101UD          g99UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g5<2>UD         g101<1,1,0>UD                   { align1 1H $12.dst compacted };
mov(16)         g5.1<2>UD       g102<1,1,0>UD                   { align1 1H @1 $12.dst compacted };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(16)         g51<2>UD        g95<1,1,0>UD                    { align1 1H compacted };
mov(16)         g102<1>UQ       g51<8,4,2>UD                    { align1 1H I@1 };
add(16)         g104<1>Q        g15<1,1,0>Q     g102<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g5<1>Q          g1.5<0,1,0>Q    g104<1,1,0>Q    { align1 1H compacted };

LABEL11:
endif(16)       JIP:  LABEL6                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
mov(16)         g52<2>UD        g95<1,1,0>UD                    { align1 1H compacted };
mov(16)         g105<1>UQ       g52<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g107<1>Q        g1.4<0,1,0>Q    g105<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(1)          g63<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g63<1>UD        g63<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g109<1>UD       g63<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g109<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g110<1>UQ       g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g109<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001a00UD    { align1 WE_all 1N A@1 };
mov(1)          g112<1>UQ       g[a0 192]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g21<1>Q         g110<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g23<1>Q         g112<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g108UD          g21UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g23UD           g108UD          0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g113<1>D        g59<8,8,1>D     192D            { align1 1H };
cmp.z.f0.0(16)  null<1>D        g58<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL14         UIP:  LABEL13             { align1 1H };
shr(16)         g114<1>UD       g113<8,8,1>UD   0x00000006UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g53<2>UD        g114<1,1,0>UD                   { align1 1H compacted };
mov(16)         g115<1>UQ       g53<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
shl(16)         g117<1>Q        g115<4,4,1>Q    0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g119UD          g117UD          nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g6<2>UD         g119<1,1,0>UD                   { align1 1H $14.dst compacted };
mov(16)         g6.1<2>UD       g120<1,1,0>UD                   { align1 1H @1 $14.dst compacted };
else(16)        JIP:  LABEL13         UIP:  LABEL13             { align1 1H };

LABEL14:
mov(16)         g56<2>UD        g113<1,1,0>UD                   { align1 1H I@3 compacted };
mov(16)         g120<1>UQ       g56<8,4,2>UD                    { align1 1H I@1 };
add(16)         g122<1>Q        g15<1,1,0>Q     g120<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g6<1>Q          g1.5<0,1,0>Q    g122<1,1,0>Q    { align1 1H compacted };

LABEL13:
endif(16)       JIP:  LABEL6                                    { align1 1H };
mov(16)         g59<2>UD        g113<1,1,0>UD                   { align1 1H compacted };
mov(16)         g123<1>UQ       g59<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g125<1>Q        g1.4<0,1,0>Q    g123<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(1)          g64<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g64<1>UD        g64<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g127<1>UD       g64<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g127<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g2<1>UQ         g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g127<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001e00UD    { align1 WE_all 1N A@1 };
mov(1)          g4<1>UQ         g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g26<1>Q         g2<0,1,0>Q                      { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g28<1>Q         g4<0,1,0>Q                      { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g126UD          g26UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g28UD           g126UD          0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $15 };
add3(16)        g8<1>D          0x0003UW        g25<8,8,1>D     g8<1,1,1>D { align1 1H };

LABEL6:
while(16)       JIP:  LABEL15                                   { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H $15.src compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_instances_indirect_code[] = {
    0x80000065, 0x41058220, 0x02000004, 0xffffffc0,
    0x2c800061, 0x00110005, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00410c, 0x00340000, 0x800c0061, 0x12054410,
    0x00000000, 0x76543210, 0xb4001a61, 0x00100521,
    0x800c1a40, 0x12458110, 0x01461205, 0x00080008,
    0x00101a61, 0x13050230, 0x00442106, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x11050120, 0x00461205, 0x00000000,
    0x00101a69, 0x15058770, 0x02341305, 0x00000004,
    0x00101961, 0x23060320, 0x00341505, 0x00000000,
    0x00101940, 0x00010660, 0x16461105, 0x00442306,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x06050770, 0x000001c4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x09140000, 0xfb000614, 0x00040000,
    0xb4008161, 0x0010091d, 0xb4008161, 0x00100a1f,
    0x00101a61, 0x0b050230, 0x00441d06, 0x00000000,
    0x00101a61, 0x0f050230, 0x00441f06, 0x00000000,
    0x00101a69, 0x0d058770, 0x02340b05, 0x00000006,
    0x04100022, 0x0001c060, 0x00000048, 0x00000048,
    0x00100061, 0x16054770, 0x00000000, 0x0000009c,
    0x38001940, 0x01701618, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x00000000,
    0xfb081814, 0x0000090c, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x2c000061, 0x00100508,
    0x00101c65, 0x1a058220, 0x02440d06, 0xffffff00,
    0x00100061, 0x24060320, 0x00340d05, 0x00000000,
    0xb4001a61, 0x00101a26, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x00101a68, 0x19058220,
    0x02442406, 0x00000008, 0x00101a61, 0x1b050230,
    0x00442606, 0x00000000, 0x00101a52, 0x21044560,
    0x0e8efffe, 0x05051905, 0x38001a40, 0x1b200d1d,
    0x7d801a61, 0x00102122, 0x00101a65, 0x1f058220,
    0x02441d06, 0xffffffc0, 0x00101968, 0x20058220,
    0x02461f05, 0x00000006, 0x00101970, 0x00010220,
    0x52462205, 0x00462005, 0x04100022, 0x0001c060,
    0x00000220, 0x00000220, 0x00100069, 0x2305a660,
    0x02462105, 0x00000006, 0x38800040, 0x0f070125,
    0xac001a40, 0x23001a24, 0x00101a66, 0x00010220,
    0x12442506, 0x00442516, 0x04100022, 0x0001c060,
    0x000000c0, 0x00000088, 0x00101b68, 0x26058220,
    0x02462405, 0x00000006, 0xb4001961, 0x00102629,
    0x00101961, 0x27050230, 0x00442906, 0x00000000,
    0x00101969, 0x29058770, 0x02342705, 0x00000003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x2b140000, 0xfb002914, 0x00040000,
    0xb4008361, 0x00102b02, 0xb4012361, 0x00122c02,
    0x00100024, 0x0001c060, 0x00000048, 0x00000048,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0xb4001b61, 0x0010242a, 0x00101961, 0x2c050230,
    0x00442a06, 0x00000000, 0x38001940, 0x2c000f2e,
    0x38801940, 0x2e070102, 0x00100025, 0x00004600,
    0x00000000, 0x00000120, 0xb4000061, 0x0010242b,
    0x00101961, 0x2f050230, 0x00442b06, 0x00000000,
    0x38801940, 0x2f030131, 0xec840961, 0x0010403c,
    0x80000965, 0x3c058220, 0x02003c04, 0xffffffff,
    0x2c84194c, 0x00103c33, 0x80001969, 0x10018220,
    0x02003304, 0x00000003, 0x80000961, 0x34050330,
    0x00010100, 0x00000000, 0x80001c69, 0x10018220,
    0x02003304, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x36050330,
    0x00010080, 0x00000000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x09050770,
    0x00003404, 0x00000000, 0x80101a61, 0x0b050770,
    0x00003604, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c231, 0x320c0000,
    0xfb00090c, 0x00340000, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c431, 0x00000000,
    0xfb080b0c, 0x0034320c, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100068, 0x37058220,
    0x02461a05, 0x00000008, 0x38800040, 0x0f070138,
    0x00101966, 0x3a050220, 0x02443806, 0x00443816,
    0x00101a70, 0x00010220, 0x42460805, 0x00463705,
    0x04100028, 0x0001c660, 0x00000a10, 0x00000a10,
    0x00100069, 0x3b058660, 0x02460805, 0x00000008,
    0x00101c70, 0x00018660, 0x16463a05, 0x00000000,
    0x04100022, 0x0001c060, 0x000000e0, 0x000000a8,
    0x00101b68, 0x3c058220, 0x02463b05, 0x00000006,
    0xb4001961, 0x00103c2c, 0x00101961, 0x3d050230,
    0x00442c06, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x00101969, 0x3f058770,
    0x02343d05, 0x00000003, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x41140000,
    0xfb003f14, 0x00040000, 0xb4008561, 0x00104103,
    0xb4012561, 0x00124203, 0x00100024, 0x0001c060,
    0x00000048, 0x00000048, 0xb4001b61, 0x00103b2d,
    0x00101961, 0x42050230, 0x00442d06, 0x00000000,
    0x38001940, 0x42000f44, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x44070103,
    0x00100025, 0x00004600, 0x00000000, 0x00000900,
    0xb4000061, 0x00103b2e, 0x00101961, 0x45050230,
    0x00442e06, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x45030147,
    0xec840961, 0x0010403d, 0x80000965, 0x3d058220,
    0x02003d04, 0xffffffff, 0x2c84194c, 0x00103d49,
    0x80001969, 0x10018220, 0x02004904, 0x00000003,
    0x80000961, 0x4a050330, 0x00010180, 0x00000000,
    0x80001c69, 0x10018220, 0x02004904, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001000,
    0x80000961, 0x4c050330, 0x00010380, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x0c050770, 0x00004a04, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x11050770, 0x00004c04, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c731, 0x480c0000, 0xfb000c0c, 0x00340000,
    0x80008701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c631, 0x00000000, 0xfb08110c, 0x0034480c,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x4d058660, 0x06463b05, 0x00000040,
    0x00100070, 0x00018660, 0x16463a05, 0x00000000,
    0x04100022, 0x0001c060, 0x000000d0, 0x00000098,
    0x00101b68, 0x4e058220, 0x02464d05, 0x00000006,
    0xb4001961, 0x00104e2f, 0x00101961, 0x4f050230,
    0x00442f06, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x00101969, 0x51058770,
    0x02344f05, 0x00000003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x53140000,
    0xfb005114, 0x00040000, 0xb4008961, 0x00105304,
    0xb4012961, 0x00125404, 0x00100024, 0x0001c060,
    0x00000048, 0x00000048, 0xb4001b61, 0x00104d30,
    0x00101961, 0x54050230, 0x00443006, 0x00000000,
    0x38001940, 0x54000f56, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x56070104,
    0x00100025, 0x00004600, 0x00000000, 0x000006b0,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00104d31, 0x00101961, 0x57050230,
    0x00443106, 0x00000000, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x57030159,
    0xec840961, 0x0010403e, 0x80000965, 0x3e058220,
    0x02003e04, 0xffffffff, 0x2c84194c, 0x00103e5b,
    0x80001969, 0x10018220, 0x02005b04, 0x00000003,
    0x80000961, 0x5c050330, 0x00010200, 0x00000000,
    0x80001c69, 0x10018220, 0x02005b04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001600,
    0x80000961, 0x5e050330, 0x00010080, 0x00000000,
    0x80101a61, 0x12050770, 0x00005c04, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x14050770, 0x00005e04, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c831, 0x5a0c0000, 0xfb00120c, 0x00340000,
    0x80008801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000ca31, 0x00000000, 0xfb08140c, 0x00345a0c,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x5f058660, 0x06463b05, 0x00000080,
    0x00100070, 0x00018660, 0x16463a05, 0x00000000,
    0x04100022, 0x0001c060, 0x00000110, 0x000000b8,
    0x00101b68, 0x60058220, 0x02465f05, 0x00000006,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0xb4001961, 0x00106032, 0x00101961, 0x61050230,
    0x00443206, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x00101969, 0x63058770,
    0x02346105, 0x00000003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cc31, 0x65140000,
    0xfb006314, 0x00040000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0xb4008c61, 0x00106505,
    0xb4012c61, 0x00126605, 0x00100024, 0x0001c060,
    0x00000068, 0x00000068, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xb4000061, 0x00105f33,
    0x00101961, 0x66050230, 0x00443306, 0x00000000,
    0x38001940, 0x66000f68, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x68070105,
    0x00100025, 0x00004600, 0x00000000, 0x00000410,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00105f34, 0x00101961, 0x69050230,
    0x00443406, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x6903016b,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0xec840961, 0x0010403f, 0x80000965, 0x3f058220,
    0x02003f04, 0xffffffff, 0x2c84194c, 0x00103f6d,
    0x80001969, 0x10018220, 0x02006d04, 0x00000003,
    0x80000961, 0x6e050330, 0x00010280, 0x00000000,
    0x80001c69, 0x10018220, 0x02006d04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001a00,
    0x80000961, 0x70050330, 0x00010180, 0x00000000,
    0x80101a61, 0x15050770, 0x00006e04, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x17050770, 0x00007004, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000cb31, 0x6c0c0000, 0xfb00150c, 0x00340000,
    0x80008b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000cd31, 0x00000000, 0xfb08170c, 0x00346c0c,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x71058660, 0x06463b05, 0x000000c0,
    0x00100070, 0x00018660, 0x16463a05, 0x00000000,
    0x04100022, 0x0001c060, 0x00000110, 0x000000c8,
    0x00101b68, 0x72058220, 0x02467105, 0x00000006,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00107235, 0x00101961, 0x73050230,
    0x00443506, 0x00000000, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x00101969, 0x75058770,
    0x02347305, 0x00000003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ce31, 0x77140000,
    0xfb007514, 0x00040000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0xb4008e61, 0x00107706,
    0xb4012e61, 0x00127806, 0x00100024, 0x0001c060,
    0x00000058, 0x00000058, 0xb4001b61, 0x00107138,
    0x00101961, 0x78050230, 0x00443806, 0x00000000,
    0x38001940, 0x78000f7a, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x7a070106,
    0x00100025, 0x00004600, 0x00000000, 0x00000160,
    0xb4000061, 0x0010713b, 0x00101961, 0x7b050230,
    0x00443b06, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x7b03017d,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0xec840961, 0x00104040, 0x80000965, 0x40058220,
    0x02004004, 0xffffffff, 0x2c84194c, 0x0010407f,
    0x80001969, 0x10018220, 0x02007f04, 0x00000003,
    0x80000961, 0x02050330, 0x00010300, 0x00000000,
    0x80001c69, 0x10018220, 0x02007f04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001e00,
    0x80000961, 0x04050330, 0x00010280, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x1a050770, 0x00000204, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x1c050770, 0x00000404, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x7e0c0000, 0xfb001a0c, 0x00340000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000cf31, 0x00000000, 0xfb081c0c, 0x00347e0c,
    0x00100052, 0x08044160, 0x0e0e0003, 0x08051905,
    0x00100027, 0x00014060, 0x00000000, 0xfffff5e0,
    0x2c10af61, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_instances_indirect = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 3840,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_instances_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_instances_indirect_printfs,
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
   .args = gfx20_misc_copy_instances_indirect_args,
   .code = gfx20_misc_copy_instances_indirect_code,
};
const char *gfx20_misc_copy_instances_indirect_sha1 = "7d09972301fef8f1879f857a951242a443726d65";

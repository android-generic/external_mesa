#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_instances_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_instances_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_instances_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g22<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g102<1>UD       g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g22UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g8<1>UD         g102<1,1,0>UD                   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g118<2>UD       g1.6<0,1,0>UQ                   { align1 1H };
and(16)         g10<1>UD        g1.12<0,1,0>UD  0xffffff00UD    { align1 1H };
shr(16)         g9<1>UD         g118<8,4,2>UD   0x00000008UD    { align1 1H I@2 };
mov(16)         g120<2>UD       g10<1,1,0>UD                    { align1 1H I@2 compacted };
add3(16)        g17<1>D         65534W          -g9<8,8,1>D     g102<1,1,1>D { align1 1H I@2 };
mov(16)         g11<1>UQ        g120<8,4,2>UD                   { align1 1H I@2 };
mov(16)         g18<1>D         -g17<1,1,0>D                    { align1 1H I@2 compacted };
add(16)         g13<1>Q         g1.6<0,1,0>Q    -g11<1,1,0>Q    { align1 1H I@2 compacted };
and(16)         g15<1>UD        g13<8,4,2>UD    0xffffffc0UD    { align1 1H I@1 };
shr(16)         g16<1>UD        g15<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g18<8,8,1>UD    g16<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g19<1>D         -g17<8,8,1>D    0x00000006UD    { align1 1H };
or.z.f0.0(16)   null<1>UD       g1.10<0,1,0>UD  g1.11<0,1,0>UD  { align1 1H };
add(16)         g20<1>D         g10<1,1,0>D     g19<1,1,0>D     { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
shr(16)         g21<1>UD        g20<8,8,1>UD    0x00000006UD    { align1 1H I@2 };
mov(16)         g121<2>UD       g21<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g22<1>UQ        g121<8,4,2>UD                   { align1 1H I@1 };
shl(16)         g24<1>Q         g22<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g26UD           g24UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g2<2>UD         g26<1,1,0>UD                    { align1 1H $1.dst compacted };
mov(16)         g2.1<2>UD       g27<1,1,0>UD                    { align1 1H @1 $1.dst compacted };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
mov(16)         g122<2>UD       g20<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g27<1>UQ        g122<8,4,2>UD                   { align1 1H I@1 };
add(16)         g2<1>Q          g1.5<0,1,0>Q    g27<1,1,0>Q     { align1 1H I@1 compacted };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g123<2>UD       g20<1,1,0>UD                    { align1 1H compacted };
mov(16)         g28<1>UQ        g123<8,4,2>UD                   { align1 1H I@1 };
add(16)         g30<1>Q         g1.4<0,1,0>Q    g28<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g17<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g17<1>UD        g17<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g32<1>UD        g17<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g32<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g33<1>UQ        g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g32<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g35<1>UQ        g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g103<1>Q        g33<0,1,0>Q                     { align1 WE_all 1H I@2 };
mov(16)         g105<1>Q        g35<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g31UD           g103UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g105UD          g31UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $3 };

LABEL0:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shr(16)         g36<1>UD        g10<8,8,1>UD    0x00000008UD    { align1 1H };
or(16)          g37<1>UD        g1.10<0,1,0>UD  g1.11<0,1,0>UD  { align1 1H compacted };

LABEL13:
cmp.ge.f0.0(16) null<1>UD       g8<8,8,1>UD     g36<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g38<1>D         g8<8,8,1>D      0x00000008UD    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     0D              { align1 1H I@4 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
shr(16)         g39<1>UD        g38<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g124<2>UD       g39<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g40<1>UQ        g124<8,4,2>UD                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shl(16)         g42<1>Q         g40<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g44UD           g42UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g3<2>UD         g44<1,1,0>UD                    { align1 1H $4.dst compacted };
mov(16)         g3.1<2>UD       g45<1,1,0>UD                    { align1 1H @1 $4.dst compacted };
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
mov(16)         g125<2>UD       g38<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g45<1>UQ        g125<8,4,2>UD                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g3<1>Q          g1.5<0,1,0>Q    g45<1,1,0>Q     { align1 1H compacted };

LABEL5:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g126<2>UD       g38<1,1,0>UD                    { align1 1H compacted };
mov(16)         g46<1>UQ        g126<8,4,2>UD                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g48<1>Q         g1.4<0,1,0>Q    g46<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g18<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g18<1>UD        g18<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g50<1>UD        g18<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g50<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g51<1>UQ        g[a0 192]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g50<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g53<1>UQ        g[a0]<0,1,0>UQ                  { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g106<1>Q        g51<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g108<1>Q        g53<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g49UD           g106UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g108UD          g49UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g54<1>D         g38<8,8,1>D     64D             { align1 1H };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
shr(16)         g55<1>UD        g54<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g2<2>UD         g55<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g56<1>UQ        g2<8,4,2>UD                     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(16)         g58<1>Q         g56<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g60UD           g58UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mov(16)         g4<2>UD         g60<1,1,0>UD                    { align1 1H $8.dst compacted };
mov(16)         g4.1<2>UD       g61<1,1,0>UD                    { align1 1H @1 $8.dst compacted };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
mov(16)         g6<2>UD         g54<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g61<1>UQ        g6<8,4,2>UD                     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g4<1>Q          g1.5<0,1,0>Q    g61<1,1,0>Q     { align1 1H compacted };

LABEL7:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g10<2>UD        g54<1,1,0>UD                    { align1 1H compacted };
mov(16)         g62<1>UQ        g10<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g64<1>Q         g1.4<0,1,0>Q    g62<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g19<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g19<1>UD        g19<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g66<1>UD        g19<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g66<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g67<1>UQ        g[a0 256]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g66<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g69<1>UQ        g[a0]<0,1,0>UQ                  { align1 WE_all 1N A@1 };
mov(16)         g109<1>Q        g67<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g111<1>Q        g69<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g65UD           g109UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g111UD          g65UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g70<1>D         g38<8,8,1>D     128D            { align1 1H };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
shr(16)         g71<1>UD        g70<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g11<2>UD        g71<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g72<1>UQ        g11<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
shl(16)         g74<1>Q         g72<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g76UD           g74UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $11 };
mov(16)         g5<2>UD         g76<1,1,0>UD                    { align1 1H $11.dst compacted };
mov(16)         g5.1<2>UD       g77<1,1,0>UD                    { align1 1H @1 $11.dst compacted };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
mov(16)         g12<2>UD        g70<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g77<1>UQ        g12<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g5<1>Q          g1.5<0,1,0>Q    g77<1,1,0>Q     { align1 1H compacted };

LABEL9:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g13<2>UD        g70<1,1,0>UD                    { align1 1H compacted };
mov(16)         g78<1>UQ        g13<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g80<1>Q         g1.4<0,1,0>Q    g78<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g20<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g20<1>UD        g20<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g82<1>UD        g20<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g82<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g83<1>UQ        g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g82<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001400UD    { align1 WE_all 1N A@1 };
mov(1)          g85<1>UQ        g[a0]<0,1,0>UQ                  { align1 WE_all 1N A@1 };
mov(16)         g112<1>Q        g83<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g114<1>Q        g85<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g81UD           g112UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g114UD          g81UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g86<1>D         g38<8,8,1>D     192D            { align1 1H };
cmp.z.f0.0(16)  null<1>D        g37<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
shr(16)         g87<1>UD        g86<8,8,1>UD    0x00000006UD    { align1 1H I@3 };
mov(16)         g14<2>UD        g87<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g88<1>UQ        g14<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
shl(16)         g90<1>Q         g88<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g92UD           g90UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $14 };
mov(16)         g6<2>UD         g92<1,1,0>UD                    { align1 1H $14.dst compacted };
mov(16)         g6.1<2>UD       g93<1,1,0>UD                    { align1 1H @1 $14.dst compacted };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
mov(16)         g15<2>UD        g86<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g93<1>UQ        g15<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g6<1>Q          g1.5<0,1,0>Q    g93<1,1,0>Q     { align1 1H compacted };

LABEL11:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g16<2>UD        g86<1,1,0>UD                    { align1 1H compacted };
mov(16)         g94<1>UQ        g16<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g96<1>Q         g1.4<0,1,0>Q    g94<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g21<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g21<1>UD        g21<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g98<1>UD        g21<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g99<1>UQ        g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g98<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@4 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001800UD    { align1 WE_all 1N A@1 };
mov(1)          g101<1>UQ       g[a0]<0,1,0>UQ                  { align1 WE_all 1N A@1 };
mov(16)         g115<1>Q        g99<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
mov(16)         g117<1>Q        g101<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g97UD           g115UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g117UD          g97UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $15 };
add3(16)        g8<1>D          0x0003UW        g9<8,8,1>D      g8<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL13                                   { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_instances_code[] = {
    0x80000065, 0x16058220, 0x02000004, 0xffffffc0,
    0x2c800061, 0x00110066, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00160c, 0x00340000, 0x2c001961, 0x00106608,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x76060320, 0x000001c4, 0x00000000,
    0x00100065, 0x0a058220, 0x020001c4, 0xffffff00,
    0x00101a68, 0x09058220, 0x02447606, 0x00000008,
    0xb4001a61, 0x00100a78, 0x00101a52, 0x11044560,
    0x0e8efffe, 0x66050905, 0x00101a61, 0x0b050230,
    0x00447806, 0x00000000, 0x7d801a61, 0x00101112,
    0x38801a40, 0x0b28010d, 0x00101965, 0x0f058220,
    0x02440d06, 0xffffffc0, 0x00101968, 0x10058220,
    0x02460f05, 0x00000006, 0x00101970, 0x00010220,
    0x52461205, 0x00461005, 0x04100022, 0x0001c060,
    0x00000200, 0x00000200, 0x00100069, 0x1305a660,
    0x02461105, 0x00000006, 0x00100066, 0x00010220,
    0x120001a4, 0x000001b4, 0xac001a40, 0x13000a14,
    0x04100022, 0x0001c060, 0x000000b8, 0x00000098,
    0x00101a68, 0x15058220, 0x02461405, 0x00000006,
    0xb4001961, 0x00101579, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x00101961, 0x16050230,
    0x00447906, 0x00000000, 0x00101969, 0x18058770,
    0x02341605, 0x00000003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x1a140000,
    0xfb001814, 0x00040000, 0xb4008161, 0x00101a02,
    0xb4012161, 0x00121b02, 0x00100024, 0x0001c060,
    0x00000030, 0x00000030, 0xb4001a61, 0x0010147a,
    0x00101961, 0x1b050230, 0x00447a06, 0x00000000,
    0x38801940, 0x1b070102, 0x00100025, 0x00004600,
    0x00000000, 0x00000110, 0xb4000061, 0x0010147b,
    0x00101961, 0x1c050230, 0x00447b06, 0x00000000,
    0x38801940, 0x1c03011e, 0xec840961, 0x00104011,
    0x80000965, 0x11058220, 0x02001104, 0xffffffff,
    0x2c84194c, 0x00101120, 0x80001969, 0x10018220,
    0x02002004, 0x00000003, 0x80000961, 0x21050330,
    0x00010100, 0x00000000, 0x80001c69, 0x10018220,
    0x02002004, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000600, 0x80000961, 0x23050330,
    0x00010300, 0x00000000, 0x80101a61, 0x67050770,
    0x00002104, 0x00000000, 0x80101a61, 0x69050770,
    0x00002304, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c231, 0x1f0c0000,
    0xfb00670c, 0x00340000, 0x80008201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c331, 0x00000000,
    0xfb08690c, 0x00341f0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100068, 0x24058220,
    0x02460a05, 0x00000008, 0xe8800066, 0x01c70125,
    0x00101a70, 0x00010220, 0x42460805, 0x00462405,
    0x04100028, 0x0001c660, 0x000008f0, 0x000008f0,
    0x00100069, 0x26058660, 0x02460805, 0x00000008,
    0x00101c70, 0x00018660, 0x16462505, 0x00000000,
    0x04100022, 0x0001c060, 0x000000c8, 0x00000098,
    0x00101b68, 0x27058220, 0x02462605, 0x00000006,
    0xb4001961, 0x0010277c, 0x00101961, 0x28050230,
    0x00447c06, 0x00000000, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x00101969, 0x2a058770,
    0x02342805, 0x00000003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c431, 0x2c140000,
    0xfb002a14, 0x00040000, 0xb4008461, 0x00102c03,
    0xb4012461, 0x00122d03, 0x00100024, 0x0001c060,
    0x00000040, 0x00000040, 0xb4001b61, 0x0010267d,
    0x00101961, 0x2d050230, 0x00447d06, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x2d070103, 0x00100025, 0x00004600,
    0x00000000, 0x000007f8, 0xb4000061, 0x0010267e,
    0x00101961, 0x2e050230, 0x00447e06, 0x00000000,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x38801940, 0x2e030130, 0xec840961, 0x00104012,
    0x80000965, 0x12058220, 0x02001204, 0xffffffff,
    0x2c84194c, 0x00101232, 0x80001969, 0x10018220,
    0x02003204, 0x00000003, 0x80000961, 0x33050330,
    0x00010180, 0x00000000, 0x80001c69, 0x10018220,
    0x02003204, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x35050330,
    0x00010000, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x6a050770,
    0x00003304, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x6c050770,
    0x00003504, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c631, 0x310c0000,
    0xfb006a0c, 0x00340000, 0x80008601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c531, 0x00000000,
    0xfb086c0c, 0x0034310c, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x36058660,
    0x06462605, 0x00000040, 0x00100070, 0x00018660,
    0x16462505, 0x00000000, 0x04100022, 0x0001c060,
    0x000000c8, 0x00000098, 0x00101b68, 0x37058220,
    0x02463605, 0x00000006, 0xb4001961, 0x00103702,
    0x00101961, 0x38050230, 0x00440206, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x00101969, 0x3a058770, 0x02343805, 0x00000003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c831, 0x3c140000, 0xfb003a14, 0x00040000,
    0xb4008861, 0x00103c04, 0xb4012861, 0x00123d04,
    0x00100024, 0x0001c060, 0x00000040, 0x00000040,
    0xb4001b61, 0x00103606, 0x00101961, 0x3d050230,
    0x00440606, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x3d070104,
    0x00100025, 0x00004600, 0x00000000, 0x000005b0,
    0xb4000061, 0x0010360a, 0x00101961, 0x3e050230,
    0x00440a06, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x3e030140,
    0xec840961, 0x00104013, 0x80000965, 0x13058220,
    0x02001304, 0xffffffff, 0x2c84194c, 0x00101342,
    0x80001969, 0x10018220, 0x02004204, 0x00000003,
    0x80000961, 0x43050330, 0x00010200, 0x00000000,
    0x80001c69, 0x10018220, 0x02004204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001000,
    0x80000961, 0x45050330, 0x00010000, 0x00000000,
    0x80101a61, 0x6d050770, 0x00004304, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x6f050770, 0x00004504, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c731, 0x410c0000, 0xfb006d0c, 0x00340000,
    0x80008701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c931, 0x00000000, 0xfb086f0c, 0x0034410c,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x46058660, 0x06462605, 0x00000080,
    0x00100070, 0x00018660, 0x16462505, 0x00000000,
    0x04100022, 0x0001c060, 0x000000c8, 0x00000098,
    0x00101b68, 0x47058220, 0x02464605, 0x00000006,
    0xb4001961, 0x0010470b, 0x00101961, 0x48050230,
    0x00440b06, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x00101969, 0x4a058770,
    0x02344805, 0x00000003, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cb31, 0x4c140000,
    0xfb004a14, 0x00040000, 0xb4008b61, 0x00104c05,
    0xb4012b61, 0x00124d05, 0x00100024, 0x0001c060,
    0x00000040, 0x00000040, 0xb4001b61, 0x0010460c,
    0x00101961, 0x4d050230, 0x00440c06, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x4d070105, 0x00100025, 0x00004600,
    0x00000000, 0x00000378, 0xb4000061, 0x0010460d,
    0x00101961, 0x4e050230, 0x00440d06, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x38801940, 0x4e030150, 0xec840961, 0x00104014,
    0x80000965, 0x14058220, 0x02001404, 0xffffffff,
    0x2c84194c, 0x00101452, 0x80001969, 0x10018220,
    0x02005204, 0x00000003, 0x80000961, 0x53050330,
    0x00010280, 0x00000000, 0x80001c69, 0x10018220,
    0x02005204, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001400, 0x80000961, 0x55050330,
    0x00010000, 0x00000000, 0x80101a61, 0x70050770,
    0x00005304, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x72050770,
    0x00005504, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ca31, 0x510c0000,
    0xfb00700c, 0x00340000, 0x80008a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000cc31, 0x00000000,
    0xfb08720c, 0x0034510c, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x56058660,
    0x06462605, 0x000000c0, 0x00100070, 0x00018660,
    0x16462505, 0x00000000, 0x04100022, 0x0001c060,
    0x000000c8, 0x00000098, 0x00101b68, 0x57058220,
    0x02465605, 0x00000006, 0xb4001961, 0x0010570e,
    0x00101961, 0x58050230, 0x00440e06, 0x00000000,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x00101969, 0x5a058770, 0x02345805, 0x00000003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010ce31, 0x5c140000, 0xfb005a14, 0x00040000,
    0xb4008e61, 0x00105c06, 0xb4012e61, 0x00125d06,
    0x00100024, 0x0001c060, 0x00000040, 0x00000040,
    0xb4001b61, 0x0010560f, 0x00101961, 0x5d050230,
    0x00440f06, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x38800040, 0x5d070106,
    0x00100025, 0x00004600, 0x00000000, 0x00000140,
    0xb4000061, 0x00105610, 0x00101961, 0x5e050230,
    0x00441006, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x5e030160,
    0xec840961, 0x00104015, 0x80000965, 0x15058220,
    0x02001504, 0xffffffff, 0x2c84194c, 0x00101562,
    0x80001969, 0x10018220, 0x02006204, 0x00000003,
    0x80000961, 0x63050330, 0x00010300, 0x00000000,
    0x80001c69, 0x10018220, 0x02006204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001800,
    0x80000961, 0x65050330, 0x00010000, 0x00000000,
    0x80101a61, 0x73050770, 0x00006304, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x75050770, 0x00006504, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000cd31, 0x610c0000, 0xfb00730c, 0x00340000,
    0x80008d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000cf31, 0x00000000, 0xfb08750c, 0x0034610c,
    0x00100052, 0x08044160, 0x0e0e0003, 0x08050905,
    0x00100027, 0x00014060, 0x00000000, 0xfffff700,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_instances = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 3152,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_instances_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_instances_printfs,
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
   .args = gfx20_misc_copy_instances_args,
   .code = gfx20_misc_copy_instances_code,
};
const char *gfx20_misc_copy_instances_sha1 = "10908705c86d7acfb6c2355e9da1ab4731cf35f4";

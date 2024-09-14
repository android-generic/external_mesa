#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_instance_ptrs_indirect_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_instance_ptrs_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_instance_ptrs_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g73<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g23<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g73UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g12<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g44<2>UD        g23<1,1,0>UD                    { align1 1H I@2 compacted };
add(8)          g12.8<1>UW      g12<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
mov(16)         g13<1>UQ        g44<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g11<1>UD        g12<8,8,1>UW                    { align1 1H };
shl(16)         g15<1>Q         g13<4,4,1>Q     0x00000004UD    { align1 1H I@2 };
mov(16)         g46<2>UD        g15<4,4,1>UQ                    { align1 1H I@1 };
add.z.f0.0(16)  null<1>D        g11<8,8,1>D     g46<8,4,2>D     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g24<1>Q         g1.6<0,1,0>Q                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g3UD            g24UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g40<2>UD        g3<1,1,0>UD                     { align1 1H $1.dst compacted };
mov(16)         g42<2>UD        g4<1,1,0>UD                     { align1 1H $1.dst compacted };
mov(16)         g5<1>UQ         g40<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g9<1>UQ         g42<8,4,2>UD                    { align1 1H I@2 };
shl(16)         g7<1>Q          g5<4,4,1>Q      0x00000006UD    { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g16<1>Q         0x000000000000009cQ             { align1 1H };
add(16)         g18<1>Q         g16<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g18UD           g3UD            0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $2 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
mov(16)         g2<1>UD         g23<1,1,0>UD                    { align1 1H compacted };
and(16)         g20<1>UD        g7<8,4,2>UD     0xffffff00UD    { align1 1H I@4 };
mov(16)         g47<2>UD        g7<4,4,1>UQ                     { align1 1H };
mov(16)         g49<2>UD        g20<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shr(16)         g19<1>UD        g47<8,4,2>UD    0x00000008UD    { align1 1H I@2 };
mov(16)         g21<1>UQ        g49<8,4,2>UD                    { align1 1H I@2 };
add3(16)        g27<1>D         65534W          -g19<8,8,1>D    g23<1,1,1>D { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g23<1>Q         g7<1,1,0>Q      -g21<1,1,0>Q    { align1 1H I@2 compacted };
mov(16)         g28<1>D         -g27<1,1,0>D                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
and(16)         g25<1>UD        g23<8,4,2>UD    0xffffffc0UD    { align1 1H I@2 };
shr(16)         g26<1>UD        g25<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g28<8,8,1>UD    g26<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
shl(16)         g29<1>D         -g27<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g30<1>D         g20<1,1,0>D     g29<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g31<1>UD        g30<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g52<2>UD        g30<1,1,0>UD                    { align1 1H compacted };
mov(16)         g50<2>UD        g31<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g44<1>UQ        g52<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g32<1>UQ        g50<8,4,2>UD                    { align1 1H I@2 };
add(16)         g46<1>Q         g1.4<0,1,0>Q    g44<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g34<1>Q         g9<1,1,0>Q      g32<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g36<1>Q         g34<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
add(16)         g38<1>Q         g1.5<0,1,0>Q    g36<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g40UD           g38UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g42<2>UD        g40<1,1,0>UD                    { align1 1H $3.dst compacted };
mov(16)         g42.1<2>UD      g41<1,1,0>UD                    { align1 1H @1 $3.dst compacted };
mov(1)          g69<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g69<1>UD        g69<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g48<1>UD        g69<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g48<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g49<1>UQ        g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g48<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g51<1>UQ        g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g25<1>Q         g49<0,1,0>Q                     { align1 WE_all 1H I@2 };
mov(16)         g27<1>Q         g51<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g47UD           g25UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g27UD           g47UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $5 };

LABEL2:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shr(16)         g52<1>UD        g20<8,8,1>UD    0x00000008UD    { align1 1H };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g2<8,8,1>UD     g52<8,8,1>UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
shl(16)         g53<1>D         g2<8,8,1>D      0x00000008UD    { align1 1H };
shr(16)         g54<1>UD        g53<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g59<2>UD        g53<1,1,0>UD                    { align1 1H compacted };
mov(16)         g57<2>UD        g54<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g67<1>UQ        g59<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g55<1>UQ        g57<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g69<1>Q         g1.4<0,1,0>Q    g67<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g57<1>Q         g9<1,1,0>Q      g55<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g59<1>Q         g57<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
add(16)         g61<1>Q         g1.5<0,1,0>Q    g59<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g63UD           g61UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov(16)         g65<2>UD        g63<1,1,0>UD                    { align1 1H $7.dst compacted };
mov(16)         g65.1<2>UD      g64<1,1,0>UD                    { align1 1H @1 $7.dst compacted };
mov(1)          g72<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g72<1>UD        g72<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g71<1>UD        g72<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(1)          a0<1>UD         g71<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g72<1>UQ        g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g71<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g74<1>UQ        g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g28<1>Q         g72<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g30<1>Q         g74<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g70UD           g28UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g30UD           g70UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g75<1>D         g53<8,8,1>D     64D             { align1 1H };
shr(16)         g76<1>UD        g75<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g62<2>UD        g75<1,1,0>UD                    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g60<2>UD        g76<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g89<1>UQ        g62<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g77<1>UQ        g60<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g91<1>Q         g1.4<0,1,0>Q    g89<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g79<1>Q         g9<1,1,0>Q      g77<1,1,0>Q     { align1 1H I@2 compacted };
shl(1)          a0<1>UD         g71<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001600UD    { align1 WE_all 1N A@1 };
mov(1)          g94<1>UQ        g[a0 192]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(16)         g81<1>Q         g79<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g33<1>Q         g94<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g83<1>Q         g1.5<0,1,0>Q    g81<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g85UD           g83UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mov(16)         g87<2>UD        g85<1,1,0>UD                    { align1 1H $12.dst compacted };
mov(16)         g87.1<2>UD      g86<1,1,0>UD                    { align1 1H @1 $12.dst compacted };
shl(1)          a0<1>UD         g71<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001400UD    { align1 WE_all 1N A@1 };
mov(1)          g93<1>UQ        g[a0 448]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g31<1>Q         g93<0,1,0>Q                     { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g92UD           g31UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(1)         nullUD          g33UD           g92UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g95<1>D         g53<8,8,1>D     128D            { align1 1H };
shr(16)         g96<1>UD        g95<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g65<2>UD        g95<1,1,0>UD                    { align1 1H compacted };
mov(16)         g63<2>UD        g96<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g109<1>UQ       g65<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g97<1>UQ        g63<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g111<1>Q        g1.4<0,1,0>Q    g109<1,1,0>Q    { align1 1H I@2 compacted };
add(16)         g99<1>Q         g9<1,1,0>Q      g97<1,1,0>Q     { align1 1H I@2 compacted };
shl(1)          a0<1>UD         g71<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001a00UD    { align1 WE_all 1N A@1 };
mov(1)          g114<1>UQ       g[a0 448]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(16)         g101<1>Q        g99<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g36<1>Q         g114<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g103<1>Q        g1.5<0,1,0>Q    g101<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g105UD          g103UD          nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $15 };
mov(16)         g107<2>UD       g105<1,1,0>UD                   { align1 1H $15.dst compacted };
mov(16)         g107.1<2>UD     g106<1,1,0>UD                   { align1 1H @1 $15.dst compacted };
shl(1)          a0<1>UD         g71<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001a00UD    { align1 WE_all 1N A@1 };
mov(1)          g113<1>UQ       g[a0 192]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g34<1>Q         g113<0,1,0>Q                    { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g112UD          g34UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(1)         nullUD          g36UD           g112UD          0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g115<1>D        g53<8,8,1>D     192D            { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shr(16)         g116<1>UD       g115<8,8,1>UD   0x00000006UD    { align1 1H I@1 };
mov(16)         g68<2>UD        g115<1,1,0>UD                   { align1 1H compacted };
mov(16)         g66<2>UD        g116<1,1,0>UD                   { align1 1H I@2 compacted };
mov(16)         g5<1>UQ         g68<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g117<1>UQ       g66<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g7<1>Q          g1.4<0,1,0>Q    g5<1,1,0>Q      { align1 1H I@2 compacted };
add(16)         g119<1>Q        g9<1,1,0>Q      g117<1,1,0>Q    { align1 1H I@2 compacted };
shl(1)          a0<1>UD         g71<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
mov(1)          g12<1>UQ        g[a0 448]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(16)         g121<1>Q        g119<4,4,1>Q    0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g39<1>Q         g12<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g123<1>Q        g1.5<0,1,0>Q    g121<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g125UD          g123UD          nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g3<2>UD         g125<1,1,0>UD                   { align1 1H $0.dst compacted };
mov(16)         g3.1<2>UD       g126<1,1,0>UD                   { align1 1H @1 $0.dst compacted };
shl(1)          a0<1>UD         g71<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
mov(1)          g11<1>UQ        g[a0 192]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g37<1>Q         g11<0,1,0>Q                     { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g8UD            g37UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(1)         nullUD          g39UD           g8UD            0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $3 };
add3(16)        g2<1>D          0x0003UW        g19<8,8,1>D     g2<1,1,1>D { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_instance_ptrs_indirect_code[] = {
    0x80000065, 0x49058220, 0x02000004, 0xffffffc0,
    0x2c800061, 0x00110017, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00490c, 0x00340000, 0x800c0061, 0x0c054410,
    0x00000000, 0x76543210, 0xb4001a61, 0x0010172c,
    0x800c1a40, 0x0c458110, 0x01460c05, 0x00080008,
    0x00101a61, 0x0d050230, 0x00442c06, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x0b050120, 0x00460c05, 0x00000000,
    0x00101a69, 0x0f058770, 0x02340d05, 0x00000004,
    0x00101961, 0x2e060320, 0x00340f05, 0x00000000,
    0x00101940, 0x00010660, 0x16460b05, 0x00442e06,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x18050770, 0x000001c4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x03140000, 0xfb001814, 0x00040000,
    0xb4008161, 0x00100328, 0xb4008161, 0x0010042a,
    0x00101a61, 0x05050230, 0x00442806, 0x00000000,
    0x00101a61, 0x09050230, 0x00442a06, 0x00000000,
    0x00101a69, 0x07058770, 0x02340505, 0x00000006,
    0x04100022, 0x0001c060, 0x00000048, 0x00000048,
    0x00100061, 0x10054770, 0x00000000, 0x0000009c,
    0x38001940, 0x01701012, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x00000000,
    0xfb081214, 0x0000030c, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x2c000061, 0x00101702,
    0x00101c65, 0x14058220, 0x02440706, 0xffffff00,
    0x00100061, 0x2f060320, 0x00340705, 0x00000000,
    0xb4001a61, 0x00101431, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x00101a68, 0x13058220,
    0x02442f06, 0x00000008, 0x00101a61, 0x15050230,
    0x00443106, 0x00000000, 0x00101a52, 0x1b044560,
    0x0e8efffe, 0x17051305, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x15200717,
    0x7d801a61, 0x00101b1c, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x00101a65, 0x19058220,
    0x02441706, 0xffffffc0, 0x00101968, 0x1a058220,
    0x02461905, 0x00000006, 0x00101970, 0x00010220,
    0x52461c05, 0x00461a05, 0x04100022, 0x0001c060,
    0x000001b0, 0x000001b0, 0x00100069, 0x1d05a660,
    0x02461b05, 0x00000006, 0xac001940, 0x1d00141e,
    0x00101968, 0x1f058220, 0x02461e05, 0x00000006,
    0xb4000061, 0x00101e34, 0xb4001a61, 0x00101f32,
    0x00101a61, 0x2c050230, 0x00443406, 0x00000000,
    0x00101a61, 0x20050230, 0x00443206, 0x00000000,
    0x38801a40, 0x2c03012e, 0x38001a40, 0x20000922,
    0x00101969, 0x24058770, 0x02342205, 0x00000003,
    0x38801940, 0x24070126, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x28140000,
    0xfb002614, 0x00040000, 0xb4008361, 0x0010282a,
    0xb4012361, 0x0012292a, 0xec840961, 0x00104045,
    0x80000965, 0x45058220, 0x02004504, 0xffffffff,
    0x2c84194c, 0x00104530, 0x80001969, 0x10018220,
    0x02003004, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x31050330,
    0x00010100, 0x00000000, 0x80001f69, 0x10018220,
    0x02003004, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000a00, 0x80000961, 0x33050330,
    0x00010300, 0x00000000, 0x80101a61, 0x19050770,
    0x00003104, 0x00000000, 0x80101a61, 0x1b050770,
    0x00003304, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c431, 0x2f0c0000,
    0xfb00190c, 0x00340000, 0x80008401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c531, 0x00000000,
    0xfb081b0c, 0x00342f0c, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100068, 0x34058220,
    0x02461405, 0x00000008, 0x00101970, 0x00010220,
    0x42460205, 0x00463405, 0x04100028, 0x0001c660,
    0x00000770, 0x00000770, 0x00100069, 0x35058660,
    0x02460205, 0x00000008, 0x00101968, 0x36058220,
    0x02463505, 0x00000006, 0xb4000061, 0x0010353b,
    0xb4001a61, 0x00103639, 0x00101a61, 0x43050230,
    0x00443b06, 0x00000000, 0x00101a61, 0x37050230,
    0x00443906, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x38801a40, 0x43030145,
    0x38001a40, 0x37000939, 0x00101969, 0x3b058770,
    0x02343905, 0x00000003, 0x38801940, 0x3b07013d,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x3f140000, 0xfb003d14, 0x00040000,
    0xb4008761, 0x00103f41, 0xb4012761, 0x00124041,
    0xec840961, 0x00104048, 0x80000965, 0x48058220,
    0x02004804, 0xffffffff, 0x2c84194c, 0x00104847,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001969, 0x10018220, 0x02004704, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001000,
    0x80000961, 0x48050330, 0x00010080, 0x00000000,
    0x80001f69, 0x10018220, 0x02004704, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001000,
    0x80000961, 0x4a050330, 0x00010280, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x1c050770, 0x00004804, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x1e050770, 0x00004a04, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c831, 0x460c0000, 0xfb001c0c, 0x00340000,
    0x80008801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c631, 0x00000000, 0xfb081e0c, 0x0034460c,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x4b058660, 0x06463505, 0x00000040,
    0x00101968, 0x4c058220, 0x02464b05, 0x00000006,
    0xb400a761, 0x00104b3e, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0xb4001a61, 0x00104c3c,
    0x00101a61, 0x59050230, 0x00443e06, 0x00000000,
    0x00101a61, 0x4d050230, 0x00443c06, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x5903015b, 0x38001a40, 0x4d00094f,
    0x80001a69, 0x10018220, 0x02004704, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001600,
    0x80000961, 0x5e050330, 0x00010180, 0x00000000,
    0x00101a69, 0x51058770, 0x02344f05, 0x00000003,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x21050770, 0x00005e04, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x51070153, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cc31, 0x55140000,
    0xfb005314, 0x00040000, 0xb4008c61, 0x00105557,
    0xb4012c61, 0x00125657, 0x80001969, 0x10018220,
    0x02004704, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001400, 0x80000961, 0x5d050330,
    0x00010380, 0x00000000, 0x80101961, 0x1f050770,
    0x00005d04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c931, 0x5c0c0000,
    0xfb001f0c, 0x00340000, 0x80008901, 0x00000000,
    0x00000000, 0x00000000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ca31, 0x00000000,
    0xfb08210c, 0x00345c0c, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x5f058660,
    0x06463505, 0x00000080, 0x00101968, 0x60058220,
    0x02465f05, 0x00000006, 0xb4000061, 0x00105f41,
    0xb4001a61, 0x0010603f, 0x00101a61, 0x6d050230,
    0x00444106, 0x00000000, 0x00101a61, 0x61050230,
    0x00443f06, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x38801a40, 0x6d03016f,
    0x38001a40, 0x61000963, 0x80001a69, 0x10018220,
    0x02004704, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001a00, 0x80000961, 0x72050330,
    0x00010380, 0x00000000, 0x00101a69, 0x65058770,
    0x02346305, 0x00000003, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x24050770,
    0x00007204, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x38801a40, 0x65070167,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cf31, 0x69140000, 0xfb006714, 0x00040000,
    0xb4008f61, 0x0010696b, 0xb4012f61, 0x00126a6b,
    0x80001969, 0x10018220, 0x02004704, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001a00,
    0x80000961, 0x71050330, 0x00010180, 0x00000000,
    0x80101961, 0x22050770, 0x00007104, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000cb31, 0x700c0000, 0xfb00220c, 0x00340000,
    0x80008b01, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x8000cd31, 0x00000000, 0xfb08240c, 0x0034700c,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x73058660, 0x06463505, 0x000000c0,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x00101968, 0x74058220, 0x02467305, 0x00000006,
    0xb4000061, 0x00107344, 0xb4001a61, 0x00107442,
    0x00101a61, 0x05050230, 0x00444406, 0x00000000,
    0x00101a61, 0x75050230, 0x00444206, 0x00000000,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x05030107, 0x38001a40, 0x75000977,
    0x80001a69, 0x10018220, 0x02004704, 0x00000003,
    0x80000961, 0x0c050330, 0x00010380, 0x00000000,
    0x00101a69, 0x79058770, 0x02347705, 0x00000003,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x27050770, 0x00000c04, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x7907017b, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c031, 0x7d140000,
    0xfb007b14, 0x00040000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0xb4008061, 0x00107d03,
    0xb4012061, 0x00127e03, 0x80001969, 0x10018220,
    0x02004704, 0x00000003, 0x80000961, 0x0b050330,
    0x00010180, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x80101961, 0x25050770,
    0x00000b04, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000ce31, 0x080c0000,
    0xfb00250c, 0x00340000, 0x80008e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c331, 0x00000000,
    0xfb08270c, 0x0034080c, 0x00100052, 0x02044160,
    0x0e0e0003, 0x02051305, 0x00100027, 0x00014060,
    0x00000000, 0xfffff880, 0x2c100061, 0x0010007e,
    0x80101931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_instance_ptrs_indirect = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 3056,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_instance_ptrs_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_instance_ptrs_indirect_printfs,
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
   .args = gfx20_misc_copy_instance_ptrs_indirect_args,
   .code = gfx20_misc_copy_instance_ptrs_indirect_code,
};
const char *gfx20_misc_copy_instance_ptrs_indirect_sha1 = "034b7cd54f5fe35fd8b9cf0de6812c884f36b174";

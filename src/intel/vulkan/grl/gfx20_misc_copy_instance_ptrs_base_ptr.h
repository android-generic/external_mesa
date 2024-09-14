#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_instance_ptrs_base_ptr_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_instance_ptrs_base_ptr_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_instance_ptrs_base_ptr_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g62<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g3<1>Q          0x0000000000000098Q             { align1 1H };
mov(16)         g118<1>UD       g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g62UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g2<1>UD         g118<1,1,0>UD                   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g5<1>Q          g3<1,1,0>Q      g1.4<0,1,0>Q    { align1 1H I@3 compacted };
mov(16)         g18<2>UD        g1.6<0,1,0>UQ                   { align1 1H };
and(16)         g13<1>UD        g1.12<0,1,0>UD  0xffffff00UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g7UD            g5UD            nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
shr(16)         g12<1>UD        g18<8,4,2>UD    0x00000008UD    { align1 1H I@2 };
mov(16)         g21<2>UD        g13<1,1,0>UD                    { align1 1H I@2 compacted };
add3(16)        g20<1>D         65534W          -g12<8,8,1>D    g118<1,1,1>D { align1 1H I@2 };
mov(16)         g14<1>UQ        g21<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g21<1>D         -g20<1,1,0>D                    { align1 1H I@2 compacted };
mov(16)         g16<2>UD        g7<1,1,0>UD                     { align1 1H $1.dst compacted };
mov(16)         g8<1>UQ         g16<8,4,2>UD                    { align1 1H I@1 };
add(16)         g16<1>Q         g1.6<0,1,0>Q    -g14<1,1,0>Q    { align1 1H I@4 compacted };
add(16)         g10<1>Q         g1.4<0,1,0>Q    g8<1,1,0>Q      { align1 1H I@2 compacted };
and(16)         g18<1>UD        g16<8,4,2>UD    0xffffffc0UD    { align1 1H I@2 };
shr(16)         g19<1>UD        g18<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g21<8,8,1>UD    g19<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g22<1>D         -g20<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g23<1>D         g13<1,1,0>D     g22<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g24<1>UD        g23<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g29<2>UD        g23<1,1,0>UD                    { align1 1H compacted };
mov(16)         g27<2>UD        g24<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g35<1>UQ        g29<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g25<1>UQ        g27<8,4,2>UD                    { align1 1H I@2 };
add(16)         g37<1>Q         g10<1,1,0>Q     g35<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g27<1>Q         g25<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
add(16)         g29<1>Q         g1.5<0,1,0>Q    g27<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g31UD           g29UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(16)         g33<2>UD        g31<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g33.1<2>UD      g32<1,1,0>UD                    { align1 1H @1 $2.dst compacted };
mov(1)          g42<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g42<1>UD        g42<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g39<1>UD        g42<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g39<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g40<1>UQ        g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g39<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000800UD    { align1 WE_all 1N A@1 };
mov(1)          g42<1>UQ        g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g119<1>Q        g40<0,1,0>Q                     { align1 WE_all 1H I@2 };
mov(16)         g121<1>Q        g42<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g38UD           g119UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g121UD          g38UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $4 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shr(16)         g43<1>UD        g13<8,8,1>UD    0x00000008UD    { align1 1H };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g2<8,8,1>UD     g43<8,8,1>UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
shl(16)         g44<1>D         g2<8,8,1>D      0x00000008UD    { align1 1H };
shr(16)         g45<1>UD        g44<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g32<2>UD        g44<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g30<2>UD        g45<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g56<1>UQ        g32<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g46<1>UQ        g30<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g58<1>Q         g10<1,1,0>Q     g56<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g48<1>Q         g46<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g50<1>Q         g1.5<0,1,0>Q    g48<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g52UD           g50UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(16)         g54<2>UD        g52<1,1,0>UD                    { align1 1H $6.dst compacted };
mov(16)         g54.1<2>UD      g53<1,1,0>UD                    { align1 1H @1 $6.dst compacted };
mov(1)          g61<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g61<1>UD        g61<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g60<1>UD        g61<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(1)          a0<1>UD         g60<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g61<1>UQ        g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g60<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000e00UD    { align1 WE_all 1N A@1 };
mov(1)          g63<1>UQ        g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g122<1>Q        g61<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g124<1>Q        g63<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g59UD           g122UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g124UD          g59UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g64<1>D         g44<8,8,1>D     64D             { align1 1H };
shr(16)         g65<1>UD        g64<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g35<2>UD        g64<1,1,0>UD                    { align1 1H compacted };
mov(16)         g33<2>UD        g65<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g76<1>UQ        g35<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g66<1>UQ        g33<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g78<1>Q         g10<1,1,0>Q     g76<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g68<1>Q         g66<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
shl(1)          a0<1>UD         g60<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001200UD    { align1 WE_all 1N A@1 };
mov(1)          g81<1>UQ        g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g70<1>Q         g1.5<0,1,0>Q    g68<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g3<1>Q          g81<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g72UD           g70UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
mov(16)         g74<2>UD        g72<1,1,0>UD                    { align1 1H $10.dst compacted };
mov(16)         g74.1<2>UD      g73<1,1,0>UD                    { align1 1H @1 $10.dst compacted };
shl(1)          a0<1>UD         g60<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001200UD    { align1 WE_all 1N A@1 };
mov(1)          g80<1>UQ        g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g125<1>Q        g80<0,1,0>Q                     { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g79UD           g125UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         nullUD          g3UD            g79UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g82<1>D         g44<8,8,1>D     128D            { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
shr(16)         g83<1>UD        g82<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(16)         g38<2>UD        g82<1,1,0>UD                    { align1 1H compacted };
mov(16)         g36<2>UD        g83<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g94<1>UQ        g38<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g84<1>UQ        g36<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g96<1>Q         g10<1,1,0>Q     g94<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g86<1>Q         g84<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
shl(1)          a0<1>UD         g60<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001800UD    { align1 WE_all 1N A@1 };
mov(1)          g99<1>UQ        g[a0]<0,1,0>UQ                  { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g88<1>Q         g1.5<0,1,0>Q    g86<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g6<1>Q          g99<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g90UD           g88UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mov(16)         g92<2>UD        g90<1,1,0>UD                    { align1 1H $12.dst compacted };
mov(16)         g92.1<2>UD      g91<1,1,0>UD                    { align1 1H @1 $12.dst compacted };
shl(1)          a0<1>UD         g60<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001600UD    { align1 WE_all 1N A@1 };
mov(1)          g98<1>UQ        g[a0 256]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g4<1>Q          g98<0,1,0>Q                     { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g97UD           g4UD            nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         nullUD          g6UD            g97UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g100<1>D        g44<8,8,1>D     192D            { align1 1H };
shr(16)         g101<1>UD       g100<8,8,1>UD   0x00000006UD    { align1 1H I@1 };
mov(16)         g41<2>UD        g100<1,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g39<2>UD        g101<1,1,0>UD                   { align1 1H compacted };
mov(16)         g112<1>UQ       g41<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g102<1>UQ       g39<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g114<1>Q        g10<1,1,0>Q     g112<1,1,0>Q    { align1 1H I@2 compacted };
shl(16)         g104<1>Q        g102<4,4,1>Q    0x00000003UD    { align1 1H I@2 };
shl(1)          a0<1>UD         g60<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001c00UD    { align1 WE_all 1N A@1 };
mov(1)          g117<1>UQ       g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g106<1>Q        g1.5<0,1,0>Q    g104<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g13<1>Q         g117<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g108UD          g106UD          nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $15 };
mov(16)         g110<2>UD       g108<1,1,0>UD                   { align1 1H $15.dst compacted };
mov(16)         g110.1<2>UD     g109<1,1,0>UD                   { align1 1H @1 $15.dst compacted };
shl(1)          a0<1>UD         g60<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001a00UD    { align1 WE_all 1N A@1 };
mov(1)          g116<1>UQ       g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g7<1>Q          g116<0,1,0>Q                    { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g115UD          g7UD            nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         nullUD          g13UD           g115UD          0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $14 };
add3(16)        g2<1>D          0x0003UW        g12<8,8,1>D     g2<1,1,1>D { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_instance_ptrs_base_ptr_code[] = {
    0x80000065, 0x3e058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x03054770, 0x00000000, 0x00000098,
    0x2c800061, 0x00110076, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa003e0c, 0x00340000, 0x2c001961, 0x00107602,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001b40, 0x01700305, 0x00100061, 0x12060320,
    0x000001c4, 0x00000000, 0x00100065, 0x0d058220,
    0x020001c4, 0xffffff00, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x070c0000,
    0xfb000514, 0x00000000, 0x00101a68, 0x0c058220,
    0x02441206, 0x00000008, 0xb4001a61, 0x00100d15,
    0x00101a52, 0x14044560, 0x0e8efffe, 0x76050c05,
    0x00101a61, 0x0e050230, 0x00441506, 0x00000000,
    0x7d801a61, 0x00101415, 0xb4008161, 0x00100710,
    0x00101961, 0x08050230, 0x00441006, 0x00000000,
    0x38801c40, 0x0e280110, 0x38801a40, 0x0803010a,
    0x00101a65, 0x12058220, 0x02441006, 0xffffffc0,
    0x00101968, 0x13058220, 0x02461205, 0x00000006,
    0x00101970, 0x00010220, 0x52461505, 0x00461305,
    0x04100022, 0x0001c060, 0x000001a8, 0x000001a8,
    0x00100069, 0x1605a660, 0x02461405, 0x00000006,
    0xac001940, 0x16000d17, 0x00101968, 0x18058220,
    0x02461705, 0x00000006, 0xb4000061, 0x0010171d,
    0xb4001a61, 0x0010181b, 0x00101a61, 0x23050230,
    0x00441d06, 0x00000000, 0x00101a61, 0x19050230,
    0x00441b06, 0x00000000, 0x38001a40, 0x23000a25,
    0x00101a69, 0x1b058770, 0x02341905, 0x00000003,
    0x38801940, 0x1b07011d, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x1f140000,
    0xfb001d14, 0x00040000, 0xb4008261, 0x00101f21,
    0xb4012261, 0x00122021, 0xec840961, 0x0010402a,
    0x80000965, 0x2a058220, 0x02002a04, 0xffffffff,
    0x2c84194c, 0x00102a27, 0x80001969, 0x10018220,
    0x02002704, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x28050330,
    0x00010080, 0x00000000, 0x80001f69, 0x10018220,
    0x02002704, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000800, 0x80000961, 0x2a050330,
    0x00010280, 0x00000000, 0x80101a61, 0x77050770,
    0x00002804, 0x00000000, 0x80101a61, 0x79050770,
    0x00002a04, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c331, 0x260c0000,
    0xfb00770c, 0x00340000, 0x80008301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c431, 0x00000000,
    0xfb08790c, 0x0034260c, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00100068, 0x2b058220,
    0x02460d05, 0x00000008, 0x00101970, 0x00010220,
    0x42460205, 0x00462b05, 0x04100028, 0x0001c660,
    0x00000790, 0x00000790, 0x00100069, 0x2c058660,
    0x02460205, 0x00000008, 0x00101968, 0x2d058220,
    0x02462c05, 0x00000006, 0xb4000061, 0x00102c20,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0xb4001a61, 0x00102d1e, 0x00101a61, 0x38050230,
    0x00442006, 0x00000000, 0x00101a61, 0x2e050230,
    0x00441e06, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x38000a3a,
    0x00101a69, 0x30058770, 0x02342e05, 0x00000003,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x38801940, 0x30070132, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x34140000,
    0xfb003214, 0x00040000, 0xb4008661, 0x00103436,
    0xb4012661, 0x00123536, 0xec840961, 0x0010403d,
    0x80000965, 0x3d058220, 0x02003d04, 0xffffffff,
    0x2c84194c, 0x00103d3c, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02003c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000c00, 0x80000961, 0x3d050330,
    0x00010300, 0x00000000, 0x80001f69, 0x10018220,
    0x02003c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00000e00, 0x80000961, 0x3f050330,
    0x00010100, 0x00000000, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x7a050770,
    0x00003d04, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x7c050770,
    0x00003f04, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c731, 0x3b0c0000,
    0xfb007a0c, 0x00340000, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c531, 0x00000000,
    0xfb087c0c, 0x00343b0c, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x40058660,
    0x06462c05, 0x00000040, 0x00101968, 0x41058220,
    0x02464005, 0x00000006, 0xb4000061, 0x00104023,
    0xb4001a61, 0x00104121, 0x00101a61, 0x4c050230,
    0x00442306, 0x00000000, 0x00101a61, 0x42050230,
    0x00442106, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x4c000a4e,
    0x00101a69, 0x44058770, 0x02344205, 0x00000003,
    0x80001a69, 0x10018220, 0x02003c04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001200,
    0x80000961, 0x51050330, 0x00010300, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x44070146, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x03050770,
    0x00005104, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010ca31, 0x48140000,
    0xfb004614, 0x00040000, 0xb4008a61, 0x0010484a,
    0xb4012a61, 0x0012494a, 0x80001969, 0x10018220,
    0x02003c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001200, 0x80000961, 0x50050330,
    0x00010100, 0x00000000, 0x80101961, 0x7d050770,
    0x00005004, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c831, 0x4f0c0000,
    0xfb007d0c, 0x00340000, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c931, 0x00000000,
    0xfb08030c, 0x00344f0c, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x52058660,
    0x06462c05, 0x00000080, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x00101968, 0x53058220,
    0x02465205, 0x00000006, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0xb4000061, 0x00105226,
    0xb4001a61, 0x00105324, 0x00101a61, 0x5e050230,
    0x00442606, 0x00000000, 0x00101a61, 0x54050230,
    0x00442406, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x5e000a60,
    0x00101a69, 0x56058770, 0x02345405, 0x00000003,
    0x80001a69, 0x10018220, 0x02003c04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001800,
    0x80000961, 0x63050330, 0x00010000, 0x00000000,
    0x8000ac01, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x56070158, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x06050770,
    0x00006304, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010cc31, 0x5a140000,
    0xfb005814, 0x00040000, 0xb4008c61, 0x00105a5c,
    0xb4012c61, 0x00125b5c, 0x80001969, 0x10018220,
    0x02003c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001600, 0x80000961, 0x62050330,
    0x00010200, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x80101961, 0x04050770,
    0x00006204, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000cb31, 0x610c0000,
    0xfb00040c, 0x00340000, 0x80008b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c131, 0x00000000,
    0xfb08060c, 0x0034610c, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x64058660,
    0x06462c05, 0x000000c0, 0x00101968, 0x65058220,
    0x02466405, 0x00000006, 0xb4000061, 0x00106429,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00106527, 0x00101a61, 0x70050230,
    0x00442906, 0x00000000, 0x00101a61, 0x66050230,
    0x00442706, 0x00000000, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x70000a72,
    0x00101a69, 0x68058770, 0x02346605, 0x00000003,
    0x80001a69, 0x10018220, 0x02003c04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001c00,
    0x80000961, 0x75050330, 0x00010100, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x6807016a, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x0d050770,
    0x00007504, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010cf31, 0x6c140000,
    0xfb006a14, 0x00040000, 0xb4008f61, 0x00106c6e,
    0xb4012f61, 0x00126d6e, 0x80001969, 0x10018220,
    0x02003c04, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001a00, 0x80000961, 0x74050330,
    0x00010300, 0x00000000, 0x80101961, 0x07050770,
    0x00007404, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000cd31, 0x730c0000,
    0xfb00070c, 0x00340000, 0x80008d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ce31, 0x00000000,
    0xfb080d0c, 0x0034730c, 0x00100052, 0x02044160,
    0x0e0e0003, 0x02050c05, 0x00100027, 0x00014060,
    0x00000000, 0xfffff860, 0x2c100061, 0x0010007e,
    0x80101931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_instance_ptrs_base_ptr = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2784,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_instance_ptrs_base_ptr_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_instance_ptrs_base_ptr_printfs,
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
   .args = gfx20_misc_copy_instance_ptrs_base_ptr_args,
   .code = gfx20_misc_copy_instance_ptrs_base_ptr_code,
};
const char *gfx20_misc_copy_instance_ptrs_base_ptr_sha1 = "559ee2f667d591f19d73b112660314f226461f8f";

#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_instance_ptrs_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_instance_ptrs_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_instance_ptrs_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g33<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g109<1>UD       g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g33UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g2<1>UD         g109<1,1,0>UD                   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g125<2>UD       g1.6<0,1,0>UQ                   { align1 1H };
and(16)         g4<1>UD         g1.12<0,1,0>UD  0xffffff00UD    { align1 1H };
shr(16)         g3<1>UD         g125<8,4,2>UD   0x00000008UD    { align1 1H I@2 };
mov(16)         g7<2>UD         g4<1,1,0>UD                     { align1 1H I@2 compacted };
add3(16)        g11<1>D         65534W          -g3<8,8,1>D     g109<1,1,1>D { align1 1H I@2 };
mov(16)         g5<1>UQ         g7<8,4,2>UD                     { align1 1H I@2 };
mov(16)         g12<1>D         -g11<1,1,0>D                    { align1 1H I@2 compacted };
add(16)         g7<1>Q          g1.6<0,1,0>Q    -g5<1,1,0>Q     { align1 1H I@2 compacted };
and(16)         g9<1>UD         g7<8,4,2>UD     0xffffffc0UD    { align1 1H I@1 };
shr(16)         g10<1>UD        g9<8,8,1>UD     0x00000006UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g12<8,8,1>UD    g10<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g13<1>D         -g11<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g14<1>D         g4<1,1,0>D      g13<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g15<1>UD        g14<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g10<2>UD        g14<1,1,0>UD                    { align1 1H compacted };
mov(16)         g8<2>UD         g15<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g26<1>UQ        g10<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g16<1>UQ        g8<8,4,2>UD                     { align1 1H I@2 };
add(16)         g28<1>Q         g1.4<0,1,0>Q    g26<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g18<1>Q         g16<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
add(16)         g20<1>Q         g1.5<0,1,0>Q    g18<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g22UD           g20UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g24<2>UD        g22<1,1,0>UD                    { align1 1H $1.dst compacted };
mov(16)         g24.1<2>UD      g23<1,1,0>UD                    { align1 1H @1 $1.dst compacted };
mov(1)          g31<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g31<1>UD        g31<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g30<1>UD        g31<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g30<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g31<1>UQ        g[a0]<0,1,0>UQ                  { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(1)          a0<1>UD         g30<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000600UD    { align1 WE_all 1N A@1 };
mov(1)          g33<1>UQ        g[a0 256]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g110<1>Q        g31<0,1,0>Q                     { align1 WE_all 1H I@2 };
mov(16)         g112<1>Q        g33<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g29UD           g110UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g112UD          g29UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $3 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shr(16)         g34<1>UD        g4<8,8,1>UD     0x00000008UD    { align1 1H };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g2<8,8,1>UD     g34<8,8,1>UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
shl(16)         g35<1>D         g2<8,8,1>D      0x00000008UD    { align1 1H };
shr(16)         g36<1>UD        g35<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g13<2>UD        g35<1,1,0>UD                    { align1 1H compacted };
mov(16)         g11<2>UD        g36<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g47<1>UQ        g13<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g37<1>UQ        g11<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g49<1>Q         g1.4<0,1,0>Q    g47<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g39<1>Q         g37<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g41<1>Q         g1.5<0,1,0>Q    g39<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g43UD           g41UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g45<2>UD        g43<1,1,0>UD                    { align1 1H $5.dst compacted };
mov(16)         g45.1<2>UD      g44<1,1,0>UD                    { align1 1H @1 $5.dst compacted };
mov(1)          g32<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g32<1>UD        g32<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g51<1>UD        g32<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g52<1>UQ        g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000c00UD    { align1 WE_all 1N A@1 };
mov(1)          g54<1>UQ        g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g113<1>Q        g52<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g115<1>Q        g54<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g50UD           g113UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g115UD          g50UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g55<1>D         g35<8,8,1>D     64D             { align1 1H };
shr(16)         g56<1>UD        g55<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g16<2>UD        g55<1,1,0>UD                    { align1 1H compacted };
mov(16)         g14<2>UD        g56<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g67<1>UQ        g16<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g57<1>UQ        g14<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g69<1>Q         g1.4<0,1,0>Q    g67<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g59<1>Q         g57<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g72<1>UQ        g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g61<1>Q         g1.5<0,1,0>Q    g59<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g118<1>Q        g72<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g63UD           g61UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
mov(16)         g65<2>UD        g63<1,1,0>UD                    { align1 1H $9.dst compacted };
mov(16)         g65.1<2>UD      g64<1,1,0>UD                    { align1 1H @1 $9.dst compacted };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g71<1>UQ        g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
mov(16)         g116<1>Q        g71<0,1,0>Q                     { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g70UD           g116UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         nullUD          g118UD          g70UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g73<1>D         g35<8,8,1>D     128D            { align1 1H };
shr(16)         g74<1>UD        g73<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g19<2>UD        g73<1,1,0>UD                    { align1 1H $1.src compacted };
mov(16)         g17<2>UD        g74<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g85<1>UQ        g19<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g75<1>UQ        g17<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g87<1>Q         g1.4<0,1,0>Q    g85<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g77<1>Q         g75<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001400UD    { align1 WE_all 1N A@1 };
mov(1)          g90<1>UQ        g[a0 448]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g79<1>Q         g1.5<0,1,0>Q    g77<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g121<1>Q        g90<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g81UD           g79UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mov(16)         g83<2>UD        g81<1,1,0>UD                    { align1 1H $12.dst compacted };
mov(16)         g83.1<2>UD      g82<1,1,0>UD                    { align1 1H @1 $12.dst compacted };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001400UD    { align1 WE_all 1N A@1 };
mov(1)          g89<1>UQ        g[a0 192]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g119<1>Q        g89<0,1,0>Q                     { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g88UD           g119UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         nullUD          g121UD          g88UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g91<1>D         g35<8,8,1>D     192D            { align1 1H };
shr(16)         g92<1>UD        g91<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g22<2>UD        g91<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g20<2>UD        g92<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g103<1>UQ       g22<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g93<1>UQ        g20<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g105<1>Q        g1.4<0,1,0>Q    g103<1,1,0>Q    { align1 1H I@2 compacted };
shl(16)         g95<1>Q         g93<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001a00UD    { align1 WE_all 1N A@1 };
mov(1)          g108<1>UQ       g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g97<1>Q         g1.5<0,1,0>Q    g95<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g124<1>Q        g108<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g99UD           g97UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $15 };
mov(16)         g101<2>UD       g99<1,1,0>UD                    { align1 1H $15.dst compacted };
mov(16)         g101.1<2>UD     g100<1,1,0>UD                   { align1 1H @1 $15.dst compacted };
shl(1)          a0<1>UD         g51<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001800UD    { align1 WE_all 1N A@1 };
mov(1)          g107<1>UQ       g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g122<1>Q        g107<0,1,0>Q                    { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g106UD          g122UD          nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         nullUD          g124UD          g106UD          0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $14 };
add3(16)        g2<1>D          0x0003UW        g3<8,8,1>D      g2<1,1,1>D { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_instance_ptrs_code[] = {
    0x80000065, 0x21058220, 0x02000004, 0xffffffc0,
    0x2c800061, 0x0011006d, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00210c, 0x00340000, 0x2c001961, 0x00106d02,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x7d060320, 0x000001c4, 0x00000000,
    0x00100065, 0x04058220, 0x020001c4, 0xffffff00,
    0x00101a68, 0x03058220, 0x02447d06, 0x00000008,
    0xb4001a61, 0x00100407, 0x00101a52, 0x0b044560,
    0x0e8efffe, 0x6d050305, 0x00101a61, 0x05050230,
    0x00440706, 0x00000000, 0x7d801a61, 0x00100b0c,
    0x38801a40, 0x05280107, 0x00101965, 0x09058220,
    0x02440706, 0xffffffc0, 0x00101968, 0x0a058220,
    0x02460905, 0x00000006, 0x00101970, 0x00010220,
    0x52460c05, 0x00460a05, 0x04100022, 0x0001c060,
    0x000001b8, 0x000001b8, 0x00100069, 0x0d05a660,
    0x02460b05, 0x00000006, 0xac001940, 0x0d00040e,
    0x00101968, 0x0f058220, 0x02460e05, 0x00000006,
    0xb4000061, 0x00100e0a, 0xb4001a61, 0x00100f08,
    0x00101a61, 0x1a050230, 0x00440a06, 0x00000000,
    0x00101a61, 0x10050230, 0x00440806, 0x00000000,
    0x38801a40, 0x1a03011c, 0x00101a69, 0x12058770,
    0x02341005, 0x00000003, 0x38801940, 0x12070114,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x16140000, 0xfb001414, 0x00040000,
    0xb4008161, 0x00101618, 0xb4012161, 0x00121718,
    0xec840961, 0x0010401f, 0x80000965, 0x1f058220,
    0x02001f04, 0xffffffff, 0x2c84194c, 0x00101f1e,
    0x80001969, 0x10018220, 0x02001e04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x1f050330, 0x00010000, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x80001f69, 0x10018220, 0x02001e04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000600,
    0x80000961, 0x21050330, 0x00010200, 0x00000000,
    0x80101a61, 0x6e050770, 0x00001f04, 0x00000000,
    0x80101a61, 0x70050770, 0x00002104, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c231, 0x1d0c0000, 0xfb006e0c, 0x00340000,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c331, 0x00000000, 0xfb08700c, 0x00341d0c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100068, 0x22058220, 0x02460405, 0x00000008,
    0x00101970, 0x00010220, 0x42460205, 0x00462205,
    0x04100028, 0x0001c660, 0x00000740, 0x00000740,
    0x00100069, 0x23058660, 0x02460205, 0x00000008,
    0x00101968, 0x24058220, 0x02462305, 0x00000006,
    0xb4000061, 0x0010230d, 0xb4001a61, 0x0010240b,
    0x00101a61, 0x2f050230, 0x00440d06, 0x00000000,
    0x00101a61, 0x25050230, 0x00440b06, 0x00000000,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x2f030131, 0x00101a69, 0x27058770,
    0x02342505, 0x00000003, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x27070129,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x2b140000, 0xfb002914, 0x00040000,
    0xb4008561, 0x00102b2d, 0xb4012561, 0x00122c2d,
    0xec840961, 0x00104020, 0x80000965, 0x20058220,
    0x02002004, 0xffffffff, 0x2c84194c, 0x00102033,
    0x80001969, 0x10018220, 0x02003304, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x34050330, 0x00010280, 0x00000000,
    0x80001f69, 0x10018220, 0x02003304, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000c00,
    0x80000961, 0x36050330, 0x00010080, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x71050770, 0x00003404, 0x00000000,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x73050770, 0x00003604, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c631, 0x320c0000, 0xfb00710c, 0x00340000,
    0x80008601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c431, 0x00000000, 0xfb08730c, 0x0034320c,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x37058660, 0x06462305, 0x00000040,
    0x00101968, 0x38058220, 0x02463705, 0x00000006,
    0xb4000061, 0x00103710, 0xb4001a61, 0x0010380e,
    0x00101a61, 0x43050230, 0x00441006, 0x00000000,
    0x00101a61, 0x39050230, 0x00440e06, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x43030145, 0x00101a69, 0x3b058770,
    0x02343905, 0x00000003, 0x80001a69, 0x10018220,
    0x02003304, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001000, 0x80000961, 0x48050330,
    0x00010280, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x38801a40, 0x3b07013d,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x76050770, 0x00004804, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c931, 0x3f140000, 0xfb003d14, 0x00040000,
    0xb4008961, 0x00103f41, 0xb4012961, 0x00124041,
    0x80001969, 0x10018220, 0x02003304, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001000,
    0x80000961, 0x47050330, 0x00010080, 0x00000000,
    0x80101961, 0x74050770, 0x00004704, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c731, 0x460c0000, 0xfb00740c, 0x00340000,
    0x80008701, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c831, 0x00000000, 0xfb08760c, 0x0034460c,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x49058660, 0x06462305, 0x00000080,
    0x00101968, 0x4a058220, 0x02464905, 0x00000006,
    0xb400a161, 0x00104913, 0xb4001a61, 0x00104a11,
    0x00101a61, 0x55050230, 0x00441306, 0x00000000,
    0x00101a61, 0x4b050230, 0x00441106, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x55030157, 0x00101a69, 0x4d058770,
    0x02344b05, 0x00000003, 0x80001a69, 0x10018220,
    0x02003304, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001400, 0x80000961, 0x5a050330,
    0x00010380, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x38801a40, 0x4d07014f,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x79050770, 0x00005a04, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010cc31, 0x51140000, 0xfb004f14, 0x00040000,
    0xb4008c61, 0x00105153, 0xb4012c61, 0x00125253,
    0x80001969, 0x10018220, 0x02003304, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001400,
    0x80000961, 0x59050330, 0x00010180, 0x00000000,
    0x80101961, 0x77050770, 0x00005904, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000ca31, 0x580c0000, 0xfb00770c, 0x00340000,
    0x80008a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x8000cb31, 0x00000000, 0xfb08790c, 0x0034580c,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x5b058660, 0x06462305, 0x000000c0,
    0x00101968, 0x5c058220, 0x02465b05, 0x00000006,
    0xb4000061, 0x00105b16, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0xb4001a61, 0x00105c14,
    0x00101a61, 0x67050230, 0x00441606, 0x00000000,
    0x00101a61, 0x5d050230, 0x00441406, 0x00000000,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x67030169, 0x00101a69, 0x5f058770,
    0x02345d05, 0x00000003, 0x80001a69, 0x10018220,
    0x02003304, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001a00, 0x80000961, 0x6c050330,
    0x00010080, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x38801a40, 0x5f070161,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x7c050770, 0x00006c04, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010cf31, 0x63140000, 0xfb006114, 0x00040000,
    0xb4008f61, 0x00106365, 0xb4012f61, 0x00126465,
    0x80001969, 0x10018220, 0x02003304, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001800,
    0x80000961, 0x6b050330, 0x00010280, 0x00000000,
    0x80101961, 0x7a050770, 0x00006b04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000cd31, 0x6a0c0000, 0xfb007a0c, 0x00340000,
    0x80008d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x8000ce31, 0x00000000, 0xfb087c0c, 0x00346a0c,
    0x00100052, 0x02044160, 0x0e0e0003, 0x02050305,
    0x00100027, 0x00014060, 0x00000000, 0xfffff8b0,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_instance_ptrs = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2640,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_instance_ptrs_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_instance_ptrs_printfs,
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
   .args = gfx20_misc_copy_instance_ptrs_args,
   .code = gfx20_misc_copy_instance_ptrs_code,
};
const char *gfx20_misc_copy_instance_ptrs_sha1 = "6e4062dad9dd591036100516cf0faf9b688bc224";

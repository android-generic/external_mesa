#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_instance_ptrs_base_ptr_indirect_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_instance_ptrs_base_ptr_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_instance_ptrs_base_ptr_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g72<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g3<1>Q          0x0000000000000098Q             { align1 1H };
mov(16)         g20<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g72UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g2<1>UD         g20<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g5<1>Q          g3<1,1,0>Q      g1.4<0,1,0>Q    { align1 1H I@3 compacted };
mov(16)         g21<1>Q         g1.6<0,1,0>Q                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g7UD            g5UD            nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g11UD           g21UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(16)         g37<2>UD        g7<1,1,0>UD                     { align1 1H $1.dst compacted };
mov(16)         g39<2>UD        g11<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g41<2>UD        g12<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g8<1>UQ         g37<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g12<1>UQ        g39<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g16<1>UQ        g41<8,4,2>UD                    { align1 1H I@3 };
add(16)         g10<1>Q         g1.4<0,1,0>Q    g8<1,1,0>Q      { align1 1H I@3 compacted };
shl(16)         g14<1>Q         g12<4,4,1>Q     0x00000006UD    { align1 1H I@3 };
mov(16)         g43<2>UD        g14<4,4,1>UQ                    { align1 1H I@1 };
and(16)         g19<1>UD        g14<8,4,2>UD    0xffffff00UD    { align1 1H };
shr(16)         g18<1>UD        g43<8,4,2>UD    0x00000008UD    { align1 1H I@2 };
mov(16)         g45<2>UD        g19<1,1,0>UD                    { align1 1H I@2 compacted };
add3(16)        g26<1>D         65534W          -g18<8,8,1>D    g20<1,1,1>D { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g20<1>UQ        g45<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g27<1>D         -g26<1,1,0>D                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g22<1>Q         g14<1,1,0>Q     -g20<1,1,0>Q    { align1 1H I@2 compacted };
and(16)         g24<1>UD        g22<8,4,2>UD    0xffffffc0UD    { align1 1H I@1 };
shr(16)         g25<1>UD        g24<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
cmp.l.f0.0(16)  null<1>UD       g27<8,8,1>UD    g25<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shl(16)         g28<1>D         -g26<8,8,1>D    0x00000006UD    { align1 1H };
add(16)         g29<1>D         g19<1,1,0>D     g28<1,1,0>D     { align1 1H I@1 compacted };
shr(16)         g30<1>UD        g29<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g50<2>UD        g29<1,1,0>UD                    { align1 1H compacted };
mov(16)         g48<2>UD        g30<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g43<1>UQ        g50<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g31<1>UQ        g48<8,4,2>UD                    { align1 1H I@2 };
add(16)         g45<1>Q         g10<1,1,0>Q     g43<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g33<1>Q         g16<1,1,0>Q     g31<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g35<1>Q         g33<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
add(16)         g37<1>Q         g1.5<0,1,0>Q    g35<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g39UD           g37UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g41<2>UD        g39<1,1,0>UD                    { align1 1H $3.dst compacted };
mov(16)         g41.1<2>UD      g40<1,1,0>UD                    { align1 1H @1 $3.dst compacted };
mov(1)          g68<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g68<1>UD        g68<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g47<1>UD        g68<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g47<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g48<1>UQ        g[a0 64]<0,1,0>UQ               { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g47<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00000a00UD    { align1 WE_all 1N A@1 };
mov(1)          g50<1>UQ        g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g22<1>Q         g48<0,1,0>Q                     { align1 WE_all 1H I@2 };
mov(16)         g24<1>Q         g50<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g46UD           g22UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g24UD           g46UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $5 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
shr(16)         g51<1>UD        g19<8,8,1>UD    0x00000008UD    { align1 1H };

LABEL3:
cmp.ge.f0.0(16) null<1>UD       g2<8,8,1>UD     g51<8,8,1>UD    { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL2        UIP:  LABEL2              { align1 1H };
shl(16)         g52<1>D         g2<8,8,1>D      0x00000008UD    { align1 1H };
shr(16)         g53<1>UD        g52<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g58<2>UD        g52<1,1,0>UD                    { align1 1H compacted };
mov(16)         g56<2>UD        g53<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g66<1>UQ        g58<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g54<1>UQ        g56<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g68<1>Q         g10<1,1,0>Q     g66<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g56<1>Q         g16<1,1,0>Q     g54<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g58<1>Q         g56<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
add(16)         g60<1>Q         g1.5<0,1,0>Q    g58<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g62UD           g60UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov(16)         g64<2>UD        g62<1,1,0>UD                    { align1 1H $7.dst compacted };
mov(16)         g64.1<2>UD      g63<1,1,0>UD                    { align1 1H @1 $7.dst compacted };
mov(1)          g71<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g71<1>UD        g71<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g70<1>UD        g71<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(1)          a0<1>UD         g70<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g71<1>UQ        g[a0]<0,1,0>UQ                  { align1 WE_all 1N A@1 };
shl(1)          a0<1>UD         g70<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@7 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g73<1>UQ        g[a0 256]<0,1,0>UQ              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g25<1>Q         g71<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g27<1>Q         g73<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g69UD           g25UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g27UD           g69UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g74<1>D         g52<8,8,1>D     64D             { align1 1H };
shr(16)         g75<1>UD        g74<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g61<2>UD        g74<1,1,0>UD                    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g59<2>UD        g75<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g88<1>UQ        g61<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g76<1>UQ        g59<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g90<1>Q         g10<1,1,0>Q     g88<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g78<1>Q         g16<1,1,0>Q     g76<1,1,0>Q     { align1 1H I@2 compacted };
shl(1)          a0<1>UD         g70<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001600UD    { align1 WE_all 1N A@1 };
mov(1)          g93<1>UQ        g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(16)         g80<1>Q         g78<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g30<1>Q         g93<0,1,0>Q                     { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g82<1>Q         g1.5<0,1,0>Q    g80<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g84UD           g82UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $12 };
mov(16)         g86<2>UD        g84<1,1,0>UD                    { align1 1H $12.dst compacted };
mov(16)         g86.1<2>UD      g85<1,1,0>UD                    { align1 1H @1 $12.dst compacted };
shl(1)          a0<1>UD         g70<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001400UD    { align1 WE_all 1N A@1 };
mov(1)          g92<1>UQ        g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g28<1>Q         g92<0,1,0>Q                     { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g91UD           g28UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(1)         nullUD          g30UD           g91UD           0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g94<1>D         g52<8,8,1>D     128D            { align1 1H };
shr(16)         g95<1>UD        g94<8,8,1>UD    0x00000006UD    { align1 1H I@1 };
mov(16)         g64<2>UD        g94<1,1,0>UD                    { align1 1H compacted };
mov(16)         g62<2>UD        g95<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g108<1>UQ       g64<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g96<1>UQ        g62<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g110<1>Q        g10<1,1,0>Q     g108<1,1,0>Q    { align1 1H I@2 compacted };
add(16)         g98<1>Q         g16<1,1,0>Q     g96<1,1,0>Q     { align1 1H I@2 compacted };
shl(1)          a0<1>UD         g70<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001a00UD    { align1 WE_all 1N A@1 };
mov(1)          g113<1>UQ       g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(16)         g100<1>Q        g98<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g33<1>Q         g113<0,1,0>Q                    { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
add(16)         g102<1>Q        g1.5<0,1,0>Q    g100<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g104UD          g102UD          nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $15 };
mov(16)         g106<2>UD       g104<1,1,0>UD                   { align1 1H $15.dst compacted };
mov(16)         g106.1<2>UD     g105<1,1,0>UD                   { align1 1H @1 $15.dst compacted };
shl(1)          a0<1>UD         g70<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001a00UD    { align1 WE_all 1N A@1 };
mov(1)          g112<1>UQ       g[a0 128]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g31<1>Q         g112<0,1,0>Q                    { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g111UD          g31UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(1)         nullUD          g33UD           g111UD          0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
add(16)         g114<1>D        g52<8,8,1>D     192D            { align1 1H };
shr(16)         g115<1>UD       g114<8,8,1>UD   0x00000006UD    { align1 1H I@1 };
mov(16)         g67<2>UD        g114<1,1,0>UD                   { align1 1H compacted };
mov(16)         g65<2>UD        g115<1,1,0>UD                   { align1 1H I@2 compacted };
mov(16)         g3<1>UQ         g67<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g116<1>UQ       g65<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g5<1>Q          g10<1,1,0>Q     g3<1,1,0>Q      { align1 1H I@2 compacted };
add(16)         g118<1>Q        g16<1,1,0>Q     g116<1,1,0>Q    { align1 1H I@2 compacted };
shl(1)          a0<1>UD         g70<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@2 };
mov(1)          g8<1>UQ         g[a0 320]<0,1,0>UQ              { align1 WE_all 1N A@1 };
shl(16)         g120<1>Q        g118<4,4,1>Q    0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g36<1>Q         g8<0,1,0>Q                      { align1 WE_all 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g122<1>Q        g1.5<0,1,0>Q    g120<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g124UD          g122UD          nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $0 };
mov(16)         g126<2>UD       g124<1,1,0>UD                   { align1 1H $0.dst compacted };
mov(16)         g126.1<2>UD     g125<1,1,0>UD                   { align1 1H @1 $0.dst compacted };
shl(1)          a0<1>UD         g70<0,1,0>UD    0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001e00UD    { align1 WE_all 1N A@1 };
mov(1)          g7<1>UQ         g[a0 384]<0,1,0>UQ              { align1 WE_all 1N A@1 };
mov(16)         g34<1>Q         g7<0,1,0>Q                      { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g6UD            g34UD           nullUD          0x0210d580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(1)         nullUD          g36UD           g6UD            0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $1 };
add3(16)        g2<1>D          0x0003UW        g18<8,8,1>D     g2<1,1,1>D { align1 1H };

LABEL2:
while(16)       JIP:  LABEL3                                    { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_instance_ptrs_base_ptr_indirect_code[] = {
    0x80000065, 0x48058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x03054770, 0x00000000, 0x00000098,
    0x2c800061, 0x00110014, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00480c, 0x00340000, 0x2c001961, 0x00101402,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001b40, 0x01700305, 0x00100061, 0x15050770,
    0x000001c4, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x070c0000,
    0xfb000514, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x0b140000,
    0xfb001514, 0x00040000, 0xb4008161, 0x00100725,
    0xb4008261, 0x00100b27, 0xb4008261, 0x00100c29,
    0x00101b61, 0x08050230, 0x00442506, 0x00000000,
    0x00101b61, 0x0c050230, 0x00442706, 0x00000000,
    0x00101b61, 0x10050230, 0x00442906, 0x00000000,
    0x38801b40, 0x0803010a, 0x00101b69, 0x0e058770,
    0x02340c05, 0x00000006, 0x00101961, 0x2b060320,
    0x00340e05, 0x00000000, 0x00100065, 0x13058220,
    0x02440e06, 0xffffff00, 0x00101a68, 0x12058220,
    0x02442b06, 0x00000008, 0xb4001a61, 0x0010132d,
    0x00101a52, 0x1a044560, 0x0e8efffe, 0x14051205,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x14050230, 0x00442d06, 0x00000000,
    0x7d801a61, 0x00101a1b, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x14200e16,
    0x00101965, 0x18058220, 0x02441606, 0xffffffc0,
    0x00101968, 0x19058220, 0x02461805, 0x00000006,
    0x00101970, 0x00010220, 0x52461b05, 0x00461905,
    0x04100022, 0x0001c060, 0x000001b0, 0x000001b0,
    0x00100069, 0x1c05a660, 0x02461a05, 0x00000006,
    0xac001940, 0x1c00131d, 0x00101968, 0x1e058220,
    0x02461d05, 0x00000006, 0xb4000061, 0x00101d32,
    0xb4001a61, 0x00101e30, 0x00101a61, 0x2b050230,
    0x00443206, 0x00000000, 0x00101a61, 0x1f050230,
    0x00443006, 0x00000000, 0x38001a40, 0x2b000a2d,
    0x38001a40, 0x1f001021, 0x00101969, 0x23058770,
    0x02342105, 0x00000003, 0x38801940, 0x23070125,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x27140000, 0xfb002514, 0x00040000,
    0xb4008361, 0x00102729, 0xb4012361, 0x00122829,
    0xec840961, 0x00104044, 0x80000965, 0x44058220,
    0x02004404, 0xffffffff, 0x2c84194c, 0x0010442f,
    0x80001969, 0x10018220, 0x02002f04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x30050330, 0x00010080, 0x00000000,
    0x80001f69, 0x10018220, 0x02002f04, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00000a00,
    0x80000961, 0x32050330, 0x00010280, 0x00000000,
    0x80101a61, 0x16050770, 0x00003004, 0x00000000,
    0x80101a61, 0x18050770, 0x00003204, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c431, 0x2e0c0000, 0xfb00160c, 0x00340000,
    0x80008401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c531, 0x00000000, 0xfb08180c, 0x00342e0c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x00100068, 0x33058220, 0x02461305, 0x00000008,
    0x00101970, 0x00010220, 0x42460205, 0x00463305,
    0x04100028, 0x0001c660, 0x00000760, 0x00000760,
    0x00100069, 0x34058660, 0x02460205, 0x00000008,
    0x00101968, 0x35058220, 0x02463405, 0x00000006,
    0xb4000061, 0x0010343a, 0xb4001a61, 0x00103538,
    0x00101a61, 0x42050230, 0x00443a06, 0x00000000,
    0x00101a61, 0x36050230, 0x00443806, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x42000a44, 0x38001a40, 0x36001038,
    0x00101969, 0x3a058770, 0x02343805, 0x00000003,
    0x38801940, 0x3a07013c, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c731, 0x3e140000,
    0xfb003c14, 0x00040000, 0xb4008761, 0x00103e40,
    0xb4012761, 0x00123f40, 0xec840961, 0x00104047,
    0x80000965, 0x47058220, 0x02004704, 0xffffffff,
    0x2c84194c, 0x00104746, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x80001969, 0x10018220,
    0x02004604, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001000, 0x80000961, 0x47050330,
    0x00010000, 0x00000000, 0x80001f69, 0x10018220,
    0x02004604, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001000, 0x80000961, 0x49050330,
    0x00010200, 0x00000000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x19050770,
    0x00004704, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x1b050770,
    0x00004904, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c831, 0x450c0000,
    0xfb00190c, 0x00340000, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c631, 0x00000000,
    0xfb081b0c, 0x0034450c, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x4a058660,
    0x06463405, 0x00000040, 0x00101968, 0x4b058220,
    0x02464a05, 0x00000006, 0xb400a761, 0x00104a3d,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0xb4001a61, 0x00104b3b, 0x00101a61, 0x58050230,
    0x00443d06, 0x00000000, 0x00101a61, 0x4c050230,
    0x00443b06, 0x00000000, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x58000a5a,
    0x38001a40, 0x4c00104e, 0x80001a69, 0x10018220,
    0x02004604, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001600, 0x80000961, 0x5d050330,
    0x00010100, 0x00000000, 0x00101a69, 0x50058770,
    0x02344e05, 0x00000003, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x1e050770,
    0x00005d04, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x38801a40, 0x50070152,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cc31, 0x54140000, 0xfb005214, 0x00040000,
    0xb4008c61, 0x00105456, 0xb4012c61, 0x00125556,
    0x80001969, 0x10018220, 0x02004604, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001400,
    0x80000961, 0x5c050330, 0x00010300, 0x00000000,
    0x80101961, 0x1c050770, 0x00005c04, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c931, 0x5b0c0000, 0xfb001c0c, 0x00340000,
    0x80008901, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x8000ca31, 0x00000000, 0xfb081e0c, 0x00345b0c,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x00100040, 0x5e058660, 0x06463405, 0x00000080,
    0x00101968, 0x5f058220, 0x02465e05, 0x00000006,
    0xb4000061, 0x00105e40, 0xb4001a61, 0x00105f3e,
    0x00101a61, 0x6c050230, 0x00444006, 0x00000000,
    0x00101a61, 0x60050230, 0x00443e06, 0x00000000,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x6c000a6e, 0x38001a40, 0x60001062,
    0x80001a69, 0x10018220, 0x02004604, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001a00,
    0x80000961, 0x71050330, 0x00010300, 0x00000000,
    0x00101a69, 0x64058770, 0x02346205, 0x00000003,
    0x8000ad01, 0x00000000, 0x00000000, 0x00000000,
    0x8000ae01, 0x00000000, 0x00000000, 0x00000000,
    0x80101a61, 0x21050770, 0x00007104, 0x00000000,
    0x8000af01, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x64070166, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cf31, 0x68140000,
    0xfb006614, 0x00040000, 0xb4008f61, 0x0010686a,
    0xb4012f61, 0x0012696a, 0x80001969, 0x10018220,
    0x02004604, 0x00000003, 0x80000940, 0x10018220,
    0x02001000, 0x00001a00, 0x80000961, 0x70050330,
    0x00010100, 0x00000000, 0x80101961, 0x1f050770,
    0x00007004, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000cb31, 0x6f0c0000,
    0xfb001f0c, 0x00340000, 0x80008b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x8000cd31, 0x00000000,
    0xfb08210c, 0x00346f0c, 0x80001f01, 0x00000000,
    0x00000000, 0x00000000, 0x00100040, 0x72058660,
    0x06463405, 0x000000c0, 0x00101968, 0x73058220,
    0x02467205, 0x00000006, 0xb4000061, 0x00107243,
    0xb4001a61, 0x00107341, 0x00101a61, 0x03050230,
    0x00444306, 0x00000000, 0x00101a61, 0x74050230,
    0x00444106, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x03000a05,
    0x38001a40, 0x74001076, 0x80001a69, 0x10018220,
    0x02004604, 0x00000003, 0x80000961, 0x08050330,
    0x00010280, 0x00000000, 0x00101a69, 0x78058770,
    0x02347605, 0x00000003, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x80101a61, 0x24050770,
    0x00000804, 0x00000000, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x38801a40, 0x7807017a,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c031, 0x7c140000, 0xfb007a14, 0x00040000,
    0xb4008061, 0x00107c7e, 0xb4012061, 0x00127d7e,
    0x80001969, 0x10018220, 0x02004604, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001e00,
    0x80000961, 0x07050330, 0x00010300, 0x00000000,
    0x80101961, 0x22050770, 0x00000704, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000ce31, 0x060c0000, 0xfb00220c, 0x00340000,
    0x80008e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c131, 0x00000000, 0xfb08240c, 0x0034060c,
    0x00100052, 0x02044160, 0x0e0e0003, 0x02051205,
    0x00100027, 0x00014060, 0x00000000, 0xfffff890,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_instance_ptrs_base_ptr_indirect = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2896,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_instance_ptrs_base_ptr_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_instance_ptrs_base_ptr_indirect_printfs,
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
   .args = gfx20_misc_copy_instance_ptrs_base_ptr_indirect_args,
   .code = gfx20_misc_copy_instance_ptrs_base_ptr_indirect_code,
};
const char *gfx20_misc_copy_instance_ptrs_base_ptr_indirect_sha1 = "c4bd151e9bc54bb0dcb00a656ab621529c8b0c43";

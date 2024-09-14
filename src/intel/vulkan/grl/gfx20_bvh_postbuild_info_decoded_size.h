#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_postbuild_info_decoded_size_relocs[] = {
};
static const u_printf_info gfx20_bvh_postbuild_info_decoded_size_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_postbuild_info_decoded_size_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g30<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g12<1>Q         0x0000000000000000Q             { align1 1H };
mov(16)         g14<1>Q         0x00000000000000a0Q             { align1 1H };
mov(16)         g24<1>Q         0x0000000000000001Q             { align1 1H };
mov(16)         g26<1>Q         0x0000000000000004Q             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g1UD            g30UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g8<1>UQ         g12<1,1,0>UQ                    { align1 1H I@4 compacted };
mov(16)         g10<1>UQ        g12<1,1,0>UQ                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g16<1>Q         g14<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g18UD           g16UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g126<2>UD       g18<1,1,0>UD                    { align1 1H $1.dst compacted };
mov(16)         g20<1>UQ        g126<8,4,2>UD                   { align1 1H I@1 };
add(16)         g22<1>Q         g1.4<0,1,0>Q    g20<1,1,0>Q     { align1 1H I@1 compacted };

LABEL16:
cmp.z.f0.0(16)  g28<1>D         g8.1<8,4,2>D    0D              { align1 1H I@2 };
cmp.l.f0.0(16)  g29<1>UD        g8<8,4,2>UD     g19<8,8,1>UD    { align1 1H $1.dst };
and.nz.f0.0(16) null<1>UD       g28<8,8,1>UD    g29<8,8,1>UD    { align1 1H I@1 };
(-f0.0) break(16) JIP:  LABEL0        UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g30<1>Q         g8<4,4,1>Q      0x00000003UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g32<1>Q         g22<1,1,0>Q     g30<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g34<1>Q         g32<1,1,0>Q     g26<1,1,0>Q     { align1 1H I@1 compacted };
shr(16)         g36<1>UQ        g34<4,4,1>UQ    0x0000003eUD    { align1 1H I@1 };
cmp.z.f0.0(16)  g38<1>D         g36.1<8,4,2>D   0D              { align1 1H I@1 };
cmp.z.f0.0(16)  g39<1>D         g36<8,4,2>D     2D              { align1 1H };
and.nz.f0.0(16) null<1>UD       g38<8,8,1>UD    g39<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
and(1)          g40<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(16)         g2<2>UD         g34<4,4,1>UQ                    { align1 1H };
shr(1)          g41<1>UD        g40<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g42<1>UW        0x76543210V                     { align1 WE_all 1Q };
and(16)         g44<1>UD        g2<8,4,2>UD     0xfffffffcUD    { align1 1H I@3 };
and(16)         g46<1>UD        g2<8,4,2>UD     0x00000003UD    { align1 1H };
add(8)          g42.8<1>UW      g42<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@3 };
shl(16)         g45<1>UD        g44<8,8,1>UD    0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g43<1>UD        g42<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g47<1>UD        g46<1,1,0>UD    g45<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g48<1>UD        g47<1,1,0>UD    g43<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g41<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g49UD           g48UD           nullUD          0x42100b00                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $4 };
mov(16)         g3<1>UW         g49<16,8,2>UW                   { align1 1H $4.dst };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
cmp.z.f0.0(16)  g50<1>D         g36<8,4,2>D     1D              { align1 1H };
and.nz.f0.0(16) null<1>UD       g38<8,8,1>UD    g50<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
mov(16)         g4<2>UD         g34<4,4,1>UQ                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g51<1>UD        g4<8,4,2>UD                     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g52UD           g51UD           nullUD          0x02100b00                0x00000000
                            slm MsgDesc: ( load, a32, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g2<1>UW         g52<16,8,2>UW                   { align1 1H $5.dst };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
send(16)        g53UD           g34UD           nullUD          0x04100b80                0x00000000
                            ugm MsgDesc: ( load, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g2<1>UW         g53<16,8,2>UW                   { align1 1H @2 $3.dst };

LABEL3:
endif(16)       JIP:  LABEL1                                    { align1 1H };
mov(16)         g3<1>UW         g2<16,16,1>UW                   { align1 1H I@2 };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
shr(16)         g54<1>UQ        g32<4,4,1>UQ    0x0000003eUD    { align1 1H };
cmp.z.f0.0(16)  g56<1>D         g54.1<8,4,2>D   0D              { align1 1H I@1 };
cmp.z.f0.0(16)  g57<1>D         g54<8,4,2>D     2D              { align1 1H };
cmp.nz.f0.0(16) null<1>W        g3<16,16,1>W    0W              { align1 1H I@5 };
and(16)         g58<1>UD        g56<1,1,0>UD    g57<1,1,0>UD    { align1 1H I@2 compacted };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL5              { align1 1H };
mov.nz.f0.0(16) null<1>D        g58<8,8,1>D                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
and(1)          g59<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(16)         g5<2>UD         g32<4,4,1>UQ                    { align1 1H };
shr(1)          g60<1>UD        g59<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g61<1>UW        0x76543210V                     { align1 WE_all 1Q };
and(16)         g63<1>UD        g5<8,4,2>UD     0xfffffffcUD    { align1 1H I@3 };
and(16)         g65<1>UD        g5<8,4,2>UD     0x00000003UD    { align1 1H };
add(8)          g61.8<1>UW      g61<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@3 };
shl(16)         g64<1>UD        g63<8,8,1>UD    0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g62<1>UD        g61<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g66<1>UD        g65<1,1,0>UD    g64<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
or(16)          g67<1>UD        g66<1,1,0>UD    g62<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g60<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g5UD            g67UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $6 };
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
cmp.z.f0.0(16)  g68<1>D         g54<8,4,2>D     1D              { align1 1H };
and.nz.f0.0(16) null<1>UD       g56<8,8,1>UD    g68<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
mov(16)         g6<2>UD         g32<4,4,1>UQ                    { align1 1H };
mov(16)         g69<1>UD        g6<8,4,2>UD                     { align1 1H I@1 };
mov(1)          g28<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g28<1>UD        g28<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g70<1>UD        g28<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g70<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001000UD    { align1 WE_all 1N A@1 };
mov(1)          g71<1>UD        g[a0 320]<0,1,0>UD              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g121<1>UD       g71<0,1,0>UD                    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g72UD           g121UD          nullUD          0x0210d500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
mov(16)         g4<1>UD         g72<0,1,0>UD                    { align1 1H compacted };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g4UD            g32UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };

LABEL9:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
mov(16)         g5<1>UD         g4<1,1,0>UD                     { align1 1H @3 $2.dst compacted };

LABEL7:
endif(16)       JIP:  LABEL11                                   { align1 1H };
mov(16)         g14<2>UD        g5<1,1,0>UD                     { align1 1H @2 $6.dst compacted };
mov(16)         g73<1>UQ        g14<8,4,2>UD                    { align1 1H I@1 };
add(16)         g12<1>Q         g12<1,1,0>Q     g73<1,1,0>Q     { align1 1H I@1 compacted };

LABEL11:
else(16)        JIP:  LABEL5          UIP:  LABEL5              { align1 1H };

LABEL6:
mov.nz.f0.0(16) null<1>D        g58<8,8,1>D                     { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL12             { align1 1H };
and(1)          g75<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g15<2>UD        g32<4,4,1>UQ                    { align1 1H $2.src };
shr(1)          g76<1>UD        g75<0,1,0>UD    0x00000004UD    { align1 WE_all 1N I@2 };
mov(8)          g77<1>UW        0x76543210V                     { align1 WE_all 1Q };
and(16)         g79<1>UD        g15<8,4,2>UD    0xfffffffcUD    { align1 1H I@3 };
and(16)         g81<1>UD        g15<8,4,2>UD    0x00000003UD    { align1 1H };
add(8)          g77.8<1>UW      g77<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@3 };
shl(16)         g80<1>UD        g79<8,8,1>UD    0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
shl(16)         g78<1>UD        g77<8,8,1>UW    0x00000002UD    { align1 1H };
or(16)          g82<1>UD        g81<1,1,0>UD    g80<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(16)          g83<1>UD        g82<1,1,0>UD    g78<1,1,0>UD    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g76<0,1,0>UD    0x00000000UD    { align1 WE_all 1N };
send(16)        g7UD            g83UD           nullUD          0x42100500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 1, ss )  surface_state_index 0  { align1 1H A@1 $8 };
else(16)        JIP:  LABEL12         UIP:  LABEL12             { align1 1H };

LABEL13:
cmp.z.f0.0(16)  g84<1>D         g54<8,4,2>D     1D              { align1 1H };
and.nz.f0.0(16) null<1>UD       g56<8,8,1>UD    g84<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g16<2>UD        g32<4,4,1>UQ                    { align1 1H $2.src };
mov(16)         g85<1>UD        g16<8,4,2>UD                    { align1 1H I@1 };
mov(1)          g29<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g29<1>UD        g29<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g86<1>UD        g29<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g86<0,1,0>UD    0x00000002UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001400UD    { align1 WE_all 1N A@1 };
mov(1)          g87<1>UD        g[a0 320]<0,1,0>UD              { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g122<1>UD       g87<0,1,0>UD                    { align1 WE_all 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         g88UD           g122UD          nullUD          0x0210d500                0x00000000
                            slm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
mov(16)         g6<1>UD         g88<0,1,0>UD                    { align1 1H compacted };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g6UD            g32UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };

LABEL14:
endif(16)       JIP:  LABEL12                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
mov(16)         g7<1>UD         g6<1,1,0>UD                     { align1 1H @3 $2.dst compacted };

LABEL12:
endif(16)       JIP:  LABEL5                                    { align1 1H };
mov(16)         g20<2>UD        g7<1,1,0>UD                     { align1 1H @2 $8.dst compacted };
mov(16)         g89<1>UQ        g20<8,4,2>UD                    { align1 1H I@1 };
add(16)         g10<1>Q         g10<1,1,0>Q     g89<1,1,0>Q     { align1 1H I@1 compacted };

LABEL5:
endif(16)       JIP:  LABEL0                                    { align1 1H };
add(16)         g8<1>Q          g8<1,1,0>Q      g24<1,1,0>Q     { align1 1H compacted };

LABEL0:
while(16)       JIP:  LABEL16                                   { align1 1H };
mov(16)         g90<1>Q         0x000000000000009cQ             { align1 1H };
mov(16)         g96<1>Q         0x0000000000000008Q             { align1 1H };
mul(16)         acc0<1>UD       g19<8,8,1>UD    0x0038UW        { align1 1H $1.dst };
mul(16)         g99<1>D         g19<1,1,0>D     56W             { align1 1H compacted };
shl(16)         g102<1>Q        g10<4,4,1>Q     0x00000005UD    { align1 1H I@7 };
shl(16)         g104<1>Q        g10<4,4,1>Q     0x00000002UD    { align1 1H };
shl(16)         g108<1>Q        g12<4,4,1>Q     0x00000004UD    { align1 1H };
shl(16)         g110<1>Q        g12<4,4,1>Q     0x00000003UD    { align1 1H };
mov(16)         g123<1>Q        g1.5<0,1,0>Q                    { align1 1H };
add(16)         g92<1>Q         g90<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@7 compacted };
mach(16)        g98<1>UD        g19<8,8,1>UD    0x00000038UD    { align1 1H };
mov(16)         g100<2>UD       g99<1,1,0>UD                    { align1 1H I@7 compacted };
add(16)         g106<1>Q        g102<1,1,0>Q    g104<1,1,0>Q    { align1 1H I@7 compacted };
add(16)         g112<1>Q        g108<1,1,0>Q    g110<1,1,0>Q    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g94UD           g92UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
mov(16)         g100.1<2>UD     g98<1,1,0>UD                    { align1 1H I@3 compacted };
add(16)         g114<1>Q        g106<1,1,0>Q    g112<1,1,0>Q    { align1 1H I@2 compacted };
add(16)         g116<1>Q        g100<1,1,0>Q    g96<1,1,0>Q     { align1 1H I@2 compacted };
mov(16)         g21<2>UD        g94<1,1,0>UD                    { align1 1H $10.dst compacted };
mov(16)         g95<1>UQ        g21<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g101<1>Q        g95<4,4,1>Q     0x00000006UD    { align1 1H I@1 };
add(16)         g118<1>Q        g116<1,1,0>Q    g101<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(16)         g120<1>Q        g118<1,1,0>Q    g114<1,1,0>Q    { align1 1H I@1 compacted };
mov(16)         g125<1>UD       g120<8,4,2>UD                   { align1 1H I@1 };
mov(16)         g126<1>UD       g120.1<8,4,2>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g123UD          g125UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $11 };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H $11.src compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_postbuild_info_decoded_size_code[] = {
    0x80000065, 0x1e058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x0c054770, 0x00000000, 0x00000000,
    0x00100061, 0x0e054770, 0x00000000, 0x000000a0,
    0x00100061, 0x18054770, 0x00000000, 0x00000001,
    0x00100061, 0x1a054770, 0x00000000, 0x00000004,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x010c0000, 0xfa001e0c, 0x00340000,
    0xa4001c61, 0x00100c08, 0xa4000061, 0x00100c0a,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001d40, 0x01700e10, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x12140000,
    0xfb001014, 0x00040000, 0xb4008161, 0x0010127e,
    0x00101961, 0x14050230, 0x00447e06, 0x00000000,
    0x38801940, 0x14030116, 0x00101a70, 0x1c058660,
    0x16440816, 0x00000000, 0x00108170, 0x1d050220,
    0x52440806, 0x00461305, 0x00101965, 0x00010220,
    0x22461c05, 0x00461d05, 0x14100028, 0x0001c660,
    0x00000880, 0x00000880, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x1e058770,
    0x02340805, 0x00000003, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x38001940, 0x1e001620,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x1a002022, 0x00101968, 0x24058330,
    0x02342205, 0x0000003e, 0x00101970, 0x26058660,
    0x16442416, 0x00000000, 0x00100070, 0x27058660,
    0x16442406, 0x00000002, 0x00101965, 0x00010220,
    0x22462605, 0x00462705, 0x04100022, 0x0001c060,
    0x00000200, 0x00000120, 0x80000065, 0x28058220,
    0x02000054, 0xfffffc00, 0x00100061, 0x02060320,
    0x00342205, 0x00000000, 0x80001a68, 0x29058220,
    0x02002804, 0x00000004, 0x800c0061, 0x2a054410,
    0x00000000, 0x76543210, 0x00101b65, 0x2c058220,
    0x02440206, 0xfffffffc, 0x00100065, 0x2e058220,
    0x02440206, 0x00000003, 0x800c1b40, 0x2a458110,
    0x01462a05, 0x00080008, 0x00101b69, 0x2d058220,
    0x02462c05, 0x00000004, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x2b058120,
    0x02462a05, 0x00000002, 0xe8001a66, 0x2d002e2f,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0xe8001966, 0x2b002f30, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02002904, 0x00000000, 0x00112431, 0x310e0100,
    0xf600300c, 0x04020000, 0x00108461, 0x03050110,
    0x00563106, 0x00000000, 0x00100024, 0x0001c060,
    0x000000f0, 0x000000f0, 0x00100070, 0x32058660,
    0x16442406, 0x00000001, 0x00101965, 0x00010220,
    0x22462605, 0x00463205, 0x04100022, 0x0001c060,
    0x000000a0, 0x00000080, 0x00100061, 0x04060320,
    0x00342205, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x00101961, 0x33050220,
    0x00440406, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x340c0000,
    0xe600330c, 0x00020000, 0x00108561, 0x02050110,
    0x00563406, 0x00000000, 0x00100024, 0x0001c060,
    0x00000030, 0x00000030, 0x0010c331, 0x350c0000,
    0xf7002214, 0x00020000, 0x00114361, 0x02050110,
    0x00563506, 0x00000000, 0x00100025, 0x00004600,
    0x00000000, 0x00000020, 0x00101a61, 0x03050110,
    0x00580205, 0x00000000, 0x00100025, 0x00004600,
    0x00000000, 0x000005e0, 0x00100068, 0x36058330,
    0x02342005, 0x0000003e, 0x00101970, 0x38058660,
    0x16443616, 0x00000000, 0x00100070, 0x39058660,
    0x16443606, 0x00000002, 0x00101d70, 0x00018550,
    0x25580305, 0x00000000, 0xe8001a65, 0x3900383a,
    0x04100022, 0x0001c060, 0x00000570, 0x000002b8,
    0x00101a61, 0x00010660, 0x20463a05, 0x00000000,
    0x04100022, 0x0001c060, 0x00000258, 0x00000110,
    0x80000065, 0x3b058220, 0x02000054, 0xfffffc00,
    0x00100061, 0x05060320, 0x00342005, 0x00000000,
    0x80001a68, 0x3c058220, 0x02003b04, 0x00000004,
    0x800c0061, 0x3d054410, 0x00000000, 0x76543210,
    0x00101b65, 0x3f058220, 0x02440506, 0xfffffffc,
    0x00100065, 0x41058220, 0x02440506, 0x00000003,
    0x800c1b40, 0x3d458110, 0x01463d05, 0x00080008,
    0x00101b69, 0x40058220, 0x02463f05, 0x00000004,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x3e058120, 0x02463d05, 0x00000002,
    0xe8001a66, 0x40004142, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0xe8001966, 0x3e004243,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10118220, 0x02003c04, 0x00000000,
    0x00112631, 0x050e0100, 0xfa00430c, 0x04000000,
    0x00100024, 0x0001c060, 0x00000158, 0x00000158,
    0x00100070, 0x44058660, 0x16443606, 0x00000001,
    0x00101965, 0x00010220, 0x22463805, 0x00464405,
    0x04100022, 0x0001c060, 0x00000100, 0x000000e0,
    0x00100061, 0x06060320, 0x00342005, 0x00000000,
    0x00101961, 0x45050220, 0x00440606, 0x00000000,
    0xec840961, 0x0010401c, 0x80000965, 0x1c058220,
    0x02001c04, 0xffffffff, 0x2c84194c, 0x00101c46,
    0x80001969, 0x10018220, 0x02004604, 0x00000002,
    0x80000940, 0x10018220, 0x02001000, 0x00001000,
    0x80000961, 0x47050220, 0x00010280, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x2c901961, 0x00104779, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x8000c731, 0x480c0000,
    0xea00790c, 0x00340000, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x2c800061, 0x00104804,
    0x00100024, 0x0001c060, 0x00000030, 0x00000030,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x040c0000, 0xfb002014, 0x00000000,
    0x00100025, 0x00004600, 0x00000000, 0x00000028,
    0x80008601, 0x00000000, 0x00000000, 0x00000000,
    0x2c016261, 0x00100405, 0x00100025, 0x00004600,
    0x00000000, 0x00000030, 0xb4014661, 0x0010050e,
    0x00101961, 0x49050230, 0x00440e06, 0x00000000,
    0x38001940, 0x49000c0c, 0x00100024, 0x0001c060,
    0x000002c8, 0x000002c8, 0x00101a61, 0x00010660,
    0x20463a05, 0x00000000, 0x04100022, 0x0001c060,
    0x00000278, 0x00000120, 0x80000065, 0x4b058220,
    0x02000054, 0xfffffc00, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x0010a261, 0x0f060320,
    0x00342005, 0x00000000, 0x80001a68, 0x4c058220,
    0x02004b04, 0x00000004, 0x800c0061, 0x4d054410,
    0x00000000, 0x76543210, 0x00101b65, 0x4f058220,
    0x02440f06, 0xfffffffc, 0x00100065, 0x51058220,
    0x02440f06, 0x00000003, 0x800c1b40, 0x4d458110,
    0x01464d05, 0x00080008, 0x00101b69, 0x50058220,
    0x02464f05, 0x00000004, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00100069, 0x4e058120,
    0x02464d05, 0x00000002, 0xe8001a66, 0x50005152,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0xe8001966, 0x4e005253, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10118220,
    0x02004c04, 0x00000000, 0x00112831, 0x070e0100,
    0xfa00530c, 0x04000000, 0x00100024, 0x0001c060,
    0x00000168, 0x00000168, 0x00100070, 0x54058660,
    0x16443606, 0x00000001, 0x00101965, 0x00010220,
    0x22463805, 0x00465405, 0x04100022, 0x0001c060,
    0x00000110, 0x000000f0, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x0010a261, 0x10060320,
    0x00342005, 0x00000000, 0x00101961, 0x55050220,
    0x00441006, 0x00000000, 0xec840961, 0x0010401d,
    0x80000965, 0x1d058220, 0x02001d04, 0xffffffff,
    0x2c84194c, 0x00101d56, 0x80001969, 0x10018220,
    0x02005604, 0x00000002, 0x80000940, 0x10018220,
    0x02001000, 0x00001400, 0x80000961, 0x57050220,
    0x00010280, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x2c901961, 0x0010577a,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c931, 0x580c0000, 0xea007a0c, 0x00340000,
    0x80008901, 0x00000000, 0x00000000, 0x00000000,
    0x2c800061, 0x00105806, 0x00100024, 0x0001c060,
    0x00000030, 0x00000030, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x060c0000,
    0xfb002014, 0x00000000, 0x00100025, 0x00004600,
    0x00000000, 0x00000028, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x2c016261, 0x00100607,
    0x00100025, 0x00004600, 0x00000000, 0x00000030,
    0xb4014861, 0x00100714, 0x00101961, 0x59050230,
    0x00441406, 0x00000000, 0x38001940, 0x59000a0a,
    0x00100025, 0x00004600, 0x00000000, 0x00000018,
    0x38000040, 0x18000808, 0x00100027, 0x00014060,
    0x00000000, 0xfffff750, 0x00100061, 0x5a054770,
    0x00000000, 0x0000009c, 0x00100061, 0x60054770,
    0x00000000, 0x00000008, 0x00108141, 0x20018220,
    0x01461305, 0x00380038, 0x68000041, 0x03801363,
    0x00101f69, 0x66058770, 0x02340a05, 0x00000005,
    0x00100069, 0x68058770, 0x02340a05, 0x00000002,
    0x00100069, 0x6c058770, 0x02340c05, 0x00000004,
    0x00100069, 0x6e058770, 0x02340c05, 0x00000003,
    0x00100061, 0x7b050770, 0x000001a4, 0x00000000,
    0x38001f40, 0x01705a5c, 0x00100049, 0x62058220,
    0x02461305, 0x00000038, 0xb4001f61, 0x00106364,
    0x38001f40, 0x6800666a, 0x38001e40, 0x6e006c70,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x0010ca31, 0x5e0c0000, 0xfb005c14, 0x00000000,
    0xb4001b61, 0x00126264, 0x38001a40, 0x70006a72,
    0x38001a40, 0x60006474, 0xb4008a61, 0x00105e15,
    0x00101961, 0x5f050230, 0x00441506, 0x00000000,
    0x00101969, 0x65058770, 0x02345f05, 0x00000006,
    0x38001940, 0x65007476, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x38001940, 0x72007678,
    0x00101961, 0x7d050220, 0x00447806, 0x00000000,
    0x00100061, 0x7e050220, 0x00447816, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cb31, 0x00000000, 0xfb087b14, 0x00047d14,
    0x2c10ab61, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_postbuild_info_decoded_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2864,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_postbuild_info_decoded_size_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_postbuild_info_decoded_size_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 1, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 0,
      .uses_barrier = false,
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
   .args = gfx20_bvh_postbuild_info_decoded_size_args,
   .code = gfx20_bvh_postbuild_info_decoded_size_code,
};
const char *gfx20_bvh_postbuild_info_decoded_size_sha1 = "4464a2c410e0716290cfa4150a6bb5fb63f1d4bd";

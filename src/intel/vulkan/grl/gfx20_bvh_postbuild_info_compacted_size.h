#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_postbuild_info_compacted_size_relocs[] = {
};
static const u_printf_info gfx20_bvh_postbuild_info_compacted_size_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_postbuild_info_compacted_size_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g61<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g4<1>Q          0x0000000000000020Q             { align1 1H };
mov(16)         g17<1>Q         0x0000000000000010Q             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g61UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g6<1>Q          g4<1,1,0>Q      g1.4<0,1,0>Q    { align1 1H I@2 compacted };
add(16)         g19<1>Q         g17<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g8UD            g6UD            nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g21UD           g19UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
add(16)         g12<1>D         g9<1,1,0>D      -g8<1,1,0>D     { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  null<1>UD       g10<8,8,1>UD    g11<8,8,1>UD    { align1 1H $1.dst };
add(16)         g25<1>D         g24<1,1,0>D     -g23<1,1,0>D    { align1 1H $2.dst compacted };
add(16)         g32<1>D         g22<1,1,0>D     -g21<1,1,0>D    { align1 1H $2.dst compacted };
shr(16)         g13<1>UD        g12<8,8,1>UD    0x00000001UD    { align1 1H I@4 };
mov(16)         g37<2>UD        g25<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g39<2>UD        g32<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g35<2>UD        g13<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g26<1>UQ        g37<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g33<1>UQ        g39<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g14<1>UQ        g35<8,4,2>UD                    { align1 1H I@3 };
shl(16)         g28<1>Q         g26<4,4,1>Q     0x00000006UD    { align1 1H I@3 };
shl(16)         g35<1>Q         g33<4,4,1>Q     0x00000006UD    { align1 1H I@3 };
shl(16)         g16<1>Q         g14<4,4,1>Q     0x00000007UD    { align1 1H I@3 };
add(16)         g30<1>Q         g16<1,1,0>Q     g28<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g37<1>Q         g30<1,1,0>Q     g35<1,1,0>Q     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
mov(16)         g39<1>Q         0x0000000000000040Q             { align1 1H };
mov(16)         g50<1>Q         0x000000000000003fQ             { align1 1H };
mov(16)         g64<1>Q         0x0000000000000058Q             { align1 1H };
add(16)         g41<1>Q         g1.4<0,1,0>Q    g39<1,1,0>Q     { align1 1H I@3 compacted };
add(16)         g66<1>Q         g1.4<0,1,0>Q    g64<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g43UD           g41UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g68UD           g66UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g46<2>UD        g43<1,1,0>UD                    { align1 1H $3.dst compacted };
mov(16)         g48<2>UD        g44<1,1,0>UD                    { align1 1H $3.dst compacted };
cmp.l.f0.0(16)  null<1>UD       g10<8,8,1>UD    g68<8,8,1>UD    { align1 1H $4.dst };
mov(16)         g44<1>UQ        g46<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g57<1>UQ        g48<8,4,2>UD                    { align1 1H I@3 };
shl(16)         g48<1>Q         g44<4,4,1>Q     0x00000002UD    { align1 1H I@2 };
shl(16)         g46<1>Q         g44<4,4,1>Q     0x00000003UD    { align1 1H };
shl(16)         g59<1>Q         g57<4,4,1>Q     0x00000003UD    { align1 1H I@3 };
add(16)         g52<1>Q         g46<1,1,0>Q     g50<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g61<1>Q         g59<1,1,0>Q     g50<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g54<1>Q         g52<1,1,0>Q     g48<1,1,0>Q     { align1 1H I@2 compacted };
and(16)         g63<1>UD        g61<8,4,2>UD    0xffffffc0UD    { align1 1H I@2 };
and(16)         g56<1>UD        g54<8,4,2>UD    0xffffffc0UD    { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL2              { align1 1H };
add(16)         g69<1>D         g32<8,8,1>D     255D            { align1 1H };
mov(16)         g71<1>Q         0x0000000000000050Q             { align1 1H };
shl(16)         g90<1>Q         g33<4,4,1>Q     0x00000005UD    { align1 1H };
and(16)         g70<1>UD        g69<8,8,1>UD    0xffffff00UD    { align1 1H I@3 };
add(16)         g73<1>Q         g1.4<0,1,0>Q    g71<1,1,0>Q     { align1 1H I@3 compacted };
add(16)         g92<1>Q         g90<1,1,0>Q     g50<1,1,0>Q     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g75UD           g73UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
and(16)         g94<1>UD        g92<8,4,2>UD    0xffffffc0UD    { align1 1H I@1 };
add(16)         g76<1>D         g75<8,8,1>D     255D            { align1 1H $5.dst };
and(16)         g77<1>UD        g76<8,8,1>UD    0xffffff00UD    { align1 1H I@1 };
add(16)         g78<1>D         g70<1,1,0>D     g77<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         g52<2>UD        g78<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g79<1>UQ        g52<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g81<1>Q         g79<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
shl(16)         g83<1>Q         g79<4,4,1>Q     0x00000002UD    { align1 1H };
add(16)         g85<1>Q         g81<1,1,0>Q     g50<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g87<1>Q         g85<1,1,0>Q     g83<1,1,0>Q     { align1 1H I@1 compacted };
and(16)         g89<1>UD        g87<8,4,2>UD    0xffffffc0UD    { align1 1H I@1 };
add(16)         g2<1>D          g89<1,1,0>D     g94<1,1,0>D     { align1 1H I@1 compacted };
else(16)        JIP:  LABEL2          UIP:  LABEL2              { align1 1H };

LABEL3:
mov(16)         g2<1>UD         0x00000000UD                    { align1 1H I@2 compacted };

LABEL2:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g95<1>Q         0x000000000000000cQ             { align1 1H };
add(16)         g97<1>Q         g1.4<0,1,0>Q    g95<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g99UD           g97UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
add(16)         g100<1>D        g99<8,8,1>D     -3D             { align1 1H $6.dst };
mov(16)         g53<2>UD        g100<1,1,0>UD                   { align1 1H I@1 compacted };
mov(16)         g101<1>UQ       g53<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g103<1>Q        g101<4,4,1>Q    0x00000002UD    { align1 1H I@1 };
add(16)         g105<1>Q        g103<1,1,0>Q    g50<1,1,0>Q     { align1 1H I@1 compacted };
and(16)         g107<1>UD       g105<8,4,2>UD   0xffffffc0UD    { align1 1H I@1 };
add(16)         g108<1>D        g107<1,1,0>D    g56<1,1,0>D     { align1 1H I@1 compacted };
add3(16)        g3<1>D          g108<8,8,1>D    g63<8,8,1>D     g2<1,1,1>D { align1 1H I@1 };

LABEL4:
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g3<1>UD         0x00000000UD                    { align1 1H I@2 compacted };

LABEL0:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
mov(16)         g112<1>Q        0x000000000000000cQ             { align1 1H };
mov(16)         g123<1>Q        0x000000000000009cQ             { align1 1H };
mov(16)         g6<1>Q          0x00000000000000a4Q             { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g15<1>Q         0x000000000000003fQ             { align1 1H };
mov(16)         g24<1>Q         0x00000000000000ffQ             { align1 1H };
mov(16)         g28<1>Q         g1.5<0,1,0>Q                    { align1 1H };
mov(16)         g54<2>UD        g3<1,1,0>UD                     { align1 1H I@7 compacted };
add(16)         g114<1>Q        g1.4<0,1,0>Q    g112<1,1,0>Q    { align1 1H I@7 compacted };
add(16)         g125<1>Q        g123<1,1,0>Q    g1.4<0,1,0>Q    { align1 1H I@7 compacted };
add(16)         g8<1>Q          g6<1,1,0>Q      g1.4<0,1,0>Q    { align1 1H I@7 compacted };
mov(16)         g109<1>UQ       g54<8,4,2>UD                    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g116UD          g114UD          nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g127UD          g125UD          nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g10UD           g8UD            nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
add(16)         g111<1>Q        g37<1,1,0>Q     g109<1,1,0>Q    { align1 1H I@1 compacted };
add(16)         g117<1>D        g116<8,8,1>D    -3D             { align1 1H $7.dst };
mov(16)         g58<2>UD        g127<1,1,0>UD                   { align1 1H $8.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g60<2>UD        g10<1,1,0>UD                    { align1 1H $9.dst compacted };
mov(16)         g56<2>UD        g117<1,1,0>UD                   { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g1<1>UQ         g58<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g11<1>UQ        g60<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g118<1>UQ       g56<8,4,2>UD                    { align1 1H I@3 };
shl(16)         g3<1>Q          g1<4,4,1>Q      0x00000006UD    { align1 1H I@3 };
shl(16)         g13<1>Q         g11<4,4,1>Q     0x00000003UD    { align1 1H I@3 };
shl(16)         g120<1>Q        g118<4,4,1>Q    0x00000006UD    { align1 1H I@3 };
add(16)         g17<1>Q         g13<1,1,0>Q     g15<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g122<1>Q        g111<1,1,0>Q    g120<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
and(16)         g19<1>UD        g17<8,4,2>UD    0xffffffc0UD    { align1 1H I@2 };
add(16)         g5<1>Q          g122<1,1,0>Q    g3<1,1,0>Q      { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g20<2>UD        g19<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g20.1<2>UD      g17.1<8,4,2>UD                  { align1 1H I@1 };
add(16)         g22<1>Q         g5<1,1,0>Q      g20<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g26<1>Q         g24<1,1,0>Q     g22<1,1,0>Q     { align1 1H I@1 compacted };
and(16)         g30<1>UD        g26<8,4,2>UD    0xffffffc0UD    { align1 1H I@1 };
mov(16)         g31<1>UD        g26.1<8,4,2>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g28UD           g30UD           0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H $8.src compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_postbuild_info_compacted_size_code[] = {
    0x80000065, 0x3d058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x04054770, 0x00000000, 0x00000020,
    0x00100061, 0x11054770, 0x00000000, 0x00000010,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x010c0000, 0xfa003d0c, 0x00340000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x01700406, 0x38001a40, 0x01701113,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x08240000, 0xfb000614, 0x000c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x15240000, 0xfb001314, 0x000c0000,
    0xac008140, 0x0820090c, 0x00108170, 0x00010220,
    0x52460a05, 0x00460b05, 0xac008240, 0x17201819,
    0xac008240, 0x15201620, 0x00101c68, 0x0d058220,
    0x02460c05, 0x00000001, 0xb4001b61, 0x00101925,
    0xb4001b61, 0x00102027, 0xb4001b61, 0x00100d23,
    0x00101b61, 0x1a050230, 0x00442506, 0x00000000,
    0x00101b61, 0x21050230, 0x00442706, 0x00000000,
    0x00101b61, 0x0e050230, 0x00442306, 0x00000000,
    0x00101b69, 0x1c058770, 0x02341a05, 0x00000006,
    0x00101b69, 0x23058770, 0x02342105, 0x00000006,
    0x00101b69, 0x10058770, 0x02340e05, 0x00000007,
    0x38001940, 0x1c00101e, 0x38001940, 0x23001e25,
    0x04100022, 0x0001c060, 0x00000340, 0x00000338,
    0x00100061, 0x27054770, 0x00000000, 0x00000040,
    0x00100061, 0x32054770, 0x00000000, 0x0000003f,
    0x00100061, 0x40054770, 0x00000000, 0x00000058,
    0x38801b40, 0x27030129, 0x38801a40, 0x40030142,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x2b140000, 0xfb002914, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x440c0000, 0xfb004214, 0x00000000,
    0xb4008361, 0x00102b2e, 0xb4008361, 0x00102c30,
    0x00108470, 0x00010220, 0x52460a05, 0x00464405,
    0x00101b61, 0x2c050230, 0x00442e06, 0x00000000,
    0x00101b61, 0x39050230, 0x00443006, 0x00000000,
    0x00101a69, 0x30058770, 0x02342c05, 0x00000002,
    0x00100069, 0x2e058770, 0x02342c05, 0x00000003,
    0x00101b69, 0x3b058770, 0x02343905, 0x00000003,
    0x38001a40, 0x32002e34, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x32003b3d,
    0x38001a40, 0x30003436, 0x00101a65, 0x3f058220,
    0x02443d06, 0xffffffc0, 0x00101a65, 0x38058220,
    0x02443606, 0xffffffc0, 0x04100022, 0x0001c060,
    0x00000130, 0x00000128, 0x00100040, 0x45058660,
    0x06462005, 0x000000ff, 0x00100061, 0x47054770,
    0x00000000, 0x00000050, 0x00100069, 0x5a058770,
    0x02342105, 0x00000005, 0x00101b65, 0x46058220,
    0x02464505, 0xffffff00, 0x38801b40, 0x47030149,
    0x38001b40, 0x32005a5c, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x4b0c0000,
    0xfb004914, 0x00000000, 0x00101965, 0x5e058220,
    0x02445c06, 0xffffffc0, 0x00108540, 0x4c058660,
    0x06464b05, 0x000000ff, 0x00101965, 0x4d058220,
    0x02464c05, 0xffffff00, 0xac001940, 0x4d00464e,
    0xb4001961, 0x00104e34, 0x00101961, 0x4f050230,
    0x00443406, 0x00000000, 0x00101969, 0x51058770,
    0x02344f05, 0x00000003, 0x00100069, 0x53058770,
    0x02344f05, 0x00000002, 0x38001a40, 0x32005155,
    0x38001940, 0x53005557, 0x00101965, 0x59058220,
    0x02445706, 0xffffffc0, 0xac001940, 0x5e005902,
    0x00100024, 0x0001c060, 0x00000018, 0x00000018,
    0x64801a61, 0x00000002, 0x00100025, 0x00004600,
    0x00000000, 0x000000b0, 0x00100061, 0x5f054770,
    0x00000000, 0x0000000c, 0x38801940, 0x5f030161,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x630c0000, 0xfb006114, 0x00000000,
    0x00108640, 0x64058660, 0x06466305, 0xfffffffd,
    0xb4001961, 0x00106435, 0x00101961, 0x65050230,
    0x00443506, 0x00000000, 0x00101969, 0x67058770,
    0x02346505, 0x00000002, 0x38001940, 0x32006769,
    0x00101965, 0x6b058220, 0x02446906, 0xffffffc0,
    0xac001940, 0x38006b6c, 0x00101952, 0x03040e68,
    0x0e0e6c05, 0x02053f05, 0x00100024, 0x0001c060,
    0x00000018, 0x00000018, 0x64801a61, 0x00000003,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x00100061, 0x70054770, 0x00000000, 0x0000000c,
    0x00100061, 0x7b054770, 0x00000000, 0x0000009c,
    0x0010a161, 0x06054770, 0x00000000, 0x000000a4,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x0f054770, 0x00000000, 0x0000003f,
    0x00100061, 0x18054770, 0x00000000, 0x000000ff,
    0x00100061, 0x1c050770, 0x000001a4, 0x00000000,
    0xb4001f61, 0x00100336, 0x38801f40, 0x70030172,
    0x38001f40, 0x01707b7d, 0x38001f40, 0x01700608,
    0x00101c61, 0x6d050230, 0x00443606, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x740c0000, 0xfb007214, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c831, 0x7f0c0000, 0xfb007d14, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c931, 0x0a0c0000, 0xfb000814, 0x00000000,
    0x38001940, 0x6d00256f, 0x00108740, 0x75058660,
    0x06467405, 0xfffffffd, 0xb4008861, 0x00107f3a,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0xb4008961, 0x00100a3c, 0xb4001b61, 0x00107538,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00101b61, 0x01050230, 0x00443a06, 0x00000000,
    0x00101b61, 0x0b050230, 0x00443c06, 0x00000000,
    0x00101b61, 0x76050230, 0x00443806, 0x00000000,
    0x00101b69, 0x03058770, 0x02340105, 0x00000006,
    0x00101b69, 0x0d058770, 0x02340b05, 0x00000003,
    0x00101b69, 0x78058770, 0x02347605, 0x00000006,
    0x38001a40, 0x0f000d11, 0x38001a40, 0x78006f7a,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x00101a65, 0x13058220, 0x02441106, 0xffffffc0,
    0x38001a40, 0x03007a05, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0xb4001a61, 0x00101314,
    0x00101961, 0x14160220, 0x00441116, 0x00000000,
    0x38001940, 0x14000516, 0x38001940, 0x1600181a,
    0x00101965, 0x1e058220, 0x02441a06, 0xffffffc0,
    0x00100061, 0x1f050220, 0x00441a16, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010ca31, 0x00000000, 0xfb081c14, 0x00041e14,
    0x2c10a861, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_postbuild_info_compacted_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 1856,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_postbuild_info_compacted_size_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_postbuild_info_compacted_size_printfs,
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
   .args = gfx20_bvh_postbuild_info_compacted_size_args,
   .code = gfx20_bvh_postbuild_info_compacted_size_code,
};
const char *gfx20_bvh_postbuild_info_compacted_size_sha1 = "73244b20666aa21b329ce192483f40c9f01b053e";

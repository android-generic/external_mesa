#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_copy_clone_indirect_relocs[] = {
};
static const u_printf_info gfx20_bvh_copy_clone_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_copy_clone_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g105<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g8<1>Q          0x00000000000000a8Q             { align1 1H };
mov(16)         g82<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g105UD          nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g20<1>UW        0x76543210V                     { align1 WE_all 1Q };
mov(16)         g87<2>UD        g82<1,1,0>UD                    { align1 1H I@2 compacted };
add(8)          g20.8<1>UW      g20<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
mov(16)         g16<1>UQ        g87<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g19<1>UD        g20<8,8,1>UW                    { align1 1H };
and(16)         g21<1>UD        g19<8,8,1>UD    0x0000000fUD    { align1 1H I@1 };
shl(16)         g18<1>Q         g16<4,4,1>Q     0x00000004UD    { align1 1H I@3 };
mov(16)         g89<2>UD        g18<4,4,1>UQ                    { align1 1H I@1 };
add(16)         g3<1>D          g89<8,4,2>D     g21<8,8,1>D     { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g6<1>DF         g1.4<0,1,0>DF                   { align1 1H };
mov(16)         g4<1>DF         g1.5<0,1,0>DF                   { align1 1H };
add(16)         g10<1>Q         g8<1,1,0>Q      g1.5<0,1,0>Q    { align1 1H compacted };
mov(16)         g91<2>UD        g1.4<0,1,0>UQ                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g12UD           g10UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
and(16)         g22<1>UD        g91<8,4,2>UD    0x0000003fUD    { align1 1H I@1 };
add(16)         g23<1>D         -g22<8,8,1>D    64D             { align1 1H I@1 };
and(16)         g24<1>UD        g23<8,8,1>UD    0x0000003fUD    { align1 1H I@1 };
mov(16)         g93<2>UD        g24<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g27<1>UQ        g93<8,4,2>UD                    { align1 1H I@1 };
add(16)         g29<1>Q         g1.4<0,1,0>Q    g27<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g31<1>Q         g1.5<0,1,0>Q    g27<1,1,0>Q     { align1 1H compacted };
add(16)         g25<1>D         g12<1,1,0>D     -g24<1,1,0>D    { align1 1H $1.dst compacted };
cmp.l.f0.0(16)  null<1>UD       g24<8,8,1>UD    g12<8,8,1>UD    { align1 1H };
shr(16)         g14<1>UD        g12<8,8,1>UD    0x00000008UD    { align1 1H };
shr(16)         g26<1>UD        g25<8,8,1>UD    0x00000002UD    { align1 1H I@3 };
add(16)         g15<1>D         g14<8,8,1>D     4D              { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g2<1>UD         g3<1,1,0>UD                     { align1 1H compacted };
mov(16)         g94<2>UD        g15<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g33<1>UQ        g94<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g35<1>Q         g33<4,4,1>Q     0x00000004UD    { align1 1H I@1 };
mov(16)         g96<2>UD        g35<4,4,1>UQ                    { align1 1H I@1 };

LABEL2:
cmp.ge.f0.0(16) null<1>UD       g2<8,8,1>UD     g26<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL1        UIP:  LABEL1              { align1 1H };
mov(16)         g98<2>UD        g2<1,1,0>UD                     { align1 1H compacted };
mov(16)         g36<1>UQ        g98<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g38<1>Q         g36<4,4,1>Q     0x00000002UD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g40<1>Q         g31<1,1,0>Q     g38<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g42<1>Q         g29<1,1,0>Q     g38<1,1,0>Q     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g83UD           g40UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g42UD           g83UD           0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $3 };
add(16)         g2<1>D          g2<8,8,1>D      g96<8,4,2>D     { align1 1H I@7 };

LABEL1:
while(16)       JIP:  LABEL2                                    { align1 1H };
and(16)         g43<1>UD        g25<8,8,1>UD    0xfffffffcUD    { align1 1H $3.src };
add(16)         g44<1>D         g25<1,1,0>D     -g43<1,1,0>D    { align1 1H I@1 compacted };
cmp.l.f0.0(16)  null<1>UD       g3<8,8,1>UD     g44<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
mov(16)         g99<2>UD        g26<1,1,0>UD                    { align1 1H I@6 compacted };
mov(16)         g101<2>UD       g3<1,1,0>UD                     { align1 1H compacted };
mov(16)         g45<1>UQ        g99<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g53<1>UQ        g101<8,4,2>UD                   { align1 1H I@2 };
shl(16)         g47<1>Q         g45<4,4,1>Q     0x00000002UD    { align1 1H I@2 };
add(16)         g49<1>Q         g29<1,1,0>Q     g47<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g51<1>Q         g31<1,1,0>Q     g47<1,1,0>Q     { align1 1H compacted };
add(16)         g58<1>Q         g49<1,1,0>Q     g53<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g55<1>Q         g51<1,1,0>Q     g53<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g57UD           g55UD           nullUD          0x04100980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g84<1>UD        g57<32,8,4>UB                   { align1 1H $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g58UD           g84UD           0x04000984                0x00000040
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $5 };

LABEL3:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
and(16)         g59<1>UD        g1.8<0,1,0>UD   0x00000003UD    { align1 1H $5.src };
add(16)         g60<1>D         -g59<8,8,1>D    4D              { align1 1H I@1 };
and.nz.f0.0(16) g61<1>UD        g60<8,8,1>UD    0x00000003UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
cmp.l.f0.0(16)  null<1>UD       g3<8,8,1>UD     g61<8,8,1>UD    { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL6              { align1 1H };
mov(16)         g102<2>UD       g3<1,1,0>UD                     { align1 1H compacted };
mov(16)         g62<1>UQ        g102<8,4,2>UD                   { align1 1H I@1 };
add(16)         g64<1>Q         g1.5<0,1,0>Q    g62<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g67<1>Q         g1.4<0,1,0>Q    g62<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g66UD           g64UD           nullUD          0x04100980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(16)         g85<1>UD        g66<32,8,4>UB                   { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g67UD           g85UD           0x04000984                0x00000040
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $7 };

LABEL6:
endif(16)       JIP:  LABEL5                                    { align1 1H };
mov(16)         g103<2>UD       g61<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g68<1>UQ        g103<8,4,2>UD                   { align1 1H I@1 };
add(16)         g6<1>Q          g1.4<0,1,0>Q    g68<1,1,0>Q     { align1 1H A@1 compacted };
add(16)         g4<1>Q          g1.5<0,1,0>Q    g68<1,1,0>Q     { align1 1H L@1 compacted };

LABEL5:
endif(16)       JIP:  LABEL7                                    { align1 1H };

LABEL7:
and(16)         g69<1>UD        g6<8,4,2>UD     0x0000003fUD    { align1 1H A@2 };
add(16)         g70<1>D         -g69<8,8,1>D    64D             { align1 1H I@1 };
and(16)         g71<1>UD        g70<8,8,1>UD    0x0000003fUD    { align1 1H I@1 };
shr(16)         g72<1>UD        g71<8,8,1>UD    0x00000002UD    { align1 1H I@1 };
cmp.l.f0.0(16)  g73<1>UD        g3<1,1,0>UD     g72<1,1,0>UD    { align1 1H I@1 compacted };
cmp.nz.f0.0(16) g74<1>D         g71<8,8,1>D     0D              { align1 1H };
and.nz.f0.0(16) null<1>UD       g73<8,8,1>UD    g74<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL8              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g104<2>UD       g3<1,1,0>UD                     { align1 1H compacted };
mov(16)         g75<1>UQ        g104<8,4,2>UD                   { align1 1H I@1 };
shl(16)         g77<1>Q         g75<4,4,1>Q     0x00000002UD    { align1 1H I@1 };
add(16)         g79<1>Q         g4<1,1,0>Q      g77<1,1,0>Q     { align1 1H A@1 compacted };
add(16)         g81<1>Q         g6<1,1,0>Q      g77<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g86UD           g79UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g81UD           g86UD           0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $9 };

LABEL8:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_copy_clone_indirect_code[] = {
    0x80000065, 0x69058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x08054770, 0x00000000, 0x000000a8,
    0x2c800061, 0x00110052, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00690c, 0x00340000, 0x800c0061, 0x14054410,
    0x00000000, 0x76543210, 0xb4001a61, 0x00105257,
    0x800c1a40, 0x14458110, 0x01461405, 0x00080008,
    0x00101a61, 0x10050230, 0x00445706, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x13050120, 0x00461405, 0x00000000,
    0x00101965, 0x15058220, 0x02461305, 0x0000000f,
    0x00101b69, 0x12058770, 0x02341005, 0x00000004,
    0x00101961, 0x59060320, 0x00341205, 0x00000000,
    0x00101940, 0x03050660, 0x06445906, 0x00461505,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x06050bb0, 0x00000184, 0x00000000,
    0x00100061, 0x04050bb0, 0x000001a4, 0x00000000,
    0x38000040, 0x0160080a, 0x00100061, 0x5b060320,
    0x00000184, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x0c140000,
    0xfb000a14, 0x00040000, 0x00101965, 0x16058220,
    0x02445b06, 0x0000003f, 0x00101940, 0x1705a660,
    0x06461605, 0x00000040, 0x00101965, 0x18058220,
    0x02461705, 0x0000003f, 0xb4001961, 0x0010185d,
    0x00101961, 0x1b050230, 0x00445d06, 0x00000000,
    0x38801940, 0x1b03011d, 0x38800040, 0x1b07011f,
    0xac008140, 0x18200c19, 0x00100070, 0x00010220,
    0x52461805, 0x00460c05, 0x00100068, 0x0e058220,
    0x02460c05, 0x00000008, 0x00101b68, 0x1a058220,
    0x02461905, 0x00000002, 0x00101a40, 0x0f058660,
    0x06460e05, 0x00000004, 0x04100022, 0x0001c060,
    0x00000240, 0x00000240, 0x2c000061, 0x00100302,
    0xb4001b61, 0x00100f5e, 0x00101961, 0x21050230,
    0x00445e06, 0x00000000, 0x00101969, 0x23058770,
    0x02342105, 0x00000004, 0x00101961, 0x60060320,
    0x00342305, 0x00000000, 0x00101a70, 0x00010220,
    0x42460205, 0x00461a05, 0x04100028, 0x0001c660,
    0x000000d8, 0x000000d8, 0xb4000061, 0x00100262,
    0x00101961, 0x24050230, 0x00446206, 0x00000000,
    0x00101969, 0x26058770, 0x02342405, 0x00000002,
    0x8000a201, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x26001f28, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x38001f40, 0x26001d2a,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x530c0000, 0xfb002814, 0x00000000,
    0x80008201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x00000000, 0xfb082a14, 0x0000530c,
    0x00101f40, 0x02050660, 0x06460205, 0x00446006,
    0x00100027, 0x00014060, 0x00000000, 0xffffff18,
    0x0010a365, 0x2b058220, 0x02461905, 0xfffffffc,
    0xac001940, 0x2b20192c, 0x00101970, 0x00010220,
    0x52460305, 0x00462c05, 0x04100022, 0x0001c060,
    0x000000c0, 0x000000c0, 0xb4001e61, 0x00101a63,
    0xb4000061, 0x00100365, 0x00101a61, 0x2d050230,
    0x00446306, 0x00000000, 0x00101a61, 0x35050230,
    0x00446506, 0x00000000, 0x00101a69, 0x2f058770,
    0x02342d05, 0x00000002, 0x38001940, 0x2f001d31,
    0x38000040, 0x2f001f33, 0x38001a40, 0x3500313a,
    0x38001a40, 0x35003337, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c431, 0x390c0000,
    0xf3003714, 0x00020000, 0x00108461, 0x54050020,
    0x00663907, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x00000000,
    0xf3083a14, 0x0002540c, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x0010a565, 0x3b058220,
    0x02000184, 0x00000003, 0x00101940, 0x3c05a660,
    0x06463b05, 0x00000004, 0x00101965, 0x3d058220,
    0x22463c05, 0x00000003, 0x04100022, 0x0001c060,
    0x000000f0, 0x000000f0, 0x00101a70, 0x00010220,
    0x52460305, 0x00463d05, 0x04100022, 0x0001c060,
    0x00000088, 0x00000088, 0xb4000061, 0x00100366,
    0x00101961, 0x3e050230, 0x00446606, 0x00000000,
    0x38801940, 0x3e070140, 0x38800040, 0x3e030143,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x420c0000, 0xf3004014, 0x00020000,
    0x00108661, 0x55050020, 0x00664207, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x00000000, 0xf3084314, 0x0002550c,
    0x00100025, 0x00004600, 0x00000000, 0x00000048,
    0xb4000061, 0x00103d67, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x00101961, 0x44050230,
    0x00446706, 0x00000000, 0x38800940, 0x44030106,
    0x38802140, 0x44070104, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100a65, 0x45058220,
    0x02440606, 0x0000003f, 0x00101940, 0x4605a660,
    0x06464505, 0x00000040, 0x00101965, 0x47058220,
    0x02464605, 0x0000003f, 0x00101968, 0x48058220,
    0x02464705, 0x00000002, 0xe8181970, 0x48000349,
    0x00100070, 0x4a058660, 0x26464705, 0x00000000,
    0x00101965, 0x00010220, 0x22464905, 0x00464a05,
    0x04100022, 0x0001c060, 0x000000b8, 0x000000b8,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x00100368, 0x00101961, 0x4b050230,
    0x00446806, 0x00000000, 0x00101969, 0x4d058770,
    0x02344b05, 0x00000002, 0x38000940, 0x4d00044f,
    0x38000040, 0x4d000651, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x560c0000,
    0xfb004f14, 0x00000000, 0x80008801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x00000000,
    0xfb085114, 0x0000560c, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x2c100061, 0x0010007e,
    0x80101931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_copy_clone_indirect = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 1712,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_copy_clone_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_copy_clone_indirect_printfs,
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
      .push.cross_thread.dwords = 12,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 16,
   .arg_count = 2,
   .args = gfx20_bvh_copy_clone_indirect_args,
   .code = gfx20_bvh_copy_clone_indirect_code,
};
const char *gfx20_bvh_copy_clone_indirect_sha1 = "7672d43edbe357aba03ce2dc63b2e4cda8edf2fa";

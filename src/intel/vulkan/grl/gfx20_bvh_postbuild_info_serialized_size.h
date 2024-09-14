#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_postbuild_info_serialized_size_relocs[] = {
};
static const u_printf_info gfx20_bvh_postbuild_info_serialized_size_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_postbuild_info_serialized_size_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g73<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g8<1>Q          0x000000000000009cQ             { align1 1H };
mov(16)         g15<1>Q         0x0000000000000038Q             { align1 1H };
mov(16)         g17<1>Q         0x0000000000000020Q             { align1 1H };
mov(16)         g30<1>Q         0x0000000000000010Q             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(1)         g1UD            g73UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g10<1>Q         g8<1,1,0>Q      g1.4<0,1,0>Q    { align1 1H I@4 compacted };
add(16)         g19<1>Q         g17<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@3 compacted };
add(16)         g32<1>Q         g30<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g4UD            g10UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g21UD           g19UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g34UD           g32UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g53<2>UD        g4<1,1,0>UD                     { align1 1H $1.dst compacted };
add(16)         g25<1>D         g22<1,1,0>D     -g21<1,1,0>D    { align1 1H $2.dst compacted };
cmp.l.f0.0(16)  null<1>UD       g23<8,8,1>UD    g24<8,8,1>UD    { align1 1H $2.dst };
add(16)         g38<1>D         g37<1,1,0>D     -g36<1,1,0>D    { align1 1H $3.dst compacted };
add(16)         g45<1>D         g35<1,1,0>D     -g34<1,1,0>D    { align1 1H $3.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g11<1>UQ        g53<8,4,2>UD                    { align1 1H I@5 };
shr(16)         g26<1>UD        g25<8,8,1>UD    0x00000001UD    { align1 1H I@5 };
mov(16)         g57<2>UD        g38<1,1,0>UD                    { align1 1H I@4 compacted };
mov(16)         g59<2>UD        g45<1,1,0>UD                    { align1 1H I@4 compacted };
shl(16)         g13<1>Q         g11<4,4,1>Q     0x00000003UD    { align1 1H I@4 };
mov(16)         g55<2>UD        g26<1,1,0>UD                    { align1 1H I@4 compacted };
mov(16)         g39<1>UQ        g57<8,4,2>UD                    { align1 1H I@4 };
mov(16)         g46<1>UQ        g59<8,4,2>UD                    { align1 1H I@4 };
mov(16)         g27<1>UQ        g55<8,4,2>UD                    { align1 1H I@3 };
shl(16)         g41<1>Q         g39<4,4,1>Q     0x00000006UD    { align1 1H I@3 };
shl(16)         g48<1>Q         g46<4,4,1>Q     0x00000006UD    { align1 1H I@3 };
shl(16)         g29<1>Q         g27<4,4,1>Q     0x00000007UD    { align1 1H I@3 };
add(16)         g43<1>Q         g29<1,1,0>Q     g41<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g50<1>Q         g43<1,1,0>Q     g48<1,1,0>Q     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
mov(16)         g52<1>Q         0x0000000000000040Q             { align1 1H };
mov(16)         g63<1>Q         0x000000000000003fQ             { align1 1H };
mov(16)         g77<1>Q         0x0000000000000058Q             { align1 1H };
add(16)         g54<1>Q         g1.4<0,1,0>Q    g52<1,1,0>Q     { align1 1H I@3 compacted };
add(16)         g79<1>Q         g1.4<0,1,0>Q    g77<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g56UD           g54UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g81UD           g79UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g60<2>UD        g56<1,1,0>UD                    { align1 1H $4.dst compacted };
mov(16)         g65<2>UD        g57<1,1,0>UD                    { align1 1H $4.dst compacted };
cmp.l.f0.0(16)  null<1>UD       g23<8,8,1>UD    g81<8,8,1>UD    { align1 1H $5.dst };
mov(16)         g57<1>UQ        g60<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g70<1>UQ        g65<8,4,2>UD                    { align1 1H I@3 };
shl(16)         g59<1>Q         g57<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
shl(16)         g61<1>Q         g57<4,4,1>Q     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
shl(16)         g72<1>Q         g70<4,4,1>Q     0x00000003UD    { align1 1H I@3 };
add(16)         g65<1>Q         g59<1,1,0>Q     g63<1,1,0>Q     { align1 1H I@3 compacted };
add(16)         g74<1>Q         g72<1,1,0>Q     g63<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g67<1>Q         g65<1,1,0>Q     g61<1,1,0>Q     { align1 1H I@2 compacted };
and(16)         g76<1>UD        g74<8,4,2>UD    0xffffffc0UD    { align1 1H I@2 };
and(16)         g69<1>UD        g67<8,4,2>UD    0xffffffc0UD    { align1 1H I@2 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL2              { align1 1H };
add(16)         g82<1>D         g45<8,8,1>D     255D            { align1 1H };
mov(16)         g84<1>Q         0x0000000000000050Q             { align1 1H };
shl(16)         g103<1>Q        g46<4,4,1>Q     0x00000005UD    { align1 1H };
and(16)         g83<1>UD        g82<8,8,1>UD    0xffffff00UD    { align1 1H I@3 };
add(16)         g86<1>Q         g1.4<0,1,0>Q    g84<1,1,0>Q     { align1 1H I@3 compacted };
add(16)         g105<1>Q        g103<1,1,0>Q    g63<1,1,0>Q     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g88UD           g86UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
and(16)         g107<1>UD       g105<8,4,2>UD   0xffffffc0UD    { align1 1H I@1 };
add(16)         g89<1>D         g88<8,8,1>D     255D            { align1 1H $6.dst };
and(16)         g90<1>UD        g89<8,8,1>UD    0xffffff00UD    { align1 1H I@1 };
add(16)         g91<1>D         g83<1,1,0>D     g90<1,1,0>D     { align1 1H I@1 compacted };
mov(16)         g66<2>UD        g91<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g92<1>UQ        g66<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g94<1>Q         g92<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
shl(16)         g96<1>Q         g92<4,4,1>Q     0x00000002UD    { align1 1H };
add(16)         g98<1>Q         g94<1,1,0>Q     g63<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g100<1>Q        g98<1,1,0>Q     g96<1,1,0>Q     { align1 1H I@1 compacted };
and(16)         g102<1>UD       g100<8,4,2>UD   0xffffffc0UD    { align1 1H I@1 };
add(16)         g6<1>D          g102<1,1,0>D    g107<1,1,0>D    { align1 1H I@1 compacted };
else(16)        JIP:  LABEL2          UIP:  LABEL2              { align1 1H };

LABEL3:
mov(16)         g6<1>UD         0x00000000UD                    { align1 1H I@2 compacted };

LABEL2:
endif(16)       JIP:  LABEL4                                    { align1 1H };
mov(16)         g108<1>Q        0x000000000000000cQ             { align1 1H };
add(16)         g110<1>Q        g1.4<0,1,0>Q    g108<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g112UD          g110UD          nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
add(16)         g113<1>D        g112<8,8,1>D    -3D             { align1 1H $7.dst };
mov(16)         g67<2>UD        g113<1,1,0>UD                   { align1 1H I@1 compacted };
mov(16)         g114<1>UQ       g67<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g116<1>Q        g114<4,4,1>Q    0x00000002UD    { align1 1H I@1 };
add(16)         g118<1>Q        g116<1,1,0>Q    g63<1,1,0>Q     { align1 1H I@1 compacted };
and(16)         g120<1>UD       g118<8,4,2>UD   0xffffffc0UD    { align1 1H I@1 };
add(16)         g121<1>D        g120<1,1,0>D    g69<1,1,0>D     { align1 1H I@1 compacted };
add3(16)        g7<1>D          g121<8,8,1>D    g76<8,8,1>D     g6<1,1,1>D { align1 1H I@1 };

LABEL4:
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g7<1>UD         0x00000000UD                    { align1 1H I@2 compacted };

LABEL0:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
mov(16)         g125<1>Q        0x000000000000000cQ             { align1 1H };
shl(16)         g17<1>Q         g11<4,4,1>Q     0x00000006UD    { align1 1H };
mov(16)         g20<1>Q         0x00000000000000a4Q             { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g29<1>Q         0x000000000000003fQ             { align1 1H };
mov(16)         g38<1>Q         0x00000000000000ffQ             { align1 1H };
add(16)         g45<1>Q         g13<1,1,0>Q     g15<1,1,0>Q     { align1 1H compacted };
mov(16)         g5<1>UD         0x00000000UD                    { align1 1H compacted };
mov(16)         g52<1>Q         g1.5<0,1,0>Q                    { align1 1H };
mov(16)         g68<2>UD        g7<1,1,0>UD                     { align1 1H I@7 compacted };
add(16)         g22<1>Q         g20<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@7 compacted };
add(16)         g6<1>Q          g1.4<0,1,0>Q    g125<1,1,0>Q    { align1 1H I@7 compacted };
mov(16)         g122<1>UQ       g68<8,4,2>UD                    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g24UD           g22UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g8UD            g6UD            nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
add(16)         g124<1>Q        g50<1,1,0>Q     g122<1,1,0>Q    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g72<2>UD        g24<1,1,0>UD                    { align1 1H $8.dst compacted };
add(16)         g9<1>D          g8<8,8,1>D      -3D             { align1 1H $9.dst };
mov(16)         g25<1>UQ        g72<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g70<2>UD        g9<1,1,0>UD                     { align1 1H I@2 compacted };
shl(16)         g27<1>Q         g25<4,4,1>Q     0x00000003UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(16)         g10<1>UQ        g70<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g31<1>Q         g27<1,1,0>Q     g29<1,1,0>Q     { align1 1H I@2 compacted };
shl(16)         g12<1>Q         g10<4,4,1>Q     0x00000006UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
and(16)         g33<1>UD        g31<8,4,2>UD    0xffffffc0UD    { align1 1H I@2 };
add(16)         g14<1>Q         g124<1,1,0>Q    g12<1,1,0>Q     { align1 1H I@2 compacted };
mov(16)         g34<2>UD        g33<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g19<1>Q         g14<1,1,0>Q     g17<1,1,0>Q     { align1 1H I@2 compacted };
mov(16)         g34.1<2>UD      g31.1<8,4,2>UD                  { align1 1H I@2 };
add(16)         g36<1>Q         g19<1,1,0>Q     g34<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g40<1>Q         g38<1,1,0>Q     g36<1,1,0>Q     { align1 1H I@1 compacted };
and(16)         g42<1>UD        g40<8,4,2>UD    0xffffffc0UD    { align1 1H I@1 };
mov(16)         g43<2>UD        g42<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g43.1<2>UD      g40.1<8,4,2>UD                  { align1 1H I@1 };
add(16)         g47<1>Q         g45<1,1,0>Q     g43<1,1,0>Q     { align1 1H I@1 compacted };
mov(16)         g2<1>UD         g47<8,4,2>UD                    { align1 1H I@1 };
mov(16)         g3<1>UD         g47.1<8,4,2>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g52UD           g2UD            0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $10 };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_postbuild_info_serialized_size_code[] = {
    0x80000065, 0x49058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x08054770, 0x00000000, 0x0000009c,
    0x00100061, 0x0f054770, 0x00000000, 0x00000038,
    0x00100061, 0x11054770, 0x00000000, 0x00000020,
    0x00100061, 0x1e054770, 0x00000000, 0x00000010,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x010c0000, 0xfa00490c, 0x00340000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001c40, 0x0170080a, 0x38001b40, 0x01701113,
    0x38001b40, 0x01701e20, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x040c0000,
    0xfb000a14, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x15240000,
    0xfb001314, 0x000c0000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x22240000,
    0xfb002014, 0x000c0000, 0xb4008161, 0x00100435,
    0xac008240, 0x15201619, 0x00108270, 0x00010220,
    0x52461705, 0x00461805, 0xac008340, 0x24202526,
    0xac008340, 0x2220232d, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x00101d61, 0x0b050230,
    0x00443506, 0x00000000, 0x00101d68, 0x1a058220,
    0x02461905, 0x00000001, 0xb4001c61, 0x00102639,
    0xb4001c61, 0x00102d3b, 0x00101c69, 0x0d058770,
    0x02340b05, 0x00000003, 0xb4001c61, 0x00101a37,
    0x00101c61, 0x27050230, 0x00443906, 0x00000000,
    0x00101c61, 0x2e050230, 0x00443b06, 0x00000000,
    0x00101b61, 0x1b050230, 0x00443706, 0x00000000,
    0x00101b69, 0x29058770, 0x02342705, 0x00000006,
    0x00101b69, 0x30058770, 0x02342e05, 0x00000006,
    0x00101b69, 0x1d058770, 0x02341b05, 0x00000007,
    0x38001940, 0x29001d2b, 0x38001940, 0x30002b32,
    0x04100022, 0x0001c060, 0x00000340, 0x00000338,
    0x00100061, 0x34054770, 0x00000000, 0x00000040,
    0x00100061, 0x3f054770, 0x00000000, 0x0000003f,
    0x00100061, 0x4d054770, 0x00000000, 0x00000058,
    0x38801b40, 0x34030136, 0x38801a40, 0x4d03014f,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x38140000, 0xfb003614, 0x00040000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x510c0000, 0xfb004f14, 0x00000000,
    0xb4008461, 0x0010383c, 0xb4008461, 0x00103941,
    0x00108570, 0x00010220, 0x52461705, 0x00465105,
    0x00101b61, 0x39050230, 0x00443c06, 0x00000000,
    0x00101b61, 0x46050230, 0x00444106, 0x00000000,
    0x00101a69, 0x3b058770, 0x02343905, 0x00000003,
    0x00100069, 0x3d058770, 0x02343905, 0x00000002,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00101b69, 0x48058770, 0x02344605, 0x00000003,
    0x38001b40, 0x3f003b41, 0x38001a40, 0x3f00484a,
    0x38001a40, 0x3d004143, 0x00101a65, 0x4c058220,
    0x02444a06, 0xffffffc0, 0x00101a65, 0x45058220,
    0x02444306, 0xffffffc0, 0x04100022, 0x0001c060,
    0x00000130, 0x00000128, 0x00100040, 0x52058660,
    0x06462d05, 0x000000ff, 0x00100061, 0x54054770,
    0x00000000, 0x00000050, 0x00100069, 0x67058770,
    0x02342e05, 0x00000005, 0x00101b65, 0x53058220,
    0x02465205, 0xffffff00, 0x38801b40, 0x54030156,
    0x38001b40, 0x3f006769, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x580c0000,
    0xfb005614, 0x00000000, 0x00101965, 0x6b058220,
    0x02446906, 0xffffffc0, 0x00108640, 0x59058660,
    0x06465805, 0x000000ff, 0x00101965, 0x5a058220,
    0x02465905, 0xffffff00, 0xac001940, 0x5a00535b,
    0xb4001961, 0x00105b42, 0x00101961, 0x5c050230,
    0x00444206, 0x00000000, 0x00101969, 0x5e058770,
    0x02345c05, 0x00000003, 0x00100069, 0x60058770,
    0x02345c05, 0x00000002, 0x38001a40, 0x3f005e62,
    0x38001940, 0x60006264, 0x00101965, 0x66058220,
    0x02446406, 0xffffffc0, 0xac001940, 0x6b006606,
    0x00100024, 0x0001c060, 0x00000018, 0x00000018,
    0x64801a61, 0x00000006, 0x00100025, 0x00004600,
    0x00000000, 0x000000b0, 0x00100061, 0x6c054770,
    0x00000000, 0x0000000c, 0x38801940, 0x6c03016e,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x700c0000, 0xfb006e14, 0x00000000,
    0x00108740, 0x71058660, 0x06467005, 0xfffffffd,
    0xb4001961, 0x00107143, 0x00101961, 0x72050230,
    0x00444306, 0x00000000, 0x00101969, 0x74058770,
    0x02347205, 0x00000002, 0x38001940, 0x3f007476,
    0x00101965, 0x78058220, 0x02447606, 0xffffffc0,
    0xac001940, 0x45007879, 0x00101952, 0x07040e68,
    0x0e0e7905, 0x06054c05, 0x00100024, 0x0001c060,
    0x00000018, 0x00000018, 0x64801a61, 0x00000007,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x00100061, 0x7d054770, 0x00000000, 0x0000000c,
    0x00100069, 0x11058770, 0x02340b05, 0x00000006,
    0x0010a261, 0x14054770, 0x00000000, 0x000000a4,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x1d054770, 0x00000000, 0x0000003f,
    0x00100061, 0x26054770, 0x00000000, 0x000000ff,
    0x38000040, 0x0f000d2d, 0x64800061, 0x00000005,
    0x00100061, 0x34050770, 0x000001a4, 0x00000000,
    0xb4001f61, 0x00100744, 0x38001f40, 0x01701416,
    0x38801f40, 0x7d030106, 0x00101b61, 0x7a050230,
    0x00444406, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x180c0000,
    0xfb001614, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x080c0000,
    0xfb000614, 0x00000000, 0x38001940, 0x7a00327c,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0xb4008861, 0x00101848, 0x00108940, 0x09058660,
    0x06460805, 0xfffffffd, 0x00101a61, 0x19050230,
    0x00444806, 0x00000000, 0xb4001a61, 0x00100946,
    0x00101a69, 0x1b058770, 0x02341905, 0x00000003,
    0x8000a101, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x0a050230, 0x00444606, 0x00000000,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x1d001b1f, 0x00101a69, 0x0c058770,
    0x02340a05, 0x00000006, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x00101a65, 0x21058220,
    0x02441f06, 0xffffffc0, 0x38001a40, 0x0c007c0e,
    0xb4001a61, 0x00102122, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x11000e13,
    0x00101a61, 0x22160220, 0x00441f16, 0x00000000,
    0x38001940, 0x22001324, 0x38001940, 0x24002628,
    0x00101965, 0x2a058220, 0x02442806, 0xffffffc0,
    0xb4001961, 0x00102a2b, 0x00101961, 0x2b160220,
    0x00442816, 0x00000000, 0x38001940, 0x2b002d2f,
    0x00101961, 0x02050220, 0x00442f06, 0x00000000,
    0x00100061, 0x03050220, 0x00442f16, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010ca31, 0x00000000, 0xfb083414, 0x000c0224,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_postbuild_info_serialized_size = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 1984,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_postbuild_info_serialized_size_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_postbuild_info_serialized_size_printfs,
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
   .args = gfx20_bvh_postbuild_info_serialized_size_args,
   .code = gfx20_bvh_postbuild_info_serialized_size_code,
};
const char *gfx20_bvh_postbuild_info_serialized_size_sha1 = "a180090c7522aa15f61098a23db2a6e3fd09b641";

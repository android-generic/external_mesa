#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g100<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g8<1>Q          0x0000000000000024Q             { align1 1H };
mov(16)         g19<1>Q         0x0000000000000028Q             { align1 1H };
mov(16)         g27<1>Q         0x0000000000000040Q             { align1 1H };
mov(16)         g32<1>Q         0x0000000000000048Q             { align1 1H };
mov(16)         g85<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(1)         g1UD            g100UD          nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g10<1>Q         g1.5<0,1,0>Q    g8<1,1,0>Q      { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g12UD           g10UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g4<1>D          g12<1,1,0>D     g85<1,1,0>D     { align1 1H @2 $1.dst compacted };
mul(16)         acc0<1>UD       g4<8,8,1>UD     0x0058UW        { align1 1H I@1 };
mul(16)         g14<1>D         g4<1,1,0>D      88W             { align1 1H compacted };
mach(16)        g13<1>UD        g4<8,8,1>UD     0x00000058UD    { align1 1H };
mov(16)         g15<2>UD        g14<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g15.1<2>UD      g13<1,1,0>UD                    { align1 1H I@1 compacted };
add(16)         g17<1>Q         g1.4<0,1,0>Q    g15<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g21<1>Q         g17<1,1,0>Q     g19<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g29<1>Q         g17<1,1,0>Q     g27<1,1,0>Q     { align1 1H compacted };
add(16)         g34<1>Q         g17<1,1,0>Q     g32<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g23UD           g21UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g31UD           g29UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g36UD           g34UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g25<2>UD        g23<1,1,0>UD                    { align1 1H $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
add.nz.f0.0(16) g37<1>D         g31<1,1,0>D     -g36<1,1,0>D    { align1 1H $3.dst compacted };
mov(16)         g25.1<2>UD      g24<1,1,0>UD                    { align1 1H @2 $2.dst compacted };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(8)          g39<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g39.8<1>UW      g39<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g38<1>UD        g39<8,8,1>UW                    { align1 1H };
and.z.f0.0(16)  g7<1>UD         g38<8,8,1>UD    0x0000000fUD    { align1 1H I@1 };
mov(16)         g40<1>UD        g7<1,1,0>UD                     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL1              { align1 1H };
mov(16)         g41<1>Q         0x0000000000000004Q             { align1 1H };
add(16)         g43<1>Q         g1.5<0,1,0>Q    g41<1,1,0>Q     { align1 1H I@1 compacted };
mov(1)          g94<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g94<1>UD        g94<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g95<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g95<1>UD        g95<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
and(1)          g95<1>UD        g94<0,1,0>UD    g95<0,1,0>UD    { align1 WE_all 1N I@1 compacted };
mov(1)          g45<1>UD        g95<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cbit(16)        g46<1>UD        g45<0,1,0>UD                    { align1 1H compacted };
mul(16)         g86<1>D         g46<8,8,1>D     g37<16,8,2>UW   { align1 1H I@1 };
mul(16)         g89<1>D         g46<8,8,1>D     g37.1<16,8,2>UW { align1 1H };
add(16)         g86.1<2>UW      g86.1<16,8,2>UW g89<16,8,2>UW   { align1 1H I@1 };
mov(1)          g96<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g96<1>UD        g96<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g47<1>UD        g96<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.z.f0.0(16)  null<1>D        g38<8,8,1>D     g47<0,1,0>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL2              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
send(16)        g5UD            g43UD           g86UD           0x0414058c                0x00000040
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 1, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $5 };

LABEL2:
endif(16)       JIP:  LABEL1                                    { align1 1H };
mov(1)          g97<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g97<1>UD        g97<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g48<1>UD        g97<0,1,0>UD                    { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g48<0,1,0>UD    0x00000002UD    { align1 WE_all 1N @1 $5.dst };
mov(1)          g49<1>UD        g[a0 320]<0,1,0>UD              { align1 WE_all 1N A@1 };
mov(1)          g98<1>UD        mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g98<1>UD        g98<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(1)          g88<1>D         1D                              { align1 WE_all 1N };
mov(1)          g99<1>UD        sr0.2<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g99<1>UD        g99<0,1,0>UD    0xffffffffUD    { align1 WE_all 1N A@1 };
mov(8)          g52<1>UW        0x76543210V                     { align1 WE_all 1Q };
and(1)          g99<1>UD        g98<0,1,0>UD    g99<0,1,0>UD    { align1 WE_all 1N I@2 compacted };
add(8)          g52.8<1>UW      g52<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@2 };
mov(1)          g50<1>UD        g99<0,1,0>UD                    { align1 WE_all 1N I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g51<1>UD        g52<8,8,1>UW                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shl(16)         g53<1>D         -g88<0,1,0>D    g51<8,8,1>UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
and(16)         g54<1>UD        g50<0,1,0>UD    ~g53<8,8,1>D    { align1 1H };
cbit(16)        g55<1>UD        g54<1,1,0>UD                    { align1 1H I@1 compacted };
mul(16)         g56<1>D         g55<8,8,1>D     g37<16,8,2>UW   { align1 1H I@1 };
mul(16)         g90<1>D         g55<8,8,1>D     g37.1<16,8,2>UW { align1 1H };
add(16)         g56.1<2>UW      g56.1<16,8,2>UW g90<16,8,2>UW   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
add(16)         g6<1>D          g49<0,1,0>D     g56<1,1,0>D     { align1 1H compacted };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g57<1>Q         0x000000000000001cQ             { align1 1H };
add(16)         g62<1>D         g6<0,1,0>D      g37<1,1,0>D     { align1 1H I@3 compacted };
add(16)         g59<1>Q         g1.5<0,1,0>Q    g57<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g61UD           g59UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
add(16)         g63<1>D         g61<8,8,1>D     -g6<0,1,0>D     { align1 1H $6.dst };
cmp.ge.f0.0(16) null<1>UD       g62<8,8,1>UD    g61<8,8,1>UD    { align1 1H I@3 };
(+f0.0) sel(16) g64<1>UD        g63<1,1,0>UD    g37<1,1,0>UD    { align1 1H I@2 compacted };
cmp.l.f0.0(16)  null<1>UD       g6<0,1,0>UD     g61<8,8,1>UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
add(16)         g65<1>Q         g1.5<0,1,0>Q    g19<1,1,0>Q     { align1 1H compacted };
mov(16)         g67<1>Q         0x000000000000002cQ             { align1 1H };
add(16)         g69<1>Q         g67<1,1,0>Q     g1.5<0,1,0>Q    { align1 1H I@1 compacted };

LABEL5:
cmp.ge.f0.0(16) null<1>UD       g7<8,8,1>UD     g64<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL4        UIP:  LABEL4              { align1 1H };
add(16)         g71<1>D         g36<1,1,0>D     g7<1,1,0>D      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@6 };
send(16)        g77UD           g65UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov(16)         g91<2>UD        g71<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g72<1>UQ        g91<8,4,2>UD                    { align1 1H I@1 };
shl(16)         g74<1>Q         g72<4,4,1>Q     0x00000003UD    { align1 1H I@1 };
cmp.nz.f0.0(16) null<1>D        g77<8,8,1>D     0D              { align1 1H $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g76<1>Q         g25<1,1,0>Q     g74<1,1,0>Q     { align1 1H I@2 compacted };
(-f0.0) sel(16) g78<1>UD        g61<8,8,1>UD    0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g2UD            g76UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
add3(16)        g79<1>D         g78<8,8,1>D     g6.0<0,1,0>D    g7<1,1,1>D { align1 1H I@1 };
shl(16)         g80<1>D         g79<8,8,1>D     0x00000004UD    { align1 1H I@1 };
mov(16)         g93<2>UD        g80<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g81<1>UQ        g93<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
add(16)         g83<1>Q         g69<1,1,0>Q     g81<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g83UD           g2UD            0x04002584                0x000000c0
                            ugm MsgDesc: ( store, a64, d32, V3, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 3 flat )  base_offset 0  { align1 1H $9 };
add(16)         g7<1>D          g7<8,8,1>D      16D             { align1 1H };

LABEL4:
while(16)       JIP:  LABEL5                                    { align1 1H };
cmp.z.f0.0(16)  null<1>D        g40<8,8,1>D     0D              { align1 1H };
(+f0.0) if(16)  JIP:  LABEL6          UIP:  LABEL6              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
send(16)        g84UD           g34UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
add(16)         g87<1>D         g84<1,1,0>D     g64<1,1,0>D     { align1 1H @4 $10.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g34UD           g87UD           0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $4 };

LABEL6:
endif(16)       JIP:  LABEL3                                    { align1 1H };

LABEL3:
endif(16)       JIP:  LABEL0                                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL7                                    { align1 1H };

LABEL7:
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_code[] = {
    0x80000065, 0x64058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x08054770, 0x00000000, 0x00000024,
    0x00100061, 0x13054770, 0x00000000, 0x00000028,
    0x00100061, 0x1b054770, 0x00000000, 0x00000040,
    0x00100061, 0x20054770, 0x00000000, 0x00000048,
    0x2c800061, 0x00110055, 0x80001e01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00640c, 0x00340000, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x38801d40, 0x0807010a,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x0c0c0000, 0xfb000a14, 0x00000000,
    0xac014140, 0x55000c04, 0x00101941, 0x20018220,
    0x01460405, 0x00580058, 0x68000041, 0x0580040e,
    0x00100049, 0x0d058220, 0x02460405, 0x00000058,
    0xb4001a61, 0x00100e0f, 0xb4001961, 0x00120d0f,
    0x38801940, 0x0f030111, 0x38001940, 0x13001115,
    0x38000040, 0x1b00111d, 0x38000040, 0x20001122,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x17140000, 0xfb001514, 0x00040000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x1f0c0000, 0xfb001d14, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x240c0000, 0xfb002214, 0x00000000,
    0xb4008261, 0x00101719, 0x80008401, 0x00000000,
    0x00000000, 0x00000000, 0xac508340, 0x24201f25,
    0xb4014261, 0x00121819, 0x04100022, 0x0001c060,
    0x000005e0, 0x000005e0, 0x800c0061, 0x27054410,
    0x00000000, 0x76543210, 0x800c1940, 0x27458110,
    0x01462705, 0x00080008, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x26050120,
    0x00462705, 0x00000000, 0x00101965, 0x07058220,
    0x12462605, 0x0000000f, 0x2c001961, 0x00100728,
    0x04100022, 0x0001c060, 0x00000290, 0x00000290,
    0x00100061, 0x29054770, 0x00000000, 0x00000004,
    0x38801940, 0x2907012b, 0xec840961, 0x0010405e,
    0x80000965, 0x5e058220, 0x02005e04, 0xffffffff,
    0xec840961, 0x0016705f, 0x80000965, 0x5f058220,
    0x02005f04, 0xffffffff, 0xe8841965, 0x5f105e5f,
    0x2c841961, 0x00105f2d, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x2c80004d, 0x00102d2e,
    0x00101941, 0x56050660, 0x01462e05, 0x00562506,
    0x00100041, 0x59050660, 0x01462e05, 0x0056250e,
    0x00101940, 0x560e0110, 0x0156560e, 0x00565906,
    0xec840961, 0x00104060, 0x80000965, 0x60058220,
    0x02006004, 0xffffffff, 0x2c84194c, 0x0010602f,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100070, 0x00010660, 0x16462605, 0x00002f04,
    0x04100022, 0x0001c060, 0x00000030, 0x00000030,
    0x80001d01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x050c0000, 0xfb182b14, 0x0100560c,
    0x00100025, 0x00004600, 0x00000000, 0x00000170,
    0xec840961, 0x00104061, 0x80000965, 0x61058220,
    0x02006104, 0xffffffff, 0x2c84194c, 0x00106130,
    0x80012569, 0x10018220, 0x02003004, 0x00000002,
    0x80000961, 0x31050220, 0x00010280, 0x00000000,
    0xec840961, 0x00104062, 0x80000965, 0x62058220,
    0x02006204, 0xffffffff, 0x80000061, 0x58054660,
    0x00000000, 0x00000001, 0xec840961, 0x00167063,
    0x80000965, 0x63058220, 0x02006304, 0xffffffff,
    0x800c0061, 0x34054410, 0x00000000, 0x76543210,
    0xe8841a65, 0x63106263, 0x800c1a40, 0x34458110,
    0x01463405, 0x00080008, 0x2c841a61, 0x00106332,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x33050120, 0x00463405, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100069, 0x35052660, 0x02005804, 0x00463305,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100065, 0x36050220, 0x06003204, 0x02463505,
    0x2c00194d, 0x00103637, 0x00101941, 0x38050660,
    0x01463705, 0x00562506, 0x00100041, 0x5a050660,
    0x01463705, 0x0056250e, 0x00101940, 0x380e0110,
    0x0156380e, 0x00565a06, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xac800040, 0x38003106,
    0x00100025, 0x00004600, 0x00000000, 0x000002e8,
    0x00100061, 0x39054770, 0x00000000, 0x0000001c,
    0xac801b40, 0x2500063e, 0x38801a40, 0x3907013b,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x3d0c0000, 0xfb003b14, 0x00000000,
    0x00108640, 0x3f050660, 0x06463d05, 0x02000604,
    0x00101b70, 0x00010220, 0x42463e05, 0x00463d05,
    0xe8781a62, 0x25003f40, 0x00100070, 0x00010220,
    0x52000604, 0x00463d05, 0x04100022, 0x0001c060,
    0x00000250, 0x00000250, 0x38800040, 0x13070141,
    0x00100061, 0x43054770, 0x00000000, 0x0000002c,
    0x38001940, 0x01604345, 0x00101a70, 0x00010220,
    0x42460705, 0x00464005, 0x04100028, 0x0001c660,
    0x00000168, 0x00000168, 0xac000040, 0x07002447,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x80001e01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x4d0c0000, 0xfb004114, 0x00000000,
    0xb4001961, 0x0010475b, 0x00101961, 0x48050230,
    0x00445b06, 0x00000000, 0x00101969, 0x4a058770,
    0x02344805, 0x00000003, 0x00108770, 0x00018660,
    0x26464d05, 0x00000000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x4a00194c,
    0x14100062, 0x4e058220, 0x02463d05, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c831, 0x02140000, 0xfb004c14, 0x00040000,
    0x00101952, 0x4f040e68, 0x06064e05, 0x07050604,
    0x00101969, 0x50058660, 0x02464f05, 0x00000004,
    0xb4001961, 0x0010505d, 0x00101961, 0x51050230,
    0x00445d06, 0x00000000, 0x8000a901, 0x00000000,
    0x00000000, 0x00000000, 0x38001940, 0x51004553,
    0x80008801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c931, 0x00000000, 0xfb085314, 0x0008021c,
    0x00100040, 0x07058660, 0x06460705, 0x00000010,
    0x00100027, 0x00014060, 0x00000000, 0xfffffe88,
    0x00100070, 0x00018660, 0x16462805, 0x00000000,
    0x04100022, 0x0001c060, 0x00000078, 0x00000078,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x0010ca31, 0x540c0000, 0xfb002214, 0x00000000,
    0xac018a40, 0x40005457, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c431, 0x00000000,
    0xfb082214, 0x0000570c, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x2c100061, 0x0010007e,
    0x80101931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 1952,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_printfs,
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
   .args = gfx20_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_args,
   .code = gfx20_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_code,
};
const char *gfx20_bvh_build_BFS_build_qnodes_try_to_fill_grb_batched_sha1 = "f3a4efe8d47bd7bc60976c6936c9bc3341d06654";

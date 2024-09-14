#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_mock_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_mock_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_mock_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g27<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g18<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g27UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g4<1>UW         0x76543210V                     { align1 WE_all 1Q };
mov(16)         g20<2>UD        g18<1,1,0>UD                    { align1 1H I@2 compacted };
add(8)          g4.8<1>UW       g4<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@2 };
mov(16)         g6<1>UQ         g20<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g3<1>UD         g4<8,8,1>UW                     { align1 1H };
and(16)         g5<1>UD         g3<8,8,1>UD     0x0000000fUD    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g9<1>UQ         g1<0,1,0>UD                     { align1 1H };
shl(16)         g11<1>Q         g9<4,4,1>Q      0x00000004UD    { align1 1H I@1 };
shl(16)         g8<1>Q          g6<4,4,1>Q      0x00000004UD    { align1 1H I@5 };
mov(16)         g24<2>UD        g11<4,4,1>UQ                    { align1 1H I@2 };
mov(16)         g22<2>UD        g8<4,4,1>UQ                     { align1 1H I@2 };
add(16)         g2<1>D          g5<8,8,1>D      g22<8,4,2>D     { align1 1H I@1 };

LABEL1:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.ge.f0.0(16) null<1>UD       g2<8,8,1>UD     g1.12<0,1,0>UD  { align1 1H I@1 };
(+f0.0) break(16) JIP:  LABEL0        UIP:  LABEL0              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g26<2>UD        g2<1,1,0>UD                     { align1 1H compacted };
mov(16)         g12<1>UQ        g26<8,4,2>UD                    { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g14<1>Q         g1.5<0,1,0>Q    g12<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g17<1>Q         g1.4<0,1,0>Q    g12<1,1,0>Q     { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g16UD           g14UD           nullUD          0x04100980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g19<1>UD        g16<32,8,4>UB                   { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g17UD           g19UD           0x04000984                0x00000040
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $2 };
add(16)         g2<1>D          g2<8,8,1>D      g24<8,4,2>D     { align1 1H I@7 };

LABEL0:
while(16)       JIP:  LABEL1                                    { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_mock_code[] = {
    0x80000065, 0x1b058220, 0x02000004, 0xffffffc0,
    0x2c800061, 0x00110012, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa001b0c, 0x00340000, 0x800c0061, 0x04054410,
    0x00000000, 0x76543210, 0xb4001a61, 0x00101214,
    0x800c1a40, 0x04458110, 0x01460405, 0x00080008,
    0x00101a61, 0x06050230, 0x00441406, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x03050120, 0x00460405, 0x00000000,
    0x00101965, 0x05058220, 0x02460305, 0x0000000f,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x09050230, 0x00000104, 0x00000000,
    0x00101969, 0x0b058770, 0x02340905, 0x00000004,
    0x00101d69, 0x08058770, 0x02340605, 0x00000004,
    0x00101a61, 0x18060320, 0x00340b05, 0x00000000,
    0x00101a61, 0x16060320, 0x00340805, 0x00000000,
    0x00101940, 0x02050660, 0x06460505, 0x00441606,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00101970, 0x00010220, 0x42460205, 0x000001c4,
    0x04100028, 0x0001c660, 0x000000d8, 0x000000d8,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0xb4000061, 0x0010021a, 0x00101961, 0x0c050230,
    0x00441a06, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x0c07010e,
    0x3880a240, 0x0c030111, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x100c0000,
    0xf3000e14, 0x00020000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x00108161, 0x13050020,
    0x00661007, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x00000000,
    0xf3081114, 0x0002130c, 0x00101f40, 0x02050660,
    0x06460205, 0x00441806, 0x00100027, 0x00014060,
    0x00000000, 0xffffff08, 0x2c100061, 0x0010007e,
    0x80101931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_mock = {
   .prog_data = {
      .base.nr_params = 13,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 560,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_mock_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_mock_printfs,
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
      .push.cross_thread.dwords = 13,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 20,
   .arg_count = 3,
   .args = gfx20_misc_copy_mock_args,
   .code = gfx20_misc_copy_mock_code,
};
const char *gfx20_misc_copy_mock_sha1 = "821f6c9e4506ec356805561286fc5f3e81730922";

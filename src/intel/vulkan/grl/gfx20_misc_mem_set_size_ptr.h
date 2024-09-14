#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_mem_set_size_ptr_relocs[] = {
};
static const u_printf_info gfx20_misc_mem_set_size_ptr_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_mem_set_size_ptr_args[] = {
   { 0, 8 },
   { 8, 4 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g46<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(32)         g26<1>UD        g0.1<0,1,0>UD                   { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g46UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g4<1>UW         0x76543210V                     { align1 WE_all 1Q };
mov(16)         g34<2>UD        g26<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g36<2>UD        g27<1,1,0>UD                    { align1 2H I@3 compacted };
add(8)          g4.8<1>UW       g4<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@3 };
mov(16)         g6<1>UQ         g36<8,4,2>UD                    { align1 2H I@2 };
add(16)         g4.16<1>UW      g4<16,16,1>UW   0x0010UW        { align1 WE_all 1H I@2 };
shl(16)         g8<1>Q          g6<4,4,1>Q      0x00000005UD    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(32)         g2<1>UD         g4<16,16,1>UW                   { align1 };
mov(16)         g40<2>UD        g8<4,4,1>UQ                     { align1 2H I@2 };
and(32)         g5<1>UD         g2<8,8,1>UD     0x0000001fUD    { align1 I@2 };
mov(16)         g10<1>UD        g40<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g28<1>Q         g1.6<0,1,0>Q                    { align1 1H };
mov(16)         g30<1>Q         g1.6<0,1,0>Q                    { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g14UD           g28UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $1 };
mov(16)         g30<1>UQ        g34<8,4,2>UD                    { align1 1H $1.src };
shl(16)         g32<1>Q         g30<4,4,1>Q     0x00000005UD    { align1 1H I@1 };
mov(16)         g38<2>UD        g32<4,4,1>UQ                    { align1 1H I@1 };
mov(16)         g9<1>UD         g38<8,4,2>UD                    { align1 1H I@1 };
add(32)         g11<1>D         g5<1,1,0>D      g9<1,1,0>D      { align1 I@1 compacted };
mov(16)         g42<2>UD        g11<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g44<2>UD        g12<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g33<1>UQ        g42<8,4,2>UD                    { align1 1H I@2 };
cmp.z.f0.0(32)  g18<1>D         g16<8,8,1>D     0D              { align1 $1.dst };
cmp.l.f0.0(32)  g20<1>UD        g11<8,8,1>UD    g14<8,8,1>UD    { align1 $1.dst };
cmp.g.f0.0(32)  g24<1>UD        g16<8,8,1>UD    0x00000000UD    { align1 };
mov(16)         g12<1>UQ        g44<8,4,2>UD                    { align1 2H I@5 };
and(32)         g22<1>UD        g18<1,1,0>UD    g20<1,1,0>UD    { align1 I@3 compacted };
or.nz.f0.0(32)  null<1>UD       g24<8,8,1>UD    g22<8,8,1>UD    { align1 I@1 };
(+f0.0) if(32)  JIP:  LABEL0          UIP:  LABEL0              { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g25<1>Q         g1.4<0,1,0>Q    g33<1,1,0>Q     { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
add(16)         g27<1>Q         g1.4<0,1,0>Q    g12<1,1,0>Q     { align1 2H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(32)         g45<4>UB        g1.10<0,1,0>UD                  { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(32)         g29<1>UD        g45<32,8,4>UB                   { align1 I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g25UD           g29UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $1 };

LABEL0:
endif(32)       JIP:  LABEL1                                    { align1 };

LABEL1:
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(32)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_mem_set_size_ptr_code[] = {
    0x80000065, 0x2e058220, 0x02000004, 0xffffffc0,
    0x2ca00061, 0x0011001a, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa002e0c, 0x00340000, 0x800c0061, 0x04054410,
    0x00000000, 0x76543210, 0xb4001a61, 0x00101a22,
    0xb4081b61, 0x00101b24, 0x800c1b40, 0x04458110,
    0x01460405, 0x00080008, 0x02101a61, 0x06050230,
    0x00442406, 0x00000000, 0x80101a40, 0x04858110,
    0x01580405, 0x00100010, 0x02101a69, 0x08058770,
    0x02340605, 0x00000005, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00140061, 0x02050120,
    0x00580405, 0x00000000, 0x02101a61, 0x28060320,
    0x00340805, 0x00000000, 0x00141a65, 0x05058220,
    0x02460205, 0x0000001f, 0x02101a61, 0x0a050220,
    0x00442806, 0x00000000, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x1c050770,
    0x000001c4, 0x00000000, 0x02100061, 0x1e050770,
    0x000001c4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c131, 0x0e240000,
    0xfb001c24, 0x00040000, 0x0010a161, 0x1e050230,
    0x00442206, 0x00000000, 0x00101969, 0x20058770,
    0x02341e05, 0x00000005, 0x00101961, 0x26060320,
    0x00342005, 0x00000000, 0x00101961, 0x09050220,
    0x00442606, 0x00000000, 0xac201940, 0x0900050b,
    0xb4001961, 0x00100b2a, 0xb4081a61, 0x00100c2c,
    0x00101a61, 0x21050230, 0x00442a06, 0x00000000,
    0x00148170, 0x12058660, 0x16461005, 0x00000000,
    0x00148170, 0x14050220, 0x52460b05, 0x00460e05,
    0x00140070, 0x18058220, 0x32461005, 0x00000000,
    0x02101d61, 0x0c050230, 0x00442c06, 0x00000000,
    0xe8201b65, 0x14001216, 0x00141966, 0x00010220,
    0x22461805, 0x00461605, 0x04140022, 0x0001c060,
    0x000000a0, 0x000000a0, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x38801f40, 0x21030119,
    0x8200a101, 0x00000000, 0x00000000, 0x00000000,
    0x38881d40, 0x0c03011b, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x00140061, 0x2d070200,
    0x000001a4, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x00141961, 0x1d050020,
    0x00662d07, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c131, 0x00000000,
    0xf3081924, 0x00021d14, 0x00140025, 0x00004600,
    0x00000000, 0x00000010, 0x2c100061, 0x0010007e,
    0x80141931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_misc_mem_set_size_ptr = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 704,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_mem_set_size_ptr_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_mem_set_size_ptr_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 32, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 4,
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
   .args = gfx20_misc_mem_set_size_ptr_args,
   .code = gfx20_misc_mem_set_size_ptr_code,
};
const char *gfx20_misc_mem_set_size_ptr_sha1 = "b1f10e7130e5c54cc95a0ca92f0c7825e945783a";

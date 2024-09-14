#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_mem_set_relocs[] = {
};
static const u_printf_info gfx20_misc_mem_set_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_mem_set_args[] = {
   { 0, 8 },
   { 8, 4 },
   { 12, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g35<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(32)         g19<1>UD        g0.1<0,1,0>UD                   { align1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g35UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g4<1>UW         0x76543210V                     { align1 WE_all 1Q };
mov(16)         g23<2>UD        g19<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g25<2>UD        g20<1,1,0>UD                    { align1 2H I@3 compacted };
add(8)          g4.8<1>UW       g4<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@3 };
mov(16)         g6<1>UQ         g23<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g8<1>UQ         g25<8,4,2>UD                    { align1 2H I@3 };
add(16)         g4.16<1>UW      g4<16,16,1>UW   0x0010UW        { align1 WE_all 1H I@3 };
shl(16)         g10<1>Q         g6<4,4,1>Q      0x00000005UD    { align1 1H I@3 };
shl(16)         g12<1>Q         g8<4,4,1>Q      0x00000005UD    { align1 2H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
mov(32)         g2<1>UD         g4<16,16,1>UW                   { align1 };
mov(16)         g27<2>UD        g10<4,4,1>UQ                    { align1 1H I@3 };
mov(16)         g29<2>UD        g12<4,4,1>UQ                    { align1 2H I@3 };
and(32)         g5<1>UD         g2<8,8,1>UD     0x0000001fUD    { align1 I@3 };
mov(16)         g11<1>UD        g27<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g12<1>UD        g29<8,4,2>UD                    { align1 2H I@3 };
add(32)         g13<1>D         g5<1,1,0>D      g11<1,1,0>D     { align1 I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
cmp.l.f0.0(32)  null<1>UD       g13<8,8,1>UD    g1.11<0,1,0>UD  { align1 I@1 };
(+f0.0) if(32)  JIP:  LABEL0          UIP:  LABEL0              { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(32)         g30<4>UB        g1.10<0,1,0>UD                  { align1 };
mov(16)         g32<2>UD        g13<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $0.src };
mov(16)         g34<2>UD        g14<1,1,0>UD                    { align1 2H compacted };
mov(32)         g22<1>UD        g30<32,8,4>UB                   { align1 I@3 };
mov(16)         g14<1>UQ        g32<8,4,2>UD                    { align1 1H I@3 };
mov(16)         g16<1>UQ        g34<8,4,2>UD                    { align1 2H I@3 };
add(16)         g18<1>Q         g1.4<0,1,0>Q    g14<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g20<1>Q         g1.4<0,1,0>Q    g16<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g18UD           g22UD           0x08000984                0x00000080
                            ugm MsgDesc: ( store, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $1 };

LABEL0:
endif(32)       JIP:  LABEL1                                    { align1 };

LABEL1:
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(32)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_mem_set_code[] = {
    0x80000065, 0x23058220, 0x02000004, 0xffffffc0,
    0x2ca00061, 0x00110013, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00230c, 0x00340000, 0x800c0061, 0x04054410,
    0x00000000, 0x76543210, 0xb4001a61, 0x00101317,
    0xb4081b61, 0x00101419, 0x800c1b40, 0x04458110,
    0x01460405, 0x00080008, 0x00101b61, 0x06050230,
    0x00441706, 0x00000000, 0x02101b61, 0x08050230,
    0x00441906, 0x00000000, 0x80101b40, 0x04858110,
    0x01580405, 0x00100010, 0x00101b69, 0x0a058770,
    0x02340605, 0x00000005, 0x02101b69, 0x0c058770,
    0x02340805, 0x00000005, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x00140061, 0x02050120,
    0x00580405, 0x00000000, 0x00101b61, 0x1b060320,
    0x00340a05, 0x00000000, 0x02101b61, 0x1d060320,
    0x00340c05, 0x00000000, 0x00141b65, 0x05058220,
    0x02460205, 0x0000001f, 0x00101b61, 0x0b050220,
    0x00441b06, 0x00000000, 0x02101b61, 0x0c050220,
    0x00441d06, 0x00000000, 0xac201940, 0x0b00050d,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00141970, 0x00010220, 0x52460d05, 0x000001b4,
    0x04140022, 0x0001c060, 0x000000b0, 0x000000b0,
    0x8200a001, 0x00000000, 0x00000000, 0x00000000,
    0x00140061, 0x1e070200, 0x000001a4, 0x00000000,
    0xb4000061, 0x00100d20, 0x8200a001, 0x00000000,
    0x00000000, 0x00000000, 0xb4080061, 0x00100e22,
    0x00141b61, 0x16050020, 0x00661e07, 0x00000000,
    0x00101b61, 0x0e050230, 0x00442006, 0x00000000,
    0x02101b61, 0x10050230, 0x00442206, 0x00000000,
    0x38801a40, 0x0e030112, 0x38881a40, 0x10030114,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c131, 0x00000000, 0xf3081224, 0x00021614,
    0x00140025, 0x00004600, 0x00000000, 0x00000010,
    0x2c100061, 0x0010007e, 0x80141931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_misc_mem_set = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 560,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_mem_set_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_mem_set_printfs,
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
      .push.cross_thread.dwords = 12,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 16,
   .arg_count = 3,
   .args = gfx20_misc_mem_set_args,
   .code = gfx20_misc_mem_set_code,
};
const char *gfx20_misc_mem_set_sha1 = "d9cdf8f9d4e530580897565740075bc1b9ae3b26";

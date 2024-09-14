#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_build_qnodes_scheduler_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_build_qnodes_scheduler_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_build_qnodes_scheduler_args[] = {
   { 0, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g22<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g2<1>Q          0x000000000000001cQ             { align1 1H };
mov(16)         g7<1>Q          0x0000000000000004Q             { align1 1H };
mov(16)         g21<1>UD        0x00000000UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(1)         g1UD            g22UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g4<1>Q          g1.4<0,1,0>Q    g2<1,1,0>Q      { align1 1H I@3 compacted };
add(16)         g9<1>Q          g1.4<0,1,0>Q    g7<1,1,0>Q      { align1 1H I@3 compacted };
mov(16)         g18<1>Q         g1.4<0,1,0>Q                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g6UD            g4UD            nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g11UD           g9UD            nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sel.l(16)       g20<1>UD        g11<1,1,0>UD    g6<1,1,0>UD     { align1 1H $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g18UD           g20UD           0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g12<1>Q         0x0000000000000028Q             { align1 1H };
add(16)         g14<1>Q         g1.4<0,1,0>Q    g12<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g16UD           g14UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
cmp.nz.f0.0(16) null<1>D        g16<8,8,1>D     0D              { align1 1H $4.dst };
(-f0.0) sel(16) g17<1>UD        g6<8,8,1>UD     0x00000000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g14UD           g17UD           0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_build_qnodes_scheduler_code[] = {
    0x80000065, 0x16058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x02054770, 0x00000000, 0x0000001c,
    0x00100061, 0x07054770, 0x00000000, 0x00000004,
    0x64800061, 0x00000015, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa00160c, 0x00340000, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x38801b40, 0x02030104,
    0x38801b40, 0x07030109, 0x00100061, 0x12050770,
    0x00000184, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x060c0000,
    0xfb000414, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x0b0c0000,
    0xfb000914, 0x00000000, 0x80008101, 0x00000000,
    0x00000000, 0x00000000, 0xe8188262, 0x06000b14,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x00000000, 0xfb081214, 0x00041414,
    0x00100061, 0x0c054770, 0x00000000, 0x00000028,
    0x38801940, 0x0c03010e, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c431, 0x100c0000,
    0xfb000e14, 0x00000000, 0x00108470, 0x00018660,
    0x26461005, 0x00000000, 0x14100062, 0x11058220,
    0x02460605, 0x00000000, 0x8000a401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x00000000,
    0xfb080e14, 0x0000110c, 0x2c100061, 0x0010007e,
    0x80101931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_build_qnodes_scheduler = {
   .prog_data = {
      .base.nr_params = 10,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 416,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_build_qnodes_scheduler_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_build_qnodes_scheduler_printfs,
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
      .push.cross_thread.dwords = 10,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 8,
   .arg_count = 1,
   .args = gfx20_bvh_build_BFS_build_qnodes_scheduler_args,
   .code = gfx20_bvh_build_BFS_build_qnodes_scheduler_code,
};
const char *gfx20_bvh_build_BFS_build_qnodes_scheduler_sha1 = "8bf11bcf81c1bbad06b8fa20619ad83e1f85ac0a";

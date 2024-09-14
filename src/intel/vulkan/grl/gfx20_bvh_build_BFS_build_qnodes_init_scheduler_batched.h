#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_build_qnodes_init_scheduler_batched_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_build_qnodes_init_scheduler_batched_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_build_qnodes_init_scheduler_batched_args[] = {
   { 0, 8 },
   { 8, 4 },
   { 12, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g22<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g2<1>Q          0x0000000000000010Q             { align1 1H };
mov(16)         g7<1>Q          0x0000000000000018Q             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g22UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g4<1>Q          g1.4<0,1,0>Q    g2<1,1,0>Q      { align1 1H I@2 compacted };
add(16)         g9<1>Q          g1.4<0,1,0>Q    g7<1,1,0>Q      { align1 1H I@2 compacted };
mov(16)         g15<1>UD        g1.11<0,1,0>UD                  { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g6UD            g4UD            nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g17<1>D         g6<1,1,0>D      g7<1,1,0>D      { align1 1H $1.dst compacted };
add(16)         g14<1>D         g1.10<0,1,0>D   -g17<1,1,0>D    { align1 1H I@1 compacted };
mov(16)         g16<1>UD        g14<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g9UD            g14UD           0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $2 };
add(16)         g10<1>D         g14<8,8,1>D     15D             { align1 1H $2.src };
mov(16)         g18<1>Q         g1.4<0,1,0>Q                    { align1 1H };
mov(16)         g21<1>UD        g14<1,1,0>UD                    { align1 1H compacted };
shr(16)         g20<1>UD        g10<8,8,1>UD    0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g18UD           g20UD           0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
mov(16)         g11<1>Q         0x0000000000000028Q             { align1 1H };
mov(16)         g21<1>UD        g1.11<0,1,0>UD                  { align1 1H $3.src compacted };
add(16)         g13<1>Q         g1.4<0,1,0>Q    g11<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g13UD           g21UD           0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_build_qnodes_init_scheduler_batched_code[] = {
    0x80000065, 0x16058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x02054770, 0x00000000, 0x00000010,
    0x00100061, 0x07054770, 0x00000000, 0x00000018,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x010c0000, 0xfa00160c, 0x00340000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x02030104, 0x38801a40, 0x07030109,
    0x2c800061, 0x001e010f, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x06140000,
    0xfb000414, 0x00040000, 0xac008140, 0x07000611,
    0xac801940, 0x1127010e, 0x2c001961, 0x00100e10,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x00000000, 0xfb080914, 0x000c0e24,
    0x0010a240, 0x0a058660, 0x06460e05, 0x0000000f,
    0x00100061, 0x12050770, 0x00000184, 0x00000000,
    0x2c000061, 0x00100e15, 0x00101b68, 0x14058220,
    0x02460a05, 0x00000004, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x00000000,
    0xfb081214, 0x00041414, 0x00100061, 0x0b054770,
    0x00000000, 0x00000028, 0x2c80a361, 0x001e0115,
    0x38801a40, 0x0b03010d, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c431, 0x00000000,
    0xfb080d14, 0x0000150c, 0x2c100061, 0x0010007e,
    0x80101931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_build_qnodes_init_scheduler_batched = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 384,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_build_qnodes_init_scheduler_batched_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_build_qnodes_init_scheduler_batched_printfs,
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
   .arg_count = 3,
   .args = gfx20_bvh_build_BFS_build_qnodes_init_scheduler_batched_args,
   .code = gfx20_bvh_build_BFS_build_qnodes_init_scheduler_batched_code,
};
const char *gfx20_bvh_build_BFS_build_qnodes_init_scheduler_batched_sha1 = "99a36bacbd1516f6470dd65e582aea16bcbe902a";

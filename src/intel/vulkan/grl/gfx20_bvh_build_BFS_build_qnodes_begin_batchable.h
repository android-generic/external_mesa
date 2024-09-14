#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_build_qnodes_begin_batchable_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_build_qnodes_begin_batchable_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_build_qnodes_begin_batchable_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g61<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g9<1>Q          0x0000000000000018Q             { align1 1H };
mov(16)         g50<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g61UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g6<1>UW         0x76543210V                     { align1 WE_all 1Q };
mov(16)         g57<2>UD        g50<1,1,0>UD                    { align1 1H I@2 compacted };
add(8)          g6.8<1>UW       g6<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@2 };
mov(16)         g2<1>UQ         g57<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g5<1>UD         g6<8,8,1>UW                     { align1 1H };
and(16)         g7<1>UD         g5<8,8,1>UD     0x0000000fUD    { align1 1H I@1 };
shl(16)         g4<1>Q          g2<4,4,1>Q      0x00000004UD    { align1 1H I@3 };
mov(16)         g59<2>UD        g4<4,4,1>UQ                     { align1 1H I@1 };
add(16)         g8<1>D          g59<8,4,2>D     g7<8,8,1>D      { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g11<1>Q         g1.4<0,1,0>Q    g9<1,1,0>Q      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g13UD           g11UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
cmp.l.f0.0(16)  null<1>UD       g8<8,8,1>UD     g13<8,8,1>UD    { align1 1H @2 $1.dst };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
mov(16)         g14<1>Q         0x0000000000000024Q             { align1 1H };
mov(16)         g19<1>Q         0x000000000000002cQ             { align1 1H };
shl(16)         g23<1>D         g8<8,8,1>D      0x00000004UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g28<1>Q         0x000000000000000cQ             { align1 1H };
mov(16)         g51<1>UD        0x00000000UD                    { align1 1H compacted };
mov(16)         g52<1>UD        0x00000000UD                    { align1 1H compacted };
mov(16)         g54<1>UD        0x00000001UD                    { align1 1H compacted };
add(16)         g16<1>Q         g1.4<0,1,0>Q    g14<1,1,0>Q     { align1 1H I@7 compacted };
add(16)         g21<1>Q         g19<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g60<2>UD        g23<1,1,0>UD                    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g18UD           g16UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mov(16)         g24<1>UQ        g60<8,4,2>UD                    { align1 1H I@1 };
add(16)         g26<1>Q         g21<1,1,0>Q     g24<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g53<1>D         g18<1,1,0>D     g8<1,1,0>D      { align1 1H $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g26UD           g51UD           0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $3 };
mul(16)         acc0<1>UD       g53<8,8,1>UD    0x0058UW        { align1 1H $3.src };
mul(16)         g31<1>D         g53<1,1,0>D     88W             { align1 1H compacted };
mov(16)         g36<1>Q         0x0000000000000040Q             { align1 1H };
mov(16)         g55<1>UD        0x00000000UD                    { align1 1H compacted };
mov(16)         g56<1>UD        0x00000000UD                    { align1 1H compacted };
mov(16)         g57<1>UD        0x00000000UD                    { align1 1H compacted };
mov(16)         g58<1>UD        0x00000000UD                    { align1 1H compacted };
mach(16)        g30<1>UD        g53<8,8,1>UD    0x00000058UD    { align1 1H };
mov(16)         g32<2>UD        g31<1,1,0>UD                    { align1 1H I@7 compacted };
mov(16)         g32.1<2>UD      g30<1,1,0>UD                    { align1 1H I@1 compacted };
add(16)         g34<1>Q         g1.5<0,1,0>Q    g32<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g38<1>Q         g34<1,1,0>Q     g36<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g38UD           g55UD           0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $4 };
mov(16)         g39<1>Q         0x0000000000000020Q             { align1 1H $4.src };
add(16)         g41<1>Q         g34<1,1,0>Q     g39<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g43UD           g41UD           nullUD          0x04201580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 2, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g45<2>UD        g43<1,1,0>UD                    { align1 1H $5.dst compacted };
mov(16)         g45.1<2>UD      g44<1,1,0>UD                    { align1 1H @1 $5.dst compacted };
add(16)         g47<1>Q         g45<1,1,0>Q     g28<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g49UD           g47UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g56<1>D         g49<8,8,1>D     1D              { align1 1H $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g47UD           g56UD           0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $7 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_build_qnodes_begin_batchable_code[] = {
    0x80000065, 0x3d058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x09054770, 0x00000000, 0x00000018,
    0x2c800061, 0x00110032, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa003d0c, 0x00340000, 0x800c0061, 0x06054410,
    0x00000000, 0x76543210, 0xb4001a61, 0x00103239,
    0x800c1a40, 0x06458110, 0x01460605, 0x00080008,
    0x00101a61, 0x02050230, 0x00443906, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x05050120, 0x00460605, 0x00000000,
    0x00101965, 0x07058220, 0x02460505, 0x0000000f,
    0x00101b69, 0x04058770, 0x02340205, 0x00000004,
    0x00101961, 0x3b060320, 0x00340405, 0x00000000,
    0x00101940, 0x08050660, 0x06443b06, 0x00460705,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38800040, 0x0903010b, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x0d0c0000,
    0xfb000b14, 0x00000000, 0x00114170, 0x00010220,
    0x52460805, 0x00460d05, 0x04100022, 0x0001c060,
    0x00000258, 0x00000258, 0x00100061, 0x0e054770,
    0x00000000, 0x00000024, 0x00100061, 0x13054770,
    0x00000000, 0x0000002c, 0x00100069, 0x17058660,
    0x02460805, 0x00000004, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x00100061, 0x1c054770,
    0x00000000, 0x0000000c, 0x64800061, 0x00000033,
    0x64800061, 0x00000034, 0x64800061, 0x00100036,
    0x38801f40, 0x0e030110, 0x38001f40, 0x01701315,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0xb4001f61, 0x0010173c, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x120c0000,
    0xfb001014, 0x00000000, 0x00101961, 0x18050230,
    0x00443c06, 0x00000000, 0x38001940, 0x1800151a,
    0xac008240, 0x08001235, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x00000000,
    0xfb081a14, 0x000c3324, 0x0010a341, 0x20018220,
    0x01463505, 0x00580058, 0x68000041, 0x0580351f,
    0x00100061, 0x24054770, 0x00000000, 0x00000040,
    0x64800061, 0x00000037, 0x64800061, 0x00000038,
    0x64800061, 0x00000039, 0x64800061, 0x0000003a,
    0x00100049, 0x1e058220, 0x02463505, 0x00000058,
    0xb4001f61, 0x00101f20, 0xb4001961, 0x00121e20,
    0x38801940, 0x20070122, 0x38001940, 0x24002226,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x00000000, 0xfb082614, 0x000c3724,
    0x0010a461, 0x27054770, 0x00000000, 0x00000020,
    0x38001940, 0x27002229, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x2b140000,
    0xfb002914, 0x00040000, 0xb4008561, 0x00102b2d,
    0xb4012561, 0x00122c2d, 0x38001940, 0x1c002d2f,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x310c0000, 0xfb002f14, 0x00000000,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x00108640, 0x38058660, 0x06463105, 0x00000001,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x00000000, 0xfb082f14, 0x0000380c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_build_qnodes_begin_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 944,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_build_qnodes_begin_batchable_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_build_qnodes_begin_batchable_printfs,
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
   .args = gfx20_bvh_build_BFS_build_qnodes_begin_batchable_args,
   .code = gfx20_bvh_build_BFS_build_qnodes_begin_batchable_code,
};
const char *gfx20_bvh_build_BFS_build_qnodes_begin_batchable_sha1 = "43e1968de0e673701553a1abbd96dc36fa552c9e";

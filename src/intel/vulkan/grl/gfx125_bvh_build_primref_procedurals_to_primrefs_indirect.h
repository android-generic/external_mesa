#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g54<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g4<1>UD         g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g54UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g55<1>UD        g54<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g36<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g32<1>D         g4<8,8,1>D      0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g55UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g36.8<1>UW      g36<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g105<1>UD       g36<8,8,1>UW                    { align1 1H };
add(16)         g37<1>D         g32<1,1,0>D     g105<1,1,0>D    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g6.1<2>D        g3.1<0,1,0>D                    { align1 1Q };
mov(8)          g8.1<2>D        g3.1<0,1,0>D                    { align1 2Q };
and(16)         g28<1>UD        g3.2<0,1,0>UD   0x00ffffffUD    { align1 1H };
mov(16)         g30<1>UD        g3.11<0,1,0>UB                  { align1 1H };
mov(8)          g6<2>D          g3<0,1,0>D                      { align1 1Q I@4 };
mov(8)          g8<2>D          g3<0,1,0>D                      { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g26UD           g6UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g37<8,8,1>UD    g26<8,8,1>UD    { align1 1H @7 $2.dst };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
and(1)          g73<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g74<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g7.1<2>D        g2.7<0,1,0>D                    { align1 1Q $2.src };
mov(8)          g9.1<2>D        g2.7<0,1,0>D                    { align1 2Q $2.src };
mov(8)          g7<2>D          g2.6<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g9<2>D          g2.6<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g39UD           g7UD            nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mul(8)          acc0<1>UD       g37<8,8,1>UD    g43<16,8,2>UW   { align1 1Q $3.dst };
mul(16)         g49<1>D         g37<8,8,1>D     g43<16,8,2>UW   { align1 1H $3.dst };
mul(16)         g70<1>D         g37<8,8,1>D     g43.1<16,8,2>UW { align1 1H };
mul(16)         g51<1>D         g37<8,8,1>D     g45<16,8,2>UW   { align1 1H $3.dst };
mul(16)         g76<1>D         g37<8,8,1>D     g45.1<16,8,2>UW { align1 1H };
mach(8)         g47<1>UD        g37<1,1,0>UD    g43<1,1,0>UD    { align1 1Q compacted AccWrEnable };
add(16)         g49.1<2>UW      g49.1<16,8,2>UW g70<16,8,2>UW   { align1 1H I@4 };
add(16)         g51.1<2>UW      g51.1<16,8,2>UW g76<16,8,2>UW   { align1 1H I@3 };
mul(8)          acc0<1>UD       g38<8,8,1>UD    g44<16,8,2>UW   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g55<1>D         g39<1,1,0>D     g49<1,1,0>D     { align1 1H @3 $3.dst compacted };
mach(8)         g48<1>UD        g38<8,8,1>UD    g44<8,8,1>UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g39<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g61<2>UD        g55<4,4,1>UD                    { align1 1Q };
mov(8)          g63<2>UD        g56<4,4,1>UD                    { align1 2Q };
add(16)         g53<1>D         g47<1,1,0>D     g51<1,1,0>D     { align1 1H I@4 compacted };
add3(16)        g59<1>D         g41<8,8,1>D     g53<8,8,1>D     -g57<1,1,1>D { align1 1H @1 $3.dst };
mov(8)          g61.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g63.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g65UD           g61UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
or(1)           a0.1<1>UD       g73<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g74UD           g65UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g76<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g77<1>UD        g74<1,1,0>UD    0x00000040UD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g76<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g77UD           g67UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g78<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
or(16)          g79<1>UD        g74<1,1,0>UD    0x00000080UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g78<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g79UD           g69UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
and(1)          g80<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
or(16)          g81<1>UD        g74<1,1,0>UD    0x000000c0UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g80<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g81UD           g71UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
add(16)         g82<1>D         g55<1,1,0>D     16D             { align1 1H $8.src compacted };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g97<1>UD        g74<1,1,0>UD    0x00000100UD    { align1 1H compacted };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g88<2>UD        g82<4,4,1>UD                    { align1 1Q };
mov(8)          g90<2>UD        g83<4,4,1>UD                    { align1 2Q };
add(16)         g86<1>D         -g84<1,1,0>D    g59<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g88.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g90.1<2>UD      g87<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g92UD           g88UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g97UD           g92UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
and(1)          g98<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
or(16)          g99<1>UD        g74<1,1,0>UD    0x00000140UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g98<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g99UD           g94UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
cmp.l.f0.0(16)  g103<1>F        (abs)g67<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.l(16)       g7<1>F          g67<1,1,0>F     g92<1,1,0>F     { align1 1H $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(16)       g15<1>F         g69<1,1,0>F     g94<1,1,0>F     { align1 1H $7.src compacted };
sel.ge(16)      g19<1>F         g67<1,1,0>F     g92<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g21<1>F         g69<1,1,0>F     g94<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g101UD          g74UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
cmp.l.f0.0(16)  g34<1>F         (abs)g101<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $12.dst compacted };
sel.l(16)       g125<1>F        g101<1,1,0>F    g71<1,1,0>F     { align1 1H $8.src compacted };
sel.ge(16)      g17<1>F         g101<1,1,0>F    g71<1,1,0>F     { align1 1H compacted };
cmp.l.f0.0(16)  g109<1>F        (abs)g69<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g113<1>F        (abs)g92<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g107<1>UD       g103<1,1,0>UD   g34<1,1,0>UD    { align1 1H F@5 compacted };
cmp.l.f0.0(16)  g115<1>F        (abs)g71<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g119<1>F        (abs)g94<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g111<1>UD       g107<1,1,0>UD   g109<1,1,0>UD   { align1 1H A@1 compacted };
and(16)         g117<1>UD       g113<1,1,0>UD   g115<1,1,0>UD   { align1 1H F@2 compacted };
and(16)         g121<1>UD       g117<1,1,0>UD   g119<1,1,0>UD   { align1 1H A@1 compacted };
and.nz.f0.0(16) g123<1>UD       g111<1,1,0>UD   g121<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
(+f0.0) sel(16) g9<1>UD         g17<8,8,1>UD    0xff800000UD    { align1 1H F@5 };
(+f0.0) sel(16) g11<1>UD        g19<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g13<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g3<1>UD         g125<8,8,1>UD   0x7f800000UD    { align1 1H F@6 };
(+f0.0) sel(16) g5<1>UD         g7<8,8,1>UD     0x7f800000UD    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g77<2>W         -g123<8,8,1>D                   { align1 1H I@6 };
(+f0.0) sel(16) g7<1>UD         g15<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(16)         g24<1>UW        g77<16,8,2>UW                   { align1 1H I@2 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g24<1>UW        0x0000UW                        { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g7<1>UD         0x7f800000UD                    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g5<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g3<1>UD         0x7f800000UD                    { align1 1H I@6 };
mov(16)         g13<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g11<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g9<1>UD         0xff800000UD                    { align1 1H $2.src };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
and(16)         g22<1>UW        g24<1,1,0>UW    0x0001UW        { align1 1H I@3 compacted };
mov(16)         g23<1>W         g22<32,16,2>B                   { align1 1H I@1 };
cmp.nz.f0.0(16) g39<1>W         g23<16,16,1>W   0W              { align1 1H I@1 };
mov(16)         g32<1>D         g39<8,8,1>W                     { align1 1H I@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g32<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g40<1>UD        f0<0,1,0>UW                     { align1 1H };
bfi1(16)        g42<1>UD        g105<8,8,1>D    0D              { align1 1H };
cbit(16)        g15<1>UD        g40<8,8,1>UD                    { align1 1H I@2 };
cmp.z.f0.0(16)  null<1>D        g105<8,8,1>D    0D              { align1 1H };
and(16)         g44<1>UD        g40<1,1,0>UD    g42<1,1,0>UD    { align1 1H I@3 compacted };
cbit(16)        g46<1>UD        g44<8,8,1>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g48<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g50<1>UD        g48<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g54<2>UD        g48<4,4,1>UD                    { align1 1Q };
mov(8)          g56<2>UD        g49<4,4,1>UD                    { align1 2Q };
add(16)         g52<1>D         -g50<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g54.1<2>UD      g52<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g56.1<2>UD      g53<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g54UD           g15UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g55<1>D         g46<1,1,0>D     g25<0,1,0>D     { align1 1H I@3 compacted };
mov.nz.f0.0(16) null<1>D        g32<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
and(1)          g57<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $1.src };
shl(16)         g58<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H };
and(1)          g62<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g60<1>UD        g58<1,1,0>UD    0x000002c0UD    { align1 1H I@2 compacted };
or(16)          g63<1>UD        g58<1,1,0>UD    0x00000200UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g57<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g16UD           g60UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g62<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g63UD           g3UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
and(1)          g65<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
or(16)          g66<1>UD        g58<1,1,0>UD    0x00000240UD    { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g65<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g66UD           g5UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
and(1)          g68<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
or(16)          g69<1>UD        g58<1,1,0>UD    0x00000280UD    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g68<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g69UD           g7UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
and(1)          g71<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g71<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g60UD           g16UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
and(1)          g72<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
or(16)          g73<1>UD        g58<1,1,0>UD    0x000003c0UD    { align1 1H $12.src compacted };
and(1)          g75<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(16)          g76<1>UD        g58<1,1,0>UD    0x00000300UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g72<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g17UD           g73UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g75<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g76UD           g9UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
and(1)          g78<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g79<1>UD        g58<1,1,0>UD    0x00000340UD    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g78<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g79UD           g11UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
and(1)          g81<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
or(16)          g82<1>UD        g58<1,1,0>UD    0x00000380UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g81<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g82UD           g13UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g84<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g84<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g73UD           g17UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
shl(16)         g85<1>D         g30<8,8,1>D     0x0000001dUD    { align1 1H };
and(1)          g87<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g88<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
and(1)          g90<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g87<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g18UD           g63UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g88<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g20UD           g66UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g89<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g22UD           g69UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g90<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g63UD           g18UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
and(1)          g91<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g91<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g66UD           g20UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
and(1)          g92<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g92<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g69UD           g22UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
and(1)          g93<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g93<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g60UD           g28UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
or(16)          g94<1>UD        g37<1,1,0>UD    g85<1,1,0>UD    { align1 1H A@1 compacted };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
and(1)          g98<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g99<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g29<1>UD        g94<8,8,1>UD                    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g31UD           g76UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g37UD           g79UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g98<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g39UD           g82UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g23<1>UD        g31<8,8,1>UD                    { align1 1H $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(16)         g25<1>UD        g37<8,8,1>UD                    { align1 1H $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g27<1>UD        g39<8,8,1>UD                    { align1 1H $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g99<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g76UD           g31UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g79UD           g37UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
and(1)          g101<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g101<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g82UD           g39UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
and(1)          g102<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g102<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g73UD           g94UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
shl(16)         g103<1>D        g55<8,8,1>D     0x00000005UD    { align1 1H };
shr(16)         g34<1>UD        g55<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g118<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g119<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g120<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g107<1>D        g2.4<0,1,0>D    g103<1,1,0>D    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g117<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g15UD           g63UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g118<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g17UD           g66UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g119<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g19UD           g69UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g120<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g21UD           g60UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g113<2>UD       g107<4,4,1>UD                   { align1 1Q };
mov(8)          g115<2>UD       g108<4,4,1>UD                   { align1 2Q };
add3(16)        g111<1>D        g2.5<0,1,0>D    g34<8,8,1>D     -g109<1,1,1>D { align1 1H I@3 };
mov(8)          g113.1<2>UD     g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g115.1<2>UD     g112<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g113UD          g15UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g121<1>D        g107<1,1,0>D    16D             { align1 1H compacted };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g107<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g15<2>UD        g121<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g17<2>UD        g122<4,4,1>UD                   { align1 2Q $3.src };
add(16)         g125<1>D        -g123<1,1,0>D   g111<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g15.1<2>UD      g125<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g17.1<2>UD      g126<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g15UD           g23UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g16<1>F         g3<1,1,0>F      g9<1,1,0>F      { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g18<1>F         g5<1,1,0>F      g11<1,1,0>F     { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g20<1>F         g7<1,1,0>F      g13<1,1,0>F     { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.ge.f0.0(16) g22<1>F         g9<1,1,0>F      g3<1,1,0>F      { align1 1H $3.src compacted };
mov(16)         g47<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g47<1>F         g3<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
and(1)          g42<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g43<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g24<1>UD        g16<8,8,1>UD    0x7f800000UD    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g80<2>UD        g47.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
or(16)          g45<1>UD        g43<1,1,0>UD    0x00000580UD    { align1 1H I@3 compacted };
cmp.ge.f0.0(16) g26<1>F         g11<1,1,0>F     g5<1,1,0>F      { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(8)        g78<2>F         g47<8,4,2>F     g80<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g28<1>UD        g18<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
mov(8)          g47.1<2>UD      g78<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.ge.f0.0(16) g30<1>F         g13<1,1,0>F     g7<1,1,0>F      { align1 1H $1.src compacted };
mov(4)          g84<4>UD        g47.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g86<4>UD        g47.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
(+f0.0) sel(16) g32<1>UD        g20<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.l(4)        g82<4>F         g84<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) null<1>D        g22<8,8,1>D     0D              { align1 1H F@6 };
mov(4)          g47.2<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g36<1>UD        g16<8,8,1>UD    0xff800000UD    { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(4)          g90<4>UD        g47.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g92<4>UD        g47.3<8,2,4>UD                  { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>D        g26<8,8,1>D     0D              { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g88<4>F         g90<8,2,4>F     g92<8,2,4>F     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g38<1>UD        g18<8,8,1>UD    0xff800000UD    { align1 1H $7.src };
mov(4)          g47.3<4>UD      g88<8,2,4>UD                    { align1 WE_all 1N F@1 };
cmp.nz.f0.0(16) null<1>D        g30<8,8,1>D     0D              { align1 1H F@3 };
sel.l(4)        g47.4<1>F       g47.3<0,1,0>F   g47.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g48.4<1>F       g48.3<0,1,0>F   g48.4<4,4,1>F   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g40<1>UD        g20<8,8,1>UD    0xff800000UD    { align1 1H $1.src };
sel.l(8)        g48<1>F         g47.7<0,1,0>F   g48<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g49<1>UD        g48.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g42<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g45UD           g49UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
mov(16)         g78<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g78<1>F         g5<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
and(1)          g47<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
or(16)          g48<1>UD        g43<1,1,0>UD    0x000005c0UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g95<2>UD        g78.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(8)        g93<2>F         g78<8,4,2>F     g95<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g78.1<2>UD      g93<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g99<4>UD        g78.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g101<4>UD       g78.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.l(4)        g97<4>F         g99<8,2,4>F     g101<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g78.2<4>UD      g97<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g34<4>UD        g78.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g107<4>UD       g78.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g103<4>F        g34<8,2,4>F     g107<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g78.3<4>UD      g103<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g79<1>F         g78.7<0,1,0>F   g79<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g50<1>UD        g79.7<0,1,0>UD                  { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g47<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g48UD           g50UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
mov(16)         g80<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g80<1>F         g7<1,1,0>F                      { align1 1H compacted };
and(1)          g49<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
or(16)          g50<1>UD        g43<1,1,0>UD    0x00000600UD    { align1 1H $5.src compacted };
mov(8)          g110<2>UD       g80.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.l(8)        g108<2>F        g80<8,4,2>F     g110<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g80.1<2>UD      g108<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g114<4>UD       g80.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g116<4>UD       g80.2<8,2,4>UD                  { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.l(4)        g112<4>F        g114<8,2,4>F    g116<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g80.2<4>UD      g112<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g120<4>UD       g80.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g122<4>UD       g80.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g118<4>F        g120<8,2,4>F    g122<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g80.3<4>UD      g118<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g80.4<1>F       g80.3<0,1,0>F   g80.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g81.4<1>F       g81.3<0,1,0>F   g81.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g81<1>F         g80.7<0,1,0>F   g81<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g52<1>UD        g81.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g49<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g50UD           g52UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
mov(16)         g82<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g82<1>F         g9<1,1,0>F                      { align1 1H compacted };
and(1)          g51<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
or(16)          g52<1>UD        g43<1,1,0>UD    0x00000640UD    { align1 1H $6.src compacted };
mov(8)          g125<2>UD       g82.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g123<2>F        g82<8,4,2>F     g125<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g82.1<2>UD      g123<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g5<4>UD         g82.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g7<4>UD         g82.2<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.ge(4)       g3<4>F          g5<8,2,4>F      g7<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g82.2<4>UD      g3<8,2,4>UD                     { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g15<4>UD        g82.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g17<4>UD        g82.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g9<4>F          g15<8,2,4>F     g17<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g82.3<4>UD      g9<8,2,4>UD                     { align1 WE_all 1N F@1 };
sel.ge(4)       g82.4<1>F       g82.3<0,1,0>F   g82.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g83.4<1>F       g83.3<0,1,0>F   g83.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g83<1>F         g82.7<0,1,0>F   g83<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g54<1>UD        g83.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g51<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g52UD           g54UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
mov(16)         g89<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g89<1>F         g11<1,1,0>F                     { align1 1H compacted };
and(1)          g54<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(16)          g55<1>UD        g43<1,1,0>UD    0x00000680UD    { align1 1H $12.src compacted };
mov(8)          g20<2>UD        g89.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g18<2>F         g89<8,4,2>F     g20<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g89.1<2>UD      g18<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g26<4>UD        g89.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g30<4>UD        g89.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g22<4>F         g26<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g89.2<4>UD      g22<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g49<4>UD        g89.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g57<4>UD        g89.3<8,2,4>UD                  { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g47<4>F         g49<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g89.3<4>UD      g47<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g89.4<1>F       g89.3<0,1,0>F   g89.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g90.4<1>F       g90.3<0,1,0>F   g90.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g90<1>F         g89.7<0,1,0>F   g90<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g57<1>UD        g90.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g54<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g55UD           g57UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
mov(16)         g91<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g91<1>F         g13<1,1,0>F                     { align1 1H compacted };
and(1)          g56<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
or(16)          g57<1>UD        g43<1,1,0>UD    0x000006c0UD    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g61<2>UD        g91.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(8)       g59<2>F         g91<8,4,2>F     g61<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g91.1<2>UD      g59<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g65<4>UD        g91.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g67<4>UD        g91.2<8,2,4>UD                  { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g63<4>F         g65<8,2,4>F     g67<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g91.2<4>UD      g63<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g71<4>UD        g91.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g73<4>UD        g91.3<8,2,4>UD                  { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(4)       g69<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g91.3<4>UD      g69<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g91.4<1>F       g91.3<0,1,0>F   g91.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g92.4<1>F       g92.3<0,1,0>F   g92.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g92<1>F         g91.7<0,1,0>F   g92<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g59<1>UD        g92.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g56<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g57UD           g59UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g58<1>D         g2.2<0,1,0>D    128D            { align1 1H $12.src compacted };
shl(16)         g63<1>D         g105<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
shr(16)         g65<1>UD        g105<1,1,0>UD   0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
cmp.l.f0.0(16)  g60<1>UD        g58<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H $12.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add(16)         g67<1>D         g58<1,1,0>D     g63<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add(16)         g62<1>D         -g60<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
cmp.l.f0.0(16)  g69<1>UD        g67<1,1,0>UD    g58<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
mov(8)          g73<2>UD        g67<4,4,1>UD                    { align1 1Q };
mov(8)          g75<2>UD        g68<4,4,1>UD                    { align1 2Q $12.src };
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
add3(16)        g71<1>D         g62<8,8,1>D     g65<8,8,1>D     -g69<1,1,1>D { align1 1H };
mov(8)          g73.1<2>UD      g71<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g75.1<2>UD      g72<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
and(1)          g77<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
or(1)           a0.1<1>UD       g77<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $4.src };
send(16)        g60UD           g45UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
(+f0.0) sel(16) g60<1>UD        g79.7<0,1,0>UD  g81.7<0,1,0>UD  { align1 1H A@6 };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g73UD           g60UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g78<1>D         g67<1,1,0>D     12D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g80<1>UD        g78<1,1,0>UD    g67<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   0x00000001UD    { align1 1H };
mov(8)          g84<2>UD        g78<4,4,1>UD                    { align1 1Q };
mov(8)          g86<2>UD        g79<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g82<1>D         -g80<1,1,0>D    g71<1,1,0>D     { align1 1H compacted };
mov(8)          g84.1<2>UD      g82<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g86.1<2>UD      g83<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL11         UIP:  LABEL10             { align1 1H };
and(1)          g88<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
or(1)           a0.1<1>UD       g88<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $12.src };
send(16)        g61UD           g52UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
else(16)        JIP:  LABEL10         UIP:  LABEL10             { align1 1H };

LABEL11:
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
(+f0.0) sel(16) g61<1>UD        g90.7<0,1,0>UD  g92.7<0,1,0>UD  { align1 1H F@6 };

LABEL10:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g84UD           g61UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL7:
endif(16)       JIP:  LABEL12                                   { align1 1H };

LABEL12:
mov(16)         g92<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@3 compacted };
mov(16)         g92<1>F         g24<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
or(16)          g90<1>UD        g43<1,1,0>UD    0x00000400UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g76<2>UD        g92.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(8)        g74<2>F         g92<8,4,2>F     g76<8,4,2>F     { align1 WE_all 1Q A@1 };
mov(8)          g92.1<2>UD      g74<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g80<4>UD        g92.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g82<4>UD        g92.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g78<4>F         g80<8,2,4>F     g82<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g92.2<4>UD      g78<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g86<4>UD        g92.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g94<4>UD        g92.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g84<4>F         g86<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g92.3<4>UD      g84<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g92.4<1>F       g92.3<0,1,0>F   g92.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g93.4<1>F       g93.3<0,1,0>F   g93.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g93<1>F         g92.7<0,1,0>F   g93<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g62<1>UD        g93.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g89<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g90UD           g62UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
mov(16)         g118<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g118<1>F        g28<1,1,0>F                     { align1 1H compacted };
and(1)          g92<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
or(16)          g93<1>UD        g43<1,1,0>UD    0x00000440UD    { align1 1H compacted };
mov(8)          g97<2>UD        g118.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g95<2>F         g118<8,4,2>F    g97<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g118.1<2>UD     g95<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g101<4>UD       g118.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g103<4>UD       g118.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g99<4>F         g101<8,2,4>F    g103<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g118.2<4>UD     g99<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g107<4>UD       g118.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g109<4>UD       g118.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g34<4>F         g107<8,2,4>F    g109<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g118.3<4>UD     g34<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g118.4<1>F      g118.3<0,1,0>F  g118.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g119.4<1>F      g119.3<0,1,0>F  g119.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g119<1>F        g118.7<0,1,0>F  g119<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g63<1>UD        g119.7<0,1,0>UD                 { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g92<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g93UD           g63UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
mov(16)         g120<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g120<1>F        g32<1,1,0>F                     { align1 1H compacted };
and(1)          g94<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
or(16)          g95<1>UD        g43<1,1,0>UD    0x00000480UD    { align1 1H compacted };
mov(8)          g112<2>UD       g120.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g110<2>F        g120<8,4,2>F    g112<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g120.1<2>UD     g110<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g116<4>UD       g120.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g122<4>UD       g120.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g114<4>F        g116<8,2,4>F    g122<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g120.2<4>UD     g114<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g126<4>UD       g120.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g3<4>UD         g120.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g124<4>F        g126<8,2,4>F    g3<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g120.3<4>UD     g124<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g120.4<1>F      g120.3<0,1,0>F  g120.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g121.4<1>F      g121.3<0,1,0>F  g121.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g121<1>F        g120.7<0,1,0>F  g121<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g64<1>UD        g121.7<0,1,0>UD                 { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g94<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g95UD           g64UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
mov(16)         g122<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g122<1>F        g36<1,1,0>F                     { align1 1H compacted };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(16)          g97<1>UD        g43<1,1,0>UD    0x000004c0UD    { align1 1H compacted };
mov(8)          g6<2>UD         g122.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g4<2>F          g122<8,4,2>F    g6<8,4,2>F      { align1 WE_all 1Q I@1 };
mov(8)          g122.1<2>UD     g4<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(4)          g10<4>UD        g122.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g12<4>UD        g122.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g8<4>F          g10<8,2,4>F     g12<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g122.2<4>UD     g8<8,2,4>UD                     { align1 WE_all 1N F@1 };
mov(4)          g16<4>UD        g122.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g18<4>UD        g122.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g14<4>F         g16<8,2,4>F     g18<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g122.3<4>UD     g14<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g122.4<1>F      g122.3<0,1,0>F  g122.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g123.4<1>F      g123.3<0,1,0>F  g123.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g123<1>F        g122.7<0,1,0>F  g123<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g65<1>UD        g123.7<0,1,0>UD                 { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g97UD           g65UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
mov(16)         g3<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H I@7 compacted };
mov(16)         g3<1>F          g38<1,1,0>F                     { align1 1H compacted };
and(1)          g99<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g100<1>UD       g43<1,1,0>UD    0x00000500UD    { align1 1H compacted };
mov(8)          g21<2>UD        g3.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.ge(8)       g19<2>F         g3<8,4,2>F      g21<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g3.1<2>UD       g19<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g25<4>UD        g3.1<8,2,4>UD                   { align1 WE_all 1N I@1 };
mov(4)          g27<4>UD        g3.2<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g23<4>F         g25<8,2,4>F     g27<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g3.2<4>UD       g23<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g31<4>UD        g3.1<8,2,4>UD                   { align1 WE_all 1N I@1 };
mov(4)          g36<4>UD        g3.3<8,2,4>UD                   { align1 WE_all 1N F@7 };
sel.ge(4)       g29<4>F         g31<8,2,4>F     g36<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g3.3<4>UD       g29<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g3.4<1>F        g3.3<0,1,0>F    g3.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.ge(4)       g4.4<1>F        g4.3<0,1,0>F    g4.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.ge(8)       g4<1>F          g3.7<0,1,0>F    g4<8,8,1>F      { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g66<1>UD        g4.7<0,1,0>UD                   { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g99<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g100UD          g66UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
mov(16)         g5<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g5<1>F          g40<1,1,0>F                     { align1 1H compacted };
and(1)          g101<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(16)          g102<1>UD       g43<1,1,0>UD    0x00000540UD    { align1 1H compacted };
mov(8)          g39<2>UD        g5.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.ge(8)       g37<2>F         g5<8,4,2>F      g39<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g5.1<2>UD       g37<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g45<4>UD        g5.1<8,2,4>UD                   { align1 WE_all 1N I@1 };
mov(4)          g47<4>UD        g5.2<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g41<4>F         g45<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g5.2<4>UD       g41<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g51<4>UD        g5.1<8,2,4>UD                   { align1 WE_all 1N I@1 };
mov(4)          g53<4>UD        g5.3<8,2,4>UD                   { align1 WE_all 1N $12.src };
sel.ge(4)       g49<4>F         g51<8,2,4>F     g53<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g5.3<4>UD       g49<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g5.4<1>F        g5.3<0,1,0>F    g5.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.ge(4)       g6.4<1>F        g6.3<0,1,0>F    g6.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.ge(8)       g6<1>F          g5.7<0,1,0>F    g6<8,8,1>F      { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g67<1>UD        g6.7<0,1,0>UD                   { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g101<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g102UD          g67UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
shl(16)         g103<1>D        g105<8,8,1>D    0x00000002UD    { align1 1H $9.src };
shr(16)         g34<1>UD        g105<1,1,0>UD   0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g107<1>D        g2<0,1,0>D      g103<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g113<2>UD       g107<4,4,1>UD                   { align1 1Q };
mov(8)          g115<2>UD       g108<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g111<1>D        g2.1<0,1,0>D    g34<8,8,1>D     -g109<1,1,1>D { align1 1H };
mov(8)          g113.1<2>UD     g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g115.1<2>UD     g112<4,4,1>UD                   { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g117<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $9.src };
send(16)        g68UD           g90UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
(+f0.0) sel(16) g68<1>UD        g119.7<0,1,0>UD g121.7<0,1,0>UD { align1 1H };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g113UD          g68UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g118<1>D        g107<1,1,0>D    16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g120<1>UD       g118<1,1,0>UD   g107<1,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   0x00000001UD    { align1 1H };
mov(8)          g124<2>UD       g118<4,4,1>UD                   { align1 1Q };
mov(8)          g126<2>UD       g119<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g122<1>D        -g120<1,1,0>D   g111<1,1,0>D    { align1 1H compacted };
mov(8)          g124.1<2>UD     g122<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g126.1<2>UD     g123<4,4,1>UD                   { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
and(1)          g1<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g1<0,1,0>UD     0x0000000fUD    { align1 WE_all 1N $9.src };
send(16)        g69UD           g97UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>UD       g105<8,8,1>UD   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
(+f0.0) sel(16) g69<1>UD        g4.7<0,1,0>UD   g6.7<0,1,0>UD   { align1 1H };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g124UD          g69UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };

LABEL13:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $13.src };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_code[] = {
    0x80000065, 0x36058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x04050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00360c, 0x00340000,
    0xe2373040, 0x04013603, 0x80030061, 0x24054410,
    0x00000000, 0x76543210, 0x00041b69, 0x20058660,
    0x02460405, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00370c, 0x00300000, 0x64241a40, 0x00802495,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x69050120, 0x00462405, 0x00000000,
    0xa0251940, 0x69002002, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x06260660,
    0x00000324, 0x00000000, 0x00130061, 0x08260660,
    0x00000324, 0x00000000, 0x00040065, 0x1c058220,
    0x02000344, 0x00ffffff, 0x00040061, 0x1e050020,
    0x0000035c, 0x00000000, 0x00031c61, 0x06060660,
    0x00000304, 0x00000000, 0x00131c61, 0x08060660,
    0x00000304, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x1a140000,
    0xfb000624, 0x00000000, 0x0004f270, 0x00010220,
    0x52462505, 0x00461a05, 0x01040022, 0x0001c060,
    0x00000658, 0x000005c8, 0x80000065, 0x49058220,
    0x020000a4, 0xfffffc00, 0x00040069, 0x4a058120,
    0x02462405, 0x00000002, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00033261, 0x07260660,
    0x000002e4, 0x00000000, 0x00133261, 0x09260660,
    0x000002e4, 0x00000000, 0x00031a61, 0x07060660,
    0x000002c4, 0x00000000, 0x00131a61, 0x09060660,
    0x000002c4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x27440000,
    0xfb000724, 0x000c0000, 0x00032341, 0x20010220,
    0x01462505, 0x00562b06, 0x00042341, 0x31050660,
    0x01462505, 0x00562b06, 0x00040041, 0x46050660,
    0x01462505, 0x00562b16, 0x00042341, 0x33050660,
    0x01462505, 0x00562d06, 0x00040041, 0x4c050660,
    0x01462505, 0x00562d16, 0x3e2f0049, 0x2b002503,
    0x00041c40, 0x31160110, 0x01563116, 0x00564606,
    0x00041b40, 0x33160110, 0x01563316, 0x00564c06,
    0x00130041, 0x20010220, 0x01462605, 0x00562c06,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa037b340, 0x31002702, 0x00130049, 0x30050222,
    0x02462605, 0x00462c05, 0x27391a70, 0x27003703,
    0x00030061, 0x3d060220, 0x00343705, 0x00000000,
    0x00130061, 0x3f060220, 0x00343805, 0x00000000,
    0xa0351c40, 0x33002f02, 0x00049352, 0x3b040e68,
    0x0e2e2905, 0x39053505, 0x00031961, 0x3d260220,
    0x00343b05, 0x00000000, 0x00131a61, 0x3f260220,
    0x00343c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x41440000,
    0xfb003d24, 0x000c0000, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004904, 0x0000008f, 0x00049531, 0x00020100,
    0xfa084a14, 0x04004104, 0x80000065, 0x4c058220,
    0x020000a4, 0xfffffc00, 0xe04d3566, 0x04004a03,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004c04, 0x0000008f,
    0x00049631, 0x00020100, 0xfa084d14, 0x04004304,
    0x80003665, 0x4e058220, 0x020000a4, 0xfffffc00,
    0xe04f0066, 0x08004a03, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004e04, 0x0000008f, 0x00049731, 0x00020100,
    0xfa084f14, 0x04004504, 0x80003765, 0x50058220,
    0x020000a4, 0xfffffc00, 0xe0510066, 0x0c004a03,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005004, 0x0000008f,
    0x00049831, 0x00020100, 0xfa085114, 0x04004704,
    0xa0523840, 0x01003703, 0x80000065, 0x60058220,
    0x020000a4, 0xfffffc00, 0xe0610066, 0x10004a03,
    0x27541b70, 0x37005203, 0x00030061, 0x58060220,
    0x00345205, 0x00000000, 0x00130061, 0x5a060220,
    0x00345305, 0x00000000, 0xa0561b40, 0x3b025402,
    0x00031961, 0x58260220, 0x00345605, 0x00000000,
    0x00131a61, 0x5a260220, 0x00345705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x5c240000, 0xfb005824, 0x00040000,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006004, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa086114, 0x04005c04,
    0x80003a65, 0x62058220, 0x020000a4, 0xfffffc00,
    0xe0630066, 0x14004a03, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006204, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa086314, 0x04005e04, 0x80003b65, 0x64058220,
    0x020000a4, 0xfffffc00, 0xe7673670, 0x7f834300,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x27073a62, 0x5c004300, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x270f3762, 0x5e004500,
    0x25130062, 0x5c004300, 0x25150062, 0x5e004500,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006404, 0x0000000f,
    0x00049c31, 0x65160100, 0xfa004a14, 0x04000000,
    0xe7222c70, 0x7f836500, 0x277d3862, 0x47006500,
    0x25110062, 0x47006500, 0xe76d0070, 0x7f834500,
    0xe7710070, 0x7f835c00, 0x206b1565, 0x22006703,
    0xe7730070, 0x7f834700, 0xe7770070, 0x7f835e00,
    0x206f0965, 0x6d006b03, 0x20751265, 0x73007103,
    0x20790965, 0x77007503, 0x2e7b1965, 0x79006f03,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x01041562, 0x09058220, 0x02461105, 0xff800000,
    0x01041762, 0x0b058220, 0x02461305, 0xff800000,
    0x01041762, 0x0d058220, 0x02461505, 0xff800000,
    0x01041662, 0x03058220, 0x02467d05, 0x7f800000,
    0x01043262, 0x05058220, 0x02460705, 0x7f800000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041e61, 0x4d062650, 0x00467b05, 0x00000000,
    0x01041762, 0x07058220, 0x02460f05, 0x7f800000,
    0x00041a61, 0x18050110, 0x00564d06, 0x00000000,
    0x00040024, 0x0001c060, 0x000000a0, 0x000000a0,
    0x00041a61, 0x18054110, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041c61, 0x07054220, 0x00000000, 0x7f800000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x05054220, 0x00000000, 0x7f800000,
    0x00041e61, 0x03054220, 0x00000000, 0x7f800000,
    0x00040061, 0x0d054220, 0x00000000, 0xff800000,
    0x00040061, 0x0b054220, 0x00000000, 0xff800000,
    0x00043261, 0x09054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x60161b65, 0x00101805, 0x00041961, 0x17050450,
    0x00681606, 0x00000000, 0x00041970, 0x27058550,
    0x25581705, 0x00000000, 0x00041961, 0x20050560,
    0x00462705, 0x00000000, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22462005, 0x00000000, 0x00040061, 0x28050120,
    0x00003000, 0x00000000, 0x00040079, 0x2a058620,
    0x06466905, 0x00000000, 0x00041a4d, 0x0f050220,
    0x00462805, 0x00000000, 0x00040070, 0x00018660,
    0x16466905, 0x00000000, 0x202c1b65, 0x2a002803,
    0x0004194d, 0x2e050220, 0x00462c05, 0x00000000,
    0x01040022, 0x0001c060, 0x000000b8, 0x000000b8,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0300040, 0x02410203, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27321970, 0x02103003,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x00030061, 0x36060220, 0x00343005, 0x00000000,
    0x00130061, 0x38060220, 0x00343105, 0x00000000,
    0xa0341b40, 0x02123212, 0x00031961, 0x36260220,
    0x00343405, 0x00000000, 0x00131a61, 0x38260220,
    0x00343505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x19140000,
    0xfb183624, 0x01000f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0xa0371b40, 0x19102e02,
    0x00040061, 0x00010660, 0x20462005, 0x00000000,
    0x01040022, 0x0001c060, 0x00000b48, 0x00000b48,
    0x80003165, 0x39058220, 0x020000a4, 0xfffffc00,
    0x00040069, 0x3a058120, 0x02462405, 0x00000002,
    0x80003465, 0x3e058220, 0x020000a4, 0xfffffc00,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xe03c1a66, 0x2c003a03, 0xe03f3466, 0x20003a03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003904, 0x0000000f,
    0x00049d31, 0x10160100, 0xfa003c14, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003e04, 0x0000008f,
    0x00049e31, 0x00020100, 0xfa083f14, 0x04000304,
    0x80003565, 0x41058220, 0x020000a4, 0xfffffc00,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe0421766, 0x24003a03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004104, 0x0000008f, 0x00049f31, 0x00020100,
    0xfa084214, 0x04000504, 0x80001765, 0x44058220,
    0x020000a4, 0xfffffc00, 0xe0451466, 0x28003a03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004404, 0x0000008f,
    0x00049031, 0x00020100, 0xfa084514, 0x04000704,
    0x80001265, 0x47058220, 0x020000a4, 0xfffffc00,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004704, 0x0000008f,
    0x00049131, 0x00020100, 0xfa083c14, 0x04001004,
    0x80001265, 0x48058220, 0x020000a4, 0xfffffc00,
    0xe0493c66, 0x3c003a03, 0x80003c65, 0x4b058220,
    0x020000a4, 0xfffffc00, 0xe04c0066, 0x30003a03,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004804, 0x0000000f,
    0x00049231, 0x11160100, 0xfa004914, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004b04, 0x0000008f,
    0x00049331, 0x00020100, 0xfa084c14, 0x04000904,
    0x80000065, 0x4e058220, 0x020000a4, 0xfffffc00,
    0xe04f3766, 0x34003a03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004e04, 0x0000008f, 0x00049431, 0x00020100,
    0xfa084f14, 0x04000b04, 0x80003865, 0x51058220,
    0x020000a4, 0xfffffc00, 0xe0520066, 0x38003a03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005104, 0x0000008f,
    0x00049531, 0x00020100, 0xfa085214, 0x04000d04,
    0x80000065, 0x54058220, 0x020000a4, 0xfffffc00,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005404, 0x0000008f,
    0x00049631, 0x00020100, 0xfa084914, 0x04001104,
    0x00040069, 0x55058660, 0x02461e05, 0x0000001d,
    0x80000065, 0x57058220, 0x020000a4, 0xfffffc00,
    0x80003965, 0x58058220, 0x020000a4, 0xfffffc00,
    0x80003965, 0x59058220, 0x020000a4, 0xfffffc00,
    0x80003965, 0x5a058220, 0x020000a4, 0xfffffc00,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005704, 0x0000000f,
    0x00049731, 0x12160100, 0xfa003f14, 0x04000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005804, 0x0000000f,
    0x00049831, 0x14160100, 0xfa004214, 0x04000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005904, 0x0000000f,
    0x00049931, 0x16160100, 0xfa004514, 0x04000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005a04, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa083f14, 0x04001204,
    0x80003965, 0x5b058220, 0x020000a4, 0xfffffc00,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005b04, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa084214, 0x04001404,
    0x80001365, 0x5c058220, 0x020000a4, 0xfffffc00,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005c04, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa084514, 0x04001604,
    0x80001365, 0x5d058220, 0x020000a4, 0xfffffc00,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005d04, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa083c14, 0x04001c04,
    0x205e0966, 0x55002503, 0x80000065, 0x60058220,
    0x020000a4, 0xfffffc00, 0x80003a65, 0x61058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x62058220,
    0x020000a4, 0xfffffc00, 0x80003b65, 0x63058220,
    0x020000a4, 0xfffffc00, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041d61, 0x1d050220,
    0x00465e05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006004, 0x0000000f, 0x00049e31, 0x1f160100,
    0xfa004c14, 0x04000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006104, 0x0000000f, 0x00049f31, 0x25160100,
    0xfa004f14, 0x04000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006204, 0x0000000f, 0x00049031, 0x27160100,
    0xfa005214, 0x04000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00042e61, 0x17050220,
    0x00461f05, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00042f61, 0x19050220,
    0x00462505, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00042061, 0x1b050220,
    0x00462705, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006304, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa084c14, 0x04001f04, 0x80000065, 0x64058220,
    0x020000a4, 0xfffffc00, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006404, 0x0000008f, 0x00049731, 0x00020100,
    0xfa084f14, 0x04002504, 0x80001565, 0x65058220,
    0x020000a4, 0xfffffc00, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006504, 0x0000008f, 0x00049131, 0x00020100,
    0xfa085214, 0x04002704, 0x80001565, 0x66058220,
    0x020000a4, 0xfffffc00, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006604, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa084914, 0x04005e04, 0x00040069, 0x67058660,
    0x02463705, 0x00000005, 0xe0220068, 0x01b03703,
    0x80000065, 0x75058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x76058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x77058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x78058220, 0x020000a4, 0xfffffc00,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa06b1e40, 0x6701025a, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007504, 0x0000000f, 0x00049431, 0x0f160100,
    0xfa003f14, 0x04000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007604, 0x0000000f, 0x00049531, 0x11160100,
    0xfa004214, 0x04000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007704, 0x0000000f, 0x00049231, 0x13160100,
    0xfa004514, 0x04000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007804, 0x0000000f, 0x00049431, 0x15160100,
    0xfa003c14, 0x04000000, 0x276d1970, 0x02106b0b,
    0x00030061, 0x71060220, 0x00346b05, 0x00000000,
    0x00130061, 0x73060220, 0x00346c05, 0x00000000,
    0x00041b52, 0x6f040660, 0x0e2e02a4, 0x6d052205,
    0x00031961, 0x71260220, 0x00346f05, 0x00000000,
    0x00131a61, 0x73260220, 0x00347005, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb087124, 0x000c0f44,
    0xa0790040, 0x01006b03, 0x277b1970, 0x6b007903,
    0x00033361, 0x0f060220, 0x00347905, 0x00000000,
    0x00133361, 0x11060220, 0x00347a05, 0x00000000,
    0xa07d1b40, 0x6f027b02, 0x00031961, 0x0f260220,
    0x00347d05, 0x00000000, 0x00131a61, 0x11260220,
    0x00347e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb080f24, 0x000c1744, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20101f40, 0x09000300,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x20123f40, 0x0b000500, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x20143040, 0x0d000700,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x25163370, 0x03000900, 0xa32f1c61, 0x7f810000,
    0x602f0061, 0x00100300, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x2a058220,
    0x020000a4, 0xfffffc00, 0x00040069, 0x2b058120,
    0x02462405, 0x00000002, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x01041562, 0x18058220,
    0x02461005, 0x7f800000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x50060220,
    0x00442f26, 0x00000000, 0xe02d1b66, 0x58002b03,
    0x251a2170, 0x05000b00, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031a62, 0x4e060aa0,
    0x5a442f06, 0x00445006, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x01041662, 0x1c058220,
    0x02461205, 0x7f800000, 0x80030961, 0x2f260220,
    0x00444e06, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x251e3170, 0x07000d00,
    0x80021961, 0x54070220, 0x00422f27, 0x00000000,
    0x80020061, 0x56070220, 0x00422f47, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x01041662, 0x20058220, 0x02461405, 0x7f800000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x52070aa0, 0x5a425407, 0x00425607,
    0x00041670, 0x00018660, 0x26461605, 0x00000000,
    0x80021161, 0x2f470220, 0x00425207, 0x00000000,
    0x01043762, 0x24058220, 0x02461005, 0xff800000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x5a070220, 0x00422f27, 0x00000000,
    0x80020061, 0x5c070220, 0x00422f67, 0x00000000,
    0x00041470, 0x00018660, 0x26461a05, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x58070aa0, 0x5a425a07, 0x00425c07,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x01043762, 0x26058220, 0x02461205, 0xff800000,
    0x80021161, 0x2f670220, 0x00425807, 0x00000000,
    0x00041370, 0x00018660, 0x26461e05, 0x00000000,
    0x80021a62, 0x2f850aa0, 0x5a002f64, 0x00342f85,
    0x80021a62, 0x30850aa0, 0x5a003064, 0x00343085,
    0x01043162, 0x28058220, 0x02461405, 0xff800000,
    0x80031162, 0x30050aa0, 0x5a002fe4, 0x00463005,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x31050220, 0x000030e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002a04, 0x0000008f,
    0x00049431, 0x00020100, 0xfa082d14, 0x04003104,
    0xa34e0061, 0x7f810000, 0x604e0061, 0x00100500,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001265, 0x2f058220, 0x020000a4, 0xfffffc00,
    0xe0303466, 0x5c002b03, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x5f060220,
    0x00444e26, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x5d060aa0,
    0x5a444e06, 0x00445f06, 0x80030961, 0x4e260220,
    0x00445d06, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x63070220,
    0x00424e27, 0x00000000, 0x80020061, 0x65070220,
    0x00424e47, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x61070aa0,
    0x5a426307, 0x00426507, 0x80021161, 0x4e470220,
    0x00426107, 0x00000000, 0x80021961, 0x22070220,
    0x00424e27, 0x00000000, 0x80020061, 0x6b070220,
    0x00424e67, 0x00000000, 0x80021962, 0x67070aa0,
    0x5a422207, 0x00426b07, 0x80021161, 0x4e670220,
    0x00426707, 0x00000000, 0x80021962, 0x4e850aa0,
    0x5a004e64, 0x00344e85, 0x80021962, 0x4f850aa0,
    0x5a004f64, 0x00344f85, 0x80031162, 0x4f050aa0,
    0x5a004ee4, 0x00464f05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043461, 0x32050220,
    0x00004fe4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02002f04, 0x0000008f, 0x00049531, 0x00020100,
    0xfa083014, 0x04003204, 0xa3500061, 0x7f810000,
    0x60500061, 0x00100700, 0x80003565, 0x31058220,
    0x020000a4, 0xfffffc00, 0xe0323566, 0x60002b03,
    0x80031161, 0x6e060220, 0x00445026, 0x00000000,
    0x80031962, 0x6c060aa0, 0x5a445006, 0x00446e06,
    0x80030961, 0x50260220, 0x00446c06, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x72070220, 0x00425027, 0x00000000,
    0x80023361, 0x74070220, 0x00425047, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x70070aa0, 0x5a427207, 0x00427407,
    0x80021161, 0x50470220, 0x00427007, 0x00000000,
    0x80021961, 0x78070220, 0x00425027, 0x00000000,
    0x80020061, 0x7a070220, 0x00425067, 0x00000000,
    0x80021962, 0x76070aa0, 0x5a427807, 0x00427a07,
    0x80021161, 0x50670220, 0x00427607, 0x00000000,
    0x80021962, 0x50850aa0, 0x5a005064, 0x00345085,
    0x80021962, 0x51850aa0, 0x5a005164, 0x00345185,
    0x80031162, 0x51050aa0, 0x5a0050e4, 0x00465105,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x34050220, 0x000051e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003104, 0x0000008f,
    0x00049631, 0x00020100, 0xfa083214, 0x04003404,
    0xa3520061, 0xff810000, 0x60520061, 0x00100900,
    0x80003665, 0x33058220, 0x020000a4, 0xfffffc00,
    0xe0343666, 0x64002b03, 0x80031161, 0x7d060220,
    0x00445226, 0x00000000, 0x80031962, 0x7b060aa0,
    0x4a445206, 0x00447d06, 0x80030961, 0x52260220,
    0x00447b06, 0x00000000, 0x80021961, 0x05070220,
    0x00425227, 0x00000000, 0x80021761, 0x07070220,
    0x00425247, 0x00000000, 0x80021962, 0x03070aa0,
    0x4a420507, 0x00420707, 0x80021161, 0x52470220,
    0x00420307, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x0f070220,
    0x00425227, 0x00000000, 0x80020061, 0x11070220,
    0x00425267, 0x00000000, 0x80021962, 0x09070aa0,
    0x4a420f07, 0x00421107, 0x80021161, 0x52670220,
    0x00420907, 0x00000000, 0x80021962, 0x52850aa0,
    0x4a005264, 0x00345285, 0x80021962, 0x53850aa0,
    0x4a005364, 0x00345385, 0x80031162, 0x53050aa0,
    0x4a0052e4, 0x00465305, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x36050220,
    0x000053e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003304, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa083414, 0x04003604, 0xa3590061, 0xff810000,
    0x60590061, 0x00100b00, 0x80003c65, 0x36058220,
    0x020000a4, 0xfffffc00, 0xe0373c66, 0x68002b03,
    0x80031161, 0x14060220, 0x00445926, 0x00000000,
    0x80031962, 0x12060aa0, 0x4a445906, 0x00441406,
    0x80030961, 0x59260220, 0x00441206, 0x00000000,
    0x80021961, 0x1a070220, 0x00425927, 0x00000000,
    0x80020061, 0x1e070220, 0x00425947, 0x00000000,
    0x80021962, 0x16070aa0, 0x4a421a07, 0x00421e07,
    0x80021161, 0x59470220, 0x00421607, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x31070220, 0x00425927, 0x00000000,
    0x80023161, 0x39070220, 0x00425967, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x2f070aa0, 0x4a423107, 0x00423907,
    0x80021161, 0x59670220, 0x00422f07, 0x00000000,
    0x80021962, 0x59850aa0, 0x4a005964, 0x00345985,
    0x80021962, 0x5a850aa0, 0x4a005a64, 0x00345a85,
    0x80031162, 0x5a050aa0, 0x4a0059e4, 0x00465a05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x39050220, 0x00005ae4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003604, 0x0000008f,
    0x00049731, 0x00020100, 0xfa083714, 0x04003904,
    0xa35b0061, 0xff810000, 0x605b0061, 0x00100d00,
    0x80003765, 0x38058220, 0x020000a4, 0xfffffc00,
    0xe0393766, 0x6c002b03, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x3d060220,
    0x00445b26, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x3b060aa0,
    0x4a445b06, 0x00443d06, 0x80030961, 0x5b260220,
    0x00443b06, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x41070220,
    0x00425b27, 0x00000000, 0x80023561, 0x43070220,
    0x00425b47, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x3f070aa0,
    0x4a424107, 0x00424307, 0x80021161, 0x5b470220,
    0x00423f07, 0x00000000, 0x80021961, 0x47070220,
    0x00425b27, 0x00000000, 0x80023c61, 0x49070220,
    0x00425b67, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x45070aa0,
    0x4a424707, 0x00424907, 0x80021161, 0x5b670220,
    0x00424507, 0x00000000, 0x80021962, 0x5b850aa0,
    0x4a005b64, 0x00345b85, 0x80021962, 0x5c850aa0,
    0x4a005c64, 0x00345c85, 0x80031162, 0x5c050aa0,
    0x4a005be4, 0x00465c05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x3b050220,
    0x00005ce4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003804, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa083914, 0x04003b04, 0x00040070, 0x00018220,
    0x52466905, 0x00000003, 0x01040022, 0x0001c060,
    0x00000368, 0x00000368, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa03a3c40, 0x08010243,
    0x00040069, 0x3f058660, 0x02466905, 0x00000002,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0xe0410068, 0x01e06903, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x273c3c70, 0x02103a2b,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0430040, 0x3f003a02, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0xa03e0040, 0x02123c1a,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x27450070, 0x3a004303, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x49060220,
    0x00344305, 0x00000000, 0x00133c61, 0x4b060220,
    0x00344405, 0x00000000, 0x00040070, 0x00018220,
    0x52466905, 0x00000001, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x47040e68,
    0x0e2e3e05, 0x45054105, 0x00031961, 0x49260220,
    0x00344705, 0x00000000, 0x00131a61, 0x4b260220,
    0x00344805, 0x00000000, 0x01040022, 0x0001c060,
    0x00000090, 0x00000060, 0x80003c65, 0x4d058220,
    0x020000a4, 0xfffffc00, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80003466, 0x10218220,
    0x02004d04, 0x0000000f, 0x00049431, 0x3c160100,
    0xfa002d14, 0x04000000, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00040070, 0x00018220,
    0x52466905, 0x00000002, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x01040e62, 0x3c050220,
    0x02004fe4, 0x000051e4, 0x00040025, 0x00004600,
    0x00000000, 0x00000198, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb2a4924, 0x01003c14, 0xa04e0040, 0x00c04303,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27500070, 0x43004e03, 0x00040070, 0x00018220,
    0x52466905, 0x00000001, 0x00030061, 0x54060220,
    0x00344e05, 0x00000000, 0x00130061, 0x56060220,
    0x00344f05, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0520040, 0x47025002,
    0x00031961, 0x54260220, 0x00345205, 0x00000000,
    0x00131a61, 0x56260220, 0x00345305, 0x00000000,
    0x01040022, 0x0001c060, 0x00000090, 0x00000060,
    0x80000065, 0x58058220, 0x020000a4, 0xfffffc00,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80003c66, 0x10218220, 0x02005804, 0x0000000f,
    0x00049c31, 0x3d160100, 0xfa003414, 0x04000000,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00040070, 0x00018220, 0x52466905, 0x00000002,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x01041662, 0x3d050220, 0x02005ae4, 0x00005ce4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xfb2c5424, 0x01003d14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xa35c1b61, 0x7f810000, 0x605c0061, 0x00101800,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001765, 0x59058220, 0x020000a4, 0xfffffc00,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0xe05a0066, 0x40002b03, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x4c060220,
    0x00445c26, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80030962, 0x4a060aa0,
    0x5a445c06, 0x00444c06, 0x80030961, 0x5c260220,
    0x00444a06, 0x00000000, 0x80021961, 0x50070220,
    0x00425c27, 0x00000000, 0x80020061, 0x52070220,
    0x00425c47, 0x00000000, 0x80021962, 0x4e070aa0,
    0x5a425007, 0x00425207, 0x80021161, 0x5c470220,
    0x00424e07, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x56070220,
    0x00425c27, 0x00000000, 0x80020061, 0x5e070220,
    0x00425c67, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x54070aa0,
    0x5a425607, 0x00425e07, 0x80021161, 0x5c670220,
    0x00425407, 0x00000000, 0x80021962, 0x5c850aa0,
    0x5a005c64, 0x00345c85, 0x80021962, 0x5d850aa0,
    0x5a005d64, 0x00345d85, 0x80031162, 0x5d050aa0,
    0x5a005ce4, 0x00465d05, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x3e050220,
    0x00005de4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005904, 0x0000008f, 0x00049931, 0x00020100,
    0xfa085a14, 0x04003e04, 0xa3760061, 0x7f810000,
    0x60760061, 0x00101c00, 0x80001265, 0x5c058220,
    0x020000a4, 0xfffffc00, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0xe05d0066, 0x44002b03,
    0x80031161, 0x61060220, 0x00447626, 0x00000000,
    0x80031962, 0x5f060aa0, 0x5a447606, 0x00446106,
    0x80030961, 0x76260220, 0x00445f06, 0x00000000,
    0x80021961, 0x65070220, 0x00427627, 0x00000000,
    0x80020061, 0x67070220, 0x00427647, 0x00000000,
    0x80021962, 0x63070aa0, 0x5a426507, 0x00426707,
    0x80021161, 0x76470220, 0x00426307, 0x00000000,
    0x80021961, 0x6b070220, 0x00427627, 0x00000000,
    0x80020061, 0x6d070220, 0x00427667, 0x00000000,
    0x80021962, 0x22070aa0, 0x5a426b07, 0x00426d07,
    0x80021161, 0x76670220, 0x00422207, 0x00000000,
    0x80021962, 0x76850aa0, 0x5a007664, 0x00347685,
    0x80021962, 0x77850aa0, 0x5a007764, 0x00347785,
    0x80031162, 0x77050aa0, 0x5a0076e4, 0x00467705,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043961, 0x3f050220, 0x000077e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005c04, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa085d14, 0x04003f04,
    0xa3780061, 0x7f810000, 0x60780061, 0x00102000,
    0x80003a65, 0x5e058220, 0x020000a4, 0xfffffc00,
    0xe05f0066, 0x48002b03, 0x80031161, 0x70060220,
    0x00447826, 0x00000000, 0x80031962, 0x6e060aa0,
    0x5a447806, 0x00447006, 0x80030961, 0x78260220,
    0x00446e06, 0x00000000, 0x80021961, 0x74070220,
    0x00427827, 0x00000000, 0x80020061, 0x7a070220,
    0x00427847, 0x00000000, 0x80021962, 0x72070aa0,
    0x5a427407, 0x00427a07, 0x80021161, 0x78470220,
    0x00427207, 0x00000000, 0x80021961, 0x7e070220,
    0x00427827, 0x00000000, 0x80020061, 0x03070220,
    0x00427867, 0x00000000, 0x80021962, 0x7c070aa0,
    0x5a427e07, 0x00420307, 0x80021161, 0x78670220,
    0x00427c07, 0x00000000, 0x80021962, 0x78850aa0,
    0x5a007864, 0x00347885, 0x80021962, 0x79850aa0,
    0x5a007964, 0x00347985, 0x80031162, 0x79050aa0,
    0x5a0078e4, 0x00467905, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043a61, 0x40050220,
    0x000079e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005e04, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa085f14, 0x04004004, 0xa37a0061, 0xff810000,
    0x607a0061, 0x00102400, 0x80003b65, 0x60058220,
    0x020000a4, 0xfffffc00, 0xe0610066, 0x4c002b03,
    0x80031161, 0x06060220, 0x00447a26, 0x00000000,
    0x80031962, 0x04060aa0, 0x4a447a06, 0x00440606,
    0x80030961, 0x7a260220, 0x00440406, 0x00000000,
    0x80021961, 0x0a070220, 0x00427a27, 0x00000000,
    0x80020061, 0x0c070220, 0x00427a47, 0x00000000,
    0x80021962, 0x08070aa0, 0x4a420a07, 0x00420c07,
    0x80021161, 0x7a470220, 0x00420807, 0x00000000,
    0x80021961, 0x10070220, 0x00427a27, 0x00000000,
    0x80020061, 0x12070220, 0x00427a67, 0x00000000,
    0x80021962, 0x0e070aa0, 0x4a421007, 0x00421207,
    0x80021161, 0x7a670220, 0x00420e07, 0x00000000,
    0x80021962, 0x7a850aa0, 0x4a007a64, 0x00347a85,
    0x80021962, 0x7b850aa0, 0x4a007b64, 0x00347b85,
    0x80031162, 0x7b050aa0, 0x4a007ae4, 0x00467b05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043b61, 0x41050220, 0x00007be4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006004, 0x0000008f,
    0x00049931, 0x00020100, 0xfa086114, 0x04004104,
    0xa3031f61, 0xff810000, 0x60030061, 0x00102600,
    0x80000065, 0x63058220, 0x020000a4, 0xfffffc00,
    0xe0640066, 0x50002b03, 0x80031161, 0x15060220,
    0x00440326, 0x00000000, 0x80031962, 0x13060aa0,
    0x4a440306, 0x00441506, 0x80030961, 0x03260220,
    0x00441306, 0x00000000, 0x80021961, 0x19070220,
    0x00420327, 0x00000000, 0x80020061, 0x1b070220,
    0x00420347, 0x00000000, 0x80021962, 0x17070aa0,
    0x4a421907, 0x00421b07, 0x80021161, 0x03470220,
    0x00421707, 0x00000000, 0x80021961, 0x1f070220,
    0x00420327, 0x00000000, 0x80021761, 0x24070220,
    0x00420367, 0x00000000, 0x80021962, 0x1d070aa0,
    0x4a421f07, 0x00422407, 0x80021161, 0x03670220,
    0x00421d07, 0x00000000, 0x80021962, 0x03850aa0,
    0x4a000364, 0x00340385, 0x80021962, 0x04850aa0,
    0x4a000464, 0x00340485, 0x80031162, 0x04050aa0,
    0x4a0003e4, 0x00460405, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043961, 0x42050220,
    0x000004e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006304, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa086414, 0x04004204, 0xa3050061, 0xff810000,
    0x60050061, 0x00102800, 0x80003c65, 0x65058220,
    0x020000a4, 0xfffffc00, 0xe0660066, 0x54002b03,
    0x80031161, 0x27060220, 0x00440526, 0x00000000,
    0x80031962, 0x25060aa0, 0x4a440506, 0x00442706,
    0x80030961, 0x05260220, 0x00442506, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x2d070220, 0x00420527, 0x00000000,
    0x80020061, 0x2f070220, 0x00420547, 0x00000000,
    0x80021962, 0x29070aa0, 0x4a422d07, 0x00422f07,
    0x80021161, 0x05470220, 0x00422907, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x33070220, 0x00420527, 0x00000000,
    0x80023c61, 0x35070220, 0x00420567, 0x00000000,
    0x80021962, 0x31070aa0, 0x4a423307, 0x00423507,
    0x80021161, 0x05670220, 0x00423107, 0x00000000,
    0x80021962, 0x05850aa0, 0x4a000564, 0x00340585,
    0x80021962, 0x06850aa0, 0x4a000664, 0x00340685,
    0x80031162, 0x06050aa0, 0x4a0005e4, 0x00460605,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043c61, 0x43050220, 0x000006e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006504, 0x0000008f,
    0x00049931, 0x00020100, 0xfa086614, 0x04004304,
    0x00040070, 0x00018220, 0x52466905, 0x00000003,
    0x01040022, 0x0001c060, 0x000002f0, 0x000002f0,
    0x00043969, 0x67058660, 0x02466905, 0x00000002,
    0xe0220068, 0x01e06903, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa06b0040, 0x67010202,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x276d0070, 0x02106b03, 0x00030061, 0x71060220,
    0x00346b05, 0x00000000, 0x00130061, 0x73060220,
    0x00346c05, 0x00000000, 0x00040070, 0x00018220,
    0x52466905, 0x00000001, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x6f040660,
    0x0e2e0224, 0x6d052205, 0x00031961, 0x71260220,
    0x00346f05, 0x00000000, 0x00131a61, 0x73260220,
    0x00347005, 0x00000000, 0x01040022, 0x0001c060,
    0x00000090, 0x00000060, 0x80000065, 0x75058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003966, 0x10218220,
    0x02007504, 0x0000000f, 0x00049931, 0x44160100,
    0xfa005a14, 0x04000000, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00040070, 0x00018220,
    0x52466905, 0x00000002, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x44050220,
    0x020077e4, 0x000079e4, 0x00040025, 0x00004600,
    0x00000000, 0x00000188, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb2a7124, 0x01004414, 0xa0760040, 0x01006b03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27780070, 0x6b007603, 0x00040070, 0x00018220,
    0x52466905, 0x00000001, 0x00030061, 0x7c060220,
    0x00347605, 0x00000000, 0x00130061, 0x7e060220,
    0x00347705, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa07a0040, 0x6f027802,
    0x00031961, 0x7c260220, 0x00347a05, 0x00000000,
    0x00131a61, 0x7e260220, 0x00347b05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000090, 0x00000060,
    0x80002065, 0x01058220, 0x020000a4, 0xfffffc00,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003966, 0x10218220, 0x02000104, 0x0000000f,
    0x00049931, 0x45160100, 0xfa006114, 0x04000000,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00040070, 0x00018220, 0x52466905, 0x00000002,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x45050220, 0x020004e4, 0x000006e4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044d31, 0x00000000, 0xfb2c7c24, 0x01004514,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80033d61, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_procedurals_to_primrefs_indirect = {
   .prog_data = {
      .base.nr_params = 19,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 2048,
      .base.total_shared = 0,
      .base.program_size = 12112,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_printfs,
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
      .push.cross_thread.dwords = 19,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 44,
   .arg_count = 6,
   .args = gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_args,
   .code = gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_code,
};
const char *gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_sha1 = "d636537d69b1c7fa01c31c4c43feda7a170f9217";

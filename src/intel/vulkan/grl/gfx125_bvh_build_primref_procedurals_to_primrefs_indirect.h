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

and(1)          g122<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g37<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g122UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g123<1>UD       g122<0,1,0>UD   0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g36<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g32<1>D         g37<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g123UD          nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g36.8<1>UW      g36<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g34<1>UD        g36<8,8,1>UW                    { align1 1H };
add(16)         g37<1>D         g32<1,1,0>D     g34<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g39.1<2>D       g3.1<0,1,0>D                    { align1 1Q };
mov(8)          g41.1<2>D       g3.1<0,1,0>D                    { align1 2Q };
and(16)         g28<1>UD        g3.2<0,1,0>UD   0x00ffffffUD    { align1 1H };
mov(16)         g30<1>UD        g3.11<0,1,0>UB                  { align1 1H };
mov(8)          g39<2>D         g3<0,1,0>D                      { align1 1Q I@4 };
mov(8)          g41<2>D         g3<0,1,0>D                      { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g26UD           g39UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g37<8,8,1>UD    g26<8,8,1>UD    { align1 1H @7 $2.dst };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
and(1)          g73<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g74<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g47.1<2>D       g2.7<0,1,0>D                    { align1 1Q };
mov(8)          g49.1<2>D       g2.7<0,1,0>D                    { align1 2Q };
mov(8)          g47<2>D         g2.6<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g49<2>D         g2.6<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g39UD           g47UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mul(8)          acc0<1>UD       g37<8,8,1>UD    g43<16,8,2>UW   { align1 1Q $3.dst };
mul(16)         g49<1>D         g37<8,8,1>D     g43<16,8,2>UW   { align1 1H $3.dst };
mul(16)         g6<1>D          g37<8,8,1>D     g43.1<16,8,2>UW { align1 1H };
mul(16)         g51<1>D         g37<8,8,1>D     g45<16,8,2>UW   { align1 1H $3.dst };
mul(16)         g8<1>D          g37<8,8,1>D     g45.1<16,8,2>UW { align1 1H };
mach(8)         g47<1>UD        g37<1,1,0>UD    g43<1,1,0>UD    { align1 1Q $3.src compacted AccWrEnable };
add(16)         g49.1<2>UW      g49.1<16,8,2>UW g6<16,8,2>UW    { align1 1H I@4 };
add(16)         g51.1<2>UW      g51.1<16,8,2>UW g8<16,8,2>UW    { align1 1H I@3 };
mul(8)          acc0<1>UD       g38<8,8,1>UD    g44<16,8,2>UW   { align1 2Q };
add(16)         g55<1>D         g39<1,1,0>D     g49<1,1,0>D     { align1 1H @3 $3.dst compacted };
mach(8)         g48<1>UD        g38<8,8,1>UD    g44<8,8,1>UD    { align1 2Q $3.src AccWrEnable };
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
sel.l(16)       g7<1>F          g67<1,1,0>F     g92<1,1,0>F     { align1 1H $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(16)       g15<1>F         g69<1,1,0>F     g94<1,1,0>F     { align1 1H $7.src compacted };
sel.ge(16)      g19<1>F         g67<1,1,0>F     g92<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g21<1>F         g69<1,1,0>F     g94<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g101UD          g74UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
cmp.l.f0.0(16)  g105<1>F        (abs)g101<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $12.dst compacted };
sel.l(16)       g125<1>F        g101<1,1,0>F    g71<1,1,0>F     { align1 1H $8.src compacted };
sel.ge(16)      g17<1>F         g101<1,1,0>F    g71<1,1,0>F     { align1 1H compacted };
cmp.l.f0.0(16)  g109<1>F        (abs)g69<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g113<1>F        (abs)g92<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g107<1>UD       g103<1,1,0>UD   g105<1,1,0>UD   { align1 1H F@5 compacted };
cmp.l.f0.0(16)  g115<1>F        (abs)g71<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g119<1>F        (abs)g94<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g111<1>UD       g107<1,1,0>UD   g109<1,1,0>UD   { align1 1H A@1 compacted };
and(16)         g117<1>UD       g113<1,1,0>UD   g115<1,1,0>UD   { align1 1H F@2 compacted };
and(16)         g121<1>UD       g117<1,1,0>UD   g119<1,1,0>UD   { align1 1H A@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
and.nz.f0.0(16) g123<1>UD       g111<1,1,0>UD   g121<1,1,0>UD   { align1 1H I@1 compacted };
(+f0.0) sel(16) g9<1>UD         g17<8,8,1>UD    0xff800000UD    { align1 1H F@5 };
(+f0.0) sel(16) g11<1>UD        g19<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g13<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g3<1>UD         g125<8,8,1>UD   0x7f800000UD    { align1 1H F@6 };
(+f0.0) sel(16) g5<1>UD         g7<8,8,1>UD     0x7f800000UD    { align1 1H };
mov(16)         g25<2>W         -g123<8,8,1>D                   { align1 1H I@6 };
(+f0.0) sel(16) g7<1>UD         g15<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(16)         g24<1>UW        g25<16,8,2>UW                   { align1 1H I@2 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g24<1>UW        0x0000UW                        { align1 1H I@2 };
mov(16)         g7<1>UD         0x7f800000UD                    { align1 1H I@4 };
mov(16)         g5<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g3<1>UD         0x7f800000UD                    { align1 1H I@6 };
mov(16)         g13<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g11<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g9<1>UD         0xff800000UD                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
and(16)         g22<1>UW        g24<1,1,0>UW    0x0001UW        { align1 1H I@3 compacted };
mov(16)         g23<1>W         g22<32,16,2>B                   { align1 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
cmp.nz.f0.0(16) g39<1>W         g23<16,16,1>W   0W              { align1 1H I@1 };
mov(16)         g32<1>D         g39<8,8,1>W                     { align1 1H I@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g32<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g40<1>UD        f0<0,1,0>UW                     { align1 1H $2.src };
bfi1(16)        g42<1>UD        g34<8,8,1>D     0D              { align1 1H $2.src };
cbit(16)        g58<1>UD        g40<8,8,1>UD                    { align1 1H I@2 };
cmp.z.f0.0(16)  null<1>D        g34<8,8,1>D     0D              { align1 1H };
and(16)         g44<1>UD        g40<1,1,0>UD    g42<1,1,0>UD    { align1 1H I@3 compacted };
cbit(16)        g46<1>UD        g44<8,8,1>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g48<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g50<1>UD        g48<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g54<2>UD        g48<4,4,1>UD                    { align1 1Q };
mov(8)          g56<2>UD        g49<4,4,1>UD                    { align1 2Q };
add(16)         g52<1>D         -g50<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g54.1<2>UD      g52<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g56.1<2>UD      g53<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g54UD           g58UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g55<1>D         g46<1,1,0>D     g25<0,1,0>D     { align1 1H $13.dst compacted };
mov.nz.f0.0(16) null<1>D        g32<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
and(1)          g57<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shl(16)         g58<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H I@7 };
and(1)          g62<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g60<1>UD        g58<1,1,0>UD    0x000002c0UD    { align1 1H I@2 compacted };
or(16)          g63<1>UD        g58<1,1,0>UD    0x00000200UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
or(1)           a0.1<1>UD       g57<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g72UD           g60UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g62<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g63UD           g3UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
and(1)          g65<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
or(16)          g66<1>UD        g58<1,1,0>UD    0x00000240UD    { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g65<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g66UD           g5UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
and(1)          g68<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
or(16)          g69<1>UD        g58<1,1,0>UD    0x00000280UD    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g68<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g69UD           g7UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
and(1)          g71<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g71<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g60UD           g72UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
and(1)          g72<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
or(16)          g73<1>UD        g58<1,1,0>UD    0x000003c0UD    { align1 1H $2.src compacted };
and(1)          g75<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(16)          g76<1>UD        g58<1,1,0>UD    0x00000300UD    { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g72<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g85UD           g73UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g75<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g76UD           g9UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
and(1)          g78<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g79<1>UD        g58<1,1,0>UD    0x00000340UD    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g78<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g79UD           g11UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g81<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
or(16)          g82<1>UD        g58<1,1,0>UD    0x00000380UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g81<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g82UD           g13UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g84<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g84<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g73UD           g85UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
shl(16)         g85<1>D         g30<8,8,1>D     0x0000001dUD    { align1 1H $7.src };
and(1)          g87<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g88<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
and(1)          g90<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
or(1)           a0.1<1>UD       g87<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g91UD           g63UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
or(1)           a0.1<1>UD       g88<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g93UD           g66UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
or(1)           a0.1<1>UD       g89<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g95UD           g69UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g90<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g63UD           g91UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
and(1)          g91<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g91<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g66UD           g93UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
and(1)          g92<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g92<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g69UD           g95UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
and(1)          g93<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g93<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g60UD           g28UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
or(16)          g94<1>UD        g37<1,1,0>UD    g85<1,1,0>UD    { align1 1H I@7 compacted };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $13.src };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
and(1)          g98<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g99<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g29<1>UD        g94<8,8,1>UD                    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@5 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g100UD          g76UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g102UD          g79UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g98<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g104UD          g82UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
mov(16)         g23<1>UD        g100<8,8,1>UD                   { align1 1H $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
mov(16)         g25<1>UD        g102<8,8,1>UD                   { align1 1H $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
mov(16)         g27<1>UD        g104<8,8,1>UD                   { align1 1H $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g99<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g76UD           g100UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g79UD           g102UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
and(1)          g101<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g101<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g82UD           g104UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
and(1)          g102<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g102<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g73UD           g94UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
shl(16)         g103<1>D        g55<8,8,1>D     0x00000005UD    { align1 1H $7.src };
shr(16)         g105<1>UD       g55<1,1,0>UD    0x0000001bUD    { align1 1H $2.src compacted };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g118<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g119<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g120<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g107<1>D        g2.4<0,1,0>D    g103<1,1,0>D    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g117<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g15UD           g63UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g118<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g17UD           g66UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g119<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g19UD           g69UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g120<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g21UD           g60UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
cmp.l.f0.0(16)  g109<1>UD       g107<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g113<2>UD       g107<4,4,1>UD                   { align1 1Q };
mov(8)          g115<2>UD       g108<4,4,1>UD                   { align1 2Q };
add3(16)        g111<1>D        g2.5<0,1,0>D    g105<8,8,1>D    -g109<1,1,1>D { align1 1H I@3 };
mov(8)          g113.1<2>UD     g111<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g115.1<2>UD     g112<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g113UD          g15UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $4 };
add(16)         g121<1>D        g107<1,1,0>D    16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g123<1>UD       g121<1,1,0>UD   g107<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g15<2>UD        g121<4,4,1>UD                   { align1 1Q $4.src };
mov(8)          g17<2>UD        g122<4,4,1>UD                   { align1 2Q $4.src };
add(16)         g125<1>D        -g123<1,1,0>D   g111<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g15.1<2>UD      g125<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g17.1<2>UD      g126<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g15UD           g23UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $13 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
add(16)         g16<1>F         g3<1,1,0>F      g9<1,1,0>F      { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g18<1>F         g5<1,1,0>F      g11<1,1,0>F     { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
add(16)         g20<1>F         g7<1,1,0>F      g13<1,1,0>F     { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
cmp.ge.f0.0(16) g22<1>F         g9<1,1,0>F      g3<1,1,0>F      { align1 1H $4.src compacted };
mov(16)         g42<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g42<1>F         g3<1,1,0>F                      { align1 1H compacted };
and(1)          g44<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g45<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
(+f0.0) sel(16) g24<1>UD        g16<8,8,1>UD    0x7f800000UD    { align1 1H F@5 };
mov(8)          g32<2>UD        g42.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
or(16)          g47<1>UD        g45<1,1,0>UD    0x00000580UD    { align1 1H I@3 compacted };
cmp.ge.f0.0(16) g26<1>F         g11<1,1,0>F     g5<1,1,0>F      { align1 1H $13.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.l(8)        g30<2>F         g42<8,4,2>F     g32<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
(+f0.0) sel(16) g28<1>UD        g18<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
mov(8)          g42.1<2>UD      g30<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.ge.f0.0(16) g30<1>F         g13<1,1,0>F     g7<1,1,0>F      { align1 1H compacted };
mov(4)          g39<4>UD        g42.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g49<4>UD        g42.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g32<1>UD        g20<8,8,1>UD    0x7f800000UD    { align1 1H };
sel.l(4)        g37<4>F         g39<8,2,4>F     g49<8,2,4>F     { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) null<1>D        g22<8,8,1>D     0D              { align1 1H F@6 };
mov(4)          g42.2<4>UD      g37<8,2,4>UD                    { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g36<1>UD        g16<8,8,1>UD    0xff800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g53<4>UD        g42.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g55<4>UD        g42.3<8,2,4>UD                  { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>D        g26<8,8,1>D     0D              { align1 1H F@4 };
sel.l(4)        g51<4>F         g53<8,2,4>F     g55<8,2,4>F     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g38<1>UD        g18<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g42.3<4>UD      g51<8,2,4>UD                    { align1 WE_all 1N F@1 };
cmp.nz.f0.0(16) null<1>D        g30<8,8,1>D     0D              { align1 1H F@3 };
sel.l(4)        g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g40<1>UD        g20<8,8,1>UD    0xff800000UD    { align1 1H };
sel.l(8)        g43<1>F         g42.7<0,1,0>F   g43<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g105<1>UD       g43.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g44<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g47UD           g105UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
mov(16)         g49<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g49<1>F         g5<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
and(1)          g51<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
or(16)          g52<1>UD        g45<1,1,0>UD    0x000005c0UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(8)          g58<2>UD        g49.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sel.l(8)        g56<2>F         g49<8,4,2>F     g58<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g49.1<2>UD      g56<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g62<4>UD        g49.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g64<4>UD        g49.2<8,2,4>UD                  { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(4)        g60<4>F         g62<8,2,4>F     g64<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g49.2<4>UD      g60<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g68<4>UD        g49.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g70<4>UD        g49.3<8,2,4>UD                  { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(4)        g66<4>F         g68<8,2,4>F     g70<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g49.3<4>UD      g66<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g49.4<1>F       g49.3<0,1,0>F   g49.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g50.4<1>F       g50.3<0,1,0>F   g50.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g50<1>F         g49.7<0,1,0>F   g50<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g106<1>UD       g50.7<0,1,0>UD                  { align1 1H $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g51<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g52UD           g106UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
mov(16)         g53<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $6.src compacted };
mov(16)         g53<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
and(1)          g55<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g56<1>UD        g45<1,1,0>UD    0x00000600UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g73<2>UD        g53.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.l(8)        g71<2>F         g53<8,4,2>F     g73<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g53.1<2>UD      g71<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g77<4>UD        g53.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g79<4>UD        g53.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.l(4)        g75<4>F         g77<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g53.2<4>UD      g75<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g83<4>UD        g53.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g85<4>UD        g53.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(4)        g81<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g53.3<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g53.4<1>F       g53.3<0,1,0>F   g53.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g54.4<1>F       g54.3<0,1,0>F   g54.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g54<1>F         g53.7<0,1,0>F   g54<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g107<1>UD       g54.7<0,1,0>UD                  { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g55<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g56UD           g107UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
mov(16)         g57<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H $7.src compacted };
mov(16)         g57<1>F         g9<1,1,0>F                      { align1 1H compacted };
and(1)          g59<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g60<1>UD        g45<1,1,0>UD    0x00000640UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g88<2>UD        g57.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g86<2>F         g57<8,4,2>F     g88<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g57.1<2>UD      g86<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g92<4>UD        g57.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g94<4>UD        g57.2<8,2,4>UD                  { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(4)       g90<4>F         g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g57.2<4>UD      g90<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g98<4>UD        g57.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g100<4>UD       g57.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.ge(4)       g96<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g57.3<4>UD      g96<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g57.4<1>F       g57.3<0,1,0>F   g57.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g58.4<1>F       g58.3<0,1,0>F   g58.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g58<1>F         g57.7<0,1,0>F   g58<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g108<1>UD       g58.7<0,1,0>UD                  { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g59<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g60UD           g108UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
mov(16)         g62<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g62<1>F         g11<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
and(1)          g64<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g65<1>UD        g45<1,1,0>UD    0x00000680UD    { align1 1H compacted };
mov(8)          g103<2>UD       g62.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g101<2>F        g62<8,4,2>F     g103<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g62.1<2>UD      g101<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g107<4>UD       g62.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g109<4>UD       g62.2<8,2,4>UD                  { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sel.ge(4)       g105<4>F        g107<8,2,4>F    g109<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g62.2<4>UD      g105<8,2,4>UD                   { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g113<4>UD       g62.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g115<4>UD       g62.3<8,2,4>UD                  { align1 WE_all 1N $4.src };
sel.ge(4)       g111<4>F        g113<8,2,4>F    g115<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g62.3<4>UD      g111<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g62.4<1>F       g62.3<0,1,0>F   g62.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g63.4<1>F       g63.3<0,1,0>F   g63.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g63<1>F         g62.7<0,1,0>F   g63<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g109<1>UD       g63.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g64<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g109UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
mov(16)         g66<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H $8.src compacted };
mov(16)         g66<1>F         g13<1,1,0>F                     { align1 1H compacted };
and(1)          g68<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g69<1>UD        g45<1,1,0>UD    0x000006c0UD    { align1 1H compacted };
mov(8)          g118<2>UD       g66.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g116<2>F        g66<8,4,2>F     g118<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g66.1<2>UD      g116<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g122<4>UD       g66.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g124<4>UD       g66.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g120<4>F        g122<8,2,4>F    g124<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g66.2<4>UD      g120<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g3<4>UD         g66.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g5<4>UD         g66.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g126<4>F        g3<8,2,4>F      g5<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g66.3<4>UD      g126<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g66.4<1>F       g66.3<0,1,0>F   g66.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g67.4<1>F       g67.3<0,1,0>F   g67.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g67<1>F         g66.7<0,1,0>F   g67<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g110<1>UD       g67.7<0,1,0>UD                  { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g68<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g69UD           g110UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g70<1>D         g2.2<0,1,0>D    128D            { align1 1H $5.src compacted };
shl(16)         g75<1>D         g34<8,8,1>D     0x00000002UD    { align1 1H };
shr(16)         g77<1>UD        g34<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g72<1>UD        g70<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g79<1>D         g70<1,1,0>D     g75<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g74<1>D         -g72<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    g70<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g85<2>UD        g79<4,4,1>UD                    { align1 1Q };
mov(8)          g87<2>UD        g80<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g83<1>D         g74<8,8,1>D     g77<8,8,1>D     -g81<1,1,1>D { align1 1H };
mov(8)          g85.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g87.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g89<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $5.src };
send(16)        g111UD          g47UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
(+f0.0) sel(16) g111<1>UD       g50.7<0,1,0>UD  g54.7<0,1,0>UD  { align1 1H };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g85UD           g111UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
add(16)         g90<1>D         g79<1,1,0>D     12D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g92<1>UD        g90<1,1,0>UD    g79<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000001UD    { align1 1H };
mov(8)          g96<2>UD        g90<4,4,1>UD                    { align1 1Q };
mov(8)          g98<2>UD        g91<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g94<1>D         -g92<1,1,0>D    g83<1,1,0>D     { align1 1H compacted };
mov(8)          g96.1<2>UD      g94<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g98.1<2>UD      g95<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL11         UIP:  LABEL10             { align1 1H };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $5.src };
send(16)        g112UD          g60UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
else(16)        JIP:  LABEL10         UIP:  LABEL10             { align1 1H };

LABEL11:
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
(+f0.0) sel(16) g112<1>UD       g63.7<0,1,0>UD  g67.7<0,1,0>UD  { align1 1H };

LABEL10:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g96UD           g112UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };

LABEL7:
endif(16)       JIP:  LABEL12                                   { align1 1H };

LABEL12:
mov(16)         g101<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g101<1>F        g24<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
and(1)          g103<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g104<1>UD       g45<1,1,0>UD    0x00000400UD    { align1 1H compacted };
mov(8)          g8<2>UD         g101.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g6<2>F          g101<8,4,2>F    g8<8,4,2>F      { align1 WE_all 1Q I@1 };
mov(8)          g101.1<2>UD     g6<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(4)          g12<4>UD        g101.1<8,2,4>UD                 { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(4)          g14<4>UD        g101.2<8,2,4>UD                 { align1 WE_all 1N F@7 };
sel.l(4)        g10<4>F         g12<8,2,4>F     g14<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g101.2<4>UD     g10<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g18<4>UD        g101.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g20<4>UD        g101.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g16<4>F         g18<8,2,4>F     g20<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g101.3<4>UD     g16<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g101.4<1>F      g101.3<0,1,0>F  g101.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g102.4<1>F      g102.3<0,1,0>F  g102.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g102<1>F        g101.7<0,1,0>F  g102<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g113<1>UD       g102.7<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g103<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g104UD          g113UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
mov(16)         g106<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g106<1>F        g28<1,1,0>F                     { align1 1H compacted };
and(1)          g108<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
or(16)          g109<1>UD       g45<1,1,0>UD    0x00000440UD    { align1 1H $8.src compacted };
mov(8)          g23<2>UD        g106.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g21<2>F         g106<8,4,2>F    g23<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g106.1<2>UD     g21<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g27<4>UD        g106.1<8,2,4>UD                 { align1 WE_all 1N A@1 };
mov(4)          g29<4>UD        g106.2<8,2,4>UD                 { align1 WE_all 1N F@2 };
sel.l(4)        g25<4>F         g27<8,2,4>F     g29<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g106.2<4>UD     g25<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g47<4>UD        g106.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g49<4>UD        g106.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g42<4>F         g47<8,2,4>F     g49<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g106.3<4>UD     g42<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g106.4<1>F      g106.3<0,1,0>F  g106.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g107.4<1>F      g107.3<0,1,0>F  g107.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g107<1>F        g106.7<0,1,0>F  g107<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g114<1>UD       g107.7<0,1,0>UD                 { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g108<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g109UD          g114UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g110<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H $11.src compacted };
mov(16)         g110<1>F        g32<1,1,0>F                     { align1 1H compacted };
and(1)          g112<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
or(16)          g113<1>UD       g45<1,1,0>UD    0x00000480UD    { align1 1H $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g52<2>UD        g110.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g50<2>F         g110<8,4,2>F    g52<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g110.1<2>UD     g50<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g56<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g58<4>UD        g110.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g54<4>F         g56<8,2,4>F     g58<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g110.2<4>UD     g54<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g62<4>UD        g110.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g64<4>UD        g110.3<8,2,4>UD                 { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(4)        g60<4>F         g62<8,2,4>F     g64<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g110.3<4>UD     g60<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g110.4<1>F      g110.3<0,1,0>F  g110.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g111<1>F        g110.7<0,1,0>F  g111<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g115<1>UD       g111.7<0,1,0>UD                 { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g112<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g113UD          g115UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
mov(16)         g114<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H $12.src compacted };
mov(16)         g114<1>F        g36<1,1,0>F                     { align1 1H compacted };
and(1)          g116<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(16)          g117<1>UD       g45<1,1,0>UD    0x000004c0UD    { align1 1H compacted };
mov(8)          g67<2>UD        g114.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g65<2>F         g114<8,4,2>F    g67<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g114.1<2>UD     g65<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g71<4>UD        g114.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g73<4>UD        g114.2<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g69<4>F         g71<8,2,4>F     g73<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g114.2<4>UD     g69<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g77<4>UD        g114.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g79<4>UD        g114.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g75<4>F         g77<8,2,4>F     g79<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g114.3<4>UD     g75<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g114.4<1>F      g114.3<0,1,0>F  g114.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g115.4<1>F      g115.3<0,1,0>F  g115.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g115<1>F        g114.7<0,1,0>F  g115<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g119<1>UD       g115.7<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g116<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g117UD          g119UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
mov(16)         g119<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H $13.src compacted };
mov(16)         g119<1>F        g38<1,1,0>F                     { align1 1H compacted };
and(1)          g121<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g122<1>UD       g45<1,1,0>UD    0x00000500UD    { align1 1H compacted };
mov(8)          g82<2>UD        g119.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g80<2>F         g119<8,4,2>F    g82<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g119.1<2>UD     g80<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g86<4>UD        g119.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g88<4>UD        g119.2<8,2,4>UD                 { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g84<4>F         g86<8,2,4>F     g88<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g119.2<4>UD     g84<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g92<4>UD        g119.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g94<4>UD        g119.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g90<4>F         g92<8,2,4>F     g94<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g119.3<4>UD     g90<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g119.4<1>F      g119.3<0,1,0>F  g119.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g120.4<1>F      g120.3<0,1,0>F  g120.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g120<1>F        g119.7<0,1,0>F  g120<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g124<1>UD       g120.7<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g121<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g122UD          g124UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
mov(16)         g123<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H $14.src compacted };
mov(16)         g123<1>F        g40<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
and(1)          g125<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $14.src };
or(16)          g126<1>UD       g45<1,1,0>UD    0x00000540UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g97<2>UD        g123.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(8)       g95<2>F         g123<8,4,2>F    g97<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g123.1<2>UD     g95<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g101<4>UD       g123.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g108<4>UD       g123.2<8,2,4>UD                 { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.ge(4)       g99<4>F         g101<8,2,4>F    g108<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g123.2<4>UD     g99<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g114<4>UD       g123.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g121<4>UD       g123.3<8,2,4>UD                 { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.ge(4)       g112<4>F        g114<8,2,4>F    g121<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g123.3<4>UD     g112<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g123.4<1>F      g123.3<0,1,0>F  g123.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g124.4<1>F      g124.3<0,1,0>F  g124.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g124<1>F        g123.7<0,1,0>F  g124<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g3<1>UD         g124.7<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g125<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g126UD          g3UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
shl(16)         g3<1>D          g34<8,8,1>D     0x00000002UD    { align1 1H $13.src };
shr(16)         g5<1>UD         g34<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g7<1>D          g2<0,1,0>D      g3<1,1,0>D      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g9<1>UD         g7<1,1,0>UD     g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g13<2>UD        g7<4,4,1>UD                     { align1 1Q };
mov(8)          g15<2>UD        g8<4,4,1>UD                     { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g11<1>D         g2.1<0,1,0>D    g5<8,8,1>D      -g9<1,1,1>D { align1 1H };
mov(8)          g13.1<2>UD      g11<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g15.1<2>UD      g12<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
and(1)          g17<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g17<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $10.src };
send(16)        g4UD            g104UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g4<1>UD         g107.7<0,1,0>UD g111.7<0,1,0>UD { align1 1H @5 $10.dst };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g13UD           g4UD            0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $13 };
add(16)         g18<1>D         g7<1,1,0>D      16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g20<1>UD        g18<1,1,0>UD    g7<1,1,0>UD     { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000001UD    { align1 1H };
mov(8)          g24<2>UD        g18<4,4,1>UD                    { align1 1Q };
mov(8)          g26<2>UD        g19<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g22<1>D         -g20<1,1,0>D    g11<1,1,0>D     { align1 1H compacted };
mov(8)          g24.1<2>UD      g22<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g26.1<2>UD      g23<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
and(1)          g28<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g28<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $13.src };
send(16)        g5UD            g117UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g5<1>UD         g120.7<0,1,0>UD g124.7<0,1,0>UD { align1 1H $13.dst };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g24UD           g5UD            0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $15 };

LABEL13:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q $13.src };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_code[] = {
    0x80000065, 0x7a058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x25050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa007a0c, 0x00340000,
    0xe27b3040, 0x04017a03, 0x80030061, 0x24054410,
    0x00000000, 0x76543210, 0x00041b69, 0x20058660,
    0x02462505, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa007b0c, 0x00300000, 0x64241a40, 0x00802495,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x22050120, 0x00462405, 0x00000000,
    0xa0251940, 0x22002002, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x27260660,
    0x00000324, 0x00000000, 0x00130061, 0x29260660,
    0x00000324, 0x00000000, 0x00040065, 0x1c058220,
    0x02000344, 0x00ffffff, 0x00040061, 0x1e050020,
    0x0000035c, 0x00000000, 0x00031c61, 0x27060660,
    0x00000304, 0x00000000, 0x00131c61, 0x29060660,
    0x00000304, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x1a140000,
    0xfb002724, 0x00000000, 0x0004f270, 0x00010220,
    0x52462505, 0x00461a05, 0x01040022, 0x0001c060,
    0x00000618, 0x000005a8, 0x80000065, 0x49058220,
    0x020000a4, 0xfffffc00, 0x00040069, 0x4a058120,
    0x02462405, 0x00000002, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x2f260660,
    0x000002e4, 0x00000000, 0x00130061, 0x31260660,
    0x000002e4, 0x00000000, 0x00031a61, 0x2f060660,
    0x000002c4, 0x00000000, 0x00131a61, 0x31060660,
    0x000002c4, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x27440000,
    0xfb002f24, 0x000c0000, 0x00032341, 0x20010220,
    0x01462505, 0x00562b06, 0x00042341, 0x31050660,
    0x01462505, 0x00562b06, 0x00040041, 0x06050660,
    0x01462505, 0x00562b16, 0x00042341, 0x33050660,
    0x01462505, 0x00562d06, 0x00040041, 0x08050660,
    0x01462505, 0x00562d16, 0x3e2f3349, 0x2b002503,
    0x00041c40, 0x31160110, 0x01563116, 0x00560606,
    0x00041b40, 0x33160110, 0x01563316, 0x00560806,
    0x00130041, 0x20010220, 0x01462605, 0x00562c06,
    0xa037b340, 0x31002702, 0x00133349, 0x30050222,
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
    0x27073a62, 0x5c004300, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x270f3762, 0x5e004500,
    0x25130062, 0x5c004300, 0x25150062, 0x5e004500,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006404, 0x0000000f,
    0x00049c31, 0x65160100, 0xfa004a14, 0x04000000,
    0xe7692c70, 0x7f836500, 0x277d3862, 0x47006500,
    0x25110062, 0x47006500, 0xe76d0070, 0x7f834500,
    0xe7710070, 0x7f835c00, 0x206b1565, 0x69006703,
    0xe7730070, 0x7f834700, 0xe7770070, 0x7f835e00,
    0x206f0965, 0x6d006b03, 0x20751265, 0x73007103,
    0x20790965, 0x77007503, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x2e7b1965, 0x79006f03,
    0x01041562, 0x09058220, 0x02461105, 0xff800000,
    0x01041762, 0x0b058220, 0x02461305, 0xff800000,
    0x01041762, 0x0d058220, 0x02461505, 0xff800000,
    0x01041662, 0x03058220, 0x02467d05, 0x7f800000,
    0x01040062, 0x05058220, 0x02460705, 0x7f800000,
    0x00041e61, 0x19062650, 0x00467b05, 0x00000000,
    0x01041762, 0x07058220, 0x02460f05, 0x7f800000,
    0x00041a61, 0x18050110, 0x00561906, 0x00000000,
    0x00040024, 0x0001c060, 0x00000080, 0x00000080,
    0x00041a61, 0x18054110, 0x00000000, 0x00000000,
    0x00041c61, 0x07054220, 0x00000000, 0x7f800000,
    0x00041f61, 0x05054220, 0x00000000, 0x7f800000,
    0x00041e61, 0x03054220, 0x00000000, 0x7f800000,
    0x00040061, 0x0d054220, 0x00000000, 0xff800000,
    0x00040061, 0x0b054220, 0x00000000, 0xff800000,
    0x00040061, 0x09054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x60161b65, 0x00101805, 0x00041961, 0x17050450,
    0x00681606, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00041970, 0x27058550,
    0x25581705, 0x00000000, 0x00041961, 0x20050560,
    0x00462705, 0x00000000, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22462005, 0x00000000, 0x00043261, 0x28050120,
    0x00003000, 0x00000000, 0x00043279, 0x2a058620,
    0x06462205, 0x00000000, 0x00041a4d, 0x3a050220,
    0x00462805, 0x00000000, 0x00040070, 0x00018660,
    0x16462205, 0x00000000, 0x202c1b65, 0x2a002803,
    0x0004194d, 0x2e050220, 0x00462c05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000098, 0x00000098,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0300040, 0x02410203, 0x27321970, 0x02103003,
    0x00030061, 0x36060220, 0x00343005, 0x00000000,
    0x00130061, 0x38060220, 0x00343105, 0x00000000,
    0xa0341b40, 0x02123212, 0x00031961, 0x36260220,
    0x00343405, 0x00000000, 0x00131a61, 0x38260220,
    0x00343505, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x19140000,
    0xfb183624, 0x01003a14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0372d40, 0x19102e02,
    0x00040061, 0x00010660, 0x20462005, 0x00000000,
    0x01040022, 0x0001c060, 0x00000af8, 0x00000af8,
    0x80003d65, 0x39058220, 0x020000a4, 0xfffffc00,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x00041f69, 0x3a058120, 0x02462405, 0x00000002,
    0x80003465, 0x3e058220, 0x020000a4, 0xfffffc00,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xe03c1a66, 0x2c003a03, 0xe03f3466, 0x20003a03,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003904, 0x0000000f,
    0x00049e31, 0x48160100, 0xfa003c14, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003e04, 0x0000008f,
    0x00049f31, 0x00020100, 0xfa083f14, 0x04000304,
    0x80003565, 0x41058220, 0x020000a4, 0xfffffc00,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xe0421766, 0x24003a03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004104, 0x0000008f, 0x00049031, 0x00020100,
    0xfa084214, 0x04000504, 0x80001765, 0x44058220,
    0x020000a4, 0xfffffc00, 0xe0451466, 0x28003a03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004404, 0x0000008f,
    0x00049131, 0x00020100, 0xfa084514, 0x04000704,
    0x80001265, 0x47058220, 0x020000a4, 0xfffffc00,
    0x80002e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004704, 0x0000008f,
    0x00049231, 0x00020100, 0xfa083c14, 0x04004804,
    0x80003265, 0x48058220, 0x020000a4, 0xfffffc00,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xe0493266, 0x3c003a03, 0x80003c65, 0x4b058220,
    0x020000a4, 0xfffffc00, 0xe04c3666, 0x30003a03,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004804, 0x0000000f,
    0x00049331, 0x55160100, 0xfa004914, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004b04, 0x0000008f,
    0x00049431, 0x00020100, 0xfa084c14, 0x04000904,
    0x80000065, 0x4e058220, 0x020000a4, 0xfffffc00,
    0xe04f3766, 0x34003a03, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004e04, 0x0000008f, 0x00049531, 0x00020100,
    0xfa084f14, 0x04000b04, 0x80003865, 0x51058220,
    0x020000a4, 0xfffffc00, 0xe0520066, 0x38003a03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005104, 0x0000008f,
    0x00049631, 0x00020100, 0xfa085214, 0x04000d04,
    0x80000065, 0x54058220, 0x020000a4, 0xfffffc00,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005404, 0x0000008f,
    0x00049731, 0x00020100, 0xfa084914, 0x04005504,
    0x00043769, 0x55058660, 0x02461e05, 0x0000001d,
    0x80000065, 0x57058220, 0x020000a4, 0xfffffc00,
    0x80003965, 0x58058220, 0x020000a4, 0xfffffc00,
    0x80003965, 0x59058220, 0x020000a4, 0xfffffc00,
    0x80003965, 0x5a058220, 0x020000a4, 0xfffffc00,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005704, 0x0000000f,
    0x00049831, 0x5b160100, 0xfa003f14, 0x04000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005804, 0x0000000f,
    0x00049931, 0x5d160100, 0xfa004214, 0x04000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005904, 0x0000000f,
    0x00049a31, 0x5f160100, 0xfa004514, 0x04000000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005a04, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa083f14, 0x04005b04,
    0x80003b65, 0x5b058220, 0x020000a4, 0xfffffc00,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005b04, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa084214, 0x04005d04,
    0x80003b65, 0x5c058220, 0x020000a4, 0xfffffc00,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005c04, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa084514, 0x04005f04,
    0x80003c65, 0x5d058220, 0x020000a4, 0xfffffc00,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005d04, 0x0000008f,
    0x00049e31, 0x00020100, 0xfa083c14, 0x04001c04,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x205e1f66, 0x55002503, 0x80003d65, 0x60058220,
    0x020000a4, 0xfffffc00, 0x80003a65, 0x61058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x62058220,
    0x020000a4, 0xfffffc00, 0x80003b65, 0x63058220,
    0x020000a4, 0xfffffc00, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x00041d61, 0x1d050220,
    0x00465e05, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80000d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006004, 0x0000000f, 0x00049f31, 0x64160100,
    0xfa004c14, 0x04000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006104, 0x0000000f, 0x00049031, 0x66160100,
    0xfa004f14, 0x04000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006204, 0x0000000f, 0x00049131, 0x68160100,
    0xfa005214, 0x04000000, 0x00042f61, 0x17050220,
    0x00466405, 0x00000000, 0x80002d01, 0x00000000,
    0x00000000, 0x00000000, 0x00042061, 0x19050220,
    0x00466605, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x00042161, 0x1b050220,
    0x00466805, 0x00000000, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006304, 0x0000008f, 0x00049631, 0x00020100,
    0xfa084c14, 0x04006404, 0x80003665, 0x64058220,
    0x020000a4, 0xfffffc00, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006404, 0x0000008f, 0x00049731, 0x00020100,
    0xfa084f14, 0x04006604, 0x80003665, 0x65058220,
    0x020000a4, 0xfffffc00, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006504, 0x0000008f, 0x00049231, 0x00020100,
    0xfa085214, 0x04006804, 0x80003765, 0x66058220,
    0x020000a4, 0xfffffc00, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006604, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa084914, 0x04005e04, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x00043769, 0x67058660,
    0x02463705, 0x00000005, 0xe0693268, 0x01b03703,
    0x80000065, 0x75058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x76058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x77058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x78058220, 0x020000a4, 0xfffffc00,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa06b1e40, 0x6701025a, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007504, 0x0000000f, 0x00049431, 0x0f160100,
    0xfa003f14, 0x04000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007604, 0x0000000f, 0x00049531, 0x11160100,
    0xfa004214, 0x04000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007704, 0x0000000f, 0x00049331, 0x13160100,
    0xfa004514, 0x04000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007804, 0x0000000f, 0x00049431, 0x15160100,
    0xfa003c14, 0x04000000, 0x276d1970, 0x02106b0b,
    0x00030061, 0x71060220, 0x00346b05, 0x00000000,
    0x00130061, 0x73060220, 0x00346c05, 0x00000000,
    0x00041b52, 0x6f040660, 0x0e2e02a4, 0x6d056905,
    0x00031961, 0x71260220, 0x00346f05, 0x00000000,
    0x00131a61, 0x73260220, 0x00347005, 0x00000000,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044431, 0x00000000, 0xfb087124, 0x000c0f44,
    0xa0790040, 0x01006b03, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x277b1970, 0x6b007903,
    0x00033461, 0x0f060220, 0x00347905, 0x00000000,
    0x00133461, 0x11060220, 0x00347a05, 0x00000000,
    0xa07d1b40, 0x6f027b02, 0x00031961, 0x0f260220,
    0x00347d05, 0x00000000, 0x00131a61, 0x11260220,
    0x00347e05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xfb080f24, 0x000c1744, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x20103f40, 0x09000300,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x20123040, 0x0b000500, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x20143140, 0x0d000700,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x25163470, 0x03000900, 0xa32a1f61, 0x7f810000,
    0x602a0061, 0x00100300, 0x80000065, 0x2c058220,
    0x020000a4, 0xfffffc00, 0x00040069, 0x2d058120,
    0x02462405, 0x00000002, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x01041562, 0x18058220,
    0x02461005, 0x7f800000, 0x80031161, 0x20060220,
    0x00442a26, 0x00000000, 0xe02f1b66, 0x58002d03,
    0x251a2d70, 0x05000b00, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80031a62, 0x1e060aa0,
    0x5a442a06, 0x00442006, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x01041662, 0x1c058220,
    0x02461205, 0x7f800000, 0x80030961, 0x2a260220,
    0x00441e06, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x251e0070, 0x07000d00,
    0x80021961, 0x27070220, 0x00422a27, 0x00000000,
    0x80020061, 0x31070220, 0x00422a47, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x20058220, 0x02461405, 0x7f800000,
    0x80021a62, 0x25070aa0, 0x5a422707, 0x00423107,
    0x00041670, 0x00018660, 0x26461605, 0x00000000,
    0x80021161, 0x2a470220, 0x00422507, 0x00000000,
    0x01040062, 0x24058220, 0x02461005, 0xff800000,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x35070220, 0x00422a27, 0x00000000,
    0x80020061, 0x37070220, 0x00422a67, 0x00000000,
    0x00041470, 0x00018660, 0x26461a05, 0x00000000,
    0x80021a62, 0x33070aa0, 0x5a423507, 0x00423707,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x26058220, 0x02461205, 0xff800000,
    0x80021161, 0x2a670220, 0x00423307, 0x00000000,
    0x00041370, 0x00018660, 0x26461e05, 0x00000000,
    0x80021a62, 0x2a850aa0, 0x5a002a64, 0x00342a85,
    0x80021a62, 0x2b850aa0, 0x5a002b64, 0x00342b85,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x28058220, 0x02461405, 0xff800000,
    0x80031162, 0x2b050aa0, 0x5a002ae4, 0x00462b05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x69050220, 0x00002be4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002c04, 0x0000008f,
    0x00049531, 0x00020100, 0xfa082f14, 0x04006904,
    0xa3310061, 0x7f810000, 0x60310061, 0x00100500,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x33058220, 0x020000a4, 0xfffffc00,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0xe0340066, 0x5c002d03, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x3a060220,
    0x00443126, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x38060aa0,
    0x5a443106, 0x00443a06, 0x80030961, 0x31260220,
    0x00443806, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x3e070220,
    0x00423127, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80023461, 0x40070220,
    0x00423147, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x3c070aa0,
    0x5a423e07, 0x00424007, 0x80021161, 0x31470220,
    0x00423c07, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x44070220,
    0x00423127, 0x00000000, 0x80023361, 0x46070220,
    0x00423167, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x42070aa0,
    0x5a424407, 0x00424607, 0x80021161, 0x31670220,
    0x00424207, 0x00000000, 0x80021962, 0x31850aa0,
    0x5a003164, 0x00343185, 0x80021962, 0x32850aa0,
    0x5a003264, 0x00343285, 0x80031162, 0x32050aa0,
    0x5a0031e4, 0x00463205, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043561, 0x6a050220,
    0x000032e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003304, 0x0000008f, 0x00049631, 0x00020100,
    0xfa083414, 0x04006a04, 0xa3353661, 0x7f810000,
    0x60350061, 0x00100700, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x37058220,
    0x020000a4, 0xfffffc00, 0xe0380066, 0x60002d03,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x49060220, 0x00443526, 0x00000000,
    0x80031962, 0x47060aa0, 0x5a443506, 0x00444906,
    0x80030961, 0x35260220, 0x00444706, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x4d070220, 0x00423527, 0x00000000,
    0x80023761, 0x4f070220, 0x00423547, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x4b070aa0, 0x5a424d07, 0x00424f07,
    0x80021161, 0x35470220, 0x00424b07, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x53070220, 0x00423527, 0x00000000,
    0x80020061, 0x55070220, 0x00423567, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x51070aa0, 0x5a425307, 0x00425507,
    0x80021161, 0x35670220, 0x00425107, 0x00000000,
    0x80021962, 0x35850aa0, 0x5a003564, 0x00343585,
    0x80021962, 0x36850aa0, 0x5a003664, 0x00343685,
    0x80031162, 0x36050aa0, 0x5a0035e4, 0x00463605,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043661, 0x6b050220, 0x000036e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003704, 0x0000008f,
    0x00049731, 0x00020100, 0xfa083814, 0x04006b04,
    0xa3393761, 0xff810000, 0x60390061, 0x00100900,
    0x80000065, 0x3b058220, 0x020000a4, 0xfffffc00,
    0xe03c0066, 0x64002d03, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x58060220,
    0x00443926, 0x00000000, 0x80031962, 0x56060aa0,
    0x4a443906, 0x00445806, 0x80030961, 0x39260220,
    0x00445606, 0x00000000, 0x80021961, 0x5c070220,
    0x00423927, 0x00000000, 0x80023c61, 0x5e070220,
    0x00423947, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x5a070aa0,
    0x4a425c07, 0x00425e07, 0x80021161, 0x39470220,
    0x00425a07, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x62070220,
    0x00423927, 0x00000000, 0x80020061, 0x64070220,
    0x00423967, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x60070aa0,
    0x4a426207, 0x00426407, 0x80021161, 0x39670220,
    0x00426007, 0x00000000, 0x80021962, 0x39850aa0,
    0x4a003964, 0x00343985, 0x80021962, 0x3a850aa0,
    0x4a003a64, 0x00343a85, 0x80031162, 0x3a050aa0,
    0x4a0039e4, 0x00463a05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043761, 0x6c050220,
    0x00003ae4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003b04, 0x0000008f, 0x00049531, 0x00020100,
    0xfa083c14, 0x04006c04, 0xa33e0061, 0xff810000,
    0x603e0061, 0x00100b00, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x40058220,
    0x020000a4, 0xfffffc00, 0xe0410066, 0x68002d03,
    0x80031161, 0x67060220, 0x00443e26, 0x00000000,
    0x80031962, 0x65060aa0, 0x4a443e06, 0x00446706,
    0x80030961, 0x3e260220, 0x00446506, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x6b070220, 0x00423e27, 0x00000000,
    0x80023561, 0x6d070220, 0x00423e47, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x69070aa0, 0x4a426b07, 0x00426d07,
    0x80021161, 0x3e470220, 0x00426907, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x71070220, 0x00423e27, 0x00000000,
    0x80023461, 0x73070220, 0x00423e67, 0x00000000,
    0x80021962, 0x6f070aa0, 0x4a427107, 0x00427307,
    0x80021161, 0x3e670220, 0x00426f07, 0x00000000,
    0x80021962, 0x3e850aa0, 0x4a003e64, 0x00343e85,
    0x80021962, 0x3f850aa0, 0x4a003f64, 0x00343f85,
    0x80031162, 0x3f050aa0, 0x4a003ee4, 0x00463f05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x6d050220, 0x00003fe4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004004, 0x0000008f,
    0x00049831, 0x00020100, 0xfa084114, 0x04006d04,
    0xa3423861, 0xff810000, 0x60420061, 0x00100d00,
    0x80000065, 0x44058220, 0x020000a4, 0xfffffc00,
    0xe0450066, 0x6c002d03, 0x80031161, 0x76060220,
    0x00444226, 0x00000000, 0x80031962, 0x74060aa0,
    0x4a444206, 0x00447606, 0x80030961, 0x42260220,
    0x00447406, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x7a070220,
    0x00424227, 0x00000000, 0x80020061, 0x7c070220,
    0x00424247, 0x00000000, 0x80021962, 0x78070aa0,
    0x4a427a07, 0x00427c07, 0x80021161, 0x42470220,
    0x00427807, 0x00000000, 0x80021961, 0x03070220,
    0x00424227, 0x00000000, 0x80020061, 0x05070220,
    0x00424267, 0x00000000, 0x80021962, 0x7e070aa0,
    0x4a420307, 0x00420507, 0x80021161, 0x42670220,
    0x00427e07, 0x00000000, 0x80021962, 0x42850aa0,
    0x4a004264, 0x00344285, 0x80021962, 0x43850aa0,
    0x4a004364, 0x00344385, 0x80031162, 0x43050aa0,
    0x4a0042e4, 0x00464305, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043861, 0x6e050220,
    0x000043e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004404, 0x0000008f, 0x00049531, 0x00020100,
    0xfa084514, 0x04006e04, 0x00040070, 0x00018220,
    0x52462205, 0x00000003, 0x01040022, 0x0001c060,
    0x00000318, 0x00000318, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0463540, 0x08010243,
    0x00040069, 0x4b058660, 0x02462205, 0x00000002,
    0xe04d0068, 0x01e02203, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27480070, 0x0210462b,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa04f0040, 0x4b004602, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa04a0040, 0x0212481a,
    0x27511a70, 0x46004f03, 0x00030061, 0x55060220,
    0x00344f05, 0x00000000, 0x00130061, 0x57060220,
    0x00345005, 0x00000000, 0x00040070, 0x00018220,
    0x52462205, 0x00000001, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x53040e68,
    0x0e2e4a05, 0x51054d05, 0x00031961, 0x55260220,
    0x00345305, 0x00000000, 0x00131a61, 0x57260220,
    0x00345405, 0x00000000, 0x01040022, 0x0001c060,
    0x00000090, 0x00000060, 0x80000065, 0x59058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003566, 0x10218220,
    0x02005904, 0x0000000f, 0x00049531, 0x6f160100,
    0xfa002f14, 0x04000000, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00040070, 0x00018220,
    0x52462205, 0x00000002, 0x80002501, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6f050220,
    0x020032e4, 0x000036e4, 0x00040025, 0x00004600,
    0x00000000, 0x00000188, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb2a5524, 0x01006f14, 0xa05a0040, 0x00c04f03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x275c0070, 0x4f005a03, 0x00040070, 0x00018220,
    0x52462205, 0x00000001, 0x00030061, 0x60060220,
    0x00345a05, 0x00000000, 0x00130061, 0x62060220,
    0x00345b05, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa05e0040, 0x53025c02,
    0x00031961, 0x60260220, 0x00345e05, 0x00000000,
    0x00131a61, 0x62260220, 0x00345f05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000090, 0x00000060,
    0x80000065, 0x64058220, 0x020000a4, 0xfffffc00,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003566, 0x10218220, 0x02006404, 0x0000000f,
    0x00049531, 0x70160100, 0xfa003c14, 0x04000000,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00040070, 0x00018220, 0x52462205, 0x00000002,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x70050220, 0x02003fe4, 0x000043e4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xfb2c6024, 0x01007014,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xa3650061, 0x7f810000, 0x60650061, 0x00101800,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x67058220, 0x020000a4, 0xfffffc00,
    0xe0680066, 0x40002d03, 0x80031161, 0x08060220,
    0x00446526, 0x00000000, 0x80031962, 0x06060aa0,
    0x5a446506, 0x00440806, 0x80030961, 0x65260220,
    0x00440606, 0x00000000, 0x80020961, 0x0c070220,
    0x00426527, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80021761, 0x0e070220,
    0x00426547, 0x00000000, 0x80021962, 0x0a070aa0,
    0x5a420c07, 0x00420e07, 0x80021161, 0x65470220,
    0x00420a07, 0x00000000, 0x80021961, 0x12070220,
    0x00426527, 0x00000000, 0x80020061, 0x14070220,
    0x00426567, 0x00000000, 0x80021962, 0x10070aa0,
    0x5a421207, 0x00421407, 0x80021161, 0x65670220,
    0x00421007, 0x00000000, 0x80021962, 0x65850aa0,
    0x5a006564, 0x00346585, 0x80021962, 0x66850aa0,
    0x5a006664, 0x00346685, 0x80031162, 0x66050aa0,
    0x5a0065e4, 0x00466605, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x71050220,
    0x000066e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006704, 0x0000008f, 0x00049a31, 0x00020100,
    0xfa086814, 0x04007104, 0xa36a0061, 0x7f810000,
    0x606a0061, 0x00101c00, 0x80000065, 0x6c058220,
    0x020000a4, 0xfffffc00, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0xe06d3866, 0x44002d03,
    0x80031161, 0x17060220, 0x00446a26, 0x00000000,
    0x80031962, 0x15060aa0, 0x5a446a06, 0x00441706,
    0x80030961, 0x6a260220, 0x00441506, 0x00000000,
    0x80020961, 0x1b070220, 0x00426a27, 0x00000000,
    0x80021261, 0x1d070220, 0x00426a47, 0x00000000,
    0x80021962, 0x19070aa0, 0x5a421b07, 0x00421d07,
    0x80021161, 0x6a470220, 0x00421907, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x2f070220, 0x00426a27, 0x00000000,
    0x80020061, 0x31070220, 0x00426a67, 0x00000000,
    0x80021962, 0x2a070aa0, 0x5a422f07, 0x00423107,
    0x80021161, 0x6a670220, 0x00422a07, 0x00000000,
    0x80021962, 0x6a850aa0, 0x5a006a64, 0x00346a85,
    0x80021962, 0x6b850aa0, 0x5a006b64, 0x00346b85,
    0x80031162, 0x6b050aa0, 0x5a006ae4, 0x00466b05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043a61, 0x72050220, 0x00006be4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006c04, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa086d14, 0x04007204,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0xa36e3b61, 0x7f810000, 0x606e0061, 0x00102000,
    0x80003965, 0x70058220, 0x020000a4, 0xfffffc00,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0713a66, 0x48002d03, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x34060220,
    0x00446e26, 0x00000000, 0x80031962, 0x32060aa0,
    0x5a446e06, 0x00443406, 0x80030961, 0x6e260220,
    0x00443206, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x38070220,
    0x00426e27, 0x00000000, 0x80020061, 0x3a070220,
    0x00426e47, 0x00000000, 0x80021962, 0x36070aa0,
    0x5a423807, 0x00423a07, 0x80021161, 0x6e470220,
    0x00423607, 0x00000000, 0x80021961, 0x3e070220,
    0x00426e27, 0x00000000, 0x80023861, 0x40070220,
    0x00426e67, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x3c070aa0,
    0x5a423e07, 0x00424007, 0x80021161, 0x6e670220,
    0x00423c07, 0x00000000, 0x80021962, 0x6e850aa0,
    0x5a006e64, 0x00346e85, 0x80021962, 0x6f850aa0,
    0x5a006f64, 0x00346f85, 0x80031162, 0x6f050aa0,
    0x5a006ee4, 0x00466f05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043b61, 0x73050220,
    0x00006fe4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007004, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa087114, 0x04007304, 0xa3723c61, 0xff810000,
    0x60720061, 0x00102400, 0x80003c65, 0x74058220,
    0x020000a4, 0xfffffc00, 0xe0750066, 0x4c002d03,
    0x80031161, 0x43060220, 0x00447226, 0x00000000,
    0x80031962, 0x41060aa0, 0x4a447206, 0x00444306,
    0x80030961, 0x72260220, 0x00444106, 0x00000000,
    0x80021961, 0x47070220, 0x00427227, 0x00000000,
    0x80020061, 0x49070220, 0x00427247, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x45070aa0, 0x4a424707, 0x00424907,
    0x80021161, 0x72470220, 0x00424507, 0x00000000,
    0x80021961, 0x4d070220, 0x00427227, 0x00000000,
    0x80020061, 0x4f070220, 0x00427267, 0x00000000,
    0x80021962, 0x4b070aa0, 0x4a424d07, 0x00424f07,
    0x80021161, 0x72670220, 0x00424b07, 0x00000000,
    0x80021962, 0x72850aa0, 0x4a007264, 0x00347285,
    0x80021962, 0x73850aa0, 0x4a007364, 0x00347385,
    0x80031162, 0x73050aa0, 0x4a0072e4, 0x00467305,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x77050220, 0x000073e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007404, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa087514, 0x04007704,
    0xa3773d61, 0xff810000, 0x60770061, 0x00102600,
    0x80000065, 0x79058220, 0x020000a4, 0xfffffc00,
    0xe07a0066, 0x50002d03, 0x80031161, 0x52060220,
    0x00447726, 0x00000000, 0x80031962, 0x50060aa0,
    0x4a447706, 0x00445206, 0x80030961, 0x77260220,
    0x00445006, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x56070220,
    0x00427727, 0x00000000, 0x80023561, 0x58070220,
    0x00427747, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x54070aa0,
    0x4a425607, 0x00425807, 0x80021161, 0x77470220,
    0x00425407, 0x00000000, 0x80021961, 0x5c070220,
    0x00427727, 0x00000000, 0x80020061, 0x5e070220,
    0x00427767, 0x00000000, 0x80021962, 0x5a070aa0,
    0x4a425c07, 0x00425e07, 0x80021161, 0x77670220,
    0x00425a07, 0x00000000, 0x80021962, 0x77850aa0,
    0x4a007764, 0x00347785, 0x80021962, 0x78850aa0,
    0x4a007864, 0x00347885, 0x80031162, 0x78050aa0,
    0x4a0077e4, 0x00467805, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x7c050220,
    0x000078e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007904, 0x0000008f, 0x00049e31, 0x00020100,
    0xfa087a14, 0x04007c04, 0xa37b3e61, 0xff810000,
    0x607b0061, 0x00102800, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003e65, 0x7d058220,
    0x020000a4, 0xfffffc00, 0xe07e0066, 0x54002d03,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x61060220, 0x00447b26, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80031962, 0x5f060aa0, 0x4a447b06, 0x00446106,
    0x80030961, 0x7b260220, 0x00445f06, 0x00000000,
    0x80021961, 0x65070220, 0x00427b27, 0x00000000,
    0x80023b61, 0x6c070220, 0x00427b47, 0x00000000,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x63070aa0, 0x4a426507, 0x00426c07,
    0x80021161, 0x7b470220, 0x00426307, 0x00000000,
    0x80021961, 0x72070220, 0x00427b27, 0x00000000,
    0x80023e61, 0x79070220, 0x00427b67, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x70070aa0, 0x4a427207, 0x00427907,
    0x80021161, 0x7b670220, 0x00427007, 0x00000000,
    0x80021962, 0x7b850aa0, 0x4a007b64, 0x00347b85,
    0x80021962, 0x7c850aa0, 0x4a007c64, 0x00347c85,
    0x80031162, 0x7c050aa0, 0x4a007be4, 0x00467c05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x03050220, 0x00007ce4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007d04, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa087e14, 0x04000304,
    0x00040070, 0x00018220, 0x52462205, 0x00000003,
    0x01040022, 0x0001c060, 0x000002e0, 0x000002e0,
    0x00043d69, 0x03058660, 0x02462205, 0x00000002,
    0xe0050068, 0x01e02203, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0070040, 0x03010202,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27090070, 0x02100703, 0x00030061, 0x0d060220,
    0x00340705, 0x00000000, 0x00130061, 0x0f060220,
    0x00340805, 0x00000000, 0x00040070, 0x00018220,
    0x52462205, 0x00000001, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x0b040660,
    0x0e2e0224, 0x09050505, 0x00031961, 0x0d260220,
    0x00340b05, 0x00000000, 0x00131a61, 0x0f260220,
    0x00340c05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000080, 0x00000060, 0x80000065, 0x11058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003a66, 0x10218220,
    0x02001104, 0x0000000f, 0x00049a31, 0x04160100,
    0xfa006814, 0x04000000, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x00040070, 0x00018220,
    0x52462205, 0x00000002, 0x0104da62, 0x04050220,
    0x02006be4, 0x00006fe4, 0x00040025, 0x00004600,
    0x00000000, 0x00000188, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044d31, 0x00000000,
    0xfb2a0d24, 0x01000414, 0xa0120040, 0x01000703,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27140070, 0x07001203, 0x00040070, 0x00018220,
    0x52462205, 0x00000001, 0x00030061, 0x18060220,
    0x00341205, 0x00000000, 0x00130061, 0x1a060220,
    0x00341305, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0160040, 0x0b021402,
    0x00031961, 0x18260220, 0x00341605, 0x00000000,
    0x00131a61, 0x1a260220, 0x00341705, 0x00000000,
    0x01040022, 0x0001c060, 0x00000080, 0x00000060,
    0x80000065, 0x1c058220, 0x020000a4, 0xfffffc00,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003d66, 0x10218220, 0x02001c04, 0x0000000f,
    0x00049d31, 0x05160100, 0xfa007514, 0x04000000,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00040070, 0x00018220, 0x52462205, 0x00000002,
    0x01042d62, 0x05050220, 0x020078e4, 0x00007ce4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044f31, 0x00000000, 0xfb2c1824, 0x01000514,
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
      .base.program_size = 12144,
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
const char *gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_sha1 = "ab5853d0c40d8c8adea7557db8b30e4da0358adc";

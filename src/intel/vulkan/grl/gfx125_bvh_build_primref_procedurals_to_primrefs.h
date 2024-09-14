#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_procedurals_to_primrefs_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_primref_procedurals_to_primrefs_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_primref_procedurals_to_primrefs_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 4 },
   { 36, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g55<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g6<1>UD         g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g55UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g56<1>UD        g55<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g35<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g31<1>D         g6<8,8,1>D      0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g56UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g35.8<1>UW      g35<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g106<1>UD       g35<8,8,1>UW                    { align1 1H };
add(16)         g36<1>D         g31<1,1,0>D     g106<1,1,0>D    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.l.f0.0(16)  null<1>UD       g36<8,8,1>UD    g3.1<0,1,0>UD   { align1 1H I@1 };
and(16)         g27<1>UD        g3<0,1,0>UD     0x00ffffffUD    { align1 1H };
mov(16)         g29<1>UD        g3.3<0,1,0>UB                   { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
and(1)          g72<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g73<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g7.1<2>D        g2.7<0,1,0>D                    { align1 1Q };
mov(8)          g9.1<2>D        g2.7<0,1,0>D                    { align1 2Q };
mov(8)          g7<2>D          g2.6<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g9<2>D          g2.6<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g38UD           g7UD            nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mul(8)          acc0<1>UD       g36<8,8,1>UD    g42<16,8,2>UW   { align1 1Q $2.dst };
mul(16)         g48<1>D         g36<8,8,1>D     g42<16,8,2>UW   { align1 1H $2.dst };
mul(16)         g75<1>D         g36<8,8,1>D     g42.1<16,8,2>UW { align1 1H };
mul(16)         g50<1>D         g36<8,8,1>D     g44<16,8,2>UW   { align1 1H $2.dst };
mul(16)         g77<1>D         g36<8,8,1>D     g44.1<16,8,2>UW { align1 1H };
mach(8)         g46<1>UD        g36<1,1,0>UD    g42<1,1,0>UD    { align1 1Q compacted AccWrEnable };
add(16)         g48.1<2>UW      g48.1<16,8,2>UW g75<16,8,2>UW   { align1 1H I@4 };
add(16)         g50.1<2>UW      g50.1<16,8,2>UW g77<16,8,2>UW   { align1 1H I@3 };
mul(8)          acc0<1>UD       g37<8,8,1>UD    g43<16,8,2>UW   { align1 2Q };
add(16)         g54<1>D         g38<1,1,0>D     g48<1,1,0>D     { align1 1H @3 $2.dst compacted };
mach(8)         g47<1>UD        g37<8,8,1>UD    g43<8,8,1>UD    { align1 2Q AccWrEnable };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g56<1>UD        g54<1,1,0>UD    g38<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g60<2>UD        g54<4,4,1>UD                    { align1 1Q };
mov(8)          g62<2>UD        g55<4,4,1>UD                    { align1 2Q };
add(16)         g52<1>D         g46<1,1,0>D     g50<1,1,0>D     { align1 1H I@4 compacted };
add3(16)        g58<1>D         g40<8,8,1>D     g52<8,8,1>D     -g56<1,1,1>D { align1 1H @1 $2.dst };
mov(8)          g60.1<2>UD      g58<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g62.1<2>UD      g59<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g64UD           g60UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
or(1)           a0.1<1>UD       g72<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g73UD           g64UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
and(1)          g75<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g76<1>UD        g73<1,1,0>UD    0x00000040UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g75<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g76UD           g66UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g77<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
or(16)          g78<1>UD        g73<1,1,0>UD    0x00000080UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g77<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g78UD           g68UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g79<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
or(16)          g80<1>UD        g73<1,1,0>UD    0x000000c0UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g79<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g80UD           g70UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
add(16)         g81<1>D         g54<1,1,0>D     16D             { align1 1H $7.src compacted };
and(1)          g95<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g96<1>UD        g73<1,1,0>UD    0x00000100UD    { align1 1H compacted };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g54<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g87<2>UD        g81<4,4,1>UD                    { align1 1Q };
mov(8)          g89<2>UD        g82<4,4,1>UD                    { align1 2Q };
add(16)         g85<1>D         -g83<1,1,0>D    g58<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g87.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g89.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g91UD           g87UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g95<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g96UD           g91UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
or(16)          g98<1>UD        g73<1,1,0>UD    0x00000140UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g98UD           g93UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
and(1)          g99<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g102<1>F        (abs)g66<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $5.src compacted };
sel.l(16)       g126<1>F        g66<1,1,0>F     g91<1,1,0>F     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.l(16)       g15<1>F         g68<1,1,0>F     g93<1,1,0>F     { align1 1H $6.src compacted };
sel.ge(16)      g19<1>F         g66<1,1,0>F     g91<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g21<1>F         g68<1,1,0>F     g93<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g99<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g100UD          g73UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
cmp.l.f0.0(16)  g104<1>F        (abs)g100<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $11.dst compacted };
sel.l(16)       g124<1>F        g100<1,1,0>F    g70<1,1,0>F     { align1 1H $7.src compacted };
sel.ge(16)      g17<1>F         g100<1,1,0>F    g70<1,1,0>F     { align1 1H compacted };
cmp.l.f0.0(16)  g108<1>F        (abs)g68<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g112<1>F        (abs)g91<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g33<1>UD        g102<1,1,0>UD   g104<1,1,0>UD   { align1 1H F@5 compacted };
cmp.l.f0.0(16)  g114<1>F        (abs)g70<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g118<1>F        (abs)g93<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g110<1>UD       g33<1,1,0>UD    g108<1,1,0>UD   { align1 1H A@1 compacted };
and(16)         g116<1>UD       g112<1,1,0>UD   g114<1,1,0>UD   { align1 1H F@2 compacted };
and(16)         g120<1>UD       g116<1,1,0>UD   g118<1,1,0>UD   { align1 1H A@1 compacted };
and.nz.f0.0(16) g122<1>UD       g110<1,1,0>UD   g120<1,1,0>UD   { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
(+f0.0) sel(16) g9<1>UD         g17<8,8,1>UD    0xff800000UD    { align1 1H F@5 };
(+f0.0) sel(16) g11<1>UD        g19<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g13<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g3<1>UD         g124<8,8,1>UD   0x7f800000UD    { align1 1H F@6 };
(+f0.0) sel(16) g5<1>UD         g126<8,8,1>UD   0x7f800000UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
(+f0.0) sel(16) g7<1>UD         g15<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g78<2>W         -g122<8,8,1>D                   { align1 1H I@7 };
mov(16)         g24<1>UW        g78<16,8,2>UW                   { align1 1H I@1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g24<1>UW        0x0000UW                        { align1 1H I@2 };
mov(16)         g7<1>UD         0x7f800000UD                    { align1 1H I@5 };
mov(16)         g5<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g3<1>UD         0x7f800000UD                    { align1 1H I@5 };
mov(16)         g13<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g11<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g9<1>UD         0xff800000UD                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
and(16)         g22<1>UW        g24<1,1,0>UW    0x0001UW        { align1 1H I@3 compacted };
mov(16)         g23<1>W         g22<32,16,2>B                   { align1 1H I@1 };
cmp.nz.f0.0(16) g38<1>W         g23<16,16,1>W   0W              { align1 1H I@1 };
mov(16)         g31<1>D         g38<8,8,1>W                     { align1 1H I@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g31<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g39<1>UD        f0<0,1,0>UW                     { align1 1H };
bfi1(16)        g41<1>UD        g106<8,8,1>D    0D              { align1 1H };
cbit(16)        g15<1>UD        g39<8,8,1>UD                    { align1 1H I@2 };
cmp.z.f0.0(16)  null<1>D        g106<8,8,1>D    0D              { align1 1H };
and(16)         g43<1>UD        g39<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@3 compacted };
cbit(16)        g45<1>UD        g43<8,8,1>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g47<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g53<2>UD        g47<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g55<2>UD        g48<4,4,1>UD                    { align1 2Q };
add(16)         g51<1>D         -g49<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g53.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g55.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g53UD           g15UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g54<1>D         g45<1,1,0>D     g25<0,1,0>D     { align1 1H I@3 compacted };
mov.nz.f0.0(16) null<1>D        g31<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
and(1)          g56<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $1.src };
shl(16)         g57<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H };
and(1)          g61<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
or(16)          g59<1>UD        g57<1,1,0>UD    0x000002c0UD    { align1 1H I@2 compacted };
or(16)          g62<1>UD        g57<1,1,0>UD    0x00000200UD    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g56<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g16UD           g59UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g61<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g62UD           g3UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
and(1)          g64<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g65<1>UD        g57<1,1,0>UD    0x00000240UD    { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g64<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g5UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
and(1)          g67<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
or(16)          g68<1>UD        g57<1,1,0>UD    0x00000280UD    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g67<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g68UD           g7UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
and(1)          g70<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g70<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g59UD           g16UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
and(1)          g71<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
or(16)          g72<1>UD        g57<1,1,0>UD    0x000003c0UD    { align1 1H $11.src compacted };
and(1)          g74<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(16)          g75<1>UD        g57<1,1,0>UD    0x00000300UD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g71<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g17UD           g72UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g74<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g75UD           g9UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
and(1)          g77<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g78<1>UD        g57<1,1,0>UD    0x00000340UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g77<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g78UD           g11UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
and(1)          g80<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
or(16)          g81<1>UD        g57<1,1,0>UD    0x00000380UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g80<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g81UD           g13UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
and(1)          g83<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g83<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g72UD           g17UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
shl(16)         g84<1>D         g29<8,8,1>D     0x0000001dUD    { align1 1H };
and(1)          g86<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g87<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
and(1)          g88<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g86<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g18UD           g62UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g87<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g20UD           g65UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g88<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g22UD           g68UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g89<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g62UD           g18UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
and(1)          g90<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g90<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g20UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
and(1)          g91<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g91<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g68UD           g22UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
and(1)          g92<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g92<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g59UD           g27UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
or(16)          g93<1>UD        g36<1,1,0>UD    g84<1,1,0>UD    { align1 1H A@1 compacted };
and(1)          g95<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g98<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
mov(16)         g29<1>UD        g93<8,8,1>UD                    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g95<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g31UD           g75UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g36UD           g78UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g38UD           g81UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g23<1>UD        g31<8,8,1>UD                    { align1 1H $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(16)         g25<1>UD        g36<8,8,1>UD                    { align1 1H $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g27<1>UD        g38<8,8,1>UD                    { align1 1H $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g98<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g75UD           g31UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g99<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g99<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g78UD           g36UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g81UD           g38UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
and(1)          g101<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g101<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g72UD           g93UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
shl(16)         g102<1>D        g54<8,8,1>D     0x00000005UD    { align1 1H };
shr(16)         g104<1>UD       g54<1,1,0>UD    0x0000001bUD    { align1 1H compacted };
and(1)          g116<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g118<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g119<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g33<1>D         g2.4<0,1,0>D    g102<1,1,0>D    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g116<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g15UD           g62UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g117<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g17UD           g65UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g118<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g19UD           g68UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g119<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g21UD           g59UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
cmp.l.f0.0(16)  g108<1>UD       g33<1,1,0>UD    g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g112<2>UD       g33<4,4,1>UD                    { align1 1Q };
mov(8)          g114<2>UD       g34<4,4,1>UD                    { align1 2Q };
add3(16)        g110<1>D        g2.5<0,1,0>D    g104<8,8,1>D    -g108<1,1,1>D { align1 1H I@3 };
mov(8)          g112.1<2>UD     g110<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g114.1<2>UD     g111<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g112UD          g15UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g120<1>D        g33<1,1,0>D     16D             { align1 1H compacted };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g33<1,1,0>UD    { align1 1H I@1 compacted };
mov(8)          g15<2>UD        g120<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g17<2>UD        g121<4,4,1>UD                   { align1 2Q $3.src };
add(16)         g124<1>D        -g122<1,1,0>D   g110<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g15.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g17.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g15UD           g23UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g16<1>F         g3<1,1,0>F      g9<1,1,0>F      { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g18<1>F         g5<1,1,0>F      g11<1,1,0>F     { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g20<1>F         g7<1,1,0>F      g13<1,1,0>F     { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.ge.f0.0(16) g22<1>F         g9<1,1,0>F      g3<1,1,0>F      { align1 1H $3.src compacted };
mov(16)         g48<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g48<1>F         g3<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
and(1)          g43<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g44<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g24<1>UD        g16<8,8,1>UD    0x7f800000UD    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g81<2>UD        g48.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
or(16)          g46<1>UD        g44<1,1,0>UD    0x00000580UD    { align1 1H I@3 compacted };
cmp.ge.f0.0(16) g26<1>F         g11<1,1,0>F     g5<1,1,0>F      { align1 1H $1.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(8)        g79<2>F         g48<8,4,2>F     g81<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g28<1>UD        g18<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
mov(8)          g48.1<2>UD      g79<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
cmp.ge.f0.0(16) g30<1>F         g13<1,1,0>F     g7<1,1,0>F      { align1 1H I@7 compacted };
mov(4)          g85<4>UD        g48.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g87<4>UD        g48.2<8,2,4>UD                  { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
(+f0.0) sel(16) g35<1>UD        g20<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
sel.l(4)        g83<4>F         g85<8,2,4>F     g87<8,2,4>F     { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) null<1>D        g22<8,8,1>D     0D              { align1 1H F@6 };
mov(4)          g48.2<4>UD      g83<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g37<1>UD        g16<8,8,1>UD    0xff800000UD    { align1 1H $0.src };
mov(4)          g91<4>UD        g48.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g93<4>UD        g48.3<8,2,4>UD                  { align1 WE_all 1N F@7 };
cmp.nz.f0.0(16) null<1>D        g26<8,8,1>D     0D              { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g89<4>F         g91<8,2,4>F     g93<8,2,4>F     { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g39<1>UD        g18<8,8,1>UD    0xff800000UD    { align1 1H $1.src };
mov(4)          g48.3<4>UD      g89<8,2,4>UD                    { align1 WE_all 1N F@1 };
cmp.nz.f0.0(16) null<1>D        g30<8,8,1>D     0D              { align1 1H F@3 };
sel.l(4)        g48.4<1>F       g48.3<0,1,0>F   g48.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g49.4<1>F       g49.3<0,1,0>F   g49.4<4,4,1>F   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g41<1>UD        g20<8,8,1>UD    0xff800000UD    { align1 1H };
sel.l(8)        g49<1>F         g48.7<0,1,0>F   g49<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g50<1>UD        g49.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g43<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g46UD           g50UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
mov(16)         g79<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g79<1>F         g5<1,1,0>F                      { align1 1H compacted };
and(1)          g48<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
or(16)          g49<1>UD        g44<1,1,0>UD    0x000005c0UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(8)          g96<2>UD        g79.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.l(8)        g94<2>F         g79<8,4,2>F     g96<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g79.1<2>UD      g94<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g100<4>UD       g79.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g102<4>UD       g79.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.l(4)        g98<4>F         g100<8,2,4>F    g102<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g79.2<4>UD      g98<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g33<4>UD        g79.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g108<4>UD       g79.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g104<4>F        g33<8,2,4>F     g108<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g79.3<4>UD      g104<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g80.4<1>F       g80.3<0,1,0>F   g80.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g80<1>F         g79.7<0,1,0>F   g80<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g51<1>UD        g80.7<0,1,0>UD                  { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g48<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g49UD           g51UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
mov(16)         g81<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g81<1>F         g7<1,1,0>F                      { align1 1H compacted };
and(1)          g50<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
or(16)          g51<1>UD        g44<1,1,0>UD    0x00000600UD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g111<2>UD       g81.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.l(8)        g109<2>F        g81<8,4,2>F     g111<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g81.1<2>UD      g109<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g115<4>UD       g81.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g117<4>UD       g81.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.l(4)        g113<4>F        g115<8,2,4>F    g117<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g81.2<4>UD      g113<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g121<4>UD       g81.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g123<4>UD       g81.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g119<4>F        g121<8,2,4>F    g123<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g81.3<4>UD      g119<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g81.4<1>F       g81.3<0,1,0>F   g81.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g82.4<1>F       g82.3<0,1,0>F   g82.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g82<1>F         g81.7<0,1,0>F   g82<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g53<1>UD        g82.7<0,1,0>UD                  { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g50<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g51UD           g53UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
mov(16)         g83<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g83<1>F         g9<1,1,0>F                      { align1 1H compacted };
and(1)          g52<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
or(16)          g53<1>UD        g44<1,1,0>UD    0x00000640UD    { align1 1H $6.src compacted };
mov(8)          g126<2>UD       g83.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g124<2>F        g83<8,4,2>F     g126<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g83.1<2>UD      g124<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g5<4>UD         g83.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g7<4>UD         g83.2<8,2,4>UD                  { align1 WE_all 1N F@7 };
sel.ge(4)       g3<4>F          g5<8,2,4>F      g7<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g83.2<4>UD      g3<8,2,4>UD                     { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g15<4>UD        g83.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g17<4>UD        g83.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g9<4>F          g15<8,2,4>F     g17<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g83.3<4>UD      g9<8,2,4>UD                     { align1 WE_all 1N F@1 };
sel.ge(4)       g83.4<1>F       g83.3<0,1,0>F   g83.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g84.4<1>F       g84.3<0,1,0>F   g84.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g84<1>F         g83.7<0,1,0>F   g84<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g55<1>UD        g84.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g52<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g53UD           g55UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
mov(16)         g90<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g90<1>F         g11<1,1,0>F                     { align1 1H compacted };
and(1)          g55<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
or(16)          g56<1>UD        g44<1,1,0>UD    0x00000680UD    { align1 1H $5.src compacted };
mov(8)          g20<2>UD        g90.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g18<2>F         g90<8,4,2>F     g20<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g90.1<2>UD      g18<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g26<4>UD        g90.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g30<4>UD        g90.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g22<4>F         g26<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g90.2<4>UD      g22<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g50<4>UD        g90.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g58<4>UD        g90.3<8,2,4>UD                  { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g48<4>F         g50<8,2,4>F     g58<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g90.3<4>UD      g48<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g90.4<1>F       g90.3<0,1,0>F   g90.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g91.4<1>F       g91.3<0,1,0>F   g91.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g91<1>F         g90.7<0,1,0>F   g91<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g58<1>UD        g91.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g55<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g56UD           g58UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
mov(16)         g92<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g92<1>F         g13<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
and(1)          g57<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
or(16)          g58<1>UD        g44<1,1,0>UD    0x000006c0UD    { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g62<2>UD        g92.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(8)       g60<2>F         g92<8,4,2>F     g62<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g92.1<2>UD      g60<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g66<4>UD        g92.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g68<4>UD        g92.2<8,2,4>UD                  { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g64<4>F         g66<8,2,4>F     g68<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g92.2<4>UD      g64<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g72<4>UD        g92.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g74<4>UD        g92.3<8,2,4>UD                  { align1 WE_all 1N $11.src };
sel.ge(4)       g70<4>F         g72<8,2,4>F     g74<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g92.3<4>UD      g70<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g92.4<1>F       g92.3<0,1,0>F   g92.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g93.4<1>F       g93.3<0,1,0>F   g93.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g93<1>F         g92.7<0,1,0>F   g93<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g60<1>UD        g93.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g57<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g58UD           g60UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
cmp.l.f0.0(16)  null<1>UD       g106<8,8,1>UD   0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g59<1>D         g2.2<0,1,0>D    128D            { align1 1H $5.src compacted };
shl(16)         g64<1>D         g106<8,8,1>D    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
shr(16)         g66<1>UD        g106<1,1,0>UD   0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
cmp.l.f0.0(16)  g61<1>UD        g59<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add(16)         g68<1>D         g59<1,1,0>D     g64<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
add(16)         g63<1>D         -g61<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g70<1>UD        g68<1,1,0>UD    g59<1,1,0>UD    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
mov(8)          g74<2>UD        g68<4,4,1>UD                    { align1 1Q };
mov(8)          g76<2>UD        g69<4,4,1>UD                    { align1 2Q $5.src };
cmp.l.f0.0(16)  null<1>UD       g106<8,8,1>UD   0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
add3(16)        g72<1>D         g63<8,8,1>D     g66<8,8,1>D     -g70<1,1,1>D { align1 1H };
mov(8)          g74.1<2>UD      g72<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g76.1<2>UD      g73<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
and(1)          g78<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
or(1)           a0.1<1>UD       g78<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $4.src };
send(16)        g61UD           g46UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
cmp.l.f0.0(16)  null<1>UD       g106<8,8,1>UD   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
(+f0.0) sel(16) g61<1>UD        g80.7<0,1,0>UD  g82.7<0,1,0>UD  { align1 1H A@6 };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g74UD           g61UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
add(16)         g79<1>D         g68<1,1,0>D     12D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g81<1>UD        g79<1,1,0>UD    g68<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g106<8,8,1>UD   0x00000001UD    { align1 1H };
mov(8)          g85<2>UD        g79<4,4,1>UD                    { align1 1Q };
mov(8)          g87<2>UD        g80<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g83<1>D         -g81<1,1,0>D    g72<1,1,0>D     { align1 1H compacted };
mov(8)          g85.1<2>UD      g83<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g87.1<2>UD      g84<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL11         UIP:  LABEL10             { align1 1H };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
or(1)           a0.1<1>UD       g89<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $5.src };
send(16)        g62UD           g53UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
else(16)        JIP:  LABEL10         UIP:  LABEL10             { align1 1H };

LABEL11:
cmp.l.f0.0(16)  null<1>UD       g106<8,8,1>UD   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
(+f0.0) sel(16) g62<1>UD        g91.7<0,1,0>UD  g93.7<0,1,0>UD  { align1 1H F@6 };

LABEL10:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g85UD           g62UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL7:
endif(16)       JIP:  LABEL12                                   { align1 1H };

LABEL12:
mov(16)         g93<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@3 compacted };
mov(16)         g93<1>F         g24<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
and(1)          g90<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
or(16)          g91<1>UD        g44<1,1,0>UD    0x00000400UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(8)          g77<2>UD        g93.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(8)        g75<2>F         g93<8,4,2>F     g77<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g93.1<2>UD      g75<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g81<4>UD        g93.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g83<4>UD        g93.2<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g79<4>F         g81<8,2,4>F     g83<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g93.2<4>UD      g79<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g87<4>UD        g93.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g95<4>UD        g93.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g85<4>F         g87<8,2,4>F     g95<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g93.3<4>UD      g85<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g93.4<1>F       g93.3<0,1,0>F   g93.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g94.4<1>F       g94.3<0,1,0>F   g94.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g94<1>F         g93.7<0,1,0>F   g94<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g63<1>UD        g94.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g90<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g91UD           g63UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
mov(16)         g119<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g119<1>F        g28<1,1,0>F                     { align1 1H compacted };
and(1)          g93<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
or(16)          g94<1>UD        g44<1,1,0>UD    0x00000440UD    { align1 1H compacted };
mov(8)          g98<2>UD        g119.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g96<2>F         g119<8,4,2>F    g98<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g119.1<2>UD     g96<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g102<4>UD       g119.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g104<4>UD       g119.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g100<4>F        g102<8,2,4>F    g104<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g119.2<4>UD     g100<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g108<4>UD       g119.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g110<4>UD       g119.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g33<4>F         g108<8,2,4>F    g110<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g119.3<4>UD     g33<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g119.4<1>F      g119.3<0,1,0>F  g119.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g120.4<1>F      g120.3<0,1,0>F  g120.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g120<1>F        g119.7<0,1,0>F  g120<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g64<1>UD        g120.7<0,1,0>UD                 { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g93<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g94UD           g64UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
mov(16)         g121<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g121<1>F        g35<1,1,0>F                     { align1 1H compacted };
and(1)          g95<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
or(16)          g96<1>UD        g44<1,1,0>UD    0x00000480UD    { align1 1H compacted };
mov(8)          g113<2>UD       g121.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g111<2>F        g121<8,4,2>F    g113<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g121.1<2>UD     g111<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g117<4>UD       g121.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g123<4>UD       g121.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g115<4>F        g117<8,2,4>F    g123<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g121.2<4>UD     g115<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g3<4>UD         g121.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g5<4>UD         g121.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g125<4>F        g3<8,2,4>F      g5<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g121.3<4>UD     g125<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g121.4<1>F      g121.3<0,1,0>F  g121.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g122.4<1>F      g122.3<0,1,0>F  g122.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g122<1>F        g121.7<0,1,0>F  g122<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g65<1>UD        g122.7<0,1,0>UD                 { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g95<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g96UD           g65UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
mov(16)         g123<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g123<1>F        g37<1,1,0>F                     { align1 1H compacted };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(16)          g98<1>UD        g44<1,1,0>UD    0x000004c0UD    { align1 1H compacted };
mov(8)          g8<2>UD         g123.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g6<2>F          g123<8,4,2>F    g8<8,4,2>F      { align1 WE_all 1Q I@1 };
mov(8)          g123.1<2>UD     g6<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(4)          g12<4>UD        g123.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g14<4>UD        g123.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g10<4>F         g12<8,2,4>F     g14<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g123.2<4>UD     g10<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g18<4>UD        g123.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g20<4>UD        g123.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g16<4>F         g18<8,2,4>F     g20<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g123.3<4>UD     g16<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g123.4<1>F      g123.3<0,1,0>F  g123.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g124.4<1>F      g124.3<0,1,0>F  g124.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g124<1>F        g123.7<0,1,0>F  g124<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g66<1>UD        g124.7<0,1,0>UD                 { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g98UD           g66UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
mov(16)         g125<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g125<1>F        g39<1,1,0>F                     { align1 1H compacted };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g101<1>UD       g44<1,1,0>UD    0x00000500UD    { align1 1H compacted };
mov(8)          g23<2>UD        g125.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g21<2>F         g125<8,4,2>F    g23<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g125.1<2>UD     g21<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g27<4>UD        g125.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g29<4>UD        g125.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g25<4>F         g27<8,2,4>F     g29<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g125.2<4>UD     g25<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g35<4>UD        g125.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g37<4>UD        g125.3<8,2,4>UD                 { align1 WE_all 1N F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g31<4>F         g35<8,2,4>F     g37<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g125.3<4>UD     g31<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g125.4<1>F      g125.3<0,1,0>F  g125.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g126.4<1>F      g126.3<0,1,0>F  g126.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g126<1>F        g125.7<0,1,0>F  g126<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g67<1>UD        g126.7<0,1,0>UD                 { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g101UD          g67UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
mov(16)         g6<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g6<1>F          g41<1,1,0>F                     { align1 1H compacted };
and(1)          g102<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(16)          g103<1>UD       g44<1,1,0>UD    0x00000540UD    { align1 1H compacted };
mov(8)          g40<2>UD        g6.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.ge(8)       g38<2>F         g6<8,4,2>F      g40<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g6.1<2>UD       g38<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g46<4>UD        g6.1<8,2,4>UD                   { align1 WE_all 1N I@1 };
mov(4)          g48<4>UD        g6.2<8,2,4>UD                   { align1 WE_all 1N };
sel.ge(4)       g42<4>F         g46<8,2,4>F     g48<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g6.2<4>UD       g42<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g52<4>UD        g6.1<8,2,4>UD                   { align1 WE_all 1N I@1 };
mov(4)          g54<4>UD        g6.3<8,2,4>UD                   { align1 WE_all 1N $5.src };
sel.ge(4)       g50<4>F         g52<8,2,4>F     g54<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g6.3<4>UD       g50<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g6.4<1>F        g6.3<0,1,0>F    g6.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.ge(4)       g7.4<1>F        g7.3<0,1,0>F    g7.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.ge(8)       g7<1>F          g6.7<0,1,0>F    g7<8,8,1>F      { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g68<1>UD        g7.7<0,1,0>UD                   { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g102<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g103UD          g68UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
cmp.l.f0.0(16)  null<1>UD       g106<8,8,1>UD   0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
shl(16)         g104<1>D        g106<8,8,1>D    0x00000002UD    { align1 1H $9.src };
shr(16)         g33<1>UD        g106<1,1,0>UD   0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g108<1>D        g2<0,1,0>D      g104<1,1,0>D    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g110<1>UD       g108<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g114<2>UD       g108<4,4,1>UD                   { align1 1Q };
mov(8)          g116<2>UD       g109<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g106<8,8,1>UD   0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g112<1>D        g2.1<0,1,0>D    g33<8,8,1>D     -g110<1,1,1>D { align1 1H };
mov(8)          g114.1<2>UD     g112<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g116.1<2>UD     g113<4,4,1>UD                   { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
and(1)          g118<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g118<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $9.src };
send(16)        g69UD           g91UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
cmp.l.f0.0(16)  null<1>UD       g106<8,8,1>UD   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
(+f0.0) sel(16) g69<1>UD        g120.7<0,1,0>UD g122.7<0,1,0>UD { align1 1H };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g114UD          g69UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };
add(16)         g119<1>D        g108<1,1,0>D    16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g121<1>UD       g119<1,1,0>UD   g108<1,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g106<8,8,1>UD   0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g1<2>UD         g119<4,4,1>UD                   { align1 1Q };
mov(8)          g3<2>UD         g120<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g123<1>D        -g121<1,1,0>D   g112<1,1,0>D    { align1 1H compacted };
mov(8)          g1.1<2>UD       g123<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g3.1<2>UD       g124<4,4,1>UD                   { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
and(1)          g5<1>UD         g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g5<0,1,0>UD     0x0000000fUD    { align1 WE_all 1N $9.src };
send(16)        g70UD           g98UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>UD       g106<8,8,1>UD   0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
(+f0.0) sel(16) g70<1>UD        g126.7<0,1,0>UD g7.7<0,1,0>UD   { align1 1H };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g1UD            g70UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };

LABEL13:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q I@3 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_procedurals_to_primrefs_code[] = {
    0x80000065, 0x37058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x06050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00370c, 0x00340000,
    0xe2383040, 0x04013703, 0x80030061, 0x23054410,
    0x00000000, 0x76543210, 0x00041b69, 0x1f058660,
    0x02460605, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00380c, 0x00300000, 0x64231a40, 0x00802395,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x6a050120, 0x00462305, 0x00000000,
    0xa0241940, 0x6a001f02, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00041970, 0x00010220,
    0x52462405, 0x00000324, 0x00040065, 0x1b058220,
    0x02000304, 0x00ffffff, 0x00040061, 0x1d050020,
    0x0000031c, 0x00000000, 0x01040022, 0x0001c060,
    0x00000638, 0x000005c8, 0x80000065, 0x48058220,
    0x020000a4, 0xfffffc00, 0x00040069, 0x49058120,
    0x02462305, 0x00000002, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x07260660,
    0x000002e4, 0x00000000, 0x00130061, 0x09260660,
    0x000002e4, 0x00000000, 0x00031a61, 0x07060660,
    0x000002c4, 0x00000000, 0x00131a61, 0x09060660,
    0x000002c4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x26440000,
    0xfb000724, 0x000c0000, 0x00032241, 0x20010220,
    0x01462405, 0x00562a06, 0x00042241, 0x30050660,
    0x01462405, 0x00562a06, 0x00040041, 0x4b050660,
    0x01462405, 0x00562a16, 0x00042241, 0x32050660,
    0x01462405, 0x00562c06, 0x00040041, 0x4d050660,
    0x01462405, 0x00562c16, 0x3e2e0049, 0x2a002403,
    0x00041c40, 0x30160110, 0x01563016, 0x00564b06,
    0x00041b40, 0x32160110, 0x01563216, 0x00564d06,
    0x00130041, 0x20010220, 0x01462505, 0x00562b06,
    0xa036b240, 0x30002602, 0x00130049, 0x2f050222,
    0x02462505, 0x00462b05, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27381a70, 0x26003603,
    0x00030061, 0x3c060220, 0x00343605, 0x00000000,
    0x00130061, 0x3e060220, 0x00343705, 0x00000000,
    0xa0341c40, 0x32002e02, 0x00049252, 0x3a040e68,
    0x0e2e2805, 0x38053405, 0x00031961, 0x3c260220,
    0x00343a05, 0x00000000, 0x00131a61, 0x3e260220,
    0x00343b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x40440000,
    0xfb003c24, 0x000c0000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004804, 0x0000008f, 0x00049431, 0x00020100,
    0xfa084914, 0x04004004, 0x80000065, 0x4b058220,
    0x020000a4, 0xfffffc00, 0xe04c3466, 0x04004903,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004b04, 0x0000008f,
    0x00049531, 0x00020100, 0xfa084c14, 0x04004204,
    0x80003565, 0x4d058220, 0x020000a4, 0xfffffc00,
    0xe04e0066, 0x08004903, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004d04, 0x0000008f, 0x00049631, 0x00020100,
    0xfa084e14, 0x04004404, 0x80003665, 0x4f058220,
    0x020000a4, 0xfffffc00, 0xe0500066, 0x0c004903,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004f04, 0x0000008f,
    0x00049731, 0x00020100, 0xfa085014, 0x04004604,
    0xa0513740, 0x01003603, 0x80000065, 0x5f058220,
    0x020000a4, 0xfffffc00, 0xe0600066, 0x10004903,
    0x27531b70, 0x36005103, 0x00030061, 0x57060220,
    0x00345105, 0x00000000, 0x00130061, 0x59060220,
    0x00345205, 0x00000000, 0xa0551b40, 0x3a025302,
    0x00031961, 0x57260220, 0x00345505, 0x00000000,
    0x00131a61, 0x59260220, 0x00345605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x5b240000, 0xfb005724, 0x00040000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005f04, 0x0000008f,
    0x00049931, 0x00020100, 0xfa086014, 0x04005b04,
    0x80003965, 0x61058220, 0x020000a4, 0xfffffc00,
    0xe0620066, 0x14004903, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006104, 0x0000008f, 0x00049a31, 0x00020100,
    0xfa086214, 0x04005d04, 0x80003a65, 0x63058220,
    0x020000a4, 0xfffffc00, 0xe7663570, 0x7f834200,
    0x277e3962, 0x5b004200, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x270f3662, 0x5d004400,
    0x25130062, 0x5b004200, 0x25150062, 0x5d004400,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006304, 0x0000000f,
    0x00049b31, 0x64160100, 0xfa004914, 0x04000000,
    0xe7682b70, 0x7f836400, 0x277c3762, 0x46006400,
    0x25110062, 0x46006400, 0xe76c0070, 0x7f834400,
    0xe7700070, 0x7f835b00, 0x20211565, 0x68006603,
    0xe7720070, 0x7f834600, 0xe7760070, 0x7f835d00,
    0x206e0965, 0x6c002103, 0x20741265, 0x72007003,
    0x20780965, 0x76007403, 0x2e7a1965, 0x78006e03,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x01041562, 0x09058220, 0x02461105, 0xff800000,
    0x01041762, 0x0b058220, 0x02461305, 0xff800000,
    0x01041762, 0x0d058220, 0x02461505, 0xff800000,
    0x01041662, 0x03058220, 0x02467c05, 0x7f800000,
    0x01040062, 0x05058220, 0x02467e05, 0x7f800000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x01041762, 0x07058220, 0x02460f05, 0x7f800000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x4e062650, 0x00467a05, 0x00000000,
    0x00041961, 0x18050110, 0x00564e06, 0x00000000,
    0x00040024, 0x0001c060, 0x00000080, 0x00000080,
    0x00041a61, 0x18054110, 0x00000000, 0x00000000,
    0x00041d61, 0x07054220, 0x00000000, 0x7f800000,
    0x00041f61, 0x05054220, 0x00000000, 0x7f800000,
    0x00041d61, 0x03054220, 0x00000000, 0x7f800000,
    0x00040061, 0x0d054220, 0x00000000, 0xff800000,
    0x00040061, 0x0b054220, 0x00000000, 0xff800000,
    0x00040061, 0x09054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x60161b65, 0x00101805, 0x00041961, 0x17050450,
    0x00681606, 0x00000000, 0x00041970, 0x26058550,
    0x25581705, 0x00000000, 0x00041961, 0x1f050560,
    0x00462605, 0x00000000, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22461f05, 0x00000000, 0x00040061, 0x27050120,
    0x00003000, 0x00000000, 0x00040079, 0x29058620,
    0x06466a05, 0x00000000, 0x00041a4d, 0x0f050220,
    0x00462705, 0x00000000, 0x00040070, 0x00018660,
    0x16466a05, 0x00000000, 0x202b1b65, 0x29002703,
    0x0004194d, 0x2d050220, 0x00462b05, 0x00000000,
    0x01040022, 0x0001c060, 0x000000b8, 0x000000b8,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa02f0040, 0x02410203, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x27311970, 0x02102f03,
    0x00030061, 0x35060220, 0x00342f05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x37060220, 0x00343005, 0x00000000,
    0xa0331b40, 0x02123112, 0x00031961, 0x35260220,
    0x00343305, 0x00000000, 0x00131a61, 0x37260220,
    0x00343405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x19140000,
    0xfb183524, 0x01000f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0xa0361b40, 0x19102d02,
    0x00040061, 0x00010660, 0x20461f05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000b38, 0x00000b38,
    0x80003165, 0x38058220, 0x020000a4, 0xfffffc00,
    0x00040069, 0x39058120, 0x02462305, 0x00000002,
    0x80003365, 0x3d058220, 0x020000a4, 0xfffffc00,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe03b1a66, 0x2c003903, 0xe03e3366, 0x20003903,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003804, 0x0000000f,
    0x00049c31, 0x10160100, 0xfa003b14, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003d04, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa083e14, 0x04000304,
    0x80003465, 0x40058220, 0x020000a4, 0xfffffc00,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xe0411766, 0x24003903, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004004, 0x0000008f, 0x00049e31, 0x00020100,
    0xfa084114, 0x04000504, 0x80001765, 0x43058220,
    0x020000a4, 0xfffffc00, 0xe0441466, 0x28003903,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004304, 0x0000008f,
    0x00049f31, 0x00020100, 0xfa084414, 0x04000704,
    0x80001265, 0x46058220, 0x020000a4, 0xfffffc00,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004604, 0x0000008f,
    0x00049031, 0x00020100, 0xfa083b14, 0x04001004,
    0x80001265, 0x47058220, 0x020000a4, 0xfffffc00,
    0xe0483b66, 0x3c003903, 0x80003b65, 0x4a058220,
    0x020000a4, 0xfffffc00, 0xe04b3566, 0x30003903,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004704, 0x0000000f,
    0x00049131, 0x11160100, 0xfa004814, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004a04, 0x0000008f,
    0x00049231, 0x00020100, 0xfa084b14, 0x04000904,
    0x80000065, 0x4d058220, 0x020000a4, 0xfffffc00,
    0xe04e0066, 0x34003903, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004d04, 0x0000008f, 0x00049331, 0x00020100,
    0xfa084e14, 0x04000b04, 0x80003765, 0x50058220,
    0x020000a4, 0xfffffc00, 0xe0510066, 0x38003903,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005004, 0x0000008f,
    0x00049431, 0x00020100, 0xfa085114, 0x04000d04,
    0x80000065, 0x53058220, 0x020000a4, 0xfffffc00,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005304, 0x0000008f,
    0x00049531, 0x00020100, 0xfa084814, 0x04001104,
    0x00040069, 0x54058660, 0x02461d05, 0x0000001d,
    0x80000065, 0x56058220, 0x020000a4, 0xfffffc00,
    0x80003865, 0x57058220, 0x020000a4, 0xfffffc00,
    0x80003865, 0x58058220, 0x020000a4, 0xfffffc00,
    0x80003865, 0x59058220, 0x020000a4, 0xfffffc00,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005604, 0x0000000f,
    0x00049631, 0x12160100, 0xfa003e14, 0x04000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005704, 0x0000000f,
    0x00049731, 0x14160100, 0xfa004114, 0x04000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005804, 0x0000000f,
    0x00049831, 0x16160100, 0xfa004414, 0x04000000,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005904, 0x0000008f,
    0x00049931, 0x00020100, 0xfa083e14, 0x04001204,
    0x80003865, 0x5a058220, 0x020000a4, 0xfffffc00,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005a04, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa084114, 0x04001404,
    0x80001365, 0x5b058220, 0x020000a4, 0xfffffc00,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005b04, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa084414, 0x04001604,
    0x80001365, 0x5c058220, 0x020000a4, 0xfffffc00,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005c04, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa083b14, 0x04001b04,
    0x205d0966, 0x54002403, 0x80000065, 0x5f058220,
    0x020000a4, 0xfffffc00, 0x80003965, 0x60058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x61058220,
    0x020000a4, 0xfffffc00, 0x80003a65, 0x62058220,
    0x020000a4, 0xfffffc00, 0x00041d61, 0x1d050220,
    0x00465d05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005f04, 0x0000000f, 0x00049d31, 0x1f160100,
    0xfa004b14, 0x04000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006004, 0x0000000f, 0x00049e31, 0x24160100,
    0xfa004e14, 0x04000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006104, 0x0000000f, 0x00049f31, 0x26160100,
    0xfa005114, 0x04000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00042d61, 0x17050220,
    0x00461f05, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00042e61, 0x19050220,
    0x00462405, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00042f61, 0x1b050220,
    0x00462605, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006204, 0x0000008f, 0x00049531, 0x00020100,
    0xfa084b14, 0x04001f04, 0x80000065, 0x63058220,
    0x020000a4, 0xfffffc00, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006304, 0x0000008f, 0x00049031, 0x00020100,
    0xfa084e14, 0x04002404, 0x80001565, 0x64058220,
    0x020000a4, 0xfffffc00, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006404, 0x0000008f, 0x00049131, 0x00020100,
    0xfa085114, 0x04002604, 0x80001565, 0x65058220,
    0x020000a4, 0xfffffc00, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006504, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa084814, 0x04005d04, 0x00040069, 0x66058660,
    0x02463605, 0x00000005, 0xe0680068, 0x01b03603,
    0x80000065, 0x74058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x75058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x76058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x77058220, 0x020000a4, 0xfffffc00,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0211e40, 0x6601025a, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007404, 0x0000000f, 0x00049331, 0x0f160100,
    0xfa003e14, 0x04000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007504, 0x0000000f, 0x00049431, 0x11160100,
    0xfa004114, 0x04000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007604, 0x0000000f, 0x00049231, 0x13160100,
    0xfa004414, 0x04000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007704, 0x0000000f, 0x00049331, 0x15160100,
    0xfa003b14, 0x04000000, 0x276c1970, 0x0210210b,
    0x00030061, 0x70060220, 0x00342105, 0x00000000,
    0x00130061, 0x72060220, 0x00342205, 0x00000000,
    0x00041b52, 0x6e040660, 0x0e2e02a4, 0x6c056805,
    0x00031961, 0x70260220, 0x00346e05, 0x00000000,
    0x00131a61, 0x72260220, 0x00346f05, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb087024, 0x000c0f44,
    0xa0780040, 0x01002103, 0x277a1970, 0x21007803,
    0x00033361, 0x0f060220, 0x00347805, 0x00000000,
    0x00133361, 0x11060220, 0x00347905, 0x00000000,
    0xa07c1b40, 0x6e027a02, 0x00031961, 0x0f260220,
    0x00347c05, 0x00000000, 0x00131a61, 0x11260220,
    0x00347d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb080f24, 0x000c1744, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x20101f40, 0x09000300,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x20123e40, 0x0b000500, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x20143f40, 0x0d000700,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x25163370, 0x03000900, 0xa3301f61, 0x7f810000,
    0x60300061, 0x00100300, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x2b058220,
    0x020000a4, 0xfffffc00, 0x00040069, 0x2c058120,
    0x02462305, 0x00000002, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x01041562, 0x18058220,
    0x02461005, 0x7f800000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x51060220,
    0x00443026, 0x00000000, 0xe02e1b66, 0x58002c03,
    0x251a2170, 0x05000b00, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80031a62, 0x4f060aa0,
    0x5a443006, 0x00445106, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x01041662, 0x1c058220,
    0x02461205, 0x7f800000, 0x80030961, 0x30260220,
    0x00444f06, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x251e1f70, 0x07000d00,
    0x80021961, 0x55070220, 0x00423027, 0x00000000,
    0x80023861, 0x57070220, 0x00423047, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x01041662, 0x23058220, 0x02461405, 0x7f800000,
    0x80021a62, 0x53070aa0, 0x5a425507, 0x00425707,
    0x00041670, 0x00018660, 0x26461605, 0x00000000,
    0x80021161, 0x30470220, 0x00425307, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x01043062, 0x25058220, 0x02461005, 0xff800000,
    0x80021a61, 0x5b070220, 0x00423027, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80021761, 0x5d070220, 0x00423067, 0x00000000,
    0x00041470, 0x00018660, 0x26461a05, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x59070aa0, 0x5a425b07, 0x00425d07,
    0x01043162, 0x27058220, 0x02461205, 0xff800000,
    0x80021161, 0x30670220, 0x00425907, 0x00000000,
    0x00041370, 0x00018660, 0x26461e05, 0x00000000,
    0x80021a62, 0x30850aa0, 0x5a003064, 0x00343085,
    0x80021a62, 0x31850aa0, 0x5a003164, 0x00343185,
    0x01040062, 0x29058220, 0x02461405, 0xff800000,
    0x80031162, 0x31050aa0, 0x5a0030e4, 0x00463105,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x32050220, 0x000031e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002b04, 0x0000008f,
    0x00049431, 0x00020100, 0xfa082e14, 0x04003204,
    0xa34f0061, 0x7f810000, 0x604f0061, 0x00100500,
    0x80001265, 0x30058220, 0x020000a4, 0xfffffc00,
    0xe0313466, 0x5c002c03, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x60060220,
    0x00444f26, 0x00000000, 0x80031962, 0x5e060aa0,
    0x5a444f06, 0x00446006, 0x80030961, 0x4f260220,
    0x00445e06, 0x00000000, 0x80021961, 0x64070220,
    0x00424f27, 0x00000000, 0x80020061, 0x66070220,
    0x00424f47, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x62070aa0,
    0x5a426407, 0x00426607, 0x80021161, 0x4f470220,
    0x00426207, 0x00000000, 0x80021961, 0x21070220,
    0x00424f27, 0x00000000, 0x80020061, 0x6c070220,
    0x00424f67, 0x00000000, 0x80021962, 0x68070aa0,
    0x5a422107, 0x00426c07, 0x80021161, 0x4f670220,
    0x00426807, 0x00000000, 0x80021962, 0x4f850aa0,
    0x5a004f64, 0x00344f85, 0x80021962, 0x50850aa0,
    0x5a005064, 0x00345085, 0x80031162, 0x50050aa0,
    0x5a004fe4, 0x00465005, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043461, 0x33050220,
    0x000050e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003004, 0x0000008f, 0x00049531, 0x00020100,
    0xfa083114, 0x04003304, 0xa3510061, 0x7f810000,
    0x60510061, 0x00100700, 0x80003565, 0x32058220,
    0x020000a4, 0xfffffc00, 0xe0333566, 0x60002c03,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x6f060220, 0x00445126, 0x00000000,
    0x80031962, 0x6d060aa0, 0x5a445106, 0x00446f06,
    0x80030961, 0x51260220, 0x00446d06, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x73070220, 0x00425127, 0x00000000,
    0x80020061, 0x75070220, 0x00425147, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x71070aa0, 0x5a427307, 0x00427507,
    0x80021161, 0x51470220, 0x00427107, 0x00000000,
    0x80021961, 0x79070220, 0x00425127, 0x00000000,
    0x80020061, 0x7b070220, 0x00425167, 0x00000000,
    0x80021962, 0x77070aa0, 0x5a427907, 0x00427b07,
    0x80021161, 0x51670220, 0x00427707, 0x00000000,
    0x80021962, 0x51850aa0, 0x5a005164, 0x00345185,
    0x80021962, 0x52850aa0, 0x5a005264, 0x00345285,
    0x80031162, 0x52050aa0, 0x5a0051e4, 0x00465205,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043161, 0x35050220, 0x000052e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003204, 0x0000008f,
    0x00049631, 0x00020100, 0xfa083314, 0x04003504,
    0xa3530061, 0xff810000, 0x60530061, 0x00100900,
    0x80003665, 0x34058220, 0x020000a4, 0xfffffc00,
    0xe0353666, 0x64002c03, 0x80031161, 0x7e060220,
    0x00445326, 0x00000000, 0x80031962, 0x7c060aa0,
    0x4a445306, 0x00447e06, 0x80030961, 0x53260220,
    0x00447c06, 0x00000000, 0x80021961, 0x05070220,
    0x00425327, 0x00000000, 0x80021761, 0x07070220,
    0x00425347, 0x00000000, 0x80021962, 0x03070aa0,
    0x4a420507, 0x00420707, 0x80021161, 0x53470220,
    0x00420307, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x0f070220,
    0x00425327, 0x00000000, 0x80020061, 0x11070220,
    0x00425367, 0x00000000, 0x80021962, 0x09070aa0,
    0x4a420f07, 0x00421107, 0x80021161, 0x53670220,
    0x00420907, 0x00000000, 0x80021962, 0x53850aa0,
    0x4a005364, 0x00345385, 0x80021962, 0x54850aa0,
    0x4a005464, 0x00345485, 0x80031162, 0x54050aa0,
    0x4a0053e4, 0x00465405, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x37050220,
    0x000054e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003404, 0x0000008f, 0x00049531, 0x00020100,
    0xfa083514, 0x04003704, 0xa35a0061, 0xff810000,
    0x605a0061, 0x00100b00, 0x80003565, 0x37058220,
    0x020000a4, 0xfffffc00, 0xe0383566, 0x68002c03,
    0x80031161, 0x14060220, 0x00445a26, 0x00000000,
    0x80031962, 0x12060aa0, 0x4a445a06, 0x00441406,
    0x80030961, 0x5a260220, 0x00441206, 0x00000000,
    0x80021961, 0x1a070220, 0x00425a27, 0x00000000,
    0x80020061, 0x1e070220, 0x00425a47, 0x00000000,
    0x80021962, 0x16070aa0, 0x4a421a07, 0x00421e07,
    0x80021161, 0x5a470220, 0x00421607, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x32070220, 0x00425a27, 0x00000000,
    0x80023361, 0x3a070220, 0x00425a67, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x30070aa0, 0x4a423207, 0x00423a07,
    0x80021161, 0x5a670220, 0x00423007, 0x00000000,
    0x80021962, 0x5a850aa0, 0x4a005a64, 0x00345a85,
    0x80021962, 0x5b850aa0, 0x4a005b64, 0x00345b85,
    0x80031162, 0x5b050aa0, 0x4a005ae4, 0x00465b05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x3a050220, 0x00005be4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003704, 0x0000008f,
    0x00049731, 0x00020100, 0xfa083814, 0x04003a04,
    0xa35c0061, 0xff810000, 0x605c0061, 0x00100d00,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003765, 0x39058220, 0x020000a4, 0xfffffc00,
    0xe03a3766, 0x6c002c03, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x3e060220,
    0x00445c26, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x3c060aa0,
    0x4a445c06, 0x00443e06, 0x80030961, 0x5c260220,
    0x00443c06, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x42070220,
    0x00425c27, 0x00000000, 0x80023261, 0x44070220,
    0x00425c47, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x40070aa0,
    0x4a424207, 0x00424407, 0x80021161, 0x5c470220,
    0x00424007, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x48070220,
    0x00425c27, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80023b61, 0x4a070220,
    0x00425c67, 0x00000000, 0x80021962, 0x46070aa0,
    0x4a424807, 0x00424a07, 0x80021161, 0x5c670220,
    0x00424607, 0x00000000, 0x80021962, 0x5c850aa0,
    0x4a005c64, 0x00345c85, 0x80021962, 0x5d850aa0,
    0x4a005d64, 0x00345d85, 0x80031162, 0x5d050aa0,
    0x4a005ce4, 0x00465d05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x3c050220,
    0x00005de4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003904, 0x0000008f, 0x00049531, 0x00020100,
    0xfa083a14, 0x04003c04, 0x00040070, 0x00018220,
    0x52466a05, 0x00000003, 0x01040022, 0x0001c060,
    0x00000358, 0x00000358, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa03b3540, 0x08010243,
    0x00040069, 0x40058660, 0x02466a05, 0x00000002,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0xe0420068, 0x01e06a03, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x80000b01, 0x00000000,
    0x00000000, 0x00000000, 0x273d3570, 0x02103b2b,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0440040, 0x40003b02, 0x80000a01, 0x00000000,
    0x00000000, 0x00000000, 0xa03f0040, 0x02123d1a,
    0x27461a70, 0x3b004403, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x4a060220,
    0x00344405, 0x00000000, 0x00133561, 0x4c060220,
    0x00344505, 0x00000000, 0x00040070, 0x00018220,
    0x52466a05, 0x00000001, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x48040e68,
    0x0e2e3f05, 0x46054205, 0x00031961, 0x4a260220,
    0x00344805, 0x00000000, 0x00131a61, 0x4c260220,
    0x00344905, 0x00000000, 0x01040022, 0x0001c060,
    0x00000090, 0x00000060, 0x80003065, 0x4e058220,
    0x020000a4, 0xfffffc00, 0x80000901, 0x00000000,
    0x00000000, 0x00000000, 0x80003466, 0x10218220,
    0x02004e04, 0x0000000f, 0x00049431, 0x3d160100,
    0xfa002e14, 0x04000000, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00040070, 0x00018220,
    0x52466a05, 0x00000002, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x01040e62, 0x3d050220,
    0x020050e4, 0x000052e4, 0x00040025, 0x00004600,
    0x00000000, 0x00000198, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb2a4a24, 0x01003d14, 0xa04f0040, 0x00c04403,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27510070, 0x44004f03, 0x00040070, 0x00018220,
    0x52466a05, 0x00000001, 0x00030061, 0x55060220,
    0x00344f05, 0x00000000, 0x00130061, 0x57060220,
    0x00345005, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0530040, 0x48025102,
    0x00031961, 0x55260220, 0x00345305, 0x00000000,
    0x00131a61, 0x57260220, 0x00345405, 0x00000000,
    0x01040022, 0x0001c060, 0x00000090, 0x00000060,
    0x80000065, 0x59058220, 0x020000a4, 0xfffffc00,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80003566, 0x10218220, 0x02005904, 0x0000000f,
    0x00049531, 0x3e160100, 0xfa003514, 0x04000000,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00040070, 0x00018220, 0x52466a05, 0x00000002,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x01041662, 0x3e050220, 0x02005be4, 0x00005de4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xfb2c5524, 0x01003e14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xa35d1b61, 0x7f810000, 0x605d0061, 0x00101800,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001765, 0x5a058220, 0x020000a4, 0xfffffc00,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0xe05b0066, 0x40002c03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x4d060220,
    0x00445d26, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x4b060aa0,
    0x5a445d06, 0x00444d06, 0x80030961, 0x5d260220,
    0x00444b06, 0x00000000, 0x80021961, 0x51070220,
    0x00425d27, 0x00000000, 0x80020061, 0x53070220,
    0x00425d47, 0x00000000, 0x80021962, 0x4f070aa0,
    0x5a425107, 0x00425307, 0x80021161, 0x5d470220,
    0x00424f07, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x57070220,
    0x00425d27, 0x00000000, 0x80020061, 0x5f070220,
    0x00425d67, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x55070aa0,
    0x5a425707, 0x00425f07, 0x80021161, 0x5d670220,
    0x00425507, 0x00000000, 0x80021962, 0x5d850aa0,
    0x5a005d64, 0x00345d85, 0x80021962, 0x5e850aa0,
    0x5a005e64, 0x00345e85, 0x80031162, 0x5e050aa0,
    0x5a005de4, 0x00465e05, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x3f050220,
    0x00005ee4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005a04, 0x0000008f, 0x00049931, 0x00020100,
    0xfa085b14, 0x04003f04, 0xa3770061, 0x7f810000,
    0x60770061, 0x00101c00, 0x80001265, 0x5d058220,
    0x020000a4, 0xfffffc00, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0xe05e0066, 0x44002c03,
    0x80031161, 0x62060220, 0x00447726, 0x00000000,
    0x80031962, 0x60060aa0, 0x5a447706, 0x00446206,
    0x80030961, 0x77260220, 0x00446006, 0x00000000,
    0x80021961, 0x66070220, 0x00427727, 0x00000000,
    0x80020061, 0x68070220, 0x00427747, 0x00000000,
    0x80021962, 0x64070aa0, 0x5a426607, 0x00426807,
    0x80021161, 0x77470220, 0x00426407, 0x00000000,
    0x80021961, 0x6c070220, 0x00427727, 0x00000000,
    0x80020061, 0x6e070220, 0x00427767, 0x00000000,
    0x80021962, 0x21070aa0, 0x5a426c07, 0x00426e07,
    0x80021161, 0x77670220, 0x00422107, 0x00000000,
    0x80021962, 0x77850aa0, 0x5a007764, 0x00347785,
    0x80021962, 0x78850aa0, 0x5a007864, 0x00347885,
    0x80031162, 0x78050aa0, 0x5a0077e4, 0x00467805,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043961, 0x40050220, 0x000078e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005d04, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa085e14, 0x04004004,
    0xa3790061, 0x7f810000, 0x60790061, 0x00102300,
    0x80003a65, 0x5f058220, 0x020000a4, 0xfffffc00,
    0xe0600066, 0x48002c03, 0x80031161, 0x71060220,
    0x00447926, 0x00000000, 0x80031962, 0x6f060aa0,
    0x5a447906, 0x00447106, 0x80030961, 0x79260220,
    0x00446f06, 0x00000000, 0x80021961, 0x75070220,
    0x00427927, 0x00000000, 0x80020061, 0x7b070220,
    0x00427947, 0x00000000, 0x80021962, 0x73070aa0,
    0x5a427507, 0x00427b07, 0x80021161, 0x79470220,
    0x00427307, 0x00000000, 0x80021961, 0x03070220,
    0x00427927, 0x00000000, 0x80020061, 0x05070220,
    0x00427967, 0x00000000, 0x80021962, 0x7d070aa0,
    0x5a420307, 0x00420507, 0x80021161, 0x79670220,
    0x00427d07, 0x00000000, 0x80021962, 0x79850aa0,
    0x5a007964, 0x00347985, 0x80021962, 0x7a850aa0,
    0x5a007a64, 0x00347a85, 0x80031162, 0x7a050aa0,
    0x5a0079e4, 0x00467a05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043a61, 0x41050220,
    0x00007ae4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005f04, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa086014, 0x04004104, 0xa37b0061, 0xff810000,
    0x607b0061, 0x00102500, 0x80003b65, 0x61058220,
    0x020000a4, 0xfffffc00, 0xe0620066, 0x4c002c03,
    0x80031161, 0x08060220, 0x00447b26, 0x00000000,
    0x80031962, 0x06060aa0, 0x4a447b06, 0x00440806,
    0x80030961, 0x7b260220, 0x00440606, 0x00000000,
    0x80021961, 0x0c070220, 0x00427b27, 0x00000000,
    0x80020061, 0x0e070220, 0x00427b47, 0x00000000,
    0x80021962, 0x0a070aa0, 0x4a420c07, 0x00420e07,
    0x80021161, 0x7b470220, 0x00420a07, 0x00000000,
    0x80021961, 0x12070220, 0x00427b27, 0x00000000,
    0x80020061, 0x14070220, 0x00427b67, 0x00000000,
    0x80021962, 0x10070aa0, 0x4a421207, 0x00421407,
    0x80021161, 0x7b670220, 0x00421007, 0x00000000,
    0x80021962, 0x7b850aa0, 0x4a007b64, 0x00347b85,
    0x80021962, 0x7c850aa0, 0x4a007c64, 0x00347c85,
    0x80031162, 0x7c050aa0, 0x4a007be4, 0x00467c05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043b61, 0x42050220, 0x00007ce4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006104, 0x0000008f,
    0x00049931, 0x00020100, 0xfa086214, 0x04004204,
    0xa37d0061, 0xff810000, 0x607d0061, 0x00102700,
    0x80000065, 0x64058220, 0x020000a4, 0xfffffc00,
    0xe0650066, 0x50002c03, 0x80031161, 0x17060220,
    0x00447d26, 0x00000000, 0x80031962, 0x15060aa0,
    0x4a447d06, 0x00441706, 0x80030961, 0x7d260220,
    0x00441506, 0x00000000, 0x80021961, 0x1b070220,
    0x00427d27, 0x00000000, 0x80020061, 0x1d070220,
    0x00427d47, 0x00000000, 0x80021962, 0x19070aa0,
    0x4a421b07, 0x00421d07, 0x80021161, 0x7d470220,
    0x00421907, 0x00000000, 0x80021961, 0x23070220,
    0x00427d27, 0x00000000, 0x80021761, 0x25070220,
    0x00427d67, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x1f070aa0,
    0x4a422307, 0x00422507, 0x80021161, 0x7d670220,
    0x00421f07, 0x00000000, 0x80021962, 0x7d850aa0,
    0x4a007d64, 0x00347d85, 0x80021962, 0x7e850aa0,
    0x4a007e64, 0x00347e85, 0x80031162, 0x7e050aa0,
    0x4a007de4, 0x00467e05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043961, 0x43050220,
    0x00007ee4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006404, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa086514, 0x04004304, 0xa3060061, 0xff810000,
    0x60060061, 0x00102900, 0x80003c65, 0x66058220,
    0x020000a4, 0xfffffc00, 0xe0670066, 0x54002c03,
    0x80031161, 0x28060220, 0x00440626, 0x00000000,
    0x80031962, 0x26060aa0, 0x4a440606, 0x00442806,
    0x80030961, 0x06260220, 0x00442606, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x2e070220, 0x00420627, 0x00000000,
    0x80020061, 0x30070220, 0x00420647, 0x00000000,
    0x80021962, 0x2a070aa0, 0x4a422e07, 0x00423007,
    0x80021161, 0x06470220, 0x00422a07, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x34070220, 0x00420627, 0x00000000,
    0x80023561, 0x36070220, 0x00420667, 0x00000000,
    0x80021962, 0x32070aa0, 0x4a423407, 0x00423607,
    0x80021161, 0x06670220, 0x00423207, 0x00000000,
    0x80021962, 0x06850aa0, 0x4a000664, 0x00340685,
    0x80021962, 0x07850aa0, 0x4a000764, 0x00340785,
    0x80031162, 0x07050aa0, 0x4a0006e4, 0x00460705,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043c61, 0x44050220, 0x000007e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006604, 0x0000008f,
    0x00049931, 0x00020100, 0xfa086714, 0x04004404,
    0x00040070, 0x00018220, 0x52466a05, 0x00000003,
    0x01040022, 0x0001c060, 0x00000310, 0x00000310,
    0x00043969, 0x68058660, 0x02466a05, 0x00000002,
    0xe0210068, 0x01e06a03, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa06c0040, 0x68010202,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x276e0070, 0x02106c03, 0x00030061, 0x72060220,
    0x00346c05, 0x00000000, 0x00130061, 0x74060220,
    0x00346d05, 0x00000000, 0x00040070, 0x00018220,
    0x52466a05, 0x00000001, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x70040660,
    0x0e2e0224, 0x6e052105, 0x00031961, 0x72260220,
    0x00347005, 0x00000000, 0x00131a61, 0x74260220,
    0x00347105, 0x00000000, 0x01040022, 0x0001c060,
    0x00000090, 0x00000060, 0x80000065, 0x76058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003966, 0x10218220,
    0x02007604, 0x0000000f, 0x00049931, 0x45160100,
    0xfa005b14, 0x04000000, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00040070, 0x00018220,
    0x52466a05, 0x00000002, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x45050220,
    0x020078e4, 0x00007ae4, 0x00040025, 0x00004600,
    0x00000000, 0x000001a8, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044931, 0x00000000,
    0xfb2a7224, 0x01004514, 0xa0770040, 0x01006c03,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27790070, 0x6c007703, 0x00040070, 0x00018220,
    0x52466a05, 0x00000001, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x01060220,
    0x00347705, 0x00000000, 0x00130061, 0x03060220,
    0x00347805, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa07b0040, 0x70027902,
    0x00031961, 0x01260220, 0x00347b05, 0x00000000,
    0x00131a61, 0x03260220, 0x00347c05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000090, 0x00000060,
    0x80000065, 0x05058220, 0x020000a4, 0xfffffc00,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003966, 0x10218220, 0x02000504, 0x0000000f,
    0x00049931, 0x46160100, 0xfa006214, 0x04000000,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00040070, 0x00018220, 0x52466a05, 0x00000002,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x46050220, 0x02007ee4, 0x000007e4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044031, 0x00000000, 0xfb2c0124, 0x01004614,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80031b61, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_procedurals_to_primrefs = {
   .prog_data = {
      .base.nr_params = 18,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 2048,
      .base.total_shared = 0,
      .base.program_size = 12032,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_procedurals_to_primrefs_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_primref_procedurals_to_primrefs_printfs,
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
      .push.cross_thread.dwords = 18,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 40,
   .arg_count = 6,
   .args = gfx125_bvh_build_primref_procedurals_to_primrefs_args,
   .code = gfx125_bvh_build_primref_procedurals_to_primrefs_code,
};
const char *gfx125_bvh_build_primref_procedurals_to_primrefs_sha1 = "c1da10fca639d4a6f5a13cc2898e7f4b82c9cf41";

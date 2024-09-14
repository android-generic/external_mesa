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

and(1)          g123<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g36<1>UD        g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g123UD          nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g124<1>UD       g123<0,1,0>UD   0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g35<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g31<1>D         g36<8,8,1>D     0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g124UD          nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g35.8<1>UW      g35<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g78<1>UD        g35<8,8,1>UW                    { align1 1H };
add(16)         g36<1>D         g31<1,1,0>D     g78<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.l.f0.0(16)  null<1>UD       g36<8,8,1>UD    g3.1<0,1,0>UD   { align1 1H I@1 };
and(16)         g27<1>UD        g3<0,1,0>UD     0x00ffffffUD    { align1 1H };
mov(16)         g29<1>UD        g3.3<0,1,0>UB                   { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
and(1)          g72<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g73<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g46.1<2>D       g2.7<0,1,0>D                    { align1 1Q };
mov(8)          g48.1<2>D       g2.7<0,1,0>D                    { align1 2Q };
mov(8)          g46<2>D         g2.6<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g48<2>D         g2.6<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g38UD           g46UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mul(8)          acc0<1>UD       g36<8,8,1>UD    g42<16,8,2>UW   { align1 1Q $2.dst };
mul(16)         g48<1>D         g36<8,8,1>D     g42<16,8,2>UW   { align1 1H $2.dst };
mul(16)         g8<1>D          g36<8,8,1>D     g42.1<16,8,2>UW { align1 1H };
mul(16)         g50<1>D         g36<8,8,1>D     g44<16,8,2>UW   { align1 1H $2.dst };
mul(16)         g10<1>D         g36<8,8,1>D     g44.1<16,8,2>UW { align1 1H };
mach(8)         g46<1>UD        g36<1,1,0>UD    g42<1,1,0>UD    { align1 1Q $2.src compacted AccWrEnable };
add(16)         g48.1<2>UW      g48.1<16,8,2>UW g8<16,8,2>UW    { align1 1H I@4 };
add(16)         g50.1<2>UW      g50.1<16,8,2>UW g10<16,8,2>UW   { align1 1H I@3 };
mul(8)          acc0<1>UD       g37<8,8,1>UD    g43<16,8,2>UW   { align1 2Q };
add(16)         g54<1>D         g38<1,1,0>D     g48<1,1,0>D     { align1 1H @3 $2.dst compacted };
mach(8)         g47<1>UD        g37<8,8,1>UD    g43<8,8,1>UD    { align1 2Q $2.src AccWrEnable };
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
or(16)          g33<1>UD        g73<1,1,0>UD    0x00000080UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g77<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g33UD           g68UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g34<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
or(16)          g80<1>UD        g73<1,1,0>UD    0x000000c0UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g34<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
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
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.l(16)       g124<1>F        g100<1,1,0>F    g70<1,1,0>F     { align1 1H $7.src compacted };
sel.ge(16)      g17<1>F         g100<1,1,0>F    g70<1,1,0>F     { align1 1H compacted };
cmp.l.f0.0(16)  g108<1>F        (abs)g68<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g112<1>F        (abs)g91<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g106<1>UD       g102<1,1,0>UD   g104<1,1,0>UD   { align1 1H F@5 compacted };
cmp.l.f0.0(16)  g114<1>F        (abs)g70<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g118<1>F        (abs)g93<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g110<1>UD       g106<1,1,0>UD   g108<1,1,0>UD   { align1 1H A@1 compacted };
and(16)         g116<1>UD       g112<1,1,0>UD   g114<1,1,0>UD   { align1 1H F@2 compacted };
and(16)         g120<1>UD       g116<1,1,0>UD   g118<1,1,0>UD   { align1 1H A@1 compacted };
and.nz.f0.0(16) g122<1>UD       g110<1,1,0>UD   g120<1,1,0>UD   { align1 1H I@1 compacted };
(+f0.0) sel(16) g9<1>UD         g17<8,8,1>UD    0xff800000UD    { align1 1H F@5 };
(+f0.0) sel(16) g11<1>UD        g19<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g13<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g3<1>UD         g124<8,8,1>UD   0x7f800000UD    { align1 1H F@6 };
(+f0.0) sel(16) g5<1>UD         g126<8,8,1>UD   0x7f800000UD    { align1 1H };
(+f0.0) sel(16) g7<1>UD         g15<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(16)         g25<2>W         -g122<8,8,1>D                   { align1 1H I@7 };
mov(16)         g24<1>UW        g25<16,8,2>UW                   { align1 1H I@1 };
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
bfi1(16)        g41<1>UD        g78<8,8,1>D     0D              { align1 1H };
cbit(16)        g57<1>UD        g39<8,8,1>UD                    { align1 1H I@2 };
cmp.z.f0.0(16)  null<1>D        g78<8,8,1>D     0D              { align1 1H };
and(16)         g43<1>UD        g39<1,1,0>UD    g41<1,1,0>UD    { align1 1H I@3 compacted };
cbit(16)        g45<1>UD        g43<8,8,1>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g47<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g49<1>UD        g47<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g53<2>UD        g47<4,4,1>UD                    { align1 1Q };
mov(8)          g55<2>UD        g48<4,4,1>UD                    { align1 2Q };
add(16)         g51<1>D         -g49<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g53.1<2>UD      g51<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g55.1<2>UD      g52<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g53UD           g57UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g54<1>D         g45<1,1,0>D     g25<0,1,0>D     { align1 1H $12.dst compacted };
mov.nz.f0.0(16) null<1>D        g31<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
and(1)          g56<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shl(16)         g57<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H I@7 };
and(1)          g61<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
or(16)          g59<1>UD        g57<1,1,0>UD    0x000002c0UD    { align1 1H I@2 compacted };
or(16)          g62<1>UD        g57<1,1,0>UD    0x00000200UD    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
or(1)           a0.1<1>UD       g56<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g71UD           g59UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g61<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g62UD           g3UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
and(1)          g64<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g65<1>UD        g57<1,1,0>UD    0x00000240UD    { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g64<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g5UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
and(1)          g67<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
or(16)          g68<1>UD        g57<1,1,0>UD    0x00000280UD    { align1 1H F@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g67<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g68UD           g7UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
and(1)          g70<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g70<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g59UD           g71UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
and(1)          g71<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
or(16)          g72<1>UD        g57<1,1,0>UD    0x000003c0UD    { align1 1H $1.src compacted };
and(1)          g74<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(16)          g75<1>UD        g57<1,1,0>UD    0x00000300UD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g71<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g84UD           g72UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g74<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g75UD           g9UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
and(1)          g77<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g33<1>UD        g57<1,1,0>UD    0x00000340UD    { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g77<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g33UD           g11UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
and(1)          g80<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
or(16)          g81<1>UD        g57<1,1,0>UD    0x00000380UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g80<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g81UD           g13UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g83<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g83<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g72UD           g84UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
shl(16)         g84<1>D         g29<8,8,1>D     0x0000001dUD    { align1 1H $6.src };
and(1)          g86<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g87<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
and(1)          g88<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
or(1)           a0.1<1>UD       g86<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g90UD           g62UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
or(1)           a0.1<1>UD       g87<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g92UD           g65UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@1 };
or(1)           a0.1<1>UD       g88<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g94UD           g68UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g89<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g62UD           g90UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
and(1)          g90<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g90<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g92UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
and(1)          g91<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g91<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g68UD           g94UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
and(1)          g92<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g92<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g59UD           g27UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
or(16)          g93<1>UD        g36<1,1,0>UD    g84<1,1,0>UD    { align1 1H I@7 compacted };
and(1)          g95<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g98<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
mov(16)         g29<1>UD        g93<8,8,1>UD                    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@5 };
or(1)           a0.1<1>UD       g95<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g99UD           g75UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g101UD          g33UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g103UD          g81UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
mov(16)         g23<1>UD        g99<8,8,1>UD                    { align1 1H $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
mov(16)         g25<1>UD        g101<8,8,1>UD                   { align1 1H $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g27<1>UD        g103<8,8,1>UD                   { align1 1H $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g98<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g75UD           g99UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g99<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g99<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g33UD           g101UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g81UD           g103UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
and(1)          g101<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g101<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g72UD           g93UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
shl(16)         g102<1>D        g54<8,8,1>D     0x00000005UD    { align1 1H $6.src };
shr(16)         g104<1>UD       g54<1,1,0>UD    0x0000001bUD    { align1 1H $1.src compacted };
and(1)          g116<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g118<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g119<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g106<1>D        g2.4<0,1,0>D    g102<1,1,0>D    { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g116<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g15UD           g62UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g117<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g17UD           g65UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g118<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g19UD           g68UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g119<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g21UD           g59UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
cmp.l.f0.0(16)  g108<1>UD       g106<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g112<2>UD       g106<4,4,1>UD                   { align1 1Q };
mov(8)          g114<2>UD       g107<4,4,1>UD                   { align1 2Q };
add3(16)        g110<1>D        g2.5<0,1,0>D    g104<8,8,1>D    -g108<1,1,1>D { align1 1H I@3 };
mov(8)          g112.1<2>UD     g110<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g114.1<2>UD     g111<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g112UD          g15UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $3 };
add(16)         g120<1>D        g106<1,1,0>D    16D             { align1 1H compacted };
cmp.l.f0.0(16)  g122<1>UD       g120<1,1,0>UD   g106<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g15<2>UD        g120<4,4,1>UD                   { align1 1Q $3.src };
mov(8)          g17<2>UD        g121<4,4,1>UD                   { align1 2Q $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g124<1>D        -g122<1,1,0>D   g110<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g15.1<2>UD      g124<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g17.1<2>UD      g125<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g15UD           g23UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $12 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g16<1>F         g3<1,1,0>F      g9<1,1,0>F      { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g18<1>F         g5<1,1,0>F      g11<1,1,0>F     { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g20<1>F         g7<1,1,0>F      g13<1,1,0>F     { align1 1H $0.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
cmp.ge.f0.0(16) g22<1>F         g9<1,1,0>F      g3<1,1,0>F      { align1 1H $3.src compacted };
mov(16)         g43<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g43<1>F         g3<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
and(1)          g45<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g46<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
(+f0.0) sel(16) g24<1>UD        g16<8,8,1>UD    0x7f800000UD    { align1 1H F@5 };
mov(8)          g36<2>UD        g43.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
or(16)          g48<1>UD        g46<1,1,0>UD    0x00000580UD    { align1 1H I@3 compacted };
cmp.ge.f0.0(16) g26<1>F         g11<1,1,0>F     g5<1,1,0>F      { align1 1H $12.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(8)        g30<2>F         g43<8,4,2>F     g36<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
(+f0.0) sel(16) g28<1>UD        g18<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
mov(8)          g43.1<2>UD      g30<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.ge.f0.0(16) g30<1>F         g13<1,1,0>F     g7<1,1,0>F      { align1 1H compacted };
mov(4)          g40<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g50<4>UD        g43.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g35<1>UD        g20<8,8,1>UD    0x7f800000UD    { align1 1H };
sel.l(4)        g38<4>F         g40<8,2,4>F     g50<8,2,4>F     { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) null<1>D        g22<8,8,1>D     0D              { align1 1H F@6 };
mov(4)          g43.2<4>UD      g38<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@3 };
(+f0.0) sel(16) g37<1>UD        g16<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g54<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g56<4>UD        g43.3<8,2,4>UD                  { align1 WE_all 1N $12.src };
cmp.nz.f0.0(16) null<1>D        g26<8,8,1>D     0D              { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g52<4>F         g54<8,2,4>F     g56<8,2,4>F     { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
(+f0.0) sel(16) g39<1>UD        g18<8,8,1>UD    0xff800000UD    { align1 1H };
mov(4)          g43.3<4>UD      g52<8,2,4>UD                    { align1 WE_all 1N F@1 };
cmp.nz.f0.0(16) null<1>D        g30<8,8,1>D     0D              { align1 1H F@3 };
sel.l(4)        g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
(+f0.0) sel(16) g41<1>UD        g20<8,8,1>UD    0xff800000UD    { align1 1H };
sel.l(8)        g44<1>F         g43.7<0,1,0>F   g44<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g104<1>UD       g44.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g45<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g48UD           g104UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
mov(16)         g50<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g50<1>F         g5<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
and(1)          g52<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
or(16)          g53<1>UD        g46<1,1,0>UD    0x000005c0UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g59<2>UD        g50.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(8)        g57<2>F         g50<8,4,2>F     g59<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g50.1<2>UD      g57<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g63<4>UD        g50.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g65<4>UD        g50.2<8,2,4>UD                  { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.l(4)        g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g50.2<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(4)          g69<4>UD        g50.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g71<4>UD        g50.3<8,2,4>UD                  { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(4)        g67<4>F         g69<8,2,4>F     g71<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g50.3<4>UD      g67<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g50.4<1>F       g50.3<0,1,0>F   g50.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g51.4<1>F       g51.3<0,1,0>F   g51.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g51<1>F         g50.7<0,1,0>F   g51<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g105<1>UD       g51.7<0,1,0>UD                  { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g52<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g53UD           g105UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
mov(16)         g54<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $5.src compacted };
mov(16)         g54<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
and(1)          g56<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g57<1>UD        g46<1,1,0>UD    0x00000600UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g74<2>UD        g54.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.l(8)        g72<2>F         g54<8,4,2>F     g74<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g54.1<2>UD      g72<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g33<4>UD        g54.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g80<4>UD        g54.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.l(4)        g76<4>F         g33<8,2,4>F     g80<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g54.2<4>UD      g76<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g84<4>UD        g54.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g86<4>UD        g54.3<8,2,4>UD                  { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.l(4)        g82<4>F         g84<8,2,4>F     g86<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g54.3<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g54.4<1>F       g54.3<0,1,0>F   g54.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g55.4<1>F       g55.3<0,1,0>F   g55.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g55<1>F         g54.7<0,1,0>F   g55<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g106<1>UD       g55.7<0,1,0>UD                  { align1 1H $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g56<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g57UD           g106UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
mov(16)         g58<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H $6.src compacted };
mov(16)         g58<1>F         g9<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
and(1)          g60<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g61<1>UD        g46<1,1,0>UD    0x00000640UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g89<2>UD        g58.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(8)       g87<2>F         g58<8,4,2>F     g89<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g58.1<2>UD      g87<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(4)          g93<4>UD        g58.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g95<4>UD        g58.2<8,2,4>UD                  { align1 WE_all 1N $9.src };
sel.ge(4)       g91<4>F         g93<8,2,4>F     g95<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g58.2<4>UD      g91<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g99<4>UD        g58.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g101<4>UD       g58.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.ge(4)       g97<4>F         g99<8,2,4>F     g101<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g58.3<4>UD      g97<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g58.4<1>F       g58.3<0,1,0>F   g58.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g59.4<1>F       g59.3<0,1,0>F   g59.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g59<1>F         g58.7<0,1,0>F   g59<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g107<1>UD       g59.7<0,1,0>UD                  { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g60<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g61UD           g107UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
mov(16)         g63<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g63<1>F         g11<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
and(1)          g65<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g66<1>UD        g46<1,1,0>UD    0x00000680UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g104<2>UD       g63.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g102<2>F        g63<8,4,2>F     g104<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g63.1<2>UD      g102<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g108<4>UD       g63.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g110<4>UD       g63.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g106<4>F        g108<8,2,4>F    g110<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g63.2<4>UD      g106<8,2,4>UD                   { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g114<4>UD       g63.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g116<4>UD       g63.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(4)       g112<4>F        g114<8,2,4>F    g116<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g63.3<4>UD      g112<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g63.4<1>F       g63.3<0,1,0>F   g63.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g64.4<1>F       g64.3<0,1,0>F   g64.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g64<1>F         g63.7<0,1,0>F   g64<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g108<1>UD       g64.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g65<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g66UD           g108UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
mov(16)         g67<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H $7.src compacted };
mov(16)         g67<1>F         g13<1,1,0>F                     { align1 1H compacted };
and(1)          g69<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g70<1>UD        g46<1,1,0>UD    0x000006c0UD    { align1 1H compacted };
mov(8)          g119<2>UD       g67.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g117<2>F        g67<8,4,2>F     g119<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g67.1<2>UD      g117<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g123<4>UD       g67.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g125<4>UD       g67.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g121<4>F        g123<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g67.2<4>UD      g121<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g5<4>UD         g67.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g7<4>UD         g67.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g3<4>F          g5<8,2,4>F      g7<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g67.3<4>UD      g3<8,2,4>UD                     { align1 WE_all 1N F@1 };
sel.ge(4)       g67.4<1>F       g67.3<0,1,0>F   g67.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g68.4<1>F       g68.3<0,1,0>F   g68.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g68<1>F         g67.7<0,1,0>F   g68<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g109<1>UD       g68.7<0,1,0>UD                  { align1 1H $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g69<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g70UD           g109UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
cmp.l.f0.0(16)  null<1>UD       g78<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g71<1>D         g2.2<0,1,0>D    128D            { align1 1H $4.src compacted };
shl(16)         g76<1>D         g78<8,8,1>D     0x00000002UD    { align1 1H };
shr(16)         g33<1>UD        g78<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g73<1>UD        g71<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g80<1>D         g71<1,1,0>D     g76<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g75<1>D         -g73<1,1,0>D    g2.3<0,1,0>D    { align1 1H compacted };
cmp.l.f0.0(16)  g82<1>UD        g80<1,1,0>UD    g71<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g86<2>UD        g80<4,4,1>UD                    { align1 1Q };
mov(8)          g88<2>UD        g81<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g78<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g84<1>D         g75<8,8,1>D     g33<8,8,1>D     -g82<1,1,1>D { align1 1H };
mov(8)          g86.1<2>UD      g84<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g88.1<2>UD      g85<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
and(1)          g90<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g90<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $4.src };
send(16)        g110UD          g48UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
cmp.l.f0.0(16)  null<1>UD       g78<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
(+f0.0) sel(16) g110<1>UD       g51.7<0,1,0>UD  g55.7<0,1,0>UD  { align1 1H };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g86UD           g110UD          0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add(16)         g91<1>D         g80<1,1,0>D     12D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g93<1>UD        g91<1,1,0>UD    g80<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g78<8,8,1>UD    0x00000001UD    { align1 1H };
mov(8)          g97<2>UD        g91<4,4,1>UD                    { align1 1Q };
mov(8)          g99<2>UD        g92<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g95<1>D         -g93<1,1,0>D    g84<1,1,0>D     { align1 1H compacted };
mov(8)          g97.1<2>UD      g95<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g99.1<2>UD      g96<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL11         UIP:  LABEL10             { align1 1H };
and(1)          g101<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g101<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $4.src };
send(16)        g111UD          g61UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
else(16)        JIP:  LABEL10         UIP:  LABEL10             { align1 1H };

LABEL11:
cmp.l.f0.0(16)  null<1>UD       g78<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
(+f0.0) sel(16) g111<1>UD       g64.7<0,1,0>UD  g68.7<0,1,0>UD  { align1 1H };

LABEL10:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g97UD           g111UD          0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };

LABEL7:
endif(16)       JIP:  LABEL12                                   { align1 1H };

LABEL12:
mov(16)         g102<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g102<1>F        g24<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
and(1)          g104<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g105<1>UD       g46<1,1,0>UD    0x00000400UD    { align1 1H compacted };
mov(8)          g10<2>UD        g102.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g8<2>F          g102<8,4,2>F    g10<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g102.1<2>UD     g8<8,4,2>UD                     { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(4)          g14<4>UD        g102.1<8,2,4>UD                 { align1 WE_all 1N A@1 };
mov(4)          g16<4>UD        g102.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g12<4>F         g14<8,2,4>F     g16<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g102.2<4>UD     g12<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g20<4>UD        g102.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g22<4>UD        g102.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g18<4>F         g20<8,2,4>F     g22<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g102.3<4>UD     g18<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g102.4<1>F      g102.3<0,1,0>F  g102.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g103.4<1>F      g103.3<0,1,0>F  g103.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g103<1>F        g102.7<0,1,0>F  g103<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g112<1>UD       g103.7<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g104<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g105UD          g112UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
mov(16)         g107<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H $7.src compacted };
mov(16)         g107<1>F        g28<1,1,0>F                     { align1 1H compacted };
and(1)          g109<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(16)          g110<1>UD       g46<1,1,0>UD    0x00000440UD    { align1 1H $4.src compacted };
mov(8)          g25<2>UD        g107.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g23<2>F         g107<8,4,2>F    g25<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g107.1<2>UD     g23<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g29<4>UD        g107.1<8,2,4>UD                 { align1 WE_all 1N A@1 };
mov(4)          g31<4>UD        g107.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g27<4>F         g29<8,2,4>F     g31<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g107.2<4>UD     g27<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g48<4>UD        g107.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g50<4>UD        g107.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g43<4>F         g48<8,2,4>F     g50<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g107.3<4>UD     g43<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g107.4<1>F      g107.3<0,1,0>F  g107.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g108.4<1>F      g108.3<0,1,0>F  g108.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g108<1>F        g107.7<0,1,0>F  g108<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g113<1>UD       g108.7<0,1,0>UD                 { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g109<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g110UD          g113UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g111<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H $10.src compacted };
mov(16)         g111<1>F        g35<1,1,0>F                     { align1 1H compacted };
and(1)          g113<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
or(16)          g114<1>UD       g46<1,1,0>UD    0x00000480UD    { align1 1H $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(8)          g53<2>UD        g111.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g51<2>F         g111<8,4,2>F    g53<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g111.1<2>UD     g51<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(4)          g57<4>UD        g111.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g59<4>UD        g111.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g55<4>F         g57<8,2,4>F     g59<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g111.2<4>UD     g55<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g63<4>UD        g111.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g65<4>UD        g111.3<8,2,4>UD                 { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.l(4)        g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g111.3<4>UD     g61<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g111.4<1>F      g111.3<0,1,0>F  g111.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g112.4<1>F      g112.3<0,1,0>F  g112.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g112<1>F        g111.7<0,1,0>F  g112<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g116<1>UD       g112.7<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g113<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g114UD          g116UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
mov(16)         g115<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H $11.src compacted };
mov(16)         g115<1>F        g37<1,1,0>F                     { align1 1H compacted };
and(1)          g117<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(16)          g118<1>UD       g46<1,1,0>UD    0x000004c0UD    { align1 1H compacted };
mov(8)          g68<2>UD        g115.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g66<2>F         g115<8,4,2>F    g68<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g115.1<2>UD     g66<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g72<4>UD        g115.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g74<4>UD        g115.2<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g70<4>F         g72<8,2,4>F     g74<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g115.2<4>UD     g70<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g33<4>UD        g115.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g80<4>UD        g115.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g76<4>F         g33<8,2,4>F     g80<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g115.3<4>UD     g76<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g115.4<1>F      g115.3<0,1,0>F  g115.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g116.4<1>F      g116.3<0,1,0>F  g116.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g116<1>F        g115.7<0,1,0>F  g116<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g120<1>UD       g116.7<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g117<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g118UD          g120UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
mov(16)         g120<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H $12.src compacted };
mov(16)         g120<1>F        g39<1,1,0>F                     { align1 1H compacted };
and(1)          g122<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g123<1>UD       g46<1,1,0>UD    0x00000500UD    { align1 1H compacted };
mov(8)          g83<2>UD        g120.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g81<2>F         g120<8,4,2>F    g83<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g120.1<2>UD     g81<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g87<4>UD        g120.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g89<4>UD        g120.2<8,2,4>UD                 { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g85<4>F         g87<8,2,4>F     g89<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g120.2<4>UD     g85<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g93<4>UD        g120.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g95<4>UD        g120.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g91<4>F         g93<8,2,4>F     g95<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g120.3<4>UD     g91<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g120.4<1>F      g120.3<0,1,0>F  g120.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g121.4<1>F      g121.3<0,1,0>F  g121.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g121<1>F        g120.7<0,1,0>F  g121<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g125<1>UD       g121.7<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g122<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g123UD          g125UD          0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
mov(16)         g124<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H $13.src compacted };
mov(16)         g124<1>F        g41<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
and(1)          g126<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $13.src };
or(16)          g3<1>UD         g46<1,1,0>UD    0x00000540UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(8)          g98<2>UD        g124.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(8)       g96<2>F         g124<8,4,2>F    g98<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g124.1<2>UD     g96<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g102<4>UD       g124.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g109<4>UD       g124.2<8,2,4>UD                 { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g100<4>F        g102<8,2,4>F    g109<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g124.2<4>UD     g100<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g115<4>UD       g124.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g122<4>UD       g124.3<8,2,4>UD                 { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sel.ge(4)       g113<4>F        g115<8,2,4>F    g122<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g124.3<4>UD     g113<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.ge(4)       g124.4<1>F      g124.3<0,1,0>F  g124.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g125.4<1>F      g125.3<0,1,0>F  g125.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g125<1>F        g124.7<0,1,0>F  g125<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g5<1>UD         g125.7<0,1,0>UD                 { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g126<0,1,0>UD   0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g3UD            g5UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
cmp.l.f0.0(16)  null<1>UD       g78<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
shl(16)         g4<1>D          g78<8,8,1>D     0x00000002UD    { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
shr(16)         g6<1>UD         g78<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g8<1>D          g2<0,1,0>D      g4<1,1,0>D      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g10<1>UD        g8<1,1,0>UD     g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g14<2>UD        g8<4,4,1>UD                     { align1 1Q };
mov(8)          g16<2>UD        g9<4,4,1>UD                     { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g78<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g12<1>D         g2.1<0,1,0>D    g6<8,8,1>D      -g10<1,1,1>D { align1 1H };
mov(8)          g14.1<2>UD      g12<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g16.1<2>UD      g13<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
and(1)          g18<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g18<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $9.src };
send(16)        g6UD            g105UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
cmp.l.f0.0(16)  null<1>UD       g78<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g6<1>UD         g108.7<0,1,0>UD g112.7<0,1,0>UD { align1 1H @5 $9.dst };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g14UD           g6UD            0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
add(16)         g19<1>D         g8<1,1,0>D      16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g21<1>UD        g19<1,1,0>UD    g8<1,1,0>UD     { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g78<8,8,1>UD    0x00000001UD    { align1 1H };
mov(8)          g25<2>UD        g19<4,4,1>UD                    { align1 1Q };
mov(8)          g27<2>UD        g20<4,4,1>UD                    { align1 2Q };
add(16)         g23<1>D         -g21<1,1,0>D    g12<1,1,0>D     { align1 1H I@4 compacted };
mov(8)          g25.1<2>UD      g23<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g27.1<2>UD      g24<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
and(1)          g29<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g29<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $12.src };
send(16)        g7UD            g118UD          nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>UD       g78<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
(+f0.0) sel(16) g7<1>UD         g121.7<0,1,0>UD g125.7<0,1,0>UD { align1 1H $12.dst };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g25UD           g7UD            0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

LABEL13:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_procedurals_to_primrefs_code[] = {
    0x80000065, 0x7b058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x24050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa007b0c, 0x00340000,
    0xe27c3040, 0x04017b03, 0x80030061, 0x23054410,
    0x00000000, 0x76543210, 0x00041b69, 0x1f058660,
    0x02462405, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa007c0c, 0x00300000, 0x64231a40, 0x00802395,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x4e050120, 0x00462305, 0x00000000,
    0xa0241940, 0x4e001f02, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00041970, 0x00010220,
    0x52462405, 0x00000324, 0x00040065, 0x1b058220,
    0x02000304, 0x00ffffff, 0x00040061, 0x1d050020,
    0x0000031c, 0x00000000, 0x01040022, 0x0001c060,
    0x00000608, 0x00000598, 0x80000065, 0x48058220,
    0x020000a4, 0xfffffc00, 0x00040069, 0x49058120,
    0x02462305, 0x00000002, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x2e260660,
    0x000002e4, 0x00000000, 0x00130061, 0x30260660,
    0x000002e4, 0x00000000, 0x00031a61, 0x2e060660,
    0x000002c4, 0x00000000, 0x00131a61, 0x30060660,
    0x000002c4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x26440000,
    0xfb002e24, 0x000c0000, 0x00032241, 0x20010220,
    0x01462405, 0x00562a06, 0x00042241, 0x30050660,
    0x01462405, 0x00562a06, 0x00040041, 0x08050660,
    0x01462405, 0x00562a16, 0x00042241, 0x32050660,
    0x01462405, 0x00562c06, 0x00040041, 0x0a050660,
    0x01462405, 0x00562c16, 0x3e2e3249, 0x2a002403,
    0x00041c40, 0x30160110, 0x01563016, 0x00560806,
    0x00041b40, 0x32160110, 0x01563216, 0x00560a06,
    0x00130041, 0x20010220, 0x01462505, 0x00562b06,
    0xa036b240, 0x30002602, 0x00133249, 0x2f050222,
    0x02462505, 0x00462b05, 0x27381a70, 0x26003603,
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
    0xe0210066, 0x08004903, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004d04, 0x0000008f, 0x00049631, 0x00020100,
    0xfa082114, 0x04004404, 0x80003665, 0x22058220,
    0x020000a4, 0xfffffc00, 0xe0500066, 0x0c004903,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002204, 0x0000008f,
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
    0xe7682b70, 0x7f836400, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x277c3762, 0x46006400,
    0x25110062, 0x46006400, 0xe76c0070, 0x7f834400,
    0xe7700070, 0x7f835b00, 0x206a1565, 0x68006603,
    0xe7720070, 0x7f834600, 0xe7760070, 0x7f835d00,
    0x206e0965, 0x6c006a03, 0x20741265, 0x72007003,
    0x20780965, 0x76007403, 0x2e7a1965, 0x78006e03,
    0x01041562, 0x09058220, 0x02461105, 0xff800000,
    0x01041762, 0x0b058220, 0x02461305, 0xff800000,
    0x01041762, 0x0d058220, 0x02461505, 0xff800000,
    0x01041662, 0x03058220, 0x02467c05, 0x7f800000,
    0x01040062, 0x05058220, 0x02467e05, 0x7f800000,
    0x01041762, 0x07058220, 0x02460f05, 0x7f800000,
    0x00041f61, 0x19062650, 0x00467a05, 0x00000000,
    0x00041961, 0x18050110, 0x00561906, 0x00000000,
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
    0x06464e05, 0x00000000, 0x00041a4d, 0x39050220,
    0x00462705, 0x00000000, 0x00040070, 0x00018660,
    0x16464e05, 0x00000000, 0x202b1b65, 0x29002703,
    0x0004194d, 0x2d050220, 0x00462b05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000098, 0x00000098,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa02f0040, 0x02410203, 0x27311970, 0x02102f03,
    0x00030061, 0x35060220, 0x00342f05, 0x00000000,
    0x00130061, 0x37060220, 0x00343005, 0x00000000,
    0xa0331b40, 0x02123112, 0x00031961, 0x35260220,
    0x00343305, 0x00000000, 0x00131a61, 0x37260220,
    0x00343405, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x19140000,
    0xfb183524, 0x01003914, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0362c40, 0x19102d02,
    0x00040061, 0x00010660, 0x20461f05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000ae8, 0x00000ae8,
    0x80003c65, 0x38058220, 0x020000a4, 0xfffffc00,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x00041f69, 0x39058120, 0x02462305, 0x00000002,
    0x80003365, 0x3d058220, 0x020000a4, 0xfffffc00,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0xe03b1a66, 0x2c003903, 0xe03e3366, 0x20003903,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003804, 0x0000000f,
    0x00049d31, 0x47160100, 0xfa003b14, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003d04, 0x0000008f,
    0x00049e31, 0x00020100, 0xfa083e14, 0x04000304,
    0x80003465, 0x40058220, 0x020000a4, 0xfffffc00,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0xe0411766, 0x24003903, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004004, 0x0000008f, 0x00049f31, 0x00020100,
    0xfa084114, 0x04000504, 0x80001765, 0x43058220,
    0x020000a4, 0xfffffc00, 0xe0441466, 0x28003903,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004304, 0x0000008f,
    0x00049031, 0x00020100, 0xfa084414, 0x04000704,
    0x80001265, 0x46058220, 0x020000a4, 0xfffffc00,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004604, 0x0000008f,
    0x00049131, 0x00020100, 0xfa083b14, 0x04004704,
    0x80003165, 0x47058220, 0x020000a4, 0xfffffc00,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0xe0483166, 0x3c003903, 0x80003b65, 0x4a058220,
    0x020000a4, 0xfffffc00, 0xe04b3566, 0x30003903,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004704, 0x0000000f,
    0x00049231, 0x54160100, 0xfa004814, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004a04, 0x0000008f,
    0x00049331, 0x00020100, 0xfa084b14, 0x04000904,
    0x80000065, 0x4d058220, 0x020000a4, 0xfffffc00,
    0xe0213666, 0x34003903, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004d04, 0x0000008f, 0x00049431, 0x00020100,
    0xfa082114, 0x04000b04, 0x80003765, 0x50058220,
    0x020000a4, 0xfffffc00, 0xe0510066, 0x38003903,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005004, 0x0000008f,
    0x00049531, 0x00020100, 0xfa085114, 0x04000d04,
    0x80000065, 0x53058220, 0x020000a4, 0xfffffc00,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005304, 0x0000008f,
    0x00049631, 0x00020100, 0xfa084814, 0x04005404,
    0x00043669, 0x54058660, 0x02461d05, 0x0000001d,
    0x80000065, 0x56058220, 0x020000a4, 0xfffffc00,
    0x80003865, 0x57058220, 0x020000a4, 0xfffffc00,
    0x80003865, 0x58058220, 0x020000a4, 0xfffffc00,
    0x80003865, 0x59058220, 0x020000a4, 0xfffffc00,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005604, 0x0000000f,
    0x00049731, 0x5a160100, 0xfa003e14, 0x04000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005704, 0x0000000f,
    0x00049831, 0x5c160100, 0xfa004114, 0x04000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80000901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005804, 0x0000000f,
    0x00049931, 0x5e160100, 0xfa004414, 0x04000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005904, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa083e14, 0x04005a04,
    0x80003a65, 0x5a058220, 0x020000a4, 0xfffffc00,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005a04, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa084114, 0x04005c04,
    0x80003a65, 0x5b058220, 0x020000a4, 0xfffffc00,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005b04, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa084414, 0x04005e04,
    0x80003b65, 0x5c058220, 0x020000a4, 0xfffffc00,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005c04, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa083b14, 0x04001b04,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x205d1f66, 0x54002403, 0x80003c65, 0x5f058220,
    0x020000a4, 0xfffffc00, 0x80003965, 0x60058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x61058220,
    0x020000a4, 0xfffffc00, 0x80003a65, 0x62058220,
    0x020000a4, 0xfffffc00, 0x00041d61, 0x1d050220,
    0x00465d05, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80000d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005f04, 0x0000000f, 0x00049e31, 0x63160100,
    0xfa004b14, 0x04000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006004, 0x0000000f, 0x00049f31, 0x65160100,
    0xfa002114, 0x04000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006104, 0x0000000f, 0x00049031, 0x67160100,
    0xfa005114, 0x04000000, 0x00042e61, 0x17050220,
    0x00466305, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x00042f61, 0x19050220,
    0x00466505, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00042061, 0x1b050220,
    0x00466705, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006204, 0x0000008f, 0x00049531, 0x00020100,
    0xfa084b14, 0x04006304, 0x80003565, 0x63058220,
    0x020000a4, 0xfffffc00, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006304, 0x0000008f, 0x00049631, 0x00020100,
    0xfa082114, 0x04006504, 0x80003565, 0x64058220,
    0x020000a4, 0xfffffc00, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006404, 0x0000008f, 0x00049131, 0x00020100,
    0xfa085114, 0x04006704, 0x80003665, 0x65058220,
    0x020000a4, 0xfffffc00, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006504, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa084814, 0x04005d04, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x00043669, 0x66058660,
    0x02463605, 0x00000005, 0xe0683168, 0x01b03603,
    0x80000065, 0x74058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x75058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x76058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x77058220, 0x020000a4, 0xfffffc00,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa06a1e40, 0x6601025a, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007404, 0x0000000f, 0x00049331, 0x0f160100,
    0xfa003e14, 0x04000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007504, 0x0000000f, 0x00049431, 0x11160100,
    0xfa004114, 0x04000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007604, 0x0000000f, 0x00049231, 0x13160100,
    0xfa004414, 0x04000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007704, 0x0000000f, 0x00049331, 0x15160100,
    0xfa003b14, 0x04000000, 0x276c1970, 0x02106a0b,
    0x00030061, 0x70060220, 0x00346a05, 0x00000000,
    0x00130061, 0x72060220, 0x00346b05, 0x00000000,
    0x00041b52, 0x6e040660, 0x0e2e02a4, 0x6c056805,
    0x00031961, 0x70260220, 0x00346e05, 0x00000000,
    0x00131a61, 0x72260220, 0x00346f05, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044331, 0x00000000, 0xfb087024, 0x000c0f44,
    0xa0780040, 0x01006a03, 0x277a1970, 0x6a007803,
    0x00033361, 0x0f060220, 0x00347805, 0x00000000,
    0x00133361, 0x11060220, 0x00347905, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa07c1b40, 0x6e027a02, 0x00031961, 0x0f260220,
    0x00347c05, 0x00000000, 0x00131a61, 0x11260220,
    0x00347d05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb080f24, 0x000c1744, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x20103e40, 0x09000300,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x20123f40, 0x0b000500, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x20143040, 0x0d000700,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x25163370, 0x03000900, 0xa32b1f61, 0x7f810000,
    0x602b0061, 0x00100300, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x2d058220,
    0x020000a4, 0xfffffc00, 0x00040069, 0x2e058120,
    0x02462305, 0x00000002, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x01041562, 0x18058220,
    0x02461005, 0x7f800000, 0x80031161, 0x24060220,
    0x00442b26, 0x00000000, 0xe0301b66, 0x58002e03,
    0x251a2c70, 0x05000b00, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80031a62, 0x1e060aa0,
    0x5a442b06, 0x00442406, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x01041662, 0x1c058220,
    0x02461205, 0x7f800000, 0x80030961, 0x2b260220,
    0x00441e06, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x251e0070, 0x07000d00,
    0x80021961, 0x28070220, 0x00422b27, 0x00000000,
    0x80020061, 0x32070220, 0x00422b47, 0x00000000,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x23058220, 0x02461405, 0x7f800000,
    0x80021a62, 0x26070aa0, 0x5a422807, 0x00423207,
    0x00041670, 0x00018660, 0x26461605, 0x00000000,
    0x80021161, 0x2b470220, 0x00422607, 0x00000000,
    0x80001301, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x25058220, 0x02461005, 0xff800000,
    0x80021a61, 0x36070220, 0x00422b27, 0x00000000,
    0x80023c61, 0x38070220, 0x00422b67, 0x00000000,
    0x00041470, 0x00018660, 0x26461a05, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x34070aa0, 0x5a423607, 0x00423807,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x27058220, 0x02461205, 0xff800000,
    0x80021161, 0x2b670220, 0x00423407, 0x00000000,
    0x00041370, 0x00018660, 0x26461e05, 0x00000000,
    0x80021a62, 0x2b850aa0, 0x5a002b64, 0x00342b85,
    0x80021a62, 0x2c850aa0, 0x5a002c64, 0x00342c85,
    0x80001401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x29058220, 0x02461405, 0xff800000,
    0x80031162, 0x2c050aa0, 0x5a002be4, 0x00462c05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x68050220, 0x00002ce4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002d04, 0x0000008f,
    0x00049431, 0x00020100, 0xfa083014, 0x04006804,
    0xa3320061, 0x7f810000, 0x60320061, 0x00100500,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x34058220, 0x020000a4, 0xfffffc00,
    0x80001501, 0x00000000, 0x00000000, 0x00000000,
    0xe0350066, 0x5c002e03, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x3b060220,
    0x00443226, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x39060aa0,
    0x5a443206, 0x00443b06, 0x80030961, 0x32260220,
    0x00443906, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x3f070220,
    0x00423227, 0x00000000, 0x80023461, 0x41070220,
    0x00423247, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x3d070aa0,
    0x5a423f07, 0x00424107, 0x80021161, 0x32470220,
    0x00423d07, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x45070220,
    0x00423227, 0x00000000, 0x80023b61, 0x47070220,
    0x00423267, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x43070aa0,
    0x5a424507, 0x00424707, 0x80021161, 0x32670220,
    0x00424307, 0x00000000, 0x80021962, 0x32850aa0,
    0x5a003264, 0x00343285, 0x80021962, 0x33850aa0,
    0x5a003364, 0x00343385, 0x80031162, 0x33050aa0,
    0x5a0032e4, 0x00463305, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043461, 0x69050220,
    0x000033e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003404, 0x0000008f, 0x00049531, 0x00020100,
    0xfa083514, 0x04006904, 0xa3363561, 0x7f810000,
    0x60360061, 0x00100700, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x38058220,
    0x020000a4, 0xfffffc00, 0xe0390066, 0x60002e03,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x4a060220, 0x00443626, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80031962, 0x48060aa0, 0x5a443606, 0x00444a06,
    0x80030961, 0x36260220, 0x00444806, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x21070220, 0x00423627, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80023761, 0x50070220, 0x00423647, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x4c070aa0, 0x5a422107, 0x00425007,
    0x80021161, 0x36470220, 0x00424c07, 0x00000000,
    0x80021961, 0x54070220, 0x00423627, 0x00000000,
    0x80023861, 0x56070220, 0x00423667, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x52070aa0, 0x5a425407, 0x00425607,
    0x80021161, 0x36670220, 0x00425207, 0x00000000,
    0x80021962, 0x36850aa0, 0x5a003664, 0x00343685,
    0x80021962, 0x37850aa0, 0x5a003764, 0x00343785,
    0x80031162, 0x37050aa0, 0x5a0036e4, 0x00463705,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043561, 0x6a050220, 0x000037e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003804, 0x0000008f,
    0x00049631, 0x00020100, 0xfa083914, 0x04006a04,
    0xa33a3661, 0xff810000, 0x603a0061, 0x00100900,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x3c058220, 0x020000a4, 0xfffffc00,
    0xe03d0066, 0x64002e03, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x59060220,
    0x00443a26, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x57060aa0,
    0x4a443a06, 0x00445906, 0x80030961, 0x3a260220,
    0x00445706, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x5d070220,
    0x00423a27, 0x00000000, 0x80023961, 0x5f070220,
    0x00423a47, 0x00000000, 0x80021962, 0x5b070aa0,
    0x4a425d07, 0x00425f07, 0x80021161, 0x3a470220,
    0x00425b07, 0x00000000, 0x80021961, 0x63070220,
    0x00423a27, 0x00000000, 0x80020061, 0x65070220,
    0x00423a67, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x61070aa0,
    0x4a426307, 0x00426507, 0x80021161, 0x3a670220,
    0x00426107, 0x00000000, 0x80021962, 0x3a850aa0,
    0x4a003a64, 0x00343a85, 0x80021962, 0x3b850aa0,
    0x4a003b64, 0x00343b85, 0x80031162, 0x3b050aa0,
    0x4a003ae4, 0x00463b05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043661, 0x6b050220,
    0x00003be4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003c04, 0x0000008f, 0x00049431, 0x00020100,
    0xfa083d14, 0x04006b04, 0xa33f0061, 0xff810000,
    0x603f0061, 0x00100b00, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80000065, 0x41058220,
    0x020000a4, 0xfffffc00, 0xe0420066, 0x68002e03,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x68060220, 0x00443f26, 0x00000000,
    0x80031962, 0x66060aa0, 0x4a443f06, 0x00446806,
    0x80030961, 0x3f260220, 0x00446606, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x6c070220, 0x00423f27, 0x00000000,
    0x80020061, 0x6e070220, 0x00423f47, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x6a070aa0, 0x4a426c07, 0x00426e07,
    0x80021161, 0x3f470220, 0x00426a07, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x72070220, 0x00423f27, 0x00000000,
    0x80020061, 0x74070220, 0x00423f67, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x70070aa0, 0x4a427207, 0x00427407,
    0x80021161, 0x3f670220, 0x00427007, 0x00000000,
    0x80021962, 0x3f850aa0, 0x4a003f64, 0x00343f85,
    0x80021962, 0x40850aa0, 0x4a004064, 0x00344085,
    0x80031162, 0x40050aa0, 0x4a003fe4, 0x00464005,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x6c050220, 0x000040e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004104, 0x0000008f,
    0x00049731, 0x00020100, 0xfa084214, 0x04006c04,
    0xa3433761, 0xff810000, 0x60430061, 0x00100d00,
    0x80000065, 0x45058220, 0x020000a4, 0xfffffc00,
    0xe0460066, 0x6c002e03, 0x80031161, 0x77060220,
    0x00444326, 0x00000000, 0x80031962, 0x75060aa0,
    0x4a444306, 0x00447706, 0x80030961, 0x43260220,
    0x00447506, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x7b070220,
    0x00424327, 0x00000000, 0x80020061, 0x7d070220,
    0x00424347, 0x00000000, 0x80021962, 0x79070aa0,
    0x4a427b07, 0x00427d07, 0x80021161, 0x43470220,
    0x00427907, 0x00000000, 0x80021961, 0x05070220,
    0x00424327, 0x00000000, 0x80020061, 0x07070220,
    0x00424367, 0x00000000, 0x80021962, 0x03070aa0,
    0x4a420507, 0x00420707, 0x80021161, 0x43670220,
    0x00420307, 0x00000000, 0x80021962, 0x43850aa0,
    0x4a004364, 0x00344385, 0x80021962, 0x44850aa0,
    0x4a004464, 0x00344485, 0x80031162, 0x44050aa0,
    0x4a0043e4, 0x00464405, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043761, 0x6d050220,
    0x000044e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004504, 0x0000008f, 0x00049431, 0x00020100,
    0xfa084614, 0x04006d04, 0x00040070, 0x00018220,
    0x52464e05, 0x00000003, 0x01040022, 0x0001c060,
    0x00000318, 0x00000318, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0473440, 0x08010243,
    0x00040069, 0x4c058660, 0x02464e05, 0x00000002,
    0xe0210068, 0x01e04e03, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27490070, 0x0210472b,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0xa0500040, 0x4c004702, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa04b0040, 0x0212491a,
    0x27521a70, 0x47005003, 0x00030061, 0x56060220,
    0x00345005, 0x00000000, 0x00130061, 0x58060220,
    0x00345105, 0x00000000, 0x00040070, 0x00018220,
    0x52464e05, 0x00000001, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x54040e68,
    0x0e2e4b05, 0x52052105, 0x00031961, 0x56260220,
    0x00345405, 0x00000000, 0x00131a61, 0x58260220,
    0x00345505, 0x00000000, 0x01040022, 0x0001c060,
    0x00000090, 0x00000060, 0x80000065, 0x5a058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003466, 0x10218220,
    0x02005a04, 0x0000000f, 0x00049431, 0x6e160100,
    0xfa003014, 0x04000000, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00040070, 0x00018220,
    0x52464e05, 0x00000002, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x6e050220,
    0x020033e4, 0x000037e4, 0x00040025, 0x00004600,
    0x00000000, 0x00000188, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x00000000,
    0xfb2a5624, 0x01006e14, 0xa05b0040, 0x00c05003,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x275d0070, 0x50005b03, 0x00040070, 0x00018220,
    0x52464e05, 0x00000001, 0x00030061, 0x61060220,
    0x00345b05, 0x00000000, 0x00130061, 0x63060220,
    0x00345c05, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa05f0040, 0x54025d02,
    0x00031961, 0x61260220, 0x00345f05, 0x00000000,
    0x00131a61, 0x63260220, 0x00346005, 0x00000000,
    0x01040022, 0x0001c060, 0x00000090, 0x00000060,
    0x80000065, 0x65058220, 0x020000a4, 0xfffffc00,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003466, 0x10218220, 0x02006504, 0x0000000f,
    0x00049431, 0x6f160100, 0xfa003d14, 0x04000000,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00040070, 0x00018220, 0x52464e05, 0x00000002,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x6f050220, 0x020040e4, 0x000044e4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x00000000, 0xfb2c6124, 0x01006f14,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xa3660061, 0x7f810000, 0x60660061, 0x00101800,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000065, 0x68058220, 0x020000a4, 0xfffffc00,
    0xe0690066, 0x40002e03, 0x80031161, 0x0a060220,
    0x00446626, 0x00000000, 0x80031962, 0x08060aa0,
    0x5a446606, 0x00440a06, 0x80030961, 0x66260220,
    0x00440806, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80020961, 0x0e070220,
    0x00426627, 0x00000000, 0x80020061, 0x10070220,
    0x00426647, 0x00000000, 0x80021962, 0x0c070aa0,
    0x5a420e07, 0x00421007, 0x80021161, 0x66470220,
    0x00420c07, 0x00000000, 0x80021961, 0x14070220,
    0x00426627, 0x00000000, 0x80020061, 0x16070220,
    0x00426667, 0x00000000, 0x80021962, 0x12070aa0,
    0x5a421407, 0x00421607, 0x80021161, 0x66670220,
    0x00421207, 0x00000000, 0x80021962, 0x66850aa0,
    0x5a006664, 0x00346685, 0x80021962, 0x67850aa0,
    0x5a006764, 0x00346785, 0x80031162, 0x67050aa0,
    0x5a0066e4, 0x00466705, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x70050220,
    0x000067e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006804, 0x0000008f, 0x00049931, 0x00020100,
    0xfa086914, 0x04007004, 0xa36b3761, 0x7f810000,
    0x606b0061, 0x00101c00, 0x80003465, 0x6d058220,
    0x020000a4, 0xfffffc00, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0xe06e3466, 0x44002e03,
    0x80031161, 0x19060220, 0x00446b26, 0x00000000,
    0x80031962, 0x17060aa0, 0x5a446b06, 0x00441906,
    0x80030961, 0x6b260220, 0x00441706, 0x00000000,
    0x80020961, 0x1d070220, 0x00426b27, 0x00000000,
    0x80020061, 0x1f070220, 0x00426b47, 0x00000000,
    0x80021962, 0x1b070aa0, 0x5a421d07, 0x00421f07,
    0x80021161, 0x6b470220, 0x00421b07, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x30070220, 0x00426b27, 0x00000000,
    0x80020061, 0x32070220, 0x00426b67, 0x00000000,
    0x80021962, 0x2b070aa0, 0x5a423007, 0x00423207,
    0x80021161, 0x6b670220, 0x00422b07, 0x00000000,
    0x80021962, 0x6b850aa0, 0x5a006b64, 0x00346b85,
    0x80021962, 0x6c850aa0, 0x5a006c64, 0x00346c85,
    0x80031162, 0x6c050aa0, 0x5a006be4, 0x00466c05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043961, 0x71050220, 0x00006ce4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006d04, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa086e14, 0x04007104,
    0x80003901, 0x00000000, 0x00000000, 0x00000000,
    0xa36f3a61, 0x7f810000, 0x606f0061, 0x00102300,
    0x80003a65, 0x71058220, 0x020000a4, 0xfffffc00,
    0xe0723a66, 0x48002e03, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x35060220,
    0x00446f26, 0x00000000, 0x80031962, 0x33060aa0,
    0x5a446f06, 0x00443506, 0x80030961, 0x6f260220,
    0x00443306, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x39070220,
    0x00426f27, 0x00000000, 0x80020061, 0x3b070220,
    0x00426f47, 0x00000000, 0x80021962, 0x37070aa0,
    0x5a423907, 0x00423b07, 0x80021161, 0x6f470220,
    0x00423707, 0x00000000, 0x80021961, 0x3f070220,
    0x00426f27, 0x00000000, 0x80023761, 0x41070220,
    0x00426f67, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x3d070aa0,
    0x5a423f07, 0x00424107, 0x80021161, 0x6f670220,
    0x00423d07, 0x00000000, 0x80021962, 0x6f850aa0,
    0x5a006f64, 0x00346f85, 0x80021962, 0x70850aa0,
    0x5a007064, 0x00347085, 0x80031162, 0x70050aa0,
    0x5a006fe4, 0x00467005, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x74050220,
    0x000070e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007104, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa087214, 0x04007404, 0xa3733b61, 0xff810000,
    0x60730061, 0x00102500, 0x80003b65, 0x75058220,
    0x020000a4, 0xfffffc00, 0xe0760066, 0x4c002e03,
    0x80031161, 0x44060220, 0x00447326, 0x00000000,
    0x80031962, 0x42060aa0, 0x4a447306, 0x00444406,
    0x80030961, 0x73260220, 0x00444206, 0x00000000,
    0x80021961, 0x48070220, 0x00427327, 0x00000000,
    0x80020061, 0x4a070220, 0x00427347, 0x00000000,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x46070aa0, 0x4a424807, 0x00424a07,
    0x80021161, 0x73470220, 0x00424607, 0x00000000,
    0x80021961, 0x21070220, 0x00427327, 0x00000000,
    0x80020061, 0x50070220, 0x00427367, 0x00000000,
    0x80021962, 0x4c070aa0, 0x4a422107, 0x00425007,
    0x80021161, 0x73670220, 0x00424c07, 0x00000000,
    0x80021962, 0x73850aa0, 0x4a007364, 0x00347385,
    0x80021962, 0x74850aa0, 0x4a007464, 0x00347485,
    0x80031162, 0x74050aa0, 0x4a0073e4, 0x00467405,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x78050220, 0x000074e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007504, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa087614, 0x04007804,
    0xa3783c61, 0xff810000, 0x60780061, 0x00102700,
    0x80000065, 0x7a058220, 0x020000a4, 0xfffffc00,
    0xe07b0066, 0x50002e03, 0x80031161, 0x53060220,
    0x00447826, 0x00000000, 0x80031962, 0x51060aa0,
    0x4a447806, 0x00445306, 0x80030961, 0x78260220,
    0x00445106, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x57070220,
    0x00427827, 0x00000000, 0x80023461, 0x59070220,
    0x00427847, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x55070aa0,
    0x4a425707, 0x00425907, 0x80021161, 0x78470220,
    0x00425507, 0x00000000, 0x80021961, 0x5d070220,
    0x00427827, 0x00000000, 0x80020061, 0x5f070220,
    0x00427867, 0x00000000, 0x80021962, 0x5b070aa0,
    0x4a425d07, 0x00425f07, 0x80021161, 0x78670220,
    0x00425b07, 0x00000000, 0x80021962, 0x78850aa0,
    0x4a007864, 0x00347885, 0x80021962, 0x79850aa0,
    0x4a007964, 0x00347985, 0x80031162, 0x79050aa0,
    0x4a0078e4, 0x00467905, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x7d050220,
    0x000079e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007a04, 0x0000008f, 0x00049d31, 0x00020100,
    0xfa087b14, 0x04007d04, 0xa37c3d61, 0xff810000,
    0x607c0061, 0x00102900, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003d65, 0x7e058220,
    0x020000a4, 0xfffffc00, 0xe0030066, 0x54002e03,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x62060220, 0x00447c26, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80031962, 0x60060aa0, 0x4a447c06, 0x00446206,
    0x80030961, 0x7c260220, 0x00446006, 0x00000000,
    0x80021961, 0x66070220, 0x00427c27, 0x00000000,
    0x80023a61, 0x6d070220, 0x00427c47, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x64070aa0, 0x4a426607, 0x00426d07,
    0x80021161, 0x7c470220, 0x00426407, 0x00000000,
    0x80021961, 0x73070220, 0x00427c27, 0x00000000,
    0x80023d61, 0x7a070220, 0x00427c67, 0x00000000,
    0x80003b01, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x71070aa0, 0x4a427307, 0x00427a07,
    0x80021161, 0x7c670220, 0x00427107, 0x00000000,
    0x80021962, 0x7c850aa0, 0x4a007c64, 0x00347c85,
    0x80021962, 0x7d850aa0, 0x4a007d64, 0x00347d85,
    0x80031162, 0x7d050aa0, 0x4a007ce4, 0x00467d05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x05050220, 0x00007de4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02007e04, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa080314, 0x04000504,
    0x00040070, 0x00018220, 0x52464e05, 0x00000003,
    0x01040022, 0x0001c060, 0x000002f0, 0x000002f0,
    0x00043c69, 0x04058660, 0x02464e05, 0x00000002,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0xe0060068, 0x01e04e03, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0080040, 0x04010202,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x270a0070, 0x02100803, 0x00030061, 0x0e060220,
    0x00340805, 0x00000000, 0x00130061, 0x10060220,
    0x00340905, 0x00000000, 0x00040070, 0x00018220,
    0x52464e05, 0x00000001, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x0c040660,
    0x0e2e0224, 0x0a050605, 0x00031961, 0x0e260220,
    0x00340c05, 0x00000000, 0x00131a61, 0x10260220,
    0x00340d05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000080, 0x00000060, 0x80000065, 0x12058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003966, 0x10218220,
    0x02001204, 0x0000000f, 0x00049931, 0x06160100,
    0xfa006914, 0x04000000, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x00040070, 0x00018220,
    0x52464e05, 0x00000002, 0x0104d962, 0x06050220,
    0x02006ce4, 0x000070e4, 0x00040025, 0x00004600,
    0x00000000, 0x00000188, 0x80002901, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb2a0e24, 0x01000614, 0xa0130040, 0x01000803,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27150070, 0x08001303, 0x00040070, 0x00018220,
    0x52464e05, 0x00000001, 0x00030061, 0x19060220,
    0x00341305, 0x00000000, 0x00130061, 0x1b060220,
    0x00341405, 0x00000000, 0xa0171c40, 0x0c021502,
    0x00031961, 0x19260220, 0x00341705, 0x00000000,
    0x00131a61, 0x1b260220, 0x00341805, 0x00000000,
    0x01040022, 0x0001c060, 0x00000090, 0x00000060,
    0x80000065, 0x1d058220, 0x020000a4, 0xfffffc00,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003c66, 0x10218220, 0x02001d04, 0x0000000f,
    0x00049c31, 0x07160100, 0xfa007614, 0x04000000,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00040070, 0x00018220, 0x52464e05, 0x00000002,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x01042c62, 0x07050220, 0x020079e4, 0x00007de4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb2c1924, 0x01000714,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_procedurals_to_primrefs = {
   .prog_data = {
      .base.nr_params = 18,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 2048,
      .base.total_shared = 0,
      .base.program_size = 12096,
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
const char *gfx125_bvh_build_primref_procedurals_to_primrefs_sha1 = "a2ab6e369c186696a3b7904d0eaafd5521d52011";

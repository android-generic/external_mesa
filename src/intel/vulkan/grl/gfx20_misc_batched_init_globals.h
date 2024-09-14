#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_batched_init_globals_relocs[] = {
};
static const u_printf_info gfx20_misc_batched_init_globals_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_batched_init_globals_args[] = {
   { 0, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g119<1>UD       g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g20<1>Q         0x0000000000000010Q             { align1 1H };
mov(16)         g28<1>Q         0x000000000000001cQ             { align1 1H };
mov(16)         g30<1>Q         0x0000000000000020Q             { align1 1H };
mov(16)         g38<1>Q         0x000000000000002cQ             { align1 1H };
mov(16)         g40<1>Q         0x0000000000000030Q             { align1 1H };
mov(16)         g48<1>Q         0x000000000000003cQ             { align1 1H };
mov(16)         g50<1>Q         0x0000000000000040Q             { align1 1H };
mov(16)         g57<1>Q         0x0000000000000048Q             { align1 1H };
mov(16)         g59<1>Q         0x0000000000000080Q             { align1 1H };
mov(16)         g63<1>Q         0x0000000000000098Q             { align1 1H };
mov(16)         g96<1>UD        g0.1<0,1,0>UD                   { align1 1H compacted };
send(1)         g1UD            g119UD          nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(16)         g117<2>UD       g96<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g2<1>UQ         g117<8,4,2>UD                   { align1 1H I@1 };
shl(16)         g4<1>Q          g2<4,4,1>Q      0x00000006UD    { align1 1H I@1 };
shl(16)         g6<1>Q          g2<4,4,1>Q      0x00000004UD    { align1 1H };
add(16)         g8<1>Q          g4<1,1,0>Q      g6<1,1,0>Q      { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g10<1>Q         g1.4<0,1,0>Q    g8<1,1,0>Q      { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g12UD           g10UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
add(16)         g22<1>Q         g10<1,1,0>Q     g20<1,1,0>Q     { align1 1H $1.src compacted };
add(16)         g32<1>Q         g10<1,1,0>Q     g30<1,1,0>Q     { align1 1H compacted };
add(16)         g42<1>Q         g10<1,1,0>Q     g40<1,1,0>Q     { align1 1H compacted };
add(16)         g52<1>Q         g10<1,1,0>Q     g50<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        g24UD           g22UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(16)        g34UD           g32UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g44UD           g42UD           nullUD          0x04403580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 4, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g54UD           g52UD           nullUD          0x04302580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V3, L1STATE_L3MOCS dst_len = 3, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g16<2>UD        g12<1,1,0>UD                    { align1 1H $1.dst compacted };
mov(16)         g18<2>UD        g14<1,1,0>UD                    { align1 1H $1.dst compacted };
mov(16)         g16.1<2>UD      g13<1,1,0>UD                    { align1 1H @2 $1.dst compacted };
mov(16)         g18.1<2>UD      g15<1,1,0>UD                    { align1 1H @2 $1.dst compacted };
mov(16)         g97<1>UD        g27<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g98<1>UD        g26<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g100<1>UD       g25<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g99<1>UD        g34<1,1,0>UD                    { align1 1H $3.dst compacted };
add(16)         g61<1>Q         g18<1,1,0>Q     g59<1,1,0>Q     { align1 1H I@5 compacted };
add(16)         g65<1>Q         g63<1,1,0>Q     g18<1,1,0>Q     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g65UD           g97UD           0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $6 };
mov(16)         g66<1>Q         0x00000000000000a8Q             { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g98<1>UD        g45<1,1,0>UD                    { align1 1H $4.dst compacted };
mov(16)         g99<1>UD        0x00000000UD                    { align1 1H $6.src compacted };
mov(16)         g100<1>UD       0x00000000UD                    { align1 1H $6.src compacted };
mov(16)         g101<1>UD       0x00000000UD                    { align1 1H compacted };
add(16)         g68<1>Q         g66<1,1,0>Q     g18<1,1,0>Q     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g68UD           g98UD           0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $7 };
mov(16)         g69<1>Q         0x00000000000000b8Q             { align1 1H $7.src };
mov(16)         g73<1>Q         0x000000000000000cQ             { align1 1H };
mov(16)         g99<1>UD        0x00000000UD                    { align1 1H $7.src compacted };
mov(16)         g100<1>UD       0xaaabbaaaUD                    { align1 1H $7.src };
add(16)         g71<1>Q         g69<1,1,0>Q     g18<1,1,0>Q     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g71UD           g99UD           0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shr(16)         g100<1>UD       g35<8,8,1>UD    0x00000006UD    { align1 1H $3.dst };
add(16)         g75<1>Q         g18<1,1,0>Q     g73<1,1,0>Q     { align1 1H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
shr(16)         g101<1>UD       g36<8,8,1>UD    0x00000006UD    { align1 1H $3.dst };
shr(16)         g103<1>UD       g37<8,8,1>UD    0x00000006UD    { align1 1H $3.dst };
mov(16)         g102<1>UD       g101<1,1,0>UD                   { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g75UD           g100UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $9 };
add(16)         g76<1>Q         g18<1,1,0>Q     g28<1,1,0>Q     { align1 1H $9.src compacted };
shr(16)         g107<1>UD       g44<8,8,1>UD    0x00000006UD    { align1 1H $4.dst };
mov(16)         g104<1>UD       g103<1,1,0>UD                   { align1 1H $9.src compacted };
mov(16)         g105<1>UD       g101<1,1,0>UD                   { align1 1H $9.src compacted };
mov(16)         g106<1>UD       g101<1,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g76UD           g104UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $10 };
shr(16)         g107<1>UD       g45<8,8,1>UD    0x00000006UD    { align1 1H $10.src };
add(16)         g77<1>Q         g18<1,1,0>Q     g38<1,1,0>Q     { align1 1H $10.src compacted };
mov(16)         g108<1>UD       0x00000000UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g105<1>UD       g107<1,1,0>UD                   { align1 1H I@3 compacted };
mov(16)         g106<1>UD       g107<1,1,0>UD                   { align1 1H $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g77UD           g105UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $11 };
add(16)         g78<1>Q         g18<1,1,0>Q     g48<1,1,0>Q     { align1 1H $11.src compacted };
mov(16)         g106<1>UD       g35<1,1,0>UD                    { align1 1H $11.src compacted };
mov(16)         g107<1>UD       0x00000000UD                    { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g18UD           g106UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };
shr(16)         g110<1>UD       g54<8,8,1>UD    0x00000006UD    { align1 1H $5.dst };
mov(16)         g107<1>UD       0x00000000UD                    { align1 1H $12.src compacted };
mov(16)         g108<1>UD       0x00000000UD                    { align1 1H $11.src compacted };
mov(16)         g109<1>UD       0x00000000UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g78UD           g107UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
shr(16)         g108<1>UD       g55<8,8,1>UD    0x00000006UD    { align1 1H $5.dst };
mov(16)         g79<1>Q         0x000000000000004cQ             { align1 1H $13.src };
shr(16)         g111<1>UD       g56<8,8,1>UD    0x00000006UD    { align1 1H $5.dst };
mov(16)         g109<1>UD       0x00000000UD                    { align1 1H $13.src compacted };
mov(16)         g110<1>UD       0x00000000UD                    { align1 1H $13.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g81<1>Q         g18<1,1,0>Q     g79<1,1,0>Q     { align1 1H I@4 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g81UD           g108UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $14 };
cmp.nz.f0.0(16) null<1>D        g44<8,8,1>D     g45<8,8,1>D     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
and(16)         g82<1>UD        g44<8,8,1>UD    0xffffffc0UD    { align1 1H $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g109<1>UD       0xffffffc0UD                    { align1 1H $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g118<2>UD       g82<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g83<1>UQ        g118<8,4,2>UD                   { align1 1H I@1 };
add(16)         g85<1>Q         g18<1,1,0>Q     g83<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g85UD           g109UD          0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $14 };

LABEL0:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
mov(16)         g110<1>UD       0x7f800000UD                    { align1 1H $14.src };
mov(16)         g111<1>UD       0x7f800000UD                    { align1 1H $14.src };
mov(16)         g112<1>UD       0x7f800000UD                    { align1 1H };
mov(16)         g113<1>UD       0xff800000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g61UD           g110UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $15 };
mov(16)         g86<1>Q         0x0000000000000090Q             { align1 1H $14.src };
mov(16)         g111<1>UD       0xff800000UD                    { align1 1H $15.src };
mov(16)         g112<1>UD       0xff800000UD                    { align1 1H $15.src };
add(16)         g88<1>Q         g86<1,1,0>Q     g18<1,1,0>Q     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g88UD           g111UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $0 };
mov(16)         g112<1>UD       0x7f800000UD                    { align1 1H $0.src };
mov(16)         g113<1>UD       0x7f800000UD                    { align1 1H $15.src };
mov(16)         g114<1>UD       0x7f800000UD                    { align1 1H };
mov(16)         g115<1>UD       0x00000000UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g16UD           g112UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
add(16)         g89<1>Q         g16<1,1,0>Q     g20<1,1,0>Q     { align1 1H $1.src compacted };
mov(16)         g113<1>UD       0xff800000UD                    { align1 1H $1.src };
mov(16)         g114<1>UD       0xff800000UD                    { align1 1H $1.src };
mov(16)         g115<1>UD       0xff800000UD                    { align1 1H $1.src };
mov(16)         g116<1>UD       0x80000000UD                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g89UD           g113UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $2 };
add(16)         g90<1>Q         g16<1,1,0>Q     g30<1,1,0>Q     { align1 1H $2.src compacted };
add(16)         g92<1>Q         g16<1,1,0>Q     g57<1,1,0>Q     { align1 1H compacted };
add(16)         g94<1>Q         g16<1,1,0>Q     g40<1,1,0>Q     { align1 1H compacted };
mov(16)         g114<1>UD       0x00000000UD                    { align1 1H $2.src compacted };
mov(16)         g115<1>UD       0x00000000UD                    { align1 1H $2.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g94UD           g114UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
send(16)        nullUD          g92UD           g114UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $4 };
add(16)         g95<1>Q         g16<1,1,0>Q     g50<1,1,0>Q     { align1 1H $3.src compacted };
mov(16)         g115<1>UD       0x00000000UD                    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g95UD           g115UD          0x04000584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 1 flat )  base_offset 0  { align1 1H $5 };
mov(16)         g116<1>UD       g36<1,1,0>UD                    { align1 1H $2.src compacted };
mov(16)         g117<1>UD       g24<1,1,0>UD                    { align1 1H $2.dst compacted };
mov(16)         g118<1>UD       g46<1,1,0>UD                    { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g119<1>UD       g47<1,1,0>UD                    { align1 1H $4.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g90UD           g116UD          0x04003584                0x00000100
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 4 flat )  base_offset 0  { align1 1H $6 };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_batched_init_globals_code[] = {
    0x80000065, 0x77058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x14054770, 0x00000000, 0x00000010,
    0x00100061, 0x1c054770, 0x00000000, 0x0000001c,
    0x00100061, 0x1e054770, 0x00000000, 0x00000020,
    0x00100061, 0x26054770, 0x00000000, 0x0000002c,
    0x00100061, 0x28054770, 0x00000000, 0x00000030,
    0x00100061, 0x30054770, 0x00000000, 0x0000003c,
    0x00100061, 0x32054770, 0x00000000, 0x00000040,
    0x00100061, 0x39054770, 0x00000000, 0x00000048,
    0x00100061, 0x3b054770, 0x00000000, 0x00000080,
    0x00100061, 0x3f054770, 0x00000000, 0x00000098,
    0x2c800061, 0x00110060, 0x8000c031, 0x010c0000,
    0xfa00770c, 0x00340000, 0xb4001961, 0x00106075,
    0x00101961, 0x02050230, 0x00447506, 0x00000000,
    0x00101969, 0x04058770, 0x02340205, 0x00000006,
    0x00100069, 0x06058770, 0x02340205, 0x00000004,
    0x38001940, 0x06000408, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x38801940, 0x0803010a,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x0c240000, 0xfb000a14, 0x000c0000,
    0x3800a140, 0x14000a16, 0x38000040, 0x1e000a20,
    0x38000040, 0x28000a2a, 0x38000040, 0x32000a34,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x18240000, 0xfb001614, 0x000c0000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x22240000, 0xfb002014, 0x000c0000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x2c240000, 0xfb002a14, 0x000c0000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x361c0000, 0xfb003414, 0x00080000,
    0xb4008161, 0x00100c10, 0xb4008161, 0x00100e12,
    0xb4014161, 0x00120d10, 0xb4014161, 0x00120f12,
    0x2c008261, 0x00101b61, 0x2c008261, 0x00101a62,
    0x2c008261, 0x00101964, 0x2c008361, 0x00102263,
    0x38001d40, 0x3b00123d, 0x38000040, 0x12003f41,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x00000000, 0xfb084114, 0x000c6124,
    0x0010a661, 0x42054770, 0x00000000, 0x000000a8,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x2c008461, 0x00102d62, 0x6480a661, 0x00000063,
    0x6480a661, 0x00000064, 0x64800061, 0x00000065,
    0x38001d40, 0x12004244, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c731, 0x00000000,
    0xfb084414, 0x000c6224, 0x0010a761, 0x45054770,
    0x00000000, 0x000000b8, 0x00100061, 0x49054770,
    0x00000000, 0x0000000c, 0x6480a761, 0x00000063,
    0x0010a761, 0x64054220, 0x00000000, 0xaaabbaaa,
    0x38001c40, 0x12004547, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x00000000,
    0xfb084714, 0x00046314, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x00108368, 0x64058220,
    0x02462305, 0x00000006, 0x38001d40, 0x4900124b,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x00108368, 0x65058220, 0x02462405, 0x00000006,
    0x00108368, 0x67058220, 0x02462505, 0x00000006,
    0x2c001a61, 0x00106566, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c931, 0x00000000,
    0xfb084b14, 0x000c6424, 0x3800a940, 0x1c00124c,
    0x00108468, 0x6b058220, 0x02462c05, 0x00000006,
    0x2c00a961, 0x00106768, 0x2c00a961, 0x00106569,
    0x2c000061, 0x0010656a, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ca31, 0x00000000,
    0xfb084c14, 0x000c6824, 0x0010aa68, 0x6b058220,
    0x02462d05, 0x00000006, 0x3800aa40, 0x2600124d,
    0x64800061, 0x0000006c, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x2c001b61, 0x00106b69,
    0x2c00aa61, 0x00106b6a, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cb31, 0x00000000,
    0xfb084d14, 0x000c6924, 0x3800ab40, 0x3000124e,
    0x2c00ab61, 0x0010236a, 0x6480ab61, 0x0000006b,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cc31, 0x00000000, 0xfb081214, 0x00046a14,
    0x00108568, 0x6e058220, 0x02463605, 0x00000006,
    0x6480ac61, 0x0000006b, 0x6480ab61, 0x0000006c,
    0x64800061, 0x0000006d, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010cd31, 0x00000000,
    0xfb084e14, 0x000c6b24, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x00108568, 0x6c058220,
    0x02463705, 0x00000006, 0x0010ad61, 0x4f054770,
    0x00000000, 0x0000004c, 0x00108568, 0x6f058220,
    0x02463805, 0x00000006, 0x6480ad61, 0x0000006d,
    0x6480ad61, 0x0000006e, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x38001c40, 0x4f001251,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010ce31, 0x00000000, 0xfb085114, 0x000c6c24,
    0x00100070, 0x00010660, 0x26462c05, 0x00462d05,
    0x04100022, 0x0001c060, 0x00000090, 0x00000090,
    0x0010ae65, 0x52058220, 0x02462c05, 0xffffffc0,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x0010ae61, 0x6d054220, 0x00000000, 0xffffffc0,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0xb4001a61, 0x00105276, 0x00101961, 0x53050230,
    0x00447606, 0x00000000, 0x38001940, 0x53001255,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010ce31, 0x00000000, 0xfb085514, 0x00006d0c,
    0x00100025, 0x00004600, 0x00000000, 0x00000010,
    0x0010ae61, 0x6e054220, 0x00000000, 0x7f800000,
    0x0010ae61, 0x6f054220, 0x00000000, 0x7f800000,
    0x00100061, 0x70054220, 0x00000000, 0x7f800000,
    0x00100061, 0x71054220, 0x00000000, 0xff800000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010cf31, 0x00000000, 0xfb083d14, 0x000c6e24,
    0x0010ae61, 0x56054770, 0x00000000, 0x00000090,
    0x0010af61, 0x6f054220, 0x00000000, 0xff800000,
    0x0010af61, 0x70054220, 0x00000000, 0xff800000,
    0x38001b40, 0x12005658, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c031, 0x00000000,
    0xfb085814, 0x00046f14, 0x0010a061, 0x70054220,
    0x00000000, 0x7f800000, 0x0010af61, 0x71054220,
    0x00000000, 0x7f800000, 0x00100061, 0x72054220,
    0x00000000, 0x7f800000, 0x64800061, 0x00000073,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c131, 0x00000000, 0xfb081014, 0x000c7024,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x3800a140, 0x14001059, 0x0010a161, 0x71054220,
    0x00000000, 0xff800000, 0x0010a161, 0x72054220,
    0x00000000, 0xff800000, 0x0010a161, 0x73054220,
    0x00000000, 0xff800000, 0x00100061, 0x74054220,
    0x00000000, 0x80000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c231, 0x00000000,
    0xfb085914, 0x000c7124, 0x3800a240, 0x1e00105a,
    0x38000040, 0x3900105c, 0x38000040, 0x2800105e,
    0x6480a261, 0x00000072, 0x6480a261, 0x00000073,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c331, 0x00000000, 0xfb085e14, 0x00047214,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x00000000, 0xfb085c14, 0x00047214,
    0x3800a340, 0x3200105f, 0x6480a461, 0x00000073,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c531, 0x00000000, 0xfb085f14, 0x0000730c,
    0x2c00a261, 0x00102474, 0x2c008261, 0x00101875,
    0x2c008461, 0x00102e76, 0x8000a001, 0x00000000,
    0x00000000, 0x00000000, 0x2c008461, 0x00102f77,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c631, 0x00000000, 0xfb085a14, 0x000c7424,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_misc_batched_init_globals = {
   .prog_data = {
      .base.nr_params = 10,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2208,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_batched_init_globals_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_batched_init_globals_printfs,
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
   .args = gfx20_misc_batched_init_globals_args,
   .code = gfx20_misc_batched_init_globals_code,
};
const char *gfx20_misc_batched_init_globals_sha1 = "fe928bf20bed13ee500b8408e42ce28976fd9ceb";

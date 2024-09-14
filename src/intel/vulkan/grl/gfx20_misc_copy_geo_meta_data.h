#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_misc_copy_geo_meta_data_relocs[] = {
};
static const u_printf_info gfx20_misc_copy_geo_meta_data_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_misc_copy_geo_meta_data_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g10<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g116<1>UD       g0.1<0,1,0>UD                   { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g10UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g7<1>UW         0x76543210V                     { align1 WE_all 1Q };
mov(16)         g4<1>UD         g116<1,1,0>UD                   { align1 1H I@2 compacted };
add(8)          g7.8<1>UW       g7<8,8,1>UW     0x0008UW        { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g6<1>UD         g7<8,8,1>UW                     { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(16)         g119<2>UD       g1.6<0,1,0>UQ                   { align1 1H };
and(16)         g8<1>UD         g1.12<0,1,0>UD  0xffffffc0UD    { align1 1H };
shr(16)         g5<1>UD         g119<8,4,2>UD   0x00000006UD    { align1 1H I@2 };
mov(16)         g121<2>UD       g8<1,1,0>UD                     { align1 1H I@2 compacted };
shr(16)         g15<1>UD        g8<8,8,1>UD     0x00000006UD    { align1 1H };
add(16)         g16<1>D         g116<1,1,0>D    -g5<1,1,0>D     { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g9<1>UQ         g121<8,4,2>UD                   { align1 1H I@3 };
add(16)         g11<1>Q         g1.6<0,1,0>Q    -g9<1,1,0>Q     { align1 1H I@1 compacted };
shr(16)         g13<1>UQ        g11<4,4,1>UQ    0x00000003UD    { align1 1H I@1 };
mov(16)         g123<2>UD       g13<4,4,1>UQ                    { align1 1H I@1 };
cmp.l.f0.0(16)  g17<1>UD        g6<8,8,1>UD     g123<8,4,2>UD   { align1 1H I@1 };
cmp.z.f0.0(16)  g18<1>D         -g16<1,1,0>D    g15<1,1,0>D     { align1 1H I@6 compacted };
and.nz.f0.0(16) null<1>UD       g17<8,8,1>UD    g18<8,8,1>UD    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL0          UIP:  LABEL0              { align1 1H };
shr(16)         g19<1>UD        g8<8,8,1>UD     0x00000003UD    { align1 1H };
mov(16)         g29<1>Q         0x0000000000000030Q             { align1 1H };
add(16)         g20<1>D         g6<1,1,0>D      g19<1,1,0>D     { align1 1H I@2 compacted };
mov(16)         g124<2>UD       g20<1,1,0>UD                    { align1 1H I@1 compacted };
mul(16)         acc0<1>UD       g20<8,8,1>UD    0x0038UW        { align1 1H };
mul(16)         g24<1>D         g20<1,1,0>D     56W             { align1 1H compacted };
mov(16)         g21<1>UQ        g124<8,4,2>UD                   { align1 1H I@3 };
mach(16)        g23<1>UD        g20<8,8,1>UD    0x00000038UD    { align1 1H };
mov(16)         g25<2>UD        g24<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g25.1<2>UD      g23<1,1,0>UD                    { align1 1H I@1 compacted };
add(16)         g27<1>Q         g1.5<0,1,0>Q    g25<1,1,0>Q     { align1 1H I@1 compacted };
add(16)         g31<1>Q         g27<1,1,0>Q     g29<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g33UD           g31UD           nullUD          0x04100980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $1 };
mov(16)         g34<1>UD        g33<32,8,4>UB                   { align1 1H $1.dst };
cmp.z.f0.0(16)  null<1>D        g34<8,8,1>D     1D              { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL2          UIP:  LABEL1              { align1 1H };
mov(16)         g35<1>Q         0x0000000000000010Q             { align1 1H };
add(16)         g37<1>Q         g27<1,1,0>Q     g35<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g2UD            g37UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
else(16)        JIP:  LABEL1          UIP:  LABEL1              { align1 1H };

LABEL2:
mov(16)         g38<1>Q         0x0000000000000028Q             { align1 1H $2.src };
add(16)         g40<1>Q         g27<1,1,0>Q     g38<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g42UD           g40UD           nullUD          0x04100980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mov.nz.f0.0(16) null<1>UD       g42<32,8,4>UB                   { align1 1H $3.dst };
(+f0.0) if(16)  JIP:  LABEL4          UIP:  LABEL3              { align1 1H };
mov(16)         g43<1>Q         0x0000000000000020Q             { align1 1H };
add(16)         g45<1>Q         g27<1,1,0>Q     g43<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g47UD           g45UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
mul(16)         acc0<1>UD       g47<8,8,1>UD    0xaaabUW        { align1 1H $4.dst };
mach(16)        g48<1>UD        g47<8,8,1>UD    0xaaaaaaabUD    { align1 1H };
shr(16)         g2<1>UD         g48<8,8,1>UD    0x00000001UD    { align1 1H @1 $2.dst };
else(16)        JIP:  LABEL3          UIP:  LABEL3              { align1 1H };

LABEL4:
mov(16)         g49<1>Q         0x0000000000000024Q             { align1 1H };
add(16)         g51<1>Q         g27<1,1,0>Q     g49<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g53UD           g51UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $5 };
mul(16)         acc0<1>UD       g53<8,8,1>UD    0xaaabUW        { align1 1H $5.dst };
mach(16)        g54<1>UD        g53<8,8,1>UD    0xaaaaaaabUD    { align1 1H };
shr(16)         g2<1>UD         g54<8,8,1>UD    0x00000001UD    { align1 1H @1 $2.dst };

LABEL3:
endif(16)       JIP:  LABEL1                                    { align1 1H };

LABEL1:
endif(16)       JIP:  LABEL0                                    { align1 1H };
mov(16)         g55<1>Q         0x0000000000000031Q             { align1 1H };
shl(16)         g66<1>Q         g21<4,4,1>Q     0x00000003UD    { align1 1H };
add(16)         g57<1>Q         g27<1,1,0>Q     g55<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g68<1>Q         g1.4<0,1,0>Q    g66<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g59UD           g57UD           nullUD          0x04100980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $6 };
mov(16)         g60<1>UD        g59<32,8,4>UB                   { align1 1H $6.dst };
shl(16)         g61<1>D         g60<8,8,1>D     0x00000010UD    { align1 1H I@1 };
or(16)          g62<1>UD        g34<1,1,0>UD    g61<1,1,0>UD    { align1 1H I@1 compacted };
mov(16)         g125<2>UD       g62<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g63<1>UQ        g125<8,4,2>UD                   { align1 1H I@1 };
shl(16)         g65<1>Q         g63<4,4,1>Q     0x00000020UD    { align1 1H I@1 };
or(16)          g117<1>UD       g2<8,8,1>UD     g65<8,4,2>UD    { align1 1H @1 $2.dst };
mov(16)         g118<1>UD       g65.1<8,4,2>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g68UD           g117UD          0x04001584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V2, L1STATE_L3MOCS dst_len = 0, src0_len = 2, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };

LABEL0:
endif(16)       JIP:  LABEL5                                    { align1 1H };

LABEL5:
shr(16)         g69<1>UD        g6<8,8,1>UD     0x00000001UD    { align1 1H $7.src };
mov(16)         g70<1>Q         0x0000000000000030Q             { align1 1H };
mov(16)         g72<1>Q         0x0000000000000010Q             { align1 1H };
mov(16)         g74<1>Q         0x0000000000000028Q             { align1 1H };
mov(16)         g76<1>Q         0x0000000000000020Q             { align1 1H };
mov(16)         g78<1>Q         0x0000000000000024Q             { align1 1H };

LABEL14:
cmp.ge.f0.0(16) null<1>UD       g4<8,8,1>UD     g15<8,8,1>UD    { align1 1H I@2 };
(+f0.0) break(16) JIP:  LABEL6        UIP:  LABEL6              { align1 1H };
shl(16)         g80<1>D         g4<8,8,1>D      0x00000006UD    { align1 1H };
and.z.f0.0(16)  null<1>UD       g6<8,8,1>UD     0x00000001UD    { align1 1H };
shr(16)         g81<1>UD        g80<8,8,1>UD    0x00000003UD    { align1 1H I@2 };
add(16)         g82<1>D         g81<1,1,0>D     g69<1,1,0>D     { align1 1H I@1 compacted };
mul(16)         acc0<1>UD       g82<8,8,1>UD    0x0038UW        { align1 1H I@1 };
mul(16)         g84<1>D         g82<1,1,0>D     56W             { align1 1H compacted };
mach(16)        g83<1>UD        g82<8,8,1>UD    0x00000038UD    { align1 1H };
mov(16)         g85<2>UD        g84<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g85.1<2>UD      g83<1,1,0>UD                    { align1 1H I@1 compacted };
add(16)         g87<1>Q         g1.5<0,1,0>Q    g85<1,1,0>Q     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g89<1>Q         g87<1,1,0>Q     g70<1,1,0>Q     { align1 1H I@1 compacted };
(+f0.0) if(16)  JIP:  LABEL8          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g91UD           g89UD           nullUD          0x04100980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mov(16)         g92<1>UD        g91<32,8,4>UB                   { align1 1H $8.dst };
cmp.z.f0.0(16)  null<1>D        g92<8,8,1>D     1D              { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL10         UIP:  LABEL9              { align1 1H };
add(16)         g93<1>Q         g87<1,1,0>Q     g72<1,1,0>Q     { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g3UD            g93UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
else(16)        JIP:  LABEL9          UIP:  LABEL9              { align1 1H };

LABEL10:
add(16)         g94<1>Q         g87<1,1,0>Q     g74<1,1,0>Q     { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g96UD           g94UD           nullUD          0x04100980                0x00000000
                            ugm MsgDesc: ( load, a64, d8u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $7 };
mov.nz.f0.0(16) null<1>UD       g96<32,8,4>UB                   { align1 1H $7.dst };
(+f0.0) if(16)  JIP:  LABEL12         UIP:  LABEL11             { align1 1H };
add(16)         g97<1>Q         g87<1,1,0>Q     g76<1,1,0>Q     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g99UD           g97UD           nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $9 };
mul(16)         acc0<1>UD       g99<8,8,1>UD    0xaaabUW        { align1 1H $9.dst };
mach(16)        g100<1>UD       g99<8,8,1>UD    0xaaaaaaabUD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
shr(16)         g3<1>UD         g100<8,8,1>UD   0x00000001UD    { align1 1H I@1 };
else(16)        JIP:  LABEL11         UIP:  LABEL11             { align1 1H };

LABEL12:
add(16)         g101<1>Q        g87<1,1,0>Q     g78<1,1,0>Q     { align1 1H $10.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g103UD          g101UD          nullUD          0x04100580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $10 };
mul(16)         acc0<1>UD       g103<8,8,1>UD   0xaaabUW        { align1 1H $10.dst };
mach(16)        g104<1>UD       g103<8,8,1>UD   0xaaaaaaabUD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
shr(16)         g3<1>UD         g104<8,8,1>UD   0x00000001UD    { align1 1H };

LABEL11:
endif(16)       JIP:  LABEL9                                    { align1 1H };

LABEL9:
endif(16)       JIP:  LABEL13                                   { align1 1H };

LABEL13:
else(16)        JIP:  LABEL7          UIP:  LABEL7              { align1 1H };

LABEL8:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        g106UD          g89UD           nullUD          0x04100b80                0x00000000
                            ugm MsgDesc: ( load, a64, d16u32, V1, L1STATE_L3MOCS dst_len = 1, src0_len = 2, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
mov(16)         g105<1>UW       g106<16,8,2>UW                  { align1 1H $8.dst };
mov(16)         g126<2>UB       g105<16,16,1>UW                 { align1 1H I@1 };
mov(16)         g108<1>UD       g105.1<16,8,2>UB                { align1 1H };
mov(16)         g107<1>UD       g126<16,8,2>UB                  { align1 1H I@2 };
shl(16)         g109<1>D        g108<8,8,1>D    0x00000010UD    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(16)          g3<1>UD         g107<1,1,0>UD   g109<1,1,0>UD   { align1 1H compacted };

LABEL7:
endif(16)       JIP:  LABEL6                                    { align1 1H };
mov(16)         g7<2>UD         g80<1,1,0>UD                    { align1 1H compacted };
mov(16)         g110<1>UQ       g7<8,4,2>UD                     { align1 1H I@1 };
add(16)         g112<1>Q        g1.4<0,1,0>Q    g110<1,1,0>Q    { align1 1H I@1 compacted };
mov(1)          g9<1>UD         mask0<0,1,0>UD                  { align1 WE_all 1N A@1 compacted };
and(1)          g9<1>UD         g9<0,1,0>UD     0xffffffffUD    { align1 WE_all 1N A@1 };
fbl(1)          g114<1>UD       g9<0,1,0>UD                     { align1 WE_all 1N I@1 compacted };
shl(1)          a0<1>UD         g114<0,1,0>UD   0x00000003UD    { align1 WE_all 1N I@1 };
add(1)          a0<1>UD         a0<0,1,0>UD     0x00001c00UD    { align1 WE_all 1N A@1 };
mov(1)          g115<1>UQ       g[a0]<0,1,0>UQ                  { align1 WE_all 1N A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(16)         g118<1>Q        g115<0,1,0>Q                    { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(1)         nullUD          g118UD          g3UD            0x0200d584                0x00000040
                            ugm MsgDesc: ( store, a64, d32, V16, transpose, L1STATE_L3MOCS dst_len = 0, src0_len = 1, src1_len = 1 flat )  base_offset 0  { align1 WE_all 1N $7 };
add3(16)        g4<1>D          0x0001UW        g5<8,8,1>D      g4<1,1,1>D { align1 1H };

LABEL6:
while(16)       JIP:  LABEL14                                   { align1 1H };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_misc_copy_geo_meta_data_code[] = {
    0x80000065, 0x0a058220, 0x02000004, 0xffffffc0,
    0x2c800061, 0x00110074, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x8000c031, 0x010c0000,
    0xfa000a0c, 0x00340000, 0x800c0061, 0x07054410,
    0x00000000, 0x76543210, 0x2c001a61, 0x00107404,
    0x800c1a40, 0x07458110, 0x01460705, 0x00080008,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x06050120, 0x00460705, 0x00000000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x77060320, 0x000001c4, 0x00000000,
    0x00100065, 0x08058220, 0x020001c4, 0xffffffc0,
    0x00101a68, 0x05058220, 0x02447706, 0x00000006,
    0xb4001a61, 0x00100879, 0x00100068, 0x0f058220,
    0x02460805, 0x00000006, 0xac001b40, 0x05207410,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00101b61, 0x09050230, 0x00447906, 0x00000000,
    0x38801940, 0x0928010b, 0x00101968, 0x0d058330,
    0x02340b05, 0x00000003, 0x00101961, 0x7b060320,
    0x00340d05, 0x00000000, 0x00101970, 0x11050220,
    0x52460605, 0x00447b06, 0xadb01e70, 0x0f001012,
    0x00101965, 0x00010220, 0x22461105, 0x00461205,
    0x04100022, 0x0001c060, 0x00000368, 0x00000368,
    0x00100068, 0x13058220, 0x02460805, 0x00000003,
    0x00100061, 0x1d054770, 0x00000000, 0x00000030,
    0xac001a40, 0x13000614, 0xb4001961, 0x0010147c,
    0x00100041, 0x20018220, 0x01461405, 0x00380038,
    0x68000041, 0x03801418, 0x00101b61, 0x15050230,
    0x00447c06, 0x00000000, 0x00100049, 0x17058220,
    0x02461405, 0x00000038, 0xb4001b61, 0x00101819,
    0xb4001961, 0x00121719, 0x38801940, 0x1907011b,
    0x38001940, 0x1d001b1f, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c131, 0x210c0000,
    0xf3001f14, 0x00020000, 0x00108161, 0x22050020,
    0x00662107, 0x00000000, 0x00101970, 0x00018660,
    0x16462205, 0x00000001, 0x04100022, 0x0001c060,
    0x000001a0, 0x00000058, 0x00100061, 0x23054770,
    0x00000000, 0x00000010, 0x38001940, 0x23001b25,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c231, 0x020c0000, 0xfb002514, 0x00000000,
    0x00100024, 0x0001c060, 0x00000158, 0x00000158,
    0x0010a261, 0x26054770, 0x00000000, 0x00000028,
    0x38001940, 0x26001b28, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c331, 0x2a0c0000,
    0xf3002814, 0x00020000, 0x00108361, 0x00010020,
    0x20662a07, 0x00000000, 0x04100022, 0x0001c060,
    0x000000f0, 0x00000088, 0x00100061, 0x2b054770,
    0x00000000, 0x00000020, 0x38001940, 0x2b001b2d,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c431, 0x2f0c0000, 0xfb002d14, 0x00000000,
    0x00108441, 0x20018220, 0x01462f05, 0xaaabaaab,
    0x00100049, 0x30058220, 0x02462f05, 0xaaaaaaab,
    0x00112268, 0x02058220, 0x02463005, 0x00000001,
    0x00100024, 0x0001c060, 0x00000078, 0x00000078,
    0x00100061, 0x31054770, 0x00000000, 0x00000024,
    0x38001940, 0x31001b33, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c531, 0x350c0000,
    0xfb003314, 0x00000000, 0x00108541, 0x20018220,
    0x01463505, 0xaaabaaab, 0x00100049, 0x36058220,
    0x02463505, 0xaaaaaaab, 0x00112268, 0x02058220,
    0x02463605, 0x00000001, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100025, 0x00004600,
    0x00000000, 0x000000f0, 0x00100061, 0x37054770,
    0x00000000, 0x00000031, 0x00100069, 0x42058770,
    0x02341505, 0x00000003, 0x38001a40, 0x37001b39,
    0x38801a40, 0x42030144, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c631, 0x3b0c0000,
    0xf3003914, 0x00020000, 0x00108661, 0x3c050020,
    0x00663b07, 0x00000000, 0x00101969, 0x3d058660,
    0x02463c05, 0x00000010, 0xe8001966, 0x3d00223e,
    0xb4001961, 0x00103e7d, 0x00101961, 0x3f050230,
    0x00447d06, 0x00000000, 0x00101969, 0x41058770,
    0x02343f05, 0x00000020, 0x00112266, 0x75050220,
    0x02460205, 0x00444106, 0x00100061, 0x76050220,
    0x00444116, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c731, 0x00000000,
    0xfb084414, 0x00047514, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x0010a768, 0x45058220,
    0x02460605, 0x00000001, 0x00100061, 0x46054770,
    0x00000000, 0x00000030, 0x00100061, 0x48054770,
    0x00000000, 0x00000010, 0x00100061, 0x4a054770,
    0x00000000, 0x00000028, 0x00100061, 0x4c054770,
    0x00000000, 0x00000020, 0x00100061, 0x4e054770,
    0x00000000, 0x00000024, 0x00101a70, 0x00010220,
    0x42460405, 0x00460f05, 0x04100028, 0x0001c660,
    0x00000418, 0x00000418, 0x00100069, 0x50058660,
    0x02460405, 0x00000006, 0x00100065, 0x00018220,
    0x12460605, 0x00000001, 0x00101a68, 0x51058220,
    0x02465005, 0x00000003, 0xac001940, 0x45005152,
    0x00101941, 0x20018220, 0x01465205, 0x00380038,
    0x68000041, 0x03805254, 0x00100049, 0x53058220,
    0x02465205, 0x00000038, 0xb4001a61, 0x00105455,
    0xb4001961, 0x00125355, 0x38801940, 0x55070157,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x38001940, 0x46005759, 0x04100022, 0x0001c060,
    0x000002a8, 0x00000210, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x5b0c0000,
    0xf3005914, 0x00020000, 0x00108861, 0x5c050020,
    0x00665b07, 0x00000000, 0x00101970, 0x00018660,
    0x16465c05, 0x00000001, 0x04100022, 0x0001c060,
    0x000001a0, 0x00000058, 0x3800a740, 0x4800575d,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c731, 0x030c0000, 0xfb005d14, 0x00000000,
    0x00100024, 0x0001c060, 0x00000158, 0x00000158,
    0x3800a740, 0x4a00575e, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010c731, 0x600c0000,
    0xf3005e14, 0x00020000, 0x00108761, 0x00010020,
    0x20666007, 0x00000000, 0x04100022, 0x0001c060,
    0x00000100, 0x00000088, 0x3800a940, 0x4c005761,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0010c931, 0x630c0000, 0xfb006114, 0x00000000,
    0x00108941, 0x20018220, 0x01466305, 0xaaabaaab,
    0x00100049, 0x64058220, 0x02466305, 0xaaaaaaab,
    0x80008701, 0x00000000, 0x00000000, 0x00000000,
    0x00101968, 0x03058220, 0x02466405, 0x00000001,
    0x00100024, 0x0001c060, 0x00000088, 0x00000088,
    0x3800aa40, 0x4e005765, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0010ca31, 0x670c0000,
    0xfb006514, 0x00000000, 0x00108a41, 0x20018220,
    0x01466705, 0xaaabaaab, 0x00100049, 0x68058220,
    0x02466705, 0xaaaaaaab, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00100068, 0x03058220,
    0x02466805, 0x00000001, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100025, 0x00004600,
    0x00000000, 0x00000010, 0x00100024, 0x0001c060,
    0x000000a8, 0x000000a8, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x0010c831, 0x6a0c0000,
    0xf7005914, 0x00020000, 0x00108861, 0x69050110,
    0x00566a06, 0x00000000, 0x00101961, 0x7e060100,
    0x00586905, 0x00000000, 0x00100061, 0x6c050020,
    0x00d66906, 0x00000000, 0x00101a61, 0x6b050020,
    0x00567e06, 0x00000000, 0x00101a69, 0x6d058660,
    0x02466c05, 0x00000010, 0x80008701, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0xe8000066, 0x6d006b03,
    0x00100025, 0x00004600, 0x00000000, 0x000000d0,
    0xb4000061, 0x00105007, 0x00101961, 0x6e050230,
    0x00440706, 0x00000000, 0x38801940, 0x6e030170,
    0xec840961, 0x00104009, 0x80000965, 0x09058220,
    0x02000904, 0xffffffff, 0x2c84194c, 0x00100972,
    0x80001969, 0x10018220, 0x02007204, 0x00000003,
    0x80000940, 0x10018220, 0x02001000, 0x00001c00,
    0x80000961, 0x73050330, 0x00010000, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x80101961, 0x76050770, 0x00007304, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x8000c731, 0x00000000, 0xfb08760c, 0x0034030c,
    0x00100052, 0x04044160, 0x0e0e0001, 0x04050505,
    0x00100027, 0x00014060, 0x00000000, 0xfffffbd8,
    0x2c100061, 0x0010007e, 0x80101931, 0x00000004,
    0x30007e0c, 0x00000000, 0x20000060, 0x00000000,
};
static const struct brw_kernel gfx20_misc_copy_geo_meta_data = {
   .prog_data = {
      .base.nr_params = 14,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 2432,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_misc_copy_geo_meta_data_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_misc_copy_geo_meta_data_printfs,
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
      .push.cross_thread.dwords = 14,
      .push.cross_thread.regs = 2,
      .push.cross_thread.size = 64,
   },
   .args_size = 24,
   .arg_count = 3,
   .args = gfx20_misc_copy_geo_meta_data_args,
   .code = gfx20_misc_copy_geo_meta_data_code,
};
const char *gfx20_misc_copy_geo_meta_data_sha1 = "d3470d041d0c213bcf8b308c51b6ba98658d72dd";

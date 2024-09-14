#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx20_bvh_build_BFS_begin_batchable_relocs[] = {
};
static const u_printf_info gfx20_bvh_build_BFS_begin_batchable_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx20_bvh_build_BFS_begin_batchable_args[] = {
   { 0, 8 },
   { 8, 8 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g15<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g36<1>Q         0x0000000000000020Q             { align1 1H };
mov(16)         g30<1>Q         0x0000000000000020Q             { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g1UD            g15UD           nullUD          0x0210d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
mov(8)          g46<1>UW        0x76543210V                     { align1 WE_all 1Q };
add(8)          g46.8<1>UW      g46<8,8,1>UW    0x0008UW        { align1 WE_all 1Q I@1 };
add(16)         g46.16<1>UW     g46<16,16,1>UW  0x0010UW        { align1 WE_all 1H I@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(32)         g44<1>UD        g46<16,16,1>UW                  { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g32<1>Q         g36<1,1,0>Q     g1.4<0,1,0>Q    { align1 1H I@6 compacted };
add(16)         g34<1>Q         g30<1,1,0>Q     g1.4<0,1,0>Q    { align1 2H I@6 compacted };
and(32)         g29<1>UD        g0.2<0,1,0>UD   0x000000ffUD    { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(32)        g36UD           g32UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $1 };
shl(32)         g42<1>D         g29<8,8,1>D     0x00000005UD    { align1 I@1 };
add(32)         g47<1>D         g44<1,1,0>D     g42<1,1,0>D     { align1 I@1 compacted };
mov(32)         g49<1>UD        g47<32,8,4>UB                   { align1 I@1 };
mov(32)         g51<1>UW        g47<32,8,4>UB                   { align1 };
mov(32)         g52<1>UD        g49<16,8,2>UW                   { align1 I@2 };
mov(32)         g60<2>UW        g36<8,8,1>UD                    { align1 $1.dst };
mov(32)         g40<1>UW        g60<16,8,2>UW                   { align1 I@1 };
sel.l(32)       g41<1>UW        g40<16,16,1>UW  0x0100UW        { align1 I@1 };
mov(32)         g10<1>UD        g41<16,16,1>UW                  { align1 I@1 };
cmp.l.f0.0(32)  null<1>D        g52<8,8,1>D     g10<8,8,1>D     { align1 I@1 };
(+f0.0) if(32)  JIP:  LABEL1          UIP:  LABEL0              { align1 };
add(32)         g54<1>D         g49<1,1,0>D     g38<1,1,0>D     { align1 $1.dst compacted };
mov(16)         g62<1>Q         0x0000000000000034Q             { align1 2H };
mov(16)         g84<1>Q         0x0000000000002c2cQ             { align1 1H };
mov(16)         g71<1>Q         0x0000000000002c2cQ             { align1 2H };
mul(32)         g75<1>D         g52<1,1,0>D     1484W           { align1 compacted };
mov(16)         g2<1>UD         0x00000000UD                    { align1 1H compacted };
mov(16)         g6<1>UD         0x00000000UD                    { align1 1H compacted };
mov(16)         g8<1>UD         0x00000000UD                    { align1 1H compacted };
mov(16)         g3<1>UD         0x00000000UD                    { align1 2H compacted };
mov(16)         g7<1>UD         0x00000000UD                    { align1 2H compacted };
mov(16)         g9<1>UD         0x00000000UD                    { align1 2H compacted };
mov(16)         g48<1>Q         0x0000000000000034Q             { align1 1H };
mov(32)         g19<2>UW        g54<8,8,1>UD                    { align1 };
add(16)         g64<1>Q         g1.5<0,1,0>Q    g62<1,1,0>Q     { align1 2H compacted };
add(16)         g86<1>Q         g1.4<0,1,0>Q    g84<1,1,0>Q     { align1 1H compacted };
add(16)         g73<1>Q         g1.4<0,1,0>Q    g71<1,1,0>Q     { align1 2H compacted };
mov(16)         g77<2>UD        g75<1,1,0>UD                    { align1 1H compacted };
mov(16)         g79<2>UD        g76<1,1,0>UD                    { align1 2H compacted };
add(16)         g82<1>Q         g1.5<0,1,0>Q    g48<1,1,0>Q     { align1 1H I@7 compacted };
mov(16)         g66<4>UW        g19<16,8,2>UW                   { align1 1H I@7 };
mov(16)         g68<4>UW        g20<16,8,2>UW                   { align1 2H I@7 };
mov(16)         g88<1>UQ        g77<8,4,2>UD                    { align1 1H I@5 };
mov(16)         g76<1>UQ        g79<8,4,2>UD                    { align1 2H I@5 };
mov(16)         g40<1>UQ        g66<16,4,4>UW                   { align1 1H I@4 };
mov(16)         g56<1>UQ        g68<16,4,4>UW                   { align1 2H I@4 };
add(16)         g78<1>Q         g86<1,1,0>Q     g88<1,1,0>Q     { align1 1H I@4 compacted };
add(16)         g80<1>Q         g73<1,1,0>Q     g76<1,1,0>Q     { align1 2H I@4 compacted };
mul(16)         acc0<1>UD       g40<8,4,2>UD    0x0058UW        { align1 1H I@4 };
mul(16)         g43<1>D         g40<8,4,2>D     88W             { align1 1H };
mul(16)         g59<1>D         g56<8,4,2>D     88W             { align1 2H I@5 };
mach(16)        g42<1>UD        g40<8,4,2>UD    0x00000058UD    { align1 1H };
mov(16)         g46<2>UD        g43<1,1,0>UD                    { align1 1H I@3 compacted };
mov(16)         g60<2>UD        g59<1,1,0>UD                    { align1 2H I@3 compacted };
mul(16)         acc0<1>UD       g56<8,4,2>UD    0x0058UW        { align1 2H };
mov(16)         g46.1<2>UD      g42<1,1,0>UD                    { align1 1H I@3 compacted };
mach(16)        g58<1>UD        g56<8,4,2>UD    0x00000058UD    { align1 2H };
add(16)         g66<1>Q         g82<1,1,0>Q     g46<1,1,0>Q     { align1 1H I@2 compacted };
mov(16)         g60.1<2>UD      g58<1,1,0>UD                    { align1 2H I@2 compacted };
add(16)         g68<1>Q         g64<1,1,0>Q     g60<1,1,0>Q     { align1 2H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        g70UD           g66UD           nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 $2 };
mov(16)         g5<1>UD         g71<1,1,0>UD                    { align1 2H $2.dst compacted };
mov(16)         g4<1>UD         g70<1,1,0>UD                    { align1 1H $2.dst compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g78UD           g2UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $3 };
mov(32)         g100<1>UD       g54<16,8,2>UW                   { align1 };
mov(16)         g89<1>Q         0x000000000000001cQ             { align1 1H };
mov(16)         g82<1>Q         0x000000000000001cQ             { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g84<1>Q         g78<1,1,0>Q     g89<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
add(16)         g86<1>Q         g80<1,1,0>Q     g82<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g84UD           g100UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $4 };
mov(16)         g96<1>Q         0x0000000000000028Q             { align1 1H };
mov(16)         g85<1>Q         0x0000000000000028Q             { align1 2H $4.src };
shl(32)         g87<1>D         g52<8,8,1>D     0x00000002UD    { align1 $4.src };
mov(32)         g101<1>UD       0x00000000UD                    { align1 $4.src compacted };
mov(16)         g82<2>UD        g87<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g90<2>UD        g88<1,1,0>UD                    { align1 2H I@3 compacted };
mov(16)         g113<1>UQ       g82<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g88<1>UQ        g90<8,4,2>UD                    { align1 2H I@2 };
add(16)         g115<1>Q        g1.4<0,1,0>Q    g113<1,1,0>Q    { align1 1H I@2 compacted };
add(16)         g90<1>Q         g1.4<0,1,0>Q    g88<1,1,0>Q     { align1 2H I@2 compacted };
add(16)         g92<1>Q         g115<1,1,0>Q    g96<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g94<1>Q         g90<1,1,0>Q     g85<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g92UD           g101UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $5 };
mov(16)         g117<1>Q        0x0000000000000010Q             { align1 1H };
mov(16)         g93<1>Q         0x0000000000000010Q             { align1 2H $5.src };
mov(16)         g103<1>D        0D                              { align1 2H };
mov(16)         g105<1>D        0D                              { align1 2H };
mov(16)         g107<1>D        0D                              { align1 2H };
mov(16)         g102<1>D        0D                              { align1 1H $5.src };
mov(16)         g104<1>D        0D                              { align1 1H };
mov(16)         g106<1>D        0D                              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g95<1>Q         g78<1,1,0>Q     g117<1,1,0>Q    { align1 1H I@7 compacted };
add(16)         g97<1>Q         g80<1,1,0>Q     g93<1,1,0>Q     { align1 2H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g95UD           g102UD          0x08002584                0x00000180
                            ugm MsgDesc: ( store, a64, d32, V3, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 6 flat )  base_offset 0  { align1 $6 };
add(32)         g96<1>D         g70<8,8,1>D     511D            { align1 $6.src };
mov(16)         g118<1>Q        0x000000000000042cQ             { align1 1H };
mov(16)         g98<1>Q         0x000000000000042cQ             { align1 2H $6.src };
shr(32)         g109<1>UD       g96<8,8,1>UD    0x00000009UD    { align1 I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g100<1>Q        g115<1,1,0>Q    g118<1,1,0>Q    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
add(16)         g102<1>Q        g90<1,1,0>Q     g98<1,1,0>Q     { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g100UD          g109UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $1 };
mov(16)         g119<1>Q        0x000000000000082cQ             { align1 1H };
mov(16)         g101<1>Q        0x000000000000082cQ             { align1 2H $1.src };
add(16)         g121<1>Q        g119<1,1,0>Q    g1.4<0,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
add(16)         g103<1>Q        g101<1,1,0>Q    g1.4<0,1,0>Q    { align1 2H I@2 compacted };
mov(32)         g111<2>UW       g19<16,8,2>UW                   { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g105<1>Q        g121<1,1,0>Q    g113<1,1,0>Q    { align1 1H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
add(16)         g107<1>Q        g103<1,1,0>Q    g88<1,1,0>Q     { align1 2H I@3 compacted };
mov(32)         g111.1<2>UW     g51<16,16,1>UW                  { align1 I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g105UD          g111UD          0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $7 };
else(32)        JIP:  LABEL0          UIP:  LABEL0              { align1 };

LABEL1:
mov(32)         g109<1>UD       0x00000000UD                    { align1 $1.src compacted };

LABEL0:
endif(32)       JIP:  LABEL2                                    { align1 };

LABEL2:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(32)         g106<1>D        0D                              { align1 WE_all I@2 };
mov(32)         g106<1>D        g109<1,1,0>D                    { align1 compacted };
cmp.z.f0.0(32)  null<1>W        g51<16,16,1>W   0W              { align1 I@4 };
add(8)          g106.1<2>D      g106<8,4,2>D    g106.1<8,4,2>D  { align1 WE_all 1Q I@2 };
add(8)          g107.1<2>D      g107<8,4,2>D    g107.1<8,4,2>D  { align1 WE_all 1Q I@3 };
add(4)          g106.2<4>D      g106.1<8,2,4>D  g106.2<8,2,4>D  { align1 WE_all 1N I@2 };
add(4)          g107.2<4>D      g107.1<8,2,4>D  g107.2<8,2,4>D  { align1 WE_all 1N I@2 };
add(4)          g106.3<4>D      g106.1<8,2,4>D  g106.3<8,2,4>D  { align1 WE_all 1N I@2 };
add(4)          g107.3<4>D      g107.1<8,2,4>D  g107.3<8,2,4>D  { align1 WE_all 1N I@2 };
add(4)          g106.4<1>D      g106.3<0,1,0>D  g106.4<4,4,1>D  { align1 WE_all 1N I@2 };
add(4)          g106.12<1>D     g106.11<0,1,0>D g106.12<4,4,1>D { align1 WE_all 1N I@3 };
add(4)          g107.4<1>D      g107.3<0,1,0>D  g107.4<4,4,1>D  { align1 WE_all 1N I@3 };
add(4)          g107.12<1>D     g107.11<0,1,0>D g107.12<4,4,1>D { align1 WE_all 1N I@4 };
add(8)          g106.8<1>D      g106.7<0,1,0>D  g106.8<8,8,1>D  { align1 WE_all 1Q I@3 };
add(8)          g107.8<1>D      g107.7<0,1,0>D  g107.8<8,8,1>D  { align1 WE_all 1Q I@2 };
add(16)         g107<1>D        g106.15<0,1,0>D g107<8,8,1>D    { align1 WE_all 1H I@1 };
(+f0.0) if(32)  JIP:  LABEL3          UIP:  LABEL3              { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(32)         g108<1>UD       g38<16,8,2>UW                   { align1 $1.dst };
mov(32)         g112<1>UD       g36<16,8,2>UW                   { align1 $7.src };
mov(16)         g124<1>Q        0x0000000000000018Q             { align1 1H };
mov(16)         g116<1>Q        0x0000000000000018Q             { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N I@6 };
mov(16)         g3<1>UD         g107.15<0,1,0>UD                { align1 2H $3.src };
mov(16)         g2<1>UD         g107.15<0,1,0>UD                { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
add(32)         g110<1>D        g108<1,1,0>D    g10<1,1,0>D     { align1 I@6 compacted };
add(32)         g114<1>D        g112<1,1,0>D    -g10<1,1,0>D    { align1 I@6 compacted };
cmp.l.f0.0(32)  g122<1>D        g10<8,8,1>D     g112<8,8,1>D    { align1 };
add(16)         g118<1>Q        g1.4<0,1,0>Q    g124<1,1,0>Q    { align1 1H I@7 compacted };
add(16)         g120<1>Q        g1.4<0,1,0>Q    g116<1,1,0>Q    { align1 2H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
mov(16)         g9<1>UD         g111<1,1,0>UD                   { align1 2H I@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g8<1>UD         g110<1,1,0>UD                   { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
mov(16)         g7<1>UD         g115<1,1,0>UD                   { align1 2H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g6<1>UD         g114<1,1,0>UD                   { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
mov(16)         g5<1>D          -g123<1,1,0>D                   { align1 2H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g4<1>D          -g122<1,1,0>D                   { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g118UD          g2UD            0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 $3 };
mov(16)         g125<1>Q        0x0000000000000428Q             { align1 1H };
mov(16)         g123<1>Q        0x0000000000000428Q             { align1 2H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
add(16)         g2<1>Q          g1.4<0,1,0>Q    g125<1,1,0>Q    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
add(16)         g4<1>Q          g1.4<0,1,0>Q    g123<1,1,0>Q    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g2UD            g10UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $3 };

LABEL3:
endif(32)       JIP:  LABEL4                                    { align1 };

LABEL4:
mov(16)         g126<1>Q        0x0000000000002c2cQ             { align1 1H };
mov(16)         g3<1>Q          0x0000000000002c2cQ             { align1 2H $3.src };
shl(32)         g25<1>D         g44<8,8,1>D     0x00000002UD    { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
mov(16)         g14<1>Q         0x000000000000002cQ             { align1 1H };
mov(16)         g7<1>Q          0x000000000000002cQ             { align1 2H $3.src };
mov(16)         g16<1>Q         0x00000000000004acQ             { align1 1H };
mov(16)         g27<1>Q         0x00000000000004acQ             { align1 2H };
mov(32)         g23<1>UD        g29<1,1,0>UD                    { align1 compacted };
add(16)         g12<1>Q         g1.4<0,1,0>Q    g126<1,1,0>Q    { align1 1H I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
add(16)         g5<1>Q          g1.4<0,1,0>Q    g3<1,1,0>Q      { align1 2H I@7 compacted };

LABEL10:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.ge.f0.0(32) null<1>UD       g23<8,8,1>UD    g10<8,8,1>UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL5        UIP:  LABEL5              { align1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mul(32)         g31<1>D         g23<1,1,0>D     1484W           { align1 I@7 compacted };
mov(32)         g20<1>UD        g25<1,1,0>UD                    { align1 I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g91<2>UD        g31<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g93<2>UD        g32<1,1,0>UD                    { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g1<1>UQ         g91<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
mov(16)         g32<1>UQ        g93<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g3<1>Q          g12<1,1,0>Q     g1<1,1,0>Q      { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
add(16)         g34<1>Q         g5<1,1,0>Q      g32<1,1,0>Q     { align1 2H I@2 compacted };
add(16)         g31<1>Q         g16<1,1,0>Q     g3<1,1,0>Q      { align1 1H I@2 compacted };
add(16)         g18<1>Q         g3<1,1,0>Q      g14<1,1,0>Q     { align1 1H compacted };
add(16)         g36<1>Q         g34<1,1,0>Q     g7<1,1,0>Q      { align1 2H I@3 compacted };
add(16)         g38<1>Q         g27<1,1,0>Q     g34<1,1,0>Q     { align1 2H $1.dst compacted };

LABEL7:
cmp.ge.f0.0(32) null<1>UD       g20<8,8,1>UD    0x00000030UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL6        UIP:  LABEL6              { align1 };
shl(32)         g40<1>D         g20<8,8,1>D     0x00000002UD    { align1 };
mov(32)         g3<1>UD         0x00000000UD                    { align1 $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(16)         g94<2>UD        g40<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g96<2>UD        g41<1,1,0>UD                    { align1 2H I@3 compacted };
mov(16)         g33<1>UQ        g94<8,4,2>UD                    { align1 1H I@2 };
mov(16)         g42<1>UQ        g96<8,4,2>UD                    { align1 2H I@2 };
add(16)         g44<1>Q         g31<1,1,0>Q     g33<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g46<1>Q         g38<1,1,0>Q     g42<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g44UD           g3UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $9 };
add(32)         g45<1>D         g40<8,8,1>D     4D              { align1 $9.src };
mov(16)         g97<2>UD        g45<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
mov(16)         g99<2>UD        g46<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g34<1>UQ        g97<8,4,2>UD                    { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $9.src };
mov(16)         g46<1>UQ        g99<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
add(16)         g48<1>Q         g31<1,1,0>Q     g34<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g50<1>Q         g38<1,1,0>Q     g46<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g48UD           g3UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $10 };
add(32)         g49<1>D         g40<8,8,1>D     8D              { align1 $10.src };
mov(16)         g100<2>UD       g49<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g102<2>UD       g50<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g42<1>UQ        g100<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $10.src };
mov(16)         g50<1>UQ        g102<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g52<1>Q         g31<1,1,0>Q     g42<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g54<1>Q         g38<1,1,0>Q     g50<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g52UD           g3UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $11 };
add(32)         g53<1>D         g40<8,8,1>D     12D             { align1 $11.src };
mov(16)         g103<2>UD       g53<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $7.src };
mov(16)         g105<2>UD       g54<1,1,0>UD                    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(16)         g43<1>UQ        g103<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $11.src };
mov(16)         g54<1>UQ        g105<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
add(16)         g56<1>Q         g31<1,1,0>Q     g43<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $8.src };
add(16)         g58<1>Q         g38<1,1,0>Q     g54<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g56UD           g3UD            0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $8 };
add(32)         g20<1>D         g20<8,8,1>D     128D            { align1 };

LABEL6:
while(32)       JIP:  LABEL7                                    { align1 };
mov(32)         g21<1>UD        g25<1,1,0>UD                    { align1 I@2 compacted };

LABEL9:
cmp.ge.f0.0(32) null<1>UD       g21<8,8,1>UD    0x00000120UD    { align1 I@1 };
(+f0.0) break(32) JIP:  LABEL8        UIP:  LABEL8              { align1 };
shl(32)         g57<1>D         g21<8,8,1>D     0x00000002UD    { align1 $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(32)         g31<1>UD        0x7f800000UD                    { align1 I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
mov(16)         g106<2>UD       g57<1,1,0>UD                    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $7.src };
mov(16)         g108<2>UD       g58<1,1,0>UD                    { align1 2H I@3 compacted };
mov(16)         g44<1>UQ        g106<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $8.src };
mov(16)         g59<1>UQ        g108<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g61<1>Q         g18<1,1,0>Q     g44<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g63<1>Q         g36<1,1,0>Q     g59<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g61UD           g31UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $12 };
add(32)         g62<1>D         g57<8,8,1>D     4D              { align1 $12.src };
mov(16)         g109<2>UD       g62<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $7.src };
mov(16)         g111<2>UD       g63<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g45<1>UQ        g109<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $12.src };
mov(16)         g63<1>UQ        g111<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g65<1>Q         g18<1,1,0>Q     g45<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
add(16)         g67<1>Q         g36<1,1,0>Q     g63<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g65UD           g31UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $13 };
add(32)         g66<1>D         g57<8,8,1>D     8D              { align1 $13.src };
mov(16)         g112<2>UD       g66<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g114<2>UD       g67<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g46<1>UQ        g112<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $13.src };
mov(16)         g67<1>UQ        g114<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
add(16)         g69<1>Q         g18<1,1,0>Q     g46<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g71<1>Q         g36<1,1,0>Q     g67<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g69UD           g31UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $2 };
add(32)         g70<1>D         g57<8,8,1>D     12D             { align1 $2.src };
mov(16)         g115<2>UD       g70<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
mov(16)         g117<2>UD       g71<1,1,0>UD                    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(16)         g47<1>UQ        g115<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $2.src };
mov(16)         g71<1>UQ        g117<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g73<1>Q         g18<1,1,0>Q     g47<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
add(16)         g75<1>Q         g36<1,1,0>Q     g71<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g73UD           g31UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $1 };
add(32)         g21<1>D         g21<8,8,1>D     128D            { align1 };

LABEL8:
while(32)       JIP:  LABEL9                                    { align1 };
add(32)         g23<1>D         g23<8,8,1>D     8D              { align1 };

LABEL5:
while(32)       JIP:  LABEL10                                   { align1 };
mov(16)         g48<1>Q         0x000000000000056cQ             { align1 1H $10.src };
mov(16)         g74<1>Q         0x000000000000056cQ             { align1 2H $1.src };

LABEL14:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
cmp.ge.f0.0(32) null<1>UD       g29<8,8,1>UD    g10<8,8,1>UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL11       UIP:  LABEL11             { align1 };
mul(32)         g76<1>D         g29<1,1,0>D     1484W           { align1 $1.src compacted };
mov(32)         g27<1>UD        g25<1,1,0>UD                    { align1 I@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g118<2>UD       g76<1,1,0>UD                    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $3.src };
mov(16)         g120<2>UD       g77<1,1,0>UD                    { align1 2H I@3 compacted };
mov(16)         g50<1>UQ        g118<8,4,2>UD                   { align1 1H I@2 };
mov(16)         g77<1>UQ        g120<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
add(16)         g52<1>Q         g12<1,1,0>Q     g50<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g79<1>Q         g5<1,1,0>Q      g77<1,1,0>Q     { align1 2H I@2 compacted };
add(16)         g54<1>Q         g52<1,1,0>Q     g48<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g81<1>Q         g79<1,1,0>Q     g74<1,1,0>Q     { align1 2H I@2 compacted };

LABEL13:
cmp.ge.f0.0(32) null<1>UD       g27<8,8,1>UD    0x00000018UD    { align1 I@2 };
(+f0.0) break(32) JIP:  LABEL12       UIP:  LABEL12             { align1 };
shl(32)         g83<1>D         g27<8,8,1>D     0x00000002UD    { align1 $4.src };
mov(32)         g32<1>UD        0x7f800000UD                    { align1 $1.src };
mov(16)         g121<2>UD       g83<1,1,0>UD                    { align1 1H I@2 compacted };
mov(16)         g123<2>UD       g84<1,1,0>UD                    { align1 2H I@3 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g56<1>UQ        g121<8,4,2>UD                   { align1 1H I@2 };
mov(16)         g85<1>UQ        g123<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
add(16)         g87<1>Q         g54<1,1,0>Q     g56<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g89<1>Q         g81<1,1,0>Q     g85<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g87UD           g32UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $14 };
add(32)         g88<1>D         g83<8,8,1>D     4D              { align1 $14.src };
mov(16)         g124<2>UD       g88<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g126<2>UD       g89<1,1,0>UD                    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g57<1>UQ        g124<8,4,2>UD                   { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $14.src };
mov(16)         g89<1>UQ        g126<8,4,2>UD                   { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
add(16)         g91<1>Q         g54<1,1,0>Q     g57<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g93<1>Q         g81<1,1,0>Q     g89<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g91UD           g32UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $15 };
add(32)         g92<1>D         g83<8,8,1>D     8D              { align1 $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(16)         g1<2>UD         g92<1,1,0>UD                    { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $8.src };
mov(16)         g3<2>UD         g93<1,1,0>UD                    { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(16)         g58<1>UQ        g1<8,4,2>UD                     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $15.src };
mov(16)         g93<1>UQ        g3<8,4,2>UD                     { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
add(16)         g95<1>Q         g54<1,1,0>Q     g58<1,1,0>Q     { align1 1H I@2 compacted };
add(16)         g97<1>Q         g81<1,1,0>Q     g93<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g95UD           g32UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $6 };
add(32)         g96<1>D         g83<8,8,1>D     12D             { align1 $6.src };
mov(16)         g7<2>UD         g96<1,1,0>UD                    { align1 1H I@1 compacted };
mov(16)         g14<2>UD        g97<1,1,0>UD                    { align1 2H I@2 compacted };
mov(16)         g59<1>UQ        g7<8,4,2>UD                     { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $6.src };
mov(16)         g97<1>UQ        g14<8,4,2>UD                    { align1 2H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g99<1>Q         g54<1,1,0>Q     g59<1,1,0>Q     { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 5N $1.src };
add(16)         g101<1>Q        g81<1,1,0>Q     g97<1,1,0>Q     { align1 2H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(32)        nullUD          g99UD           g32UD           0x08000584                0x00000080
                            ugm MsgDesc: ( store, a64, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 $1 };
add(32)         g27<1>D         g27<8,8,1>D     128D            { align1 };

LABEL12:
while(32)       JIP:  LABEL13                                   { align1 };
add(32)         g29<1>D         g29<8,8,1>D     8D              { align1 };

LABEL11:
while(32)       JIP:  LABEL14                                   { align1 };
mov(16)         g126<1>UD       g0<1,1,0>UD                     { align1 WE_all 1H compacted };
send(32)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all I@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx20_bvh_build_BFS_begin_batchable_code[] = {
    0x80000065, 0x0f058220, 0x02000004, 0xffffffc0,
    0x00100061, 0x24054770, 0x00000000, 0x00000020,
    0x02100061, 0x1e054770, 0x00000000, 0x00000020,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x8000c031, 0x010c0000, 0xfa000f0c, 0x00340000,
    0x800c0061, 0x2e054410, 0x00000000, 0x76543210,
    0x800c1940, 0x2e458110, 0x01462e05, 0x00080008,
    0x80101940, 0x2e858110, 0x01582e05, 0x00100010,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00140061, 0x2c050120, 0x00582e05, 0x00000000,
    0x80008001, 0x00000000, 0x00000000, 0x00000000,
    0x38001e40, 0x01702420, 0x38081e40, 0x01701e22,
    0x00140065, 0x1d058220, 0x02000024, 0x000000ff,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x0014c131, 0x24240000, 0xfb002024, 0x00040000,
    0x00141969, 0x2a058660, 0x02461d05, 0x00000005,
    0xac201940, 0x2a002c2f, 0x00141961, 0x31050020,
    0x00662f07, 0x00000000, 0x00140061, 0x33050010,
    0x00662f07, 0x00000000, 0x00141a61, 0x34050120,
    0x00563106, 0x00000000, 0x00148161, 0x3c060210,
    0x00462405, 0x00000000, 0x00141961, 0x28050110,
    0x00563c06, 0x00000000, 0x00141962, 0x29058110,
    0x51582805, 0x01000100, 0x00141961, 0x0a050120,
    0x00582905, 0x00000000, 0x00141970, 0x00010660,
    0x56463405, 0x00460a05, 0x04140022, 0x0001c060,
    0x00000580, 0x00000578, 0xac208140, 0x26003136,
    0x02100061, 0x3e054770, 0x00000000, 0x00000034,
    0x00100061, 0x54054770, 0x00000000, 0x00002c2c,
    0x02100061, 0x47054770, 0x00000000, 0x00002c2c,
    0x68200041, 0x5cc0344b, 0x64800061, 0x00000002,
    0x64800061, 0x00000006, 0x64800061, 0x00000008,
    0x64880061, 0x00000003, 0x64880061, 0x00000007,
    0x64880061, 0x00000009, 0x00100061, 0x30054770,
    0x00000000, 0x00000034, 0x00140061, 0x13060210,
    0x00463605, 0x00000000, 0x38880040, 0x3e070140,
    0x38800040, 0x54030156, 0x38880040, 0x47030149,
    0xb4000061, 0x00104b4d, 0xb4080061, 0x00104c4f,
    0x38801f40, 0x30070152, 0x00101f61, 0x42070110,
    0x00561306, 0x00000000, 0x02101f61, 0x44070110,
    0x00561406, 0x00000000, 0x00101d61, 0x58050230,
    0x00444d06, 0x00000000, 0x02101d61, 0x4c050230,
    0x00444f06, 0x00000000, 0x00101c61, 0x28050130,
    0x00544207, 0x00000000, 0x02101c61, 0x38050130,
    0x00544407, 0x00000000, 0x38001c40, 0x5800564e,
    0x38081c40, 0x4c004950, 0x00101c41, 0x20018220,
    0x01442806, 0x00580058, 0x00100041, 0x2b058660,
    0x05442806, 0x00580058, 0x02101d41, 0x3b058660,
    0x05443806, 0x00580058, 0x00100049, 0x2a058220,
    0x02442806, 0x00000058, 0xb4001b61, 0x00102b2e,
    0xb4081b61, 0x00103b3c, 0x02100041, 0x20018220,
    0x01443806, 0x00580058, 0xb4001b61, 0x00122a2e,
    0x02100049, 0x3a058220, 0x02443806, 0x00000058,
    0x38001a40, 0x2e005242, 0xb4081a61, 0x00123a3c,
    0x38081940, 0x3c004044, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c231, 0x46140000,
    0xfb004224, 0x00000000, 0x2c088261, 0x00104705,
    0x2c008261, 0x00104604, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c331, 0x00000000,
    0xfb084e24, 0x000c0244, 0x00140061, 0x64050120,
    0x00563606, 0x00000000, 0x00100061, 0x59054770,
    0x00000000, 0x0000001c, 0x02100061, 0x52054770,
    0x00000000, 0x0000001c, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x59004e54,
    0x8200a301, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x52005056, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c431, 0x00000000,
    0xfb085424, 0x00006414, 0x00100061, 0x60054770,
    0x00000000, 0x00000028, 0x0210a461, 0x55054770,
    0x00000000, 0x00000028, 0x0014a469, 0x57058660,
    0x02463405, 0x00000002, 0x64a0a461, 0x00000065,
    0xb4001a61, 0x00105752, 0xb4081b61, 0x0010585a,
    0x00101a61, 0x71050230, 0x00445206, 0x00000000,
    0x02101a61, 0x58050230, 0x00445a06, 0x00000000,
    0x38801a40, 0x71030173, 0x38881a40, 0x5803015a,
    0x38001a40, 0x6000735c, 0x38081a40, 0x55005a5e,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c531, 0x00000000, 0xfb085c24, 0x00006514,
    0x00100061, 0x75054770, 0x00000000, 0x00000010,
    0x0210a561, 0x5d054770, 0x00000000, 0x00000010,
    0x02100061, 0x67054660, 0x00000000, 0x00000000,
    0x02100061, 0x69054660, 0x00000000, 0x00000000,
    0x02100061, 0x6b054660, 0x00000000, 0x00000000,
    0x0010a561, 0x66054660, 0x00000000, 0x00000000,
    0x00100061, 0x68054660, 0x00000000, 0x00000000,
    0x00100061, 0x6a054660, 0x00000000, 0x00000000,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x38001f40, 0x75004e5f, 0x38081f40, 0x5d005061,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c631, 0x00000000, 0xfb085f24, 0x00086634,
    0x0014a640, 0x60058660, 0x06464605, 0x000001ff,
    0x00100061, 0x76054770, 0x00000000, 0x0000042c,
    0x0210a661, 0x62054770, 0x00000000, 0x0000042c,
    0x00141b68, 0x6d058220, 0x02466005, 0x00000009,
    0x8000a401, 0x00000000, 0x00000000, 0x00000000,
    0x8000a501, 0x00000000, 0x00000000, 0x00000000,
    0x38001b40, 0x76007364, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x38081b40, 0x62005a66,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c131, 0x00000000, 0xfb086424, 0x00006d14,
    0x00100061, 0x77054770, 0x00000000, 0x0000082c,
    0x0210a161, 0x65054770, 0x00000000, 0x0000082c,
    0x38001a40, 0x01707779, 0x8200a101, 0x00000000,
    0x00000000, 0x00000000, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x01706567,
    0x00140061, 0x6f060110, 0x00561306, 0x00000000,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0x38001b40, 0x71007969, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x38081b40, 0x5800676b,
    0x00141b61, 0x6f0e0110, 0x00583305, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c731, 0x00000000, 0xfb086924, 0x00006f14,
    0x00140024, 0x0001c060, 0x00000018, 0x00000018,
    0x64a0a161, 0x0000006d, 0x00140025, 0x00004600,
    0x00000000, 0x00000010, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x8000a701, 0x00000000,
    0x00000000, 0x00000000, 0x80141a61, 0x6a054660,
    0x00000000, 0x00000000, 0x7c200061, 0x00106d6a,
    0x00141c70, 0x00018550, 0x15583305, 0x00000000,
    0x800c1a40, 0x6a160660, 0x06446a06, 0x00446a16,
    0x800c1b40, 0x6b160660, 0x06446b06, 0x00446b16,
    0x80081a40, 0x6a270660, 0x06426a17, 0x00426a27,
    0x80081a40, 0x6b270660, 0x06426b17, 0x00426b27,
    0x80081a40, 0x6a370660, 0x06426a17, 0x00426a37,
    0x80081a40, 0x6b370660, 0x06426b17, 0x00426b37,
    0x80081a40, 0x6a450660, 0x06006a34, 0x00346a45,
    0x80081b40, 0x6ac50660, 0x06006ab4, 0x00346ac5,
    0x80081b40, 0x6b450660, 0x06006b34, 0x00346b45,
    0x80081c40, 0x6bc50660, 0x06006bb4, 0x00346bc5,
    0x800c1b40, 0x6a850660, 0x06006a74, 0x00466a85,
    0x800c1a40, 0x6b850660, 0x06006b74, 0x00466b85,
    0x80101940, 0x6b050660, 0x06006af4, 0x00466b05,
    0x04140022, 0x0001c060, 0x000001f0, 0x000001f0,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0x00148161, 0x6c050120, 0x00562606, 0x00000000,
    0x0014a761, 0x70050120, 0x00562406, 0x00000000,
    0x00100061, 0x7c054770, 0x00000000, 0x00000018,
    0x02100061, 0x74054770, 0x00000000, 0x00000018,
    0x82001e01, 0x00000000, 0x00000000, 0x00000000,
    0x0210a361, 0x03050220, 0x00006bf4, 0x00000000,
    0x0010a361, 0x02050220, 0x00006bf4, 0x00000000,
    0x8000a701, 0x00000000, 0x00000000, 0x00000000,
    0xac201e40, 0x0a006c6e, 0xac201e40, 0x0a207072,
    0x00140070, 0x7a050660, 0x56460a05, 0x00467005,
    0x38801f40, 0x7c030176, 0x38881f40, 0x74030178,
    0x8200a301, 0x00000000, 0x00000000, 0x00000000,
    0x2c081d61, 0x00106f09, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x2c001e61, 0x00106e08,
    0x8200a301, 0x00000000, 0x00000000, 0x00000000,
    0x2c081e61, 0x00107307, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x2c001f61, 0x00107206,
    0x8200a301, 0x00000000, 0x00000000, 0x00000000,
    0x7d881f61, 0x00107b05, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x7d801f61, 0x00107a04,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c331, 0x00000000, 0xfb087624, 0x000c0244,
    0x00100061, 0x7d054770, 0x00000000, 0x00000428,
    0x02100061, 0x7b054770, 0x00000000, 0x00000428,
    0x8000a301, 0x00000000, 0x00000000, 0x00000000,
    0x38801a40, 0x7d030102, 0x8200a301, 0x00000000,
    0x00000000, 0x00000000, 0x38881a40, 0x7b030104,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c331, 0x00000000, 0xfb080224, 0x00000a14,
    0x00140025, 0x00004600, 0x00000000, 0x00000010,
    0x00100061, 0x7e054770, 0x00000000, 0x00002c2c,
    0x0210a361, 0x03054770, 0x00000000, 0x00002c2c,
    0x00140069, 0x19058660, 0x02462c05, 0x00000002,
    0x8000a001, 0x00000000, 0x00000000, 0x00000000,
    0x00100061, 0x0e054770, 0x00000000, 0x0000002c,
    0x0210a361, 0x07054770, 0x00000000, 0x0000002c,
    0x00100061, 0x10054770, 0x00000000, 0x000004ac,
    0x02100061, 0x1b054770, 0x00000000, 0x000004ac,
    0x2c200061, 0x00101d17, 0x38801f40, 0x7e03010c,
    0x8200a301, 0x00000000, 0x00000000, 0x00000000,
    0x38881f40, 0x03030105, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x00141a70, 0x00010220,
    0x42461705, 0x00460a05, 0x04140028, 0x0001c660,
    0x00000740, 0x00000740, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x68201f41, 0x5cc0171f,
    0x2c201e61, 0x00101914, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0xb4001a61, 0x00101f5b,
    0xb4081b61, 0x0010205d, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x01050230,
    0x00445b06, 0x00000000, 0x8200a101, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x20050230,
    0x00445d06, 0x00000000, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x01000c03,
    0x8200a101, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x20000522, 0x38001a40, 0x0300101f,
    0x38000040, 0x0e000312, 0x38081b40, 0x07002224,
    0x38088140, 0x22001b26, 0x00141a70, 0x00018220,
    0x42461405, 0x00000030, 0x04140028, 0x0001c660,
    0x000002c8, 0x000002c8, 0x00140069, 0x28058660,
    0x02461405, 0x00000002, 0x64a0a861, 0x00000003,
    0x8000a601, 0x00000000, 0x00000000, 0x00000000,
    0xb4001a61, 0x0010285e, 0xb4081b61, 0x00102960,
    0x00101a61, 0x21050230, 0x00445e06, 0x00000000,
    0x02101a61, 0x2a050230, 0x00446006, 0x00000000,
    0x38001a40, 0x21001f2c, 0x38081a40, 0x2a00262e,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c931, 0x00000000, 0xfb082c24, 0x00000314,
    0x0014a940, 0x2d058660, 0x06462805, 0x00000004,
    0xb4001961, 0x00102d61, 0x8200a101, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x00102e63,
    0x00101a61, 0x22050230, 0x00446106, 0x00000000,
    0x8200a901, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x2e050230, 0x00446306, 0x00000000,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x22001f30, 0x38081a40, 0x2e002632,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014ca31, 0x00000000, 0xfb083024, 0x00000314,
    0x0014aa40, 0x31058660, 0x06462805, 0x00000008,
    0xb4001961, 0x00103164, 0xb4081a61, 0x00103266,
    0x00101a61, 0x2a050230, 0x00446406, 0x00000000,
    0x8200aa01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x32050230, 0x00446606, 0x00000000,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x2a001f34, 0x38081a40, 0x32002636,
    0x8000aa01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014cb31, 0x00000000, 0xfb083424, 0x00000314,
    0x0014ab40, 0x35058660, 0x06462805, 0x0000000c,
    0xb4001961, 0x00103567, 0x8200a701, 0x00000000,
    0x00000000, 0x00000000, 0xb4081a61, 0x00103669,
    0x8000a901, 0x00000000, 0x00000000, 0x00000000,
    0x00101a61, 0x2b050230, 0x00446706, 0x00000000,
    0x8200ab01, 0x00000000, 0x00000000, 0x00000000,
    0x02101a61, 0x36050230, 0x00446906, 0x00000000,
    0x8000a801, 0x00000000, 0x00000000, 0x00000000,
    0x38001a40, 0x2b001f38, 0x8200a801, 0x00000000,
    0x00000000, 0x00000000, 0x38081a40, 0x3600263a,
    0x8000ab01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x0014c831, 0x00000000, 0xfb083824, 0x00000314,
    0x00140040, 0x14058660, 0x06461405, 0x00000080,
    0x00140027, 0x00014060, 0x00000000, 0xfffffd28,
    0x2c201a61, 0x00101915, 0x00141970, 0x00018220,
    0x42461505, 0x00000120, 0x04140028, 0x0001c660,
    0x00000330, 0x00000330, 0x0014a869, 0x39058660,
    0x02461505, 0x00000002, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x00141f61, 0x1f054220,
    0x00000000, 0x7f800000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xb4000061, 0x0010396a,
    0x8200a701, 0x00000000, 0x00000000, 0x00000000,
    0xb4081b61, 0x00103a6c, 0x00101a61, 0x2c050230,
    0x00446a06, 0x00000000, 0x8200a801, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x3b050230,
    0x00446c06, 0x00000000, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x2c00123d,
    0x38081a40, 0x3b00243f, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014cc31, 0x00000000,
    0xfb083d24, 0x00001f14, 0x0014ac40, 0x3e058660,
    0x06463905, 0x00000004, 0xb4001961, 0x00103e6d,
    0x8200a701, 0x00000000, 0x00000000, 0x00000000,
    0xb4081a61, 0x00103f6f, 0x00101a61, 0x2d050230,
    0x00446d06, 0x00000000, 0x8200ac01, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x3f050230,
    0x00446f06, 0x00000000, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x2d001241,
    0x8200a201, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x3f002443, 0x8000ac01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014cd31, 0x00000000,
    0xfb084124, 0x00001f14, 0x0014ad40, 0x42058660,
    0x06463905, 0x00000008, 0xb4001961, 0x00104270,
    0xb4081a61, 0x00104372, 0x00101a61, 0x2e050230,
    0x00447006, 0x00000000, 0x8200ad01, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x43050230,
    0x00447206, 0x00000000, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x2e001245,
    0x38081a40, 0x43002447, 0x8000ad01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c231, 0x00000000,
    0xfb084524, 0x00001f14, 0x0014a240, 0x46058660,
    0x06463905, 0x0000000c, 0xb4001961, 0x00104673,
    0x8200a301, 0x00000000, 0x00000000, 0x00000000,
    0xb4081a61, 0x00104775, 0x8000aa01, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x2f050230,
    0x00447306, 0x00000000, 0x8200a201, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x47050230,
    0x00447506, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x2f001249,
    0x8200a101, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x4700244b, 0x8000a201, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c131, 0x00000000,
    0xfb084924, 0x00001f14, 0x00140040, 0x15058660,
    0x06461505, 0x00000080, 0x00140027, 0x00014060,
    0x00000000, 0xfffffcc0, 0x00140040, 0x17058660,
    0x06461705, 0x00000008, 0x00140027, 0x00014060,
    0x00000000, 0xfffff8a0, 0x0010aa61, 0x30054770,
    0x00000000, 0x0000056c, 0x0210a161, 0x4a054770,
    0x00000000, 0x0000056c, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0x00141a70, 0x00010220,
    0x42461d05, 0x00460a05, 0x04140028, 0x0001c660,
    0x000003f0, 0x000003f0, 0x6820a141, 0x5cc01d4c,
    0x2c201f61, 0x0010191b, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0xb4001a61, 0x00104c76,
    0x8200a301, 0x00000000, 0x00000000, 0x00000000,
    0xb4081b61, 0x00104d78, 0x00101a61, 0x32050230,
    0x00447606, 0x00000000, 0x02101a61, 0x4d050230,
    0x00447806, 0x00000000, 0x8000ab01, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x32000c34,
    0x38081a40, 0x4d00054f, 0x38001a40, 0x30003436,
    0x38081a40, 0x4a004f51, 0x00141a70, 0x00018220,
    0x42461b05, 0x00000018, 0x04140028, 0x0001c660,
    0x00000320, 0x00000320, 0x0014a469, 0x53058660,
    0x02461b05, 0x00000002, 0x0014a161, 0x20054220,
    0x00000000, 0x7f800000, 0xb4001a61, 0x00105379,
    0xb4081b61, 0x0010547b, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x38050230,
    0x00447906, 0x00000000, 0x02101a61, 0x55050230,
    0x00447b06, 0x00000000, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x38003657,
    0x38081a40, 0x55005159, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014ce31, 0x00000000,
    0xfb085724, 0x00002014, 0x0014ae40, 0x58058660,
    0x06465305, 0x00000004, 0xb4001961, 0x0010587c,
    0xb4081a61, 0x0010597e, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x39050230,
    0x00447c06, 0x00000000, 0x8200ae01, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x59050230,
    0x00447e06, 0x00000000, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x8000a501, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x3900365b,
    0x38081a40, 0x5900515d, 0x8000ae01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014cf31, 0x00000000,
    0xfb085b24, 0x00002014, 0x0014af40, 0x5c058660,
    0x06465305, 0x00000008, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x80008001, 0x00000000,
    0x00000000, 0x00000000, 0x8000a301, 0x00000000,
    0x00000000, 0x00000000, 0xb4001961, 0x00105c01,
    0x8200a801, 0x00000000, 0x00000000, 0x00000000,
    0xb4081a61, 0x00105d03, 0x8000a801, 0x00000000,
    0x00000000, 0x00000000, 0x00101a61, 0x3a050230,
    0x00440106, 0x00000000, 0x8200af01, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x5d050230,
    0x00440306, 0x00000000, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x3a00365f,
    0x38081a40, 0x5d005161, 0x8000af01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c631, 0x00000000,
    0xfb085f24, 0x00002014, 0x0014a640, 0x60058660,
    0x06465305, 0x0000000c, 0xb4001961, 0x00106007,
    0xb4081a61, 0x0010610e, 0x00101a61, 0x3b050230,
    0x00440706, 0x00000000, 0x8200a601, 0x00000000,
    0x00000000, 0x00000000, 0x02101a61, 0x61050230,
    0x00440e06, 0x00000000, 0x8000a101, 0x00000000,
    0x00000000, 0x00000000, 0x38001a40, 0x3b003663,
    0x8200a101, 0x00000000, 0x00000000, 0x00000000,
    0x38081a40, 0x61005165, 0x8000a601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x0014c131, 0x00000000,
    0xfb086324, 0x00002014, 0x00140040, 0x1b058660,
    0x06461b05, 0x00000080, 0x00140027, 0x00014060,
    0x00000000, 0xfffffcd0, 0x00140040, 0x1d058660,
    0x06461d05, 0x00000008, 0x00140027, 0x00014060,
    0x00000000, 0xfffffbf0, 0x2c100061, 0x0010007e,
    0x80141931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx20_bvh_build_BFS_begin_batchable = {
   .prog_data = {
      .base.nr_params = 12,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 2,
      .base.total_scratch = 0,
      .base.total_shared = 0,
      .base.program_size = 5792,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx20_bvh_build_BFS_begin_batchable_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx20_bvh_build_BFS_begin_batchable_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 256, 1, 1 },
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
   .arg_count = 2,
   .args = gfx20_bvh_build_BFS_begin_batchable_args,
   .code = gfx20_bvh_build_BFS_begin_batchable_code,
};
const char *gfx20_bvh_build_BFS_begin_batchable_sha1 = "9503f8a5d9d16a3fc6876779b1a8778dc770de2c";

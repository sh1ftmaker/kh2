// coverage: addr=0x00188c30 symbol=func_00188c30 size=468 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.15;ghidra:near:97.71;m2c:near:90.67
#include "common/types.h"

extern "C" u32 func_001d9768(u32) asm("func_001d9768");
extern "C" void func_001888c8(u32) asm("func_001888c8");
extern "C" void func_00189170(u32) asm("func_00189170");
extern "C" void func_001a8bb8(u32) asm("func_001a8bb8");

// 0x00188c30 func_00188c30
u32 func_00188c30(u32 a0) asm("func_00188c30");
u32 func_00188c30(u32 a0) {
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s0_0;
    u32 s1_1;
    u32 s2_2;
    u32 s0_3;
    u32 s1_4;
    u32 s2_5;
    u32 t6;
    u32 t7;
    u32 t6_6;
    u32 t7_7;
    u32 t6_8;
    u32 t7_9;
    u32 t6_10;
    u32 t7_11;
    u32 t4;
    u32 t4_12;
    u32 t5;
    u32 t6_13;
    u32 t6_14;
    u32 t7_15;
    u32 v0;
    u32 a0_16;
    u32 t7_17;
    s0 = a0;
    s1 = 0xc;
    s2 = 0xffffffff;
    do {
        func_001888c8(s0);
        s0 = (s0 + 0x114);
        s1 = (s1 + -1);
    } while ((s1 != s2));
    s0_0 = (a0 + 0xe04);
    s1_1 = 9;
    s2_2 = 0xffffffff;
    do {
        func_00189170(s0_0);
        s0_0 = (s0_0 + 0x38);
        s1_1 = (s1_1 + -1);
    } while ((s1_1 != s2_2));
    *(u8*)((a0 + 0x1034)) = 0;
    *(u8*)((a0 + 0x1035)) = 0;
    *(u8*)((a0 + 0x1036)) = 1;
    *(u8*)((a0 + 0x1038)) = 0x64;
    *(u8*)((a0 + 0x1039)) = 3;
    *(u8*)((a0 + 0x103a)) = 3;
    s0_3 = (a0 + 0x1044);
    s1_4 = 0x12;
    s2_5 = 0xffffffff;
    do {
        func_001a8bb8(s0_3);
        s0_3 = (s0_3 + 4);
        s1_4 = (s1_4 + -1);
    } while ((s1_4 != s2_5));
    t7 = (a0 + 0x11d0);
    t6 = 7;
    do {
        *(u32*)(t7) = 0;
        t6 = (t6 + -1);
        t7 = (t7 + 4);
    } while (((s32)(t6) >= 0));
    t7_7 = (a0 + 0x1214);
    *(u32*)((a0 + 0x11f0)) = 0;
    t6_6 = 7;
    do {
        *(u32*)(t7_7) = 0;
        t6_6 = (t6_6 + -1);
        t7_7 = (t7_7 + 4);
    } while (((s32)(t6_6) >= 0));
    t7_9 = (a0 + 0x1234);
    t6_8 = 7;
    do {
        *(u32*)(t7_9) = 0;
        t6_8 = (t6_8 + -1);
        t7_9 = (t7_9 + 4);
    } while (((s32)(t6_8) >= 0));
    *(u32*)((a0 + 0x1254)) = 0;
    t7_11 = (a0 + 0x1898);
    t6_10 = 9;
    do {
        *(u32*)(t7_11) = 0;
        t6_10 = (t6_10 + -1);
        t7_11 = (t7_11 + 4);
    } while (((s32)(t6_10) >= 0));
    t4 = (a0 + 0x18c4);
    t4_12 = t4;
    t6_13 = 0x3f;
    t5 = 0xffffffff;
    do {
        *(u8*)(t4) = 0;
        *(u32*)((t4 + 4)) = 0;
        t6_13 = (t6_13 + -1);
        t4 = (t4 + 8);
    } while ((t6_13 != t5));
    t6_14 = 3;
    t7_15 = (t4_12 + 0x200);
    do {
        *(u32*)(t7_15) = 0;
        t6_14 = (t6_14 + -1);
        t7_15 = (t7_15 + 4);
    } while (((s32)(t6_14) >= 0));
    v0 = func_001d9768(a0 + 0x1ade);
    *(u16*)((a0 + 0x1afa)) = 0;
    a0_16 = (a0 + 0x1208);
    t7_17 = 3;
    do {
        *(u16*)(a0_16) = 0;
        a0_16 = (a0_16 + 2);
        t7_17 = (t7_17 + -1);
    } while (((s32)(t7_17) >= 0));
    return v0;
}

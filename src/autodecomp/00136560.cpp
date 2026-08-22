// coverage: addr=0x00136560 symbol=func_00136560 size=340 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:94.39;m2c:near:77.43;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_003b8b2c asm("D_003b8b2c");
extern "C" u32 D_003b8b2e asm("D_003b8b2e");
extern "C" u32 D_003b8b30 asm("D_003b8b30");
extern "C" u32 D_003b8b32 asm("D_003b8b32");
extern "C" u32 D_003b8b34 asm("D_003b8b34");
extern "C" u32 D_003b8b36 asm("D_003b8b36");
extern "C" u32 func_00136790(u32, u32) asm("func_00136790");
extern "C" u32 func_001aec40(u32) asm("func_001aec40");
extern "C" u32 func_002ba0f8(u32) asm("func_002ba0f8");
extern "C" void func_001364b8(u32, u32, u32) asm("func_001364b8");
extern "C" void func_001367c8(u32) asm("func_001367c8");
extern "C" void func_001367e0(u32, u32, u32) asm("func_001367e0");
extern "C" void func_002ba5d0(u32, u32) asm("func_002ba5d0");
extern "C" void func_002ba7c8(u32) asm("func_002ba7c8");

// 0x00136560 func_00136560
void func_00136560(u32 a0) asm("func_00136560");
void func_00136560(u32 a0) {
    u32 v0;
    u32 a0_0;
    u32 t6;
    u32 v0_1;
    u32 loc_0;
    u32 v0_2;
    u32 t7;
    u32 a1_3;
    u32 a1_4;
    u32 t6_5;
    u32 a1_6;
    u32 a1_7;
    u32 t6_8;
    u32 a1_9;
    u32 a1_10;
    u32 t6_11;
    u32 a1_12;
    u32 a1_13;
    u32 t6_14;
    u32 a1_15;
    u32 a1_16;
    u32 t6_17;
    v0 = func_001aec40(a0);
    a0_0 = *(s16*)((v0 + 0xc));
    t6 = *(s16*)(&D_003b8b2c);
    if ((a0_0 != t6)) {
        v0_1 = func_002ba0f8(a0_0);
        v0_2 = func_00136790(v0_1, (u32)&loc_0);
        t7 = loc_0;
        if (((s32)(t7) != 0)) {
            func_001367e0(a0, v0_1, v0_2);
            func_002ba5d0(v0_2, loc_0);
            func_002ba7c8(a0);
        }
        func_001367c8(v0_2);
    }
    a1_3 = *(s16*)((v0 + 0xe));
    if ((a1_3 != 0xffffffff)) {
        a1_4 = *(s16*)((v0 + 0xe));
        t6_5 = *(s16*)(&D_003b8b2e);
        if ((a1_4 != t6_5)) {
            func_001364b8(a0, a1_4, 0xa);
        }
    }
    a1_6 = *(s16*)((v0 + 0x10));
    if ((a1_6 != 0xffffffff)) {
        a1_7 = *(s16*)((v0 + 0x10));
        t6_8 = *(s16*)(&D_003b8b30);
        if ((a1_7 != t6_8)) {
            func_001364b8(a0, a1_7, 0xb);
        }
    }
    a1_9 = *(s16*)((v0 + 0x12));
    if ((a1_9 != 0xffffffff)) {
        a1_10 = *(s16*)((v0 + 0x12));
        t6_11 = *(s16*)(&D_003b8b32);
        if ((a1_10 != t6_11)) {
            func_001364b8(a0, a1_10, 0xc);
        }
    }
    a1_12 = *(s16*)((v0 + 0x14));
    if ((a1_12 != 0xffffffff)) {
        a1_13 = *(s16*)((v0 + 0x14));
        t6_14 = *(s16*)(&D_003b8b34);
        if ((a1_13 != t6_14)) {
            func_001364b8(a0, a1_13, 0xd);
        }
    }
    a1_15 = *(s16*)((v0 + 0x16));
    if ((a1_15 != 0xffffffff)) {
        a1_16 = *(s16*)((v0 + 0x16));
        t6_17 = *(s16*)(&D_003b8b36);
        if ((a1_16 != t6_17)) {
            func_001364b8(a0, a1_16, 0xe);
        }
    }
    return;
}

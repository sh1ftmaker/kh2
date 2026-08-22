// coverage: addr=0x00319bd0 symbol=func_00319bd0 size=332 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.3;ghidra:near:94.76
#include "common/types.h"


// 0x00319bd0 func_00319bd0
void func_00319bd0(u32 a0) asm("func_00319bd0");
void func_00319bd0(u32 a0) {
    u32 t5;
    u32 t3;
    u32 t7;
    u32 t6;
    u32 t4;
    u32 t2;
    u32 t5_0;
    u32 t4_1;
    u32 t7_2;
    u32 t6_3;
    u32 t3_4;
    u32 t7_5;
    u32 t6_6;
    u32 t5_7;
    u32 t7_8;
    u32 t6_9;
    u32 t7_10;
    u32 t6_11;
    u32 t7_12;
    u32 t6_13;
    u32 t7_14;
    u32 t6_15;
    u32 a0_16;
    t5 = (a0 + 4);
    t3 = 0x12;
    do {
        t7 = t5;
        t6 = 0x3f;
        t4 = 0xffffffff;
        t2 = 0xffffffff;
        do {
            *(u16*)(t7) = 0;
            *(u16*)((t7 + 2)) = 0;
            *(u16*)((t7 + 4)) = 0;
            t6 = (t6 + -1);
            t7 = (t7 + 6);
        } while ((t6 != t4));
        t3 = (t3 + -1);
        t5 = (t5 + 0x180);
    } while ((t3 != t2));
    t5_0 = (a0 + 0x1c84);
    t4_1 = 0x12;
    do {
        t7_2 = t5_0;
        t6_3 = 7;
        t3_4 = 0xffffffff;
        do {
            *(u32*)(t7_2) = 0;
            t6_3 = (t6_3 + -1);
            t7_2 = (t7_2 + 4);
        } while (((s32)(t6_3) >= 0));
        t4_1 = (t4_1 + -1);
        t5_0 = (t5_0 + 0x20);
    } while ((t4_1 != t3_4));
    *(u32*)((a0 + 0x1ee4)) = 0;
    *(u32*)((a0 + 0x1ee8)) = 0;
    t7_5 = (a0 + 0x22ec);
    t6_6 = 0x12;
    t5_7 = 0xffffffff;
    do {
        *(u32*)(t7_5) = 0;
        *(u32*)((t7_5 + 4)) = 0;
        t6_6 = (t6_6 + -1);
        t7_5 = (t7_5 + 8);
    } while ((t6_6 != t5_7));
    t7_8 = (a0 + 0x2384);
    t6_9 = 6;
    do {
        *(u32*)(t7_8) = 0;
        t6_9 = (t6_9 + -1);
        t7_8 = (t7_8 + 4);
    } while (((s32)(t6_9) >= 0));
    t7_10 = (a0 + 0x23a0);
    t6_11 = 0xf;
    do {
        *(u32*)(t7_10) = 0;
        t6_11 = (t6_11 + -1);
        t7_10 = (t7_10 + 4);
    } while (((s32)(t6_11) >= 0));
    t7_12 = (a0 + 0x23f4);
    t6_13 = 0xf;
    do {
        *(u32*)(t7_12) = 0;
        t6_13 = (t6_13 + -1);
        t7_12 = (t7_12 + 4);
    } while (((s32)(t6_13) >= 0));
    *(u32*)((a0 + 0x2490)) = 0;
    t7_14 = 9;
    t6_15 = 0xffffffff;
    a0_16 = (a0 + 0x2494);
    do {
        *(u32*)(a0_16) = 0;
        *(u32*)((a0_16 + 4)) = 0;
        a0_16 = (a0_16 + 8);
        t7_14 = (t7_14 + -1);
    } while ((t7_14 != t6_15));
    return;
}

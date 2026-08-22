// coverage: addr=0x00319870 symbol=func_00319870 size=188 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:93.55;ghidra:near:91.13
#include "common/types.h"

extern "C" u32 func_00319d30(u32) asm("func_00319d30");

// 0x00319870 func_00319870
void func_00319870(u32 a0) asm("func_00319870");
void func_00319870(u32 a0) {
    u32 t7;
    u32 t6;
    u32 t5;
    u32 t5_0;
    u32 t7_1;
    u32 t6_2;
    u32 t7_3;
    u32 t6_4;
    u32 t5_5;
    u32 a0_6;
    u32 t7_7;
    u32 t6_8;
    t7 = a0;
    t6 = 0x12;
    t5 = 0xffffffff;
    do {
        *(u8*)(t7) = 0;
        *(u8*)((t7 + 1)) = 0;
        *(u8*)((t7 + 2)) = 0;
        *(u8*)((t7 + 3)) = 0;
        t6 = (t6 + -1);
        t7 = (t7 + 4);
    } while ((t6 != t5));
    t5_0 = (a0 + 0x4c);
    t7_1 = t5_0;
    t6_2 = 7;
    do {
        *(u32*)(t7_1) = 0;
        t6_2 = (t6_2 + -1);
        t7_1 = (t7_1 + 4);
    } while (((s32)(t6_2) >= 0));
    *(u8*)((t5_0 + 0x11f)) = 0;
    t7_3 = (a0 + 0x16c);
    t6_4 = 0x1f;
    t5_5 = 0xffffffff;
    do {
        *(u8*)(t7_3) = 0;
        t6_4 = (t6_4 + -1);
        t7_3 = (t7_3 + 1);
    } while ((t6_4 != t5_5));
    a0_6 = (a0 + 0x18c);
    t7_7 = a0_6;
    t6_8 = 3;
    do {
        *(u32*)(t7_7) = 0;
        t6_8 = (t6_8 + -1);
        t7_7 = (t7_7 + 4);
    } while (((s32)(t6_8) >= 0));
    func_00319d30(a0_6 + 0x10);
    return;
}

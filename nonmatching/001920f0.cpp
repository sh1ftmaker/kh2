// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c61988 asm("D_01c61988");
extern "C" u32 D_01c61a88 asm("D_01c61a88");
extern "C" u32 func_001d96e8(u32, u32) asm("func_001d96e8");
extern "C" void func_00192cc0(u32, u32, u32) asm("func_00192cc0");
extern "C" void func_00192e50(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00192e50");

// 0x001920f0 func_001920f0
void func_001920f0(u32 a0) asm("func_001920f0");
void func_001920f0(u32 a0) {
    u8 frame[16];
    u32 a0_0;
    u32 s2;
    u32 t7;
    u32 s1;
    u32 s4;
    u32 s5;
    u32 s0;
    a0_0 = 0;
    s2 = 0;
    t7 = (0 << 3);
    do {
        s1 = 0;
        s4 = 0x370000;
        s5 = (u32)&D_01c61a88;
        s0 = (t7 + (u32)&D_01c61a88);
        do {
            func_00192cc0(s0 + (s1 * 8), s4 + -0x3290, func_001d96e8(a0_0, s1));
            s1 = (s1 + 1);
            s2 = (s2 + 1);
        } while (((s32)(((s32)(s1) < (s32)(2))) != 0));
        a0_0 = (a0_0 + 1);
        t7 = (s2 << 3);
    } while (((s32)(t7) != 0));
    *(u32*)((u32)frame) = ((u32)&D_01c61a88 + 0x28);
    func_00192e50(a0, (u32)&D_01c61988, 0x100, (u32)&D_01c61a88, (u32)&D_01c61a88 + 8, (u32)&D_01c61a88 + 0x10, (u32)&D_01c61a88 + 0x18, (u32)&D_01c61a88 + 0x20);
    return;
}

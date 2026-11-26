// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00199280 asm("D_00199280");
extern "C" u32 D_01c620c8 asm("D_01c620c8");
extern "C" u32 D_01c62138 asm("D_01c62138");
extern "C" u32 D_01c62140 asm("D_01c62140");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");

// 0x00199548 func_00199548
void func_00199548() asm("_ZN2YS6SIGNAL4InitEv");
void func_00199548() {
    u32 t6;
    u32 t5;
    t6 = 0;
    t5 = (u32)&D_01c620c8;
    do {
        *(u32*)(((t5 + (t6 * 4)) + 0x60)) = t6;
        t6 = (t6 + 1);
    } while (((s32)(((s32)(t6) < (s32)(4))) != 0));
    *(u32*)(&D_01c62138) = 4;
    *(u32*)(&D_01c62140) = 0;
    *(u32*)(((u32)&D_01c62140 + 4)) = 0;
    func_00102c18(1, 0x38a4, (u32)&D_00199280);
    return;
}

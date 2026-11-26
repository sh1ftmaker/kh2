// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001cb6e0 asm("D_001cb6e0");
extern "C" u32 D_001cb700 asm("D_001cb700");
extern "C" u32 D_00351fe4 asm("D_00351fe4");
extern "C" u32 D_0036e180 asm("D_0036e180");
extern "C" u32 func_001cbc50(u32, u32, u32, u32) asm("func_001cbc50");

// 0x001cbe30 func_001cbe30
void func_001cbe30(u32 a0, u32 a1, u32 a2) asm("func_001cbe30");
void func_001cbe30(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 t7;
    u32 t7_0;
    u32 t5;
    if (((s32)(*(u32*)(&D_00351fe4)) != 0)) {
        v0 = func_001cbc50(*(u32*)(&D_00351fe4), (a1 << 4) + (u32)&D_0036e180, a0, 0);
        if (((s32)(a2) != 0)) {
            if ((a2 != 1)) {
                t7 = (u32)&D_001cb6e0;
            } else {
                t7 = (u32)&D_001cb700;
            }
            t7_0 = t7;
        } else {
            t7_0 = (u32)&D_001cb6e0;
        }
        *(u32*)((v0 + 0x10)) = t7_0;
        *(u32*)((v0 + 0x28)) = (*(u32*)((v0 + 0x28)) | 1);
        t5 = v0;
    } else {
        t5 = 0;
    }
    return;
}

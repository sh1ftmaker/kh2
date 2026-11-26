// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" f32 func_0017ce10(f32) asm("func_0017ce10");
extern "C" u32 func_001ba028(u32) asm("func_001ba028");
extern "C" void func_0016aeb8(u32, f32) asm("func_0016aeb8");

// 0x002f13b0 func_002f13b0
void func_002f13b0(u32 a0) asm("_ZN2dk4Turn4execEv");
void func_002f13b0(u32 a0) {
    f32 f1;
    u32 t7;
    u32 t7_0;
    if (((s32)(func_001ba028(*(u32*)((a0 + 4)))) != 0)) {
        f1 = (*(f32*)((a0 + 0x14)) + (*(f32*)((a0 + 0x10)) * *(f32*)(&D_00349e10)));
        *(f32*)((a0 + 0x14)) = f1;
        *(f32*)((a0 + 0x14)) = func_0017ce10(f1);
        *(f32*)((a0 + 8)) = (*(f32*)((a0 + 8)) - *(f32*)(&D_00349e10));
        if (((*(f32*)((a0 + 8)) - *(f32*)(&D_00349e10)) <= 0.0f)) {
            *(f32*)((a0 + 0x14)) = *(f32*)((a0 + 0xc));
            func_0016aeb8(*(u32*)((a0 + 4)), *(f32*)((a0 + 0xc)));
            t7 = 0;
        } else {
            func_0016aeb8(*(u32*)((a0 + 4)), func_0017ce10(f1));
            t7 = 1;
        }
        t7_0 = t7;
    } else {
        t7_0 = 0;
    }
    return;
}

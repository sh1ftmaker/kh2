// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347cc0 asm("D_00347cc0");
extern "C" u32 D_00347ce0 asm("D_00347ce0");
extern "C" u32 func_00134d58(u32) asm("func_00134d58");
extern "C" void func_00134d10(u32, u32) asm("func_00134d10");

// 0x00135690 func_00135690(int, int)
// minilink-rodata 0x0036ac6c   (float literals live here in the original)
void lift_00135690(u32 a0, u32 a1) asm("_Z13func_00135690ii");
void lift_00135690(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_00134d10((u32)&D_00347cc0, a1);
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_00347ce0) = 0.30000001192092896f;
            *(f32*)(((u32)&D_00347ce0 + 8)) = 0.30000001192092896f;
            *(f32*)(((u32)&D_00347ce0 + 4)) = 0.30000001192092896f;
            *(f32*)(((u32)&D_00347ce0 + 0xc)) = 1.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            func_00134d58((u32)&D_00347cc0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

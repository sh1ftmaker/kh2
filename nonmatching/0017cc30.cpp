// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" u32 func_001805a8(u32, u32) asm("func_001805a8");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" void func_00180c88(u32, u32, f32) asm("func_00180c88");

// 0x0017cc30 wtarget_0017cc30(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_0017cc30(u32 a0, u32 a1, u32 a2) asm("_Z16wtarget_0017cc30jjjj");
u32 lift_0017cc30(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    if (((s32)(*(u32*)((a1 + 0x104))) >= 0)) {
        if (((*(u32*)((a1 + 0x168)) & 0x10) == 0)) {
            if ((*(u32*)((a1 + 0x104)) != 5)) {
                func_00180c88(a1 + 0x140, *(u32*)((a1 + 0x104)), 0.0f);
                func_0017f5e0(a1 + 0x140, 0, 0, 0.0f, 0.0f);
            } else {
                if (((s32)(func_001805a8(a1 + 0x140, 5)) != 0)) {
                    func_0017f488(a1 + 0x140, 5, 0.0f, 0.0f);
                    func_0017f5e0(a1 + 0x140, 0, 0, 0.0f, 0.0f);
                }
            }
        }
    }
    v0 = func_0016bd60(a1, a2);
    *(u32*)((a1 + 0x108)) = (*(u32*)((a1 + 0x108)) | 0x8000000);
    return v0;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0017a7d8(u32) asm("func_0017a7d8");
extern "C" void func_0016b070(u32, u32) asm("func_0016b070");
extern "C" void func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_001780d8(u32) asm("func_001780d8");
extern "C" void func_00198860(u32, u32) asm("func_00198860");

// 0x002d9788 func_002d9788
f32 func_002d9788(u32 a0) asm("_ZN2Ti18MGHachimitsuPlayer15_OVR_initializeEv");
f32 func_002d9788(u32 a0) {
    u8 frame[16];
    func_001780d8(a0);
    func_00198860(a0, 7);
    func_0016bd60(a0, 3);
    if (((s32)(*(u32*)((a0 + 0xc))) != 0)) {
        *(u32*)((*(u32*)((a0 + 0xc)) + 8)) = (*(u32*)((*(u32*)((a0 + 0xc)) + 8)) | 0x800);
    }
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    *(u32*)((a0 + 0x108)) = (*(u32*)((a0 + 0x108)) | 3);
    func_0016b070(a0, (u32)frame);
    return func_0017a7d8(a0);
}

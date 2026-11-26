// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_002cf2b0(u32, u32) asm("func_002cf2b0");

// 0x002d0d88 func_002d0d88
u32 func_002d0d88(u32 a0) asm("_ZN2Ti5MGObj22awake_from_hibernationEv");
u32 func_002d0d88(u32 a0) {
    func_002cf2b0(a0 + 0xaf0, 4);
    *(u32*)((a0 + 0x108)) = ((*(u32*)((a0 + 0x108)) & 0xfffffffe) & 0xfffffffd);
    *(u32*)((a0 + 0x10c)) = (*(u32*)((a0 + 0x10c)) & 0xffffff7f);
    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x7c))))(a0);
    *(u32*)((a0 + 0x108)) = (*(u32*)((a0 + 0x108)) & 0xfffffbff);
    return func_0017f488(a0 + 0x140, 0, 0.0f, 0.0f);
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_001b2210(u32, u32, f32, f32) asm("func_001b2210");

// 0x00172260 func_00172260
u32 func_00172260(u32 a0) asm("_ZN2YS12trap_obj_hopEP8BD_VALUE");
u32 func_00172260(u32 a0) {
    Q16 loc_0;
    u32 s1;
    u32 v0;
    loc_0 = *(Q16*)(*(u32*)((a0 + 4)));
    s1 = *(u32*)((*(u32*)(a0) + 4));
    func_001b2210(*(u32*)((*(u32*)(a0) + 4)), (u32)&loc_0, *(f32*)((a0 + 8)), *(f32*)((a0 + 0xc)));
    v0 = func_0017f488(s1 + 0x140, *(u32*)((a0 + 0x10)), *(f32*)((a0 + 0x14)), 0.0f);
    if ((*(u32*)((a0 + 0x18)) != 0)) {
        *(u32*)((s1 + 0x104)) = (*(u32*)((a0 + 0x10)) + 2);
        *(u32*)((s1 + 0x100)) = (*(u32*)((a0 + 0x10)) + 1);
    }
    return v0;
}

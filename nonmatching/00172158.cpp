// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_0017c4c8(u32, u32) asm("func_0017c4c8");

// 0x00172158 func_00172158
u32 func_00172158(u32 a0) asm("_ZN2YS15method_obj_jumpEP8BD_VALUE");
u32 func_00172158(u32 a0) {
    Q16 loc_0;
    u32 s1;
    u32 v0;
    loc_0 = *(Q16*)(*(u32*)((a0 + 4)));
    s1 = *(u32*)((*(u32*)(a0) + 4));
    func_0017c4c8(*(u32*)((*(u32*)(a0) + 4)), (u32)&loc_0);
    v0 = func_0017f488(s1 + 0x140, *(u32*)((a0 + 8)), *(f32*)((a0 + 0xc)), 0.0f);
    if ((*(u32*)((a0 + 0x10)) != 0)) {
        *(u32*)((s1 + 0x104)) = (*(u32*)((a0 + 8)) + 2);
        *(u32*)((s1 + 0x100)) = (*(u32*)((a0 + 8)) + 1);
    }
    return v0;
}

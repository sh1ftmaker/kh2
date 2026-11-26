// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e370 asm("D_0036e370");
extern "C" u32 func_00179eb8() asm("func_00179eb8");
extern "C" u32 func_001ada38(u32) asm("func_001ada38");
extern "C" void func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" void func_00180378(u32, u32, u32, f32) asm("func_00180378");
extern "C" void func_00190570(u32, u32) asm("func_00190570");
extern "C" void func_001987a8(u32, u32, u32) asm("func_001987a8");

// 0x001d0228 YS::MICKEY::recov_holylight()
u32 lift_001d0228(u32 a0) asm("_ZN2YS6MICKEY15recov_holylightEv");
u32 lift_001d0228(u32 a0) {
    u32 v0;
    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x20))))(a0);
    v0 = func_00179eb8();
    func_00190570(a0, v0);
    func_00180378(a0 + 0x140, v0, 0xfd, 0.0f);
    func_0017f5e0(v0 + 0x140, 0, 0, 0.0f, 0.0f);
    func_001987a8(a0, (u32)&D_0036e370, v0);
    return func_001ada38(0xa);
}

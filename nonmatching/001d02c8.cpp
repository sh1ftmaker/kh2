// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 D_0036e378 asm("D_0036e378");
extern "C" u32 func_00179eb8() asm("func_00179eb8");
extern "C" void func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" void func_00180378(u32, u32, u32, f32) asm("func_00180378");
extern "C" void func_00190570(u32, u32) asm("func_00190570");
extern "C" void func_001987a8(u32, u32, u32) asm("func_001987a8");

// 0x001d02c8 func_001d02c8
f32 func_001d02c8(u32 a0) asm("_ZN2YS6MICKEY12recov_elixirEv");
f32 func_001d02c8(u32 a0) {
    u32 v0;
    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x20))))(a0);
    v0 = func_00179eb8();
    func_00190570(a0, v0);
    func_00180378(a0 + 0x140, v0, 0xfe, 0.0f);
    func_0017f5e0(v0 + 0x140, 0, 0, 0.0f, 0.0f);
    func_001987a8(a0, (u32)&D_0036e378, v0);
    return ((u32(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(v0) + 0x78))))(v0, (s32)(((f32)(*(s32*)((*(u32*)((v0 + 0x48c)) + 4))) * *(f32*)((*(u32*)(&D_00352130) + 0x54)))), 0, 0);
}

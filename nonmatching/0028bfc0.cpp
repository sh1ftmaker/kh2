// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0028e8b8(u32, u32, u32, u32) asm("func_0028e8b8");
extern "C" u32 func_00313b80(u32, u32, f32) asm("func_00313b80");
extern "C" u32 func_003142e0(u32, u32) asm("func_003142e0");
extern "C" void func_0028eb88(u32, u32, f32, f32) asm("func_0028eb88");

// 0x0028bfc0 func_0028bfc0
// minilink-rodata 0x00374430   (float literals live here in the original)
void func_0028bfc0(u32 a0, u32 a1) asm("_ZN2Tz9ScrollBar6SetMaxEi");
void func_0028bfc0(u32 a0, u32 a1) {
    f32 f21;
    f32 f20;
    *(u32*)((a0 + 0x20)) = (((s32)(a1) < (s32)(*(u32*)((a0 + 0x24)))) ? *(u32*)((a0 + 0x24)) : a1);
    f21 = ((f32)(*(s32*)((a0 + 0x24))) / (f32)((s32)(a1)));
    if (((s32)(func_003142e0((u64)(0x3ff) << 0x34, func_00313b80(a0, ((s32)(a1) < (s32)(*(u32*)((a0 + 0x24)))) ? *(u32*)((a0 + 0x24)) : a1, (f32)(*(s32*)((a0 + 0x24))) / (f32)((s32)(a1))))) <= 0)) {
        f21 = 1.0f;
    }
    f20 = (((f32)(*(s32*)((a0 + 0x2c))) / (f32)(*(s32*)((a0 + 0x30)))) * f21);
    func_0028eb88(*(u32*)(a0), 2, 1.0f, ((f32)(*(s32*)((a0 + 0x2c))) / (f32)(*(s32*)((a0 + 0x30)))) * f21);
    func_0028e8b8(*(u32*)(a0), 3, 0, (s32)(((f32)(*(s32*)((a0 + 0x30))) * f20)));
    return;
}

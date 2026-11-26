// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0028e748(u32, u32, u32) asm("func_0028e748");
extern "C" u32 func_0028ebf0(u32, u32) asm("func_0028ebf0");
extern "C" void func_0028e710(u32, u32) asm("func_0028e710");

// 0x0028e190 func_0028e190
// minilink-rodata 0x00374478   (float literals live here in the original)
u32 func_0028e190(u32 a0, u32 a1) asm("func_0028e190");
u32 func_0028e190(u32 a0, u32 a1) {
    u8 frame[16];
    u32 v0;
    f32 f20;
    u32 s2;
    u32 s3;
    u32 t6;
    u32 s1;
    u32 v0_0;
    u32 sp;
    *(u32*)((a0 + 0x1c)) = 0;
    *(u32*)((a0 + 0x20)) = 0;
    *(u32*)((a0 + 0x24)) = 0;
    *(u32*)((a0 + 0x28)) = 0;
    *(f32*)((a0 + 0x2c)) = 1.0f;
    func_0028e710(a0, 0);
    v0 = func_0028ebf0(a0, 0);
    if (((s32)(a1) > 0)) {
        f20 = 1.0f;
        s2 = 0;
        s3 = 0xffffffff;
        t6 = *(u32*)((a0 + 0x38));
        s1 = 0;
        do {
            *(u32*)((((s1 + (s2 * 0x17c)) + *(u32*)((a0 + 0x38))) + 0x158)) = s3;
            *(u32*)((((s1 + (s2 * 0x17c)) + *(u32*)((a0 + 0x38))) + 0x15c)) = s3;
            *(u8*)((((s1 + (s2 * 0x17c)) + *(u32*)((a0 + 0x38))) + 0x160)) = 0;
            *(f32*)((((s1 + (s2 * 0x17c)) + *(u32*)((a0 + 0x38))) + 0x164)) = f20;
            *(u32*)((((s1 + (s2 * 0x17c)) + *(u32*)((a0 + 0x38))) + 0x168)) = 0;
            *(u32*)((((s1 + (s2 * 0x17c)) + *(u32*)((a0 + 0x38))) + 0x16c)) = 0;
            *(f32*)((((s1 + (s2 * 0x17c)) + *(u32*)((a0 + 0x38))) + 0x170)) = f20;
            *(f32*)((((s1 + (s2 * 0x17c)) + *(u32*)((a0 + 0x38))) + 0x174)) = f20;
            v0_0 = func_0028e748(a0, s2, 0);
            s2 = (s2 + 1);
            v0 = v0_0;
        } while (((s32)(s2) < (s32)(a1)));
    } else {
        sp = (u32)frame;
    }
    return v0;
}

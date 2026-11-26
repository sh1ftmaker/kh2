// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0018bfa0(u32, u32, f32) asm("func_0018bfa0");
extern "C" void func_0018c438(u32) asm("func_0018c438");

// 0x0018ba28 func_0018ba28
// minilink-rodata 0x0036cbd4   (float literals live here in the original)
void func_0018ba28(u32 a0, u32 a1) asm("func_0018ba28");
void func_0018ba28(u32 a0, u32 a1) {
    if (!((*(f32*)((a1 + 0x1c)) < *(f32*)((a0 + 0x1c))))) {
        a0 = a1;
        a1 = a0;
    }
    func_0018c438(a0 + 0xa40);
    *(f32*)((a0 + 0xa90)) = 120.0f;
    *(u8*)((a0 + 0xa71)) = 1;
    *(u32*)((a0 + 0xa44)) = 1;
    *(u32*)((a0 + 0xa4c)) = a1;
    *(u8*)((a0 + 0xa64)) = 0;
    *(u32*)((a0 + 0xa40)) = 3;
    func_0018bfa0(a0, a1, 200.0f);
    func_0018c438(a1 + 0xa40);
    *(f32*)((a1 + 0xa90)) = 120.0f;
    *(u8*)((a1 + 0xa71)) = 1;
    *(u32*)((a1 + 0xa40)) = 7;
    return;
}

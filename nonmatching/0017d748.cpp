// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_002f8b30(f32, f32) asm("func_002f8b30");

// 0x0017d748 func_0017d748
// minilink-rodata 0x0036c568   (float literals live here in the original)
void func_0017d748(u32 a0, u32 a1, f32 fa0) asm("func_0017d748");
void func_0017d748(u32 a0, u32 a1, f32 fa0) {
    u32 loc_0;
    f32 f23;
    f32 f25;
    f32 f26;
    u32 fp;
    u32 s5;
    u32 s7;
    f32 f21;
    f32 f22;
    f32 f20;
    f32 f21_0;
    f32 f20_1;
    loc_0 = (a1 + 0x10);
    f23 = (1.0f - fa0);
    f25 = 3.0f;
    f26 = 2.0f;
    fp = (a1 + 0x20);
    s5 = 0;
    s7 = (a1 + 0x30);
    do {
        f21 = (*(f32*)(((s5 << 2) + loc_0)) * f25);
        f22 = (*(f32*)(((s5 << 2) + a1)) * func_002f8b30(f23, f25));
        f20 = ((*(f32*)(((s5 << 2) + fp)) * f25) * f23);
        f21_0 = ((f21 * func_002f8b30(f23, f26)) * fa0);
        f20_1 = (f20 * func_002f8b30(fa0, f26));
        *(f32*)((a0 + (s5 << 2))) = (((f22 + f21_0) + f20_1) + (*(f32*)(((s5 << 2) + s7)) * func_002f8b30(fa0, f25)));
        s5 = (s5 + 1);
    } while (((s32)(((s32)(s5) < (s32)(3))) != 0));
    return;
}

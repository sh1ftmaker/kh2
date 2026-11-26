// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00144b38 func_00144b38
// minilink-rodata 0x0036af64   (float literals live here in the original)
f32 func_00144b38(u32 a0, u32 a1) asm("_ZNK2dk6Aabbox15generateVertex8EPN2kn7FVectorE");
f32 func_00144b38(u32 a0, u32 a1) {
    f32 f1;
    f32 f2;
    f32 f3;
    f32 f5;
    f32 f4;
    f32 f6;
    f1 = *(f32*)((a0 + 8));
    *(f32*)((a1 + 0x38)) = f1;
    f2 = *(f32*)(a0);
    *(f32*)((a1 + 0x50)) = f2;
    f3 = *(f32*)((a0 + 0x10));
    *(f32*)((a1 + 0x64)) = f3;
    *(f32*)(a1) = f2;
    f5 = *(f32*)((a0 + 4));
    *(f32*)((a1 + 4)) = f5;
    *(f32*)((a1 + 8)) = f1;
    *(f32*)((a1 + 0xc)) = 1.0f;
    *(f32*)((a1 + 0x10)) = f2;
    *(f32*)((a1 + 0x14)) = f3;
    *(f32*)((a1 + 0x18)) = f1;
    *(f32*)((a1 + 0x1c)) = 1.0f;
    f4 = *(f32*)((a0 + 0xc));
    *(f32*)((a1 + 0x20)) = f4;
    *(f32*)((a1 + 0x24)) = f3;
    *(f32*)((a1 + 0x28)) = f1;
    *(f32*)((a1 + 0x2c)) = 1.0f;
    *(f32*)((a1 + 0x30)) = f4;
    *(f32*)((a1 + 0x34)) = f5;
    *(f32*)((a1 + 0x3c)) = 1.0f;
    *(f32*)((a1 + 0x40)) = f2;
    *(f32*)((a1 + 0x44)) = f5;
    f6 = *(f32*)((a0 + 0x14));
    *(f32*)((a1 + 0x48)) = f6;
    *(f32*)((a1 + 0x4c)) = 1.0f;
    *(f32*)((a1 + 0x54)) = f3;
    *(f32*)((a1 + 0x58)) = f6;
    *(f32*)((a1 + 0x5c)) = 1.0f;
    *(f32*)((a1 + 0x60)) = f4;
    *(f32*)((a1 + 0x68)) = f6;
    *(f32*)((a1 + 0x6c)) = 1.0f;
    *(f32*)((a1 + 0x7c)) = 1.0f;
    *(f32*)((a1 + 0x70)) = f4;
    *(f32*)((a1 + 0x74)) = f5;
    *(f32*)((a1 + 0x78)) = f6;
    return 1.0f;
}

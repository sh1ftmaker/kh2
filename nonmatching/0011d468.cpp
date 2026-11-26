// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x0011d468 func_0011d468
void func_0011d468(u32 a0, u32 a1, u32 a2) asm("func_0011d468");
void func_0011d468(u32 a0, u32 a1, u32 a2) {
    u32 t7;
    f32 f4;
    f32 f6;
    f32 f7;
    f32 f5;
    f32 f2;
    f32 f3;
    f32 f1;
    f32 f0;
    t7 = *(u32*)((a0 + 0x2c));
    if ((a2 != (t7 + (a1 << 6)))) {
        *(Q16*)(a2) = *(Q16*)((t7 + (a1 << 6)));
        *(Q16*)((a2 + 0x10)) = *(Q16*)(((t7 + (a1 << 6)) + 0x10));
        *(Q16*)((a2 + 0x20)) = *(Q16*)(((t7 + (a1 << 6)) + 0x20));
        *(Q16*)((a2 + 0x30)) = *(Q16*)(((t7 + (a1 << 6)) + 0x30));
    }
    f4 = *(f32*)((a2 + 4));
    f6 = *(f32*)((a2 + 0x14));
    f7 = *(f32*)((a2 + 0x24));
    f5 = *(f32*)((a2 + 0x34));
    f2 = *(f32*)((a2 + 8));
    f3 = *(f32*)((a2 + 0x18));
    f1 = *(f32*)((a2 + 0x28));
    f0 = *(f32*)((a2 + 0x38));
    *(f32*)((a2 + 4)) = -(f4);
    *(f32*)((a2 + 0x14)) = -(f6);
    *(f32*)((a2 + 0x24)) = -(f7);
    *(f32*)((a2 + 0x34)) = -(f5);
    *(f32*)((a2 + 8)) = -(f2);
    *(f32*)((a2 + 0x38)) = -(f0);
    *(f32*)((a2 + 0x18)) = -(f3);
    *(f32*)((a2 + 0x28)) = -(f1);
    return;
}

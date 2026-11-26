// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" void func_00184540(u32, u32, f32, f32) asm("func_00184540");

// 0x001b2170 func_001b2170
void func_001b2170(u32 a0, u32 a1, u32 a2) asm("func_001b2170");
void func_001b2170(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    f32 f20;
    f32 f0;
    f32 f2;
    f32 f1;
    f32 f0_0;
    f20 = *(f32*)((a2 + 0x24));
    func_00184540((u32)frame, a2, *(f32*)((a2 + 0xf0)), *(f32*)((a2 + 0xf0)));
    if ((a0 != (u32)frame)) {
        *(Q16*)(a0) = *(Q16*)((u32)frame);
    }
    f0 = *(f32*)((a2 + 0xf4));
    f2 = *(f32*)((a2 + 0x120));
    f1 = !(((f20 + (f0 * *(f32*)(&D_00349e10))) < f2)) ? f2 : (f20 + (f0 * *(f32*)(&D_00349e10)));
    *(f32*)((a2 + 0x24)) = f1;
    f0_0 = *(f32*)(&D_00349e10);
    *(f32*)((a0 + 4)) = (f1 * f0_0);
    return;
}

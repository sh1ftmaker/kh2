// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0017bef8 asm("D_0017bef8");
extern "C" u32 D_01c60500 asm("D_01c60500");
extern "C" u32 D_01c60510 asm("D_01c60510");
extern "C" void func_002fd188(u32) asm("func_002fd188");

// 0x0017a968 ctarget_0017a968(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0017a968(u32 a0) asm("_Z16ctarget_0017a968jjjj");
void lift_0017a968(u32 a0) {
    if (((s32)(*(s8*)(&D_01c60500)) == 0)) {
        *(u8*)(&D_01c60500) = 1;
        *(f32*)(&D_01c60510) = 0.0f;
        *(f32*)(((u32)&D_01c60510 + 4)) = 0.0f;
        *(f32*)(((u32)&D_01c60510 + 8)) = 0.0f;
        *(f32*)(((u32)&D_01c60510 + 0xc)) = 0.0f;
        func_002fd188((u32)&D_0017bef8);
    }
    *(Q16*)(a0) = *(Q16*)((u32)&D_01c60510);
    return;
}

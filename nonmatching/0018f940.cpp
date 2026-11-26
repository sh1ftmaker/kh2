// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_001900c8 asm("D_001900c8");
extern "C" u32 D_01c60cf0 asm("D_01c60cf0");
extern "C" u32 D_01c60d00 asm("D_01c60d00");
extern "C" u32 func_001a4b78(u32, u32) asm("func_001a4b78");
extern "C" void func_002fd188(u32) asm("func_002fd188");

// 0x0018f940 func_0018f940
u32 func_0018f940(u32 a0) asm("_ZN2YS30trap_attack_get_reflect_vectorEP8BD_VALUE");
u32 func_0018f940(u32 a0) {
    u8 frame[16];
    u32 v0;
    if (((s32)(*(s8*)(&D_01c60cf0)) == 0)) {
        *(u8*)(&D_01c60cf0) = 1;
        func_002fd188((u32)&D_001900c8);
    }
    v0 = func_001a4b78((u32)frame, *(u32*)(a0));
    if (((u32)frame != (u32)&D_01c60d00)) {
        *(Q16*)((u32)&D_01c60d00) = *(Q16*)((u32)frame);
    }
    *(u32*)(a0) = (u32)&D_01c60d00;
    return v0;
}

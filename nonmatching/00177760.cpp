// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0019ba60(u32, u32, u32, u32) asm("func_0019ba60");
extern "C" u32 func_001b58a8(u32, u32, u32, u32) asm("func_001b58a8");
extern "C" void func_0016cce8(u32, u32, u32, u32, u32) asm("func_0016cce8");
extern "C" void func_001b59c0(u32, u32, u32, u32) asm("func_001b59c0");

// 0x00177760 func_00177760
void func_00177760(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2YS5PARTY20_OVR_attack_callbackEPNS_6BTLOBJEPNS_6ATTACKEPKNS_11ATTACKPARAME");
void func_00177760(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s3;
    u32 loc_0;
    if (((s32)(func_001b58a8(a0, a1, a2, a3)) != 0)) {
        func_001b59c0(a0, a1, a2, a3);
    } else {
        if (((*(u32*)((a0 + 0x160)) & 0x4000) != 0)) {
            s3 = *(u32*)(((a0 + 0x140) + 0xfc));
            if ((func_0019ba60(*(u32*)(((a0 + 0x140) + 0xfc)), a1, a2, a3) != 0)) {
                if (((s32)((*(u32*)((s3 + 0x588)) & 2)) != 0)) {
                    ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(s3) + 0x74))))(s3, a1, a2, a3);
                }
            }
        }
    }
    if (((s32)(*(u32*)((a0 + 0x484))) != 0)) {
        func_0016cce8(*(u32*)((a0 + 0x484)), 0xf, (u32)&loc_0, 2, 0);
    }
    return;
}

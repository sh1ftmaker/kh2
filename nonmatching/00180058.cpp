// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00168b88(u32, u32, u32, u32, u32, u32, f32) asm("func_00168b88");
extern "C" u32 func_0017efa0(u32, u32, f32, f32) asm("func_0017efa0");
extern "C" u32 func_00180800(u32, u32) asm("func_00180800");

// 0x00180058 func_00180058
u32 func_00180058(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, f32 fa0) asm("_ZN2YS6MOTION8_captureEPNS_6BINARCEPKcfPN3ryj3PAXEPNS_3OBJEPi");
u32 func_00180058(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, f32 fa0) {
    u32 s1;
    u32 t5;
    u32 v0;
    u32 v0_0;
    s1 = 0;
    t5 = *(s8*)((a2 + 3));
    do {
        v0 = func_00168b88(a1, 0xffffffff, (*(s8*)(a2) | (*(s8*)((a2 + 3)) << 0x18)) | ((*(s8*)((a2 + 2)) << 0x10) | (*(s8*)((a2 + 1)) << 8)), s1, a4, a5, fa0);
        if ((v0 != 0)) {
            if (((s32)(*(u32*)((v0 + 8))) != 0)) {
                *(u32*)((a0 + 0x24)) = (*(u32*)((a0 + 0x24)) | 4);
                *(u32*)((a0 + 0xf0)) = a3;
                *(u32*)((a0 + 0xfc)) = a4;
                *(u32*)((a0 + 0x100)) = 0;
                func_0017efa0(a0, *(u32*)((v0 + 8)), fa0, 0.0f);
                v0_0 = func_00180800(a0, s1);
                if (((s32)(a5) != 0)) {
                    *(u32*)((a0 + 0x148)) = a5;
                    *(u32*)(a5) = (*(u32*)(a5) + 1);
                }
                return v0_0;
            }
        }
        s1 = (s1 + 1);
    } while (((s32)(s1) < (s32)(4)));
    return func_0017efa0(a0, 0, 0.0f, 0.0f);
}

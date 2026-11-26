// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_0019ba60(u32, u32, u32) asm("func_0019ba60");
extern "C" u32 func_001afe70(u32, u32, u32, u32) asm("func_001afe70");
extern "C" void func_00198630(u32, u32, u32) asm("func_00198630");

// 0x00176cd0 func_00176cd0
void func_00176cd0(u32 a0, u32 a1, u32 a2) asm("_ZN2YS5PARTY10_OVR_voiceEii");
void func_00176cd0(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    u32 s2;
    u32 s2_0;
    u32 v0;
    loc_0 = a2;
    if (((s32)(*(u32*)((a0 + 0x9b8))) != 0)) {
        if (((s32)(func_0019ba60(*(u32*)((a0 + 0x9f4)), a1, a2)) != 0)) {
            s2 = (*(u32*)((a0 + 0x9f4)) != a0) ? func_0016a070(*(u32*)((a0 + 0x9f4))) : 0;
            s2_0 = s2;
        } else {
            s2_0 = 0;
        }
        v0 = func_001afe70(func_0016a070(a0), a1, s2_0, (u32)&loc_0);
        if (((s32)(v0) >= 0)) {
            func_00198630(a0, v0, loc_0);
        }
    }
    return;
}

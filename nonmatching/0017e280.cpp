// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_0019c6f0(u32) asm("func_0019c6f0");
extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");

// 0x0017e280 YS::FRIEND::can_sacrifice_leave()
void lift_0017e280(u32 a0) asm("_ZN2YS6FRIEND19can_sacrifice_leaveEv");
void lift_0017e280(u32 a0) {
    u32 v0;
    if (((s32)(func_0019ba60(a0)) != 0)) {
        if (((*(u32*)((a0 + 0x160)) & 0x4000) == 0)) {
            if (((s32)(func_0019c6f0(a0)) == 0)) {
                while ((v0 = func_001b9bc8(0)), ((s32)(v0) != 0)) {
                    if (((s32)((*(u32*)((v0 + 0x588)) & 0x40)) != 0)) {
                        continue;
                    }
                    if ((*(u32*)((v0 + 0x570)) == a0)) {
                        return;
                    }
                }
            }
        }
    }
    return;
}

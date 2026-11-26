// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001abbf0(u32, u32, u32) asm("func_001abbf0");
extern "C" u32 func_001ac728(u32) asm("func_001ac728");
extern "C" void func_002ba2e8(u32, u32, u32) asm("func_002ba2e8");

// 0x001abe80 func_001abe80
void func_001abe80(u32 a0, u32 a1, u32 a2) asm("_ZN2YS8TURNPAGE4execEPNS_6WINDOWEPNS_3PADE");
void func_001abe80(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t7;
    t6 = *(u32*)(a0);
    if ((t6 != 1)) {
        if (((s32)(((s32)(t6) < (s32)(2))) == 0)) {
            if ((t6 != 2)) {
                return;
            } else {
                func_001abbf0(a0 + 0x15c, a1, a2);
                return;
            }
        } else {
            return;
        }
    } else {
        t7 = *(u64*)((a2 + 8));
        if (((t7 & 0x40c) != 0)) {
            func_002ba2e8(0x18, 0, a2);
            func_001ac728(a1);
            return;
        } else {
            return;
        }
    }
}

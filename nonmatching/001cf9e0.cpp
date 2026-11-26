// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016ac38(u32, u32, u32, u32, u32) asm("func_0016ac38");
extern "C" u32 func_00194108(u32, u32) asm("func_00194108");
extern "C" void func_001940f0(u32, u32) asm("func_001940f0");
extern "C" void func_001dc840(u32, u32) asm("func_001dc840");

// 0x001cf9e0 func_001cf9e0
void func_001cf9e0(u32 a0, u32 a1) asm("_ZN2YS8NMPLAYER8set_lampEi");
void func_001cf9e0(u32 a0, u32 a1) {
    u32 a1_0;
    if (((s32)(a1) != 0)) {
        if ((a1 != 1)) {
            return;
        } else {
            if ((*(u32*)((a0 + 0xba4)) == 0)) {
                *(u32*)((a0 + 0xba4)) = func_0016ac38(a0, 0xd, 1, 0, 0);
            }
            if (((s32)(*(u32*)((a0 + 0xba0))) != 0)) {
                func_001dc840(*(u32*)((a0 + 0xba0)), 1);
                *(u32*)((a0 + 0xba0)) = 0;
            }
            func_001940f0(a0, 1);
            func_00194108(a0, 2);
            return;
        }
    } else {
        if ((*(u32*)((a0 + 0xba0)) == 0)) {
            *(u32*)((a0 + 0xba0)) = func_0016ac38(a0, 0xc, 1, 0, 0);
        }
        if ((*(u32*)((a0 + 0xba4)) != 0)) {
            func_001dc840(*(u32*)((a0 + 0xba4)), a1_0);
            *(u32*)((a0 + 0xba4)) = 0;
        }
        func_001940f0(a0, 2);
        func_00194108(a0, 1);
        return;
    }
}

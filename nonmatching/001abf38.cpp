// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001abba8(u32, u32, u32) asm("func_001abba8");
extern "C" u32 func_0023ade0(u32) asm("func_0023ade0");
extern "C" void func_0023acd8(u32, u32, u32) asm("func_0023acd8");

// 0x001abf38 func_001abf38
void func_001abf38(u32 a0, u32 a1, u32 a2) asm("_ZN2YS8TURNPAGE4drawEii");
void func_001abf38(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    s0 = (a0 + 4);
    if ((*(u32*)(a0) != 1)) {
        if (((s32)(((s32)(*(u32*)(a0)) < (s32)(2))) == 0)) {
            if ((*(u32*)(a0) != 2)) {
                return;
            } else {
                func_001abba8(a0 + 0x15c, a1, a2);
                return;
            }
        } else {
            return;
        }
    } else {
        func_0023acd8(s0, a1, a2);
        *(u32*)((s0 + 0x148)) = a1;
        *(u32*)((s0 + 0x14c)) = a2;
        func_0023ade0(s0);
        return;
    }
}

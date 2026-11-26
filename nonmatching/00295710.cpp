// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00276568() asm("func_00276568");
extern "C" u32 func_00287bc0(u32) asm("func_00287bc0");
extern "C" u32 func_002956c0(u32, u32, u32) asm("func_002956c0");
extern "C" void func_00276150(u32, u32, u32) asm("func_00276150");

// 0x00295710 func_00295710
u32 func_00295710(u32 a0) asm("func_00295710");
u32 func_00295710(u32 a0) {
    u32 loc_0;
    u32 loc_4;
    u32 s0;
    u32 s0_0;
    u32 t6;
    u32 v0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    if (((s32)(((u32)((a0 + 9)) < (u32)(2))) != 0)) {
        s0 = loc_0;
        func_00276150(func_00287bc0(a0), (u32)&loc_0, (u32)&loc_4);
        s0_0 = ((a0 ^ 0xfffffff8) ? s0 : loc_4);
        t6 = *(s8*)(func_00276568());
        if ((s0_0 == 2)) {
            if (((s32)(((u32)(t6) < (u32)(0xf))) != 0)) {
                v0 = 1;
            } else {
                v0 = 0;
            }
            v0_1 = v0;
        } else {
            v0_1 = 1;
        }
        v0_3 = v0_1;
    } else {
        if (((s32)(a0) >= 0)) {
            v0_2 = func_002956c0(a0, (u32)&loc_0, (u32)&loc_4);
        } else {
            v0_2 = 0;
        }
        v0_3 = v0_2;
    }
    return v0_3;
}

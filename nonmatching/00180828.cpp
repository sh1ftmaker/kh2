// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036c5b8 asm("D_0036c5b8");
extern "C" u32 D_0036c5cc asm("D_0036c5cc");
extern "C" u32 func_0017ebc8(u32) asm("func_0017ebc8");
extern "C" u32 func_00180408(u32, u32) asm("func_00180408");
extern "C" u32 func_001a97b8(u32, u32) asm("func_001a97b8");

// 0x00180828 wtarget_00180828(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00180828(u32 a0) asm("_Z16wtarget_00180828jjjj");
void lift_00180828(u32 a0) {
    u32 s0;
    u32 s0_0;
    u32 v0;
    u32 a1_1;
    if (((s32)(*(u32*)(a0)) != 0)) {
        if (((s32)(func_0017ebc8(a0)) != 0)) {
            s0 = (u32)&D_0036c5b8;
        } else {
            s0 = (u32)&D_0036c5cc;
        }
        if (((s32)(*(u32*)(s0)) >= 0)) {
            s0_0 = (s0 + 4);
            do {
                v0 = func_001a97b8(*(u32*)(a0), *(u32*)(s0));
                if ((v0 != 0)) {
                    func_00180408(a0, v0);
                    return;
                }
                a1_1 = *(u32*)(s0_0);
                s0_0 = (s0_0 + 4);
            } while (((s32)(a1_1) >= 0));
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

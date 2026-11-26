// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0019c6f0(u32) asm("func_0019c6f0");

// 0x0019c4f8 func_0019c4f8
u32 func_0019c4f8(u32 a0) asm("_ZN2YS3OBJ13is_disable_rcEv");
u32 func_0019c4f8(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    if (((s32)((*(u32*)((a0 + 0x7f8)) & 4)) == 0)) {
        if (((*(u32*)((a0 + 0x7f8)) & 0x400) != 0)) {
            if (((*(u32*)((a0 + 0x108)) & 0x40) == 0)) {
                if (((*(u32*)((a0 + 0x160)) & 0x8000000) == 0)) {
                    if ((func_0019c6f0(a0) == 0)) {
                        if (((s32)((*(u32*)((*(u32*)((a0 + 0xc)) + 8)) & 0x2000)) != 0)) {
                            v0 = 1;
                        } else {
                            v0 = 0;
                        }
                        v0_0 = v0;
                    } else {
                        v0_0 = 1;
                    }
                    v0_1 = v0_0;
                } else {
                    v0_1 = 1;
                }
                v0_2 = v0_1;
            } else {
                v0_2 = 1;
            }
            v0_3 = v0_2;
        } else {
            v0_3 = 1;
        }
        v0_4 = v0_3;
    } else {
        v0_4 = 1;
    }
    return v0_4;
}

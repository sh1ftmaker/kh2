// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00192388(u32) asm("func_00192388");
extern "C" u32 func_00192440(u32, u32) asm("func_00192440");

// 0x00192a80 func_00192a80
u32 func_00192a80(u32 a0) asm("_ZNK2YS7MESSAGE15get_line_lengthEv");
u32 func_00192a80(u32 a0) {
    u32 s1;
    u32 v0;
    u32 v0_0;
    if (((s32)(a0) != 0)) {
        s1 = 0;
        do {
            if ((func_00192440(a0, 0) != 0)) {
                if ((*(u8*)(a0) != 9)) {
                    if (((s32)(((s32)(*(u8*)(a0)) < (s32)(0xa))) != 0)) {
                        if ((*(u8*)(a0) == 2)) {
                            return s1;
                        }
                    } else {
                        if ((*(u8*)(a0) == 0x10)) {
                            return s1;
                        }
                    }
                } else {
                    s1 = (s1 + 1);
                }
            } else {
                s1 = (s1 + 1);
            }
            v0 = func_00192388(a0);
            a0 = v0;
        } while (((s32)(v0) != 0));
        v0_0 = s1;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}

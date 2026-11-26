// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002eb6f8(u32, u32) asm("func_002eb6f8");

// 0x002eb9d8 func_002eb9d8
void func_002eb9d8(u32 a0, u32 a1, u32 a2) asm("_ZN2Ts17ACTION_SKATEBOARD13change_motionEPN2YS3OBJEif");
void func_002eb9d8(u32 a0, u32 a1, u32 a2) {
    if (((s32)((*(u32*)((a1 + 0x160)) & 4)) == 0)) {
        if (((s32)((*(u32*)((a1 + 0x160)) & 0x10)) != 0)) {
            if ((a2 != 0xfc)) {
                if ((*(u32*)(((a1 + 0x140) + 0x14)) != a2)) {
                    func_002eb6f8(a1, a2);
                    return;
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        if ((*(u32*)(((a1 + 0x140) + 0x14)) != a2)) {
            func_002eb6f8(a1, a2);
            return;
        } else {
            return;
        }
    }
}

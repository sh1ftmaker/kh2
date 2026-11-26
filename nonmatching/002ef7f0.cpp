// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003638c8 asm("D_003638c8");
extern "C" u32 func_002ef7a0(u32, u32) asm("func_002ef7a0");
extern "C" u32 func_002ef7b8(u32) asm("func_002ef7b8");

// 0x002ef7f0 func_002ef7f0
void func_002ef7f0(u32 a0) asm("func_002ef7f0");
void func_002ef7f0(u32 a0) {
    if ((func_002ef7b8(a0) != 0)) {
        if (((s32)(a0) != 0)) {
            if (((s32)(((s32)((*(u8*)(&D_003638c8) << 0x18)) >> 0x18)) == 0)) {
                func_002ef7a0(3, 0);
            }
            *(u8*)(&D_003638c8) = (*(u8*)(&D_003638c8) + 1);
            return;
        } else {
            if (((s32)(((s32)((*(u8*)(&D_003638c8) << 0x18)) >> 0x18)) != 0)) {
                *(u8*)(&D_003638c8) = (*(u8*)(&D_003638c8) + -1);
                if (((s32)(((s32)(((*(u8*)(&D_003638c8) + -1) << 0x18)) >> 0x18)) == 0)) {
                    func_002ef7a0(4, 0);
                    return;
                } else {
                    return;
                }
            } else {
                return;
            }
        }
    } else {
        return;
    }
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0019aec0(u32, u32) asm("func_0019aec0");

// 0x0019ae60 func_0019ae60
void func_0019ae60(u32 a0) asm("_ZN2YS10UNIT_GROUP7levelupEv");
void func_0019ae60(u32 a0) {
    if (((u32)((*(u8*)((a0 + 0x20)) & 0xff)) < (u32)(0xc8))) {
        *(u8*)((a0 + 0x20)) = (*(u8*)((a0 + 0x20)) + 1);
        if (((s32)(*(u8*)((*(u32*)((a0 + 8)) + 0x23))) != 0)) {
            if (((s32)(((u32)(((*(u8*)((a0 + 0x20)) + 1) & 0xff)) < (u32)(*(u8*)((*(u32*)((a0 + 8)) + 0x23))))) == 0)) {
                func_0019aec0(a0, *(u8*)((*(u32*)((a0 + 8)) + 0x24)));
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
}

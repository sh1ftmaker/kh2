// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001671e8(u32, u32) asm("func_001671e8");
extern "C" u32 func_00167218() asm("func_00167218");
extern "C" u32 func_00227ca8(u32) asm("func_00227ca8");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");

// 0x0022cea0 func_0022cea0
u32 func_0022cea0(u32 a0) asm("_ZN2sa5EVENT17set_bin_seq_focusERNS_13BIN_SEQ_FOCUSEP4TASK");
u32 func_0022cea0(u32 a0) {
    u32 v0;
    u32 s0;
    v0 = func_002282f0(*(s16*)((a0 + 4)));
    if (((s32)(v0) == 0)) {
        if ((*(u8*)((a0 + 6)) == 0)) {
            s0 = *(u8*)((a0 + 7));
            return func_001671e8(func_00227ca8(a0 + 8), (u32)(s0) < (u32)(1));
        } else {
            return func_00167218();
        }
    } else {
        return v0;
    }
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00227c78(u32) asm("func_00227c78");
extern "C" u32 func_0014a7f8(u32) asm("func_0014a7f8");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" void func_0014a768(u32) asm("func_0014a768");
extern "C" void func_0014a788(u32, u32) asm("func_0014a788");
extern "C" void func_0014a7b8(u32, f32) asm("func_0014a7b8");
extern "C" void func_0014a7e8(u32) asm("func_0014a7e8");

// 0x0022cd48 sa::EVENT::set_bin_seq_blur(sa::BIN_SEQ_BLUR&, TASK*)
u32 lift_0022cd48(u32 a0) asm("_ZN2sa5EVENT16set_bin_seq_blurERNS_12BIN_SEQ_BLUREP4TASK");
u32 lift_0022cd48(u32 a0) {
    u32 v0;
    v0 = func_002282f0(*(s16*)((a0 + 4)));
    if (((s32)(v0) == 0)) {
        if ((*(u8*)((a0 + 6)) == 0)) {
            func_0014a768(*(u8*)((a0 + 7)));
            func_0014a788(((s32)(*(s16*)((a0 + 0xc))) >> 1) & 0xffff, ((s32)(*(s16*)((a0 + 0xe))) >> 1) & 0xffff);
            if (!((func_00227c78(a0 + 8) == 0.0f))) {
                func_0014a7b8(*(s16*)((a0 + 0x10)), func_00227c78(a0 + 8));
            }
            func_0014a7e8(1);
        }
        return func_0014a7f8(1);
    } else {
        return v0;
    }
}

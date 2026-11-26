// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035db18 asm("D_0035db18");
extern "C" u32 func_00224e90(u32, u32) asm("func_00224e90");
extern "C" u32 func_00225640(u32, u32, u32) asm("func_00225640");
extern "C" u32 func_00227870(u32, u32, u32) asm("func_00227870");

// 0x002256c8 func_002256c8
u32 func_002256c8(u32 a0, u32 a1) asm("_ZN2sa5EVENT13read_bgm_dataERNS_12BIN_BGM_DATAEP4TASK");
u32 func_002256c8(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    if (((s32)(func_00224e90(a0, a1)) == 0)) {
        if ((*(u32*)(&D_0035db18) != 0x400000)) {
            v0 = func_00227870(a1, a0, 0);
            *(u32*)((a0 + 0x14)) = v0;
            v0_1 = v0;
        } else {
            v0_0 = func_00225640(a1, a0, 0);
            *(u32*)((a0 + 0x14)) = v0_0;
            v0_1 = v0_0;
        }
        v0_3 = v0_1;
    } else {
        v0_2 = func_00227870(a1, a0, 0);
        *(u32*)((a0 + 0x14)) = v0_2;
        v0_3 = v0_2;
    }
    return v0_3;
}

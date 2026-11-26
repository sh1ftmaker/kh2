// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_0027e920() asm("func_0027e920");

// 0x002630d8 func_002630d8
void func_002630d8() asm("_ZN2Tz6CmItem14isExistUseListEv");
void func_002630d8() {
    u32 v0;
    v0 = func_00257770();
    if (((s32)(func_00139d78(v0 + 0x198)) == 0)) {
        if (((s32)(func_00139d78(v0 + 0x814)) == 0)) {
            if ((func_00139d78(v0 + 0x4c8) == 0)) {
                if (((s32)(func_0028acc8(*(u32*)(&D_0035f020))) == 0)) {
                    if (((s32)(func_0028acc8(*(u32*)(&D_0035f024))) == 0)) {
                        func_0027e920();
                    }
                }
            }
        }
    }
    return;
}

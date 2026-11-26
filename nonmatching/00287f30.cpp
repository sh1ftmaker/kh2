// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f324 asm("D_0035f324");
extern "C" void func_00106420() asm("func_00106420");

// 0x00287f30 func_00287f30
void func_00287f30() asm("_ZN2Tz8MenuBase11SavePadExitEv");
void func_00287f30() {
    u8 frame[16];
    u32 t6;
    u32 t7;
    u32 sp;
    u32 sp_0;
    if (((s32)(*(u32*)(&D_0035f324)) != 0)) {
        if ((*(u32*)(&D_0035f324) != 0xffffffe0)) {
            t6 = (*(u32*)(&D_0035f324) + 0x20);
            t7 = (*(u32*)(&D_0035f324) + 0x40);
            do {
                t7 = (t7 + -0x10);
            } while ((t6 != t7));
        } else {
            sp = (u32)frame;
        }
        func_00106420();
        *(u32*)(&D_0035f324) = 0;
        sp_0 = sp;
    } else {
        sp_0 = (u32)frame;
    }
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f480 asm("D_0035f480");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028d6e8(u32) asm("func_0028d6e8");
extern "C" void func_00139510(u32) asm("func_00139510");

// 0x0028f878 Tz::SelHist::LeaveAll()
void lift_0028f878() asm("_ZN2Tz7SelHist8LeaveAllEv");
void lift_0028f878() {
    u32 s2;
    u32 s0;
    u32 s2_0;
    if (((s32)(*(u32*)(&D_0035f480)) != 0)) {
        s2 = 0;
        s0 = 0;
        do {
            if (((s32)(func_00139d78(*(u32*)(&D_0035f480) + s0)) != 0)) {
                func_00139510(*(u32*)(&D_0035f480) + s0);
            }
            *(u32*)(((s0 + *(u32*)(&D_0035f480)) + 0x370)) = 0;
            if ((func_0028d6e8((*(u32*)(&D_0035f480) + s0) + 0x1b4) != 0)) {
                func_00139510((*(u32*)(&D_0035f480) + s0) + 0x1b4);
            }
            s2_0 = (s2 + 1);
            s0 = (s0 + 0x374);
            s2 = s2_0;
        } while (((s32)(((s32)(s2_0) < (s32)(4))) != 0));
    }
    return;
}

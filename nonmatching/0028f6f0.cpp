// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f480 asm("D_0035f480");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028d5d0(u32) asm("func_0028d5d0");
extern "C" u32 func_0028f690(u32) asm("func_0028f690");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x0028f6f0 Tz::SelHist::FadeOut(int)
u32 lift_0028f6f0(u32 a0) asm("_ZN2Tz7SelHist7FadeOutEi");
u32 lift_0028f6f0(u32 a0) {
    u32 s2;
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)(&D_0035f480)) != 0)) {
        s2 = (a0 * 0x374);
        v0 = func_00139d78(*(u32*)(&D_0035f480) + s2);
        if (((s32)(v0) != 0)) {
            v0_0 = func_0028f690(a0);
            if ((*(u32*)(((*(u32*)(&D_0035f480) + s2) + 0x184)) != *(s16*)((v0_0 + 2)))) {
                func_00138c10(*(u32*)(&D_0035f480) + s2, *(s16*)((v0_0 + 2)));
                *(u32*)(((*(u32*)(&D_0035f480) + s2) + 0x188)) = 0xffffffff;
                return func_0028d5d0((*(u32*)(&D_0035f480) + s2) + 0x1b4);
            } else {
                return v0_0;
            }
        } else {
            return v0;
        }
    } else {
        return;
    }
}

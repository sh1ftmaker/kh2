// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_0035f280 asm("D_0035f280");
extern "C" u32 D_0035f294 asm("D_0035f294");
extern "C" u32 D_0035f298 asm("D_0035f298");
extern "C" u32 func_001688b8() asm("func_001688b8");
extern "C" u32 func_00292a90(u32) asm("func_00292a90");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");
extern "C" u32 func_003142e0(u32, u32) asm("func_003142e0");
extern "C" void func_00292b40(u32, u32) asm("func_00292b40");

// 0x00281d48 func_00281d48
void func_00281d48() asm("_ZN2Tz11ItemPicDraw12ChkLoadEntryEv");
void func_00281d48() {
    if (!((*(f32*)(&D_0035f294) <= 0.0f))) {
        if ((0.0f < *(f32*)(&D_0035f294))) {
            *(f32*)(&D_0035f294) = (*(f32*)(&D_0035f294) - *(f32*)(&D_00349e10));
        }
        if (((s32)(func_003142e0(func_00313b80(*(f32*)(&D_0035f294)), 0)) < 0)) {
            *(f32*)(&D_0035f294) = 0.0f;
        }
        if (((s32)(func_003142e0(func_00313b80(*(f32*)(&D_0035f294)), 0)) <= 0)) {
            if (((s32)(func_001688b8()) == 0)) {
                if (((s32)(func_00292a90(*(s16*)(&D_0035f280))) == 0)) {
                    func_00292b40((u32)&D_0035f280, 1);
                }
                *(u8*)(&D_0035f298) = 1;
            }
        }
    }
    return;
}

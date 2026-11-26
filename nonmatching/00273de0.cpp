// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 func_00257070(u32, u8) asm("func_00257070");
extern "C" u32 func_00281100(u32) asm("func_00281100");
extern "C" u32 func_00281140(u32, u32) asm("func_00281140");
extern "C" void func_00257050(u32, u32, u32) asm("func_00257050");
extern "C" void func_0028fb68(u32, u32) asm("func_0028fb68");

// 0x00273de0 Tz::Jiminy::Init()
void lift_00273de0(u8 a0, u8 a1) asm("_ZN2Tz6Jiminy4InitEv");
void lift_00273de0(u8 a0, u8 a1) {
    u32 s1;
    u32 v0;
    u32 s1_0;
    s1 = func_00257070(0x19, a1);
    v0 = func_00281100(*(u32*)(&D_0035f010));
    if (((s32)(a0) != 0)) {
        if (((s32)((s1 + 1)) < (s32)(v0))) {
            s1_0 = (s1 + 1);
        } else {
            s1_0 = 0;
        }
        s1 = s1_0;
    } else {
        s1 = (((s32)((s1 + -1)) < (s32)(0)) ? (v0 + -1) : (s1 + -1));
    }
    if (((s32)(a1) != 0)) {
        func_00257050(0x19, s1, 0);
        func_0028fb68(1, func_00281140(*(u32*)(&D_0035f010), s1));
    }
    return;
}

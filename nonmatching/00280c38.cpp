// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f250 asm("D_0035f250");
extern "C" u32 D_0035f254 asm("D_0035f254");
extern "C" u32 D_0035f258 asm("D_0035f258");
extern "C" u32 D_00374178 asm("D_00374178");
extern "C" u32 func_001040f8() asm("func_001040f8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_00287da0() asm("func_00287da0");

// 0x00280c38 Tz::GumiGameOver::Control()
u32 lift_00280c38() asm("_ZN2Tz12GumiGameOver7ControlEv");
u32 lift_00280c38() {
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    u32 s1;
    u32 t7_2;
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f250))) == 0)) {
            if (((s32)(func_00139d78(*(u32*)(&D_0035f258))) == 0)) {
                if (((s32)(func_0028acc8(*(u32*)(&D_0035f254))) == 0)) {
                    ((void(*)())(*(u32*)((func_001040f8() + 4))))();
                    func_001039f8();
                    t7 = 1;
                } else {
                    t7 = 0;
                }
                t7_0 = t7;
            } else {
                t7_0 = 0;
            }
            t7_1 = t7_0;
        } else {
            t7_1 = 0;
        }
        t7_2 = t7_1;
    } else {
        s1 = func_00289380(*(u32*)(&D_0035f254));
        if (((s32)(func_00242848(func_00287df0(s1, func_00289310(*(u32*)(&D_0035f254)), 0, 0, 1))) == 0)) {
            if ((s1 != 0xffffffff)) {
                *(u8*)((func_001040f8() + 3)) = *(u8*)((s1 + (u32)&D_00374178));
                func_00287da0();
            }
        }
        t7_2 = 0;
    }
    return t7_2;
}

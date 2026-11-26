// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed20 asm("D_0035ed20");
extern "C" u32 D_0035ed24 asm("D_0035ed24");
extern "C" u32 D_0035ed28 asm("D_0035ed28");
extern "C" u32 D_0035ed2c asm("D_0035ed2c");
extern "C" u32 D_0035ed30 asm("D_0035ed30");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_00245eb8() asm("func_00245eb8");
extern "C" void func_00246070() asm("func_00246070");
extern "C" void func_00246708() asm("func_00246708");
extern "C" void func_00246f80() asm("func_00246f80");
extern "C" void func_00287d68() asm("func_00287d68");

// 0x00245dd0 Tz::HECO::Control()
u32 lift_00245dd0() asm("_ZN2Tz4HECO7ControlEv");
u32 lift_00245dd0() {
    u32 s0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    s0 = func_00287bc0();
    func_00287d68();
    func_00246708();
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_0028acc8(*(u32*)(&D_0035ed20))) == 0)) {
            if (((s32)(func_0028acc8(*(u32*)(&D_0035ed24))) == 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035ed28))) == 0)) {
                    if (((s32)(func_00139d78(*(u32*)(&D_0035ed2c))) == 0)) {
                        if (((s32)(func_00139d78(*(u32*)(&D_0035ed30))) == 0)) {
                            func_00246f80();
                            func_001039f8();
                            v0 = 1;
                        } else {
                            v0 = 0;
                        }
                        v0_0 = v0;
                    } else {
                        v0_0 = 0;
                    }
                    v0_1 = v0_0;
                } else {
                    v0_1 = 0;
                }
                v0_2 = v0_1;
            } else {
                v0_2 = 0;
            }
            v0_3 = v0_2;
        } else {
            v0_3 = 0;
        }
        v0_4 = v0_3;
    } else {
        if (((s32)(s0) != 0)) {
            if ((s0 == 1)) {
                func_00246070();
            }
        } else {
            func_00245eb8();
        }
        v0_4 = 0;
    }
    return v0_4;
}

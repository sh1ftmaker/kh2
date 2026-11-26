// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f650 asm("D_0035f650");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_0025d560() asm("func_0025d560");
extern "C" u32 func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" u32 func_00287c00(u32) asm("func_00287c00");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028abe0(u32) asm("func_0028abe0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028ae28(u32, u32) asm("func_0028ae28");
extern "C" void func_0025ccc0() asm("func_0025ccc0");
extern "C" void func_00287c30() asm("func_00287c30");
extern "C" void func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_00287f90(u32) asm("func_00287f90");
extern "C" void func_0028aa40(u32) asm("func_0028aa40");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");

// 0x0025caf0 func_0025caf0
void func_0025caf0() asm("_ZN2Tz6CmSave15CtrlWMapConfirmEv");
void func_0025caf0() {
    u32 s0;
    u32 v0;
    s0 = func_00289380(*(u32*)(&D_0035f650));
    v0 = func_00287cd0();
    if ((v0 == 2)) {
        if (((s32)(func_0028acc8(*(u32*)(&D_0035f650))) != 0)) {
            if ((s0 == 0xffffffff)) {
                if (((s32)(func_00289310(*(u32*)(&D_0035f650))) != 0)) {
                    func_00287f90(0);
                    func_0028abe0(*(u32*)(&D_0035f650));
                    return;
                } else {
                    return;
                }
            } else {
                func_00287f90(0);
                func_0028abe0(*(u32*)(&D_0035f650));
                return;
            }
        } else {
            func_00287c30();
            func_0025d560();
            return;
        }
    } else {
        if ((s0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035f650))) != 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035f650), 0)) == 0)) {
                func_0028ab20(*(u32*)(&D_0035f650));
            }
        }
        if (((s32)(v0) == 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035f650), 0)) != 0)) {
                func_00287cc0(1);
            }
        }
        if ((func_00242848(func_00287df0(s0, func_00289310(*(u32*)(&D_0035f650)), 1, 0, 1)) == 0)) {
            if ((s0 != 0xffffffff)) {
                if (((s32)(s0) < 0)) {
                    if ((s0 == 0xfffffffe)) {
                        func_0028aa40(*(u32*)(&D_0035f650));
                        func_00287cc0(2);
                        func_00287c00(0);
                        return;
                    } else {
                        return;
                    }
                } else {
                    if (((s32)(s0) != 0)) {
                        if ((s0 == 1)) {
                            func_0025ccc0();
                            func_00287bd0(0x17, 0);
                            return;
                        } else {
                            return;
                        }
                    } else {
                        func_0028aa40(*(u32*)(&D_0035f650));
                        func_00287cc0(2);
                        func_00287c00(0);
                        return;
                    }
                }
            } else {
                return;
            }
        } else {
            return;
        }
    }
}

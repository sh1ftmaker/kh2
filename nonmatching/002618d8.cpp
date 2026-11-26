// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_002575a8() asm("func_002575a8");
extern "C" u32 func_00257610(u32) asm("func_00257610");
extern "C" u32 func_002576d0() asm("func_002576d0");
extern "C" u32 func_0025ffd0() asm("func_0025ffd0");
extern "C" u32 func_00260808() asm("func_00260808");
extern "C" u32 func_00262cb8() asm("func_00262cb8");
extern "C" u32 func_00262e30() asm("func_00262e30");
extern "C" u32 func_002632d0(u32) asm("func_002632d0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287c00(u32) asm("func_00287c00");
extern "C" u32 func_00287c10() asm("func_00287c10");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_001a3458(u32, u32) asm("func_001a3458");
extern "C" void func_00257530(u32) asm("func_00257530");
extern "C" void func_00257670(u32) asm("func_00257670");
extern "C" void func_00262c40() asm("func_00262c40");
extern "C" void func_00287c30() asm("func_00287c30");
extern "C" void func_00287c90(u32) asm("func_00287c90");
extern "C" void func_00287f90(u32) asm("func_00287f90");

// 0x002618d8 Tz::CmItem::CtrlItemDumpConfirm()
u32 lift_002618d8() asm("_ZN2Tz6CmItem19CtrlItemDumpConfirmEv");
u32 lift_002618d8() {
    u32 s1;
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 s0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    s1 = func_00289380(*(u32*)(&D_0035f024));
    v0 = func_00287cd0();
    if ((v0 == 2)) {
        s0 = func_00287c10();
        v0_0 = func_002576d0();
        if (((s32)(v0_0) == 0)) {
            if ((s0 == 0xa)) {
                v0_1 = func_00262e30();
                v0_0 = v0_1;
            }
            if (((s32)(v0_0) != 0)) {
                if ((s1 == 0xffffffff)) {
                    v0_2 = func_00289310(*(u32*)(&D_0035f024));
                    if ((v0_2 != 0)) {
                        func_00287f90(0);
                        v0_3 = func_002575a8();
                        if ((s0 == 0xa)) {
                            return func_00262cb8();
                        } else {
                            return v0_3;
                        }
                    } else {
                        return v0_2;
                    }
                } else {
                    func_00287f90(0);
                    v0_4 = func_002575a8();
                    if ((s0 == 0xa)) {
                        return func_00262cb8();
                    } else {
                        return v0_4;
                    }
                }
            } else {
                func_00287c30();
                s0_5 = func_00287bc0();
                v0_6 = func_0028af18(*(u32*)(&D_0035f024), 0x73);
                if ((s0_5 == 0xa)) {
                    return func_0025ffd0();
                } else {
                    if ((s0_5 == 0xb)) {
                        return func_00260808();
                    } else {
                        return v0_6;
                    }
                }
            }
        } else {
            if ((s1 == 0xffffffff)) {
                v0_7 = func_00289310(*(u32*)(&D_0035f024));
                if ((v0_7 != 0)) {
                    func_00287f90(0);
                    v0_8 = func_002575a8();
                    if ((s0 == 0xa)) {
                        return func_00262cb8();
                    } else {
                        return v0_8;
                    }
                } else {
                    return v0_7;
                }
            } else {
                func_00287f90(0);
                v0_9 = func_002575a8();
                if ((s0 == 0xa)) {
                    return func_00262cb8();
                } else {
                    return v0_9;
                }
            }
        }
    } else {
        if ((s1 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035f024))) != 0)) {
            if (((s32)(func_00257610(0)) == 0)) {
                func_00257670(0);
            }
        }
        if (((s32)(v0) == 0)) {
            if (((s32)(func_00257610(0)) != 0)) {
                func_00287c90(1);
            }
        }
        v0_10 = func_00242848(func_00287df0(s1, func_00289310(*(u32*)(&D_0035f024)), 0, 0, 1));
        if (((s32)(v0_10) == 0)) {
            v0_11 = (s1 + 4);
            switch (v0_11) {
            case 0:
            case 1:
            case 3:
                return v0_11;
            case 2:
            case 4:
                func_00257530(0);
                func_00287c90(1);
                return func_00287c00(0xb);
            case 5:
                func_001a3458(*(u16*)(func_002632d0(func_002570a0(0xa))), 0x64);
                func_00257530(0);
                func_00262c40();
                func_00287c90(1);
                return func_00287c00(0xa);
            default:
                return v0_11;
            }
        } else {
            return v0_10;
        }
    }
}

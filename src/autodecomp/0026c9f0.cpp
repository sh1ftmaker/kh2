// coverage: addr=0x0026c9f0 symbol=_ZN2Tz7CmParty8CtrlInfoEv size=324 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:85.6;m2c:near:51.62
#include "common/types.h"

extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_00257610(u32) asm("func_00257610");
extern "C" u32 func_0026d180() asm("func_0026d180");
extern "C" u32 func_00287c90(u32) asm("func_00287c90");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_0026c048() asm("func_0026c048");
extern "C" void func_0026c470() asm("func_0026c470");
extern "C" void func_0026d168() asm("func_0026d168");
extern "C" void func_00287c00(u32) asm("func_00287c00");
extern "C" void func_00287c30() asm("func_00287c30");

// 0x0026c9f0 Tz::CmParty::CtrlInfo()
void lift_0026c9f0() asm("_ZN2Tz7CmParty8CtrlInfoEv");
void lift_0026c9f0() {
    u32 s1;
    u32 s0;
    s1 = func_00289380(*(u32*)(&D_0035f024));
    s0 = func_00287cd0();
    func_0026c470();
    if ((s0 == 2)) {
        if (((s32)(func_0026d180()) == 0)) {
            func_00287c30();
            func_0026c048();
            func_0028af18(*(u32*)(&D_0035f024), 0x73);
            return;
        } else {
            return;
        }
    } else {
        if (((s32)(s0) == 0)) {
            if (((s32)(func_00257610(1)) != 0)) {
                func_00287c90(1);
            }
        }
        if ((s0 == 1)) {
            if ((func_00242848(func_00287df0(s1, func_00289310(*(u32*)(&D_0035f024)), 0, 0, 1)) == 0)) {
                if ((s1 != 0xfffffffe)) {
                    if (((s32)(((s32)(s1) < (s32)(-1))) == 0)) {
                        if ((s1 != 0xffffffff)) {
                            if (((s32)(s1) == 0)) {
                                func_0026d168();
                                func_00287c00(0x14);
                                func_00287c90(1);
                                return;
                            } else {
                                return;
                            }
                        } else {
                            return;
                        }
                    } else {
                        return;
                    }
                } else {
                    func_0026d168();
                    func_00287c00(0x14);
                    func_00287c90(1);
                    return;
                }
            } else {
                return;
            }
        } else {
            return;
        }
    }
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 D_0035f128 asm("D_0035f128");
extern "C" u32 D_0035f130 asm("D_0035f130");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_00257610(u32) asm("func_00257610");
extern "C" u32 func_002576d0() asm("func_002576d0");
extern "C" u32 func_00287c00(u32) asm("func_00287c00");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" void func_00257530(u32) asm("func_00257530");
extern "C" void func_002575a8() asm("func_002575a8");
extern "C" void func_00271ee8() asm("func_00271ee8");
extern "C" void func_00273818() asm("func_00273818");
extern "C" void func_00287bc0() asm("func_00287bc0");
extern "C" void func_00287c30() asm("func_00287c30");
extern "C" void func_00287c90(u32) asm("func_00287c90");

// 0x0026ff78 Tz::CmCustom::CtrlAutoConfirm()
void lift_0026ff78() asm("_ZN2Tz8CmCustom15CtrlAutoConfirmEv");
void lift_0026ff78() {
    u32 s0;
    u32 s1;
    u32 v0;
    u32 t7;
    s0 = func_00287cd0();
    func_00287bc0();
    if ((s0 == 2)) {
        if (((s32)(func_002576d0()) == 0)) {
            func_002575a8();
            func_00287c30();
            func_00287cc0(1);
            return;
        } else {
            return;
        }
    } else {
        if (((s32)(s0) == 0)) {
            if (((s32)(func_00257610(0)) != 0)) {
                func_00287c90(1);
            }
        }
        if ((s0 == 1)) {
            s1 = func_00289380(*(u32*)(&D_0035f024));
            if ((func_00242848(func_00287df0(s1, func_00289310(*(u32*)(&D_0035f024)), 0, 0, 1)) == 0)) {
                v0 = (s1 + 4);
                switch (v0) {
                case 2:
                case 4:
                    func_00257530(0);
                    func_00287cc0(2);
                    func_00287c00(*(s8*)(&D_0035f130));
                    return;
                case 5:
                    t7 = (*(u8*)(&D_0035f130) + -0x1a);
                    if (((s32)(((u32)(t7) < (u32)(2))) != 0)) {
                        func_00273818();
                        func_00271ee8();
                    }
                    *(u8*)(&D_0035f128) = 1;
                    func_00257530(0);
                    func_00287cc0(2);
                    func_00287c00(*(s8*)(&D_0035f130));
                    return;
                case 0:
                case 1:
                case 3:
                default:
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

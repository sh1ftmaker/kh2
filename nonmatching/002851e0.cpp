// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2c8 asm("D_0035f2c8");
extern "C" u32 D_0035f2dc asm("D_0035f2dc");
extern "C" u32 D_0035f2e0 asm("D_0035f2e0");
extern "C" u32 D_00374380 asm("D_00374380");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" u32 func_0028d5d0(u32) asm("func_0028d5d0");
extern "C" u32 func_0028d660(u32, u32) asm("func_0028d660");
extern "C" u32 func_0028d6e8(u32) asm("func_0028d6e8");
extern "C" void func_00289038(u32, u32, u32, u32, u32, u32, u32) asm("func_00289038");
extern "C" void func_002890e0(u32, u32, u32, u32, u32) asm("func_002890e0");
extern "C" void func_0028cc78(u32, u32, u32, u32, u32, u32) asm("func_0028cc78");
extern "C" void func_0028ce38() asm("func_0028ce38");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");
extern "C" void func_0028d1c0(u32, u32, u32, u32, u32, u32, u32) asm("func_0028d1c0");

// 0x002851e0 Tz::Ending::Draw()
void lift_002851e0() asm("_ZN2Tz6Ending4DrawEv");
void lift_002851e0() {
    u32 s0;
    u32 v0;
    u32 s0_0;
    s0 = (func_00287bc0() + -1);
    v0 = func_00287cd0();
    if (((s32)(((u32)(s0) < (u32)(2))) != 0)) {
        if ((v0 == 1)) {
            if (((s32)(func_0028d008(0)) == 0)) {
                func_0028cc78(0, 0, 0, *(u32*)(&D_0035f2c8), 8, 8);
                func_0028cf28(0, func_002891d0(*(u32*)(&D_0035f2dc)));
                if (((s32)(func_0028d6e8(*(u32*)(&D_0035f2e0))) == 0)) {
                    func_0028d1c0(*(u32*)(&D_0035f2e0), 0x754a, 0, 0, *(u32*)(&D_0035f2c8), (u32)&D_00374380, 0);
                    func_0028d660(*(u32*)(&D_0035f2e0), func_002891d0(*(u32*)(&D_0035f2dc)));
                }
            }
            if (((s32)(func_00289310(*(u32*)(&D_0035f2dc))) != 0)) {
                s0_0 = func_002891e8(*(u32*)(&D_0035f2dc));
                func_002890e0(*(u32*)(&D_0035f2dc), 1, 2, 0, 0xffffffff);
                func_00289038(*(u32*)(&D_0035f2dc), s0_0, 1, 1, 2, 0, 0xffffffff);
                if (((s32)(func_0028d008(0)) != 0)) {
                    func_0028cf28(0, func_002891d0(*(u32*)(&D_0035f2dc)));
                }
                if ((func_0028d6e8(*(u32*)(&D_0035f2e0)) != 0)) {
                    func_0028d660(*(u32*)(&D_0035f2e0), func_002891d0(*(u32*)(&D_0035f2dc)));
                    return;
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            if ((v0 == 2)) {
                if (((s32)(func_0028d008(0)) != 0)) {
                    func_0028ce38();
                    func_0028d5d0(*(u32*)(&D_0035f2e0));
                    return;
                } else {
                    return;
                }
            } else {
                return;
            }
        }
    } else {
        return;
    }
}

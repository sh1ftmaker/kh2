// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0024a150 asm("D_0024a150");
extern "C" u32 D_0024b1f8 asm("D_0024b1f8");
extern "C" u32 D_0035ed70 asm("D_0035ed70");
extern "C" u32 D_0035ed94 asm("D_0035ed94");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287da0() asm("func_00287da0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028ae28(u32, u32) asm("func_0028ae28");
extern "C" void func_002426a0(u32) asm("func_002426a0");
extern "C" void func_00249ef0() asm("func_00249ef0");
extern "C" void func_0024a048() asm("func_0024a048");
extern "C" void func_0024abb0() asm("func_0024abb0");
extern "C" void func_0024aef0() asm("func_0024aef0");
extern "C" void func_002535b0(u32) asm("func_002535b0");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287c90(u32) asm("func_00287c90");
extern "C" void func_00288658(u32, u32) asm("func_00288658");
extern "C" void func_00288670(u32) asm("func_00288670");

// 0x0024a348 func_0024a348
void func_0024a348() asm("_ZN2Tz4TRTE7CtrlTopEv");
void func_0024a348() {
    u32 s2;
    u32 v0;
    u32 v0_0;
    s2 = func_00287cd0();
    v0 = func_00289380(*(u32*)(&D_0035ed70));
    if (((s32)(*(u8*)(&D_0035ed94)) == 0)) {
        if ((v0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035ed70))) != 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035ed70), 0)) == 0)) {
                func_002426a0(0);
                func_0024a048();
            }
        }
        if (((s32)(s2) == 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035ed70), 0)) != 0)) {
                func_00287c90(1);
                func_0024aef0();
            }
        }
        if ((func_00242848(func_00287df0(v0, func_00289310(*(u32*)(&D_0035ed70)), 1, (u32)&D_0024b1f8, 1)) == 0)) {
            v0_0 = (v0 + 6);
            switch (v0_0) {
            case 0:
                func_0024abb0();
                func_002535b0(3);
                func_00288658(2, 0x68);
                func_00288670((u32)&D_0024a150);
                func_00287da0();
                return;
            case 2:
            case 4:
                func_00287da0();
                return;
            case 6:
            case 7:
            case 8:
                func_00249ef0();
                func_00287bd0(1, 0);
                func_00287cc0(0);
                return;
            case 1:
            case 3:
            case 5:
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

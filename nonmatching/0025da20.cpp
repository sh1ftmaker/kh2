// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f650 asm("D_0035f650");
extern "C" u32 D_0035f664 asm("D_0035f664");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00233e60() asm("func_00233e60");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_002b55e0() asm("func_002b55e0");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_00233e70(u32) asm("func_00233e70");
extern "C" void func_0025dbd8() asm("func_0025dbd8");
extern "C" void func_0025dde8() asm("func_0025dde8");
extern "C" void func_0025dfb0() asm("func_0025dfb0");
extern "C" void func_0025e370() asm("func_0025e370");
extern "C" void func_0025e450() asm("func_0025e450");
extern "C" void func_0025e8a0() asm("func_0025e8a0");
extern "C" void func_0025ebb0() asm("func_0025ebb0");
extern "C" void func_0025ee88() asm("func_0025ee88");
extern "C" void func_0025f550() asm("func_0025f550");
extern "C" void func_00287d68() asm("func_00287d68");
extern "C" void func_002b5af0() asm("func_002b5af0");
extern "C" void func_002b6418() asm("func_002b6418");

// 0x0025da20 Tz::CmLoad::Control()
u32 lift_0025da20() asm("_ZN2Tz6CmLoad7ControlEv");
u32 lift_0025da20() {
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    u32 v0;
    u32 v0_3;
    u32 t7_4;
    func_00287d68();
    func_002b6418();
    if ((func_00287db0() != 0)) {
        func_00233e70(0);
        if (((s32)(func_00233e60()) != 0)) {
            if (((s32)(func_00139d78(*(u32*)(&D_0035f664))) == 0)) {
                if (((s32)(func_002b55e0()) == 0)) {
                    if (((s32)(func_0028acc8(*(u32*)(&D_0035f650))) == 0)) {
                        func_002b5af0();
                        func_0025f550();
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
            t7_2 = 0;
        }
        t7_4 = t7_2;
    } else {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f664))) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035f664)) == 1)) {
                v0 = func_00287bc0();
                switch (v0) {
                case 1:
                    func_0025dbd8();
                    break;
                case 2:
                    func_0025dde8();
                    break;
                case 4:
                    func_0025e450();
                    break;
                case 5:
                case 7:
                    func_0025dfb0();
                    break;
                case 11:
                    func_0025e370();
                    break;
                case 12:
                    func_0025e8a0();
                    break;
                case 18:
                    func_0025ebb0();
                    break;
                case 23:
                    func_0025ee88();
                    break;
                case 0:
                case 3:
                case 6:
                case 8:
                case 9:
                case 10:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 19:
                case 20:
                case 21:
                case 22:
                default:
                    break;
                }
            }
        } else {
            v0_3 = func_00287bc0();
            switch (v0_3) {
            case 1:
                func_0025dbd8();
                break;
            case 2:
                func_0025dde8();
                break;
            case 4:
                func_0025e450();
                break;
            case 5:
            case 7:
                func_0025dfb0();
                break;
            case 11:
                func_0025e370();
                break;
            case 12:
                func_0025e8a0();
                break;
            case 18:
                func_0025ebb0();
                break;
            case 23:
                func_0025ee88();
                break;
            case 0:
            case 3:
            case 6:
            case 8:
            case 9:
            case 10:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 19:
            case 20:
            case 21:
            case 22:
            default:
                break;
            }
        }
        t7_4 = 0;
    }
    return t7_4;
}

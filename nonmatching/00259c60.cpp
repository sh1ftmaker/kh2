// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f650 asm("D_0035f650");
extern "C" u32 D_0035f664 asm("D_0035f664");
extern "C" u32 D_0035f670 asm("D_0035f670");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00233e60() asm("func_00233e60");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_00290580(u32) asm("func_00290580");
extern "C" u32 func_002b55e0() asm("func_002b55e0");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_00233e70(u32) asm("func_00233e70");
extern "C" void func_00259fb8() asm("func_00259fb8");
extern "C" void func_0025a200() asm("func_0025a200");
extern "C" void func_0025a468() asm("func_0025a468");
extern "C" void func_0025a660() asm("func_0025a660");
extern "C" void func_0025aa10() asm("func_0025aa10");
extern "C" void func_0025adf0() asm("func_0025adf0");
extern "C" void func_0025af70() asm("func_0025af70");
extern "C" void func_0025b050() asm("func_0025b050");
extern "C" void func_0025b218() asm("func_0025b218");
extern "C" void func_0025b5e0() asm("func_0025b5e0");
extern "C" void func_0025b7b8() asm("func_0025b7b8");
extern "C" void func_0025bbe0() asm("func_0025bbe0");
extern "C" void func_0025bd98() asm("func_0025bd98");
extern "C" void func_0025c3c0() asm("func_0025c3c0");
extern "C" void func_0025caf0() asm("func_0025caf0");
extern "C" void func_0025ccf0() asm("func_0025ccf0");
extern "C" void func_0025cd78() asm("func_0025cd78");
extern "C" void func_0025d4e8() asm("func_0025d4e8");
extern "C" void func_00287d68() asm("func_00287d68");
extern "C" void func_00290420(u32) asm("func_00290420");
extern "C" void func_002b5af0() asm("func_002b5af0");
extern "C" void func_002b6418() asm("func_002b6418");

// 0x00259c60 func_00259c60
u32 func_00259c60() asm("_ZN2Tz6CmSave7ControlEv");
u32 func_00259c60() {
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
                        func_0025d4e8();
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
        if ((func_00290580(*(u32*)(&D_0035f670)) != 0)) {
            func_00290420(*(u32*)(&D_0035f670));
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f664))) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035f664)) == 1)) {
                v0 = func_00287bc0();
                switch (v0) {
                case 0:
                    func_00259fb8();
                    break;
                case 1:
                    func_0025a200();
                    break;
                case 2:
                    func_0025a468();
                    break;
                case 3:
                    func_0025b050();
                    break;
                case 4:
                    func_0025b218();
                    break;
                case 5:
                case 7:
                case 10:
                case 22:
                    func_0025a660();
                    break;
                case 8:
                case 13:
                    func_0025aa10();
                    break;
                case 9:
                    func_0025adf0();
                    break;
                case 11:
                    func_0025af70();
                    break;
                case 12:
                    func_0025b7b8();
                    break;
                case 14:
                    func_0025c3c0();
                    break;
                case 15:
                    func_0025bd98();
                    break;
                case 19:
                    func_0025caf0();
                    break;
                case 20:
                    func_0025bbe0();
                    break;
                case 21:
                    func_0025b5e0();
                    break;
                case 23:
                    func_0025ccf0();
                    break;
                case 24:
                    func_0025cd78();
                    break;
                case 6:
                case 16:
                case 17:
                case 18:
                default:
                    break;
                }
            }
        } else {
            v0_3 = func_00287bc0();
            switch (v0_3) {
            case 0:
                func_00259fb8();
                break;
            case 1:
                func_0025a200();
                break;
            case 2:
                func_0025a468();
                break;
            case 3:
                func_0025b050();
                break;
            case 4:
                func_0025b218();
                break;
            case 5:
            case 7:
            case 10:
            case 22:
                func_0025a660();
                break;
            case 8:
            case 13:
                func_0025aa10();
                break;
            case 9:
                func_0025adf0();
                break;
            case 11:
                func_0025af70();
                break;
            case 12:
                func_0025b7b8();
                break;
            case 14:
                func_0025c3c0();
                break;
            case 15:
                func_0025bd98();
                break;
            case 19:
                func_0025caf0();
                break;
            case 20:
                func_0025bbe0();
                break;
            case 21:
                func_0025b5e0();
                break;
            case 23:
                func_0025ccf0();
                break;
            case 24:
                func_0025cd78();
                break;
            case 6:
            case 16:
            case 17:
            case 18:
            default:
                break;
            }
        }
        t7_4 = 0;
    }
    return t7_4;
}

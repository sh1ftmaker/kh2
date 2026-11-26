// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0025d620 asm("D_0025d620");
extern "C" u32 D_0035f0b2 asm("D_0035f0b2");
extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_00259e90() asm("func_00259e90");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00288018() asm("func_00288018");
extern "C" u32 func_00288040() asm("func_00288040");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028abe0(u32) asm("func_0028abe0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028ae28(u32, u32) asm("func_0028ae28");
extern "C" u32 func_002b4c10() asm("func_002b4c10");
extern "C" void func_00240b90(u32) asm("func_00240b90");
extern "C" void func_00240be0() asm("func_00240be0");
extern "C" void func_0025d560() asm("func_0025d560");
extern "C" void func_00263c60() asm("func_00263c60");
extern "C" void func_00287c00(u32) asm("func_00287c00");
extern "C" void func_00287c30() asm("func_00287c30");
extern "C" void func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_00287da0() asm("func_00287da0");
extern "C" void func_00287f90(u32) asm("func_00287f90");
extern "C" void func_0028aa40(u32) asm("func_0028aa40");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");
extern "C" void func_0028f6f0(u32) asm("func_0028f6f0");
extern "C" void func_0028f7e8(u32) asm("func_0028f7e8");
extern "C" void func_002b5af0() asm("func_002b5af0");

// 0x0025a200 func_0025a200
void func_0025a200() asm("_ZN2Tz6CmSave8CtrlSlotEv");
void func_0025a200() {
    u32 s2;
    u32 v0;
    u32 v0_0;
    u32 t6;
    s2 = func_00289380(*(u32*)(&D_0035f64c));
    v0 = func_00287cd0();
    if ((v0 == 2)) {
        if (((s32)(func_0028acc8(*(u32*)(&D_0035f64c))) != 0)) {
            if ((s2 == 0xffffffff)) {
                if (((s32)(func_00289310(*(u32*)(&D_0035f64c))) != 0)) {
                    func_00287f90(0);
                    func_0028abe0(*(u32*)(&D_0035f64c));
                    return;
                } else {
                    return;
                }
            } else {
                func_00287f90(0);
                func_0028abe0(*(u32*)(&D_0035f64c));
                return;
            }
        } else {
            func_00287c30();
            v0_0 = func_00287bc0();
            if (((s32)(v0_0) == 0)) {
                func_0028f7e8(0);
                func_00259e90();
                return;
            } else {
                if ((v0_0 == v0)) {
                    func_002b5af0();
                    func_0028f7e8(1);
                    func_00240be0();
                    func_002b4c10();
                    return;
                } else {
                    return;
                }
            }
        }
    } else {
        if ((s2 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035f64c))) != 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035f64c), 0)) == 0)) {
                func_0028ab20(*(u32*)(&D_0035f64c));
            }
        }
        if (((s32)(v0) == 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035f64c), 0)) != 0)) {
                func_00287cc0(1);
                func_0025d560();
            }
        }
        if (((s32)(func_00242848(func_00287df0(s2, func_00289310(*(u32*)(&D_0035f64c)), 1, (u32)&D_0025d620, 1))) == 0)) {
            t6 = (s2 + 4);
            switch (t6) {
            case 0:
                func_00263c60();
                func_00287da0();
                break;
            case 2:
                if (((s32)(*(u8*)(&D_0035f0b2)) != 0)) {
                    func_00263c60();
                    func_00287da0();
                } else {
                    func_0028aa40(*(u32*)(&D_0035f64c));
                    func_00287cc0(2);
                    func_00287c00(0);
                    func_0028f6f0(0);
                    func_00263c60();
                }
                break;
            case 4:
            case 5:
                func_00240b90(s2);
                func_00287c00(2);
                func_0028aa40(*(u32*)(&D_0035f64c));
                func_00287cc0(2);
                func_00263c60();
                break;
            case 1:
            case 3:
            default:
                break;
            }
        }
        if (((s32)(func_00288040()) != 0)) {
            func_00288018();
            return;
        } else {
            return;
        }
    }
}

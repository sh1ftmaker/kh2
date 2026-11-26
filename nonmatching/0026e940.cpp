// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f100 asm("D_0035f100");
extern "C" u32 D_0035f10c asm("D_0035f10c");
extern "C" u32 D_0035f110 asm("D_0035f110");
extern "C" u32 D_003738d8 asm("D_003738d8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0026eae8(u32, u32) asm("func_0026eae8");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" u32 func_0028d6e8(u32) asm("func_0028d6e8");
extern "C" void func_0026ebc0() asm("func_0026ebc0");
extern "C" void func_0028cc78(u32, u32, u32, u32, u32, u32) asm("func_0028cc78");
extern "C" void func_0028cdb8(u32) asm("func_0028cdb8");
extern "C" void func_0028ce38() asm("func_0028ce38");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");
extern "C" void func_0028d1c0(u32, u32, u32, u32, u32, u32, u32) asm("func_0028d1c0");
extern "C" void func_0028d5d0(u32) asm("func_0028d5d0");
extern "C" void func_0028d660(u32, u32) asm("func_0028d660");

// 0x0026e940 Tz::PauseTaskUpdate()
u32 lift_0026e940() asm("_ZN2Tz15PauseTaskUpdateEv");
u32 lift_0026e940() {
    u32 s1;
    u32 v0;
    s1 = func_00287cd0();
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f100))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f100)) + 0x14))))(*(u32*)(&D_0035f100));
        }
        func_0028ce38();
        func_0026ebc0();
    }
    v0 = func_00287db0();
    if (((s32)(v0) == 0)) {
        if (((s32)(func_0028acc8(*(u32*)(&D_0035f10c))) != 0)) {
            if ((s1 == 1)) {
                if (((s32)(func_0028d008(0)) == 0)) {
                    func_0028cc78(0, 0, 0, *(u32*)(&D_0035f100), 6, 6);
                    func_0028cf28(0, func_002891d0(*(u32*)(&D_0035f10c)));
                    if (((s32)(func_0028d6e8(*(u32*)(&D_0035f110))) == 0)) {
                        func_0028d1c0(*(u32*)(&D_0035f110), 0x754a, 0, 0, *(u32*)(&D_0035f100), (u32)&D_003738d8, 0);
                    }
                    func_0028d660(*(u32*)(&D_0035f110), func_002891d0(*(u32*)(&D_0035f10c)));
                }
            } else {
                if ((s1 == 2)) {
                    if (((s32)(func_0028d008(0)) != 0)) {
                        func_0028cdb8(0);
                        func_0028d5d0(*(u32*)(&D_0035f110));
                    } else {
                        if (((s32)(func_0028d6e8(*(u32*)(&D_0035f110))) != 0)) {
                            func_0028d5d0(*(u32*)(&D_0035f110));
                        }
                    }
                }
            }
        } else {
            if ((s1 == 2)) {
                if (((s32)(func_0028d008(0)) != 0)) {
                    func_0028cdb8(0);
                    func_0028d5d0(*(u32*)(&D_0035f110));
                } else {
                    if (((s32)(func_0028d6e8(*(u32*)(&D_0035f110))) != 0)) {
                        func_0028d5d0(*(u32*)(&D_0035f110));
                    }
                }
            }
        }
        return func_0026eae8(*(u32*)(&D_0035f10c), func_00287bc0());
    } else {
        return v0;
    }
}

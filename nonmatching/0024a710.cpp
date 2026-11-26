// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed70 asm("D_0035ed70");
extern "C" u32 D_0035ed74 asm("D_0035ed74");
extern "C" u32 D_0035ed78 asm("D_0035ed78");
extern "C" u32 D_0035ed7c asm("D_0035ed7c");
extern "C" u32 D_0035ed80 asm("D_0035ed80");
extern "C" u32 D_0035ed84 asm("D_0035ed84");
extern "C" u32 D_0035ed88 asm("D_0035ed88");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0024a948(u32, u32, u32) asm("func_0024a948");
extern "C" u32 func_0024b1a0(u32) asm("func_0024b1a0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287c50() asm("func_00287c50");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_002887c8() asm("func_002887c8");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028acb8(u32) asm("func_0028acb8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" void func_0024ab00() asm("func_0024ab00");
extern "C" void func_0028aa40(u32) asm("func_0028aa40");
extern "C" void func_0028cc78(u32, u32, u32, u32, u32, u32) asm("func_0028cc78");
extern "C" void func_0028cdb8(u32) asm("func_0028cdb8");
extern "C" void func_0028ce38() asm("func_0028ce38");
extern "C" void func_0028ce98(u32, u32) asm("func_0028ce98");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");
extern "C" void func_0028dac8(u32, u32) asm("func_0028dac8");
extern "C" void func_0028dae0(u32, u32) asm("func_0028dae0");

// 0x0024a710 Tz::TRTE::Draw()
u32 lift_0024a710() asm("_ZN2Tz4TRTE4DrawEv");
u32 lift_0024a710() {
    u32 s2;
    u32 s3;
    u32 v0;
    u32 s1;
    u32 v0_0;
    s2 = func_00287bc0();
    s3 = func_00287cd0();
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_002887c8()) == 0)) {
            func_0028dae0(*(u32*)(&D_0035ed78), 0x1f);
            if (((s32)(func_0028acc8(*(u32*)(&D_0035ed70))) != 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035ed80))) != 0)) {
                    func_0028dae0(*(u32*)(&D_0035ed80), *(s16*)((func_0024b1a0(func_002891e8(*(u32*)(&D_0035ed70))) + 2)));
                }
            }
            func_0028dae0(*(u32*)(&D_0035ed7c), 0x22);
            if ((func_0028acc8(*(u32*)(&D_0035ed70)) != 0)) {
                if ((func_0028acb8(*(u32*)(&D_0035ed70)) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035ed70));
                }
            }
            if (((s32)(func_0028acc8(*(u32*)(&D_0035ed74))) != 0)) {
                if (((s32)(func_0028acb8(*(u32*)(&D_0035ed74))) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035ed74));
                }
            }
            func_0028dac8(*(u32*)(&D_0035ed84), 0x20);
            func_0028dac8(*(u32*)(&D_0035ed88), 0x28);
        }
        func_0028ce38();
    }
    func_0024ab00();
    v0 = func_00287db0();
    if (((s32)(v0) == 0)) {
        s1 = ((s32)(s2) == 0) ? *(u32*)(&D_0035ed70) : *(u32*)(&D_0035ed74);
        if (((s32)(func_0028acc8(s1)) != 0)) {
            if ((s3 == 1)) {
                if (((s32)(func_0028d008((u32)(0) < (u32)(s2))) == 0)) {
                    func_0028cc78((u32)(0) < (u32)(s2), 0, 0, *(u32*)(&D_0035ed78), 0xf, 0xe);
                    func_0028cf28((u32)(0) < (u32)(s2), func_002891d0(s1));
                }
            } else {
                if ((s3 == 2)) {
                    if (((s32)(func_0028d008((u32)(0) < (u32)(s2))) != 0)) {
                        func_0028cdb8((u32)(0) < (u32)(s2));
                    }
                }
            }
        } else {
            if ((s3 == 2)) {
                if (((s32)(func_0028d008((u32)(0) < (u32)(s2))) != 0)) {
                    func_0028cdb8((u32)(0) < (u32)(s2));
                }
            }
        }
        if (((s32)(func_00287c50()) != 0)) {
            if (((s32)(func_0028d008(0)) != 0)) {
                func_0028ce98(0, (u32)(0) < (u32)(s2));
            }
        }
        v0_0 = func_0024a948(s1, s2, (u32)(0) < (u32)(s2));
        v0 = v0_0;
    }
    return v0;
}

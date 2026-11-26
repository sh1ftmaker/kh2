// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035edcc asm("D_0035edcc");
extern "C" u32 D_0035edd0 asm("D_0035edd0");
extern "C" u32 D_0035edd4 asm("D_0035edd4");
extern "C" u32 D_0035edd8 asm("D_0035edd8");
extern "C" u32 D_0035eddc asm("D_0035eddc");
extern "C" u32 D_0035ede0 asm("D_0035ede0");
extern "C" u32 D_0035ede4 asm("D_0035ede4");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0024dd68(u32, u32, u32) asm("func_0024dd68");
extern "C" u32 func_0024e008(u32) asm("func_0024e008");
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
extern "C" void func_0024dea8() asm("func_0024dea8");
extern "C" void func_0024e530() asm("func_0024e530");
extern "C" void func_0028aa40(u32) asm("func_0028aa40");
extern "C" void func_0028cc78(u32, u32, u32, u32, u32, u32) asm("func_0028cc78");
extern "C" void func_0028cdb8(u32) asm("func_0028cdb8");
extern "C" void func_0028ce38() asm("func_0028ce38");
extern "C" void func_0028ce98(u32, u32) asm("func_0028ce98");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");
extern "C" void func_0028dac8(u32, u32) asm("func_0028dac8");
extern "C" void func_0028dae0(u32, u32) asm("func_0028dae0");

// 0x0024db28 Tz::TTPT::Draw()
u32 lift_0024db28() asm("_ZN2Tz4TTPT4DrawEv");
u32 lift_0024db28() {
    u32 s2;
    u32 s3;
    u32 v0;
    u32 s1;
    u32 v0_0;
    s2 = func_00287bc0();
    s3 = func_00287cd0();
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_002887c8()) == 0)) {
            func_0028dae0(*(u32*)(&D_0035edd4), 0x1f);
            if (((s32)(func_0028acc8(*(u32*)(&D_0035edcc))) != 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035eddc))) != 0)) {
                    func_0028dae0(*(u32*)(&D_0035eddc), *(s16*)((func_0024e008(func_002891e8(*(u32*)(&D_0035edcc))) + 2)));
                }
            }
            func_0028dae0(*(u32*)(&D_0035edd8), 0x22);
            if ((func_0028acc8(*(u32*)(&D_0035edcc)) != 0)) {
                if ((func_0028acb8(*(u32*)(&D_0035edcc)) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035edcc));
                }
            }
            if (((s32)(func_0028acc8(*(u32*)(&D_0035edd0))) != 0)) {
                if (((s32)(func_0028acb8(*(u32*)(&D_0035edd0))) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035edd0));
                }
            }
            func_0028dac8(*(u32*)(&D_0035ede0), 0x20);
            func_0028dac8(*(u32*)(&D_0035ede4), 0x28);
        }
        func_0024e530();
        func_0028ce38();
    }
    func_0024dea8();
    v0 = func_00287db0();
    if (((s32)(v0) == 0)) {
        s1 = ((s32)(s2) == 0) ? *(u32*)(&D_0035edcc) : *(u32*)(&D_0035edd0);
        if (((s32)(func_0028acc8(s1)) != 0)) {
            if ((s3 == 1)) {
                if (((s32)(func_0028d008((u32)(0) < (u32)(s2))) == 0)) {
                    func_0028cc78((u32)(0) < (u32)(s2), 0, 0, *(u32*)(&D_0035edd4), 0xf, 0xe);
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
        v0_0 = func_0024dd68(s1, s2, (u32)(0) < (u32)(s2));
        v0 = v0_0;
    }
    return v0;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S6_2_s16 { u8 _p[2]; s16 m; u8 _q[2]; };
extern "C" u32 D_0035ed4c asm("D_0035ed4c");
extern "C" u32 D_0035ed50 asm("D_0035ed50");
extern "C" u32 D_0035ed54 asm("D_0035ed54");
extern "C" u32 D_0035ed58 asm("D_0035ed58");
extern "C" u32 D_0035ed5c asm("D_0035ed5c");
extern "C" u32 D_00371d40 asm("D_00371d40");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00248f50(u32, u32, u32) asm("func_00248f50");
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
extern "C" void func_00249098() asm("func_00249098");
extern "C" void func_00249358() asm("func_00249358");
extern "C" void func_0028aa40(u32) asm("func_0028aa40");
extern "C" void func_0028cc78(u32, u32, u32, u32, u32, u32) asm("func_0028cc78");
extern "C" void func_0028cdb8(u32) asm("func_0028cdb8");
extern "C" void func_0028ce38() asm("func_0028ce38");
extern "C" void func_0028ce98(u32, u32) asm("func_0028ce98");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");
extern "C" void func_0028dae0(u32, u32) asm("func_0028dae0");

// 0x00248d28 Tz::MUMI::Draw()
u32 lift_00248d28() asm("_ZN2Tz4MUMI4DrawEv");
u32 lift_00248d28() {
    u32 s2;
    u32 s3;
    u32 v0;
    u32 v0_0;
    u32 s1;
    u32 v0_1;
    s2 = func_00287bc0();
    s3 = func_00287cd0();
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_002887c8()) == 0)) {
            func_0028dae0(*(u32*)(&D_0035ed54), 0x1f);
            if (((s32)(func_0028acc8(*(u32*)(&D_0035ed4c))) != 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035ed5c))) != 0)) {
                    v0 = func_002891e8(*(u32*)(&D_0035ed4c));
                    func_0028dae0(*(u32*)(&D_0035ed5c), ((S6_2_s16*)&D_00371d40)[v0].m);
                }
            }
            func_0028dae0(*(u32*)(&D_0035ed58), 0x22);
            if ((func_0028acc8(*(u32*)(&D_0035ed4c)) != 0)) {
                if ((func_0028acb8(*(u32*)(&D_0035ed4c)) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035ed4c));
                }
            }
            if (((s32)(func_0028acc8(*(u32*)(&D_0035ed50))) != 0)) {
                if (((s32)(func_0028acb8(*(u32*)(&D_0035ed50))) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035ed50));
                }
            }
        }
        func_00249358();
        func_0028ce38();
    }
    func_00249098();
    v0_0 = func_00287db0();
    if (((s32)(v0_0) == 0)) {
        s1 = ((s32)(s2) == 0) ? *(u32*)(&D_0035ed4c) : *(u32*)(&D_0035ed50);
        if (((s32)(func_0028acc8(s1)) != 0)) {
            if ((s3 == 1)) {
                if (((s32)(func_0028d008((u32)(0) < (u32)(s2))) == 0)) {
                    func_0028cc78((u32)(0) < (u32)(s2), 0, 0, *(u32*)(&D_0035ed54), 0xf, 0xe);
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
        v0_1 = func_00248f50(s1, s2, (u32)(0) < (u32)(s2));
        v0_0 = v0_1;
    }
    return v0_0;
}

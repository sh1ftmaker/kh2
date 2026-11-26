// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S6_2_s16 { u8 _p[2]; s16 m; u8 _q[2]; };
extern "C" u32 D_0035eda8 asm("D_0035eda8");
extern "C" u32 D_0035edac asm("D_0035edac");
extern "C" u32 D_0035edb0 asm("D_0035edb0");
extern "C" u32 D_0035edb4 asm("D_0035edb4");
extern "C" u32 D_0035edb8 asm("D_0035edb8");
extern "C" u32 D_00371ff0 asm("D_00371ff0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0024c420(u32, u32, u32) asm("func_0024c420");
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
extern "C" void func_0024c568() asm("func_0024c568");
extern "C" void func_0024c828() asm("func_0024c828");
extern "C" void func_0028aa40(u32) asm("func_0028aa40");
extern "C" void func_0028cc78(u32, u32, u32, u32, u32, u32) asm("func_0028cc78");
extern "C" void func_0028cdb8(u32) asm("func_0028cdb8");
extern "C" void func_0028ce38() asm("func_0028ce38");
extern "C" void func_0028ce98(u32, u32) asm("func_0028ce98");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");
extern "C" void func_0028dae0(u32, u32) asm("func_0028dae0");

// 0x0024c1a8 Tz::HBTE::Draw()
u32 lift_0024c1a8() asm("_ZN2Tz4HBTE4DrawEv");
u32 lift_0024c1a8() {
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
            func_0028dae0(*(u32*)(&D_0035edb0), 0x1f);
            if (((s32)(func_0028acc8(*(u32*)(&D_0035eda8))) != 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035edb8))) != 0)) {
                    v0 = func_002891e8(*(u32*)(&D_0035eda8));
                    func_0028dae0(*(u32*)(&D_0035edb8), ((S6_2_s16*)&D_00371ff0)[v0].m);
                }
            }
            func_0028dae0(*(u32*)(&D_0035edb4), 0x22);
            if ((func_0028acc8(*(u32*)(&D_0035eda8)) != 0)) {
                if ((func_0028acb8(*(u32*)(&D_0035eda8)) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035eda8));
                }
            }
            if (((s32)(func_0028acc8(*(u32*)(&D_0035edac))) != 0)) {
                if (((s32)(func_0028acb8(*(u32*)(&D_0035edac))) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035edac));
                }
            }
        }
        func_0024c828();
        func_0028ce38();
    }
    func_0024c568();
    v0_0 = func_00287db0();
    if (((s32)(v0_0) == 0)) {
        s1 = ((s32)(s2) == 0) ? *(u32*)(&D_0035eda8) : *(u32*)(&D_0035edac);
        if (((s32)(func_0028acc8(s1)) != 0)) {
            if ((s3 == 1)) {
                if (((s32)(func_0028d008((u32)(0) < (u32)(s2))) == 0)) {
                    func_0028cc78((u32)(0) < (u32)(s2), 0, 0, *(u32*)(&D_0035edb0), 0xf, 0xe);
                    func_0028cf28((u32)(0) < (u32)(s2), func_002891d0(s1));
                    if (((s32)(((u32)(0) < (u32)(s2))) != 0)) {
                        if (((s32)(func_0028d008(0)) == 0)) {
                            func_0028cc78(0, 0, 0, *(u32*)(&D_0035edb0), 0xf, 0xe);
                            func_0028cf28(0, func_002891d0(*(u32*)(&D_0035eda8)));
                            func_0028ce98(0, 1);
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
        v0_1 = func_0024c420(s1, s2, (u32)(0) < (u32)(s2));
        v0_0 = v0_1;
    }
    return v0_0;
}

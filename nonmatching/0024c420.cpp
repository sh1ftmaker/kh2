// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S6_4_s16 { u8 _p[4]; s16 m; };
extern "C" u32 D_0035edb8 asm("D_0035edb8");
extern "C" u32 D_0035edc0 asm("D_0035edc0");
extern "C" u32 D_00371ff0 asm("D_00371ff0");
extern "C" u32 D_00372030 asm("D_00372030");
extern "C" u32 D_003720a0 asm("D_003720a0");
extern "C" u32 func_00287cd0(u32, u32, u32) asm("func_00287cd0");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" u32 func_002b4388(u32, u32, u32) asm("func_002b4388");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" void func_0024c898() asm("func_0024c898");
extern "C" void func_00289038(u32, u32, u32, u32, u32, u32, u32) asm("func_00289038");
extern "C" void func_002890e0(u32, u32, u32, u32, u32) asm("func_002890e0");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");

// 0x0024c420 Tz::HBTE::DrawSelector(Tz::Select*, int, int)
void lift_0024c420(u32 a0, u32 a1, u32 a2) asm("_ZN2Tz4HBTE12DrawSelectorEPNS_6SelectEii");
void lift_0024c420(u32 a0, u32 a1, u32 a2) {
    u32 s3;
    u32 t6;
    if ((func_00287cd0(a0, a1, a2) == 1)) {
        if ((func_00289310(a0) != 0)) {
            s3 = func_002891e8(a0);
            func_002890e0(a0, 1, 2, 0, 0xffffffff);
            func_00289038(a0, s3, 1, 1, 2, 0, 0xffffffff);
            if (((s32)(a1) == 0)) {
                func_0023f070(*(u32*)(&D_0035edb8), ((S6_4_s16*)&D_00371ff0)[s3].m, 0xffffffff);
                func_0024c898();
            }
            if (((s32)(func_0028d008(a2)) != 0)) {
                func_0028cf28(a2, func_002891d0(a0));
            }
            if (((s32)(a1) == 0)) {
                t6 = (u32)&D_00372030;
            } else {
                t6 = (u32)&D_003720a0;
            }
            func_002b4388(*(u32*)(&D_0035edc0), (s3 * 0x24) + t6, 0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

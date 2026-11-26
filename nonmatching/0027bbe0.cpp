// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f230 asm("D_0035f230");
extern "C" u32 func_002570a0(u32, u32) asm("func_002570a0");
extern "C" u32 func_00258068(u32) asm("func_00258068");
extern "C" u32 func_0027b6b8() asm("func_0027b6b8");
extern "C" u32 func_00283ab8(u32) asm("func_00283ab8");
extern "C" u32 func_0028af88(u32) asm("func_0028af88");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_00256cc0(u32, u32, u32) asm("func_00256cc0");
extern "C" void func_00279ec8(u32, u32) asm("func_00279ec8");
extern "C" void func_0027a208() asm("func_0027a208");
extern "C" void func_0027a6d8() asm("func_0027a6d8");
extern "C" void func_0027aaa0(u32, u32) asm("func_0027aaa0");
extern "C" void func_0027aed8(u32, u32, u32) asm("func_0027aed8");
extern "C" void func_0027b248(u32) asm("func_0027b248");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");

// 0x0027bbe0 func_0027bbe0
u32 func_0027bbe0(u32 a0, u32 a1) asm("_ZN2Tz9CmAbility10DrawUpdateEPNS_6SelectEii");
u32 func_0027bbe0(u32 a0, u32 a1) {
    u32 loc_0;
    u32 s0;
    u32 s2;
    if ((a1 == 0xf)) {
        func_00279ec8(a0, a1);
    } else {
        if ((a1 == 0x10)) {
            func_0027aed8(func_002570a0(0xf, a1), (u32)&loc_0, (u32)&loc_0 + 4);
            func_0027a6d8();
            func_0027a208();
            if (((s32)(loc_0) == 0)) {
                func_0027b248(1);
            }
            s0 = func_0028af88(a0);
            if (((s32)(loc_0) == 0)) {
                if ((*(s8*)((((func_0028b040(a0) << 3) + *(u32*)(&D_0035f230)) + 0x11)) == 0)) {
                    s0 = (s0 & 0xfffffdff);
                } else {
                    s0 = (s0 | 0x200);
                }
            }
            if (((s32)(func_00283ab8(2)) != 0)) {
                s0 = (s0 | 0x400);
                s2 = 0xcbdd;
            } else {
                s0 = (s0 & 0xfffffbff);
                s2 = 0xffffffff;
            }
            if (((s32)(func_00258068(0)) != 0)) {
                func_00256cc0(0xb373, 0xb61a, s2);
            } else {
                if (((s32)(s2) >= 0)) {
                    func_00256cc0(0xb61a, s2, 0xffffffff);
                }
            }
            func_0028af18(a0, s0);
        } else {
            func_0027aaa0(a0, a1);
            func_0027b248((u32)(0) < (u32)(func_0028b040(a0)));
        }
    }
    return func_0027b6b8();
}

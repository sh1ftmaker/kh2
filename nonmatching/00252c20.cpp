// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee90 asm("D_0035ee90");
extern "C" u32 D_0035eea4 asm("D_0035eea4");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_0023f100(u32) asm("func_0023f100");
extern "C" u32 func_0023f108(u32) asm("func_0023f108");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" void func_00242618(u32, u32) asm("func_00242618");
extern "C" void func_00252ce0() asm("func_00252ce0");
extern "C" void func_00252d88() asm("func_00252d88");
extern "C" void func_00252e50() asm("func_00252e50");

// 0x00252c20 func_00252c20
u32 func_00252c20() asm("_ZN2Tz4ALCA7ControlEv");
u32 func_00252c20() {
    u32 s0;
    u32 v0;
    u32 v0_0;
    s0 = *(s16*)((*(u32*)((((func_00287bc0() << 2) + (u32)&D_0035ee90) + -4)) + 4));
    if ((func_0023f100(*(u32*)(&D_0035eea4)) == 0xffffffff)) {
        func_00252ce0();
        func_00252d88();
        func_00252e50();
    }
    v0 = func_0023f0c0(*(u32*)(&D_0035eea4));
    if ((v0 == s0)) {
        v0_0 = func_00167f18(0);
        if (((s32)((*(u64*)((v0_0 + 8)) & 4)) != 0)) {
            func_00242618(2, 1);
            return func_0023f108(*(u32*)(&D_0035eea4));
        } else {
            return v0_0;
        }
    } else {
        return v0;
    }
}

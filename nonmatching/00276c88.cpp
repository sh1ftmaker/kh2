// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f20c asm("D_0035f20c");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f21c asm("D_0035f21c");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" u32 func_001395f8(u32) asm("func_001395f8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_00276df8(u32, u8) asm("func_00276df8");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x00276c88 func_00276c88
u32 func_00276c88(u32 a0, u8 a1) asm("_ZN2Tz6Jiminy10CreateHelpEPKN2YS7MESSAGEEb");
u32 func_00276c88(u32 a0, u8 a1) {
    u32 s1;
    u32 v0;
    u32 loc_0;
    u32 v0_0;
    u32 s0;
    u32 v0_1;
    s1 = (*(u32*)(&D_0035f21c) + 0xee4);
    v0 = func_00276df8(a0, a1);
    if (((s32)(v0) == 0)) {
        loc_0 = 0;
        func_0028d980(s1, 0x755d, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x91, 0xffffffff, 0xffffffff);
        if (((s32)(func_00139d78(*(u32*)(&D_0035f20c) + 0x51c)) != 0)) {
            func_0028dcc0(s1, *(u32*)(&D_0035f20c) + 0x51c);
        }
        *(u32*)((s1 + 0x198)) = a0;
        v0_0 = func_001395f8(s1);
        if (((s32)(a1) != 0)) {
            func_00139d78(*(u32*)(&D_0035f20c) + 0x51c);
            s0 = func_0023aa18(*(u32*)(&D_0035f20c) + 0x534);
            return func_00138c68(s1, s0, func_0023aa38(*(u32*)(&D_0035f20c) + 0x534));
        } else {
            return v0_0;
        }
    } else {
        *(u32*)((s1 + 0x198)) = a0;
        if ((*(u32*)((s1 + 0x184)) != 0x91)) {
            v0_1 = func_00138c10(s1, 0x91);
            *(u32*)((s1 + 0x188)) = 0xffffffff;
            v0 = v0_1;
        }
        return v0;
    }
}

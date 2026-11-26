// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f0f4 asm("D_0035f0f4");
extern "C" u32 func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" u32 func_00139d78(u32, u8) asm("func_00139d78");
extern "C" u32 func_00256b68(u32) asm("func_00256b68");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" u32 func_0028d0e0(u32) asm("func_0028d0e0");
extern "C" void func_00138c78(u32, u32, u32) asm("func_00138c78");
extern "C" void func_00287bc0() asm("func_00287bc0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x0026d620 func_0026d620
u32 func_0026d620(u32 a0, u8 a1) asm("_ZN2Tz7CmParty18UpdateTopSelActiveEib");
u32 func_0026d620(u32 a0, u8 a1) {
    u32 s0;
    u32 s2;
    u32 v0;
    u32 loc_0;
    u32 loc_4;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    s0 = func_00139d78(*(u32*)(&D_0035f0f4), a1);
    s2 = func_00256b68(1);
    func_00287bc0();
    v0 = func_0028d008(a0);
    if (((s32)(v0) != 0)) {
        if (((s32)(s0) == 0)) {
            func_0028d8c0(*(u32*)(&D_0035f0f4), 0x753f, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x13d, 0xffffffff, 0);
            func_0028dcc0(*(u32*)(&D_0035f0f4), s2);
            func_00138c78(*(u32*)((func_0028d0e0(a0) + 0x18c)), (u32)&loc_0, (u32)&loc_4);
            v0_0 = func_00138c68(*(u32*)(&D_0035f0f4), loc_0, loc_4);
            v0 = v0_0;
        }
        if (((s32)(a1) != 0)) {
            func_00138c78(*(u32*)((func_0028d0e0(a0) + 0x18c)), (u32)&loc_0, (u32)&loc_4);
            v0_1 = func_00138c68(*(u32*)(&D_0035f0f4), loc_0, loc_4);
            v0 = v0_1;
        }
    } else {
        if ((s0 != 0)) {
            v0_2 = func_00139510(*(u32*)(&D_0035f0f4));
            v0 = v0_2;
        }
    }
    return v0;
}

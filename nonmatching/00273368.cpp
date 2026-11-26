// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_00373a60 asm("D_00373a60");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00257770(u32, u32) asm("func_00257770");
extern "C" u32 func_00272b60(u32) asm("func_00272b60");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" u32 func_0028d0e0(u32) asm("func_0028d0e0");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00138c78(u32, u32, u32) asm("func_00138c78");
extern "C" void func_00139510(u32) asm("func_00139510");
extern "C" void func_00256bb0(u32) asm("func_00256bb0");
extern "C" void func_00256c40() asm("func_00256c40");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x00273368 func_00273368
void func_00273368(u32 a0, u32 a1) asm("_ZN2Tz8CmCustom18UpdateTopSelActiveEib");
void func_00273368(u32 a0, u32 a1) {
    u32 v0;
    u32 s1;
    u32 s0;
    u32 s4;
    u32 t7;
    u32 s0_0;
    u32 v0_1;
    u32 loc_0;
    u32 loc_4;
    v0 = func_00257770(a0, a1);
    s1 = (v0 + 0x330);
    s0 = func_00139d78(s1);
    s4 = func_00287bc0();
    if (((s32)(func_0028d008(a0)) != 0)) {
        if (((s32)(s0) == 0)) {
            t7 = (s4 + -0x1a);
            s0_0 = (*(u32*)(&D_0035f3d4) + 2);
            if (((s32)(((u32)(t7) < (u32)(2))) == 0)) {
                v0_1 = (func_00272b60(func_002570a0(0x1a)) << 1);
            }
            func_0028d8c0(s1, s0_0, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), *(s16*)(((v0_1 + (u32)&D_00373a60) + 0xa)), 0xffffffff, 0);
            func_0028dcc0(s1, v0);
            func_00138c78(*(u32*)((func_0028d0e0(a0) + 0x18c)), (u32)&loc_0, (u32)&loc_4);
            func_00138c68(s1, loc_0, loc_4);
        }
        if (((s32)((a1 & 0xff)) != 0)) {
            func_00138c78(*(u32*)((func_0028d0e0(a0) + 0x18c)), (u32)&loc_0, (u32)&loc_4);
            func_00138c68(s1, loc_0, loc_4);
        }
        if (((s32)(func_00139d78(v0 + 0x9c8)) == 0) || ((s32)((a1 & 0xff)) != 0)) {
            if (((s32)(((u32)((s4 + -0x1a)) < (u32)(2))) != 0)) {
                if (((s32)(func_00272b60(func_0028b040(*(u32*)(&D_0035f01c)))) != 0)) {
                    func_00256bb0(func_0028d0e0(a0));
                } else {
                    func_00256c40();
                }
            } else {
                func_00256c40();
            }
        }
    } else {
        if (((s32)(s0) != 0)) {
            func_00139510(s1);
        }
        func_00256c40();
    }
    return;
}

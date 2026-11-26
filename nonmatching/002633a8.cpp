// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770(u32, u32) asm("func_00257770");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" u32 func_0028d0e0(u32) asm("func_0028d0e0");
extern "C" u32 func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");

// 0x002633a8 func_002633a8
void func_002633a8(u32 a0, u32 a1) asm("_ZN2Tz6CmItem18UpdateTopSelActiveEib");
void func_002633a8(u32 a0, u32 a1) {
    u32 s0;
    u32 v0;
    u32 s1;
    u32 s0_0;
    s0 = func_00257770(a0, a1);
    v0 = func_00287bc0();
    s1 = (s0 + 0x330);
    s0_0 = func_00139d78((v0 ^ 0xb) ? (s0 + 0x4c8) : s1);
    if (((s32)(func_0028d008((v0 ^ 0xd) ? a0 : 1)) != 0)) {
        if (((s32)(s0_0) == 0)) {
            func_0028d8c0((v0 ^ 0xb) ? (s0 + 0x4c8) : s1, *(u32*)(&D_0035f3d4) + 2, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x122, 0xffffffff, 0);
            func_0028dcc0((v0 ^ 0xb) ? (s0 + 0x4c8) : s1, *(u32*)((func_0028d0e0((v0 ^ 0xd) ? a0 : 1) + 0x18c)));
        }
        if (((s32)((a1 & 0xff)) != 0)) {
            func_0028dcc0((v0 ^ 0xb) ? (s0 + 0x4c8) : s1, *(u32*)((func_0028d0e0((v0 ^ 0xd) ? a0 : 1) + 0x18c)));
            return;
        } else {
            return;
        }
    } else {
        if ((s0_0 != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(((v0 ^ 0xb) ? (s0 + 0x4c8) : s1)) + 0x14))))((v0 ^ 0xb) ? (s0 + 0x4c8) : s1);
        }
        return;
    }
}

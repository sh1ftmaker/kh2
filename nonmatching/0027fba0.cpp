// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f250 asm("D_0035f250");
extern "C" u32 D_0035f254 asm("D_0035f254");
extern "C" u32 D_0035f258 asm("D_0035f258");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0027fcc0() asm("func_0027fcc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_00289038(u32, u32, u32, u32, u32, u32, u32) asm("func_00289038");
extern "C" void func_002890e0(u32, u32, u32, u32, u32) asm("func_002890e0");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x0027fba0 func_0027fba0
void func_0027fba0() asm("func_0027fba0");
void func_0027fba0() {
    u8 frame[16];
    u32 s1;
    u32 t6;
    u32 s1_0;
    u32 sp;
    u32 s0;
    if ((func_00287db0() != 0)) {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f250))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f250)) + 0x14))))(*(u32*)(&D_0035f250));
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f258))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f258)) + 0x14))))(*(u32*)(&D_0035f258));
        }
        if (((s32)(func_0028acc8(*(u32*)(&D_0035f254))) != 0)) {
            func_0028abe0(*(u32*)(&D_0035f254));
        }
        s1 = 0x360000;
        t6 = 1;
        do {
            t6 = (t6 + 1);
        } while (((s32)(((s32)(t6) < (s32)(9))) != 0));
        s1_0 = s1;
    } else {
        s1_0 = 0x360000;
        sp = (u32)frame;
    }
    if (((s32)(func_00289310(*(u32*)((s1_0 + -0xdac)))) != 0)) {
        s0 = func_002891e8(*(u32*)((s1_0 + -0xdac)));
        func_002890e0(*(u32*)((s1_0 + -0xdac)), 1, 2, 0, 0xffffffff);
        func_00289038(*(u32*)((s1_0 + -0xdac)), s0, 1, 1, 2, 0, 0xffffffff);
        func_0027fcc0();
        return;
    } else {
        return;
    }
}

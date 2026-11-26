// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035f3f8 asm("D_0035f3f8");
extern "C" u32 D_0035f3fc asm("D_0035f3fc");
extern "C" u32 D_0035f400 asm("D_0035f400");
extern "C" u32 D_0035f404 asm("D_0035f404");
extern "C" u32 D_0035f408 asm("D_0035f408");
extern "C" u32 D_0035f40c asm("D_0035f40c");
extern "C" u32 D_0035f410 asm("D_0035f410");
extern "C" u32 D_0035f414 asm("D_0035f414");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_00106450(u32) asm("func_00106450");
extern "C" void func_0028cdb8(u32) asm("func_0028cdb8");

// 0x0028ca78 Tz::MenuCursor::Exit()
void lift_0028ca78() asm("_ZN2Tz10MenuCursor4ExitEv");
void lift_0028ca78() {
    u8 frame[16];
    u32 s0;
    u32 s1;
    u32 sp;
    u32 a1_0;
    u32 s0_1;
    if (((s32)(*(u32*)(&D_0035f404)) > 0)) {
        s0 = 0;
        s1 = 0x360000;
        do {
            func_0028cdb8(s0);
            s0 = (s0 + 1);
        } while (((s32)(((s32)(s0) < (s32)(*(u32*)((s1 + -0xbfc))))) != 0));
    } else {
        sp = (u32)frame;
    }
    if (((s32)(*(u32*)(&D_0035f3fc)) != 0)) {
        a1_0 = *(u32*)(&D_0035f3fc);
        s0_1 = (*(u32*)(&D_0035f3fc) + (*(u32*)((*(u32*)(&D_0035f3fc) + -4)) * 0x198));
        while ((s0_1 = (s0_1 + -0x198)), (a1_0 != s0_1)) {
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(s0_1) + 0xc))))(s0_1, a1_0);
            a1_0 = *(u32*)(&D_0035f3fc);
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a1_0 + -4);
        *(u32*)(&D_0035f3fc) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f400)) != 0)) {
        func_00106450(*(u32*)(&D_0035f400));
        *(u32*)(&D_0035f400) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f408)) != 0)) {
        func_00106450(*(u32*)(&D_0035f408));
        *(u32*)(&D_0035f408) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f40c)) != 0)) {
        func_00106450(*(u32*)(&D_0035f40c));
        *(u32*)(&D_0035f40c) = 0;
    }
    *(u32*)(&D_0035f3f8) = 0;
    *(u32*)(&D_0035f404) = 0;
    if (((s32)(*(u32*)(&D_0035f414)) != 0)) {
        *(u32*)(&D_0035f3f8) = *(u32*)((*(u32*)(&D_0035f414) + 0x10));
        *(u32*)(&D_0035f404) = *(u32*)((*(u32*)(&D_0035f414) + 8));
        *(u32*)(&D_0035f3fc) = *(u32*)(*(u32*)(&D_0035f414));
        *(u32*)(&D_0035f400) = *(u32*)((*(u32*)(&D_0035f414) + 4));
        *(u32*)(&D_0035f408) = *(u32*)((*(u32*)(&D_0035f414) + 0xc));
        *(u32*)(&D_0035f40c) = *(u32*)((*(u32*)(&D_0035f414) + 0x14));
        *(u32*)(&D_0035f410) = *(u32*)((*(u32*)(&D_0035f414) + 0x18));
        func_00106420(*(u32*)(&D_0035f414));
        *(u32*)(&D_0035f414) = 0;
    }
    return;
}

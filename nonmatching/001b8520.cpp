// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0014aba8(u32, u32) asm("func_0014aba8");
extern "C" void func_00102470(u32, u32, f32) asm("func_00102470");
extern "C" void func_0014aa58(u32, u32, u32) asm("func_0014aa58");
extern "C" void func_0014aa80(u32, u32, u32) asm("func_0014aa80");
extern "C" void func_001991a8(u32, u32) asm("func_001991a8");

// 0x001b8520 func_001b8520
void func_001b8520(u32 a0, u32 a1) asm("_ZN2YS8LIBRETTO10CodeParserEPKNS_4CODEEPv");
void func_001b8520(u32 a0, u32 a1) {
    s32 s0;
    s32 s0_0;
    s32 s0_1;
    s32 s0_2;
    switch (*(u16*)(a0)) {
    case 2:
        func_00102470(*(u32*)((a1 + 0x10)), a1, *(f32*)((a0 + 4)));
        break;
    case 3:
        func_001991a8(*(u32*)((a0 + 4)), 0);
        break;
    case 4:
        break;
    case 5:
        s0 = (s32)((*(f32*)((a0 + 4)) * 0.5f));
        func_0014aa58(func_0014aba8(a0, a1), s0, 0);
        break;
    case 6:
        s0_0 = (s32)((*(f32*)((a0 + 4)) * 0.5f));
        func_0014aa80(func_0014aba8(a0, a1), s0_0, 0);
        break;
    case 7:
        s0_1 = (s32)((*(f32*)((a0 + 4)) * 0.5f));
        func_0014aa58(func_0014aba8(a0, a1), s0_1, 1);
        break;
    case 8:
        s0_2 = (s32)((*(f32*)((a0 + 4)) * 0.5f));
        func_0014aa80(func_0014aba8(a0, a1), s0_2, 1);
        break;
    case 0:
    case 1:
    default:
        ((void(*)(u32, u32))(*(u32*)((a1 + 0xc))))(a0, a1);
        break;
    }
    return;
}

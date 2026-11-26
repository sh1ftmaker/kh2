// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_001c0cd8(u32, f32) asm("func_001c0cd8");
extern "C" void func_0017f540(u32, u32, f32, f32) asm("func_0017f540");

// 0x002da040 func_002da040
u32 func_002da040(u32 a0) asm("_ZN2Ti18MGHachimitsuPlayer5resetEv");
u32 func_002da040(u32 a0) {
    u32 s0;
    u32 s1;
    u32 v0_0;
    *(u8*)((a0 + 0xbfc)) = 1;
    *(u8*)((a0 + 0xc05)) = 0;
    if (((s32)(*(u32*)((a0 + 0xbf4))) != 0)) {
        func_0017f540(*(u32*)((a0 + 0xbf4)) + 0x140, 0, 0.0f, 0.0f);
    }
    if (((s32)(*(u32*)((a0 + 0xbf0))) != 0)) {
        func_0017f540(*(u32*)((a0 + 0xbf0)) + 0x140, 0x99, 0.0f, 0.0f);
    }
    func_0017f540(a0 + 0x140, 0, 0.0f, 0.0f);
    s0 = (a0 + 0xca0);
    s1 = 7;
    do {
        v0_0 = func_0016c028(a0);
        if ((s0 != v0_0)) {
            *(Q16*)(s0) = *(Q16*)(v0_0);
        }
        s0 = (s0 + 0x10);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return v0_0;
}

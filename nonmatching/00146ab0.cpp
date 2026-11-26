// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_00163650(u32, u32, u32, u32, u32) asm("func_00163650");

// 0x00146ab0 func_00146ab0(void*)
u32 lift_00146ab0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_Z13func_00146ab0Pv");
u32 lift_00146ab0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u8 frame[16];
    Q16 loc_0;
    u32 s4;
    u32 s5;
    u32 s6;
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 s0_2;
    u32 v0;
    s4 = (a2 + 0x10);
    s5 = (a2 + 0x20);
    func_00163650((u32)&loc_0, a2, s4, s5, a4);
    if ((a0 != (u32)frame)) {
        *(Q16*)(a0) = loc_0;
    }
    s6 = (a2 + 0x30);
    s0 = (a0 + 0x10);
    func_00163650((u32)&loc_0, a1, s5, s6, loc_0.w[0]);
    if ((s0 != (u32)frame)) {
        *(Q16*)(s0) = loc_0;
    }
    s0_0 = (a0 + 0x20);
    func_00163650((u32)&loc_0, a1, a2, s4, loc_0.w[0]);
    if ((s0_0 != (u32)frame)) {
        *(Q16*)(s0_0) = loc_0;
    }
    s0_1 = (a0 + 0x30);
    func_00163650((u32)&loc_0, a1, s6, a2, loc_0.w[0]);
    if ((s0_1 != (u32)frame)) {
        *(Q16*)(s0_1) = loc_0;
    }
    s0_2 = (a0 + 0x40);
    v0 = func_00163650((u32)&loc_0, a1, s4, s5, loc_0.w[0]);
    if ((s0_2 != (u32)frame)) {
        *(Q16*)(s0_2) = loc_0;
    }
    return v0;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0013f608(u32) asm("func_0013f608");

// 0x0013f648 func_0013f648
u32 func_0013f648(u32 a0) asm("func_0013f648");
u32 func_0013f648(u32 a0) {
    u32 t6;
    u32 t7;
    u32 v0;
    u32 t5;
    u32 t6_0;
    u32 t7_1;
    u32 a0_2;
    u32 t7_3;
    u32 t6_4;
    t6 = (a0 + 0x70);
    t7 = (a0 + 0x60);
    v0 = func_0013f608(a0);
    if ((t6 != t7)) {
        *(Q16*)(t6) = *(Q16*)(t7);
    }
    t5 = (a0 + 0x10);
    if ((t5 != t6)) {
        *(Q16*)(t5) = *(Q16*)(t6);
    }
    t6_0 = (a0 + 0x90);
    t7_1 = (a0 + 0x80);
    if ((t6_0 != t7_1)) {
        *(Q16*)(t6_0) = *(Q16*)(t7_1);
    }
    if ((a0 != t6_0)) {
        *(Q16*)(a0) = *(Q16*)(t6_0);
    }
    a0_2 = (a0 + 0xb0);
    t7_3 = (a0 + 0xa0);
    if ((a0_2 != t7_3)) {
        *(Q16*)(a0_2) = *(Q16*)(t7_3);
    }
    t6_4 = (a0 + 0x20);
    if ((t6_4 != a0_2)) {
        *(Q16*)(t6_4) = *(Q16*)(a0_2);
    }
    return v0;
}

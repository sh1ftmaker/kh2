// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00114580(u32) asm("func_00114580");

// 0x001888c8 func_001888c8
void func_001888c8(u32 a0) asm("_ZN2YS7PARTRAMC1Ev");
void func_001888c8(u32 a0) {
    u32 t3;
    u32 t4;
    *(u8*)((a0 + 4)) = 0x64;
    *(u8*)((a0 + 5)) = 0x64;
    *(u8*)((a0 + 6)) = 0x64;
    *(u8*)((a0 + 7)) = 0x64;
    *(u8*)((a0 + 9)) = 0;
    *(u8*)((a0 + 0xa)) = 0;
    *(u8*)((a0 + 0xb)) = 0;
    *(u8*)((a0 + 0xc)) = 0;
    *(u8*)((a0 + 0xd)) = 0;
    *(u8*)((a0 + 0xe)) = 0;
    *(u8*)((a0 + 0xf)) = 1;
    *(u8*)((a0 + 0x10)) = 1;
    *(u8*)((a0 + 0x11)) = 1;
    *(u8*)((a0 + 0x12)) = 0;
    t3 = 0xffffffff;
    t4 = 0x4f;
    do {
        *(u16*)(((a0 + ((t4 - 0x4f) * -2)) + 0x54)) = 0;
        t4 = (t4 + -1);
    } while ((t4 != t3));
    func_00114580(a0 + 0xf4);
    return;
}

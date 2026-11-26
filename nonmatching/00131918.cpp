// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001317a8(u32, u32) asm("func_001317a8");
extern "C" void func_0011b6a8(u32, u32) asm("func_0011b6a8");

// 0x00131918 func_00131918
u32 func_00131918(u32 a0, u32 a1) asm("func_00131918");
u32 func_00131918(u32 a0, u32 a1) {
    u32 s1;
    u32 s1_0;
    u32 v0;
    u32 t6;
    u32 v0_1;
    if (((s32)(*(u32*)((*(u32*)((a0 + 4)) + 0x2c))) == 0)) {
        s1 = (*(u32*)((a0 + 4)) + *(u32*)((*(u32*)((a0 + 4)) + 0x2c)));
        func_0011b6a8(a1, a1);
        v0_1 = 1;
    } else {
        s1_0 = (*(u32*)((a0 + 4)) + *(u32*)((*(u32*)((a0 + 4)) + 0x2c)));
        v0 = (func_001317a8(a0, a1) << 6);
        t6 = (s1_0 + v0);
        if ((a1 != t6)) {
            *(Q16*)(a1) = *(Q16*)(t6);
            *(Q16*)((a1 + 0x10)) = *(Q16*)((t6 + 0x10));
            *(Q16*)((a1 + 0x20)) = *(Q16*)((t6 + 0x20));
            *(Q16*)((a1 + 0x30)) = *(Q16*)((t6 + 0x30));
        }
        v0_1 = 0;
    }
    return v0_1;
}

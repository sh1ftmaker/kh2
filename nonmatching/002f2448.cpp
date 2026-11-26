// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_12000000 asm("D_12000000");
extern "C" u32 D_12000020 asm("D_12000020");
extern "C" u32 D_12000070 asm("D_12000070");
extern "C" u32 D_12000080 asm("D_12000080");
extern "C" u32 D_12000090 asm("D_12000090");
extern "C" u32 D_120000a0 asm("D_120000a0");
extern "C" u32 D_120000c0 asm("D_120000c0");
extern "C" u32 D_120000e0 asm("D_120000e0");
extern "C" u32 func_002f1fa8(u32) asm("func_002f1fa8");

// 0x002f2448 func_002f2448
u32 func_002f2448(u32 a0) asm("func_002f2448");
u32 func_002f2448(u32 a0) {
    u32 v0;
    if ((*(s16*)((func_002f1fa8(a0) + 6)) == 1)) {
        *(u64*)(&D_12000000) = *(u64*)(a0);
        *(u64*)((u32)&D_12000070) = *(u64*)((a0 + 0x10));
        *(u64*)((u32)&D_12000080) = *(u64*)((a0 + 0x18));
        *(u64*)((u32)&D_120000c0) = *(u64*)((a0 + 0x20));
        v0 = *(u64*)((a0 + 0x18));
    } else {
        *(u64*)(&D_12000000) = *(u64*)(a0);
        *(u64*)((u32)&D_12000020) = *(u64*)((a0 + 8));
        *(u64*)((u32)&D_12000090) = *(u64*)((a0 + 0x10));
        *(u64*)((u32)&D_120000a0) = *(u64*)((a0 + 0x18));
        *(u64*)((u32)&D_120000e0) = *(u64*)((a0 + 0x20));
        v0 = *(u64*)((a0 + 0x20));
    }
    return v0;
}

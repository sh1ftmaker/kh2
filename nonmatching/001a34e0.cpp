// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");

// 0x001a34e0 func_001a34e0
void func_001a34e0(u32 a0, u32 a1) asm("func_001a34e0");
void func_001a34e0(u32 a0, u32 a1) {
    u32 v0;
    u32 t5;
    u32 t5_0;
    u32 t6;
    u32 v0_1;
    v0 = func_001a80c8(a0);
    if (((s32)((*(u8*)((v0 + 3)) & 1)) != 0)) {
        t5 = ((*(u16*)((v0 + 0x12)) >> 5) << 2);
        t5_0 = (t5 + ((u32)&D_0032e020 + 0x11d0));
        t6 = (1 << (*(u16*)((v0 + 0x12)) & 0x1f));
        *(u32*)(t5_0) = (*(u32*)(t5_0) & ~((0 | t6)));
    } else {
        v0_1 = (*(u16*)((v0 + 0x12)) + (u32)&D_0032e020);
        if (((s32)(a1) < (s32)((*(u8*)((v0_1 + 0x1090)) & 0xff)))) {
            *(u8*)((v0_1 + 0x1090)) = (*(u8*)((v0_1 + 0x1090)) - a1);
        } else {
            *(u8*)((v0_1 + 0x1090)) = 0;
        }
    }
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003638d0 asm("D_003638d0");
extern "C" u32 D_01d5baa0 asm("D_01d5baa0");
extern "C" u32 func_001d9af8() asm("func_001d9af8");
extern "C" u32 func_001d9c68(u32) asm("func_001d9c68");
extern "C" u32 func_00312db8(u32, u32) asm("func_00312db8");
extern "C" void func_001d9ad8(u32) asm("func_001d9ad8");

// 0x001d9b40 func_001d9b40
u32 func_001d9b40() asm("func_001d9b40");
u32 func_001d9b40() {
    u8 frame[16];
    u32 v0;
    u32 t7;
    u32 t4;
    u32 a1_0;
    u32 s0;
    u32 s1;
    u32 s1_1;
    v0 = func_001d9af8();
    *(u8*)((v0 + (u32)&D_01d5baa0)) = 1;
    t7 = (u32)&D_01d5baa0;
    t4 = 0;
    a1_0 = 0;
    do {
        if ((*(u8*)(t7) == 0)) {
            *(u8*)(((u32)frame + a1_0)) = t4;
            a1_0 = (a1_0 + 1);
        }
        t4 = (t4 + 1);
        t7 = (t4 + (u32)&D_01d5baa0);
    } while (((s32)(t7) != 0));
    if (((s32)(a1_0) > 0)) {
        *(u32*)(&D_003638d0) = (*(u32*)(&D_003638d0) * 0x10dcd);
        s0 = (u64)((*(u32*)(&D_003638d0) * 0x10dcd));
        s1 = ((u32)((*(u8*)((v0 + (u32)&D_01d5baa0)) ^ 2)) < (u32)(1));
        *(u8*)((*(s8*)(((u32)frame + (s32)((u64)(func_00312db8((u32)(((u64)(s0) >> 0x20)), func_00312db8((u32)((a1_0 + -1)) + (u64)(1), (u32)(a1_0))))))) + (u32)&D_01d5baa0)) = 2;
        s1_1 = s1;
    } else {
        s1_1 = ((u32)((*(u8*)((v0 + (u32)&D_01d5baa0)) ^ 2)) < (u32)(1));
    }
    if (((s32)(func_001d9c68((u32)&D_01d5baa0)) != 0)) {
        func_001d9ad8(v0);
    }
    return s1_1;
}

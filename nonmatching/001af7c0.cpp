// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036d8b0 asm("D_0036d8b0");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");
extern "C" u32 func_0016e920(u32, u32) asm("func_0016e920");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x001af7c0 func_001af7c0
u32 func_001af7c0(u32 a0, u32 a1) asm("_ZN2YS8GAMEOVER10get_motionEj");
u32 func_001af7c0(u32 a0, u32 a1) {
    u8 frame[16];
    u32 s1;
    u32 v0;
    u32 t7;
    u32 s0;
    u32 t7_0;
    u32 v0_1;
    u32 t7_2;
    u32 t6;
    u32 t6_3;
    s1 = func_0016e920(a1, a1);
    v0 = func_00168b38(*(u32*)((a0 + 4)), 0xffffffff, 0);
    t7 = ((s32)(v0) != 0) ? ((u32)(0) < (u32)(*(u32*)((v0 + 8)))) : 0;
    if (((s32)((t7 & 0xff)) != 0)) {
        s0 = *(u32*)((v0 + 8));
        t7_0 = (*(s8*)(((u32)frame + 2)) << 0x10);
        func_002fee78((u32)frame, (u32)&D_0036d8b0, *(u8*)((s1 + 7)));
        v0_1 = func_00168b88(s0, 0xffffffff, (*(s8*)((u32)frame) | (*(s8*)(((u32)frame + 3)) << 0x18)) | (t7_0 | (*(s8*)(((u32)frame + 1)) << 8)), 2);
        t7_2 = ((s32)(v0_1) != 0) ? ((u32)(0) < (u32)(*(u32*)((v0_1 + 8)))) : 0;
        t6 = ((s32)((t7_2 & 0xff)) != 0) ? *(u32*)((func_00168b38(*(u32*)((v0_1 + 8)), 9, 0) + 8)) : 0;
        t6_3 = t6;
    } else {
        t6_3 = 0;
    }
    return t6_3;
}

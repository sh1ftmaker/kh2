// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e357e0 asm("D_01e357e0");
extern "C" u32 func_003059e0(u32, u32) asm("func_003059e0");
extern "C" u32 func_003059f0(u32, u32) asm("func_003059f0");
extern "C" void func_00308a80(u32, u32) asm("func_00308a80");

// 0x00308780 func_00308780
u32 func_00308780(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_00308780");
u32 func_00308780(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u8 frame[32];
    u32 v0;
    u32 s2;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    if (((s32)(((u32)((a3 + -0x10)) < (u32)(0x61))) == 0)) {
        v0_3 = 0;
    } else {
        if (((s32)(a6) > 0)) {
            *(u32*)((a2 + 4)) = a5;
            v0 = *(u8*)(a2);
            *(u32*)((u32)frame) = a4;
            *(u32*)(((u32)frame + 4)) = a5;
            *(u32*)(((u32)frame + 8)) = a6;
            *(u32*)(((u32)frame + 0xc)) = 0;
            *(u32*)(a2) = (v0 | (a6 << 8));
            if (((s32)((a1 & 4)) != 0)) {
                func_00308a80(a4, a6);
            }
            a6 = (1 << 4);
            s2 = 1;
        } else {
            *(u32*)(a2) = *(u8*)(a2);
            *(u32*)((a2 + 4)) = 0;
            a6 = (0 << 4);
            s2 = 0;
        }
        *(u32*)(((u32)frame + a6)) = a2;
        *(u32*)((((u32)frame + 4) + a6)) = *(u32*)(&D_01e357e0);
        *(u32*)((((u32)frame + 8) + a6)) = a3;
        *(u8*)(a2) = a3;
        *(u32*)((a2 + 8)) = a0;
        *(u32*)((((u32)frame + 0xc) + a6)) = 0x44;
        func_00308a80(a2, a3);
        if (((s32)((a1 & 1)) != 0)) {
            v0_0 = func_003059f0((u32)frame, s2 + 1);
            v0_2 = v0_0;
        } else {
            v0_1 = func_003059e0((u32)frame, s2 + 1);
            v0_2 = v0_1;
        }
        v0_3 = v0_2;
    }
    return v0_3;
}

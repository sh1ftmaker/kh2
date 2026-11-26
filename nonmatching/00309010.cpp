// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003780d0 asm("D_003780d0");
extern "C" u32 D_01e37200 asm("D_01e37200");
extern "C" u32 func_00305620(u32) asm("func_00305620");
extern "C" u32 func_003088b8(u32, u32, u32, u32, u32, u32) asm("func_003088b8");
extern "C" u32 func_00308cf8(u32, u32, u32, u32, u32) asm("func_00308cf8");
extern "C" void func_00305630(u32) asm("func_00305630");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_00308da0(u32) asm("func_00308da0");

// 0x00309010 func_00309010
void func_00309010(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_00309010");
void func_00309010(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u8 frame[32];
    u32 s0;
    u32 v0;
    u32 s0_0;
    if (((s32)(func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4)) != 0)) {
        *(u32*)(a0) = func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4);
        *(u32*)((a0 + 4)) = *(u32*)((func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4) + 0x18));
        *(u32*)((func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4) + 0x14)) = func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4);
        *(u32*)((func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4) + 0x1c)) = a0;
        *(u32*)((func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4) + 0x20)) = a1;
        *(u32*)((func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4) + 0x24)) = a2;
        *(u32*)((func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4) + 0x28)) = a3;
        if (((s32)((a4 & 1)) == 0)) {
            *(u32*)(((u32)frame + 4)) = 1;
            *(u32*)(((u32)frame + 8)) = 0;
            *(u32*)(((u32)frame + 0x14)) = (u32)&D_003780d0;
            s0 = func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4);
            v0 = func_00305620((u32)frame);
            *(u32*)((a0 + 8)) = v0;
            if (((s32)(v0) < 0)) {
                func_00308da0(s0);
            } else {
                if (((s32)(func_003088b8(0x8000000c, s0, 0x40, 0, 0, 0)) == 0)) {
                    func_00308da0(s0);
                } else {
                    func_00305660(*(u32*)((a0 + 8)));
                }
                func_00305630(*(u32*)((a0 + 8)));
            }
        } else {
            *(u32*)((a0 + 8)) = 0xffffffff;
            s0_0 = func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4);
            if (((s32)(func_003088b8(0x8000000c, func_00308cf8((u32)&D_01e37200, a1, a2, a3, a4), 0x40, 0, 0, 0)) == 0)) {
                func_00308da0(s0_0);
            }
        }
    }
    return;
}

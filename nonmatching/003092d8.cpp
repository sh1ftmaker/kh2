// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003780e0 asm("D_003780e0");
extern "C" u32 D_01e37200 asm("D_01e37200");
extern "C" u32 func_00305620(u32) asm("func_00305620");
extern "C" u32 func_003088b8(u32, u32, u32, u32, u32, u32) asm("func_003088b8");
extern "C" u32 func_00308cf8(u32, u32, u32) asm("func_00308cf8");
extern "C" void func_00305630(u32) asm("func_00305630");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_00308da0(u32) asm("func_00308da0");

// 0x003092d8 func_003092d8
void func_003092d8(u32 a0, u32 a1, u32 a2) asm("func_003092d8");
void func_003092d8(u32 a0, u32 a1, u32 a2) {
    u8 frame[32];
    u32 s0;
    u32 v0;
    u32 s0_0;
    *(u32*)((a0 + 0x10)) = 0;
    *(u32*)((a0 + 0x24)) = 0;
    if (((s32)(func_00308cf8((u32)&D_01e37200, a1, a2)) != 0)) {
        *(u32*)(a0) = func_00308cf8((u32)&D_01e37200, a1, a2);
        *(u32*)((a0 + 4)) = *(u32*)((func_00308cf8((u32)&D_01e37200, a1, a2) + 0x18));
        *(u32*)((func_00308cf8((u32)&D_01e37200, a1, a2) + 0x14)) = func_00308cf8((u32)&D_01e37200, a1, a2);
        *(u32*)((func_00308cf8((u32)&D_01e37200, a1, a2) + 0x1c)) = a0;
        *(u32*)((func_00308cf8((u32)&D_01e37200, a1, a2) + 0x20)) = a1;
        if (((s32)((a2 & 1)) == 0)) {
            *(u32*)(((u32)frame + 4)) = 1;
            *(u32*)(((u32)frame + 8)) = 0;
            *(u32*)(((u32)frame + 0x14)) = (u32)&D_003780e0;
            s0 = func_00308cf8((u32)&D_01e37200, a1, a2);
            v0 = func_00305620((u32)frame);
            *(u32*)((a0 + 8)) = v0;
            if (((s32)(v0) < 0)) {
                func_00308da0(s0);
            } else {
                if (((s32)(func_003088b8(0x80000009, s0, 0x40, 0, 0, 0)) == 0)) {
                    func_00308da0(s0);
                } else {
                    func_00305660(*(u32*)((a0 + 8)));
                }
                func_00305630(*(u32*)((a0 + 8)));
            }
        } else {
            *(u32*)((a0 + 8)) = 0xffffffff;
            s0_0 = func_00308cf8((u32)&D_01e37200, a1, a2);
            if (((s32)(func_003088b8(0x80000009, func_00308cf8((u32)&D_01e37200, a1, a2), 0x40, 0, 0, 0)) == 0)) {
                func_00308da0(s0_0);
            }
        }
    }
    return;
}

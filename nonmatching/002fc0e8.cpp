// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002fc038 asm("D_002fc038");
extern "C" u32 D_00365948 asm("D_00365948");
extern "C" u32 D_0036594c asm("D_0036594c");
extern "C" u32 D_01e33480 asm("D_01e33480");
extern "C" u32 D_01e33500 asm("D_01e33500");
extern "C" u32 D_01e33980 asm("D_01e33980");
extern "C" u32 D_01e34a40 asm("D_01e34a40");
extern "C" u32 func_00305670(u32, u32, u32) asm("func_00305670");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_00308a80(u32, u32) asm("func_00308a80");

// 0x002fc0e8 func_002fc0e8
u32 func_002fc0e8(u32 a0, u32 a1, u32 a2) asm("func_002fc0e8");
u32 func_002fc0e8(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u32*)(((u32)&D_01e33480 + 0x24))) == 0)) {
        v0_1 = 0xffffff9c;
    } else {
        if (((s32)(func_00305670(*(u32*)(&D_0036594c), a1, a2)) < 0)) {
            v0_0 = 0xffffff38;
        } else {
            *(u32*)(&D_01e33500) = a0;
            *(u32*)(((u32)&D_01e33500 + 0xc)) = a2;
            *(u32*)(((u32)&D_01e33500 + 0x18)) = a1;
            *(u32*)(((u32)&D_01e33500 + 0x1c)) = (u32)&D_01e33980;
            func_00308a80(a1, a2);
            func_00308a80((u32)&D_01e33980, 0xc0);
            loc_0 = (u32)&D_01e33980;
            if (((s32)(func_003094b8((u32)&D_01e33480, 5, 1, (u32)&D_01e33500, 0x30, (u32)&D_01e34a40, 4, (u32)&D_002fc038)) != 0)) {
                func_00305640(*(u32*)(&D_0036594c));
                v0 = 0xffffffa5;
            } else {
                *(u32*)(&D_00365948) = 5;
                v0 = 0;
            }
            v0_0 = v0;
        }
        v0_1 = v0_0;
    }
    return v0_1;
}

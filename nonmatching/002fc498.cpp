// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002fc440 asm("D_002fc440");
extern "C" u32 D_00365948 asm("D_00365948");
extern "C" u32 D_0036594c asm("D_0036594c");
extern "C" u32 D_01e33480 asm("D_01e33480");
extern "C" u32 D_01e334a8 asm("D_01e334a8");
extern "C" u32 D_01e334ac asm("D_01e334ac");
extern "C" u32 D_01e334b0 asm("D_01e334b0");
extern "C" u32 D_01e33500 asm("D_01e33500");
extern "C" u32 D_01e33980 asm("D_01e33980");
extern "C" u32 D_01e34a40 asm("D_01e34a40");
extern "C" u32 func_00305670(u32, u32, u32, u32, u32) asm("func_00305670");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_00308a80(u32, u32, u32) asm("func_00308a80");

// 0x002fc498 func_002fc498
u32 func_002fc498(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_002fc498");
u32 func_002fc498(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u32*)(((u32)&D_01e33480 + 0x24))) == 0)) {
        v0_1 = 0xffffff9c;
    } else {
        if (((s32)(func_00305670(*(u32*)(&D_0036594c), a1, a2, a3, a4)) < 0)) {
            v0_0 = 0xffffff38;
        } else {
            *(u32*)(((u32)&D_01e33500 + 4)) = a0;
            *(u32*)(((u32)&D_01e33500 + 8)) = a1;
            *(u32*)(((u32)&D_01e33500 + 0x1c)) = (u32)&D_01e33980;
            if (((s32)(a2) != 0)) {
                *(u32*)(((u32)&D_01e33500 + 0x14)) = 1;
            } else {
                *(u32*)(((u32)&D_01e33500 + 0x14)) = 0;
            }
            if (((s32)(a3) != 0)) {
                *(u32*)(((u32)&D_01e33500 + 0x10)) = 1;
            } else {
                *(u32*)(((u32)&D_01e33500 + 0x10)) = 0;
            }
            if (((s32)(a4) != 0)) {
                *(u32*)(((u32)&D_01e33500 + 0xc)) = 1;
            } else {
                *(u32*)(((u32)&D_01e33500 + 0xc)) = 0;
            }
            *(u32*)(&D_01e334a8) = a2;
            *(u32*)(&D_01e334ac) = a3;
            *(u32*)(&D_01e334b0) = a4;
            func_00308a80((u32)&D_01e33980, 0xc0, 0x1e30000);
            *(u32*)((u32)frame) = (u32)&D_01e33980;
            if (((s32)(func_003094b8((u32)&D_01e33480, 1, 1, (u32)&D_01e33500, 0x30, (u32)&D_01e34a40, 4, (u32)&D_002fc440)) != 0)) {
                func_00305640(*(u32*)(&D_0036594c));
                v0 = 0xffffffa5;
            } else {
                *(u32*)(&D_00365948) = 1;
                v0 = 0;
            }
            v0_0 = v0;
        }
        v0_1 = v0_0;
    }
    return v0_1;
}

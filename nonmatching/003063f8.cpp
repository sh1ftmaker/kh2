// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00306320 asm("D_00306320");
extern "C" u32 D_003660d0 asm("D_003660d0");
extern "C" u32 D_00377e50 asm("D_00377e50");
extern "C" u32 D_0037a800 asm("D_0037a800");
extern "C" u32 D_01e34a80 asm("D_01e34a80");
extern "C" u32 D_01e34e80 asm("D_01e34e80");
extern "C" u32 D_01e34e88 asm("D_01e34e88");
extern "C" u32 func_00305420(u32, u32, u32) asm("func_00305420");
extern "C" u32 func_00305510() asm("func_00305510");
extern "C" u32 func_00305620(u32) asm("func_00305620");
extern "C" void func_003054b0(u32, u32) asm("func_003054b0");
extern "C" void func_00305630(u32) asm("func_00305630");
extern "C" void func_00306760(u32, u32) asm("func_00306760");

// 0x003063f8 func_003063f8
u32 func_003063f8() asm("func_003063f8");
u32 func_003063f8() {
    u8 frame[68];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u32*)(&D_003660d0)) <= 0)) {
        *(u32*)(((u32)frame + 0x34)) = 0xff;
        *(u32*)(((u32)frame + 0x38)) = 0;
        v0 = func_00305620((u32)frame + 0x30);
        *(u32*)(&D_01e34e80) = v0;
        if (((s32)(v0) >= 0)) {
            *(u32*)(((u32)frame + 4)) = (u32)&D_00306320;
            *(u32*)(((u32)frame + 8)) = (u32)&D_01e34a80;
            *(u32*)(((u32)frame + 0xc)) = 0x400;
            *(u32*)(((u32)frame + 0x10)) = (u32)&D_0037a800;
            *(u32*)(((u32)frame + 0x14)) = 0;
            *(u32*)(((u32)frame + 0x20)) = (u32)&D_00377e50;
            *(u32*)(&D_003660d0) = func_00305420((u32)frame, (u32)&D_0037a800, 0x400);
            if (((s32)(func_00305420((u32)frame, (u32)&D_0037a800, 0x400)) < 0)) {
                func_00305630(*(u32*)(&D_01e34e80));
                v0_0 = 0xffffffff;
            } else {
                *(u32*)(&D_01e34e88) = 0;
                *(u32*)(((u32)&D_01e34e88 + 4)) = 0;
                func_00306760(func_00305420((u32)frame, (u32)&D_0037a800, 0x400), (u32)&D_01e34e88);
                func_003054b0(func_00305510(), 1);
                v0_0 = *(u32*)(&D_003660d0);
            }
            v0 = v0_0;
        } else {
            v0 = 0xffffffff;
        }
        v0_1 = v0;
    } else {
        v0_1 = 0xffffffff;
    }
    return v0_1;
}

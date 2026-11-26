// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002fbba8 asm("D_002fbba8");
extern "C" u32 D_003778b0 asm("D_003778b0");
extern "C" u32 D_01e33480 asm("D_01e33480");
extern "C" u32 D_01e33500 asm("D_01e33500");
extern "C" u32 D_01e34a40 asm("D_01e34a40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_003080d0(u32) asm("func_003080d0");

// 0x002fc618 func_002fc618
u32 func_002fc618() asm("func_002fc618");
u32 func_002fc618() {
    u32 loc_0;
    u32 v0;
    loc_0 = 0;
    if (((s32)(func_003094b8((u32)&D_01e33480, 0x35, 0, (u32)&D_01e33500, 0x30, (u32)&D_01e34a40, 4, (u32)&D_002fbba8)) != 0)) {
        func_003080d0((u32)&D_003778b0);
        v0 = 0xffffffa5;
    } else {
        v0 = *(u32*)(&D_01e34a40);
    }
    return v0;
}

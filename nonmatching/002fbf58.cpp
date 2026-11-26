// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002fbba8 asm("D_002fbba8");
extern "C" u32 D_00365948 asm("D_00365948");
extern "C" u32 D_0036594c asm("D_0036594c");
extern "C" u32 D_01e33480 asm("D_01e33480");
extern "C" u32 D_01e33500 asm("D_01e33500");
extern "C" u32 D_01e34a40 asm("D_01e34a40");
extern "C" u32 func_00305670(u32, u32, u32) asm("func_00305670");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_00305640(u32) asm("func_00305640");

// 0x002fbf58 func_002fbf58
void func_002fbf58(u32 a0, u32 a1, u32 a2) asm("func_002fbf58");
void func_002fbf58(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    if (((s32)(*(u32*)(((u32)&D_01e33480 + 0x24))) != 0)) {
        if (((s32)(func_00305670(*(u32*)(&D_0036594c), a1, a2)) >= 0)) {
            loc_0 = 0;
            *(u32*)(&D_01e33500) = a0;
            *(u32*)(((u32)&D_01e33500 + 0x10)) = a1;
            *(u32*)(((u32)&D_01e33500 + 0x14)) = a2;
            if (((s32)(func_003094b8((u32)&D_01e33480, 4, 1, (u32)&D_01e33500, 0x30, (u32)&D_01e34a40, 4, (u32)&D_002fbba8)) != 0)) {
                func_00305640(*(u32*)(&D_0036594c));
            } else {
                *(u32*)(&D_00365948) = 4;
            }
        }
    }
    return;
}

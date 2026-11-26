// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036594c asm("D_0036594c");
extern "C" u32 D_01e33480 asm("D_01e33480");
extern "C" u32 D_01e33500 asm("D_01e33500");
extern "C" u32 D_01e34a40 asm("D_01e34a40");
extern "C" u32 func_00305670(u32) asm("func_00305670");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_00305640(u32) asm("func_00305640");

// 0x002fbc78 func_002fbc78
u32 func_002fbc78(u32 a0) asm("func_002fbc78");
u32 func_002fbc78(u32 a0) {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u32*)(((u32)&D_01e33480 + 0x24))) == 0)) {
        v0_1 = 0xffffff9c;
    } else {
        if (((s32)(func_00305670(*(u32*)(&D_0036594c))) < 0)) {
            v0_0 = 0xffffff38;
        } else {
            loc_0 = 0;
            *(u32*)(((u32)&D_01e33500 + 4)) = a0;
            if (((s32)(func_003094b8((u32)&D_01e33480, 0x15, 0, (u32)&D_01e33500, 0x30, (u32)&D_01e34a40, 4, 0)) != 0)) {
                func_00305640(*(u32*)(&D_0036594c));
                v0 = 0xffffffa5;
            } else {
                func_00305640(*(u32*)(&D_0036594c));
                v0 = *(u32*)(&D_01e34a40);
            }
            v0_0 = v0;
        }
        v0_1 = v0_0;
    }
    return v0_1;
}

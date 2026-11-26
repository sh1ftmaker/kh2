// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00363dac asm("D_00363dac");
extern "C" u32 D_00363de0 asm("D_00363de0");
extern "C" u32 D_00364f80 asm("D_00364f80");
extern "C" u32 D_00365900 asm("D_00365900");
extern "C" u32 func_002f72c0(u32) asm("func_002f72c0");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_00305640(u32) asm("func_00305640");

// 0x002f7e60 func_002f7e60
void func_002f7e60() asm("func_002f7e60");
void func_002f7e60() {
    u32 loc_0;
    u32 s0;
    if (((s32)(func_002f72c0(0x1e)) != 0)) {
        loc_0 = 0;
        *(u32*)(&D_00363de0) = 8;
        if (((s32)(func_003094b8((u32)&D_00365900, 0x16, 0, 0, 0, (u32)&D_00364f80, 4, 0)) < 0)) {
            func_00305640(*(u32*)(&D_00363dac));
            *(u32*)(&D_00363de0) = 0;
        } else {
            *(u32*)(&D_00363de0) = 0;
            s0 = *(u32*)(((u32)&D_00364f80 | 0x20000000));
            func_00305640(*(u32*)(&D_00363dac));
        }
    }
    return;
}

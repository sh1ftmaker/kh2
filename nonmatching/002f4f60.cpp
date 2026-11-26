// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00363d10 asm("D_00363d10");
extern "C" u32 D_00376920 asm("D_00376920");
extern "C" u32 D_01e2d980 asm("D_01e2d980");
extern "C" u32 D_01e2da80 asm("D_01e2da80");
extern "C" u32 D_01e2fe40 asm("D_01e2fe40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_002f5c48(u32) asm("func_002f5c48");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_00305660(u32) asm("func_00305660");

// 0x002f4f60 func_002f4f60
u32 func_002f4f60(u32 a0) asm("func_002f4f60");
u32 func_002f4f60(u32 a0) {
    u32 loc_0;
    u32 s0;
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)(&D_00363d10)) == 0)) {
        v0_0 = 0;
    } else {
        func_00305660(*(u32*)(&D_01e2fe40));
        *(u32*)(&D_01e2da80) = a0;
        loc_0 = 0;
        if (((s32)(func_003094b8((u32)&D_01e2d980, 0x80001302, 0, (u32)&D_01e2da80, 0x90, (u32)&D_01e2da80, 0x90, 0)) < 0)) {
            func_002f5c48((u32)&D_00376920);
            func_00305640(*(u32*)(&D_01e2fe40));
            v0 = 0;
        } else {
            s0 = *(u32*)(((u32)&D_01e2da80 + 4));
            func_00305640(*(u32*)(&D_01e2fe40));
            v0 = s0;
        }
        v0_0 = v0;
    }
    return v0_0;
}

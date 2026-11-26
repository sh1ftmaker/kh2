// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00363dac asm("D_00363dac");
extern "C" u32 D_00364f80 asm("D_00364f80");
extern "C" u32 D_003653c0 asm("D_003653c0");
extern "C" u32 D_00365900 asm("D_00365900");
extern "C" u32 D_00365928 asm("D_00365928");
extern "C" u32 D_0036592c asm("D_0036592c");
extern "C" u32 D_00365930 asm("D_00365930");
extern "C" u32 func_002f72c0(u32) asm("func_002f72c0");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_00308a80(u32, u32) asm("func_00308a80");

// 0x002f7f18 func_002f7f18
u32 func_002f7f18(u32 a0) asm("func_002f7f18");
u32 func_002f7f18(u32 a0) {
    u32 loc_0;
    u32 s0;
    u32 v0;
    u32 v0_0;
    if ((func_002f72c0(0x22) == 0)) {
        v0_0 = 0;
    } else {
        *(u32*)(&D_003653c0) = a0;
        func_00308a80((u32)&D_003653c0, 4);
        loc_0 = 0;
        if (((s32)(func_003094b8((u32)&D_00365900, *(u32*)(&D_00365928), 0, (u32)&D_003653c0, *(u32*)(&D_0036592c), (u32)&D_00364f80, *(u32*)(&D_00365930), 0)) < 0)) {
            func_00305640(*(u32*)(&D_00363dac));
            v0 = 0;
        } else {
            s0 = *(u32*)(((u32)&D_00364f80 | 0x20000000));
            func_00305640(*(u32*)(&D_00363dac));
            v0 = s0;
        }
        v0_0 = v0;
    }
    return v0_0;
}

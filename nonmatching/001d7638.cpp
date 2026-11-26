// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001d76c8 asm("D_001d76c8");
extern "C" u32 D_003527e4 asm("D_003527e4");
extern "C" u32 D_0036e600 asm("D_0036e600");
extern "C" u32 D_0036e620 asm("D_0036e620");
extern "C" u32 func_001a5420(u32, u32, u32) asm("func_001a5420");
extern "C" u32 func_001ba158() asm("func_001ba158");
extern "C" u32 func_001bb4a0(u32) asm("func_001bb4a0");
extern "C" void func_001d8718(u32, u32) asm("func_001d8718");

// 0x001d7638 func_001d7638
void func_001d7638(u32 a0, u32 a1) asm("func_001d7638");
void func_001d7638(u32 a0, u32 a1) {
    u32 v0;
    u32 s0;
    u32 v0_0;
    v0 = func_001a5420(*(u32*)(&D_003527e4), (a1 << 4) + (u32)&D_0036e600, a0);
    if (((s32)(v0) != 0)) {
        *(u32*)((v0 + 0x10)) = (u32)&D_001d76c8;
        s0 = *(u32*)(((a1 << 2) + (u32)&D_0036e620));
        if (((s32)(func_001bb4a0((a1 << 2) + (u32)&D_0036e620)) != 0)) {
            func_001d8718(s0, 0);
            v0_0 = func_001ba158();
            *(u32*)((v0_0 + 4)) = (*(u32*)((v0_0 + 4)) + s0);
        }
    }
    return;
}

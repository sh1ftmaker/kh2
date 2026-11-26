// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 _Z13func_00226030Pv asm("_Z13func_00226030Pv");
extern "C" u32 func_00168388(u32, u32, u32, u32) asm("func_00168388");
extern "C" u32 func_00227870(u32, u32, u32) asm("func_00227870");
extern "C" u32 func_00227a60(u32, u32) asm("func_00227a60");
extern "C" u32 func_00232498(u32) asm("func_00232498");
extern "C" void func_002ff2e8(u32, u32) asm("func_002ff2e8");

// 0x00232510 func_00232510
u32 func_00232510(u32 a0, u32 a1) asm("_ZN2sa5EVENT14audio_read_setEPcNS_11EVENT_ALLOC10ALLOC_TYPEE");
u32 func_00232510(u32 a0, u32 a1) {
    u32 s1;
    u32 v0;
    s1 = func_00227a60(a0, 3);
    func_002ff2e8(s1 + 0x30, func_00232498(a0));
    v0 = func_00227870(s1 + 0x30, s1, a1);
    *(u32*)((s1 + 0x14)) = v0;
    return func_00168388(s1 + 0x30, v0, (u32)&_Z13func_00226030Pv, s1);
}

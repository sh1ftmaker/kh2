// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00367118 asm("D_00367118");
extern "C" u32 D_10001000 asm("D_10001000");
extern "C" u32 func_0030edb0() asm("func_0030edb0");
extern "C" void func_0030ee00(u32) asm("func_0030ee00");

// 0x0030ff58 func_0030ff58
u32 func_0030ff58() asm("func_0030ff58");
u32 func_0030ff58() {
    u32 t2;
    u32 s0;
    func_0030edb0();
    t2 = ((s32)((*(u32*)(((u32)&D_10001000 + 0x10)) & 0x800)) != 0) ? (*(u64*)(&D_00367118) + 1) : *(u64*)(&D_00367118);
    s0 = ((u64)((*(u32*)((u32)&D_10001000) | (t2 << 0x10))) << ((u64)(((*(u32*)(((u32)&D_10001000 + 0x10)) & 3) ? 2 : 0)) << (*(u32*)(((u32)&D_10001000 + 0x10)) & 3)));
    if (((s32)(func_0030edb0()) != 0)) {
        func_0030ee00(0x360000);
    }
    return s0;
}

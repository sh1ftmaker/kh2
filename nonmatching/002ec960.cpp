// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01e2c050 asm("D_01e2c050");
extern "C" u32 func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" void func_002cbec0(u32, u32) asm("func_002cbec0");
extern "C" void func_002eaf48(u32, u32, u32) asm("func_002eaf48");

// 0x002ec960 wtarget_002ec960(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_002ec960(u32 a0) asm("_Z16wtarget_002ec960jjjj");
u32 lift_002ec960(u32 a0) {
    u8 frame[16];
    u32 s0;
    s0 = *(u32*)((a0 + 0x508));
    func_002cbec0(s0, func_0016c028(a0));
    func_002eaf48((u32)frame, a0, 1);
    if (((u32)frame != (u32)&D_01e2c050)) {
        *(Q16*)((u32)&D_01e2c050) = *(Q16*)((u32)frame);
    }
    return func_0016bd60(a0, 0x3d);
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001c71f8(u32, f32) asm("func_001c71f8");

// 0x001d7730 ctarget_001d7730(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036e5f8   (float literals live here in the original)
u32 lift_001d7730(u32 a0) asm("_Z16ctarget_001d7730jjjj");
u32 lift_001d7730(u32 a0) {
    func_001c71f8(a0, -0.800000011920929f);
    return ((u32(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x50))) + 0x58))))(*(u32*)((a0 + 0x50)), a0);
}

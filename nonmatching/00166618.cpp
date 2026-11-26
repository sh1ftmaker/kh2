// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c7b0 asm("D_0034c7b0");
extern "C" u32 func_002f2be0(u32, u32) asm("func_002f2be0");
extern "C" void func_002f28b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002f28b8");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x00166618 func_00166618
u32 func_00166618(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_00166618");
u32 func_00166618(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    func_002f28b8((a6 * 0x60) + (u32)&D_0034c7b0, (s32)((a2 << 0x10)) >> 0x10, (s32)(((s32)((a3 << 0x10)) >> 0x10)) >> 6, (s32)((a1 << 0x10)) >> 0x10, 0, (s32)((a5 << 0x10)) >> 0x10, (s32)((a3 << 0x10)) >> 0x10, (s32)((a4 << 0x10)) >> 0x10);
    func_003058a0(0);
    return func_002f2be0((a6 * 0x60) + (u32)&D_0034c7b0, a0);
}

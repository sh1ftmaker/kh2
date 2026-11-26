// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_001780d8(u32) asm("func_001780d8");
extern "C" void func_0017a7d8(u32) asm("func_0017a7d8");
extern "C" void func_00198860(u32, u32) asm("func_00198860");

// 0x002dd730 func_002dd730
// minilink-rodata 0x00375dd8   (float literals live here in the original)
f32 func_002dd730(u32 a0) asm("_ZN2Ti12MGJumpPlayer15_OVR_initializeEv");
f32 func_002dd730(u32 a0) {
    u32 t6;
    u32 t7;
    func_001780d8(a0);
    t6 = (a0 + 0xbf0);
    t7 = (a0 + 0x540);
    func_00198860(a0, 8);
    if ((t6 != t7)) {
        *(Q16*)(t6) = *(Q16*)(t7);
    }
    func_0017a7d8(a0);
    *(f32*)((a0 + 0xc00)) = 1.0f;
    return 1.0f;
}

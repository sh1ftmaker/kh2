// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_0011b6a8(u32, u32, u32) asm("func_0011b6a8");
extern "C" void func_0011b7b0(u32, u32) asm("func_0011b7b0");

// 0x0017d8c0 func_0017d8c0
// minilink-rodata 0x0036c574   (float literals live here in the original)
void func_0017d8c0(u32 a0, u32 a1, u32 a2) asm("func_0017d8c0");
void func_0017d8c0(u32 a0, u32 a1, u32 a2) {
    func_0011b6a8(a0, a1, a2);
    func_0011b7b0(a0, a1);
    if (((a0 + 0x30) != a2)) {
        *(Q16*)((a0 + 0x30)) = *(Q16*)(a2);
    }
    *(f32*)(((a0 + 0x30) + 0xc)) = 1.0f;
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_00193608(u32) asm("func_00193608");
extern "C" void func_001ba028(u32, u32) asm("func_001ba028");

// 0x0016ace0 YS::OBJ::set_pos(kn::FVector const&)
// minilink-rodata 0x0036c1b4   (float literals live here in the original)
void lift_0016ace0(u32 a0, u32 a1) asm("_ZN2YS3OBJ7set_posERKN2kn7FVectorE");
void lift_0016ace0(u32 a0, u32 a1) {
    func_001ba028(a0, a1);
    if (((a0 + 0x540) != a1)) {
        *(Q16*)((a0 + 0x540)) = *(Q16*)(a1);
    }
    *(f32*)((a0 + 0x54c)) = 1.0f;
    func_00193608(a0);
    return;
}

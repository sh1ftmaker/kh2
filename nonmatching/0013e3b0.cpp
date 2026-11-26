// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001391a8(u32, u32) asm("func_001391a8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x0013e3b0 dk::LockOn::setPos(kn::FVector const&)
u32 lift_0013e3b0(u32 a0, u32 a1) asm("_ZN2dk6LockOn6setPosERKN2kn7FVectorE");
u32 lift_0013e3b0(u32 a0, u32 a1) {
    Q16 loc_0;
    u32 v0;
    u32 v0_0;
    loc_0 = *(Q16*)(a1);
    func_001391a8(a0, (u32)&loc_0);
    v0 = func_00139d78(a0 + 0x1c0);
    if ((v0 != 0)) {
        loc_0 = *(Q16*)(a1);
        v0_0 = func_001391a8(a0 + 0x1c0, (u32)&loc_0);
        v0 = v0_0;
    }
    return v0;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00242b58(u32) asm("func_00242b58");

// 0x001585a0 dk::CameraConfig::isManual(YS::PAD*)
u32 lift_001585a0(u32 a0) asm("_ZN2dk12CameraConfig8isManualEPN2YS3PADE");
u32 lift_001585a0(u32 a0) {
    u32 t7;
    t7 = *(u64*)(a0);
    return (func_00242b58(a0) ? ((t7 & (u64)(1)) ? 1 : 0) : ((u32)(((t7 & (u64)(1)) ? 1 : 0)) < (u32)(1)));
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016ace0(u32, u32) asm("func_0016ace0");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_001a7610(u32, u32, u32, f32, f32) asm("func_001a7610");

// 0x001852b8 func_001852b8
// minilink-rodata 0x0036c8cc   (float literals live here in the original)
u32 func_001852b8(u32 a0) asm("_ZN2YS3OBJ14set_ground_posEv");
u32 func_001852b8(u32 a0) {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    v0 = func_001a7610(func_0016c028(a0), (u32)&loc_0, ((s32)((*(u64*)((a0 + 0x600)) << 0x1d)) & 0xf) | 0x10000, 100000.0f, 200.0f);
    if (((s32)(v0) != 0)) {
        v0_0 = func_0016ace0(a0, (u32)&loc_0);
        v0 = v0_0;
    }
    return v0;
}

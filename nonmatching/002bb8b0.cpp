// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_002b740c(u32, u32, u32, u32) asm("func_002b740c");

// 0x002bb8b0 func_002bb8b0
// minilink-rodata 0x00374fa4   (float literals live here in the original)
f32 func_002bb8b0(u32 a0) asm("_ZN4SE3D11checkVolumeEv");
f32 func_002bb8b0(u32 a0) {
    f32 f0;
    f32 f0_0;
    if ((*(u8*)((a0 + 0x31)) != 3)) {
        func_002b740c(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), 0);
        f0 = ((*(u32*)((a0 + 0x24)) & 4) != 0) ? (s32)(((f32)((s32)(*(s16*)((a0 + 0x28)))) * 0.800000011920929f)) : func_002b740c(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), 0);
        if (((s32)((*(u32*)((a0 + 0x24)) & 8)) != 0)) {
            func_002b740c(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), 1);
            f0 = func_002b740c(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), 1);
        }
        f0_0 = f0;
    }
    return f0_0;
}

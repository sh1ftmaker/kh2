// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034aa08 asm("D_0034aa08");
extern "C" u32 func_00162058(f32) asm("func_00162058");
extern "C" u32 func_00162098(u32) asm("func_00162098");

// 0x00159308 func_00159308
// minilink-rodata 0x0036b334   (float literals live here in the original)
void func_00159308(u32 a0) asm("func_00159308");
void func_00159308(u32 a0) {
    if (((s32)((*(u64*)((a0 + 8)) & 0x400000)) != 0)) {
        if (((s32)(func_00162098(a0)) == 0)) {
            *(u32*)(&D_0034aa08) = (*(u32*)(&D_0034aa08) ^ 1);
            func_00162058(12.0f);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

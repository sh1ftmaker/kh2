// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00106c08(u32) asm("func_00106c08");
extern "C" void func_00106d40(u32, u32, u32, u32, f32, f32, f32, f32, f32, f32, f32, f32) asm("func_00106d40");
extern "C" void func_00106de8(u32, u32, f32) asm("func_00106de8");

// 0x0023dd28 func_0023dd28
// minilink-rodata 0x00371534   (float literals live here in the original)
f32 func_0023dd28(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2Tz7MenuObj16SetProjectionPosEiii");
f32 func_0023dd28(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[32];
    *(f32*)((u32)frame) = 4000000.0f;
    *(f32*)(((u32)frame + 8)) = 256.0f;
    *(f32*)(((u32)frame + 0x10)) = 208.0f;
    func_00106d40((a0 + (a1 * 0x190)) + 0x20, a1 * 0x190, a2 + 0x800, a3 + 0x800, 512.0f, 0.7999999523162842f, 0.8666666150093079f, (f32)((s32)((a2 + 0x800))), (f32)((s32)((a3 + 0x800))), 1.0f, 16770000.0f, 1.0f);
    func_00106de8((a0 + (a1 * 0x190)) + 0x20, 0, 0.6981316804885864f);
    return func_00106c08((a0 + (a1 * 0x190)) + 0x20);
}

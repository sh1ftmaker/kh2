// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");

// 0x001c38c0 func_001c38c0
// minilink-rodata 0x0036de08   (float literals live here in the original)
void func_001c38c0(u32 a0, u32 a1) asm("_ZN2YS15ACTION_AIRSLIDE7controlEPNS_3OBJE");
void func_001c38c0(u32 a0, u32 a1) {
    f32 f0;
    if ((0.0f < *(f32*)((a1 + 0xf4)))) {
        u32 cse0 = (a1 + 0xf4);
        f0 = ((s32)((*(u32*)((a1 + 0x10c)) & 4)) != 0) ? (*(f32*)cse0 - *(f32*)(&D_00349e10)) : 0.0f;
        *(f32*)cse0 = f0;
        if ((*(f32*)((a1 + 0xf4)) <= 0.0f)) {
            *(f32*)((a1 + 0xf0)) = *(f32*)((a1 + 0xf8));
            func_0017f488(a1 + 0x140, 0xcc, 0.0f, 0.0f);
            func_0017f5e0(a1 + 0x140, 4, 0, 8.0f, 0.0f);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

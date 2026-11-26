// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" f32 func_00175b68(u32) asm("func_00175b68");
extern "C" u32 func_00141080(u32) asm("func_00141080");
extern "C" u32 func_001b9d40(u32) asm("func_001b9d40");
extern "C" void func_001835a0(u32, f32) asm("func_001835a0");

// 0x001789b8 wtarget_001789b8(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036c4d4   (float literals live here in the original)
void lift_001789b8(u32 a0) asm("_Z16wtarget_001789b8jjjj");
void lift_001789b8(u32 a0) {
    u32 t6;
    u32 t6_0;
    if (((s32)(func_00141080(a0)) != 0)) {
        if (((s32)(func_001b9d40(a0)) != 0)) {
            t6 = *(u32*)((a0 + 0xb38));
            t6_0 = *(u64*)(t6);
            if (((s32)((t6_0 & 0x100000)) != 0)) {
                func_001835a0(a0, *(f32*)(&D_00349e10) * -0.05235987901687622f);
            } else {
                if (((s32)((t6_0 & 0x200000)) != 0)) {
                    func_001835a0(a0, *(f32*)(&D_00349e10) * 0.05235987901687622f);
                }
            }
        }
    }
    func_00175b68(a0);
    return;
}

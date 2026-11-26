// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00340eb0 asm("D_00340eb0");
extern "C" u32 D_00808080 asm("D_00808080");
extern "C" u32 D_00ffffff asm("D_00ffffff");

// 0x0015cc80 func_0015cc80
// minilink-rodata 0x0036b3f8   (float literals live here in the original)
void func_0015cc80(u32 a0) asm("_ZNK2dk6Sphere9testPlaneERNS_5PlaneERf");
void func_0015cc80(u32 a0) {
    if ((*(f32*)((a0 + 0xc)) == 0.0f)) {
        if ((*(f32*)((a0 + 0x10)) == 255.0f)) {
            if (((*(u32*)(a0) & (u32)&D_00ffffff) == (u32)&D_00808080)) {
                *(u8*)(&D_00340eb0) = 0;
                return;
            } else {
                *(u8*)(&D_00340eb0) = 1;
                return;
            }
        } else {
            *(u8*)(&D_00340eb0) = 1;
            return;
        }
    } else {
        *(u8*)(&D_00340eb0) = 1;
        return;
    }
}

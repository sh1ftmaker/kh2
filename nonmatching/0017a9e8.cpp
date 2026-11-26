// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" void func_0016bd60(u32, u32) asm("func_0016bd60");

// 0x0017a9e8 func_0017a9e8
void func_0017a9e8(u32 a0, u32 a1) asm("_ZN2YS6ACTION4blowEPNS_3OBJE");
void func_0017a9e8(u32 a0, u32 a1) {
    if (((s32)((*(u32*)((a0 + 8)) & 0x20)) == 0)) {
        if (((*(u32*)((a0 + 8)) & 0x1000) == 0)) {
            if (((s32)(1) != 0)) {
                *(f32*)((a1 + 0x24)) = (*(f32*)((a1 + 0x24)) * *(f32*)((*(u32*)(&D_00352130) + 0x44)));
            }
        }
    }
    func_0016bd60(a1, 0x15);
    *(u32*)((a1 + 0xfc)) = *(u32*)((a1 + 0x154));
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");

// 0x001d3000 func_001d3000
f32 func_001d3000(f32 fa0) asm("func_001d3000");
f32 func_001d3000(f32 fa0) {
    if ((*(f32*)((*(u32*)(&D_00352130) + 0xf8)) <= fa0)) {
        return *(f32*)((*(u32*)(&D_00352130) + 0xf0));
    } else {
        if ((fa0 <= *(f32*)((*(u32*)(&D_00352130) + 0xfc)))) {
            return *(f32*)((*(u32*)(&D_00352130) + 0xf4));
        } else {
            return (*(f32*)((*(u32*)(&D_00352130) + 0xf4)) + ((*(f32*)((*(u32*)(&D_00352130) + 0xf0)) - *(f32*)((*(u32*)(&D_00352130) + 0xf4))) * ((fa0 - *(f32*)((*(u32*)(&D_00352130) + 0xfc))) / (*(f32*)((*(u32*)(&D_00352130) + 0xf8)) - *(f32*)((*(u32*)(&D_00352130) + 0xfc))))));
        }
    }
}

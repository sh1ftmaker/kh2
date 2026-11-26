// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_002f8ad0(f32, f32) asm("func_002f8ad0");
extern "C" u32 func_001c0cd8(u32, u32) asm("func_001c0cd8");
extern "C" void func_0017d0e8(u32, f32) asm("func_0017d0e8");

// 0x0016af58 YS::OBJ::get_dir()
u32 lift_0016af58(u32 a0, u32 a1) asm("_ZN2YS3OBJ7get_dirEv");
u32 lift_0016af58(u32 a0, u32 a1) {
    Q16 loc_0;
    f32 f20;
    if (((s32)(func_001c0cd8(a1, a1)) != 0)) {
        f20 = func_002f8ad0(-(*(f32*)((a1 + 0x60))), -(*(f32*)((a1 + 0x68))));
        func_0017d0e8((u32)&loc_0, func_002f8ad0(-(*(f32*)((a1 + 0x60))), -(*(f32*)((a1 + 0x68)))));
        *(f32*)(((u32)&loc_0 + 0xc)) = f20;
        *(Q16*)(a0) = loc_0;
    } else {
        *(Q16*)(a0) = *(Q16*)((a1 + 0x550));
    }
    return a0;
}

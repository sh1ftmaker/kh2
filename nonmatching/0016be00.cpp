// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_001a55a8(u32, u32) asm("func_001a55a8");
extern "C" u32 func_001d35e0(u32, u32, u32, u32) asm("func_001d35e0");
extern "C" void func_0016bda8(u32, u32) asm("func_0016bda8");

// 0x0016be00 YS::OBJ::scatter_prize(int)
f32 lift_0016be00(u32 a0, u32 a1) asm("_ZN2YS3OBJ13scatter_prizeEi");
f32 lift_0016be00(u32 a0, u32 a1) {
    u8 frame[64];
    Q16 loc_0;
    f32 loc_24;
    *(Q16*)(((u32)&loc_0 + 0x20)) = *(Q16*)((a0 + 0x540));
    loc_24 = (loc_24 - *(f32*)((a0 + 0x5fc)));
    func_0016bda8((u32)&loc_24 + 0xc, a0);
    if (((s32)(func_001d35e0((u32)&loc_0, (u32)&loc_0 + 0x20, (u32)&loc_24 + 0xc, 6)) != 0)) {
        if ((((u32)&loc_24 + 0xc) != (u32)frame)) {
            *(Q16*)(((u32)&loc_24 + 0xc)) = loc_0;
        }
    }
    return func_001a55a8((u32)&loc_24 + 0xc, a1);
}

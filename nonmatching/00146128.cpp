// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00146100(u32, u32, u32) asm("func_00146100");
extern "C" u32 func_00146730(u32, u32, u32) asm("func_00146730");

// 0x00146128 func_00146128
u32 func_00146128(u32 a0, u32 a1, u32 a2) asm("func_00146128");
u32 func_00146128(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    v0 = func_00146730(a0 + 0x230, (*(u32*)((a0 + 8)) + (((s32)((a2 << 0x10)) >> 0x10) * 0x1c)) + 4, a2);
    if ((v0 != 1)) {
        if (((s32)(v0) >= (s32)(2))) {
            if ((v0 == 2)) {
                *(u16*)(((*(u32*)(a1) << 1) + *(u32*)((a0 + 0x1c)))) = (((s32)((a2 << 0x10)) >> 0x10) | 0xffff8000);
                *(u32*)(a1) = (*(u32*)(a1) + 1);
            }
        }
        return v0;
    } else {
        return func_00146100(a0, a1, (s32)((a2 << 0x10)) >> 0x10);
    }
}

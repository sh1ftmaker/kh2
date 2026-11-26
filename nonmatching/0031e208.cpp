// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x0031e208 func_0031e208
void func_0031e208(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_0031e208");
void func_0031e208(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    if (((s32)((*(u64*)((a1 + 0x70)) & 0x78)) == 0)) {
        if (((s32)((*(u32*)(a2) & 0x800)) != 0)) {
            *(u16*)((a1 + 0x62)) = a3;
            if (((a1 + 0x40) != a4)) {
                *(Q16*)((a1 + 0x40)) = *(Q16*)(a4);
            }
        }
        if (((s32)((*(u32*)(a2) & 0x1000)) != 0)) {
            *(u16*)((a1 + 0x64)) = a3;
            if (((a1 + 0x50) != a4)) {
                *(Q16*)((a1 + 0x50)) = *(Q16*)(a4);
            }
        }
    }
    return;
}

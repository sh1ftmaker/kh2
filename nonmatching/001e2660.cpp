// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x001e2660 func_001e2660
void func_001e2660(u32 a0, u32 a1) asm("func_001e2660");
void func_001e2660(u32 a0, u32 a1) {
    u32 t6;
    t6 = 0;
    do {
        if (((s32)(*(u8*)((a0 + 0xac))) == 0)) {
            if (((a0 + 0xa0) != a1)) {
                *(Q16*)((a0 + 0xa0)) = *(Q16*)(a1);
            }
            *(u8*)((a0 + 0xac)) = 0xffffff80;
            *(u8*)((a0 + 0xad)) = 0;
            *(u8*)((a0 + 0xae)) = 0;
            *(u8*)((a0 + 0xaf)) = 0x1e;
            return;
        }
        a0 = (a0 + 0x10);
        t6 = (t6 + 1);
    } while (((s32)(((s32)(t6) < (s32)(0xa))) != 0));
    return;
}

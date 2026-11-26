// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x001c1748 func_001c1748
void func_001c1748(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001c1748");
void func_001c1748(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 t5;
    *(Q16*)(a0) = *(Q16*)(a2);
    *(u32*)((a0 + 0x10)) = a3;
    *(u8*)((a0 + 0x14)) = 0;
    *(u8*)((a0 + 0x15)) = 0xffffff80;
    *(u8*)((a0 + 0x16)) = *(u8*)((a1 + 8));
    *(u8*)((a0 + 0x17)) = 0xffffffff;
    *(u8*)((a0 + 0x18)) = 0;
    *(u32*)((a0 + 0x1c)) = a1;
    *(u32*)((a0 + 0x20)) = 0;
    t5 = (a1 + 0xc);
    if ((*(u32*)((t5 + 4)) == 0)) {
        *(u32*)((t5 + 4)) = a0;
        *(u32*)((a1 + 0xc)) = a0;
        *(u32*)((a0 + 0x24)) = 0;
        return;
    } else {
        *(u32*)((*(u32*)((t5 + 4)) + 0x24)) = a0;
        *(u32*)((a0 + 0x24)) = 0;
        *(u32*)((t5 + 4)) = a0;
        return;
    }
}

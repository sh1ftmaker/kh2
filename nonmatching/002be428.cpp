// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003617fc asm("D_003617fc");
extern "C" u32 func_001024a8() asm("func_001024a8");
extern "C" u32 func_002ee0b0(u32, u32, u32) asm("func_002ee0b0");
extern "C" void func_002ee040(u32) asm("func_002ee040");

// 0x002be428 func_002be428
u32 func_002be428() asm("_ZN8worldmap8Libretto10widgetTaskEP4TASK");
u32 func_002be428() {
    u32 v0;
    u64 loc_10;
    u32 loc_0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u32*)(&D_003617fc)) == 0)) {
        v0 = func_001024a8();
        v0_1 = v0;
    } else {
        func_002ee040(*(u32*)(&D_003617fc) + 8);
        *(u32*)(&loc_10) = 0;
        *(u8*)(((u32)&loc_0 + 3)) = 0x80;
        *(u8*)(&loc_0) = 0x80;
        *(u8*)(((u32)&loc_0 + 1)) = 0x80;
        *(u8*)(((u32)&loc_0 + 2)) = 0x80;
        *(u32*)(((u32)&loc_10 + 4)) = 0;
        v0_0 = func_002ee0b0(*(u32*)(&D_003617fc) + 8, loc_10, loc_0);
        v0_1 = v0_0;
    }
    return v0_1;
}

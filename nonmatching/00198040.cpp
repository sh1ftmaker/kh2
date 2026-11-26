// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032f054 asm("D_0032f054");
extern "C" u32 func_001a8b28(u32) asm("func_001a8b28");

// 0x00198040 func_00198040
u32 func_00198040(u32 a0) asm("func_00198040");
u32 func_00198040(u32 a0) {
    u32 v0;
    v0 = func_001a8b28(a0);
    if ((a0 == 1)) {
        switch (*(u8*)(&D_0032f054)) {
        case 1:
            v0 = *(u16*)((v0 + 0x28));
            break;
        case 2:
            v0 = *(u16*)((v0 + 0x2a));
            break;
        case 3:
            v0 = *(u16*)((v0 + 0x2c));
            break;
        case 4:
            v0 = *(u16*)((v0 + 0x2e));
            break;
        case 5:
            v0 = *(u16*)((v0 + 0x30));
            break;
        case 6:
            v0 = *(u16*)((v0 + 0x32));
            break;
        case 0:
        default:
            v0 = *(u16*)((v0 + 0x26));
            break;
        }
    } else {
        v0 = 0;
    }
    return v0;
}

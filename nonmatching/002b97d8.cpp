// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002b6708(u32, u32, u32, u32, u32) asm("func_002b6708");
extern "C" u32 func_002b9404(u32, u32, u32, u32) asm("func_002b9404");

// 0x002b97d8 func_002b97d8
void func_002b97d8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002b97d8");
void func_002b97d8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[32];
    *(u32*)((u32)frame) = a0;
    *(u32*)(((u32)frame + 4)) = a1;
    *(u32*)(((u32)frame + 8)) = a2;
    *(u32*)(((u32)frame + 0xc)) = a3;
    *(u32*)(((u32)frame + 0x10)) = func_002b9404(*(u32*)((u32)frame), *(u32*)(((u32)frame + 4)), (u32)frame + 0x14, (u32)frame + 0x18);
    if (((s32)(*(u32*)(((u32)frame + 0x10))) < 0)) {
        *(u32*)(((u32)frame + 0x1c)) = 0xffffffff;
    } else {
        *(u32*)(((u32)frame + 0x1c)) = func_002b6708(4, 0x1c, *(u32*)(((u32)frame + 0x10)), *(u32*)(((u32)frame + 8)), *(u32*)(((u32)frame + 0xc)));
    }
    return;
}

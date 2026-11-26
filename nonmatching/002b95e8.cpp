// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002b6708(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002b6708");
extern "C" u32 func_002b9404(u32, u32, u32, u32) asm("func_002b9404");

// 0x002b95e8 func_002b95e8
void func_002b95e8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002b95e8");
void func_002b95e8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[32];
    u32 t7;
    u8 t7_0;
    *(u32*)((u32)frame) = a0;
    *(u32*)(((u32)frame + 4)) = a1;
    *(u32*)(((u32)frame + 8)) = a2;
    *(u32*)(((u32)frame + 0xc)) = a3;
    *(u32*)(((u32)frame + 0x10)) = func_002b9404(*(u32*)((u32)frame), *(u32*)(((u32)frame + 4)), (u32)frame + 0x14, (u32)frame + 0x18);
    if (((s32)(*(u32*)(((u32)frame + 0x10))) < 0)) {
        *(u32*)(((u32)frame + 0x1c)) = 0xffffffff;
    } else {
        t7 = *(u16*)(((u32)frame + 0x18));
        t7_0 = (t7 & 1);
        if (((s32)(t7_0) != 0)) {
            *(u32*)(((u32)frame + 8)) = 0x3fff;
        }
        *(u32*)(((u32)frame + 0x1c)) = func_002b6708(7, 0x19, *(u32*)(((u32)frame + 0x10)), *(u32*)(((u32)frame + 0x14)), *(u32*)(((u32)frame + 8)), *(u32*)(((u32)frame + 0xc)), 1, 1);
    }
    return;
}

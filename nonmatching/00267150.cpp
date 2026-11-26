// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");

// 0x00267150 func_00267150
u32 func_00267150(u32 a0) asm("func_00267150");
u32 func_00267150(u32 a0) {
    u32 s0;
    u32 s1;
    u32 s3;
    u32 t6;
    s0 = (*(u32*)((func_00281180(*(u32*)(&D_0035f010), a0) + 0x244)) + 0x54);
    s1 = 0x4f;
    s3 = 0;
    t6 = *(u16*)(s0);
    do {
        if (((s32)(((*(u16*)(s0) & 0x7fff) & 0xffff)) != 0)) {
            if (((*(u16*)(s0) & 0xffff8000) != 0)) {
                s3 = (s3 + *(u8*)((func_001a80c8((*(u16*)(s0) & 0x7fff) & 0xffff) + 7)));
            }
        }
        s0 = (s0 + 2);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return s3;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00146ed8 func_00146ed8
u32 func_00146ed8(u32 a0, u32 a1) asm("func_00146ed8");
u32 func_00146ed8(u32 a0, u32 a1) {
    u32 t7;
    u32 v0;
    u32 t7_0;
    u32 v0_1;
    u32 t7_2;
    u32 v0_3;
    if (((s32)((*(u8*)((a1 + 0xeb)) & 0xff)) != 0)) {
        if (((s32)(((s32)((*(u8*)((a1 + 0xeb)) << 0x18)) >> 0x18)) >= 0)) {
            if (((s32)((*(u32*)((a1 + 0xf8)) & 0x10)) != 0)) {
                t7 = (*(u32*)((a1 + 0xf8)) & 0xfffff7ff);
                v0 = 1;
            } else {
                t7 = (*(u32*)((a1 + 0xf8)) | 0x800);
                v0 = 0;
            }
            t7_0 = t7;
            v0_1 = v0;
        } else {
            t7_0 = (*(u32*)((a1 + 0xf8)) | 0x800);
            v0_1 = 0;
        }
        t7_2 = t7_0;
        v0_3 = v0_1;
    } else {
        t7_2 = (*(u32*)((a1 + 0xf8)) | 0x800);
        v0_3 = 0;
    }
    *(u32*)((a1 + 0xf8)) = t7_2;
    return v0_3;
}

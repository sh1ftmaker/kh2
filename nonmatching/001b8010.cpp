// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001b8010 func_001b8010
void func_001b8010(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001b8010");
void func_001b8010(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u8 frame[64];
    u32 v1;
    u32 t3;
    u32 t7;
    u32 t6;
    u32 t7_0;
    u32 sp;
    u32 t7_1;
    *(u64*)(((u32)frame + 0x18)) = a3;
    v1 = *(u32*)((a0 + 8));
    *(u32*)((u32)frame) = ((u32)frame + 0x18);
    *(u64*)(((u32)frame + 0x10)) = a2;
    *(u64*)(((u32)frame + 0x20)) = a4;
    *(u64*)(((u32)frame + 0x28)) = a5;
    *(u64*)(((u32)frame + 0x30)) = a6;
    *(u64*)(((u32)frame + 0x38)) = a7;
    *(u32*)((a0 + 8)) = (v1 + 0x10);
    if ((a2 != 0xffff)) {
        t3 = 0xffff;
        t7 = *(u32*)((u32)frame);
        do {
            t7 = (t7 + 8);
            *(u32*)((u32)frame) = t7;
            *(u64*)(*(u32*)((a0 + 8))) = *(u64*)(t7);
            *(u64*)((*(u32*)((a0 + 8)) + 8)) = a2;
            t6 = *(u32*)((u32)frame);
            t7_0 = *(u32*)((a0 + 8));
            t7 = (t7_0 + 0x10);
            *(u32*)((u32)frame) = (t6 + 8);
            *(u32*)((a0 + 8)) = t7;
            a2 = *(u64*)(t6);
            t7 = *(u32*)((u32)frame);
        } while ((a2 != t3));
    } else {
        sp = (u32)frame;
    }
    t7_1 = *(u32*)((a0 + 8));
    *(u64*)(v1) = (((((s32)((t7_1 - v1)) >> 4) + -1) | (a1 << 0xf)) | ((u64)(1) << 0x3c));
    *(u64*)((v1 + 8)) = 0xe;
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01e2bca0 asm("D_01e2bca0");
extern "C" u32 D_01e2bcb0 asm("D_01e2bcb0");
extern "C" u32 D_01e2bcc0 asm("D_01e2bcc0");
extern "C" u32 func_0017d8c0(u32, u32, u32) asm("func_0017d8c0");

// 0x002c2168 func_002c2168
u32 func_002c2168(u32 a0) asm("func_002c2168");
u32 func_002c2168(u32 a0) {
    u8 frame[64];
    u32 v0;
    if ((a0 != (u32)&D_01e2bcb0)) {
        *(Q16*)((u32)&D_01e2bcb0) = *(Q16*)(a0);
    }
    v0 = func_0017d8c0((u32)frame, (u32)&D_01e2bcb0, (u32)&D_01e2bca0);
    if (((u32)frame != (u32)&D_01e2bcc0)) {
        *(Q16*)((u32)&D_01e2bcc0) = *(Q16*)((u32)frame);
        *(Q16*)(((u32)&D_01e2bcc0 + 0x10)) = *(Q16*)(((u32)frame + 0x10));
        *(Q16*)(((u32)&D_01e2bcc0 + 0x20)) = *(Q16*)(((u32)frame + 0x20));
        *(Q16*)(((u32)&D_01e2bcc0 + 0x30)) = *(Q16*)(((u32)frame + 0x30));
    }
    return v0;
}

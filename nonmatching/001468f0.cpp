// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_00163650(u32, u32, u32, u32, u32) asm("func_00163650");

// 0x001468f0 func_001468f0
u32 func_001468f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_001468f0");
u32 func_001468f0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u8 frame[16];
    Q16 loc_0;
    u32 v0;
    func_00163650((u32)&loc_0, a1, a1 + 0x10, a1 + 0x20, a4);
    if ((a0 != (u32)frame)) {
        *(Q16*)(a0) = loc_0;
    }
    func_00163650((u32)&loc_0, a1 + 0x70, a1 + 0x60, a1 + 0x50, loc_0.w[0]);
    if (((a0 + 0x10) != (u32)frame)) {
        *(Q16*)((a0 + 0x10)) = loc_0;
    }
    func_00163650((u32)&loc_0, a1 + 0x30, a1 + 0x20, a1 + 0x60, loc_0.w[0]);
    if (((a0 + 0x20) != (u32)frame)) {
        *(Q16*)((a0 + 0x20)) = loc_0;
    }
    func_00163650((u32)&loc_0, a1, a1 + 0x40, a1 + 0x50, loc_0.w[0]);
    if (((a0 + 0x30) != (u32)frame)) {
        *(Q16*)((a0 + 0x30)) = loc_0;
    }
    func_00163650((u32)&loc_0, a1 + 0x40, a1, a1 + 0x30, loc_0.w[0]);
    if (((a0 + 0x40) != (u32)frame)) {
        *(Q16*)((a0 + 0x40)) = loc_0;
    }
    v0 = func_00163650((u32)&loc_0, a1 + 0x60, a1 + 0x20, a1 + 0x10, loc_0.w[0]);
    if (((a0 + 0x50) != (u32)frame)) {
        *(Q16*)((a0 + 0x50)) = loc_0;
    }
    return v0;
}

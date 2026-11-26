// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001d45a0(u32, u32) asm("func_001d45a0");
extern "C" void func_00190128(u32) asm("func_00190128");
extern "C" void func_00190878(u32, u32, u32) asm("func_00190878");
extern "C" void func_0019da68(u32, u32, u32, u32, u32) asm("func_0019da68");

// 0x0019ead0 func_0019ead0
void func_0019ead0(u32 a0, u32 a1) asm("func_0019ead0");
void func_0019ead0(u32 a0, u32 a1) {
    u8 frame[32];
    u32 v0;
    v0 = func_001d45a0(a1, *(u16*)((*(u32*)(a0) + 0x26)));
    if (((s32)(v0) != 0)) {
        func_00190128((u32)frame);
        func_00190878((u32)frame, a1, 0);
        func_0019da68(a0, v0, (u32)frame, 0, 0);
    }
    return;
}

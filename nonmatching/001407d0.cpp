// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_0015ced0() asm("func_0015ced0");
extern "C" f32 func_0015cee0() asm("func_0015cee0");
extern "C" u32 func_0015ce80(u32) asm("func_0015ce80");
extern "C" u32 func_0015ce90() asm("func_0015ce90");
extern "C" void func_0015cea0(u32) asm("func_0015cea0");
extern "C" void func_0015ceb8(u32) asm("func_0015ceb8");

// 0x001407d0 func_001407d0
u32 func_001407d0(u32 a0) asm("func_001407d0");
u32 func_001407d0(u32 a0) {
    u8 frame[16];
    u32 v0;
    Q16 loc_0;
    u32 v0_0;
    v0 = func_0015ce80(a0);
    if (((s32)(v0) != 0)) {
        func_0015ceb8((u32)&loc_0);
        if ((a0 != (u32)frame)) {
            *(Q16*)(a0) = loc_0;
        }
        func_0015cea0((u32)&loc_0);
        if (((a0 + 0x10) != (u32)frame)) {
            *(Q16*)((a0 + 0x10)) = loc_0;
        }
        *(f32*)((a0 + 0x20)) = func_0015ced0();
        *(f32*)((a0 + 0x24)) = func_0015cee0();
        v0_0 = func_0015ce90();
        v0 = v0_0;
    }
    return v0;
}

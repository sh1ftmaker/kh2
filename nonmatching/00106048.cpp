// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" u32 func_001058e8() asm("func_001058e8");

// 0x00106048 func_00106048
u32 func_00106048() asm("func_00106048");
u32 func_00106048() {
    u8 frame[16];
    u32 v0;
    *(u8*)((u32)frame) = 0xffff;
    *(u8*)(((u32)frame + 1)) = 0xffff;
    *(u8*)(((u32)frame + 2)) = 0xffff;
    *(u16*)(((u32)frame + 4)) = 0xffff;
    *(u16*)(((u32)frame + 6)) = 0xffff;
    *(u16*)(((u32)frame + 8)) = 0xffff;
    *(u8*)((u32)frame) = 0xf;
    *(u8*)((func_001058e8() + 0xc)) = 0xf;
    *(u8*)(((u32)frame + 1)) = 0;
    *(u8*)((func_001058e8() + 0xd)) = 0;
    *(u8*)(((u32)frame + 2)) = 0;
    *(u8*)((func_001058e8() + 0xe)) = 0;
    v0 = func_00102c80();
    return ((u32(*)(u32))(*(u32*)(*(u32*)(v0))))(v0);
}

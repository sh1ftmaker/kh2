// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" u32 func_001058e8() asm("func_001058e8");
extern "C" u32 func_00105f98() asm("func_00105f98");

// 0x00105fc8 func_00105fc8
u32 func_00105fc8() asm("_ZN8WORLDMAP14gumiToWorldMapEv");
u32 func_00105fc8() {
    u8 frame[16];
    u32 s0;
    u32 v0;
    u32 v0_0;
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
    s0 = func_001058e8();
    v0 = func_00105f98();
    *(u8*)(((u32)frame + 2)) = v0;
    *(u8*)((s0 + 0xe)) = v0;
    v0_0 = func_00102c80();
    return ((u32(*)(u32))(*(u32*)(*(u32*)(v0_0))))(v0_0);
}

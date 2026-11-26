// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00104f58(u32, u32, u32, u32, u32) asm("func_00104f58");
extern "C" u32 func_001058e8() asm("func_001058e8");
extern "C" u32 func_00149fa8(u32) asm("func_00149fa8");
extern "C" void func_001991a8(u32, u32) asm("func_001991a8");

// 0x00149fe0 func_00149fe0
u32 func_00149fe0(u32 a0, u32 a1) asm("_ZN2dk5Field13WorldMapStartEij");
u32 func_00149fe0(u32 a0, u32 a1) {
    u8 frame[16];
    u32 s0;
    u32 v0;
    func_001991a8(0x21, 0);
    *(u8*)((u32)frame) = 0xffff;
    *(u8*)(((u32)frame + 1)) = 0xffff;
    *(u8*)(((u32)frame + 2)) = 0xffff;
    *(u16*)(((u32)frame + 4)) = 0xffff;
    *(u16*)(((u32)frame + 6)) = 0xffff;
    *(u16*)(((u32)frame + 8)) = 0xffff;
    if (((s32)(a0) < 0)) {
        a0 = *(u8*)((func_001058e8() + 0xc));
    }
    *(u8*)((func_001058e8() + 0xc)) = 0xf;
    *(u8*)((u32)frame) = 0xf;
    *(u8*)((func_001058e8() + 0xd)) = 0;
    *(u8*)(((u32)frame + 1)) = 0;
    s0 = func_001058e8();
    v0 = func_00149fa8(a0);
    *(u8*)((s0 + 0xe)) = v0;
    *(u8*)(((u32)frame + 2)) = v0;
    return func_00104f58((u32)frame, a1 | 1, 0, 0, 0);
}

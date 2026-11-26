// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00365950 asm("D_00365950");
extern "C" u32 D_01e33a40 asm("D_01e33a40");
extern "C" u32 func_002ff3fc(u32) asm("func_002ff3fc");
extern "C" u32 func_00305650(u32) asm("func_00305650");
extern "C" void func_002fdd68(u32, u32, u32) asm("func_002fdd68");

// 0x002fc7d8 func_002fc7d8
u32 func_002fc7d8(u32 a0) asm("func_002fc7d8");
u32 func_002fc7d8(u32 a0) {
    u32 s0;
    if (((s32)(a0) != 0)) {
        if (((u32)(func_002ff3fc((u32)&D_01e33a40 | 0x20000000)) < (u32)(0x400))) {
            s0 = func_002ff3fc((u32)&D_01e33a40 | 0x20000000);
        } else {
            s0 = 0x3ff;
        }
        func_002fdd68(a0, (u32)&D_01e33a40 | 0x20000000, s0);
        *(u8*)((a0 + s0)) = 0;
    }
    return func_00305650(*(u32*)(&D_00365950));
}

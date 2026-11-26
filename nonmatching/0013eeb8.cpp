// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001b7f30(u32) asm("func_001b7f30");
extern "C" void func_0013eb00(u32) asm("func_0013eb00");
extern "C" void func_001b7e68(u32, u32) asm("func_001b7e68");
extern "C" void func_001b80d8(u32) asm("func_001b80d8");

// 0x0013eeb8 func_0013eeb8
u32 func_0013eeb8(u32 a0) asm("func_0013eeb8");
u32 func_0013eeb8(u32 a0) {
    u8 frame[16];
    u32 t4;
    u32 t5;
    *(u64*)((a0 + 0xc8)) = (((*(u8*)((a0 + 0x10)) | (u64)(1)) | ((*(u8*)((a0 + 0x12)) << 0x10) | (*(u8*)((a0 + 0x11)) << 8))) | (*(u8*)((a0 + 0x13)) << 0x18));
    func_0013eb00(a0);
    *(u32*)((u32)frame) = 0;
    *(u32*)(((u32)frame + 4)) = 0;
    *(u32*)(((u32)frame + 8)) = 0;
    func_001b7e68((u32)frame, 0xf0);
    t4 = (u32)frame;
    t5 = 0xe;
    do {
        *(Q16*)(*(u32*)((t4 + 8))) = *(Q16*)(((a0 + ((t5 - 0xe) * -0x10)) + 0x20));
        *(u32*)((t4 + 8)) = (*(u32*)((t4 + 8)) + 0x10);
        t5 = (t5 + -1);
    } while (((s32)(t5) >= 0));
    func_001b80d8((u32)frame);
    return func_001b7f30((u32)frame);
}

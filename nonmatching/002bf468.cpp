// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003619c8 asm("D_003619c8");
extern "C" u32 D_00375420 asm("D_00375420");
extern "C" f32 func_002bf650(u32, u32) asm("func_002bf650");
extern "C" u32 func_001b6d70(u32) asm("func_001b6d70");
extern "C" void func_002be770(u32, u32) asm("func_002be770");

// 0x002bf468 func_002bf468
void func_002bf468(u32 a0, u32 a1) asm("func_002bf468");
void func_002bf468(u32 a0, u32 a1) {
    u32 t6;
    u32 t3;
    u32 t4;
    u32 t5;
    u32 t5_0;
    u32 s0;
    func_002be770(a0, a1);
    *(u32*)(a0) = (u32)&D_003619c8;
    *(u8*)((a0 + 0xae4)) = 0;
    t6 = (a0 + 0xae4);
    *(u8*)((t6 + 1)) = 0;
    *(u8*)((t6 + 2)) = 0;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x80000000);
    *(u8*)((a0 + 0xae7)) = 0;
    *(f32*)((a0 + 0xaf0)) = 0.0f;
    *(f32*)((a0 + 0xaf4)) = 0.0f;
    *(u32*)((a0 + 0xaf8)) = 0;
    *(u32*)((a0 + 0xafc)) = 0;
    *(u32*)((a0 + 0xb00)) = 0;
    *(u32*)((a0 + 0xb04)) = 0;
    *(u32*)((a0 + 0xb08)) = 0;
    t3 = (u32)&D_00375420;
    t4 = (u32)&D_00375420;
    t5 = 0;
    do {
        if ((*(u32*)(t4) == *(u32*)(a1))) {
            *(u32*)((a0 + 0xaf8)) = t3;
            break;
        }
        t5_0 = (t5 + 1);
        t3 = (t3 + 8);
        t4 = (t4 + 8);
        t5 = t5_0;
    } while (((s32)(((u32)(t5_0) < (u32)(0xc))) != 0));
    s0 = *(u32*)(a1);
    func_002bf650(a0, func_001b6d70(*(u8*)((*(u32*)((a0 + 0xaf8)) + 4))));
    return;
}

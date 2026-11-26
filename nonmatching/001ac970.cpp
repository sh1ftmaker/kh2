// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e8a8 asm("D_0034e8a8");
extern "C" u32 D_00350a38 asm("D_00350a38");
extern "C" u32 D_00350bb0 asm("D_00350bb0");
extern "C" u32 func_001aa668() asm("func_001aa668");
extern "C" u32 func_001ab800() asm("func_001ab800");
extern "C" u32 func_001ab810() asm("func_001ab810");
extern "C" void func_001abd90(u32) asm("func_001abd90");
extern "C" void func_001ac028(u32) asm("func_001ac028");
extern "C" void func_001ac378(u32, u32) asm("func_001ac378");
extern "C" void func_002395b8(u32) asm("func_002395b8");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_00239988(u32, u32, u32) asm("func_00239988");
extern "C" void func_00239bf8(u32, u32) asm("func_00239bf8");

// 0x001ac970 func_001ac970
u32 func_001ac970(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001ac970");
u32 func_001ac970(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 s3;
    u32 s4;
    u32 s5;
    u32 s0;
    u32 s3_0;
    u32 s0_1;
    func_001ac378(a0, a1);
    *(u32*)(a0) = (u32)&D_00350bb0;
    func_002395b8(a0 + 0x84);
    *(u32*)((a0 + 0x84)) = (u32)&D_0034e8a8;
    *(u32*)((a0 + 0x1dc)) = a7;
    func_001abd90(a0 + 0x1e0);
    *(u32*)((a0 + 0x4a8)) = 0;
    func_001ac028(a0 + 0x4ac);
    s3 = 3;
    s4 = (a0 + 0x84);
    s5 = 0xffffffff;
    do {
        func_00239700((a0 + ((s3 - 3) * -0x158)) + 0x608);
        s3 = (s3 + -1);
    } while ((s3 != s5));
    *(u32*)((a0 + 0xb68)) = 0;
    s0 = func_001ab810();
    func_00239988(s4, s0, func_001ab800());
    func_00239bf8(s4, *(u8*)((((*(u32*)((a0 + 0x1dc)) << 1) + *(u32*)((a0 + 0x1dc))) + (u32)&D_00350a38)));
    s3_0 = 3;
    do {
        s0_1 = func_001ab810();
        func_00239988((a0 + ((s3_0 - 3) * -0x158)) + 0x608, s0_1, func_001ab800());
        s3_0 = (s3_0 + -1);
    } while (((s32)(s3_0) >= 0));
    return func_001aa668();
}

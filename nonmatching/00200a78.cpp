// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e730 asm("D_01d9e730");
extern "C" u32 D_01d9e8c0 asm("D_01d9e8c0");
extern "C" u32 D_01d9e940 asm("D_01d9e940");
extern "C" u32 func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");
extern "C" void func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");
extern "C" void func_002f4000(u32, u32) asm("func_002f4000");

// 0x00200a78 func_00200a78
f32 func_00200a78(u32 a0, u32 a1, u32 a2) asm("func_00200a78");
f32 func_00200a78(u32 a0, u32 a1, u32 a2) {
    u8 frame[64];
    u32 s0;
    u32 s1;
    s0 = (a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4)));
    s1 = (s0 + 0xa0);
    func_002f4000((u32)frame, a1);
    *(f32*)(((u32)frame + 0x30)) = *(f32*)((s0 + 0xa0));
    *(f32*)(((u32)frame + 0x34)) = *(f32*)((s1 + 4));
    *(f32*)(((u32)frame + 0x38)) = *(f32*)((s1 + 8));
    func_002f3d08((u32)frame, (u32)&D_01d9e730, (u32)frame);
    func_002f3d08((u32)frame, (u32)&D_01d9e8c0, (u32)frame);
    func_002f3f40(*(u32*)(&D_01d9e6e8) + 0x50, *(u32*)(&D_01d9e6e8) + 0x10, *(f32*)((s1 + 0x10)));
    func_002f3f40(*(u32*)(&D_01d9e6e8) + 0x60, *(u32*)(&D_01d9e6e8) + 0x20, *(f32*)((s1 + 0x14)));
    func_002f3f40(*(u32*)(&D_01d9e6e8) + 0x70, *(u32*)(&D_01d9e6e8) + 0x30, *(f32*)((s1 + 0x18)));
    *(Q16*)((*(u32*)(&D_01d9e6e8) + 0x80)) = *(Q16*)((*(u32*)(&D_01d9e6e8) + 0x40));
    func_002f3d08(*(u32*)(&D_01d9e6e8) + 0x50, (u32)&D_01d9e940, *(u32*)(&D_01d9e6e8) + 0x50);
    return func_002f3cd8(*(u32*)(&D_01d9e6e8) + 0x80, (u32)frame, *(u32*)(&D_01d9e6e8) + 0x40);
}

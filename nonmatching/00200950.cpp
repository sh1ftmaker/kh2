// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00354bc0 asm("D_00354bc0");
extern "C" u32 D_00354be0 asm("D_00354be0");
extern "C" u32 D_01d9e840 asm("D_01d9e840");
extern "C" u32 D_01d9e870 asm("D_01d9e870");
extern "C" u32 D_01d9e880 asm("D_01d9e880");
extern "C" u32 D_01d9e890 asm("D_01d9e890");
extern "C" u32 D_01d9e8a0 asm("D_01d9e8a0");
extern "C" u32 D_01d9e8b0 asm("D_01d9e8b0");
extern "C" u32 D_01d9e8c0 asm("D_01d9e8c0");
extern "C" u32 D_01d9e940 asm("D_01d9e940");
extern "C" u32 func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_002f3d50(u32, u32, u32) asm("func_002f3d50");
extern "C" void func_002f3d98(u32, u32) asm("func_002f3d98");
extern "C" void func_002f3f88(u32, u32) asm("func_002f3f88");

// 0x00200950 func_00200950
f32 func_00200950(u32 a0, u32 a1) asm("func_00200950");
f32 func_00200950(u32 a0, u32 a1) {
    u8 frame[48];
    u32 s0;
    s0 = (a0 + *(u32*)((*(u32*)((a1 + 0xc)) + 4)));
    func_002f3f88((a0 + *(u32*)((*(u32*)((a1 + 0xc)) + 4))) + 0xa0, (u32)&D_00354bc0);
    func_002f3f88(s0 + 0xb0, (u32)&D_00354be0);
    *(u32*)(((u32)frame + 0x1c)) = 0;
    *(f32*)(((u32)frame + 0x10)) = *(f32*)(((u32)&D_01d9e840 + 0x10));
    *(f32*)(((u32)frame + 0x14)) = *(f32*)(((u32)&D_01d9e840 + 0x14));
    *(f32*)(((u32)frame + 0x18)) = *(f32*)(((u32)&D_01d9e840 + 0x18));
    func_002f3d98((u32)frame + 0x10, (u32)frame + 0x10);
    *(Q16*)(&D_01d9e890) = *(Q16*)(((u32)frame + 0x10));
    *(f32*)((u32)frame) = *(f32*)(((u32)frame + 0x14));
    *(f32*)(((u32)frame + 4)) = -(*(f32*)(((u32)frame + 0x10)));
    *(u32*)(((u32)frame + 8)) = 0;
    *(u32*)(((u32)frame + 0xc)) = 0;
    func_002f3d98((u32)frame, (u32)frame);
    *(Q16*)(&D_01d9e880) = *(Q16*)((u32)frame);
    func_002f3d50((u32)frame + 0x20, (u32)frame, (u32)frame + 0x10);
    func_002f3d98((u32)frame + 0x20, (u32)frame + 0x20);
    *(Q16*)(&D_01d9e8a0) = *(Q16*)(((u32)frame + 0x20));
    *(Q16*)(&D_01d9e8b0) = *(Q16*)(&D_01d9e870);
    return func_002f3d08((u32)&D_01d9e940, (u32)&D_01d9e8c0, (u32)&D_01d9e880);
}

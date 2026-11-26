// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01d9e6f0 asm("D_01d9e6f0");
extern "C" u32 D_01d9e730 asm("D_01d9e730");
extern "C" u32 D_01d9e840 asm("D_01d9e840");
extern "C" u32 D_01d9e870 asm("D_01d9e870");
extern "C" u32 D_01d9e880 asm("D_01d9e880");
extern "C" u32 D_01d9e890 asm("D_01d9e890");
extern "C" u32 D_01d9e8a0 asm("D_01d9e8a0");
extern "C" u32 D_01d9e8b0 asm("D_01d9e8b0");
extern "C" u32 D_01d9e8c0 asm("D_01d9e8c0");
extern "C" u32 D_01d9e900 asm("D_01d9e900");
extern "C" u32 D_01d9e940 asm("D_01d9e940");
extern "C" u32 func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_001e7da8() asm("func_001e7da8");
extern "C" void func_002f3d50(u32, u32, u32) asm("func_002f3d50");
extern "C" void func_002f3d98(u32, u32) asm("func_002f3d98");

// 0x001e3330 func_001e3330
f32 func_001e3330() asm("_Z8pppSetUpPv");
f32 func_001e3330() {
    u8 frame[48];
    func_001e7da8();
    func_002f3d08((u32)&D_01d9e840, (u32)&D_01d9e730, (u32)&D_01d9e6f0);
    func_002f3d08((u32)&D_01d9e900, (u32)&D_01d9e8c0, (u32)&D_01d9e840);
    *(f32*)(((u32)frame + 0x10)) = *(f32*)(((u32)&D_01d9e840 + 0x10));
    *(f32*)(((u32)frame + 0x14)) = *(f32*)(((u32)&D_01d9e840 + 0x14));
    *(f32*)(((u32)frame + 0x18)) = *(f32*)(((u32)&D_01d9e840 + 0x18));
    *(u32*)(((u32)frame + 0x1c)) = 0;
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

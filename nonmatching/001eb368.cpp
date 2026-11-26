// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00354be0 asm("D_00354be0");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e840 asm("D_01d9e840");
extern "C" u32 D_01d9e8c0 asm("D_01d9e8c0");
extern "C" f32 func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_002f3f28(u32, u32, u32) asm("func_002f3f28");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");

// 0x001eb368 func_001eb368
// minilink-rodata 0x003700c0   (float literals live here in the original)
f32 func_001eb368() asm("func_001eb368");
f32 func_001eb368() {
    func_002f3f40(*(u32*)(&D_01d9e6e8) + 0x50, *(u32*)(&D_01d9e6e8) + 0x10, *(f32*)(&D_00354be0));
    func_002f3f40(*(u32*)(&D_01d9e6e8) + 0x60, *(u32*)(&D_01d9e6e8) + 0x20, *(f32*)(((u32)&D_00354be0 + 4)));
    func_002f3f40(*(u32*)(&D_01d9e6e8) + 0x70, *(u32*)(&D_01d9e6e8) + 0x30, *(f32*)(((u32)&D_00354be0 + 8)));
    func_002f3f28(*(u32*)(&D_01d9e6e8) + 0x80, *(u32*)(&D_01d9e6e8) + 0x40, (u32)&D_00354be0);
    *(f32*)((*(u32*)(&D_01d9e6e8) + 0x80)) = (*(f32*)((*(u32*)(&D_01d9e6e8) + 0x80)) + *(f32*)(((u32)&D_01d9e840 + 0x30)));
    *(f32*)((*(u32*)(&D_01d9e6e8) + 0x84)) = (*(f32*)((*(u32*)(&D_01d9e6e8) + 0x84)) + *(f32*)(((u32)&D_01d9e840 + 0x34)));
    *(f32*)((*(u32*)(&D_01d9e6e8) + 0x88)) = (*(f32*)((*(u32*)(&D_01d9e6e8) + 0x88)) + *(f32*)(((u32)&D_01d9e840 + 0x38)));
    *(f32*)((*(u32*)(&D_01d9e6e8) + 0x8c)) = 1.0f;
    return func_002f3d08(*(u32*)(&D_01d9e6e8) + 0x50, (u32)&D_01d9e8c0, *(u32*)(&D_01d9e6e8) + 0x50);
}

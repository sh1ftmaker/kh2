// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00340eb0 asm("D_00340eb0");
extern "C" u32 D_004f3694 asm("D_004f3694");
extern "C" f32 func_001dd1c8(u32, u32, u32) asm("func_001dd1c8");
extern "C" void func_0010a7d8(u32, u32, u32) asm("func_0010a7d8");
extern "C" void func_0010a828(f32, f32) asm("func_0010a828");
extern "C" void func_0010a8a8(f32, f32) asm("func_0010a8a8");
extern "C" void func_001dd1b0(f32, f32) asm("func_001dd1b0");
extern "C" void func_001dd1e8(u32, u32) asm("func_001dd1e8");

// 0x0015c880 func_0015c880
// minilink-rodata 0x0036b3f4   (float literals live here in the original)
f32 func_0015c880(f32 fa0) asm("func_0015c880");
f32 func_0015c880(f32 fa0) {
    *(u8*)(&D_00340eb0) = 1;
    *(u8*)(&D_004f3694) = 0;
    *(u8*)(((u32)&D_004f3694 + 1)) = 0;
    *(u8*)(((u32)&D_004f3694 + 2)) = 0;
    *(u8*)(((u32)&D_004f3694 + 3)) = 0x80;
    *(f32*)(((u32)&D_004f3694 + 4)) = 0.0f;
    *(f32*)(((u32)&D_004f3694 + 8)) = fa0;
    *(f32*)(((u32)&D_004f3694 + 0xc)) = 0.0f;
    *(f32*)(((u32)&D_004f3694 + 0x10)) = 255.0f;
    func_0010a8a8(0.0f, 255.0f);
    func_0010a828(*(f32*)(((u32)&D_004f3694 + 4)), *(f32*)(((u32)&D_004f3694 + 8)));
    func_0010a7d8(*(u8*)(&D_004f3694), *(u8*)(((u32)&D_004f3694 + 1)), *(u8*)(((u32)&D_004f3694 + 2)));
    func_001dd1e8((s32)(*(f32*)(((u32)&D_004f3694 + 0xc))) & 0xff, (s32)(*(f32*)(((u32)&D_004f3694 + 0x10))) & 0xff);
    func_001dd1b0(*(f32*)(((u32)&D_004f3694 + 4)), *(f32*)(((u32)&D_004f3694 + 8)));
    return func_001dd1c8(*(u8*)(&D_004f3694), *(u8*)(((u32)&D_004f3694 + 1)), *(u8*)(((u32)&D_004f3694 + 2)));
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00340eb0 asm("D_00340eb0");
extern "C" u32 D_004f3650 asm("D_004f3650");
extern "C" u32 D_004f3694 asm("D_004f3694");
extern "C" f32 func_001dd1c8(u32, u32, u32) asm("func_001dd1c8");
extern "C" void func_0010a7d8(u32, u32, u32) asm("func_0010a7d8");
extern "C" void func_0010a828(f32, f32) asm("func_0010a828");
extern "C" void func_0010a8a8(u32, u8, u8, u8, u32, u32, f32, f32) asm("func_0010a8a8");
extern "C" void func_001dd1b0(f32, f32) asm("func_001dd1b0");
extern "C" void func_001dd1e8(u32, u32) asm("func_001dd1e8");

// 0x0015c958 func_0015c958
f32 func_0015c958(u32 a0, u8 a1, u8 a2, u8 a3, u32 a4, u32 a5) asm("func_0015c958");
f32 func_0015c958(u32 a0, u8 a1, u8 a2, u8 a3, u32 a4, u32 a5) {
    u32 s0;
    *(u8*)(&D_00340eb0) = 1;
    *(f32*)(((u32)&D_004f3650 + 0x54)) = (f32)((s32)(a5));
    *(f32*)(((u32)&D_004f3650 + 0x50)) = (f32)((s32)(a4));
    *(u8*)(((u32)&D_004f3650 + 0x44)) = a1;
    s0 = ((u32)&D_004f3650 + 0x44);
    *(f32*)(((u32)&D_004f3650 + 0x48)) = (f32)((s32)(a0));
    *(u8*)((s0 + 2)) = a3;
    *(u8*)((s0 + 3)) = 0x80;
    *(u8*)((s0 + 1)) = a2;
    func_0010a8a8(a0, a1, a2, a3, a4, a5, *(f32*)((s0 + 0xc)), *(f32*)((s0 + 0x10)));
    func_0010a828(*(f32*)((s0 + 4)), *(f32*)((s0 + 8)));
    func_0010a7d8(*(u8*)(&D_004f3694), *(u8*)((s0 + 1)), *(u8*)((s0 + 2)));
    func_001dd1e8((s32)(*(f32*)((s0 + 0xc))) & 0xff, (s32)(*(f32*)((s0 + 0x10))) & 0xff);
    func_001dd1b0(*(f32*)((s0 + 4)), *(f32*)((s0 + 8)));
    return func_001dd1c8(*(u8*)(&D_004f3694), *(u8*)((s0 + 1)), *(u8*)((s0 + 2)));
}

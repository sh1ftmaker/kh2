// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f36a8 asm("D_004f36a8");
extern "C" u32 D_004f36ec asm("D_004f36ec");
extern "C" f32 func_001dd1c8(u32, u32, u32) asm("func_001dd1c8");
extern "C" u32 func_0015cc80(u32, u8, u8, f32, f32, f32, f32) asm("func_0015cc80");
extern "C" void func_0010a7d8(u32, u32, u32) asm("func_0010a7d8");
extern "C" void func_0010a828(f32, f32) asm("func_0010a828");
extern "C" void func_0010a8a8(f32, f32) asm("func_0010a8a8");
extern "C" void func_001dd1b0(f32, f32) asm("func_001dd1b0");
extern "C" void func_001dd1e8(u32, u32) asm("func_001dd1e8");

// 0x0015ca40 func_0015ca40
void func_0015ca40(u8 a0, u8 a1, u8 a2, f32 fa0, f32 fa1, f32 fa2, f32 fa3) asm("_ZN2dk8MapColor5setupEPS0_");
void func_0015ca40(u8 a0, u8 a1, u8 a2, f32 fa0, f32 fa1, f32 fa2, f32 fa3) {
    u32 s0;
    *(u8*)(((u32)&D_004f36a8 + 0x44)) = a0;
    *(f32*)(((u32)&D_004f36a8 + 0x48)) = fa0;
    *(f32*)(((u32)&D_004f36a8 + 0x4c)) = fa1;
    *(f32*)(((u32)&D_004f36a8 + 0x50)) = fa2;
    *(f32*)(((u32)&D_004f36a8 + 0x54)) = fa3;
    s0 = ((u32)&D_004f36a8 + 0x44);
    *(u8*)((s0 + 1)) = a1;
    *(u8*)((s0 + 2)) = a2;
    *(u8*)((s0 + 3)) = 0x80;
    if ((func_0015cc80(s0, a1, a2, fa0, fa1, fa2, fa3) == 0)) {
        func_0010a8a8(*(f32*)((s0 + 0xc)), *(f32*)((s0 + 0x10)));
        func_0010a828(*(f32*)((s0 + 4)), *(f32*)((s0 + 8)));
        func_0010a7d8(*(u8*)(&D_004f36ec), *(u8*)((s0 + 1)), *(u8*)((s0 + 2)));
    }
    func_001dd1e8((s32)(*(f32*)((s0 + 0xc))) & 0xff, (s32)(*(f32*)((s0 + 0x10))) & 0xff);
    func_001dd1b0(*(f32*)((s0 + 4)), *(f32*)((s0 + 8)));
    func_001dd1c8(*(u8*)(&D_004f36ec), *(u8*)((s0 + 1)), *(u8*)((s0 + 2)));
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 D_0036e3bc asm("D_0036e3bc");
extern "C" f32 func_001d2750(u32) asm("func_001d2750");
extern "C" u32 func_00180618(u32) asm("func_00180618");
extern "C" u32 func_00197920() asm("func_00197920");
extern "C" u32 func_001d14a0() asm("func_001d14a0");
extern "C" void func_00178758(u32) asm("func_00178758");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" void func_00190128(u32) asm("func_00190128");
extern "C" void func_00190878(u32, u32, u32) asm("func_00190878");
extern "C" void func_001a1aa0(u32, u32) asm("func_001a1aa0");
extern "C" void func_001bd418(u32, u32, u32, u32, u32, u32) asm("func_001bd418");
extern "C" void func_001d0558(u32) asm("func_001d0558");
extern "C" void func_001d2648(u32, u32, f32) asm("func_001d2648");
extern "C" void func_001d2690(u32, u32, f32) asm("func_001d2690");

// 0x001d03a0 func_001d03a0
f32 func_001d03a0(u32 a0) asm("_ZN2YS6MICKEY13_OVR_pre_execEv");
f32 func_001d03a0(u32 a0) {
    u8 frame[32];
    func_00178758(a0);
    if ((0.0f < *(f32*)((a0 + 0xb68)))) {
        if (((s32)(func_00180618(a0 + 0x140)) != 0)) {
            *(f32*)((a0 + 0xb6c)) = (*(f32*)((a0 + 0xb6c)) - *(f32*)(&D_00349e10));
            if (((*(f32*)((a0 + 0xb6c)) - *(f32*)(&D_00349e10)) <= 0.0f)) {
                func_001a1aa0(*(u32*)((a0 + 0x48c)), 1);
                *(f32*)((a0 + 0xb6c)) = (*(f32*)((a0 + 0xb6c)) + *(f32*)((*(u32*)(&D_00352130) + 0xd4)));
            }
        }
        *(f32*)((a0 + 0xb68)) = (*(f32*)((a0 + 0xb68)) - *(f32*)(&D_00349e10));
        if (((*(f32*)((a0 + 0xb68)) - *(f32*)(&D_00349e10)) <= 0.0f)) {
            *(f32*)((a0 + 0xb68)) = 0.0f;
            func_0017f488(a0 + 0x140, 5, 0.0f, 0.0f);
            func_0017f5e0(a0 + 0x140, 0, 0, 0.0f, 0.0f);
        }
    }
    func_00190128((u32)frame);
    if (((s32)((((u32)(*(u8*)((*(u32*)((a0 + 0x48c)) + 0x1b1))) < (u32)(*(u8*)((*(u32*)((a0 + 0x48c)) + 0x1b2)))) ^ 1)) != 0)) {
        if (((s32)(*(u8*)((a0 + 0xb70))) == 0)) {
            func_001d0558(a0);
            func_001d2648(a0 + 0xb74, 0xbbc3, *(f32*)(&D_0036e3bc));
            func_001d2690(a0 + 0xb74, 0xbbc4, *(f32*)(&D_0036e3bc));
        }
        func_00190878((u32)frame, func_001d14a0(), 0);
        func_001bd418(*(u32*)((a0 + 0xb44)), 1, 0x1c8, (u32)frame, 1, 0x64);
    } else {
        if (((s32)(func_00197920()) == 0)) {
            func_00190878((u32)frame, a0, 0);
            func_001bd418(*(u32*)((a0 + 0xb44)), 1, 0x1c7, (u32)frame, 1, 0x64);
        }
    }
    return func_001d2750(a0 + 0xb74);
}

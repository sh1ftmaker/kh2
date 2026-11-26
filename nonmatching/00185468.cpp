// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034ed18 asm("D_0034ed18");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_001762c0(u32, u32) asm("func_001762c0");
extern "C" u32 func_00185920(u32, u32, u32) asm("func_00185920");
extern "C" void func_0017ebe8(u32, u32) asm("func_0017ebe8");
extern "C" void func_0017fd30(u32, u32) asm("func_0017fd30");
extern "C" void func_001980d0(u32, u32, u32, u32, u32, f32) asm("func_001980d0");
extern "C" void func_001a93b0(u32, u32) asm("func_001a93b0");
extern "C" void func_001c0d38(u32, u32, u32, u32) asm("func_001c0d38");

// 0x00185468 func_00185468
// minilink-rodata 0x0036c8dc   (float literals live here in the original)
void func_00185468(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN2YS6WEAPONC1EPKNS_8OBJENTRYEPNS_5PARTYEiii");
void func_00185468(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u8 frame[16];
    u32 v0;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    func_001980d0(a0, a1, 0xc, (u32)frame, a4, 3.1415927410125732f);
    *(u32*)(a0) = (u32)&D_0034ed18;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x40);
    *(u32*)((a0 + 0x108)) = (*(u32*)((a0 + 0x108)) | 2);
    *(u32*)((a0 + 0x3b0)) = 1;
    *(u32*)((a0 + 0x9f4)) = a2;
    *(u32*)((a0 + 0x9f8)) = 0;
    *(u32*)((a0 + 0x9fc)) = a4;
    *(u32*)((a0 + 0xa00)) = a5;
    func_001a93b0(a0 + 0x7a0, a5);
    v0 = func_00185920(a3, a4, 0);
    if (((s32)(v0) != 0)) {
        func_0017ebe8(a0 + 0x140, func_001708f8(v0, 0xffffffff));
        func_0017fd30(a2 + 0x140, a0 + 0x140);
        func_001c0d38(a0, a2, func_001762c0(a2, a4), 0);
    }
    *(u32*)((a0 + 0x10c)) = (*(u32*)((a0 + 0x10c)) | 0x700);
    return;
}

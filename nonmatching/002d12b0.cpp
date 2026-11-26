// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00362110 asm("D_00362110");
extern "C" u32 D_00362158 asm("D_00362158");
extern "C" u32 D_003759b0 asm("D_003759b0");
extern "C" f32 func_002cf938(u32) asm("func_002cf938");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_002d1878(u32) asm("func_002d1878");
extern "C" u32 func_002e64b8(u32, u32) asm("func_002e64b8");
extern "C" void func_00102c80() asm("func_00102c80");
extern "C" void func_001069b8(u32) asm("func_001069b8");
extern "C" void func_001ca8f8(f32, f32) asm("func_001ca8f8");
extern "C" void func_002ce958(u32, u32) asm("func_002ce958");
extern "C" void func_002ceae8(u32, u32, u32) asm("func_002ceae8");
extern "C" void func_002cedd0(u32, u32) asm("func_002cedd0");
extern "C" void func_002e64b0(u32) asm("func_002e64b0");
extern "C" void func_002e6ab0(u32, u32, f32) asm("func_002e6ab0");

// 0x002d12b0 func_002d12b0
// minilink-rodata 0x003759b8   (float literals live here in the original)
f32 func_002d12b0(u32 a0, u32 a1) asm("func_002d12b0");
f32 func_002d12b0(u32 a0, u32 a1) {
    u8 frame[80];
    Q16 loc_0;
    u32 v0;
    u32 s1;
    Q16 loc_10;
    Q16 loc_20;
    Q16 loc_30;
    f32 loc_40;
    f32 loc_44;
    f32 loc_48;
    f32 loc_4c;
    func_002ce958(a0, 0);
    *(u32*)((a0 + 0x68)) = a1;
    *(u32*)((a0 + 0x64)) = 0;
    *(u32*)((a0 + 0x6c)) = 0;
    *(u32*)(a0) = (u32)&D_00362158;
    *(f32*)((a0 + 0x70)) = 40.0f;
    *(f32*)((a0 + 0x80)) = 0.0f;
    *(f32*)(((a0 + 0x80) + 4)) = 0.0f;
    *(f32*)(((a0 + 0x80) + 8)) = 0.0f;
    *(f32*)(((a0 + 0x80) + 0xc)) = 0.0f;
    *(f32*)((a0 + 0x90)) = 0.0f;
    *(f32*)((a0 + 0x98)) = 0.0f;
    *(u8*)((a0 + 0x140)) = 0;
    func_002ceae8(a0, (u32)&loc_0, (u32)&D_003759b0);
    v0 = func_001708f8((u32)&loc_0, 0xffffffff);
    *(u32*)((a0 + 0x60)) = v0;
    func_00168b38(v0, 0x2a, 0);
    *(u32*)((a0 + 0x64)) = (*(u32*)((func_00168b38(v0, 0x2a, 0) + 8)) + 0x10);
    func_00168b38(v0, 0x2a, 1);
    s1 = *(u32*)((func_00168b38(v0, 0x2a, 1) + 8));
    func_00168b38(v0, 0x2a, *(u32*)((a0 + 0x68)) + 2);
    *(u32*)((a0 + 0x5c)) = *(u32*)((func_00168b38(v0, 0x2a, *(u32*)((a0 + 0x68)) + 2) + 8));
    func_001ca8f8(*(f32*)((func_002d1878(a0) + 0x24)), 0.0f);
    func_002e64b0(s1);
    *(u32*)((a0 + 0x6c)) = func_002e64b8(0, s1);
    func_00102c80();
    *(f32*)((a0 + 0x70)) = 40.0f;
    *(f32*)(&loc_0) = 0.0f;
    *(f32*)(((u32)&loc_0 + 8)) = 150.0f;
    *(f32*)(((u32)&loc_0 + 4)) = 0.0f;
    *(f32*)(((u32)&loc_0 + 0xc)) = 0.0f;
    if (((a0 + 0x80) != (u32)frame)) {
        *(Q16*)((a0 + 0x80)) = loc_0;
    }
    *(f32*)((a0 + 0x90)) = 0.0f;
    func_002e6ab0(*(u32*)((a0 + 0x6c)), (u32)&loc_0, 0.0f);
    if (((a0 + 0xa0) != (u32)frame)) {
        *(Q16*)((a0 + 0xa0)) = loc_0;
        *(Q16*)(((a0 + 0xa0) + 0x10)) = loc_10;
        *(Q16*)(((a0 + 0xa0) + 0x20)) = loc_20;
        *(Q16*)(((a0 + 0xa0) + 0x30)) = loc_30;
    }
    if (((a0 + 0xe0) != (u32)frame)) {
        *(Q16*)((a0 + 0xe0)) = loc_0;
        *(Q16*)(((a0 + 0xe0) + 0x10)) = loc_10;
        *(Q16*)(((a0 + 0xe0) + 0x20)) = loc_20;
        *(Q16*)(((a0 + 0xe0) + 0x30)) = loc_30;
    }
    loc_40 = 0.0f;
    loc_44 = 0.0f;
    loc_48 = 0.0f;
    loc_4c = 0.0f;
    if (((a0 + 0x120) != (u32)&loc_40)) {
        *(Q16*)((a0 + 0x120)) = *(Q16*)((u32)&loc_40);
    }
    loc_4c = 0.0f;
    loc_40 = 0.0f;
    loc_44 = 0.0f;
    loc_48 = 0.0f;
    if (((a0 + 0x130) != (u32)&loc_40)) {
        *(Q16*)((a0 + 0x130)) = *(Q16*)((u32)&loc_40);
    }
    *(u32*)((a0 + 0x148)) = 0;
    *(u32*)((a0 + 0x144)) = 0;
    func_001069b8(2);
    func_002cedd0(4, (u32)&D_00362110);
    return func_002cf938(1);
}

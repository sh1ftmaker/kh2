// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00362e80 asm("D_00362e80");
extern "C" u32 D_00362eb8 asm("D_00362eb8");
extern "C" u32 D_00375f18 asm("D_00375f18");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_0016b740(u32) asm("func_0016b740");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_002e2350(u32) asm("func_002e2350");
extern "C" void func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_002ce958(u32, u32, u32, u32) asm("func_002ce958");
extern "C" void func_002ceae8(u32, u32, u32) asm("func_002ceae8");
extern "C" void func_002cedd0(u32, u32) asm("func_002cedd0");
extern "C" void func_002e34b8(u32) asm("func_002e34b8");
extern "C" void func_002e34c0(u32, u32) asm("func_002e34c0");
extern "C" void func_002e64b0(u32) asm("func_002e64b0");
extern "C" void func_002e6fc0(u32, u32) asm("func_002e6fc0");

// 0x002e1f70 func_002e1f70
u32 func_002e1f70(u32 a0, u32 a1) asm("func_002e1f70");
u32 func_002e1f70(u32 a0, u32 a1) {
    u8 frame[64];
    u32 v0;
    u32 s2;
    u32 v0_0;
    u32 s0;
    u32 v0_1;
    u32 v0_2;
    func_002ce958(a0, 5, a1, 0);
    *(u32*)(a0) = (u32)&D_00362eb8;
    func_002e34b8(a0 + 0x68);
    func_002ceae8(a0, (u32)frame, (u32)&D_00375f18);
    v0 = func_001708f8((u32)frame, 0xffffffff);
    *(u32*)((a0 + 0x60)) = v0;
    func_00168b38(v0, 0x2a, 0);
    func_002e34c0(a0 + 0x68, *(u32*)((func_00168b38(v0, 0x2a, 0) + 8)));
    func_00168b38(v0, 0x2a, 1);
    s2 = *(u32*)((func_00168b38(v0, 0x2a, 1) + 8));
    func_002e64b0(*(u32*)((func_00168b38(v0, 0x2a, 1) + 8)));
    v0_0 = func_001063c0(0xc, func_001050c8());
    func_002e6fc0(v0_0, s2);
    *(u32*)((a0 + 0x6c)) = v0_0;
    func_002cedd0(3, (u32)&D_00362e80);
    s0 = *(u32*)(&D_0034e948);
    func_0016bd60(*(u32*)(&D_0034e948), 0x35);
    *(u32*)((s0 + 0x108)) = (*(u32*)((s0 + 0x108)) | 1);
    v0_1 = func_0016b740(0x841);
    func_0016bd60(v0_1, 0x36);
    *(u32*)((v0_1 + 0x108)) = (*(u32*)((v0_1 + 0x108)) | 1);
    v0_2 = func_002e2350(a0);
    *(u8*)((a0 + 0x58)) = 1;
    return v0_2;
}

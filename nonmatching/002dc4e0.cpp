// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00362990 asm("D_00362990");
extern "C" u32 D_003629e8 asm("D_003629e8");
extern "C" u32 D_00375d48 asm("D_00375d48");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_0016b740(u32) asm("func_0016b740");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_002dc7f8(u32) asm("func_002dc7f8");
extern "C" void func_00102c80() asm("func_00102c80");
extern "C" void func_00144450(u32) asm("func_00144450");
extern "C" void func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_002ce958(u32, u32) asm("func_002ce958");
extern "C" void func_002ceae8(u32, u32, u32) asm("func_002ceae8");
extern "C" void func_002cedd0(u32, u32) asm("func_002cedd0");
extern "C" void func_002dc850(u32) asm("func_002dc850");
extern "C" void func_002e4a08(u32) asm("func_002e4a08");
extern "C" void func_002e5f70(u32) asm("func_002e5f70");
extern "C" void func_002e5fb8(u32, u32) asm("func_002e5fb8");

// 0x002dc4e0 func_002dc4e0
// minilink-rodata 0x00375d5c   (float literals live here in the original)
void func_002dc4e0(u32 a0, u32 a1) asm("_ZN2Ti6MGJumpC1Eii");
void func_002dc4e0(u32 a0, u32 a1) {
    u8 frame[64];
    u32 v0;
    u32 s4;
    u32 s3;
    u32 s5;
    u32 v0_0;
    u32 v0_1;
    func_002ce958(a0, 2);
    *(u32*)(a0) = (u32)&D_003629e8;
    *(u32*)((a0 + 0x80)) = a1;
    *(f32*)((a0 + 0x64)) = 0.3490658402442932f;
    *(f32*)((a0 + 0x68)) = 2000.0f;
    *(f32*)((a0 + 0x6c)) = 0.5f;
    func_002e4a08(a0 + 0x100);
    func_002e5f70(a0 + 0x7e20);
    func_00144450(a0 + 0x8078);
    func_00102c80();
    func_002ceae8(a0, (u32)frame, (u32)&D_00375d48);
    v0 = func_001708f8((u32)frame, 0xffffffff);
    *(u32*)((a0 + 0x60)) = v0;
    func_00168b38(v0, 0x2a, 0);
    *(u32*)((a0 + 0x70)) = (*(u32*)((func_00168b38(v0, 0x2a, 0) + 8)) + 0x10);
    func_00168b38(v0, 0xa, 0);
    s4 = *(u32*)((func_00168b38(v0, 0xa, 0) + 8));
    *(u32*)((a0 + 0x5c)) = *(u32*)((func_00168b38(v0, 0x2a, (*(u32*)((a0 + 0x80)) << 1) + 1) + 8));
    *(u32*)(((a0 + 0x8000) + 0x64)) = *(u32*)((func_00168b38(v0, 0x2a, (*(u32*)((a0 + 0x80)) << 1) + 2) + 8));
    s3 = 0;
    s5 = (a0 + 0x7e20);
    do {
        *(u32*)(((a0 + (s3 * 4)) + 0x74)) = *(u32*)((func_00168b38(v0, 0x2a, s3 + 9) + 8));
        s3 = (s3 + 1);
    } while (((s32)(((s32)(s3) < (s32)(3))) != 0));
    func_002e5fb8(s5, s4);
    func_002dc850(a0);
    func_002cedd0(5, (u32)&D_00362990);
    *(u8*)(((a0 + 0x8000) + 0x60)) = 0;
    func_0016bd60(func_002dc7f8(a0), 0x1e);
    v0_0 = func_0016b740(0x6a2);
    if (((s32)(v0_0) != 0)) {
        func_0016bd60(v0_0, 0x22);
    }
    v0_1 = func_0016b740(0x6a3);
    if (((s32)(v0_1) != 0)) {
        func_0016bd60(v0_1, 0x23);
    }
    return;
}

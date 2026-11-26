// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00362570 asm("D_00362570");
extern "C" u32 D_003625a8 asm("D_003625a8");
extern "C" u32 D_00375b68 asm("D_00375b68");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_002cedd0(u32, u32) asm("func_002cedd0");
extern "C" u32 func_002e34c8(u32) asm("func_002e34c8");
extern "C" void func_00102c80() asm("func_00102c80");
extern "C" void func_002ce958(u32, u32, u32, u32) asm("func_002ce958");
extern "C" void func_002ceae8(u32, u32, u32) asm("func_002ceae8");
extern "C" void func_002d7630(u32) asm("func_002d7630");
extern "C" void func_002e34b8(u32) asm("func_002e34b8");
extern "C" void func_002e34c0(u32, u32) asm("func_002e34c0");
extern "C" void func_002e6fc0(u32, u32) asm("func_002e6fc0");

// 0x002d7128 u_tail4_002d7128(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00375b74   (float literals live here in the original)
f32 lift_002d7128(u32 a0, u32 a1, u32 a2, u32 a3) asm("_Z16u_tail4_002d7128jjjj");
f32 lift_002d7128(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[64];
    u32 v0;
    u32 v0_0;
    func_002ce958(a0, 1, a2, 0x800);
    *(u32*)((a0 + 0x68)) = a3;
    *(u32*)((a0 + 0x98)) = a1;
    *(u32*)(a0) = (u32)&D_003625a8;
    *(f32*)((a0 + 0x64)) = 1.0471974611282349f;
    func_002e34b8(a0 + 0xbc);
    *(u8*)((a0 + 0x1d0)) = 0;
    *(u8*)((a0 + 0x1d1)) = 0;
    *(u32*)((a0 + 0x1dc)) = 0;
    *(u32*)((a0 + 0x9c)) = 0;
    func_002ceae8(a0, (u32)frame, (u32)&D_00375b68);
    v0 = func_001708f8((u32)frame, 0xffffffff);
    *(u32*)((a0 + 0x60)) = v0;
    func_00168b38(v0, 0x2a, 0);
    *(u32*)((a0 + 0xcc)) = (*(u32*)((func_00168b38(v0, 0x2a, 0) + 8)) + 0x10);
    func_00168b38(v0, 0x2a, 1);
    func_002e34c0(a0 + 0xbc, *(u32*)((func_00168b38(v0, 0x2a, 1) + 8)));
    func_00168b38(v0, 0x2a, 2);
    *(u32*)((a0 + 0x9c)) = *(u32*)((func_00168b38(v0, 0x2a, 2) + 8));
    func_00168b38(v0, 0x2a, *(u32*)((a0 + 0x98)) + 3);
    *(u32*)((a0 + 0x5c)) = *(u32*)((func_00168b38(v0, 0x2a, *(u32*)((a0 + 0x98)) + 3) + 8));
    *(u32*)((a0 + 0x94)) = func_002e34c8(a0 + 0xbc);
    v0_0 = func_001063c0(0xc, func_001050c8());
    func_002e6fc0(v0_0, *(u32*)((a0 + 0x9c)));
    *(u32*)((a0 + 0xa0)) = v0_0;
    func_00102c80();
    func_002d7630(a0);
    *(u8*)((a0 + 0x1d2)) = 0;
    return func_002cedd0(3, (u32)&D_00362570);
}

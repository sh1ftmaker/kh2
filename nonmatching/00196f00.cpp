// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00197d40 asm("D_00197d40");
extern "C" u32 D_0032b968 asm("D_0032b968");
extern "C" u32 D_0035037c asm("D_0035037c");
extern "C" u32 D_01c61b10 asm("D_01c61b10");
extern "C" u32 D_01c61b20 asm("D_01c61b20");
extern "C" u32 func_00196e88(u32, u32, u32, f32) asm("func_00196e88");
extern "C" void func_00105110(u32) asm("func_00105110");
extern "C" void func_0014c9d8(u32) asm("func_0014c9d8");
extern "C" void func_00196e00(u32) asm("func_00196e00");
extern "C" void func_00197760() asm("func_00197760");
extern "C" void func_00197c90() asm("func_00197c90");
extern "C" void func_001c1130(u32) asm("func_001c1130");
extern "C" void func_00226ac0(u32, u32, u32, u32, u32, u32, u32) asm("func_00226ac0");
extern "C" void func_002ef8d0(u32, u32) asm("func_002ef8d0");

// 0x00196f00 func_00196f00
u32 func_00196f00(u32 a0) asm("_ZN2YS5EVENT5startEv");
u32 func_00196f00(u32 a0) {
    u32 s0;
    if (((s32)(*(u32*)((a0 + 4))) != 0)) {
        func_00226ac0(*(u32*)((a0 + 4)), a0 + 0x50, *(u32*)((a0 + 0x44)), *(u32*)((a0 + 8)), (u32)&D_00197d40, *(u32*)((a0 + 0x9c)), *(u32*)((a0 + 0xa0)));
    }
    if ((*(u32*)(&D_0035037c) != 0)) {
        s0 = *(u32*)(&D_0035037c);
        func_00196e00(*(u32*)(&D_0035037c));
        func_00105110(s0);
    }
    *(u32*)(&D_0035037c) = a0;
    func_001c1130(0xc);
    func_0014c9d8(4);
    if (((((*(u16*)((*(u32*)((a0 + 0x3c)) + 2)) >> 3) & 1) & 0xff) == 0)) {
        func_00197760();
    }
    if (((s32)((((*(u16*)((*(u32*)((a0 + 0x3c)) + 2)) >> 2) & 1) & 0xff)) == 0)) {
        func_00197c90();
    }
    func_002ef8d0((u32)&D_01c61b10, *(u32*)(((u32)&D_0032b968 + 4)));
    func_002ef8d0((u32)&D_01c61b20, *(u32*)(((u32)&D_0032b968 + 4)));
    if (((s32)(((*(u16*)((*(u32*)((a0 + 0x3c)) + 2)) & 1) & 0xff)) == 0)) {
        *(u32*)(a0) = (*(u32*)(a0) | 2);
    }
    return func_00196e88(a0, 0, 0, 0.0f);
}

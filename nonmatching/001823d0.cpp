// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034ecc0 asm("D_0034ecc0");
extern "C" u32 D_0034ecc8 asm("D_0034ecc8");
extern "C" u32 D_0034ecd0 asm("D_0034ecd0");
extern "C" u32 D_0034ecd4 asm("D_0034ecd4");
extern "C" u32 D_0034ecd8 asm("D_0034ecd8");
extern "C" u32 D_0034ecdc asm("D_0034ecdc");
extern "C" u32 D_0034ece0 asm("D_0034ece0");
extern "C" u32 D_0034ece4 asm("D_0034ece4");
extern "C" u32 D_0034ece8 asm("D_0034ece8");
extern "C" u32 D_0034ecec asm("D_0034ecec");
extern "C" u32 D_0034ecf0 asm("D_0034ecf0");
extern "C" u32 D_0034ecf4 asm("D_0034ecf4");
extern "C" u32 D_0034f250 asm("D_0034f250");
extern "C" u32 D_0034fa78 asm("D_0034fa78");
extern "C" u32 D_0036c878 asm("D_0036c878");
extern "C" u32 D_0036c880 asm("D_0036c880");
extern "C" u32 D_0036c888 asm("D_0036c888");
extern "C" u32 D_01c6053c asm("D_01c6053c");
extern "C" u32 D_01c60540 asm("D_01c60540");
extern "C" u32 D_01c60548 asm("D_01c60548");
extern "C" u32 D_01c60550 asm("D_01c60550");
extern "C" u32 D_01c60558 asm("D_01c60558");
extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");
extern "C" void func_00181cc0(u32, u32) asm("func_00181cc0");
extern "C" void func_00182df0(u32) asm("func_00182df0");
extern "C" void func_001955a8(u32, u32) asm("func_001955a8");
extern "C" void func_001c0a00(u32) asm("func_001c0a00");

// 0x001823d0 func_001823d0
// minilink-rodata 0x0036c890   (float literals live here in the original)
void func_001823d0(u32 a0) asm("func_001823d0");
void func_001823d0(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    *(u32*)(&D_0034ecd0) = 0;
    *(u32*)(&D_0034ecd4) = 0;
    *(u32*)(&D_0034ecec) = 0;
    *(f32*)(&D_01c6053c) = 10000.0f;
    *(u32*)(&D_0034ecf0) = 0;
    *(u32*)(&D_0034ece4) = 0xffffffff;
    *(u64*)(&D_0034ecc0) = 0xffffffff;
    *(u32*)(&D_01c60540) = 0;
    *(u64*)(&D_0034ecc8) = 0;
    *(u32*)(&D_0034ecdc) = 4;
    *(u32*)(&D_0034ecd8) = 3;
    *(u32*)(&D_0034ece8) = 0;
    *(u32*)(&D_0034ece0) = 0;
    *(u64*)(&D_01c60548) = 0;
    *(u64*)(&D_01c60550) = 0;
    *(u32*)(&D_01c60558) = 0;
    func_00182df0(a0);
    v0 = func_00168b88(*(u32*)(&D_0034ecf4), 0xd, (*(s8*)(&D_0036c878) | (*(s8*)(((u32)&D_0036c878 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036c878 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036c878 + 1)) << 8)), 0);
    if (((s32)(v0) != 0)) {
        func_00181cc0(*(u32*)((v0 + 8)), *(u16*)(a0));
    }
    v0_0 = func_00168b88(*(u32*)(&D_0034ecf4), 0xd, (*(s8*)(&D_0036c880) | (*(s8*)(((u32)&D_0036c880 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036c880 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036c880 + 1)) << 8)), 0);
    if (((s32)(v0_0) != 0)) {
        func_00181cc0(*(u32*)((v0_0 + 8)), *(u16*)((a0 + 2)));
    }
    v0_1 = func_00168b88(*(u32*)(&D_0034ecf4), 0xd, (*(s8*)(&D_0036c888) | (*(s8*)(((u32)&D_0036c888 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036c888 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036c888 + 1)) << 8)), 0);
    if (((s32)(v0_1) != 0)) {
        func_00181cc0(*(u32*)((v0_1 + 8)), *(u16*)((a0 + 4)));
    }
    if (((s32)(*(u32*)(&D_0034ecd0)) == 0)) {
        *(u32*)(&D_0034ecd0) = 0x280000;
    }
    if (((s32)(*(u32*)(&D_0034ecd4)) == 0)) {
        *(u32*)(&D_0034ecd4) = 0x100000;
    }
    if (((s32)(*(u32*)(&D_0034ecec)) == 0)) {
        *(u32*)(&D_0034ecec) = 0x80000;
    }
    if ((*(u32*)(&D_0034ecf0) == 0)) {
        *(u32*)(&D_0034ecf0) = 0x20000;
    }
    if (((s32)((((u32)(*(u16*)(a0)) < (u32)(0x33)) ^ 1)) != 0)) {
        *(u32*)(&D_0034ecd8) = 0;
        *(u32*)(&D_0034ecdc) = 0;
    }
    func_001955a8((u32)&D_0034f250, *(u32*)(&D_0034ecd8));
    func_001955a8((u32)&D_0034fa78, *(u32*)(&D_0034ecdc));
    func_001c0a00(*(u32*)(&D_01c60558));
    *(u64*)(&D_0034ecc0) = ((*(u64*)(&D_0034ecc0) | *(u64*)(&D_01c60548)) & ~((0 | *(u64*)(&D_01c60550))));
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ecf0 asm("D_0035ecf0");
extern "C" u32 D_0035ed00 asm("D_0035ed00");
extern "C" u32 D_0035ed10 asm("D_0035ed10");
extern "C" u32 func_001a6d08(u32) asm("func_001a6d08");
extern "C" u32 func_00244b38() asm("func_00244b38");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x00244a60 func_00244a60
u32 func_00244a60() asm("func_00244a60");
u32 func_00244a60() {
    u32 v0;
    u32 loc_0;
    u32 t6;
    v0 = func_001a6d08(0xa);
    if (((s32)(v0) != 0)) {
        loc_0 = 0x64;
        func_0028d980(*(u32*)(&D_0035ed00), 0x753b, 0, 0, *(u32*)(&D_0035ecf0), 0x27, 0x29, 0xffffffff);
        func_00139620(*(u32*)(&D_0035ed00));
        func_001395f8(*(u32*)(&D_0035ed00));
        *(u32*)((*(u32*)(&D_0035ed00) + 0x1b0)) = 2;
        *(u8*)((*(u32*)(&D_0035ed00) + 0x195)) = 1;
        t6 = (*(u32*)(&D_0035ed00) + 0x18);
        *(u32*)((t6 + 0xb8)) = (*(u32*)((t6 + 0xb8)) | 8);
        func_002fde18(*(u32*)(&D_0035ed10), 0, 0x20);
        *(u32*)((*(u32*)(&D_0035ed00) + 0x198)) = *(u32*)(&D_0035ed10);
        return func_00244b38();
    } else {
        return v0;
    }
}

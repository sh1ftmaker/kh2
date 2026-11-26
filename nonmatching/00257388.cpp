// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f034 asm("D_0035f034");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_00372a00 asm("D_00372a00");
extern "C" u32 D_00372a08 asm("D_00372a08");
extern "C" u32 func_00139620(u32) asm("func_00139620");
extern "C" u32 func_00139d78(u32, u32) asm("func_00139d78");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");

// 0x00257388 func_00257388
u32 func_00257388(u32 a0, u32 a1) asm("_ZN2Tz5CmTop15SetupWarningWinEii");
u32 func_00257388(u32 a0, u32 a1) {
    u8 frame[16];
    u32 t7;
    u32 v0;
    u32 t6;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f034), a1)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f034)) + 0x14))))(*(u32*)(&D_0035f034));
    }
    if (((s32)(a1) == 0)) {
        t7 = (u32)&D_00372a00;
    } else {
        t7 = (u32)&D_00372a08;
    }
    *(u32*)((u32)frame) = 0;
    func_0028d980(*(u32*)(&D_0035f034), 0x7546, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), *(s16*)(t7), *(s16*)((t7 + 4)), a0);
    v0 = func_00139620(*(u32*)(&D_0035f034));
    *(u32*)((*(u32*)(&D_0035f034) + 0x1b0)) = 2;
    t6 = (*(u32*)(&D_0035f034) + 0x18);
    *(u32*)((t6 + 0xb8)) = (*(u32*)((t6 + 0xb8)) | 8);
    return v0;
}

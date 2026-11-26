// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f338 asm("D_0035f338");
extern "C" u32 D_0035f33c asm("D_0035f33c");
extern "C" u32 D_0035f340 asm("D_0035f340");
extern "C" u32 D_0035f344 asm("D_0035f344");
extern "C" u32 func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_00258b38(u32) asm("func_00258b38");
extern "C" u32 func_00258cd8(u32) asm("func_00258cd8");
extern "C" void func_00139d78(u32) asm("func_00139d78");

// 0x00288670 func_00288670
u32 func_00288670(u32 a0) asm("_ZN2Tz9MenuBasic9StartFadeEPFvvE");
u32 func_00288670(u32 a0) {
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 t6;
    if (((s32)(func_00258cd8(a0)) != 0)) {
        return func_00258b38(a0);
    } else {
        func_00139d78(*(u32*)(&D_0035f338));
        s1 = func_0023c4b8(*(u32*)(&D_0035f340), 0);
        v0 = func_00236ca8(*(u32*)(&D_0035f33c), 0);
        *(u8*)((v0 + 0x190)) = 1;
        v0_0 = func_001386e0(*(u32*)(&D_0035f338), 0x7554, s1, v0, 5, 0);
        *(u32*)((*(u32*)(&D_0035f338) + 0x188)) = 1;
        t6 = (*(u32*)(&D_0035f338) + 0x18);
        *(u32*)((t6 + 0xb8)) = (*(u32*)((t6 + 0xb8)) | 8);
        *(u8*)((*(u32*)(&D_0035f338) + 0x195)) = 1;
        *(u32*)(&D_0035f344) = a0;
        return v0_0;
    }
}

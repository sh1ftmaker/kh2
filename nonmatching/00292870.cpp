// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f4bc asm("D_0035f4bc");
extern "C" u32 D_0035f4c0 asm("D_0035f4c0");
extern "C" u32 D_0035f4c8 asm("D_0035f4c8");
extern "C" u32 D_0035f4cc asm("D_0035f4cc");
extern "C" u32 D_0035f4d0 asm("D_0035f4d0");
extern "C" u32 D_0035f4d8 asm("D_0035f4d8");
extern "C" u32 D_0035f4e0 asm("D_0035f4e0");
extern "C" u32 D_0035f4e2 asm("D_0035f4e2");
extern "C" u32 func_00253b00() asm("func_00253b00");
extern "C" u32 func_00253b18() asm("func_00253b18");
extern "C" u32 func_00292a58() asm("func_00292a58");

// 0x00292870 func_00292870
u32 func_00292870() asm("func_00292870");
u32 func_00292870() {
    u32 v0;
    *(u32*)(&D_0035f4c8) = func_00253b00();
    v0 = func_00253b18();
    *(u32*)(&D_0035f4cc) = v0;
    *(u32*)(&D_0035f4cc) = 0;
    *(u32*)(&D_0035f4d0) = (((s32)(*(u32*)(&D_0035f4bc)) < (s32)(((s32)(v0) / (s32)(*(u32*)(&D_0035f4c0))))) ? *(u32*)(&D_0035f4bc) : ((s32)(v0) / (s32)(*(u32*)(&D_0035f4c0))));
    *(u16*)(&D_0035f4d8) = 0;
    *(u16*)(&D_0035f4e0) = 0;
    *(u8*)(&D_0035f4e2) = 0;
    return func_00292a58();
}

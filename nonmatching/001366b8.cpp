// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_00347d20 asm("D_00347d20");
extern "C" u32 func_00136560(u32) asm("func_00136560");
extern "C" u32 func_001aec40(u32) asm("func_001aec40");
extern "C" void func_001363a0(u32) asm("func_001363a0");
extern "C" void func_001369d0() asm("func_001369d0");
extern "C" void func_001369f0() asm("func_001369f0");
extern "C" void func_00136a60() asm("func_00136a60");
extern "C" void func_002b9ab8(u32) asm("func_002b9ab8");
extern "C" void func_002b9ed0() asm("func_002b9ed0");
extern "C" void func_002bc458(u32) asm("func_002bc458");

// 0x001366b8 func_001366b8
u32 func_001366b8(u32 a0) asm("_ZN2dk4BGSE8areaReadEP4TASK");
u32 func_001366b8(u32 a0) {
    u32 v0;
    v0 = func_001aec40(a0);
    if (((s32)(v0) != 0)) {
        func_002b9ab8(0x14);
        func_002bc458(*(s16*)((v0 + 2)));
        if ((*(u8*)(&D_0032bae0) != *(u32*)(&D_00347d20))) {
            func_001369d0();
            func_001369f0();
            *(u32*)(&D_00347d20) = *(u8*)(&D_0032bae0);
            func_002b9ed0();
        }
        func_00136a60();
        func_001363a0(a0);
        return func_00136560(a0);
    } else {
        return v0;
    }
}

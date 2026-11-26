// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 func_001051a0(u32, u32) asm("func_001051a0");
extern "C" u32 func_001703a8(u32) asm("func_001703a8");
extern "C" u32 func_00242ea8(u32) asm("func_00242ea8");
extern "C" u32 func_002bea10(u32) asm("func_002bea10");
extern "C" void func_002bea00() asm("func_002bea00");

// 0x00149de0 func_00149de0
void func_00149de0(u32 a0) asm("_ZN2dk4Area16cacheBuffDestroyEPK4AREA");
void func_00149de0(u32 a0) {
    if (((s32)(func_00242ea8(a0)) == 0)) {
        if (((s32)(func_001051a0((u32)&D_0032bae0, a0)) == 0)) {
            func_001703a8(0x42e);
        }
        if ((*(u8*)(a0) != *(u8*)(&D_0032bae0))) {
            func_001703a8(0x384);
            func_001703a8(0x3b6);
            func_001703a8(0x438);
            func_001703a8(0x442);
        }
        func_002bea00();
        if ((*(u8*)(&D_0032bae0) == 0xf)) {
            if ((*(u8*)(a0) != *(u8*)(&D_0032bae0))) {
                func_001703a8(0x410);
                func_001703a8(0x410);
                func_001703a8(0x9c4);
                return;
            } else {
                func_002bea10(*(u8*)(&D_0032bae0));
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}

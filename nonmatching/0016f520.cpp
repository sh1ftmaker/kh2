// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036c460 asm("D_0036c460");
extern "C" u32 D_0036c468 asm("D_0036c468");
extern "C" u32 D_0036c478 asm("D_0036c478");
extern "C" u32 D_004f6400 asm("D_004f6400");
extern "C" u32 func_0016f460(u32, u32, u32) asm("func_0016f460");
extern "C" u32 func_0016f770(u32) asm("func_0016f770");
extern "C" u32 func_0016f7a0(u32, u32) asm("func_0016f7a0");
extern "C" u32 func_00170978(u32) asm("func_00170978");
extern "C" u32 func_002ff8b0(u32, u32) asm("func_002ff8b0");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");
extern "C" void func_002ff2e8(u32, u32) asm("func_002ff2e8");

// 0x0016f520 func_0016f520
u32 func_0016f520(u32 a0, u32 a1, u32 a2) asm("_ZNK2YS8OBJENTRY8get_msetEjPc");
u32 func_0016f520(u32 a0, u32 a1, u32 a2) {
    u32 a1_0;
    u32 v0;
    u32 v0_1;
    if (((s32)(a2) == 0)) {
        a2 = (u32)&D_004f6400;
    }
    if (((s32)(func_0016f460(a0, a1, a2)) != 0)) {
        func_002fee78(a2, (u32)&D_0036c460, a0 + 0x28);
        if (((s32)(func_0016f7a0(a1, a1_0)) == 0)) {
            if (((s32)(func_0016f770(a1)) != 0)) {
                if (((s32)(*(u8*)((a0 + 4))) != 0)) {
                    if (((s32)(((s32)(func_00170978(a2)) < (s32)(2))) != 0)) {
                        func_002ff2e8(func_002ff8b0(a2, 0x2e), (u32)&D_0036c468);
                    }
                }
            }
        } else {
            func_002ff2e8(func_002ff8b0(a2, 0x2e), (u32)&D_0036c468);
        }
        v0_1 = a2;
    } else {
        if (((s32)(func_0016f7a0(a1, 0x370000)) != 0)) {
            func_002fee78(a2, (u32)&D_0036c478, a0 + 8);
            v0 = a2;
        } else {
            v0 = 0;
        }
        v0_1 = v0;
    }
    return v0_1;
}

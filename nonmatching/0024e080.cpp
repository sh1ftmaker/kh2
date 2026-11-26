// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035edf4 asm("D_0035edf4");
extern "C" u32 D_003722e0 asm("D_003722e0");
extern "C" u32 D_003722e8 asm("D_003722e8");
extern "C" u32 D_003722ec asm("D_003722ec");
extern "C" u32 D_003722f0 asm("D_003722f0");
extern "C" u32 func_001d56c8(u32) asm("func_001d56c8");
extern "C" u32 func_00276c18() asm("func_00276c18");

// 0x0024e080 func_0024e080
u32 func_0024e080() asm("func_0024e080");
u32 func_0024e080() {
    u32 s1;
    u32 s0;
    u32 t7;
    u32 t7_0;
    if (((s32)(func_00276c18()) == 0)) {
        s1 = ((s32)(*(u32*)(&D_0035edf4)) == 0) ? *(u32*)(&D_003722ec) : *(u32*)(&D_003722f0);
        if (((s32)(s1) > 0)) {
            s0 = 0;
            do {
                if (((s32)(*(u32*)(&D_0035edf4)) == 0)) {
                    t7 = (s0 + (u32)&D_003722e0);
                } else {
                    t7 = (s0 + (u32)&D_003722e8);
                }
                if (((s32)(((u32)(*(u8*)(func_001d56c8(*(u8*)(t7)))) < (u32)(2))) == 0)) {
                    break;
                }
                s0 = (s0 + 1);
            } while (((s32)(*(u32*)(&D_0035edf4)) != 0));
        }
        t7_0 = 0;
    } else {
        t7_0 = 1;
    }
    return t7_0;
}

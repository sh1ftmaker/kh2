// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_002943e8(u32) asm("func_002943e8");
extern "C" u32 func_002a9d68() asm("func_002a9d68");

// 0x002aa220 func_002aa220
void func_002aa220() asm("_ZN2Tz9JmNewInfo10CheckAnsemEv");
void func_002aa220() {
    u32 s0;
    u32 v0;
    u32 s1;
    s0 = func_002a9d68();
    v0 = func_00294000(4);
    if (((s32)(*(u32*)((v0 + 8))) > 0)) {
        s1 = 0;
        do {
            if (((s32)(func_002943e8((v0 + (s1 * 8)) + 0x10)) != 0)) {
                if (((*(u32*)((((s1 >> 5) << 2) + (s0 + 0x13c))) & (1 << (s1 & 0x1f))) == 0)) {
                    *(u32*)(((*(u32*)(&D_0035f610) + 0x13c) + ((s1 >> 5) << 2))) = (*(u32*)(((*(u32*)(&D_0035f610) + 0x13c) + ((s1 >> 5) << 2))) | (1 << (s1 & 0x1f)));
                }
            }
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(*(u32*)((v0 + 8))))) != 0));
    }
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034a778 asm("D_0034a778");
extern "C" u32 D_0034a77c asm("D_0034a77c");
extern "C" u32 D_0034a790 asm("D_0034a790");

// 0x001538d8 func_001538d8
void func_001538d8(u8 a0) asm("func_001538d8");
void func_001538d8(u8 a0) {
    u32 t4;
    u32 t7;
    u32 t5;
    if (((s32)(*(u32*)(&D_0034a790)) != 0)) {
        if (((s32)(*(u32*)(&D_0034a77c)) > 0)) {
            t4 = 0;
            t7 = *(u32*)(&D_0034a778);
            t5 = 0;
            do {
                if ((*(u32*)(((t5 + (t4 * 0x18)) + t7)) == a0)) {
                    *(u8*)((((t4 << 6) + *(u32*)(&D_0034a790)) + 0x30)) = 1;
                }
                t4 = (t4 + 1);
                t7 = *(u32*)(&D_0034a778);
            } while (((s32)(t7) != 0));
        }
    }
    return;
}

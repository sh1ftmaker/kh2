// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2aa80 asm("D_01e2aa80");

// 0x002bbe80 func_002bbe80
void func_002bbe80() asm("_ZN5SOUND11muteBgSeOffEv");
void func_002bbe80() {
    u32 t5;
    u32 t6;
    t5 = 0;
    for (;;) {
        t6 = (t5 == 0) ? *(u32*)(&D_01e2aa80) : *(u32*)((t5 + 0x1c));
        t5 = t6;
        if (((s32)(t6) == 0)) break;
        if ((*(u8*)((t6 + 0x31)) != 2)) {
            continue;
        }
        *(u32*)((t6 + 0x24)) = (*(u32*)((t6 + 0x24)) & 0xfffffffb);
    }
    return;
}

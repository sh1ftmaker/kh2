// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00139570(u32) asm("func_00139570");

// 0x0028a908 func_0028a908
void func_0028a908(u32 a0) asm("func_0028a908");
void func_0028a908(u32 a0) {
    u32 s0;
    u32 t4;
    u32 t7;
    if (((s32)(((s32)((*(u16*)((a0 + 4)) << 0x10)) >> 0x10)) > 0)) {
        s0 = 0;
        t4 = *(u16*)((a0 + 4));
        t7 = *(u32*)((a0 + 0x28));
        do {
            if (((s32)(*(u32*)(((s0 << 2) + *(u32*)((a0 + 0x28))))) != 0)) {
                func_00139570(*(u32*)(((s0 << 2) + *(u32*)((a0 + 0x28)))));
                t4 = *(u16*)((a0 + 4));
            }
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(((s32)((t4 << 0x10)) >> 0x10)));
        } while ((t7 != 0));
    }
    return;
}

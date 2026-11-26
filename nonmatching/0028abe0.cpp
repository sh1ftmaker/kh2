// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x0028abe0 Tz::Select::Destroy(...)
void lift_0028abe0(u32 a0) asm("_ZN2Tz6Select7DestroyEz");
void lift_0028abe0(u32 a0) {
    u32 s1;
    u32 t5;
    u32 t7;
    if (((s32)(func_0028acc8(a0)) != 0)) {
        if (((s32)(((s32)((*(u16*)((a0 + 4)) << 0x10)) >> 0x10)) > 0)) {
            s1 = 0;
            t5 = *(u16*)((a0 + 4));
            t7 = *(u32*)((a0 + 0x28));
            do {
                if (((s32)(*(u32*)(((s1 << 2) + *(u32*)((a0 + 0x28))))) != 0)) {
                    if (((s32)(func_00139d78(*(u32*)(((s1 << 2) + *(u32*)((a0 + 0x28)))))) != 0)) {
                        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(((s1 << 2) + *(u32*)((a0 + 0x28))))) + 0x14))))(*(u32*)(((s1 << 2) + *(u32*)((a0 + 0x28)))));
                    } else {
                        *(u32*)(((s1 << 2) + *(u32*)((a0 + 0x28)))) = 0;
                    }
                    t5 = *(u16*)((a0 + 4));
                }
                s1 = (s1 + 1);
                t7 = ((s32)(s1) < (s32)(((s32)((t5 << 0x10)) >> 0x10)));
            } while ((t7 != 0));
        }
    }
    return;
}

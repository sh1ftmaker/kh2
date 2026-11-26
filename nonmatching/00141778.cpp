// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00141778 func_00141778
u32 func_00141778(u32 a0, u16 a1) asm("_ZN2dk11OctCollFile14isExistPolygonEt");
u32 func_00141778(u32 a0, u16 a1) {
    u32 t5;
    u32 t6;
    if ((a1 != 0xffff)) {
        if (((s32)(*(u32*)((a0 + 0x24))) > 0)) {
            t5 = 0;
            t6 = *(u32*)((a0 + 8));
            do {
                if ((*(u8*)(((t6 + (t5 * 0x14)) + 0x10)) == 1)) {
                    if (((u32)(a1) >= (u32)(*(u16*)(((t6 + (t5 * 0x14)) + 0xc))))) {
                        if (((s32)(((u32)(a1) < (u32)(*(u16*)(((t6 + (t5 * 0x14)) + 0xe))))) != 0)) {
                            return 1;
                        }
                    }
                } else {
                    if (((u32)(a1) >= (u32)(*(u16*)(((t6 + (t5 * 0x14)) + 0xc))))) {
                        if (((u32)(a1) < (u32)(*(u16*)(((t6 + (t5 * 0x14)) + 0xe))))) {
                            return 0;
                        }
                    }
                }
                t5 = (t5 + 1);
            } while (((s32)(((s32)(t5) < (s32)(*(u32*)((a0 + 0x24))))) != 0));
            return 0;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

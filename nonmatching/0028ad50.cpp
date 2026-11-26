// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001396c0(u32) asm("func_001396c0");
extern "C" u32 func_00239d30(u32, u32) asm("func_00239d30");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x0028ad50 func_0028ad50
u32 func_0028ad50(u32 a0) asm("func_0028ad50");
u32 func_0028ad50(u32 a0) {
    u32 s2;
    u32 t5;
    u32 t7;
    u32 t4;
    if (((s32)(func_0028acc8(a0)) != 0)) {
        if (((s32)(((s32)((*(u16*)((a0 + 4)) << 0x10)) >> 0x10)) > 0)) {
            s2 = 0;
            t5 = *(u16*)((a0 + 4));
            t7 = *(u32*)((a0 + 0x28));
            do {
                if (((s32)(*(u32*)(((s2 << 2) + *(u32*)((a0 + 0x28))))) != 0)) {
                    if ((func_001396c0(*(u32*)(((s2 << 2) + *(u32*)((a0 + 0x28))))) == 0)) {
                        if (((s32)((func_00239d30(*(u32*)(((s2 << 2) + *(u32*)((a0 + 0x28)))) + 0x18, *(u32*)(((*(u32*)(((s2 << 2) + *(u32*)((a0 + 0x28)))) + 0x18) + 0x114))) & 0xff)) == 0)) {
                            if (((s32)(*(u8*)((*(u32*)(((s2 << 2) + *(u32*)((a0 + 0x28)))) + 0x194))) == 0)) {
                                return 0;
                            }
                        }
                    }
                    t5 = *(u16*)((a0 + 4));
                }
                s2 = (s2 + 1);
                t7 = ((s32)(s2) < (s32)(((s32)((t5 << 0x10)) >> 0x10)));
            } while ((t7 != 0));
        }
        t4 = 1;
    } else {
        t4 = 0;
    }
    return t4;
}

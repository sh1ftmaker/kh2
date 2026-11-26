// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00132c68(u32, u32) asm("func_00132c68");

// 0x001325c8 func_001325c8
u32 func_001325c8(u32 a0, u32 a1, u32 a2) asm("func_001325c8");
u32 func_001325c8(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 t5;
    u32 t5_0;
    u32 t5_1;
    u32 t5_2;
    u32 t5_3;
    u32 t5_4;
    v0 = func_00132c68(a0, a1);
    if (((s32)(v0) != 0)) {
        if ((a1 != 0)) {
            if (((u32)((a2 & a1)) >= (u32)(*(u16*)((v0 + 8))))) {
                if (((u32)(*(u16*)((v0 + 0xa))) >= (u32)((a2 & a1)))) {
                    if (((s32)(*(u16*)(((((a2 & a1) - *(u16*)((v0 + 8))) << 1) + (v0 + *(u32*)((v0 + 0x18)))))) != 0)) {
                        t5 = ((s32)(((u32)(*(u16*)((v0 + 0xc))) < (u32)(*(u16*)(((((a2 & a1) - *(u16*)((v0 + 8))) << 1) + (v0 + *(u32*)((v0 + 0x18)))))))) != 0) ? 0xffffffff : (*(u16*)(((((a2 & a1) - *(u16*)((v0 + 8))) << 1) + (v0 + *(u32*)((v0 + 0x18))))) + -1);
                        t5_0 = t5;
                    } else {
                        t5_0 = 0xffffffff;
                    }
                    t5_1 = t5_0;
                } else {
                    t5_1 = 0xffffffff;
                }
                t5_2 = t5_1;
            } else {
                t5_2 = 0xffffffff;
            }
            t5_3 = t5_2;
        } else {
            if (((s32)(((u32)(a2) < (u32)(*(u16*)((v0 + 0xc))))) == 0)) {
                a2 = 0xffffffff;
            }
            t5_3 = a2;
        }
        t5_4 = t5_3;
    } else {
        t5_4 = 0xffffffff;
    }
    return t5_4;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001f5f10 asm("D_001f5f10");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" u32 D_01d9eab4 asm("D_01d9eab4");
extern "C" u32 func_0021ee48(u32, u32, u32, u32, u32, u32, u32) asm("func_0021ee48");
extern "C" u32 func_00222568(u32, u32, u32) asm("func_00222568");

// 0x001f6030 func_001f6030
void func_001f6030(u32 a0, u32 a1, u32 a2) asm("func_001f6030");
void func_001f6030(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t6_0;
    u32 t7;
    u32 t6_1;
    u32 t7_2;
    u32 t7_3;
    u32 a3_4;
    t6 = *(u32*)(&D_01d9eab4);
    if (((s32)(t6) == 0)) {
        t6_0 = *(u32*)(&D_01d9ea9c);
        if ((t6_0 == 0)) {
            t7 = *(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8));
            if (((t7 & ((u64)(0xff) | 0xff00)) == 0)) {
                t6_1 = *(u8*)((a1 + 7));
                if ((t6_1 != 0xff)) {
                    if (((s32)((((s32)(func_00222568(a0, a1, a2)) >> 8) & *(u8*)((a1 + 7)))) == 0)) {
                        t7_2 = *(u32*)((a1 + 0xc));
                        if ((t7_2 != 0xffffffff)) {
                            t7_3 = *(u32*)((a1 + 0x14));
                            if ((t7_3 != 0xffffffff)) {
                                a3_4 = *(u32*)(*(u32*)((a2 + 0xc)));
                                func_0021ee48(a0, a1, (u32)&D_001f5f10, (a0 + a3_4) + 0xa0, *(s16*)((a1 + 4)), *(u8*)((a1 + 8)), *(u8*)((a1 + 6)));
                                return;
                            } else {
                                return;
                            }
                        } else {
                            return;
                        }
                    } else {
                        return;
                    }
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}

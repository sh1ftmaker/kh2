// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_003147a0(u32, u32) asm("func_003147a0");

// 0x00314508 func_00314508
u32 func_00314508(u32 a0) asm("func_00314508");
u32 func_00314508(u32 a0) {
    u8 frame[48];
    u32 t5;
    u32 t7;
    u32 t5_0;
    u32 t7_1;
    u32 t7_2;
    u32 t7_3;
    u32 v0;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    *(u64*)(((u32)frame + 0x20)) = a0;
    t5 = *(u32*)((u32)frame);
    func_003147a0((u32)frame + 0x20, (u32)frame);
    if (((s32)((t5 ^ 2)) != 0)) {
        if (((s32)(((u32)(t5) < (u32)(2))) == 0)) {
            t7 = *(u32*)(((u32)frame + 4));
            if (((s32)(t7) == 0)) {
                if (((s32)((t5 ^ 4)) != 0)) {
                    t5_0 = *(u32*)(((u32)frame + 8));
                    if (((s32)(t5_0) >= 0)) {
                        if (((s32)(((s32)(t5_0) < (s32)(0x20))) != 0)) {
                            if (((s32)(((s32)(t5_0) < (s32)(0x3d))) == 0)) {
                                t7_1 = *(u64*)(((u32)frame + 0x10));
                                t7_3 = ((u64)(t7_1) << (t5_0 + -0x3c));
                            } else {
                                t7_2 = *(u64*)(((u32)frame + 0x10));
                                t7_3 = ((u64)(t7_2) >> (0x3c - t5_0));
                            }
                            v0 = (s32)((u64)(t7_3));
                        } else {
                            v0 = 0xffffffff;
                        }
                        v0_4 = v0;
                    } else {
                        v0_4 = 0;
                    }
                    v0_5 = v0_4;
                } else {
                    v0_5 = 0xffffffff;
                }
                v0_6 = v0_5;
            } else {
                v0_6 = 0;
            }
            v0_7 = v0_6;
        } else {
            v0_7 = 0;
        }
        v0_8 = v0_7;
    } else {
        v0_8 = 0;
    }
    return v0_8;
}

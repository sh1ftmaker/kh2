// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00314640(u32, u32, f32) asm("func_00314640");

// 0x00313bc0 func_00313bc0
u32 func_00313bc0(f32 fa0) asm("func_00313bc0");
u32 func_00313bc0(f32 fa0) {
    u8 frame[32];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    *(f32*)(((u32)frame + 0x10)) = fa0;
    func_00314640((u32)frame + 0x10, (u32)frame, fa0);
    if (((s32)((*(u32*)((u32)frame) ^ 2)) != 0)) {
        if (((s32)(((u32)(*(u32*)((u32)frame)) < (u32)(2))) == 0)) {
            if (((s32)(*(u32*)(((u32)frame + 4))) == 0)) {
                if (((s32)((*(u32*)((u32)frame) ^ 4)) != 0)) {
                    if (((s32)(*(u32*)(((u32)frame + 8))) >= 0)) {
                        if (((s32)(((s32)(*(u32*)(((u32)frame + 8))) < (s32)(0x20))) != 0)) {
                            v0 = ((s32)(((s32)(*(u32*)(((u32)frame + 8))) < (s32)(0x1f))) == 0) ? (*(u32*)(((u32)frame + 0xc)) << (*(u32*)(((u32)frame + 8)) + -0x1e)) : (*(u32*)(((u32)frame + 0xc)) >> (0x1e - *(u32*)(((u32)frame + 8))));
                            v0_0 = v0;
                        } else {
                            v0_0 = 0xffffffff;
                        }
                        v0_1 = v0_0;
                    } else {
                        v0_1 = 0;
                    }
                    v0_2 = v0_1;
                } else {
                    v0_2 = 0xffffffff;
                }
                v0_3 = v0_2;
            } else {
                v0_3 = 0;
            }
            v0_4 = v0_3;
        } else {
            v0_4 = 0;
        }
        v0_5 = v0_4;
    } else {
        v0_5 = 0;
    }
    return v0_5;
}

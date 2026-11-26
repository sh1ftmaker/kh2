// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_00191a50(u32, u32) asm("func_00191a50");
extern "C" u32 func_0019a1a0(u32, u32) asm("func_0019a1a0");
extern "C" u32 func_0019b180(u32, u32) asm("func_0019b180");

// 0x0019a048 func_0019a048
void func_0019a048(u32 a0, u32 a1) asm("_ZN2YS10UNIT_GROUP4execERN2kn7FVectorE");
void func_0019a048(u32 a0, u32 a1) {
    u32 t7;
    u8 t7_0;
    u32 s2;
    u32 s0;
    t7 = *(u32*)((a0 + 4));
    t7_0 = (t7 & 1);
    *(u32*)((a0 + 4)) = ((*(u32*)((a0 + 4)) & 0xfffffff7) & 0xffffffef);
    if (((s32)(t7_0) == 0)) {
        if ((*(u8*)(*(u32*)((a0 + 8))) == 4)) {
            func_0019b180(a0, a1);
            return;
        } else {
            if (((s32)(func_00191a50(a0, a1)) == 0)) {
                if ((0.0f < *(f32*)((a0 + 0x14)))) {
                    *(f32*)((a0 + 0x14)) = (*(f32*)((a0 + 0x14)) - *(f32*)(&D_00349e10));
                }
                s2 = 0;
                while ((s0 = (s2 == 0) ? *(u32*)((a0 + 0xc)) : *(u32*)((s2 + 0x60))), (s2 = s0), ((s32)(s0) != 0)) {
                    if ((*(u8*)(*(u32*)((a0 + 8))) == 6)) {
                        if ((*(u16*)((*(u32*)((s0 + 0x6c)) + 0x2c)) != 1)) {
                            continue;
                        }
                        if (((s32)(((u32(*)(u32, u32))(*(u32*)((*(u32*)(s0) + 8))))(s0, a1)) == 0)) {
                            continue;
                        }
                        *(u32*)((a0 + 4)) = (*(u32*)((a0 + 4)) | 8);
                        if (((s32)(func_0019a1a0(a0, s0)) != 0)) {
                            return;
                        }
                    } else {
                        if (((s32)(((u32(*)(u32, u32))(*(u32*)((*(u32*)(s0) + 8))))(s0, a1)) == 0)) {
                            continue;
                        }
                        *(u32*)((a0 + 4)) = (*(u32*)((a0 + 4)) | 8);
                        if (((s32)(func_0019a1a0(a0, s0)) != 0)) {
                            return;
                        }
                    }
                }
            }
            return;
        }
    } else {
        return;
    }
}

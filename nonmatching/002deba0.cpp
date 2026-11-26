// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" f32 func_00106558(f32) asm("func_00106558");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" void func_002dd2d8(u32, u32, u32, f32, f32) asm("func_002dd2d8");

// 0x002deba0 func_002deba0
// minilink-rodata 0x00375e40   (float literals live here in the original)
void func_002deba0(u32 a0, u32 a1, f32 fa0, f32 fa1) asm("_ZN2Ti14ACTION_PO_JUMP10decide_wayEPN2YS3OBJEff");
void func_002deba0(u32 a0, u32 a1, f32 fa0, f32 fa1) {
    f32 loc_0;
    f32 loc_4;
    u32 s3;
    u32 t6;
    u32 s0;
    u32 t7;
    u32 s3_0;
    u32 s0_1;
    u32 t7_2;
    if (((s32)((*(u32*)((a1 + 0x588)) & 0x80)) == 0)) {
        func_002dd2d8(*(u32*)(&D_00361f60), (u32)&loc_0, (u32)&loc_4, fa0, fa1);
        loc_4 = (loc_4 * 0.800000011920929f);
        loc_0 = (loc_0 * 0.800000011920929f);
        if (((s32)(*(u32*)((a0 + 0x38))) != 0)) {
            *(u32*)((a0 + 0x38)) = 0xffffffff;
            s3 = func_0016c028(a1);
            if ((func_00106558(1.0f) < fa0)) {
                if (((s32)(*(u32*)((a0 + 0x34))) <= 0)) {
                    *(u32*)((a0 + 0x34)) = 1;
                } else {
                    *(u32*)((a0 + 0x34)) = 0xffffffff;
                }
            } else {
                if ((func_00106558(1.0f) < (fa0 + fa1))) {
                    *(u32*)((a0 + 0x38)) = 0;
                }
            }
            if (((s32)(*(u32*)((a0 + 0x38))) < 0)) {
                if (((s32)(*(u32*)((a0 + 0x34))) >= 0)) {
                    if ((loc_4 <= *(f32*)(s3))) {
                        *(u32*)((a0 + 0x34)) = 0xffffffff;
                        t6 = 0xffffffff;
                    } else {
                        t6 = *(u32*)((a0 + 0x34));
                    }
                    if (((s32)(t6) <= 0)) {
                        if ((*(f32*)(s3) <= loc_0)) {
                            *(u32*)((a0 + 0x34)) = 1;
                        }
                    }
                } else {
                    if ((*(f32*)(s3) <= loc_0)) {
                        *(u32*)((a0 + 0x34)) = 1;
                    }
                }
            } else {
                s0 = func_0016c028(*(u32*)(&D_0034e948));
                if (!((*(f32*)(func_0016c028(a1)) <= *(f32*)(s0)))) {
                    t7 = 0xffffffff;
                } else {
                    t7 = 1;
                }
                *(u32*)((a0 + 0x34)) = t7;
                if (((s32)(t7) >= 0)) {
                    if ((loc_4 <= *(f32*)(s3))) {
                        *(u32*)((a0 + 0x34)) = 0;
                    }
                }
                if (((s32)(*(u32*)((a0 + 0x34))) <= 0)) {
                    if ((*(f32*)(s3) <= loc_0)) {
                        *(u32*)((a0 + 0x34)) = 0;
                    }
                }
            }
        } else {
            s3_0 = func_0016c028(a1);
            s0_1 = func_0016c028(*(u32*)(&D_0034e948));
            if (!((*(f32*)(func_0016c028(a1)) <= *(f32*)(s0_1)))) {
                t7_2 = 0xffffffff;
            } else {
                t7_2 = 1;
            }
            *(u32*)((a0 + 0x34)) = t7_2;
            if (((s32)(t7_2) >= 0)) {
                if ((loc_4 <= *(f32*)(s3_0))) {
                    *(u32*)((a0 + 0x34)) = 0;
                }
            }
            if (((s32)(*(u32*)((a0 + 0x34))) <= 0)) {
                if ((*(f32*)(s3_0) <= loc_0)) {
                    *(u32*)((a0 + 0x34)) = 0;
                }
            }
        }
    }
    return;
}

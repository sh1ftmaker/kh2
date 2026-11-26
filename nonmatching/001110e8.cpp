// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00341780 asm("D_00341780");
extern "C" u32 D_003a9050 asm("D_003a9050");
extern "C" u32 func_00110c90(u32) asm("func_00110c90");
extern "C" u32 func_00111060(u32, u32) asm("func_00111060");
extern "C" u32 func_001917c0(u32) asm("func_001917c0");

// 0x001110e8 func_001110e8
void func_001110e8(u32 a0) asm("func_001110e8");
void func_001110e8(u32 a0) {
    u32 t7;
    u8 t7_0;
    u32 v0;
    u32 v0_1;
    u32 v0_2;
    t7 = *(u32*)((a0 + 0xb7c));
    t7_0 = (t7 & 1);
    if (((s32)(t7_0) != 0)) {
        if ((((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x60))))(a0) == 0)) {
            *(u32*)((a0 + 0xb7c)) = ((*(u32*)((a0 + 0xb7c)) & 0xfffffffe) & 0xffff7fff);
        }
        return;
    } else {
        if (((t7 & 2) == 0)) {
            if ((*(u32*)(&D_00341780) != 1)) {
                if (((s32)(((s32)(*(u32*)(&D_00341780)) < (s32)(2))) != 0)) {
                    if ((*(u32*)(&D_00341780) != 0)) {
                        v0 = func_00110c90(a0);
                        if (((s32)(v0) >= 0)) {
                            func_00111060(a0, (v0 << 4) + (u32)&D_003a9050);
                            return;
                        } else {
                            return;
                        }
                    } else {
                        return;
                    }
                } else {
                    v0_1 = func_00110c90(a0);
                    if (((s32)(v0_1) >= 0)) {
                        func_00111060(a0, (v0_1 << 4) + (u32)&D_003a9050);
                        return;
                    } else {
                        return;
                    }
                }
            } else {
                if ((func_001917c0(a0) == 0)) {
                    v0_2 = func_00110c90(a0);
                    if (((s32)(v0_2) >= 0)) {
                        func_00111060(a0, (v0_2 << 4) + (u32)&D_003a9050);
                        return;
                    } else {
                        return;
                    }
                } else {
                    return;
                }
            }
        } else {
            return;
        }
    }
}

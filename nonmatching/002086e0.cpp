// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" void func_00207350(u32, u32, u32, u32, u32, u32) asm("func_00207350");
extern "C" void func_00208298(u32, u32, u32, u32, u32) asm("func_00208298");

// 0x002086e0 func_002086e0
void func_002086e0(u32 a0, u32 a1, u32 a2) asm("func_002086e0");
void func_002086e0(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t7;
    u32 t7_0;
    u32 t4;
    u32 s0;
    u32 s2;
    u32 s3;
    u32 s5;
    u32 t7_1;
    u32 t7_2;
    u32 s5_3;
    t6 = *(u32*)(&D_01d9ea9c);
    if (((s32)(t6) == 0)) {
        t7 = *(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8));
        if (((t7 & ((u64)(0xff) | 0xff00)) == 0)) {
            t7_0 = *(u16*)((a0 + 0x20));
            *(u16*)((a0 + 0x20)) = (t7_0 + 1);
            t4 = *(u32*)((a0 + 0x1c));
            if (((s32)(t4) > 0)) {
                s0 = *(u32*)((a0 + 0x18));
                s2 = *(u32*)((a0 + 0x14));
                s3 = *(u32*)((a0 + 0x10));
                s5 = 0;
                do {
                    t7_1 = *(u16*)((s3 + 0x40));
                    if (((s32)(t7_1) != 0)) {
                        func_00208298(a0, a1, s3, a2, s0);
                    } else {
                        if (((s32)(((u32)(*(u16*)((a0 + 0x20))) < (u32)(*(u16*)((a1 + 0x20))))) == 0)) {
                            t7_2 = *(u16*)((a1 + 0x1e));
                            if (((s32)(((s32)(s5) < (s32)(t7_2))) != 0)) {
                                func_00207350(a0, a1, a2, s3, s2, s0);
                                s5 = (s5 + 1);
                            }
                        }
                    }
                    s0 = (s0 ? (s0 + 0x20) : s0);
                    t4 = (t4 + -1);
                    s2 = (s2 ? (s2 + 0x40) : s2);
                    s3 = (s3 + 0xb0);
                } while (((s32)(t4) != 0));
                s5_3 = s5;
            } else {
                s5_3 = 0;
            }
            if (((s32)(s5_3) > 0)) {
                *(u16*)((a0 + 0x20)) = 0;
            }
        }
    }
    return;
}

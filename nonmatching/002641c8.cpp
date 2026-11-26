// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002642a8(u32, u32, u32, u16) asm("func_002642a8");

// 0x002641c8 func_002641c8
void func_002641c8(u32 a0, u32 a1, u32 a2, u16 a3) asm("func_002641c8");
void func_002641c8(u32 a0, u32 a1, u32 a2, u16 a3) {
    u32 s3;
    u32 t3;
    u32 t5;
    u32 t7;
    u32 s0;
    u32 t7_0;
    u32 s0_1;
    u32 t7_2;
    if (((s32)(a2) > 0)) {
        s3 = 0;
        do {
            t3 = *(u16*)((a0 + 0xa));
            t5 = 0;
            if (((s32)((t3 & 0xffff)) != 0)) {
                t7 = *(u16*)((a0 + 0x10));
                do {
                    s0 = *(u16*)(a1);
                    t7_0 = *(u16*)(((a0 + (t5 * 2)) + 0x10));
                    if ((s0 == t7_0)) {
                        break;
                    }
                    t5 = (t5 + 1);
                    t7 = ((s32)(t5) < (s32)((t3 & 0xffff)));
                } while ((t7 != 0));
                s0_1 = s0;
            } else {
                s0_1 = *(u16*)(a1);
            }
            if (((s32)(t5) >= (s32)((t3 & 0xffff)))) {
                if (((s32)((a3 & func_002642a8(s0_1, a1, a2, a3))) != 0)) {
                    t7_2 = *(u16*)((a0 + 0xa));
                    *(u16*)((a0 + 0xa)) = (t7_2 + 1);
                    *(u16*)(((((t7_2 & 0xffff) << 1) + a0) + 0x10)) = s0_1;
                }
            }
            a1 = (a1 + 2);
            s3 = (s3 + 1);
        } while (((s32)(((s32)(s3) < (s32)(a2))) != 0));
    }
    return;
}

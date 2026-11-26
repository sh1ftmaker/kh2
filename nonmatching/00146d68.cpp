// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x00146d68 func_00146d68
void func_00146d68(u32 a0) asm("func_00146d68");
void func_00146d68(u32 a0) {
    u32 t6;
    u32 t4;
    u32 t5;
    u32 t6_0;
    u32 t5_1;
    *(u32*)((a0 + 0x5360)) = 0;
    t6 = *(u32*)((a0 + 0x10));
    if (((s32)(t6) > 0)) {
        t4 = (*(u32*)((a0 + 4)) + 0x2c);
        do {
            t5 = *(u32*)(t4);
            if ((t5 != 0)) {
                t6_0 = (t5 + 0x80);
                do {
                    if ((t6_0 != (t5 + 0x40))) {
                        *(Q16*)(t6_0) = *(Q16*)((t5 + 0x40));
                        *(Q16*)((t6_0 + 0x10)) = *(Q16*)(((t5 + 0x40) + 0x10));
                        *(Q16*)((t6_0 + 0x20)) = *(Q16*)(((t5 + 0x40) + 0x20));
                        *(Q16*)((t6_0 + 0x30)) = *(Q16*)(((t5 + 0x40) + 0x30));
                    }
                    t5_1 = *(u32*)((t5 + 0x110));
                    t5 = t5_1;
                    t6_0 = (t5_1 + 0x80);
                } while (((s32)(t5) != 0));
            }
            *(u32*)(t4) = 0;
            t6 = (t6 + -1);
            t4 = (t4 + 0x30);
        } while (((s32)(t6) != 0));
    }
    return;
}

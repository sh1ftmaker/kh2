// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003742c8 asm("D_003742c8");
extern "C" u32 func_00181500(u32) asm("func_00181500");

// 0x00283ab8 func_00283ab8
u32 func_00283ab8(u32 a0) asm("func_00283ab8");
u32 func_00283ab8(u32 a0) {
    u32 s0;
    u32 t4;
    u32 t5;
    u32 v0;
    u32 s0_0;
    u32 t7;
    u32 v0_1;
    if (((s32)(*(u16*)(((u32)&D_003742c8 + 4))) != 0)) {
        s0 = 0;
        t4 = (u32)&D_003742c8;
        t5 = 0;
        do {
            if ((a0 == 0xffffffff) || (*(u8*)(((t5 + t4) + 6)) == a0)) {
                if (((s32)(func_00181500(*(u16*)(((t5 + (u32)&D_003742c8) + 4)))) != 0)) {
                    v0 = func_00181500(*(u16*)(((t5 + (u32)&D_003742c8) + 4)));
                    return 1;
                }
            }
            s0_0 = (s0 + 1);
            t7 = (s0_0 << 3);
            s0 = s0_0;
            t4 = (u32)&D_003742c8;
            t5 = t7;
            v0 = 0;
        } while (((s32)(*(u16*)(((t7 + (u32)&D_003742c8) + 4))) != 0));
        v0_1 = v0;
    } else {
        v0_1 = 0;
    }
    return v0_1;
}

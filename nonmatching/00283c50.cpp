// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003742c8 asm("D_003742c8");
extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_00258048() asm("func_00258048");

// 0x00283c50 func_00283c50
u32 func_00283c50() asm("func_00283c50");
u32 func_00283c50() {
    u32 v0;
    u32 s0;
    u32 t2;
    u32 t4;
    u32 v0_0;
    u32 s1;
    v0 = func_00258048();
    if (((s32)(*(u16*)(((u32)&D_003742c8 + 4))) != 0)) {
        s0 = 0;
        t2 = (u32)&D_003742c8;
        t4 = 0;
        do {
            v0_0 = func_00181500(*(u16*)(((t4 + t2) + 4)));
            if (((s32)(v0_0) != 0)) {
                if (((*(u32*)((((s0 >> 5) << 2) + (v0 + 0xc8))) & (1 << (s0 & 0x1f))) == 0)) {
                    *(u32*)((((s0 >> 5) << 2) + (v0 + 0xc8))) = (*(u32*)((((s0 >> 5) << 2) + (v0 + 0xc8))) | (1 << (s0 & 0x1f)));
                }
            }
            s0 = (s0 + 1);
            t2 = (u32)&D_003742c8;
            t4 = (s0 << 3);
            s1 = (v0 + 0xc8);
            v0 = v0_0;
        } while (((s32)(*(u16*)((((s0 << 3) + (u32)&D_003742c8) + 4))) != 0));
    }
    return v0;
}

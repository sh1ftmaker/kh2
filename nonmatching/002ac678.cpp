// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_002a9d68(u32) asm("func_002a9d68");
extern "C" u32 func_002b3ac8(u32) asm("func_002b3ac8");

// 0x002ac678 func_002ac678
u32 func_002ac678(u32 a0) asm("_ZN2Tz9JmNewInfo17SetPuzzlePieceFlgEi");
u32 func_002ac678(u32 a0) {
    u32 s2;
    u32 a0_0;
    u32 s1;
    u32 v0;
    u32 t2;
    u32 t6;
    u32 t6_1;
    u32 t5;
    u32 t6_2;
    u32 t7;
    u32 t6_3;
    s2 = func_002a9d68(a0);
    a0_0 = *(u8*)((((func_00294000(9) + 0x10) + (a0 << 4)) + 1));
    s1 = ((func_00294000(9) + 0x10) + (a0 << 4));
    v0 = func_002b3ac8((s32)(((a0_0 & 0xf) << 0x18)) >> 0x18);
    if (((s32)(v0) > 0)) {
        t2 = 0;
        t6 = *(s8*)(s1);
        do {
            t6_1 = *(s8*)(s1);
            t5 = *(u32*)(&D_0035f610);
            t6_2 = *(u32*)((((t5 + (t6_1 << 3)) + ((t2 >> 5) << 2)) + 0x144));
            if (((s32)((t6_2 & (1 << (t2 & 0x1f)))) != 0)) {
                t7 = *(u32*)((((t2 >> 5) << 2) + ((s2 + (t6_1 << 3)) + 0x144)));
                if (((t7 & (1 << (t2 & 0x1f))) == 0)) {
                    *(u32*)((((t2 >> 5) << 2) + ((s2 + (t6_1 << 3)) + 0x144))) = (t7 | (1 << (t2 & 0x1f)));
                }
            }
            t6_3 = (t7 | (1 << (t2 & 0x1f)));
            t2 = (t2 + 1);
            t6 = t6_3;
        } while (((s32)(t2) < (s32)(v0)));
    }
    return v0;
}

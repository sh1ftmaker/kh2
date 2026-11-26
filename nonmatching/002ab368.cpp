// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_002a9d68(u32) asm("func_002a9d68");
extern "C" u32 func_002ab180(u32) asm("func_002ab180");

// 0x002ab368 func_002ab368
u32 func_002ab368(u32 a0) asm("func_002ab368");
u32 func_002ab368(u32 a0) {
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 s2;
    u32 t4;
    u32 t7;
    u32 t7_1;
    u32 t6;
    u32 t7_2;
    s1 = func_002a9d68(a0);
    v0 = func_00294000(7);
    if (((s32)(a0) < 0)) {
        v0 = func_002ab180(0xffffffff);
    } else {
        v0_0 = *(u32*)((v0 + 8));
        if (((s32)(v0_0) > 0)) {
            s2 = 1;
            t4 = 0;
            t7 = *(u16*)((v0 + 0x10));
            do {
                t7_1 = *(u16*)(((v0 + (t4 * 8)) + 0x10));
                if ((t7_1 == a0)) {
                    t6 = *(u32*)((((t4 >> 5) << 2) + (*(u32*)(&D_0035f610) + 0x88)));
                    if (((t6 & (1 << (t4 & 0x1f))) != 0)) {
                        t7_2 = *(u32*)((((t4 >> 5) << 2) + (s1 + 0x88)));
                        if (((u32)(0) >= (u32)((t7_2 & (1 << (t4 & 0x1f)))))) {
                            return ((u32)(0) < (u32)((t7_2 & (1 << (t4 & 0x1f)))));
                        }
                        s2 = ((u32)(0) < (u32)((t7_2 & (1 << (t4 & 0x1f)))));
                    }
                }
                t4 = (t4 + 1);
                t7 = ((s32)(t4) < (s32)(v0_0));
            } while ((t7 != 0));
            v0_0 = s2;
        } else {
            v0_0 = 1;
        }
        v0 = v0_0;
    }
    return v0;
}

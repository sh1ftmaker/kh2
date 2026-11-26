// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_00294000(u32, u32) asm("func_00294000");
extern "C" u32 func_002abf40(u32, u32) asm("func_002abf40");

// 0x002abff0 Tz::JmNewInfo::isStoryNew(int, int)
u32 lift_002abff0(u32 a0, u32 a1) asm("_ZN2Tz9JmNewInfo10isStoryNewEii");
u32 lift_002abff0(u32 a0, u32 a1) {
    u32 v0;
    u32 t7;
    u32 s0;
    u32 s2;
    u32 v0_0;
    u32 t7_1;
    u32 s4;
    u32 t7_2;
    u32 t6;
    u32 s4_3;
    u32 t7_4;
    u32 v0_5;
    u32 t4;
    u32 t4_6;
    u32 t7_7;
    v0 = func_00294000(1, a1);
    if (((s32)(a1) < 0)) {
        t7 = *(u32*)((v0 + 8));
        if (((s32)(t7) > 0)) {
            s0 = 0;
            s2 = 0;
            do {
                v0_0 = func_002abf40(a0, 0);
                s0 = (s0 + 1);
                if (((s32)(v0_0) >= 0)) {
                    t7_1 = *(u32*)(&D_0035f610);
                    s4 = (a0 << 2);
                    t7_2 = (t7_1 + s4);
                    t6 = *(u32*)(((t7_2 + ((v0_0 >> 5) << 2)) + 0xac));
                    s2 = ((u32)(0) < (u32)((t6 & (1 << (v0_0 & 0x1f)))));
                    if (((s32)(s2) != 0)) {
                        return s2;
                    }
                    s4_3 = s4;
                } else {
                    s4_3 = (a0 << 2);
                }
                t7_4 = *(u32*)((v0 + 8));
            } while (((s32)(((s32)(s0) < (s32)(t7_4))) != 0));
            v0 = s2;
        } else {
            v0 = 0;
        }
    } else {
        v0_5 = func_002abf40(a0, a1);
        t4 = *(u32*)(&D_0035f610);
        t4_6 = (t4 + (a0 << 2));
        t7_7 = *(u32*)(((t4_6 + ((v0_5 >> 5) << 2)) + 0xac));
        v0 = ((u32)(0) < (u32)((t7_7 & (1 << (v0_5 & 0x1f)))));
    }
    return v0;
}

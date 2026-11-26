// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 func_00188fe0(u32, u32) asm("func_00188fe0");
extern "C" u32 func_00189200(u32, u32) asm("func_00189200");

// 0x0016f610 func_0016f610
u32 func_0016f610(u32 a0, u32 a1) asm("func_0016f610");
u32 func_0016f610(u32 a0, u32 a1) {
    u32 v0;
    u32 t6;
    u32 v0_0;
    u32 t6_1;
    u32 t6_2;
    u32 v0_3;
    u32 t6_4;
    u32 t6_5;
    u32 v0_6;
    u32 t6_7;
    u32 v0_8;
    u32 t6_9;
    u32 t6_10;
    u32 t6_11;
    u32 t6_12;
    if (((s32)(*(u16*)((a0 + 0x4e))) != 0)) {
        if (((*(u16*)((a0 + 0x4c)) & 0xffff) != 1)) {
            if (((*(u16*)((a0 + 0x4c)) & 0xffff) == 0xe)) {
                if ((a1 == 1)) {
                    v0 = func_00189200((u32)&D_0032e020, *(s8*)((a0 + 0x57)));
                    t6 = ((s32)(v0) != 0) ? *(u16*)(v0) : 0;
                    t6_2 = t6;
                } else {
                    v0_0 = func_00188fe0((u32)&D_0032e020, *(u16*)((a0 + 0x4c)) & 0xffff);
                    t6_1 = ((s32)(v0_0) != 0) ? *(u16*)(((a1 << 1) + v0_0)) : 0;
                    t6_2 = t6_1;
                }
                t6_5 = t6_2;
            } else {
                v0_3 = func_00188fe0((u32)&D_0032e020, *(u16*)((a0 + 0x4c)) & 0xffff);
                t6_4 = ((s32)(v0_3) != 0) ? *(u16*)(((a1 << 1) + v0_3)) : 0;
                t6_5 = t6_4;
            }
            t6_11 = t6_5;
        } else {
            if ((a1 == 1)) {
                v0_6 = func_00189200((u32)&D_0032e020, *(s8*)((a0 + 0x57)));
                t6_7 = ((s32)(v0_6) != 0) ? *(u16*)(v0_6) : 0;
                t6_10 = t6_7;
            } else {
                v0_8 = func_00188fe0((u32)&D_0032e020, *(u16*)((a0 + 0x4c)) & 0xffff);
                t6_9 = ((s32)(v0_8) != 0) ? *(u16*)(((a1 << 1) + v0_8)) : 0;
                t6_10 = t6_9;
            }
            t6_11 = t6_10;
        }
        t6_12 = t6_11;
    } else {
        t6_12 = 0;
    }
    return t6_12;
}

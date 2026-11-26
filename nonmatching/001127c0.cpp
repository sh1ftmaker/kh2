// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00341788 asm("D_00341788");
extern "C" u32 D_003417a8 asm("D_003417a8");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");

// 0x001127c0 func_001127c0
u32 func_001127c0() asm("func_001127c0");
u32 func_001127c0() {
    u8 frame[32];
    u32 t7;
    u32 s3;
    u32 s2;
    u32 s1;
    u32 s0;
    u32 v0_0;
    u32 v0;
    u32 t4;
    u32 t2;
    u32 sp;
    u32 t5;
    u32 t6;
    t7 = *(u32*)(&D_003417a8);
    s3 = 0;
    if (((s32)(t7) > 0)) {
        s2 = 0;
        s1 = (u32)frame;
        s0 = (u32)&D_00341788;
        do {
            v0_0 = func_0019ba60(*(u32*)((s0 + (s2 * 4))));
            if (((s32)(v0_0) != 0)) {
                *(u32*)(s1) = *(u32*)((s0 + (s2 * 4)));
                s1 = (s1 + 4);
                s3 = (s3 + 1);
            }
            s2 = (s2 + 1);
        } while (((s32)(((s32)(s2) < (s32)(*(u32*)(&D_003417a8)))) != 0));
        v0 = v0_0;
    }
    *(u32*)(&D_003417a8) = s3;
    if (((s32)(s3) > 0)) {
        t4 = 0;
        t2 = (u32)&D_00341788;
        do {
            *(u32*)(((t4 << 2) + t2)) = *(u32*)(((t4 << 2) + (u32)frame));
            t4 = (t4 + 1);
        } while (((s32)(((s32)(t4) < (s32)(s3))) != 0));
    } else {
        sp = (u32)frame;
    }
    t5 = *(u32*)(&D_003417a8);
    if (((s32)(((s32)(t5) < (s32)(8))) != 0)) {
        t6 = ((t5 << 2) + (u32)&D_00341788);
        do {
            *(u32*)(t6) = 0;
            t5 = (t5 + 1);
            t6 = (t6 + 4);
        } while (((s32)(((s32)(t5) < (s32)(8))) != 0));
    }
    return v0;
}

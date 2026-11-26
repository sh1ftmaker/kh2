// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003638d0 asm("D_003638d0");
extern "C" u32 func_001b0148(u32, u32, u32, u32) asm("func_001b0148");
extern "C" u32 func_00312db8(u32, u32) asm("func_00312db8");

// 0x001affe0 func_001affe0
u32 func_001affe0(u32 a0, u32 a1, u32 a2) asm("func_001affe0");
u32 func_001affe0(u32 a0, u32 a1, u32 a2) {
    u8 frame[32];
    u32 t6;
    u32 s7;
    u32 s6;
    u32 s2;
    u32 s1;
    u32 s0;
    u32 v0;
    u32 t7;
    u32 s0_0;
    u32 v0_1;
    t6 = *(u32*)(&D_003638d0);
    *(u32*)(&D_003638d0) = (t6 * 0x10dcd);
    s7 = (u32)frame;
    s6 = 0;
    s2 = 0;
    s1 = (s32)((u64)(func_00312db8((u32)((t6 * 0x10dcd)), 0x28f5c29)));
    s0 = a0;
    do {
        v0 = func_001b0148(a0, a1, *(s8*)((s0 + 4)), a2);
        if (((s32)(v0) >= 0)) {
            t7 = *(s8*)((s0 + 5));
            if (((s32)(t7) > 0)) {
                s1 = (s1 - t7);
                if (((s32)(s1) < 0)) {
                    return v0;
                }
            } else {
                *(u32*)(s7) = v0;
                s6 = (s6 + 1);
                s7 = (s7 + 4);
            }
        }
        s2 = (s2 + 1);
        s0 = (s0 + 2);
    } while (((s32)(((s32)(s2) < (s32)(5))) != 0));
    if (((s32)(s6) > 0)) {
        s0_0 = *(u32*)(&D_003638d0);
        *(u32*)(&D_003638d0) = (s0_0 * 0x10dcd);
        v0_1 = *(u32*)((((s32)((u64)(func_00312db8((u32)((s0_0 * 0x10dcd)), func_00312db8((u32)((s6 + -1)) + (u64)(1), (u32)(s6))))) << 2) + (u32)frame));
    } else {
        v0_1 = 0xffffffff;
    }
    return v0_1;
}

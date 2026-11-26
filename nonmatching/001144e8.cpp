// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001144e8 func_001144e8
u32 func_001144e8(u32 a0, u32 a1) asm("_ZN2kn17FriendPersonality11proc2ActionEMS0_FbPNS_12FriendActionEPN2YS6TARGETEPPvbE");
u32 func_001144e8(u32 a0, u32 a1) {
    u8 frame[16];
    u32 t7;
    u32 a0_0;
    u32 t5;
    u32 t6;
    u32 t4;
    u32 t7_1;
    u32 t3;
    u32 t3_2;
    *(u64*)((u32)frame) = a1;
    t7 = *(u32*)((a0 + 0x10));
    if (((s32)(t7) != 0)) {
        a0_0 = *(u32*)((a0 + 0xc));
        if (((s32)(a0_0) > 0)) {
            t5 = 0;
            do {
                t6 = *(u32*)((t7 + 4));
                t4 = *(u32*)((u32)frame);
                if ((t6 == t4)) {
                    t7_1 = *(u32*)((t7 + 8));
                    t3 = *(u32*)(((u32)frame + 4));
                    if ((t7_1 == t3)) {
                        return t7;
                    }
                    if (((s32)(t6) == 0)) {
                        return t7;
                    }
                    t3_2 = t3;
                } else {
                    t3_2 = *(u32*)(((u32)frame + 4));
                }
                t5 = (t5 + 1);
                t7 = (t7 + 0x24);
            } while (((s32)(((s32)(t5) < (s32)(a0_0))) != 0));
        }
    }
    return 0;
}

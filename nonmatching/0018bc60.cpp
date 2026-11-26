// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016bc20(u32, u32, u32) asm("func_0016bc20");
extern "C" u32 func_0016bff0(u32) asm("func_0016bff0");
extern "C" u32 func_0018a550(u32, u32) asm("func_0018a550");
extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");
extern "C" void func_0018a818(u32, u32, u32) asm("func_0018a818");

// 0x0018bc60 func_0018bc60
u32 func_0018bc60(u32 a0, u32 a1) asm("func_0018bc60");
u32 func_0018bc60(u32 a0, u32 a1) {
    u32 v0;
    u32 loc_c;
    u32 loc_0;
    u32 loc_2c;
    u32 s1;
    u32 v0_1;
    u32 s0;
    u32 v0_2;
    u32 v0_3;
    u32 a0_4;
    v0 = func_0016bc20(a0, a1, 0xffffffff);
    if (((s32)(v0) != 0)) {
        loc_c = 0;
        func_0018a818((u32)&loc_0, a0, v0);
        loc_2c = 0;
        s1 = 0;
        do {
            v0_1 = func_001b9bc8(s1);
            s1 = v0_1;
            if (((s32)(v0_1) == 0)) {
                return 0;
            }
            s0 = func_0016bff0(v0_1);
            if ((s0 == func_0016bff0(a0))) {
                continue;
            }
            v0_2 = func_0016bc20(s1, a1, 0xffffffff);
            if (((s32)(v0_2) == 0)) {
                continue;
            }
            func_0018a818((u32)&loc_c + 0x14, s1, v0_2);
            v0_3 = func_0018a550((u32)&loc_0, (u32)&loc_c + 0x14);
            v0_1 = s1;
        } while (((s32)(v0_3) == 0));
        a0_4 = v0_1;
    } else {
        a0_4 = 0;
    }
    return a0_4;
}

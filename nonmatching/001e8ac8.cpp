// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036ef58 asm("D_0036ef58");
extern "C" u32 D_0036ef88 asm("D_0036ef88");
extern "C" u32 D_0036ef98 asm("D_0036ef98");
extern "C" u32 D_0036efb8 asm("D_0036efb8");
extern "C" u32 func_001e7a98(u32, u32) asm("func_001e7a98");
extern "C" u32 func_002fdfc8(u32, u32, u32) asm("func_002fdfc8");

// 0x001e8ac8 func_001e8ac8
u32 func_001e8ac8(u32 a0, u32 a1, u32 a2) asm("_Z14pppRunPartExecP9_pppMngSt");
u32 func_001e8ac8(u32 a0, u32 a1, u32 a2) {
    u32 s2;
    u32 t6;
    u32 v0;
    u32 t7;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    u32 s2_2;
    u32 v0_3;
    if (((s32)(*(u32*)((a0 + 0x68))) > 0)) {
        s2 = 0;
        t6 = *(u32*)((a0 + 0x80));
        do {
            t7 = (s2 << 4);
            s0 = (*(u32*)((a0 + 0x80)) + t7);
            if ((s0 == 0)) {
                func_002fdfc8((u32)&D_0036ef58, (u32)&D_0036efb8, a2);
                v0_0 = func_002fdfc8((u32)&D_0036ef98, (u32)&D_0036ef88, 0x3c4);
                v0 = v0_0;
            }
            if (((s32)(*(u32*)((a0 + 0x58))) >= (s32)(*(u32*)((s0 + 8))))) {
                *(u32*)((s0 + 8)) = 0x7fffffff;
                v0_1 = func_001e7a98(a0, s0);
                *(u32*)((s0 + 4)) = v0_1;
                *(u8*)((v0_1 + 0x9c)) = 0;
                v0 = v0_1;
            }
            s2_2 = (s2 + 1);
            s2 = s2_2;
        } while (((s32)(s2_2) < (s32)(*(u32*)((a0 + 0x68)))));
        v0_3 = v0;
    }
    return v0_3;
}

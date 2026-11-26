// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e978 asm("D_0036e978");
extern "C" u32 D_0036e998 asm("D_0036e998");
extern "C" u32 D_0036e9d0 asm("D_0036e9d0");
extern "C" u32 D_0036ec40 asm("D_0036ec40");
extern "C" u32 func_001e3650(u32) asm("func_001e3650");
extern "C" u32 func_001e3660(u32, u32) asm("func_001e3660");
extern "C" void func_001e52b8(u32, u32) asm("func_001e52b8");
extern "C" void func_002fdfc8(u32, u32, u32) asm("func_002fdfc8");

// 0x001e5898 func_001e5898
void func_001e5898(u32 a0) asm("func_001e5898");
void func_001e5898(u32 a0) {
    u32 v0;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 a2_0;
    u32 s1_1;
    if (((s32)(a0) != 0)) {
        v0 = func_001e3660(func_001e3650(a0), 1);
        if (((s32)(*(u32*)(v0)) > 0)) {
            s0 = *(u32*)(v0);
            s1 = *(u32*)((v0 + 4));
            s2 = (v0 + 4);
            do {
                s1_1 = *(u32*)(s2);
                if (((s32)((*(u32*)(s2) & 0xf)) != 0)) {
                    func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ec40, a2_0);
                    func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x685);
                }
                func_001e52b8(s1_1, 0x3d00);
                s0 = (s0 + -1);
                s1 = s1_1;
                s2 = (s2 + 4);
            } while ((s0 != 0));
        }
    }
    return;
}

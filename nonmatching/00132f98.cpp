// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00132338(u32, u32, u32, u32) asm("func_00132338");
extern "C" u32 func_00132350(u32) asm("func_00132350");
extern "C" u32 func_00132c68(u32) asm("func_00132c68");

// 0x00132f98 func_00132f98
void func_00132f98(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2kn10TEXAnmWork19getActiveTEXAnmWorkEPNS_13AnimationWorkEjPPS0_jPv");
void func_00132f98(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 s3;
    u32 s4;
    u32 v0;
    u32 v0_0;
    u32 s4_1;
    if (((s32)(a0) != 0)) {
        s3 = a2;
        s4 = 0;
        do {
            if ((func_00132338(a0, a1, a2, a3) == 1)) {
                v0 = func_00132c68(a0);
                if (((s32)(a4) == 0) || (*(u32*)((a0 + 4)) == a4)) {
                    if (((s32)(v0) != 0)) {
                        if ((*(u16*)((v0 + 2)) == a1)) {
                            if (((s32)(*(u32*)((a0 + 0x27c))) != 0)) {
                                if ((a2 != 0)) {
                                    *(u32*)(s3) = a0;
                                }
                                s3 = (s3 + 4);
                                s4 = (s4 + 1);
                            }
                        }
                    }
                }
            }
            v0_0 = func_00132350(a0);
            a0 = v0_0;
        } while (((s32)(v0_0) != 0));
        s4_1 = s4;
    } else {
        s4_1 = 0;
    }
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_004f3760 asm("D_004f3760");
extern "C" u32 D_004f3770 asm("D_004f3770");
extern "C" u32 D_004f3780 asm("D_004f3780");
extern "C" u32 D_004f3790 asm("D_004f3790");
extern "C" u32 D_004f37a0 asm("D_004f37a0");
extern "C" u32 D_004f37b0 asm("D_004f37b0");
extern "C" u32 D_004f37c0 asm("D_004f37c0");
extern "C" u32 D_004f37d0 asm("D_004f37d0");
extern "C" u32 D_004f37e0 asm("D_004f37e0");
extern "C" u32 func_00140df0() asm("func_00140df0");

// 0x0015cef0 func_0015cef0
u32 func_0015cef0() asm("func_0015cef0");
u32 func_0015cef0() {
    u32 v0;
    v0 = func_00140df0();
    if ((v0 != (u32)&D_004f3760)) {
        *(Q16*)((u32)&D_004f3760) = *(Q16*)(v0);
    }
    if (((u32)&D_004f3760 != (u32)&D_004f37a0)) {
        *(Q16*)((u32)&D_004f37a0) = *(Q16*)((u32)&D_004f3760);
    }
    if (((u32)&D_004f37a0 != (u32)&D_004f37b0)) {
        *(Q16*)((u32)&D_004f37b0) = *(Q16*)((u32)&D_004f37a0);
    }
    if (((v0 + 0x10) != (u32)&D_004f3770)) {
        *(Q16*)((u32)&D_004f3770) = *(Q16*)((v0 + 0x10));
    }
    if (((u32)&D_004f3770 != (u32)&D_004f3780)) {
        *(Q16*)((u32)&D_004f3780) = *(Q16*)((u32)&D_004f3770);
    }
    if (((u32)&D_004f3780 != (u32)&D_004f3790)) {
        *(Q16*)((u32)&D_004f3790) = *(Q16*)((u32)&D_004f3780);
    }
    if (((v0 + 0x20) != (u32)&D_004f37c0)) {
        *(Q16*)((u32)&D_004f37c0) = *(Q16*)((v0 + 0x20));
    }
    if (((u32)&D_004f37c0 != (u32)&D_004f37d0)) {
        *(Q16*)((u32)&D_004f37d0) = *(Q16*)((u32)&D_004f37c0);
    }
    if (((u32)&D_004f37d0 != (u32)&D_004f37e0)) {
        *(Q16*)((u32)&D_004f37e0) = *(Q16*)((u32)&D_004f37d0);
    }
    return (v0 + 0x20);
}

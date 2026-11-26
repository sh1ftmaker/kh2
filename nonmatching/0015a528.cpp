// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0013fca8(u32) asm("func_0013fca8");
extern "C" void func_0013f888(u32, u32, u32) asm("func_0013f888");
extern "C" void func_00159ce0(u32, u32) asm("func_00159ce0");

// 0x0015a528 func_0015a528
u32 func_0015a528(u32 a0) asm("_ZN2dk12TargetCamera17checkEyeCollisionEPNS_9ObjCameraE");
u32 func_0015a528(u32 a0) {
    u8 frame[32];
    u32 v0;
    *(Q16*)((u32)frame) = *(Q16*)((a0 + 0x80));
    func_00159ce0(a0, (u32)frame + 0x10);
    func_0013f888(a0, (u32)frame + 0x10, 0);
    if (((a0 + 0x80) != ((u32)frame + 0x10))) {
        *(Q16*)((a0 + 0x80)) = *(Q16*)(((u32)frame + 0x10));
    }
    v0 = func_0013fca8(a0);
    if (((a0 + 0x80) != (u32)frame)) {
        *(Q16*)((a0 + 0x80)) = *(Q16*)((u32)frame);
    }
    return v0;
}

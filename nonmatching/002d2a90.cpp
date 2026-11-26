// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016abf8(u32, u32, u32, u32) asm("func_0016abf8");
extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" void func_0016bda8(u32, u32) asm("func_0016bda8");

// 0x002d2a90 Ti::MGOarashiGimObj::start_tornado_attack()
void lift_002d2a90(u32 a0) asm("_ZN2Ti15MGOarashiGimObj20start_tornado_attackEv");
void lift_002d2a90(u32 a0) {
    u8 frame[16];
    u32 v0;
    u32 s1;
    if (((s32)(*(u32*)((a0 + 0xb6c))) >= 0)) {
        if ((*(u32*)((a0 + 0xb6c)) == 0)) {
            ((void(*)(u32, u32, u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0x50))))(a0, 0x60c, 0, a0, 0);
            *(u32*)((a0 + 0xb3c)) = 0;
        } else {
            ((void(*)(u32, u32, u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0x50))))(a0, 0x60d, 0, a0, 0);
            v0 = func_0016abf8(a0, 1, 1, 0);
            if (((s32)(v0) != 0)) {
                s1 = func_001dc5f8(v0);
                func_0016bda8((u32)frame, a0);
                if ((s1 != (u32)frame)) {
                    *(u32*)((a0 + 0xb3c)) = 0;
                    *(Q16*)(s1) = *(Q16*)((u32)frame);
                } else {
                    *(u32*)((a0 + 0xb3c)) = 0;
                }
            } else {
                *(u32*)((a0 + 0xb3c)) = 0;
            }
        }
    }
    return;
}

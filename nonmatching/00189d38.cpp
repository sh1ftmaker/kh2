// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016cce8(u32, u32, u32, u32, u32) asm("func_0016cce8");
extern "C" u32 func_00180dc0(u32, u32) asm("func_00180dc0");
extern "C" u32 func_001b5918(u32, u32, u32, u32) asm("func_001b5918");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");

// 0x00189d38 func_00189d38
u32 func_00189d38(u32 a0, u32 a1) asm("_ZN2YS6ANMATR13TriggerEffectEPNS_6MOTIONEPKNS0_7TRIGGERE");
u32 func_00189d38(u32 a0, u32 a1) {
    u8 frame[16];
    u32 s2;
    u32 v0;
    u32 s3;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    s2 = *(u32*)((a0 + 8));
    v0 = func_00180dc0(a0, *(u16*)((a1 + 4)));
    if ((v0 == 0)) {
        s3 = ((s32)(*(u32*)(*(u32*)((a0 + 0xf0)))) != 0) ? func_001de168(*(u32*)((a0 + 0xf0)), *(u16*)((a1 + 4)), 1, 1, 0, s2) : 0;
        s0 = (*(u32*)((a0 + 0xfc)) ? *(u32*)((a0 + 0xfc)) : s2);
        v0_0 = func_001b5918(*(u32*)((a0 + 0xf0)), s2, *(u16*)((a1 + 4)), s3);
        if ((v0_0 == 0)) {
            if (((s32)(*(u32*)((s0 + 0x484))) != 0)) {
                *(u32*)((u32)frame) = s2;
                *(u32*)(((u32)frame + 4)) = *(u16*)((a1 + 4));
                *(u32*)(((u32)frame + 8)) = s3;
                v0_1 = func_0016cce8(*(u32*)((s0 + 0x484)), 0x10, (u32)frame, 3, 0);
                v0_0 = v0_1;
            }
        }
        v0 = v0_0;
    }
    return v0;
}

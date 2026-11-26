// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00144d10(u32, u32) asm("func_00144d10");
extern "C" u32 func_002cf270(u32, u32) asm("func_002cf270");
extern "C" void func_002cf280(u32, u32, u32) asm("func_002cf280");

// 0x002dd3a0 func_002dd3a0
u32 func_002dd3a0(u32 a0, u32 a1) asm("_ZN2Ti6MGJump12obj_leave_okEPNS_5MGObjE");
u32 func_002dd3a0(u32 a0, u32 a1) {
    u8 frame[32];
    u32 t6;
    u32 s1;
    u32 s0;
    u32 t7;
    t6 = (a1 + 0x740);
    *(u32*)((u32)frame) = *(u32*)((a1 + 0x740));
    *(u32*)(((u32)frame + 4)) = *(u32*)((t6 + 4));
    *(u32*)(((u32)frame + 8)) = *(u32*)((t6 + 8));
    *(u32*)(((u32)frame + 0xc)) = *(u32*)((t6 + 0xc));
    *(u32*)(((u32)frame + 0x10)) = *(u32*)((t6 + 0x10));
    *(u32*)(((u32)frame + 0x14)) = *(u32*)((t6 + 0x14));
    s1 = (a1 + 0xaf0);
    s0 = func_00144d10(a0 + 0x8078, (u32)frame);
    if (((s32)(func_002cf270(s1, 2)) == 0)) {
        if (((s32)(s0) != 0)) {
            func_002cf280(s1, 2, 0);
        }
        t7 = 0;
    } else {
        t7 = ((s0 ^ 1) & 0xff);
    }
    return t7;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_0028ac98(u32, u32) asm("func_0028ac98");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x0028ab20 Tz::Select::Leave(...)
u32 lift_0028ab20(u32 a0) asm("_ZN2Tz6Select5LeaveEz");
u32 lift_0028ab20(u32 a0) {
    u32 v0;
    u32 s2;
    u32 t5;
    u32 t7;
    u32 v0_0;
    u32 v0_1;
    v0 = func_0028acc8(a0);
    if (((s32)(((s32)((*(u16*)((a0 + 4)) << 0x10)) >> 0x10)) > 0)) {
        s2 = 0;
        t5 = *(u16*)((a0 + 4));
        t7 = *(u32*)((a0 + 0x28));
        do {
            if (((s32)(*(u32*)(((s2 << 2) + *(u32*)((a0 + 0x28))))) != 0)) {
                v0_0 = func_0028ac98(a0, s2);
                if ((v0_0 != 0)) {
                    v0_1 = func_00138c10(*(u32*)(((s2 << 2) + *(u32*)((a0 + 0x28)))), *(s16*)((v0_0 + 4)));
                    *(u32*)((*(u32*)(((s2 << 2) + *(u32*)((a0 + 0x28)))) + 0x188)) = 0xffffffff;
                    v0_0 = v0_1;
                }
                t5 = *(u16*)((a0 + 4));
                v0 = v0_0;
            }
            s2 = (s2 + 1);
            t7 = ((s32)(s2) < (s32)(((s32)((t5 << 0x10)) >> 0x10)));
        } while ((t7 != 0));
    }
    *(u16*)((a0 + 0xe)) = 0;
    return v0;
}

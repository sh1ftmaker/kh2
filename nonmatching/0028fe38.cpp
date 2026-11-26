// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0028ff00(u32) asm("func_0028ff00");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00259020(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00259020");
extern "C" void func_00290060(u32, u32, u32, u32) asm("func_00290060");

// 0x0028fe38 func_0028fe38
u32 func_0028fe38(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2Tz9MunnyDraw6CreateEiPvPN2YI5IMAGEEi");
u32 func_0028fe38(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 loc_0;
    u32 t4;
    u32 t5;
    u32 t7;
    func_00290060(a0, a1, a2, a3);
    func_001386e0(*(u32*)(a0), a1, a2, a3, *(s16*)((a0 + 8)), 0);
    *(u32*)((*(u32*)(a0) + 0x188)) = *(s16*)((a0 + 0xc));
    t4 = (u32)&loc_0;
    t5 = 5;
    t7 = *(u16*)((a0 + 0x10));
    do {
        *(u16*)(t4) = t7;
        t4 = (t4 + 2);
        t5 = (t5 + -1);
    } while (((s32)(t5) >= 0));
    func_00259020(*(u32*)((a0 + 4)), *(u32*)(a0), a1, a2, a3, (u32)&loc_0, 6, 0);
    return func_0028ff00(a0);
}

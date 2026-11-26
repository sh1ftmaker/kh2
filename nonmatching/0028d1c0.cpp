// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" void func_0028d188(u32) asm("func_0028d188");
extern "C" void func_0028d6e8(u32, u32, u32, u32, u32, u32) asm("func_0028d6e8");

// 0x0028d1c0 Tz::LightCur::Create(int, int, int, Tz::Layout*, short const*, int, int)
u32 lift_0028d1c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN2Tz8LightCur6CreateEiiiPNS_6LayoutEPKsii");
u32 lift_0028d1c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 s1;
    u32 s0;
    u32 t4;
    u32 t5;
    u32 t4_0;
    u32 v0;
    func_0028d6e8(a0, a1, a2, a3, a4, a5);
    s1 = func_0023c4b8(func_0023f1b0(a4), a2);
    s0 = func_00236ca8(*(u32*)((func_0023f1b0(a4) + 0x28)), a3);
    func_0028d188(a0);
    t4 = 0;
    t5 = (a0 + 0x196);
    do {
        t4_0 = (t4 + 1);
        *(u16*)(t5) = *(u16*)(a5);
        a5 = (a5 + 2);
        t4 = t4_0;
        t5 = (t5 + 2);
    } while (((s32)(((s32)(t4_0) < (s32)(3))) != 0));
    v0 = func_001386e0(a0, a1, s1, s0, *(s16*)((a0 + 0x196)), 0);
    *(u32*)((a0 + 0x188)) = *(s16*)((a0 + 0x19a));
    return v0;
}

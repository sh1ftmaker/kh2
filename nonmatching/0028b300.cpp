// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0023c3e0(u32, u32, u32) asm("func_0023c3e0");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_0028dd28(u32, u32) asm("func_0028dd28");
extern "C" void func_0028b4c0(u32, u32) asm("func_0028b4c0");
extern "C" void func_0028b4f0(u32, u32) asm("func_0028b4f0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");

// 0x0028b300 func_0028b300
u32 func_0028b300(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("_ZN2Tz6LaySeq6createEiiiPNS_6LayoutEPKsS4_ii");
u32 func_0028b300(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 v0;
    u32 s0;
    u32 s1;
    u32 v0_0;
    *(u32*)((a0 + 0x198)) = a4;
    func_0028d8c0(a0, a1, a2, a3, a4, a7, 0xffffffff, 0);
    func_0028b4c0(a0, a5);
    func_0028b4f0(a0, a6);
    v0 = func_0023f1b0(*(u32*)((a0 + 0x198)));
    s0 = 2;
    do {
        s1 = *(u32*)((v0 + 0x4c));
        if ((*(u32*)((v0 + 0x4c)) == *(s16*)(((a0 + ((s0 - 2) * -2)) + 0x1a0)))) {
            v0_0 = func_0028dd28(a0, func_0023c3e0(func_0023f1b0(*(u32*)((a0 + 0x198))), *(s16*)(((a0 + ((s0 - 2) * -2)) + 0x1a6)), 0));
            v0 = v0_0;
        }
        s0 = (s0 + -1);
    } while (((s32)(s0) >= 0));
    *(u16*)((a0 + 0x1ac)) = s1;
    return v0;
}

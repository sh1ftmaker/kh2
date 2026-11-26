// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0023c3e0(u32, u32, u32) asm("func_0023c3e0");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_0028dd28(u32, u32) asm("func_0028dd28");
extern "C" void func_0028b6f0(u32, u32) asm("func_0028b6f0");
extern "C" void func_0028b720(u32, u32) asm("func_0028b720");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");

// 0x0028b520 func_0028b520
u32 func_0028b520(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("_ZN2Tz10LaySeqMess6createEiiiPNS_6LayoutEPKsS4_iii");
u32 func_0028b520(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 loc_0;
    u32 v0;
    u32 t6;
    u32 s0;
    u32 t7;
    u32 v0_0;
    *(u32*)((a0 + 0x1b4)) = a4;
    loc_0 = 0;
    func_0028d980(a0, a1, a2, a3, a4, a7, 0xffffffff, *(u32*)(((u32)&loc_0 + 0x40)));
    func_0028b6f0(a0, a5);
    func_0028b720(a0, a6);
    v0 = func_0023f1b0(*(u32*)((a0 + 0x1b4)));
    t6 = 0;
    do {
        s0 = *(u32*)((v0 + 0x4c));
        t7 = *(s16*)(((a0 + (t6 * 2)) + 0x1bc));
        if ((s0 == t7)) {
            v0_0 = func_0028dd28(a0, func_0023c3e0(func_0023f1b0(*(u32*)((a0 + 0x1b4))), *(s16*)(((a0 + (t6 * 2)) + 0x1c2)), 0));
            *(u16*)((a0 + 0x1c8)) = s0;
            return v0_0;
        }
        t6 = (t6 + 1);
    } while (((s32)(((s32)(t6) < (s32)(3))) != 0));
    *(u16*)((a0 + 0x1c8)) = s0;
    return v0;
}

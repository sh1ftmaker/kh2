// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139638(u32) asm("func_00139638");
extern "C" u32 func_0023aa58(u32) asm("func_0023aa58");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023c3e0(u32, u32, u32) asm("func_0023c3e0");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" void func_001391c8(u32, u32, u32, u32, u32, u32, u32) asm("func_001391c8");
extern "C" void func_001395e8(u32) asm("func_001395e8");
extern "C" void func_00139610(u32) asm("func_00139610");
extern "C" void func_0023f5b8(u32, u32, u32) asm("func_0023f5b8");
extern "C" void func_0023f688(u32, u32) asm("func_0023f688");
extern "C" void func_0023f6c0(u32, u32) asm("func_0023f6c0");
extern "C" void func_0023f740(u32, u32) asm("func_0023f740");
extern "C" void func_0023f778(u32, u32) asm("func_0023f778");
extern "C" void func_0023f7a8(u32, u32) asm("func_0023f7a8");

// 0x0023f1e0 Tz::LayMsg::create(int, Tz::Layout*, short const*, short const*, int, int, int)
u32 lift_0023f1e0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("_ZN2Tz6LayMsg6createEiPNS_6LayoutEPKsS4_iii");
u32 lift_0023f1e0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 s4;
    u32 s0;
    u32 s1;
    u32 t7;
    u32 v0;
    func_001391c8(a0, a1, a7, a3, a4, a5, a6);
    *(u32*)((a0 + 0x18)) = a2;
    func_0023f778(a0, a3);
    func_0023f7a8(a0, a4);
    *(u32*)((a0 + 0x1c)) = 0;
    s4 = a0;
    s0 = 2;
    do {
        s1 = *(u32*)((func_0023f1b0(*(u32*)((a0 + 0x18))) + 0x4c));
        t7 = *(s16*)((s4 + 0x2c));
        if ((s1 == t7)) {
            *(u32*)((a0 + 0x1c)) = func_0023c3e0(func_0023f1b0(*(u32*)((a0 + 0x18))), *(s16*)((s4 + 0x32)), 0);
        }
        s0 = (s0 + -1);
        s4 = (s4 + 2);
    } while (((s32)(s0) >= 0));
    *(u32*)((a0 + 0x20)) = 0;
    *(u32*)((a0 + 0x24)) = 0xffffffff;
    *(u16*)((a0 + 0x38)) = s1;
    func_0023f5b8(a0, a5, a6);
    *(u32*)((a0 + 0x3c)) = 0x80e5e5e5;
    v0 = func_0023aa58(*(u32*)((a0 + 0x1c)));
    *(u32*)((a0 + 0x40)) = (((s32)(0) < (s32)(v0)) ? v0 : 0xf);
    func_0023f6c0(a0, 0);
    func_0023f688(a0, 1);
    *(u32*)((a0 + 0x44)) = 0;
    func_0023f740(a0, func_0023aa78(*(u32*)((a0 + 0x1c))));
    func_001395e8(a0);
    func_00139610(a0);
    return func_00139638(a0);
}

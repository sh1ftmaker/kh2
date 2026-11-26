// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f098 asm("D_0035f098");
extern "C" u32 D_0035f0a8 asm("D_0035f0a8");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028af90(u32, u32) asm("func_0028af90");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e08(u32, u32, u32, u32) asm("func_00288e08");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");

// 0x00259108 Tz::CmComm::CreateConfirmSelector(Tz::Select*, int, int, int, Tz::Layout*, int, short const*)
u32 lift_00259108(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("_ZN2Tz6CmComm21CreateConfirmSelectorEPNS_6SelectEiiiPNS_6LayoutEiPKs");
u32 lift_00259108(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u8 frame[48];
    u32 s6;
    u32 s2;
    u32 t6;
    u32 t5;
    u32 t4;
    u32 t3;
    u32 t1;
    u32 t0;
    u32 s7;
    u32 s5;
    u32 s4;
    u32 s2_0;
    u32 s0;
    u32 s1;
    u32 v0;
    u32 v0_1;
    *(u32*)(((u32)frame + 0x10)) = a1;
    *(u32*)(&D_0035f3d4) = (((s32)(a1) < (s32)(0)) ? *(u32*)(&D_0035f3d4) : a1);
    *(u32*)(((u32)frame + 0x14)) = a2;
    *(u32*)(((u32)frame + 0x18)) = a3;
    *(u32*)(((u32)frame + 0x1c)) = *(u32*)(&D_0035f3d4);
    *(u32*)(((u32)frame + 0x20)) = 0x40;
    if (((s32)(a5) == 0)) {
        *(u32*)((u32)frame) = *(u16*)(&D_0035f0a8);
        *(u32*)(((u32)frame + 0x20)) = 0x43;
        s6 = 1;
    } else {
        *(u32*)((u32)frame) = *(u16*)(((u32)&D_0035f0a8 + 4));
        *(u32*)(((u32)frame + 4)) = *(u16*)(((u32)&D_0035f0a8 + 2));
        s6 = 2;
    }
    s2 = 0;
    do {
        t6 = ((s2 << 3) + (u32)&D_0035f098);
        t5 = a6;
        t4 = 2;
        t3 = (u32)&D_0035f098;
        t1 = (u32)&D_0035f098;
        t0 = 0xffffffff;
        do {
            *(u16*)(t6) = *(u16*)(t5);
            t4 = (t4 + -1);
            t5 = (t5 + 2);
            t6 = (t6 + 2);
        } while (((s32)(t4) >= 0));
        *(u16*)((((s2 << 3) + t1) + 6)) = t0;
        if (((s32)(((s32)((s2 + 1)) < (s32)(2))) == 0)) {
            *(u16*)((((s2 << 3) + t1) + 4)) = *(u16*)((a6 + 6));
        }
        s2 = (s2 + 1);
    } while (((s32)(((s32)(s2) < (s32)(2))) != 0));
    if (((s32)(s6) != 0)) {
        s7 = 2;
        s5 = (u32)&D_0035f098;
        s4 = (u32)frame;
        s2_0 = 0;
        do {
            func_00288d80(a0, s2_0, *(u32*)(((u32)frame + 0x14)), *(u32*)(((u32)frame + 0x18)), a4, *(u32*)(s4) | 0x8000, s5, s5 + 8);
            s0 = func_0023aa78(func_002891b8(a0, s2_0) + 0x18);
            s1 = func_0023aa98(func_002891b8(a0, s2_0) + 0x18);
            func_00288e08(a0, s2_0, s0, 0);
            func_00139620(func_002891b8(a0, s2_0));
            *(u32*)((func_002891b8(a0, s2_0) + 0x1b0)) = s7;
            v0 = func_002891b8(a0, s2_0);
            *(u32*)((v0 + 0x19c)) = s1;
            *(u32*)((v0 + 0x1a0)) = 0;
            s2_0 = (s2_0 + 1);
            s4 = (s4 + 4);
        } while (((s32)(((s32)(s2_0) < (s32)(s6))) != 0));
    }
    func_0028af28(a0, *(u32*)(((u32)frame + 0x20)));
    func_002891f0(a0, 0, 1, 0, 2);
    v0_1 = func_0028af90(a0, 0xffffffff);
    if (((s32)(*(u32*)(((u32)frame + 0x10))) >= 0)) {
        *(u32*)(&D_0035f3d4) = *(u32*)(((u32)frame + 0x1c));
    }
    return v0_1;
}

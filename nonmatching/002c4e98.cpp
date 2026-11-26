// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00375630 asm("D_00375630");
extern "C" u32 D_01e2bd20 asm("D_01e2bd20");
extern "C" u32 D_01e2bd30 asm("D_01e2bd30");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_0023f848(u32) asm("func_0023f848");
extern "C" u32 func_0023f908(u32, u32) asm("func_0023f908");
extern "C" u32 func_0023f948(u32, u32) asm("func_0023f948");
extern "C" u32 func_002c24e0(u32) asm("func_002c24e0");
extern "C" u32 func_002c2518(u32) asm("func_002c2518");
extern "C" u32 func_002c3240(u32, u32) asm("func_002c3240");
extern "C" u32 func_002c3268(u32) asm("func_002c3268");
extern "C" u32 func_002c5120(u32) asm("func_002c5120");
extern "C" u32 func_002cb200(u32, u32, u32) asm("func_002cb200");
extern "C" void func_001391c8(u32, u32, u32) asm("func_001391c8");
extern "C" void func_001395e8(u32) asm("func_001395e8");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139638(u32) asm("func_00139638");
extern "C" void func_0023eea0(u32, u32, u32, u32, u32, u32) asm("func_0023eea0");
extern "C" void func_0023ef50(u32) asm("func_0023ef50");
extern "C" void func_0023f0c8(u32, u32) asm("func_0023f0c8");
extern "C" void func_0023f1e0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0023f1e0");
extern "C" void func_0023f618(u32, u32) asm("func_0023f618");
extern "C" void func_0023f6c0(u32, u32) asm("func_0023f6c0");
extern "C" void func_0023f800(u32) asm("func_0023f800");
extern "C" void func_0023fa08(u32, u32) asm("func_0023fa08");
extern "C" void func_002c44b8(u32) asm("func_002c44b8");
extern "C" void func_002c4ca8(u32) asm("func_002c4ca8");
extern "C" void func_002cb0e8(u32, u32, f32) asm("func_002cb0e8");

// 0x002c4e98 dk::WM_LANDING::create(char const*, YS::TARGET const&)
u32 lift_002c4e98(u32 a0, u32 a1, u32 a2) asm("_ZN2dk10WM_LANDING6createEPKcRKN2YS6TARGETE");
u32 lift_002c4e98(u32 a0, u32 a1, u32 a2) {
    u8 frame[32];
    u32 v0;
    u32 s1;
    u32 s0;
    u32 s4;
    u32 s0_0;
    u32 s1_1;
    u32 s2;
    u32 s0_2;
    u32 s1_3;
    u32 sp;
    *(u32*)((a0 + 0x3534)) = *(u32*)(a2);
    *(u32*)((a0 + 0x3538)) = *(u32*)((a2 + 4));
    *(u32*)((a0 + 0x353c)) = *(u32*)((a2 + 8));
    *(u32*)((a0 + 0x3540)) = *(u32*)((a2 + 0xc));
    *(u32*)((a0 + 0x3544)) = *(u32*)((a2 + 0x10));
    *(u32*)((a0 + 0x202c)) = *(u8*)((*(u32*)((*(u32*)(a2) + 0xaf8)) + 4));
    if (((s32)(func_002cb200(a0 + 0x2050, *(u8*)((*(u32*)((*(u32*)(a2) + 0xaf8)) + 4)), a0 + 0x2038)) != 0)) {
        *(u32*)((a0 + 0x2034)) = 1;
    } else {
        *(u32*)((a0 + 0x2034)) = 0;
    }
    func_0023f800((u32)frame);
    v0 = func_001708f8(a1, 0xffffffff);
    *(u32*)((a0 + 0x2028)) = v0;
    func_0023fa08((u32)frame, v0);
    s1 = func_0023f948((u32)frame, 0);
    s0 = func_0023f908((u32)frame, 0);
    s4 = (a0 + 0x1c);
    func_0023eea0(s4, 0x7531, s1, s0, func_002c3240(a0, 0), 0);
    func_0023ef50(s4);
    func_0023f0c8(s4, func_002c3240(a0, 2));
    *(u32*)((a0 + 0x3548)) = func_0023c4b8(func_0023f1b0(s4), 1);
    *(u32*)((a0 + 0x354c)) = func_00236ca8(*(u32*)((func_0023f1b0(s4) + 0x28)), 1);
    if (((s32)(func_002c5120(a0)) != 0)) {
        func_002cb0e8(a2, (u32)&D_01e2bd30, 0.0f);
        func_002c44b8(a0);
    } else {
        func_002cb0e8(a2, (u32)&D_01e2bd20, 0.0f);
        func_002c4ca8(a0);
    }
    if (((s32)(func_002c5120(a0)) != 0)) {
        s0_0 = (a0 + 0xbc);
        s1_1 = (u32)&D_00375630;
        s2 = 8;
        do {
            func_0023f1e0(s0_0, 0x7535, s4, func_002c3268(a0), s1_1, *(u32*)((s1_1 + 0x18)), 0, 0);
            func_00139620(s0_0);
            func_001395e8(s0_0);
            func_001395f8(s0_0);
            func_0023f6c0(s0_0, *(u32*)((s1_1 + 0x1c)));
            s0_0 = (s0_0 + 0x4c);
            s1_1 = (s1_1 + 0x20);
            s2 = (s2 + -1);
        } while (((s32)(s2) >= 0));
        s0_2 = (a0 + 0x2d0);
        func_0023f618(s0_2, func_002c24e0(*(u32*)((a0 + 0x202c))));
        func_00139638(s0_2);
        s1_3 = (a0 + 0x31c);
        func_0023f618(s1_3, func_002c2518(*(u32*)((a0 + 0x202c))));
        func_00139638(s1_3);
    } else {
        sp = (u32)frame;
    }
    func_001391c8(a0, 0x7532, 0);
    return func_0023f848(sp);
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003081d0 asm("D_003081d0");
extern "C" u32 D_003081f0 asm("D_003081f0");
extern "C" u32 D_00308938 asm("D_00308938");
extern "C" u32 D_003660d8 asm("D_003660d8");
extern "C" u32 D_01e35700 asm("D_01e35700");
extern "C" u32 D_01e35780 asm("D_01e35780");
extern "C" u32 D_01e357d4 asm("D_01e357d4");
extern "C" u32 D_01e357d8 asm("D_01e357d8");
extern "C" u32 D_01e35800 asm("D_01e35800");
extern "C" u32 D_01e35980 asm("D_01e35980");
extern "C" u32 D_1000c000 asm("D_1000c000");
extern "C" u32 D_1000e010 asm("D_1000e010");
extern "C" u32 func_00305330(u32, u32, u32) asm("func_00305330");
extern "C" u32 func_00305a30(u32) asm("func_00305a30");
extern "C" u32 func_003088b8(u32, u32, u32, u32, u32, u32) asm("func_003088b8");
extern "C" u32 func_0030ee00(u32) asm("func_0030ee00");
extern "C" void func_003058a0(u32) asm("func_003058a0");
extern "C" void func_00305a00() asm("func_00305a00");
extern "C" void func_00305a20(u32, u32) asm("func_00305a20");
extern "C" void func_00306238(u32) asm("func_00306238");
extern "C" void func_0030edb0() asm("func_0030edb0");

// 0x003083d0 func_003083d0
u32 func_003083d0() asm("func_003083d0");
u32 func_003083d0() {
    u32 a0_0;
    u32 a0_1;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 t1;
    u32 v1;
    u32 s0;
    u32 v0;
    u32 v0_2;
    u32 s0_3;
    u32 a0_4;
    u32 v0_5;
    func_0030edb0();
    if (((s32)(*(u32*)(&D_003660d8)) != 0)) {
        return func_0030ee00(a0_0);
    } else {
        *(u32*)(&D_01e357d8) = ((u32)&D_01e35700 | 0x20000000);
        *(u32*)(&D_003660d8) = 1;
        *(u32*)(((u32)&D_01e357d8 + 4)) = ((u32)&D_01e35780 | 0x20000000);
        *(u32*)(((u32)&D_01e357d8 + 8)) = 0;
        *(u32*)(((u32)&D_01e357d8 + 0xc)) = (u32)&D_01e35800;
        *(u32*)(((u32)&D_01e357d8 + 0x10)) = 0x20;
        *(u32*)(((u32)&D_01e357d8 + 0x14)) = 0;
        *(u32*)(((u32)&D_01e357d8 + 0x18)) = 0;
        *(u32*)(((u32)&D_01e357d8 + 0x1c)) = (u32)&D_01e35980;
        a0_1 = ((u32)&D_01e35800 + 0x180);
        s2 = 0x1e30000;
        s3 = 0x1e30000;
        s4 = 0x1e30000;
        t1 = 0x1e30000;
        v1 = (u32)&D_01e35800;
        do {
            *(u32*)(v1) = 0;
            *(u32*)((v1 + 4)) = 0;
            v1 = (v1 + 0xc);
        } while (((s32)(((s32)(v1) < (s32)(a0_1))) != 0));
        s0 = 0x1f;
        v0 = (u32)&D_01e35980;
        do {
            *(u32*)(((v0 + ((s0 - 0x1f) * 4)) + 0x7c)) = 0;
            s0 = (s0 + -1);
        } while (((s32)(s0) >= 0));
        *(u32*)(((t1 + 0x5800) + 4)) = (s2 + 0x57d8);
        *(u32*)(((t1 + 0x5800) + 0xc)) = (u32)&D_003081d0;
        *(u32*)(((t1 + 0x5800) + 0x10)) = (s2 + 0x57d8);
        *(u32*)((t1 + 0x5800)) = (u32)&D_003081f0;
        func_0030ee00(t1 + 0x5800);
        func_003058a0(0);
        if (((s32)((*(u32*)((u32)&D_1000e010) & 0x20)) != 0)) {
            *(u32*)(&D_1000e010) = 0x20;
        }
        if (((s32)((*(u32*)((u32)&D_1000c000) & 0x100)) == 0)) {
            func_00305a00();
        }
        *(u32*)(&D_01e357d4) = func_00305330(5, (u32)&D_00308938, 0);
        func_00306238(5);
        v0_2 = func_00305a30(0x80000000);
        *(u32*)(((s2 + 0x57d8) + 8)) = v0_2;
        if (((s32)(v0_2) != 0)) {
            *(u32*)(((s4 + 0x57c0) + 0x10)) = (s3 + 0x5700);
            return func_003088b8(0x80000000, s4 + 0x57c0, 0x14, 0, 0, 0);
        } else {
            s0_3 = 0x20000;
            do {
            } while (((s32)((func_00305a30(4) & s0_3)) == 0));
            v0_5 = func_00305a30(a0_4);
            *(u32*)(((s2 + 0x57d8) + 8)) = v0_5;
            func_00305a20(0x80000000, v0_5);
            func_00305a20(0x80000001, s2 + 0x57d8);
            *(u32*)(((s4 + 0x57c0) + 0xc)) = 0;
            *(u32*)(((s4 + 0x57c0) + 0x10)) = (s3 + 0x5700);
            return func_003088b8(0x80000002, s4 + 0x57c0, 0x14, 0, 0, 0);
        }
    }
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00308e30 asm("D_00308e30");
extern "C" u32 D_00308f40 asm("D_00308f40");
extern "C" u32 D_00309208 asm("D_00309208");
extern "C" u32 D_00309428 asm("D_00309428");
extern "C" u32 D_003660dc asm("D_003660dc");
extern "C" u32 D_01e35a00 asm("D_01e35a00");
extern "C" u32 D_01e36200 asm("D_01e36200");
extern "C" u32 D_01e36a00 asm("D_01e36a00");
extern "C" u32 D_01e37200 asm("D_01e37200");
extern "C" u32 func_00305a20(u32, u32) asm("func_00305a20");
extern "C" u32 func_00305a30(u32) asm("func_00305a30");
extern "C" u32 func_00308200(u32) asm("func_00308200");
extern "C" u32 func_0030ee00() asm("func_0030ee00");
extern "C" void func_003083d0() asm("func_003083d0");
extern "C" void func_003086b8(u32, u32, u32, u32, u32) asm("func_003086b8");
extern "C" void func_003088b8(u32, u32, u32, u32, u32, u32) asm("func_003088b8");
extern "C" void func_0030edb0() asm("func_0030edb0");

// 0x00308b30 func_00308b30
u32 func_00308b30() asm("func_00308b30");
u32 func_00308b30() {
    u32 a3_0;
    u32 t0;
    u32 a3_1;
    u32 t0_2;
    u32 a3_3;
    u32 t0_4;
    u32 v0;
    u32 v0_5;
    func_0030edb0();
    if (((s32)(*(u32*)(&D_003660dc)) != 0)) {
        return func_0030ee00();
    } else {
        *(u32*)(&D_003660dc) = 1;
        func_0030ee00();
        func_003083d0();
        func_0030edb0();
        *(u32*)(&D_01e37200) = 1;
        *(u32*)(((u32)&D_01e37200 + 4)) = ((u32)&D_01e35a00 | 0x20000000);
        *(u32*)(((u32)&D_01e37200 + 8)) = 0x20;
        *(u32*)(((u32)&D_01e37200 + 0xc)) = 0;
        *(u32*)(((u32)&D_01e37200 + 0x10)) = 0;
        *(u32*)(((u32)&D_01e37200 + 0x14)) = ((u32)&D_01e36200 | 0x20000000);
        *(u32*)(((u32)&D_01e37200 + 0x18)) = 0x20;
        *(u32*)(((u32)&D_01e37200 + 0x1c)) = ((u32)&D_01e36a00 | 0x20000000);
        *(u32*)(((u32)&D_01e37200 + 0x20)) = 0x20;
        *(u32*)(((u32)&D_01e37200 + 0x24)) = 0;
        func_003086b8(0x80000008, (u32)&D_00308e30, (u32)&D_01e37200, (u32)&D_01e36a00 | 0x20000000, 0x1e30000);
        func_003086b8(0x80000009, (u32)&D_00309208, (u32)&D_01e37200, a3_0, t0);
        func_003086b8(0x8000000a, (u32)&D_00309428, (u32)&D_01e37200, a3_1, t0_2);
        func_003086b8(0x8000000c, (u32)&D_00308f40, (u32)&D_01e37200, a3_3, t0_4);
        func_0030ee00();
        v0 = func_00305a30(0x80000002);
        if (((s32)(v0) == 0)) {
            *(u32*)((((u32)&D_01e35a00 + 0x40) + 0xc)) = 1;
            func_003088b8(0x80000002, (u32)&D_01e35a00 + 0x40, 0x10, 0, 0, 0);
            do {
                v0_5 = func_00308200(0);
            } while (((s32)(v0_5) == 0));
            return func_00305a20(0x80000002, 1);
        } else {
            return v0;
        }
    }
}

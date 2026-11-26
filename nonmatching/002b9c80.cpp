// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00374f30 asm("D_00374f30");
extern "C" u32 D_00374f40 asm("D_00374f40");
extern "C" u32 D_00374f50 asm("D_00374f50");
extern "C" u32 D_00374f60 asm("D_00374f60");
extern "C" u32 func_001688c8(u32) asm("func_001688c8");
extern "C" u32 func_00170b30(u32) asm("func_00170b30");
extern "C" u32 func_00170c00() asm("func_00170c00");
extern "C" u32 func_002b6f78() asm("func_002b6f78");
extern "C" void func_001682b8(u32, u32) asm("func_001682b8");
extern "C" void func_002b6ab8(u32) asm("func_002b6ab8");
extern "C" void func_002ba188(u32, u32, u32) asm("func_002ba188");
extern "C" void func_002ba1b8(u32, u32, u32) asm("func_002ba1b8");

// 0x002b9c80 SOUND::initCommonSe()
u32 lift_002b9c80() asm("_ZN5SOUND12initCommonSeEv");
u32 lift_002b9c80() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    v0 = func_001688c8((u32)&D_00374f30);
    v0_0 = func_00170b30((v0 + 0x83f) & 0xfffff800);
    func_001682b8((u32)&D_00374f30, (v0_0 + 0x3f) & 0xffffffc0);
    func_002ba1b8(2, (v0_0 + 0x3f) & 0xffffffc0, v0);
    while ((v0_1 = func_002b6f78()), ((s32)(v0_1) != 0)) {
        func_002b6ab8(v0_0);
    }
    func_00170c00();
    v0_2 = func_001688c8((u32)&D_00374f40);
    v0_3 = func_00170b30((v0_2 + 0x83f) & 0xfffff800);
    func_001682b8((u32)&D_00374f40, (v0_3 + 0x3f) & 0xffffffc0);
    func_002ba1b8(3, (v0_3 + 0x3f) & 0xffffffc0, v0_2);
    while ((v0_4 = func_002b6f78()), ((s32)(v0_4) != 0)) {
        func_002b6ab8(v0_3);
    }
    func_00170c00();
    v0_5 = func_001688c8((u32)&D_00374f50);
    v0_6 = func_00170b30((v0_5 + 0x83f) & 0xfffff800);
    func_001682b8((u32)&D_00374f50, (v0_6 + 0x3f) & 0xffffffc0);
    func_002ba188(2, (v0_6 + 0x3f) & 0xffffffc0, v0_5);
    while ((v0_7 = func_002b6f78()), ((s32)(v0_7) != 0)) {
        func_002b6ab8(v0_6);
    }
    func_00170c00();
    v0_8 = func_001688c8((u32)&D_00374f60);
    v0_9 = func_00170b30((v0_8 + 0x83f) & 0xfffff800);
    func_001682b8((u32)&D_00374f60, (v0_9 + 0x3f) & 0xffffffc0);
    func_002ba188(3, (v0_9 + 0x3f) & 0xffffffc0, v0_8);
    while ((v0_10 = func_002b6f78()), ((s32)(v0_10) != 0)) {
        func_002b6ab8(v0_9);
    }
    return func_00170c00();
}

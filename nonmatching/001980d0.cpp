// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003503e0 asm("D_003503e0");
extern "C" u32 D_00350e48 asm("D_00350e48");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_00170d18(u32) asm("func_00170d18");
extern "C" u32 func_0017ebe8(u32, u32) asm("func_0017ebe8");
extern "C" u32 func_00195858(u32, u32) asm("func_00195858");
extern "C" u32 func_001b2f38(u32, u32, u32) asm("func_001b2f38");
extern "C" u32 func_001d56f0(u32) asm("func_001d56f0");
extern "C" void func_00169398(u32, u32, u32, u32, u32) asm("func_00169398");
extern "C" void func_001dddd0(u32, u32) asm("func_001dddd0");

// 0x001980d0 func_001980d0
u32 func_001980d0(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001980d0");
u32 func_001980d0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s0;
    u32 t7;
    u32 v0;
    u32 s2;
    u32 a0_0;
    u32 v0_1;
    u32 a1_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 a1_6;
    u32 s0_7;
    u32 a2_8;
    u8 a2_9;
    u32 v0_10;
    u32 a1_11;
    u32 v0_12;
    u32 a1_13;
    func_00169398(a0, *(u32*)(a1), a1, a2, a3);
    *(u32*)(a0) = (u32)&D_003503e0;
    *(u32*)((a0 + 0x9b4)) = 0;
    *(u32*)((a0 + 0x9b8)) = 0;
    s0 = (a0 + 0x9bc);
    *(u32*)((s0 + 4)) = 0;
    *(u32*)((s0 + 8)) = 0xffffffff;
    *(u32*)((s0 + 0xc)) = 0;
    *(u32*)((s0 + 0x10)) = 0;
    *(u32*)((s0 + 0x14)) = 0x1800;
    *(u32*)((a0 + 0x9bc)) = (u32)&D_00350e48;
    func_001d56f0(a0 + 0x9dc);
    t7 = *(u32*)((a0 + 0x588));
    v0 = func_001d56f0(a0 + 0x9e8);
    *(u32*)((a0 + 0x588)) = (t7 | 1);
    s2 = (a0 + 0x7a0);
    a0_0 = *(u32*)((s2 + 0x10));
    if (((s32)(a0_0) != 0)) {
        v0_1 = func_00168b38(a0_0, 0x12, 0);
        if ((v0_1 != 0)) {
            a1_2 = *(u32*)((v0_1 + 8));
            if ((a1_2 != 0)) {
                func_001dddd0(a0 + 0x80, a1_2);
            }
        }
        v0_3 = func_00168b38(*(u32*)((s2 + 0x10)), 0x22, 0);
        if (((s32)(v0_3) != 0)) {
            v0_4 = *(u32*)((v0_3 + 8));
            if (((s32)(v0_4) != 0)) {
                *(u32*)((s0 + 4)) = 2;
                *(u32*)((s0 + 8)) = 0xffffffff;
                *(u32*)((s0 + 0xc)) = 0;
                *(u32*)((s0 + 0x10)) = 0;
                *(u32*)((s0 + 0x14)) = 0x1800;
                *(u32*)((s0 + 0x1c)) = v0_4;
                *(u32*)((a0 + 0x9b8)) = s0;
                *(u32*)((a0 + 0x9bc)) = (u32)&D_00350e48;
            }
        }
        *(u32*)((a0 + 0x9b4)) = func_00170d18(*(u32*)((s2 + 0x10)));
        v0_5 = func_00168b38(*(u32*)((s2 + 0x10)), 0x26, 0);
        if ((v0_5 != 0)) {
            a1_6 = *(u32*)((v0_5 + 8));
            if (((s32)(a1_6) != 0)) {
                s0_7 = (a0 + 0x800);
                a2_8 = *(u16*)((a1 + 0x48));
                a2_9 = ((a2_8 >> 6) & 1);
                v0_10 = func_001b2f38(s0_7, a1_6, a2_9);
                *(u32*)((a0 + 0x60c)) = *(u32*)((s0_7 + 0xc));
                v0_5 = v0_10;
            }
        }
        v0 = v0_5;
    }
    a1_11 = *(u32*)((s2 + 0x14));
    if ((a1_11 != 0)) {
        v0_12 = func_0017ebe8(a0 + 0x140, a1_11);
        v0 = v0_12;
    }
    a1_13 = *(u16*)((*(u32*)((a0 + 8)) + 0x4e));
    if (((s32)(a1_13) != 0)) {
        return func_00195858(a0 + 0x110, a1_13);
    } else {
        return v0;
    }
}

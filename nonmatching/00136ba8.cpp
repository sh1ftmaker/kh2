// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036ac80 asm("D_0036ac80");
extern "C" u32 func_001050c8(u32) asm("func_001050c8");
extern "C" u32 func_001688c8(u32) asm("func_001688c8");
extern "C" u32 func_00170cd0() asm("func_00170cd0");
extern "C" u32 func_002ba200() asm("func_002ba200");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_00168388(u32, u32, u32, u32) asm("func_00168388");
extern "C" void func_002bb070(u32, u32, u32, u32, u32) asm("func_002bb070");

// 0x00136ba8 func_00136ba8
void func_00136ba8(u32 a0) asm("func_00136ba8");
void func_00136ba8(u32 a0) {
    u32 s2;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    s2 = func_001050c8(a0);
    v0 = func_001688c8((u32)&D_0036ac80);
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(s2))))(s2, (v0 + 0x83f) & 0xfffff800, 0);
    func_00168388((u32)&D_0036ac80, (v0_0 + 0x3f) & 0xffffffc0, 0, 0);
    while ((v0_1 = func_00170cd0()), ((s32)(v0_1) != 0)) {
        func_00102448(a0, 0);
    }
    func_002bb070(1, (v0_0 + 0x3f) & 0xffffffc0, v0, 0, 0);
    while ((v0_2 = func_002ba200()), ((s32)(v0_2) != 0)) {
        func_00102448(a0, 0);
    }
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(s2) + 4))))(s2, v0_0);
    return;
}

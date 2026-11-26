// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034805c asm("D_0034805c");
extern "C" u32 func_00138de0(u32) asm("func_00138de0");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023ade0(u32) asm("func_0023ade0");
extern "C" void func_00138988(u32) asm("func_00138988");
extern "C" void func_0023a9c0(u32, u32, u32) asm("func_0023a9c0");

// 0x0013aba8 dk::COMMAND_ONE::draw()
u32 lift_0013aba8(u32 a0) asm("_ZN2dk11COMMAND_ONE4drawEv");
u32 lift_0013aba8(u32 a0) {
    u32 loc_0;
    u32 loc_4;
    u32 s1;
    u32 v0;
    u32 t4;
    u32 t7;
    u32 v0_0;
    loc_0 = 0;
    loc_4 = 0;
    func_00138988(a0);
    s1 = (a0 + 0x18);
    v0 = func_00138de0(a0);
    if (((s32)(((s32)(*(u32*)((a0 + 0x30c))) < (s32)(*(u32*)(&D_0034805c)))) == 0)) {
        func_0023a9c0(s1, (u32)&loc_0, (u32)&loc_4);
        loc_0 = (loc_0 + func_0023aa18(s1));
        t4 = (a0 + 0x1b4);
        t7 = (loc_4 + func_0023aa38(s1));
        *(u32*)((t4 + 0x148)) = (*(u32*)((a0 + 0x170)) + loc_0);
        *(u32*)((t4 + 0x14c)) = (*(u32*)((a0 + 0x174)) + t7);
        loc_4 = t7;
        v0_0 = func_0023ade0(t4);
        v0 = v0_0;
    }
    return v0;
}

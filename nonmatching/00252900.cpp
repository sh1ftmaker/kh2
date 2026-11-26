// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_0035ee9c asm("D_0035ee9c");
extern "C" u32 D_0035eea4 asm("D_0035eea4");
extern "C" u32 func_0023ee30(u32) asm("func_0023ee30");
extern "C" u32 func_00252d88() asm("func_00252d88");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0023ef50(u32) asm("func_0023ef50");
extern "C" void func_002529a8() asm("func_002529a8");
extern "C" void func_0028d7f0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d7f0");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x00252900 Tz::ALCA::PauseThread(TASK*)
u32 lift_00252900() asm("_ZN2Tz4ALCA11PauseThreadEP4TASK");
u32 lift_00252900() {
    u32 v0;
    u32 loc_0;
    func_002529a8();
    v0 = func_0023ee30(0xa0);
    *(u32*)(v0) = (u32)&D_00347f98;
    func_0031a838(v0 + 0xc);
    *(u32*)(v0) = (u32)&D_0035eb98;
    func_002369a0(v0 + 0x18);
    func_0023c008(v0 + 0x30);
    *(u32*)(&D_0035eea4) = v0;
    loc_0 = 0;
    func_0028d7f0(v0, 0x7532, 0, 0, *(s16*)(*(u32*)(&D_0035ee9c)), *(s16*)((*(u32*)(&D_0035ee9c) + 2)), 0, 0);
    func_0023ef50(*(u32*)(&D_0035eea4));
    return func_00252d88();
}

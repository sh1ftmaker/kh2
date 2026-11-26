// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035eeb4 asm("D_0035eeb4");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_01dae6a8 asm("D_01dae6a8");
extern "C" u32 func_0023d368() asm("func_0023d368");
extern "C" u32 func_00253330(u32) asm("func_00253330");
extern "C" void func_00242790() asm("func_00242790");
extern "C" void func_00258dc8() asm("func_00258dc8");
extern "C" void func_00287a28() asm("func_00287a28");
extern "C" void func_0028ca78() asm("func_0028ca78");
extern "C" void func_0028d068(u32, u32) asm("func_0028d068");

// 0x002530f0 Tz::CampMenu::Exit(int)
u32 lift_002530f0(u32 a0) asm("_ZN2Tz8CampMenu4ExitEi");
u32 lift_002530f0(u32 a0) {
    ((void(*)())(*(u32*)((func_00253330(a0) + 8))))();
    *(u32*)(&D_0035eeb4) = 0xffffffff;
    func_00258dc8();
    func_0028ca78();
    func_00287a28();
    *(u32*)(&D_0035f3d4) = *(s16*)(&D_01dae6a8);
    if (((s32)(*(s16*)(((u32)&D_01dae6a8 + 2))) >= 0)) {
        func_0028d068(*(s16*)(((u32)&D_01dae6a8 + 2)), 0xffffffff);
    }
    if ((a0 != 9)) {
        func_00242790();
    }
    return func_0023d368();
}

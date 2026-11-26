// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0017ce10(f32) asm("func_0017ce10");
extern "C" u32 func_001069e8(u32, u32, u32, u32, u32, u32, f32, f32) asm("func_001069e8");
extern "C" u32 func_00106a18(u32) asm("func_00106a18");
extern "C" u32 func_00106a60(u32) asm("func_00106a60");
extern "C" void func_00106de8(u32, u32, f32) asm("func_00106de8");
extern "C" void func_00107300(u32, u32, u32, f32) asm("func_00107300");
extern "C" void func_0013f9e0(u32, u32, u32, u32, u32) asm("func_0013f9e0");
extern "C" void func_0015cff0() asm("func_0015cff0");
extern "C" void func_0015d058(u32, u32, f32) asm("func_0015d058");
extern "C" void func_0015d208(u32, u32) asm("func_0015d208");

// 0x0015d2e8 func_0015d2e8
void func_0015d2e8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, f32 fa0, f32 fa1) asm("_ZN2dk11EventCamera6lookAtERKN2kn7FVectorES4_ffNS1_10Projection4WorHEbbb");
void func_0015d2e8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, f32 fa0, f32 fa1) {
    f32 loc_0;
    f32 loc_4;
    u32 v0;
    u32 s7;
    loc_0 = fa1;
    loc_4 = fa0;
    v0 = func_001069e8(a0, a1, a2, a3, a4, a5, fa0, fa1);
    if ((v0 == 1)) {
        func_0015cff0();
        loc_4 = func_0017ce10(loc_4);
        s7 = func_00106a60(1);
        if (((a3 & 0xff) == v0)) {
            func_0013f9e0(a0, a1, a0, a4 & 0xff, 0);
        }
        if (((a5 & 0xff) == v0)) {
            func_0015d058(a0, a1, loc_4);
            func_0015d208((u32)&loc_0, (u32)&loc_4);
        }
        func_00107300(s7, a0, a1, loc_4);
        func_00106de8(func_00106a18(1), a2, loc_0);
    }
    return;
}

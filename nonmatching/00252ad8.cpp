// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035eea4 asm("D_0035eea4");
extern "C" u32 D_0035eea8 asm("D_0035eea8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_00252ba8() asm("func_00252ba8");
extern "C" void func_00252bf0() asm("func_00252bf0");
extern "C" void func_00252c20() asm("func_00252c20");
extern "C" void func_00287d68() asm("func_00287d68");

// 0x00252ad8 func_00252ad8
u32 func_00252ad8() asm("func_00252ad8");
u32 func_00252ad8() {
    u32 s0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    s0 = func_00287bc0();
    func_00287d68();
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(*(u32*)(&D_0035eea4)) != 0)) {
            if (((s32)(func_00139d78(*(u32*)(&D_0035eea4))) == 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035eea8))) == 0)) {
                    func_001039f8();
                    v0 = 1;
                } else {
                    v0 = 0;
                }
                v0_0 = v0;
            } else {
                v0_0 = 0;
            }
            v0_2 = v0_0;
        } else {
            if (((s32)(func_00139d78(*(u32*)(&D_0035eea8))) == 0)) {
                func_001039f8();
                v0_1 = 1;
            } else {
                v0_1 = 0;
            }
            v0_2 = v0_1;
        }
        v0_3 = v0_2;
    } else {
        if (((s32)(s0) < (s32)(4))) {
            if (((s32)(s0) <= 0)) {
                if ((s0 == 0)) {
                    func_00252ba8();
                }
            } else {
                func_00252c20();
            }
        } else {
            if ((s0 == 4)) {
                func_00252bf0();
            }
        }
        v0_3 = 0;
    }
    return v0_3;
}

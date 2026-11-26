// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 D_00373798 asm("D_00373798");
extern "C" u32 D_003737c8 asm("D_003737c8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00269508(u32) asm("func_00269508");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028bd60(u32) asm("func_0028bd60");
extern "C" u32 func_0028be58(u32) asm("func_0028be58");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x0026a060 func_0026a060
u32 func_0026a060() asm("_ZN2Tz7CmEquip11SetLoopListEv");
u32 func_0026a060() {
    u32 s0;
    u32 v0;
    u32 v0_0;
    u32 s1;
    u32 s2;
    u32 s0_1;
    u32 v0_2;
    s0 = func_00257770();
    if ((func_00287bc0() == 2)) {
        s1 = 0xe4;
        s2 = 0x120;
    } else {
        v0 = func_00269508(func_002570a0(2));
        v0_0 = (v0 * 6);
        s1 = *(s16*)(((v0_0 + (u32)&D_00373798) + 4));
        s2 = *(s16*)(((v0_0 + (u32)&D_003737c8) + 4));
    }
    if ((s0 != 0)) {
        if (((s32)(func_00139d78(s0)) != 0)) {
            if ((*(u32*)((s0 + 0x184)) != s1)) {
                func_00138c10(s0, s1);
            }
        }
        if (((s32)(s0) != 0)) {
            s0_1 = (s0 + 0xb350);
            if ((func_00139d78(s0_1) != 0)) {
                if ((*(u32*)((s0_1 + 0x184)) != s2)) {
                    func_00138c10(s0_1, s2);
                }
            }
        }
    }
    v0_2 = func_0028be58(*(u32*)(&D_0035f04c));
    if ((v0_2 != 0)) {
        return func_0028bd60(*(u32*)(&D_0035f04c));
    } else {
        return v0_2;
    }
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee9c asm("D_0035ee9c");
extern "C" u32 D_0035eea0 asm("D_0035eea0");
extern "C" u32 D_0035eea4 asm("D_0035eea4");
extern "C" u32 D_0035eea8 asm("D_0035eea8");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_0028dd90(u32) asm("func_0028dd90");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");

// 0x00252e50 Tz::ALCA::SetMess()
u32 lift_00252e50() asm("_ZN2Tz4ALCA7SetMessEv");
u32 lift_00252e50() {
    u32 v0;
    u32 t5;
    u32 t7;
    u32 t6;
    u32 v0_0;
    u32 s0;
    u32 loc_0;
    u32 s0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    v0 = func_0023f0c0(*(u32*)(&D_0035eea4));
    if (((s32)(*(s16*)(&D_0035eea0)) > 0)) {
        t5 = 0;
        t7 = *(s16*)(*(u32*)(&D_0035ee9c));
        t6 = *(u32*)(&D_0035ee9c);
        do {
            if ((v0 == *(s16*)((t6 + (t5 * 2))))) {
                break;
            }
            t5 = (t5 + 1);
            t7 = ((s32)(t5) < (s32)(*(s16*)(&D_0035eea0)));
        } while ((t7 != 0));
    }
    if ((0xffffffff == (*(s16*)(&D_0035eea0) + -2))) {
        func_00139d78(*(u32*)(&D_0035eea8));
        v0_0 = func_00138c10(*(u32*)(&D_0035eea8), 0xf);
        *(u32*)((*(u32*)(&D_0035eea8) + 0x188)) = 0xffffffff;
        v0 = v0_0;
    } else {
        s0 = (((s32)(0xffffffff) < (s32)((*(s16*)(&D_0035eea0) + -4))) ? 0x1004 : 0x1005);
        if (((s32)(func_00139d78(*(u32*)(&D_0035eea8))) == 0)) {
            loc_0 = 0;
            func_0028d980(*(u32*)(&D_0035eea8), 0x753c, 0, 0, *(u32*)(&D_0035eea4), 0xd, 0xe, s0);
            s0_1 = *(u32*)(&D_0035eea8);
            v0_2 = func_0028dd90(func_0023aa98(*(u32*)(&D_0035eea8) + 0x18));
            *(u32*)((s0_1 + 0x1b0)) = v0_2;
            v0_5 = v0_2;
        } else {
            v0_3 = func_00139d78(*(u32*)(&D_0035eea8));
            if ((v0_3 != 0)) {
                v0_4 = func_00192048(s0);
                if ((*(u32*)((*(u32*)(&D_0035eea8) + 0x198)) != v0_4)) {
                    *(u32*)((*(u32*)(&D_0035eea8) + 0x198)) = v0_4;
                }
                v0_3 = v0_4;
            }
            v0_5 = v0_3;
        }
        v0 = v0_5;
    }
    return v0;
}

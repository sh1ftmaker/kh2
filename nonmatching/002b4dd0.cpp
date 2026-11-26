// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f640 asm("D_0035f640");
extern "C" u32 D_0035f644 asm("D_0035f644");
extern "C" u32 D_0035f654 asm("D_0035f654");
extern "C" u32 D_0035f664 asm("D_0035f664");
extern "C" u32 D_0035f6cc asm("D_0035f6cc");
extern "C" u32 D_0035f6d0 asm("D_0035f6d0");
extern "C" u32 func_00139620(u32) asm("func_00139620");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");

// 0x002b4dd0 Tz::CmSLBase::SetupWarningWin(int)
u32 lift_002b4dd0(u32 a0) asm("_ZN2Tz8CmSLBase15SetupWarningWinEi");
u32 lift_002b4dd0(u32 a0) {
    u32 loc_0;
    u32 s0;
    u32 s0_0;
    u32 v0;
    u32 t6;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f654))) == 0)) {
        loc_0 = 0;
        func_0028d980(*(u32*)(&D_0035f654), 0x756d, *(u32*)(&D_0035f644), *(u32*)(&D_0035f640), *(u32*)(&D_0035f664), *(s16*)(*(u32*)((*(u32*)(&D_0035f6cc) + 0x14))), *(s16*)((*(u32*)((*(u32*)(&D_0035f6cc) + 0x14)) + 4)), a0);
    } else {
        if ((*(u32*)((*(u32*)(&D_0035f654) + 0x184)) == *(s16*)((*(u32*)((*(u32*)(&D_0035f6cc) + 0x14)) + 2)))) {
            s0 = *(u32*)(&D_0035f654);
            func_00138c10(*(u32*)(&D_0035f654), *(s16*)(*(u32*)((*(u32*)(&D_0035f6cc) + 0x14))));
            *(u32*)((*(u32*)(&D_0035f654) + 0x188)) = *(s16*)((*(u32*)((*(u32*)(&D_0035f6cc) + 0x14)) + 4));
        }
        s0_0 = *(u32*)(&D_0035f654);
        *(u32*)((s0_0 + 0x198)) = func_00192048(a0);
    }
    v0 = func_00139620(*(u32*)(&D_0035f654));
    *(u32*)((*(u32*)(&D_0035f654) + 0x1b0)) = 2;
    t6 = (*(u32*)(&D_0035f654) + 0x18);
    *(u32*)((t6 + 0xb8)) = (*(u32*)((t6 + 0xb8)) | 8);
    *(u8*)(&D_0035f6d0) = 1;
    return v0;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002d0200 Ti::MGObj::IsInitAppear(YS::OBJENTRY const*)
u32 lift_002d0200(u32 a0) asm("_ZN2Ti5MGObj12IsInitAppearEPKN2YS8OBJENTRYE");
u32 lift_002d0200(u32 a0) {
    u32 t6;
    u32 t6_0;
    u32 a0_1;
    t6 = *(u8*)((a0 + 4));
    if ((t6 == 0x10)) {
        t6_0 = *(u32*)(a0);
        if ((t6_0 != 0x61e)) {
            a0_1 = *(u8*)((a0 + 5));
            if (((s32)(((s32)(a0_1) < (s32)(0x12))) != 0)) {
                if (((s32)(((s32)(a0_1) < (s32)(0xf))) != 0)) {
                    if (((s32)(a0_1) >= 0)) {
                        if (((s32)(((s32)(a0_1) < (s32)(3))) == 0)) {
                            if (((u32)((a0_1 + -5)) < (u32)(2))) {
                                return 1;
                            } else {
                                return 0;
                            }
                        } else {
                            return 1;
                        }
                    } else {
                        return 0;
                    }
                } else {
                    return 1;
                }
            } else {
                if ((a0_1 != 0x1b)) {
                    if (((s32)(((s32)(a0_1) < (s32)(0x1c))) != 0)) {
                        if ((a0_1 != 0x19)) {
                            return 0;
                        } else {
                            return 1;
                        }
                    } else {
                        if (((u32)((a0_1 + -0xc8)) < (u32)(2))) {
                            return 1;
                        } else {
                            return 0;
                        }
                    }
                } else {
                    return 1;
                }
            }
        } else {
            return 0;
        }
    } else {
        return 1;
    }
}

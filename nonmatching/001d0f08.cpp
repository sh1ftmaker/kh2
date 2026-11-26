// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00179c08(u32, u32) asm("func_00179c08");
extern "C" u32 func_0017a538(u32) asm("func_0017a538");
extern "C" u32 func_0019c218(u32, u32) asm("func_0019c218");
extern "C" u32 func_001b6b10(u32, u32) asm("func_001b6b10");
extern "C" u32 func_001b6c20(u32) asm("func_001b6c20");
extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");
extern "C" u32 func_001bc2a8(u32, u32, u32) asm("func_001bc2a8");
extern "C" u32 func_001c8ab0() asm("func_001c8ab0");
extern "C" u32 func_001d1408(u32) asm("func_001d1408");
extern "C" void func_001788b8(u32) asm("func_001788b8");

// 0x001d0f08 func_001d0f08
void func_001d0f08(u32 a0) asm("_ZN2YS4SORA9_OVR_execEv");
void func_001d0f08(u32 a0) {
    u32 v0;
    func_001788b8(a0);
    if (((*(u32*)((a0 + 0x7f8)) & 4) == 0)) {
        if ((*(u32*)((a0 + 0xaec)) == 0)) {
            if (((*(u32*)((a0 + 0x160)) & 0x4000) == 0)) {
                if (((s32)(*(u32*)((a0 + 0x48c))) != 0)) {
                    if ((*(f32*)((*(u32*)((a0 + 0x48c)) + 0x1b4)) <= 0.0f)) {
                        if ((func_0017a538(a0) != 0)) {
                            if ((func_00179c08(a0, func_001b8e88(5)) != 0)) {
                                func_001b6b10(a0, 0);
                                return;
                            } else {
                                return;
                            }
                        } else {
                            if (((s32)((*(u32*)((a0 + 0xb50)) ^ 0xc)) == 0)) {
                                v0 = func_001b8e88(5);
                                if (((s32)(func_0019c218(a0, v0)) != 0)) {
                                    if (((((s32)(func_001bc2a8(v0, a0, 0)) < (s32)(4)) & 0xff) != 0)) {
                                        func_001b6c20(a0);
                                        return;
                                    } else {
                                        return;
                                    }
                                } else {
                                    return;
                                }
                            } else {
                                if ((func_001c8ab0() == 2)) {
                                    if ((func_00179c08(a0, func_001b8e88(0x13c)) != 0)) {
                                        func_001d1408(a0);
                                        return;
                                    } else {
                                        return;
                                    }
                                } else {
                                    return;
                                }
                            }
                        }
                    } else {
                        return;
                    }
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}

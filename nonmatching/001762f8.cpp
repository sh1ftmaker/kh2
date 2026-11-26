// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00186148(u32, u32) asm("func_00186148");
extern "C" u32 func_0018ca48(u32) asm("func_0018ca48");
extern "C" void func_0013de08(u32) asm("func_0013de08");
extern "C" void func_0013de58(u32) asm("func_0013de58");
extern "C" void func_0013dea8(u32) asm("func_0013dea8");
extern "C" void func_00186d48(u32, u32) asm("func_00186d48");
extern "C" void func_001c20e8(u32, u32, u32) asm("func_001c20e8");

// 0x001762f8 YS::PARTY::_OVR_exec_damage(YS::DAMAGE*)
void lift_001762f8(u32 a0, u32 a1) asm("_ZN2YS5PARTY16_OVR_exec_damageEPNS_6DAMAGEE");
void lift_001762f8(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)((*(u32*)((a0 + 0x7f8)) & 4)) == 0)) {
        if (((s32)(((u32(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 0x60))))(a0, a1)) != 0)) {
            if (((s32)((((u32)((*(u8*)((*(u32*)((a1 + 0x20)) + 4)) + -5)) < (u32)(2)) & 0xff)) != 0)) {
                func_001c20e8((*(u32*)((a0 + 0xabc)) | *(u32*)(((a0 + 0xabc) + 4))) & ~((0 | *(u32*)(((a0 + 0xabc) + 8)))), a1, a0);
                func_00186d48(a0, a1);
                if (((((u32)((*(u8*)((*(u32*)((a1 + 0x20)) + 4)) + -5)) < (u32)(2)) & 0xff) == 0)) {
                    if (((s32)((*(u32*)((a0 + 0x7f8)) & 4)) == 0)) {
                        v0 = func_0018ca48(*(u8*)((a1 + 0x26)));
                        if ((v0 != 3)) {
                            if (((s32)(((s32)(v0) < (s32)(4))) != 0)) {
                                if ((v0 != 0) || ((s32)(*(u32*)((a1 + 0x28))) > 0)) {
                                    func_0013de08(a0);
                                }
                            } else {
                                if ((v0 == 4)) {
                                    func_0013dea8(a0);
                                } else {
                                    func_0013de08(a0);
                                }
                            }
                        } else {
                            func_0013de58(a0);
                        }
                    } else {
                        func_0013dea8(a0);
                    }
                }
                ((void(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 0x68))))(a0, a1);
                func_00186148(a0, a1);
                return;
            } else {
                return;
            }
        } else {
            func_001c20e8((*(u32*)((a0 + 0xabc)) | *(u32*)(((a0 + 0xabc) + 4))) & ~((0 | *(u32*)(((a0 + 0xabc) + 8)))), a1, a0);
            func_00186d48(a0, a1);
            if (((((u32)((*(u8*)((*(u32*)((a1 + 0x20)) + 4)) + -5)) < (u32)(2)) & 0xff) == 0)) {
                if (((s32)((*(u32*)((a0 + 0x7f8)) & 4)) == 0)) {
                    v0_0 = func_0018ca48(*(u8*)((a1 + 0x26)));
                    if ((v0_0 != 3)) {
                        if (((s32)(((s32)(v0_0) < (s32)(4))) != 0)) {
                            if ((v0_0 != 0) || ((s32)(*(u32*)((a1 + 0x28))) > 0)) {
                                func_0013de08(a0);
                            }
                        } else {
                            if ((v0_0 == 4)) {
                                func_0013dea8(a0);
                            } else {
                                func_0013de08(a0);
                            }
                        }
                    } else {
                        func_0013de58(a0);
                    }
                } else {
                    func_0013dea8(a0);
                }
            }
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 0x68))))(a0, a1);
            func_00186148(a0, a1);
            return;
        }
    } else {
        if (((s32)((((u32)((*(u8*)((*(u32*)((a1 + 0x20)) + 4)) + -5)) < (u32)(2)) & 0xff)) != 0)) {
            func_001c20e8((*(u32*)((a0 + 0xabc)) | *(u32*)(((a0 + 0xabc) + 4))) & ~((0 | *(u32*)(((a0 + 0xabc) + 8)))), a1, a0);
            func_00186d48(a0, a1);
            if (((((u32)((*(u8*)((*(u32*)((a1 + 0x20)) + 4)) + -5)) < (u32)(2)) & 0xff) == 0)) {
                if (((s32)((*(u32*)((a0 + 0x7f8)) & 4)) == 0)) {
                    v0_1 = func_0018ca48(*(u8*)((a1 + 0x26)));
                    if ((v0_1 != 3)) {
                        if (((s32)(((s32)(v0_1) < (s32)(4))) != 0)) {
                            if ((v0_1 != 0) || ((s32)(*(u32*)((a1 + 0x28))) > 0)) {
                                func_0013de08(a0);
                            }
                        } else {
                            if ((v0_1 == 4)) {
                                func_0013dea8(a0);
                            } else {
                                func_0013de08(a0);
                            }
                        }
                    } else {
                        func_0013de58(a0);
                    }
                } else {
                    func_0013dea8(a0);
                }
            }
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 0x68))))(a0, a1);
            func_00186148(a0, a1);
            return;
        } else {
            return;
        }
    }
}

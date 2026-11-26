// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002b726c(u32, u32, u32, u32, u32) asm("func_002b726c");
extern "C" u32 func_002b72e4(u32, u32, u32) asm("func_002b72e4");
extern "C" u32 func_002b7334(u32, u32, u32, u32, u32) asm("func_002b7334");
extern "C" u32 func_002b73ac(u32, u32, u32, u32, u32) asm("func_002b73ac");
extern "C" u32 func_002bb510(u32) asm("func_002bb510");
extern "C" u32 func_002bb8b0(u32) asm("func_002bb8b0");
extern "C" u32 func_002bc358(u32, u32) asm("func_002bc358");
extern "C" void func_002bb5f8(u32) asm("func_002bb5f8");
extern "C" void func_002bb950(u32) asm("func_002bb950");

// 0x002bb9b8 func_002bb9b8
void func_002bb9b8(u32 a0) asm("_ZN4SE3D6calcSeEv");
void func_002bb9b8(u32 a0) {
    u32 t6;
    u32 t7;
    u32 t6_0;
    u32 s1;
    u32 v0;
    u32 s1_1;
    u32 s1_2;
    u32 t6_3;
    u32 s1_4;
    u32 v0_5;
    u32 s1_6;
    u32 s1_7;
    u32 t6_8;
    t6 = *(u8*)((a0 + 0x30));
    if ((t6 != 1)) {
        if (((s32)(t6) >= (s32)(2))) {
            if ((t6 != 2)) {
                if ((t6 != 3)) {
                    return;
                } else {
                    func_002bc358(*(u32*)((a0 + 0x14)), 1);
                    return;
                }
            } else {
                t7 = *(u32*)((a0 + 0x24));
                if (((t7 & 2) != 0)) {
                    if ((func_002bb510(a0) != 0)) {
                        t6_0 = *(u8*)((a0 + 0x31));
                        if ((t6_0 != 2)) {
                            if (((s32)(((s32)(t6_0) < (s32)(3))) != 0)) {
                                if ((t6_0 != 1)) {
                                    func_002bb5f8(a0);
                                }
                                s1 = func_002bb8b0(a0);
                                func_002b7334(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), func_002bb8b0(a0), *(s16*)((a0 + 0x2c)));
                                return;
                            } else {
                                if ((t6_0 != 3)) {
                                    if ((t6_0 == 4)) {
                                        func_002bb950(a0);
                                        v0 = func_002bb8b0(a0);
                                        if (((s32)(v0) == 0)) {
                                            if ((func_002bb510(a0) != 0)) {
                                                func_002b72e4(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)));
                                                return;
                                            } else {
                                                return;
                                            }
                                        } else {
                                            if (((s32)(func_002bb510(a0)) == 0)) {
                                                func_002b726c(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), v0, *(s16*)((a0 + 0x2c)));
                                                return;
                                            } else {
                                                func_002b7334(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), v0, *(s16*)((a0 + 0x2c)));
                                                return;
                                            }
                                        }
                                    } else {
                                        func_002bb5f8(a0);
                                        s1_1 = func_002bb8b0(a0);
                                        func_002b7334(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), func_002bb8b0(a0), *(s16*)((a0 + 0x2c)));
                                        return;
                                    }
                                } else {
                                    s1_2 = func_002bb8b0(a0);
                                    func_002b7334(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), func_002bb8b0(a0), *(s16*)((a0 + 0x2c)));
                                    return;
                                }
                            }
                        } else {
                            func_002b73ac(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), func_002bb8b0(a0), 0x1e);
                            return;
                        }
                    } else {
                        func_002bc358(*(u32*)((a0 + 0x14)), 1);
                        return;
                    }
                } else {
                    t6_3 = *(u8*)((a0 + 0x31));
                    if ((t6_3 != 2)) {
                        if (((s32)(((s32)(t6_3) < (s32)(3))) != 0)) {
                            if ((t6_3 != 1)) {
                                func_002bb5f8(a0);
                            }
                            s1_4 = func_002bb8b0(a0);
                            func_002b7334(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), func_002bb8b0(a0), *(s16*)((a0 + 0x2c)));
                            return;
                        } else {
                            if ((t6_3 != 3)) {
                                if ((t6_3 == 4)) {
                                    func_002bb950(a0);
                                    v0_5 = func_002bb8b0(a0);
                                    if (((s32)(v0_5) == 0)) {
                                        if ((func_002bb510(a0) != 0)) {
                                            func_002b72e4(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)));
                                            return;
                                        } else {
                                            return;
                                        }
                                    } else {
                                        if (((s32)(func_002bb510(a0)) == 0)) {
                                            func_002b726c(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), v0_5, *(s16*)((a0 + 0x2c)));
                                            return;
                                        } else {
                                            func_002b7334(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), v0_5, *(s16*)((a0 + 0x2c)));
                                            return;
                                        }
                                    }
                                } else {
                                    func_002bb5f8(a0);
                                    s1_6 = func_002bb8b0(a0);
                                    func_002b7334(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), func_002bb8b0(a0), *(s16*)((a0 + 0x2c)));
                                    return;
                                }
                            } else {
                                s1_7 = func_002bb8b0(a0);
                                func_002b7334(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), func_002bb8b0(a0), *(s16*)((a0 + 0x2c)));
                                return;
                            }
                        }
                    } else {
                        func_002b73ac(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), func_002bb8b0(a0), 0x1e);
                        return;
                    }
                }
            }
        } else {
            return;
        }
    } else {
        t6_8 = *(u8*)((a0 + 0x31));
        if (((s32)(t6_8) != 0)) {
            if (((s32)(((s32)(t6_8) < (s32)(4))) == 0)) {
                if ((t6_8 == 4)) {
                    func_002bb950(a0);
                } else {
                    func_002bb5f8(a0);
                }
            }
        } else {
            func_002bb5f8(a0);
        }
        func_002b726c(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), func_002bb8b0(a0), *(s16*)((a0 + 0x2c)));
        *(u8*)((a0 + 0x30)) = 2;
        return;
    }
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001cebb0(u32) asm("func_001cebb0");
extern "C" u32 func_002bea88(u32) asm("func_002bea88");
extern "C" u32 func_002d1270(u32, u32) asm("func_002d1270");
extern "C" u32 func_002d6f28(u32, u32) asm("func_002d6f28");
extern "C" u32 func_002dc278(u32, u32) asm("func_002dc278");
extern "C" u32 func_002e0bb0(u32) asm("func_002e0bb0");
extern "C" u32 func_002e1f40(u32) asm("func_002e1f40");

// 0x001d7218 func_001d7218
void func_001d7218(u32 a0) asm("_ZN2YS7MISSION11OptionStartEi");
void func_001d7218(u32 a0) {
    if ((a0 != 0x3c)) {
        if (((s32)(((s32)(a0) < (s32)(0x3d))) != 0)) {
            if ((a0 != 0xc)) {
                if (((s32)(((s32)(a0) < (s32)(0xd))) != 0)) {
                    if ((a0 != 4)) {
                        if (((s32)(((s32)(a0) < (s32)(5))) != 0)) {
                            if ((a0 != 3)) {
                                return;
                            } else {
                                func_002d1270(1, 0);
                                return;
                            }
                        } else {
                            if ((a0 == 5)) {
                                func_002dc278(1, 0);
                                return;
                            } else {
                                return;
                            }
                        }
                    } else {
                        func_002d6f28(1, 0);
                        return;
                    }
                } else {
                    if ((a0 != 0x3a)) {
                        if (((s32)(((s32)(a0) < (s32)(0x3b))) != 0)) {
                            if (((s32)(((u32)((a0 + -0x32)) < (u32)(3))) != 0)) {
                                func_001cebb0(a0);
                                return;
                            } else {
                                return;
                            }
                        } else {
                            func_002d6f28(0, 0);
                            return;
                        }
                    } else {
                        func_002d1270(0, 0);
                        return;
                    }
                }
            } else {
                func_002bea88(a0);
                return;
            }
        } else {
            if ((a0 != 0x101)) {
                if (((s32)(((s32)(a0) < (s32)(0x102))) != 0)) {
                    if ((a0 != 0xff)) {
                        if (((s32)(((s32)(a0) < (s32)(0x100))) != 0)) {
                            if ((a0 == 0xe2)) {
                                func_002e0bb0(0);
                                return;
                            } else {
                                return;
                            }
                        } else {
                            func_002d6f28(2, 0);
                            return;
                        }
                    } else {
                        func_002d1270(2, 0);
                        return;
                    }
                } else {
                    if ((a0 != 0x136)) {
                        if (((s32)(((s32)(a0) < (s32)(0x137))) != 0)) {
                            if ((a0 == 0x10f)) {
                                func_002e1f40(0);
                                return;
                            } else {
                                return;
                            }
                        } else {
                            if ((a0 == 0x15d)) {
                                func_002dc278(2, 0);
                                return;
                            } else {
                                if ((a0 == 0x16f)) {
                                    func_002e0bb0(0);
                                    return;
                                } else {
                                    return;
                                }
                            }
                        }
                    } else {
                        func_002e1f40(0);
                        return;
                    }
                }
            } else {
                func_002dc278(2, 0);
                return;
            }
        }
    } else {
        func_002dc278(0, 0);
        return;
    }
}

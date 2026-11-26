// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032f054 asm("D_0032f054");
extern "C" u32 D_004f63a0 asm("D_004f63a0");
extern "C" u32 D_004f63a8 asm("D_004f63a8");
extern "C" u32 D_004f63ac asm("D_004f63ac");
extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" u32 func_0016eb48(u32, u32, u32, u32) asm("func_0016eb48");
extern "C" u32 func_0016ef28(u32) asm("func_0016ef28");
extern "C" u32 func_0016f6f8(u32, u32, u32) asm("func_0016f6f8");
extern "C" u32 func_0016f770(u32) asm("func_0016f770");
extern "C" u32 func_001d1438(u32, u32, u32) asm("func_001d1438");

// 0x0016ed50 YS::OBJENTRY::ReadRequest(unsigned int, int, int)
u32 lift_0016ed50(u32 a0, u32 a1, u32 a2) asm("_ZN2YS8OBJENTRY11ReadRequestEjii");
u32 lift_0016ed50(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    u32 v0_12;
    u32 v0_13;
    u32 v0_14;
    u32 v0_15;
    u32 v0_16;
    if ((a0 != 0x238)) {
        if (((s32)(((u32)(a0) < (u32)(0x239))) != 0)) {
            if ((a0 != 0x236)) {
                if ((a0 != 0x237)) {
                    if (((s32)(func_0016f6f8(a0, a1, 5)) == 0)) {
                        if (((s32)(func_0016f770(a0)) == 0)) {
                            if ((a2 == 0x1e)) {
                                v0 = func_0016e920(a0);
                                if (((s32)(v0) != 0)) {
                                    if ((*(u8*)((v0 + 4)) != 1)) {
                                        if (((s32)(((s32)(*(u8*)((v0 + 4))) < (s32)(2))) != 0)) {
                                            if (((s32)(*(u8*)((v0 + 4))) == 0)) {
                                                *(u32*)(&D_004f63a0) = a0;
                                                a2 = 4;
                                            }
                                        } else {
                                            if ((*(u8*)((v0 + 4)) == 0x13)) {
                                                a2 = 7;
                                            }
                                        }
                                    } else {
                                        a2 = 5;
                                    }
                                    if ((a1 != 0x96a)) {
                                        if ((a1 == 0x974)) {
                                            *(u32*)(&D_004f63ac) = a0;
                                        }
                                    } else {
                                        *(u32*)(&D_004f63a8) = a0;
                                    }
                                    v0_0 = func_0016eb48(a0, a1, a2, 0xffffffff);
                                    v0 = v0_0;
                                }
                                v0_2 = v0;
                            } else {
                                if ((a1 != 0x96a)) {
                                    if ((a1 == 0x974)) {
                                        *(u32*)(&D_004f63ac) = a0;
                                    }
                                } else {
                                    *(u32*)(&D_004f63a8) = a0;
                                }
                                v0_1 = func_0016eb48(a0, a1, a2, 0xffffffff);
                                v0_2 = v0_1;
                            }
                            v0_4 = v0_2;
                        } else {
                            if ((a1 != 0x96a)) {
                                if ((a1 == 0x974)) {
                                    *(u32*)(&D_004f63ac) = a0;
                                }
                            } else {
                                *(u32*)(&D_004f63a8) = a0;
                            }
                            v0_3 = func_0016eb48(a0, a1, a2, 0xffffffff);
                            v0_4 = v0_3;
                        }
                        v0_6 = v0_4;
                    } else {
                        if ((a1 != 0x96a)) {
                            if ((a1 == 0x974)) {
                                *(u32*)(&D_004f63ac) = a0;
                            }
                        } else {
                            *(u32*)(&D_004f63a8) = a0;
                        }
                        v0_5 = func_0016eb48(a0, a1, a2, 0xffffffff);
                        v0_6 = v0_5;
                    }
                    return v0_6;
                } else {
                    return func_0016eb48(a0, a1, 5, 0xffffffff);
                }
            } else {
                if (((s32)(*(u32*)(&D_004f63a0)) == 0)) {
                    v0_7 = func_0016e920(func_001d1438(0, a1, 4));
                    v0_8 = func_0016eb48(*(u32*)(v0_7), a1, 4, 7);
                    if (((s32)(((s32)(*(s8*)((v0_7 + 0x57))) < (s32)(7))) != 0)) {
                        if (((s32)(*(u8*)(&D_0032f054)) != 0)) {
                            return func_0016ef28(*(u8*)(&D_0032f054));
                        } else {
                            return v0_8;
                        }
                    } else {
                        return v0_8;
                    }
                } else {
                    return func_0016eb48(*(u32*)(&D_004f63a0), a1, 4, 0xffffffff);
                }
            }
        } else {
            if ((a0 != 0x319)) {
                if ((a0 == 0x31a)) {
                    return func_0016eb48(0x20000238, a1, 6, 0xffffffff);
                } else {
                    if (((s32)(func_0016f6f8(a0, a1, a2)) == 0)) {
                        if (((s32)(func_0016f770(a0)) == 0)) {
                            if ((a2 == 0x1e)) {
                                v0_9 = func_0016e920(a0);
                                if (((s32)(v0_9) != 0)) {
                                    if ((*(u8*)((v0_9 + 4)) != 1)) {
                                        if (((s32)(((s32)(*(u8*)((v0_9 + 4))) < (s32)(2))) != 0)) {
                                            if (((s32)(*(u8*)((v0_9 + 4))) == 0)) {
                                                *(u32*)(&D_004f63a0) = a0;
                                                a2 = 4;
                                            }
                                        } else {
                                            if ((*(u8*)((v0_9 + 4)) == 0x13)) {
                                                a2 = 7;
                                            }
                                        }
                                    } else {
                                        a2 = 5;
                                    }
                                    if ((a1 != 0x96a)) {
                                        if ((a1 == 0x974)) {
                                            *(u32*)(&D_004f63ac) = a0;
                                        }
                                    } else {
                                        *(u32*)(&D_004f63a8) = a0;
                                    }
                                    v0_10 = func_0016eb48(a0, a1, a2, 0xffffffff);
                                    v0_9 = v0_10;
                                }
                                v0_12 = v0_9;
                            } else {
                                if ((a1 != 0x96a)) {
                                    if ((a1 == 0x974)) {
                                        *(u32*)(&D_004f63ac) = a0;
                                    }
                                } else {
                                    *(u32*)(&D_004f63a8) = a0;
                                }
                                v0_11 = func_0016eb48(a0, a1, a2, 0xffffffff);
                                v0_12 = v0_11;
                            }
                            v0_14 = v0_12;
                        } else {
                            if ((a1 != 0x96a)) {
                                if ((a1 == 0x974)) {
                                    *(u32*)(&D_004f63ac) = a0;
                                }
                            } else {
                                *(u32*)(&D_004f63a8) = a0;
                            }
                            v0_13 = func_0016eb48(a0, a1, a2, 0xffffffff);
                            v0_14 = v0_13;
                        }
                        v0_16 = v0_14;
                    } else {
                        if ((a1 != 0x96a)) {
                            if ((a1 == 0x974)) {
                                *(u32*)(&D_004f63ac) = a0;
                            }
                        } else {
                            *(u32*)(&D_004f63a8) = a0;
                        }
                        v0_15 = func_0016eb48(a0, a1, a2, 0xffffffff);
                        v0_16 = v0_15;
                    }
                    return v0_16;
                }
            } else {
                return func_0016eb48(0x20000237, a1, 5, 0xffffffff);
            }
        }
    } else {
        return func_0016eb48(a0, a1, 6, 0xffffffff);
    }
}

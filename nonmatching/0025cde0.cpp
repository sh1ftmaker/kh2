// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f640 asm("D_0035f640");
extern "C" u32 D_0035f644 asm("D_0035f644");
extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 D_0035f650 asm("D_0035f650");
extern "C" u32 D_0035f664 asm("D_0035f664");
extern "C" u32 D_0035f66c asm("D_0035f66c");
extern "C" u32 D_0035f670 asm("D_0035f670");
extern "C" u32 D_0035f67c asm("D_0035f67c");
extern "C" u32 D_00372ec0 asm("D_00372ec0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_0025d560() asm("func_0025d560");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287c10() asm("func_00287c10");
extern "C" u32 func_00287cd0(u32, u32, u32) asm("func_00287cd0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289358(u32) asm("func_00289358");
extern "C" u32 func_0028acb8(u32) asm("func_0028acb8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028cf10(u32) asm("func_0028cf10");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" u32 func_0028d620(u32) asm("func_0028d620");
extern "C" u32 func_0028d6e8(u32) asm("func_0028d6e8");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" void func_00263d28() asm("func_00263d28");
extern "C" void func_00289038(u32, u32, u32, u32, u32, u32, u32) asm("func_00289038");
extern "C" void func_002890e0(u32, u32, u32, u32, u32) asm("func_002890e0");
extern "C" void func_0028aa40(u32) asm("func_0028aa40");
extern "C" void func_0028cc78(u32, u32, u32, u32, u32, u32) asm("func_0028cc78");
extern "C" void func_0028cdb8(u32) asm("func_0028cdb8");
extern "C" void func_0028ce38() asm("func_0028ce38");
extern "C" void func_0028ce98(u32, u32) asm("func_0028ce98");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");
extern "C" void func_0028d1c0(u32, u32, u32, u32, u32, u32, u32) asm("func_0028d1c0");
extern "C" void func_0028d5d0(u32, u32) asm("func_0028d5d0");
extern "C" void func_0028d660(u32, u32) asm("func_0028d660");
extern "C" void func_0028f7a0() asm("func_0028f7a0");
extern "C" void func_0028ffe8(u32, u32) asm("func_0028ffe8");
extern "C" void func_00290508(u32, u32) asm("func_00290508");
extern "C" void func_002b4ee0() asm("func_002b4ee0");
extern "C" void func_002b5558() asm("func_002b5558");
extern "C" void func_002b5c30(u32) asm("func_002b5c30");
extern "C" void func_002b6418() asm("func_002b6418");

// 0x0025cde0 func_0025cde0
void func_0025cde0() asm("_ZN2Tz6CmSave4DrawEv");
void func_0025cde0() {
    u32 s1;
    u32 a1_0;
    u32 s2;
    u32 s3;
    u32 s3_1;
    u32 a0_2;
    u32 a1_3;
    u32 a2_4;
    u32 v0;
    u32 a0_5;
    u32 a1_6;
    u32 a2_7;
    u32 s0;
    u32 a0_8;
    u32 a1_9;
    u32 a2_10;
    u32 a1_11;
    u32 a1_12;
    u32 a1_13;
    u32 a1_14;
    u32 a1_15;
    u32 a1_16;
    u32 a0_17;
    u32 a1_18;
    u32 a2_19;
    u32 s0_20;
    u32 a0_21;
    u32 a1_22;
    u32 a2_23;
    u32 s0_24;
    u32 a0_25;
    u32 a1_26;
    u32 a2_27;
    u32 a1_28;
    u32 a1_29;
    u32 a1_30;
    u32 a1_31;
    u32 a1_32;
    u32 a1_33;
    u32 a0_34;
    u32 a1_35;
    u32 a2_36;
    u32 s0_37;
    u32 a0_38;
    u32 a1_39;
    u32 a2_40;
    u32 s0_41;
    s1 = func_00287bc0();
    if (((s32)(func_00287db0()) != 0)) {
        if ((func_00139d78(*(u32*)(&D_0035f664)) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035f664)) != 2)) {
                func_0023f070(*(u32*)(&D_0035f664), 2, 0xffffffff);
            }
        }
        if ((func_0028acc8(*(u32*)(&D_0035f64c)) != 0)) {
            if ((func_0028acb8(*(u32*)(&D_0035f64c)) == 0)) {
                func_0028aa40(*(u32*)(&D_0035f64c));
            }
        }
        if (((s32)(func_0028acc8(*(u32*)(&D_0035f650))) != 0)) {
            if (((s32)(func_0028acb8(*(u32*)(&D_0035f650))) == 0)) {
                func_0028aa40(*(u32*)(&D_0035f650));
            }
        }
        func_002b4ee0();
        func_002b5558();
        func_0028f7a0();
        func_0028d5d0(*(u32*)(&D_0035f67c), a1_0);
        func_00263d28();
        func_0028ffe8(*(u32*)(&D_0035f66c), 1);
        func_00290508(*(u32*)(&D_0035f670), 1);
        func_0028ce38();
    }
    func_002b6418();
    if ((func_00287db0() == 0)) {
        switch (s1) {
        case 0:
        case 1:
        case 12:
            s2 = *(u32*)(&D_0035f64c);
            break;
        case 5:
        case 7:
        case 8:
        case 10:
        case 13:
        case 19:
        case 22:
            s2 = *(u32*)(&D_0035f650);
            break;
        case 2:
        case 3:
        case 4:
        case 6:
        case 9:
        case 11:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 20:
        case 21:
        default:
            s2 = 0;
            break;
        }
        if (((s32)(s2) == 0)) {
            if ((s1 != 0xf)) {
                if ((s1 != 9)) {
                    if ((s1 != 0x14)) {
                        if ((s1 == 0xe)) {
                            if (((s32)(func_0028d008(1)) == 0)) {
                                func_0028cdb8(1);
                            }
                            if (((s32)(func_0028d008(0)) == 0)) {
                                func_0028cc78(0, 0, 0, *(u32*)(&D_0035f664), 0xc, 0xa);
                                func_0028cf28(0, func_002891d0(*(u32*)(&D_0035f64c)));
                                func_0028ce98(0, 1);
                            } else {
                                if ((func_0028cf10(0) != 1)) {
                                    func_0028ce98(0, 1);
                                }
                            }
                        } else {
                            func_0028ce38();
                        }
                    } else {
                        if (((s32)(func_0028d008(1)) == 0)) {
                            func_0028cdb8(1);
                        }
                        if (((s32)(func_0028d008(0)) == 0)) {
                            func_0028cc78(0, 0, 0, *(u32*)(&D_0035f664), 0xc, 0xa);
                            func_0028cf28(0, func_002891d0(*(u32*)(&D_0035f64c)));
                            func_0028ce98(0, 1);
                        } else {
                            if ((func_0028cf10(0) != 1)) {
                                func_0028ce98(0, 1);
                            }
                        }
                    }
                } else {
                    if (((s32)(func_0028d008(1)) == 0)) {
                        func_0028cdb8(1);
                    }
                    if (((s32)(func_0028d008(0)) == 0)) {
                        func_0028cc78(0, 0, 0, *(u32*)(&D_0035f664), 0xc, 0xa);
                        func_0028cf28(0, func_002891d0(*(u32*)(&D_0035f64c)));
                        func_0028ce98(0, 1);
                    } else {
                        if ((func_0028cf10(0) != 1)) {
                            func_0028ce98(0, 1);
                        }
                    }
                }
            } else {
                if (((s32)(func_0028d008(1)) == 0)) {
                    func_0028cdb8(1);
                }
                if (((s32)(func_0028d008(0)) == 0)) {
                    func_0028cc78(0, 0, 0, *(u32*)(&D_0035f664), 0xc, 0xa);
                    func_0028cf28(0, func_002891d0(*(u32*)(&D_0035f64c)));
                    func_0028ce98(0, 1);
                } else {
                    if ((func_0028cf10(0) != 1)) {
                        func_0028ce98(0, 1);
                    }
                }
            }
            func_0028d620(*(u32*)(&D_0035f67c));
            return;
        } else {
            if ((s2 != *(u32*)(&D_0035f64c))) {
                if ((func_0028acc8(*(u32*)(&D_0035f64c)) != 0)) {
                    s3 = 1;
                } else {
                    s3 = 0;
                }
                s3_1 = s3;
            } else {
                s3_1 = 0;
            }
            if (((s32)(func_0028acc8(s2)) != 0)) {
                v0 = func_00287cd0(a0_2, a1_3, a2_4);
                if ((v0 == 1)) {
                    if (((s32)(func_0028d008(s3_1)) == 0)) {
                        func_0028cc78(s3_1, 0, 0, *(u32*)(&D_0035f664), 0xc, 0xa);
                        func_0028cf28(s3_1, func_002891d0(s2));
                        if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) == 0)) {
                            func_0028d1c0(*(u32*)(&D_0035f67c), 0x7571, 0, 0, *(u32*)(&D_0035f664), (u32)&D_00372ec0, 0);
                        }
                        if (((s32)(s3_1) != 0)) {
                            if (((s32)(func_0028d008(0)) == 0)) {
                                func_0028cc78(0, *(u32*)(&D_0035f644), *(u32*)(&D_0035f640), *(u32*)(&D_0035f664), 0xc, 0xa);
                                func_0028cf28(0, func_002891d0(*(u32*)(&D_0035f64c)));
                            }
                            func_0028ce98(0, 1);
                        }
                        func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(s2));
                    } else {
                        if ((func_0028cf10(s3_1) == v0)) {
                            func_0028ce98(s3_1, 0);
                        }
                        if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) == 0)) {
                            func_0028d1c0(*(u32*)(&D_0035f67c), 0x7571, 0, 0, *(u32*)(&D_0035f664), (u32)&D_00372ec0, 0);
                            func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(s2));
                        }
                    }
                    if (((s32)(s3_1) != 0)) {
                        if (((s32)(func_0028acc8(s2)) != 0)) {
                            if (((s32)(func_00287cd0(a0_5, a1_6, a2_7)) == 0)) {
                                if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                    s0 = *(u32*)((*(u32*)(&D_0035f67c) + 0x18c));
                                    if ((s0 != func_002891d0(s2))) {
                                        func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(s2));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((func_00287cd0(a0_8, a1_9, a2_10) == 2)) {
                        if ((s1 != 0xd)) {
                            if ((s1 == 8)) {
                                if ((func_00287c10() != 0xc)) {
                                    if (((s32)(func_0028d008(s3_1)) != 0)) {
                                        func_0028cdb8(s3_1);
                                    }
                                    if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                        func_0028d5d0(*(u32*)(&D_0035f67c), a1_11);
                                    }
                                } else {
                                    if (((s32)(func_0028d008(s3_1)) != 0)) {
                                        func_0028cdb8(s3_1);
                                        if (((s32)(s3_1) != 0)) {
                                            func_0028ce98(0, 0);
                                            func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                        } else {
                                            func_0028d5d0(*(u32*)(&D_0035f67c), 0);
                                        }
                                    } else {
                                        if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                            if (((s32)(s3_1) != 0)) {
                                                func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                            } else {
                                                func_0028d5d0(*(u32*)(&D_0035f67c), a1_12);
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (((s32)(func_0028d008(s3_1)) != 0)) {
                                    func_0028cdb8(s3_1);
                                    if (((s32)(s3_1) != 0)) {
                                        func_0028ce98(0, 0);
                                        func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                    } else {
                                        func_0028d5d0(*(u32*)(&D_0035f67c), 0);
                                    }
                                } else {
                                    if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                        if (((s32)(s3_1) != 0)) {
                                            func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                        } else {
                                            func_0028d5d0(*(u32*)(&D_0035f67c), a1_13);
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((func_00287c10() != 0xc)) {
                                if (((s32)(func_0028d008(s3_1)) != 0)) {
                                    func_0028cdb8(s3_1);
                                }
                                if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                    func_0028d5d0(*(u32*)(&D_0035f67c), a1_14);
                                }
                            } else {
                                if (((s32)(func_0028d008(s3_1)) != 0)) {
                                    func_0028cdb8(s3_1);
                                    if (((s32)(s3_1) != 0)) {
                                        func_0028ce98(0, 0);
                                        func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                    } else {
                                        func_0028d5d0(*(u32*)(&D_0035f67c), 0);
                                    }
                                } else {
                                    if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                        if (((s32)(s3_1) != 0)) {
                                            func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                        } else {
                                            func_0028d5d0(*(u32*)(&D_0035f67c), a1_15);
                                        }
                                    }
                                }
                            }
                        }
                        if (((s32)(s3_1) != 0)) {
                            if (((s32)(func_0028acb8(*(u32*)(&D_0035f64c))) != 0)) {
                                if (((s32)(func_0028d008(0)) != 0)) {
                                    func_0028cdb8(0);
                                    func_0028d5d0(*(u32*)(&D_0035f67c), a1_16);
                                }
                            }
                            if (((s32)(s3_1) != 0)) {
                                if (((s32)(func_0028acc8(s2)) != 0)) {
                                    if (((s32)(func_00287cd0(a0_17, a1_18, a2_19)) == 0)) {
                                        if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                            s0_20 = *(u32*)((*(u32*)(&D_0035f67c) + 0x18c));
                                            if ((s0_20 != func_002891d0(s2))) {
                                                func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(s2));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (((s32)(s3_1) != 0)) {
                            if (((s32)(func_0028acc8(s2)) != 0)) {
                                if (((s32)(func_00287cd0(a0_21, a1_22, a2_23)) == 0)) {
                                    if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                        s0_24 = *(u32*)((*(u32*)(&D_0035f67c) + 0x18c));
                                        if ((s0_24 != func_002891d0(s2))) {
                                            func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(s2));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((func_00287cd0(a0_25, a1_26, a2_27) == 2)) {
                    if ((s1 != 0xd)) {
                        if ((s1 == 8)) {
                            if ((func_00287c10() != 0xc)) {
                                if (((s32)(func_0028d008(s3_1)) != 0)) {
                                    func_0028cdb8(s3_1);
                                }
                                if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                    func_0028d5d0(*(u32*)(&D_0035f67c), a1_28);
                                }
                            } else {
                                if (((s32)(func_0028d008(s3_1)) != 0)) {
                                    func_0028cdb8(s3_1);
                                    if (((s32)(s3_1) != 0)) {
                                        func_0028ce98(0, 0);
                                        func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                    } else {
                                        func_0028d5d0(*(u32*)(&D_0035f67c), 0);
                                    }
                                } else {
                                    if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                        if (((s32)(s3_1) != 0)) {
                                            func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                        } else {
                                            func_0028d5d0(*(u32*)(&D_0035f67c), a1_29);
                                        }
                                    }
                                }
                            }
                        } else {
                            if (((s32)(func_0028d008(s3_1)) != 0)) {
                                func_0028cdb8(s3_1);
                                if (((s32)(s3_1) != 0)) {
                                    func_0028ce98(0, 0);
                                    func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                } else {
                                    func_0028d5d0(*(u32*)(&D_0035f67c), 0);
                                }
                            } else {
                                if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                    if (((s32)(s3_1) != 0)) {
                                        func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                    } else {
                                        func_0028d5d0(*(u32*)(&D_0035f67c), a1_30);
                                    }
                                }
                            }
                        }
                    } else {
                        if ((func_00287c10() != 0xc)) {
                            if (((s32)(func_0028d008(s3_1)) != 0)) {
                                func_0028cdb8(s3_1);
                            }
                            if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                func_0028d5d0(*(u32*)(&D_0035f67c), a1_31);
                            }
                        } else {
                            if (((s32)(func_0028d008(s3_1)) != 0)) {
                                func_0028cdb8(s3_1);
                                if (((s32)(s3_1) != 0)) {
                                    func_0028ce98(0, 0);
                                    func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                } else {
                                    func_0028d5d0(*(u32*)(&D_0035f67c), 0);
                                }
                            } else {
                                if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                    if (((s32)(s3_1) != 0)) {
                                        func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(*(u32*)(&D_0035f64c)));
                                    } else {
                                        func_0028d5d0(*(u32*)(&D_0035f67c), a1_32);
                                    }
                                }
                            }
                        }
                    }
                    if (((s32)(s3_1) != 0)) {
                        if (((s32)(func_0028acb8(*(u32*)(&D_0035f64c))) != 0)) {
                            if (((s32)(func_0028d008(0)) != 0)) {
                                func_0028cdb8(0);
                                func_0028d5d0(*(u32*)(&D_0035f67c), a1_33);
                            }
                        }
                        if (((s32)(s3_1) != 0)) {
                            if (((s32)(func_0028acc8(s2)) != 0)) {
                                if (((s32)(func_00287cd0(a0_34, a1_35, a2_36)) == 0)) {
                                    if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                        s0_37 = *(u32*)((*(u32*)(&D_0035f67c) + 0x18c));
                                        if ((s0_37 != func_002891d0(s2))) {
                                            func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(s2));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((s32)(s3_1) != 0)) {
                        if (((s32)(func_0028acc8(s2)) != 0)) {
                            if (((s32)(func_00287cd0(a0_38, a1_39, a2_40)) == 0)) {
                                if (((s32)(func_0028d6e8(*(u32*)(&D_0035f67c))) != 0)) {
                                    s0_41 = *(u32*)((*(u32*)(&D_0035f67c) + 0x18c));
                                    if ((s0_41 != func_002891d0(s2))) {
                                        func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(s2));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            switch (s1) {
            case 0:
            case 1:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            case 13:
            case 19:
                if ((func_00287cd0(s2, s1, s3_1) == 1)) {
                    if (((s32)(func_00289310(s2)) != 0)) {
                        func_002890e0(s2, 1, 2, 0, 0xffffffff);
                        func_00289038(s2, func_002891e8(s2), 1, 1, 2, 0, 0xffffffff);
                        if ((s1 == 0xc)) {
                            if (((s32)(func_00289358(s2)) != 0)) {
                                func_002b5c30(0);
                            }
                        }
                        if (((s32)(func_0028d008(s3_1)) != 0)) {
                            func_0028cf28(s3_1, func_002891d0(s2));
                        }
                        if ((func_0028d6e8(*(u32*)(&D_0035f67c)) != 0)) {
                            func_0028d660(*(u32*)(&D_0035f67c), func_002891d0(s2));
                        }
                        func_0025d560();
                        return;
                    } else {
                        return;
                    }
                } else {
                    return;
                }
                break;
            case 2:
            case 3:
            case 4:
            case 6:
            case 9:
            case 11:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            default:
                return;
            }
        }
    } else {
        return;
    }
}

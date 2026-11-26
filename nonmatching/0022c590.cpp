// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035de84 asm("D_0035de84");
extern "C" u32 D_0035de88 asm("D_0035de88");
extern "C" u32 func_001dc7e8(u32) asm("func_001dc7e8");
extern "C" u32 func_001dc840(u32) asm("func_001dc840");
extern "C" u32 func_001dc920(u32) asm("func_001dc920");
extern "C" u32 func_001dc978(u32, f32) asm("func_001dc978");
extern "C" u32 func_001dc9d0(u32) asm("func_001dc9d0");
extern "C" u32 func_001dc9e0(u32) asm("func_001dc9e0");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" u32 func_0022c758(u32) asm("func_0022c758");

// 0x0022c590 func_0022c590
// minilink-rodata 0x003711a8   (float literals live here in the original)
void func_0022c590(u32 a0) asm("_ZN2sa5EVENT26set_bin_seq_mission_effectERNS_22BIN_SEQ_MISSION_EFFECTEP4TASK");
void func_0022c590(u32 a0) {
    if ((func_002282f0(*(s16*)((a0 + 4))) == 0)) {
        if ((func_00225b00(*(s16*)((a0 + 4))) == 0)) {
            if ((*(u32*)(&D_0035de84) != 0)) {
                if (((s32)(*(u32*)(*(u32*)(&D_0035de84))) != 0)) {
                    if ((*(s16*)((a0 + 8)) != 1)) {
                        if (((s32)(*(s16*)((a0 + 8))) < (s32)(2))) {
                            if ((*(s16*)((a0 + 8)) == 0)) {
                                *(u32*)(&D_0035de88) = func_001de168(*(u32*)(&D_0035de84), *(s16*)((a0 + 6)), 1, 3, 0x9c41, 0);
                            }
                            return;
                        } else {
                            if ((*(s16*)((a0 + 8)) != 2)) {
                                if ((*(s16*)((a0 + 8)) == 3)) {
                                    if ((*(u32*)(&D_0035de88) != 0)) {
                                        if ((func_0022c758(*(u32*)(&D_0035de84)) != 0)) {
                                            if ((func_001dc9d0(*(u32*)(&D_0035de88)) != 0)) {
                                                if ((func_001dc9e0(*(u32*)(&D_0035de88)) != 0)) {
                                                    func_001dc920(*(u32*)(&D_0035de88));
                                                    return;
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
                            } else {
                                if ((*(u32*)(&D_0035de88) != 0)) {
                                    if ((func_0022c758(*(u32*)(&D_0035de84)) != 0)) {
                                        if ((func_001dc9d0(*(u32*)(&D_0035de88)) != 0)) {
                                            if ((func_001dc9e0(*(u32*)(&D_0035de88)) != 0)) {
                                                func_001dc978(*(u32*)(&D_0035de88), 8.0f);
                                                return;
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
                        }
                    } else {
                        if ((*(u32*)(&D_0035de88) != 0)) {
                            if ((func_0022c758(*(u32*)(&D_0035de84)) != 0)) {
                                if ((func_001dc9d0(*(u32*)(&D_0035de88)) != 0)) {
                                    if ((func_001dc9e0(*(u32*)(&D_0035de88)) != 0)) {
                                        if ((func_001dc7e8(*(u32*)(&D_0035de88)) != 0)) {
                                            func_001dc840(*(u32*)(&D_0035de88));
                                            return;
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

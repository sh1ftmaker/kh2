// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" u32 func_001dc9f0(u32) asm("func_001dc9f0");
extern "C" u32 func_001dffd8(u32) asm("func_001dffd8");
extern "C" u32 func_002bc188(u32, u32) asm("func_002bc188");
extern "C" void func_001dee88(u32) asm("func_001dee88");
extern "C" void func_001df2c0(u32) asm("func_001df2c0");
extern "C" void func_001df670(u32) asm("func_001df670");
extern "C" void func_001df9c8(u32) asm("func_001df9c8");
extern "C" void func_001dfca8(u32, u32) asm("func_001dfca8");
extern "C" void func_001dfdb8(u32) asm("func_001dfdb8");
extern "C" void func_001dfe88(u32, u32) asm("func_001dfe88");
extern "C" void func_001e00b0(u32) asm("func_001e00b0");

// 0x001dfa38 func_001dfa38
void func_001dfa38(u32 a0) asm("_ZN3ryj3PAX7MANAGER4execEv");
void func_001dfa38(u32 a0) {
    u8 t7;
    u8 t7_0;
    if (((s32)((*(u32*)((a0 + 0x5c)) & 2)) != 0)) {
        func_001df2c0(a0);
    } else {
        if (((s32)((*(u32*)((a0 + 0x5c)) & 1)) != 0)) {
            if (((*(u32*)((a0 + 0x5c)) & 0x10) == 0)) {
                if ((*(f32*)((a0 + 0x4c)) <= 0.0f)) {
                    func_001df670(a0);
                    func_001dee88(a0);
                } else {
                    if (((s32)(func_001dc9f0(*(u32*)((a0 + 0x40)))) == 0)) {
                        if (((*(u32*)((a0 + 0x5c)) & 8) != 0)) {
                            if (((*(u16*)((*(u32*)((a0 + 0x58)) + 2)) & 2) == 0)) {
                                func_001dee88(a0);
                                func_001df670(a0);
                            }
                        } else {
                            if (((*(u32*)((*(u32*)((a0 + 0x44)) + 0x10)) & 2) == 0)) {
                                func_001dee88(a0);
                                func_001df670(a0);
                            }
                        }
                    } else {
                        func_001dee88(a0);
                        func_001df670(a0);
                    }
                }
            }
        }
    }
    if (((s32)((*(u32*)((*(u32*)((a0 + 0x44)) + 0x10)) & 8)) != 0)) {
        if (((s32)((*(u32*)((a0 + 0x5c)) & 1)) != 0)) {
            func_001dfca8(a0, 0);
        } else {
            func_001dfe88(a0, 0);
        }
    } else {
        if (((*(u32*)((*(u32*)((a0 + 0x44)) + 0x10)) & 0x10) != 0)) {
            if (((s32)((*(u32*)((a0 + 0x5c)) & 1)) != 0)) {
                func_001dfca8(a0, 1);
            } else {
                func_001dfe88(a0, 1);
            }
        }
    }
    if (((s32)((*(u32*)((*(u32*)((a0 + 0x44)) + 0x10)) & 0x800)) != 0)) {
        if (((s32)((*(u32*)((a0 + 0x5c)) & 1)) != 0)) {
            func_001dfdb8(a0);
        }
    }
    func_001e00b0(a0);
    if (((*(u32*)((a0 + 0x5c)) & 0x40) == 0)) {
        if ((*(f32*)((a0 + 0x50)) <= *(f32*)((a0 + 0x4c)))) {
            if (((s32)(*(u32*)((*(u32*)((a0 + 0x44)) + 0x18))) > 0)) {
                *(u32*)((a0 + 0x54)) = func_002bc188(*(u32*)((*(u32*)((a0 + 0x44)) + 0x18)), func_001dc5f8(*(u32*)((a0 + 0x40))));
                *(u32*)((a0 + 0x5c)) = (*(u32*)((a0 + 0x5c)) | 0x40);
            }
        }
    }
    if (((s32)(*(u32*)((a0 + 0x48))) != 0)) {
        if (((s32)((*(u32*)((a0 + 0x5c)) & 8)) == 0)) {
            if (((*(u32*)((a0 + 0x5c)) & 0x10) != 0)) {
                if (((s32)((*(u32*)((*(u32*)((a0 + 0x44)) + 0x10)) & 0x200)) == 0)) {
                    t7 = (((s32)(*(u32*)((*(u32*)((a0 + 0x40)) + 8))) >> 0x19) & 1);
                    if (((s32)(t7) == 0)) {
                        if (((s32)((*(u32*)((*(u32*)((a0 + 0x44)) + 0x10)) & 0x400)) != 0)) {
                            if (((s32)(func_001dffd8(a0)) != 0)) {
                                func_001df9c8(a0);
                            }
                        }
                    } else {
                        func_001df9c8(a0);
                    }
                } else {
                    func_001df9c8(a0);
                }
            } else {
                t7_0 = (((s32)(*(u32*)((*(u32*)((a0 + 0x40)) + 8))) >> 0x19) & 1);
                if (((s32)(t7_0) == 0)) {
                    if (((s32)((*(u32*)((*(u32*)((a0 + 0x44)) + 0x10)) & 0x400)) != 0)) {
                        if (((s32)(func_001dffd8(a0)) != 0)) {
                            func_001df9c8(a0);
                        }
                    }
                } else {
                    func_001df9c8(a0);
                }
            }
        }
    }
    *(f32*)((a0 + 0x4c)) = (*(f32*)((a0 + 0x4c)) + *(f32*)(&D_00349e10));
    return;
}

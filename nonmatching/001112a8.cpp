// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00341708 asm("D_00341708");
extern "C" f32 func_002f8870(f32) asm("func_002f8870");
extern "C" u32 func_0010f8d0(u32) asm("func_0010f8d0");
extern "C" u32 func_0010fb10(u32) asm("func_0010fb10");
extern "C" u32 func_00111278(u32) asm("func_00111278");
extern "C" u32 func_001917c0() asm("func_001917c0");
extern "C" void func_0010e130(u32, u32) asm("func_0010e130");
extern "C" void func_0010fa68(u32) asm("func_0010fa68");
extern "C" void func_0010ff08(u32) asm("func_0010ff08");
extern "C" void func_00110500(u32) asm("func_00110500");
extern "C" void func_001106a0(u32) asm("func_001106a0");
extern "C" void func_001111c8(u32) asm("func_001111c8");
extern "C" void func_00140dc0() asm("func_00140dc0");
extern "C" void func_0016bd60(u32, u32) asm("func_0016bd60");

// 0x001112a8 func_001112a8
// minilink-rodata 0x0036a55c   (float literals live here in the original)
void func_001112a8(u32 a0) asm("_ZN2kn6Friend11normal_execEv");
void func_001112a8(u32 a0) {
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    u32 t7_3;
    u32 t6;
    u32 t7_4;
    u32 a0_5;
    u32 t7_6;
    u32 t7_7;
    u32 t7_8;
    u32 t7_9;
    u32 t7_10;
    u32 t6_11;
    u32 t7_12;
    u32 a0_13;
    u32 t7_14;
    if (((s32)((*(u32*)((a0 + 0x7f8)) & 4)) != 0)) {
        if ((*(u32*)((a0 + 0xb6c)) == 0xc)) {
            t7 = (*(u32*)((*(u32*)((a0 + 0xc)) + 4)) + -0x1f);
            if (((u32)(t7) < (u32)(2))) {
                func_0016bd60(a0, 0);
            }
        }
    }
    if (((s32)(1) == 0)) {
        if (((s32)((*(u32*)((a0 + 0x160)) & 0x40000000)) != 0)) {
            if (((s32)((*(u32*)((a0 + 0x160)) & 4)) == 0)) {
                if (((*(u32*)((a0 + 0x160)) & 8) == 0)) {
                    if (((s32)((*(u32*)((a0 + 0x160)) & 0x10)) != 0)) {
                        t7_0 = 1;
                    } else {
                        t7_0 = 0;
                    }
                    t7_1 = t7_0;
                } else {
                    t7_1 = 1;
                }
                t7_2 = t7_1;
            } else {
                t7_2 = 1;
            }
            if (((s32)(t7_2) != 0)) {
                if (((s32)(*(u32*)((a0 + 0xb7c))) >= 0)) {
                    *(u32*)((a0 + 0xb7c)) = (*(u32*)((a0 + 0xb7c)) | 0x80000000);
                }
            }
            if (((s32)(func_00111278(a0)) != 0)) {
                if ((func_0010f8d0(a0) == 0)) {
                    if ((*(u32*)((*(u32*)((a0 + 0xc)) + 4)) == 0x20)) {
                        func_0016bd60(a0, 0x1f);
                    }
                }
                if (((s32)((*(u32*)((a0 + 0x7f8)) & 4)) == 0)) {
                    t7_3 = (*(u32*)((*(u32*)((a0 + 0xc)) + 4)) + -0x1f);
                    if (((s32)(((u32)(t7_3) < (u32)(3))) == 0)) {
                        func_0016bd60(a0, 0x1f);
                    }
                }
            }
            func_0010e130(a0, 0);
            if (((s32)((*(u64*)((a0 + 0x660)) & 4)) != 0)) {
                *(u32*)((a0 + 0xcd8)) = (*(u32*)((a0 + 0xcd8)) + 1);
            }
            if (((s32)(*(u32*)((*(u32*)(&D_00341708) + 0x810))) != 0)) {
                *(u32*)((a0 + 0xcd8)) = (*(u32*)((a0 + 0xcd8)) + 1);
            }
            if ((400.0f < func_002f8870(*(f32*)((a0 + 0xb80))))) {
                *(u32*)((a0 + 0xcd8)) = (*(u32*)((a0 + 0xcd8)) + 1);
            }
            if (((s32)(func_001917c0()) != 0)) {
                if (((s32)((*(u32*)((a0 + 0x160)) & 0x40000000)) == 0)) {
                    func_001111c8(a0);
                    func_0010fa68(a0);
                    if ((func_0010fb10(a0) == 0)) {
                        func_0010ff08(a0);
                    }
                } else {
                    func_00110500(a0);
                }
            } else {
                func_00110500(a0);
            }
            if (((s32)((*(u32*)((a0 + 0xb7c)) & 0x80)) == 0)) {
                func_001106a0(a0);
            }
            t6 = (a0 + 0x10);
            t7_4 = (a0 + 0xc00);
            func_00140dc0();
            if ((t6 != t7_4)) {
                *(Q16*)(t6) = *(Q16*)(t7_4);
            }
            a0_5 = (a0 + 0x20);
            t7_6 = (a0 + 0xc20);
            if ((a0_5 != t7_6)) {
                *(Q16*)(a0_5) = *(Q16*)(t7_6);
            }
        }
    } else {
        if (((s32)((*(u32*)((a0 + 0x160)) & 4)) == 0)) {
            if (((*(u32*)((a0 + 0x160)) & 8) == 0)) {
                if (((s32)((*(u32*)((a0 + 0x160)) & 0x10)) != 0)) {
                    t7_7 = 1;
                } else {
                    t7_7 = 0;
                }
                t7_8 = t7_7;
            } else {
                t7_8 = 1;
            }
            t7_9 = t7_8;
        } else {
            t7_9 = 1;
        }
        if (((s32)(t7_9) != 0)) {
            if (((s32)(*(u32*)((a0 + 0xb7c))) >= 0)) {
                *(u32*)((a0 + 0xb7c)) = (*(u32*)((a0 + 0xb7c)) | 0x80000000);
            }
        }
        if (((s32)(func_00111278(a0)) != 0)) {
            if ((func_0010f8d0(a0) == 0)) {
                if ((*(u32*)((*(u32*)((a0 + 0xc)) + 4)) == 0x20)) {
                    func_0016bd60(a0, 0x1f);
                }
            }
            if (((s32)((*(u32*)((a0 + 0x7f8)) & 4)) == 0)) {
                t7_10 = (*(u32*)((*(u32*)((a0 + 0xc)) + 4)) + -0x1f);
                if (((s32)(((u32)(t7_10) < (u32)(3))) == 0)) {
                    func_0016bd60(a0, 0x1f);
                }
            }
        }
        func_0010e130(a0, 0);
        if (((s32)((*(u64*)((a0 + 0x660)) & 4)) != 0)) {
            *(u32*)((a0 + 0xcd8)) = (*(u32*)((a0 + 0xcd8)) + 1);
        }
        if (((s32)(*(u32*)((*(u32*)(&D_00341708) + 0x810))) != 0)) {
            *(u32*)((a0 + 0xcd8)) = (*(u32*)((a0 + 0xcd8)) + 1);
        }
        if ((400.0f < func_002f8870(*(f32*)((a0 + 0xb80))))) {
            *(u32*)((a0 + 0xcd8)) = (*(u32*)((a0 + 0xcd8)) + 1);
        }
        if (((s32)(func_001917c0()) != 0)) {
            if (((s32)((*(u32*)((a0 + 0x160)) & 0x40000000)) == 0)) {
                func_001111c8(a0);
                func_0010fa68(a0);
                if ((func_0010fb10(a0) == 0)) {
                    func_0010ff08(a0);
                }
            } else {
                func_00110500(a0);
            }
        } else {
            func_00110500(a0);
        }
        if (((s32)((*(u32*)((a0 + 0xb7c)) & 0x80)) == 0)) {
            func_001106a0(a0);
        }
        t6_11 = (a0 + 0x10);
        t7_12 = (a0 + 0xc00);
        func_00140dc0();
        if ((t6_11 != t7_12)) {
            *(Q16*)(t6_11) = *(Q16*)(t7_12);
        }
        a0_13 = (a0 + 0x20);
        t7_14 = (a0 + 0xc20);
        if ((a0_13 != t7_14)) {
            *(Q16*)(a0_13) = *(Q16*)(t7_14);
        }
    }
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00170178 asm("D_00170178");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_0016fac8(u32) asm("func_0016fac8");
extern "C" u32 func_001700e8(u32, u32) asm("func_001700e8");
extern "C" u32 func_00170240(u32, u32) asm("func_00170240");
extern "C" u32 func_002ba3b8(u32, u32, u32, u32, u32, u32, u32) asm("func_002ba3b8");
extern "C" void func_00168be8(u32) asm("func_00168be8");
extern "C" void func_0016fba0(u32, u32, u32, u32) asm("func_0016fba0");
extern "C" void func_00170188(u32) asm("func_00170188");

// 0x0016fda8 func_0016fda8
void func_0016fda8(u32 a0) asm("_ZN2YS10CACHE_BUFF6HEADER8transferEv");
void func_0016fda8(u32 a0) {
    u32 t6;
    u32 s5;
    u32 s6;
    u32 s2;
    u32 s4;
    u32 v0;
    u32 v0_0;
    u32 t7;
    u32 v0_1;
    u32 t7_2;
    u32 t7_3;
    u32 t7_4;
    u32 s5_5;
    u32 v0_6;
    u32 t7_7;
    u32 v0_8;
    u32 t7_9;
    t6 = *(u8*)(a0);
    if ((t6 != 1)) {
        if (((s32)(((s32)(t6) < (s32)(2))) == 0)) {
            if ((t6 != 2)) {
                *(u8*)((a0 + 1)) = 3;
                return;
            } else {
                s5 = *(u32*)((a0 + 0x30));
                s6 = *(u32*)((s5 + 4));
                if (((s32)(s6) > 0)) {
                    s2 = *(u32*)((a0 + 0x38));
                    s4 = 0;
                    do {
                        v0 = func_00170240(*(u32*)(s2), 0xffffffff);
                        if (((s32)(v0) != 0)) {
                            func_001700e8(v0, 0);
                        }
                        v0_0 = func_00168b38(s5, 0xffffffff, s4);
                        t7 = *(u32*)((v0_0 + 0xc));
                        v0_1 = func_0016fac8(0x40);
                        func_0016fba0(v0_1, *(u32*)(s2), 0x14b4, (((t7 + 0x7ff) & 0xfffff800) + 0x7f) & 0xffffff80);
                        *(u32*)((v0_1 + 0x28)) = 0x2710;
                        t7_2 = *(u32*)((v0_0 + 8));
                        *(u32*)((v0_1 + 0x30)) = t7_2;
                        *(u32*)((v0_1 + 0x34)) = t7_2;
                        func_00168be8(*(u32*)((v0_0 + 8)));
                        func_00170188(v0_1);
                        s2 = (s2 + 4);
                        s4 = (s4 + 1);
                    } while (((s32)(s4) < (s32)(s6)));
                }
                *(u8*)((a0 + 1)) = 3;
                func_001700e8(a0, 0);
                return;
            }
        } else {
            *(u8*)((a0 + 1)) = 3;
            return;
        }
    } else {
        t7_3 = *(s16*)((a0 + 0x38));
        if (((s32)(t7_3) >= 0)) {
            t7_4 = *(u32*)((a0 + 0x28));
            if (((s32)((((s32)(t7_4) < (s32)(0x2710)) ^ 1)) == 0)) {
                s5_5 = *(u32*)((a0 + 0x30));
                v0_6 = func_00168b38(s5_5, 0x20, 0);
                if (((s32)(v0_6) != 0)) {
                    t7_7 = *(u32*)((v0_6 + 8));
                    if (((s32)(t7_7) != 0)) {
                        v0_8 = func_00168b38(s5_5, 0x1f, 0);
                        if (((s32)(v0_8) != 0)) {
                            t7_9 = *(u32*)((v0_8 + 8));
                            if (((s32)(t7_9) != 0)) {
                                *(u8*)((a0 + 1)) = 2;
                                *(u16*)((a0 + 0x3a)) = func_002ba3b8(*(s16*)((a0 + 0x38)), *(u32*)((v0_8 + 8)), *(u32*)((v0_8 + 0xc)), *(u32*)((v0_6 + 8)), *(u32*)((v0_6 + 0xc)), (u32)&D_00170178, a0);
                            } else {
                                *(u8*)((a0 + 1)) = 3;
                            }
                        } else {
                            *(u8*)((a0 + 1)) = 3;
                        }
                    } else {
                        *(u8*)((a0 + 1)) = 3;
                    }
                } else {
                    *(u8*)((a0 + 1)) = 3;
                }
            } else {
                *(u8*)((a0 + 1)) = 3;
            }
        } else {
            *(u8*)((a0 + 1)) = 3;
        }
        return;
    }
}

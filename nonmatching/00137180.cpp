// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d30 asm("D_00347d30");
extern "C" u32 D_00347d54 asm("D_00347d54");
extern "C" void func_00136b78(u32, u32) asm("func_00136b78");
extern "C" void func_002ba2b0(u32, u32) asm("func_002ba2b0");

// 0x00137180 func_00137180
void func_00137180(u32 a0) asm("_ZN2dk3BGM10typeChangeEPi");
void func_00137180(u32 a0) {
    u32 s2;
    u32 s0;
    u32 t7;
    u32 t6;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    u32 t5;
    u32 t6_3;
    u32 t7_4;
    u32 t7_5;
    u32 t5_6;
    u32 t6_7;
    *(u8*)(&D_00347d54) = 1;
    s2 = 0;
    s0 = (u32)&D_00347d30;
    do {
        t7 = *(u32*)((s0 + (s2 * 0x10)));
        t6 = *(u32*)(a0);
        if ((t7 == t6)) {
            t7_0 = *(u32*)(((s0 + (s2 * 0x10)) + 4));
            if ((t7_0 != t6)) {
                *(u32*)((s0 + (s2 * 0x10))) = t6;
                t7_1 = *(u32*)(a0);
                func_002ba2b0(0xf0, s2);
                if (((s32)(t7_1) != 0)) {
                    t7_2 = *(u32*)(((s0 + (s2 * 0x10)) + 0xc));
                    *(u32*)(((s0 + (s2 * 0x10)) + 0xc)) = (t7_2 | 2);
                    t5 = *(u32*)(((s0 + (s2 * 0x10)) + 4));
                    t6_3 = *(u32*)(a0);
                    if ((t5 != t6_3)) {
                        *(u32*)(((s0 + (s2 * 0x10)) + 4)) = t6_3;
                        *(u32*)(((s0 + (s2 * 0x10)) + 0xc)) = (t7_2 | 3);
                    }
                } else {
                    func_00136b78(s2, 0);
                }
            }
        } else {
            *(u32*)((s0 + (s2 * 0x10))) = t6;
            t7_4 = *(u32*)(a0);
            func_002ba2b0(0xf0, s2);
            if (((s32)(t7_4) != 0)) {
                t7_5 = *(u32*)(((s0 + (s2 * 0x10)) + 0xc));
                *(u32*)(((s0 + (s2 * 0x10)) + 0xc)) = (t7_5 | 2);
                t5_6 = *(u32*)(((s0 + (s2 * 0x10)) + 4));
                t6_7 = *(u32*)(a0);
                if ((t5_6 != t6_7)) {
                    *(u32*)(((s0 + (s2 * 0x10)) + 4)) = t6_7;
                    *(u32*)(((s0 + (s2 * 0x10)) + 0xc)) = (t7_5 | 3);
                }
            } else {
                func_00136b78(s2, 0);
            }
        }
        a0 = (a0 + 4);
        s2 = (s2 + 1);
    } while (((s32)(((s32)(s2) < (s32)(2))) != 0));
    return;
}

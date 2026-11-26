// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002bfcf8 asm("D_002bfcf8");
extern "C" u32 func_001b8800(u32) asm("func_001b8800");
extern "C" u32 func_001b8d60(u32, u32) asm("func_001b8d60");
extern "C" u32 func_002c6218() asm("func_002c6218");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_001b8988(u32, u32) asm("func_001b8988");
extern "C" void func_002bfd48(u32, u32) asm("func_002bfd48");
extern "C" void func_002c6280(u32, u32) asm("func_002c6280");
extern "C" void func_002fe0c0(u32, u32, u32, u32) asm("func_002fe0c0");

// 0x002bfb90 func_002bfb90
void func_002bfb90(u32 a0) asm("_ZN8worldmap5Event4execEv");
void func_002bfb90(u32 a0) {
    u8 frame[1280];
    u32 v0;
    u32 s0;
    u32 s4;
    u32 t7;
    u32 s4_0;
    u32 sp;
    u32 s2;
    u32 s5;
    u32 t7_1;
    u32 v0_2;
    u32 t5;
    u32 t7_3;
    u32 sp_4;
    u32 sp_5;
    if (((s32)(*(u32*)((a0 + 4))) != 0)) {
        func_002bfd48(a0, *(u32*)((a0 + 4)));
        func_002c6280(func_002c6218(), 2);
        sp_5 = (u32)frame;
    } else {
        v0 = func_001b8d60((u32)frame, *(u32*)((a0 + 4)));
        if (((s32)(v0) != 0)) {
            func_00102448(*(u32*)(a0), 0);
            if (((s32)(v0) > 0)) {
                s0 = 0;
                s4 = 0;
                t7 = (u32)frame;
                do {
                    func_001b8988(func_001b8800(*(u8*)(t7)), 1);
                    s0 = (s0 + 1);
                    t7 = ((u32)frame + s0);
                } while (((s32)(t7) != 0));
                s4_0 = s4;
            } else {
                s4_0 = 0;
                sp = (u32)frame;
            }
            func_002fe0c0(sp, v0, 1, (u32)&D_002bfcf8);
            if (((s32)(v0) > 0)) {
                s2 = 0;
                s5 = (((s4_0 << 2) + sp) + 0x100);
                t7_1 = sp;
                do {
                    v0_2 = func_001b8800(*(u8*)(t7_1));
                    if (((s32)(*(u32*)((v0_2 + 8))) != 0)) {
                        t5 = 0;
                        if (((s32)(s4_0) > 0)) {
                            t7_3 = *(u32*)((sp + 0x100));
                            do {
                                if ((*(u32*)(((sp + (t5 * 4)) + 0x100)) == *(u32*)((v0_2 + 8)))) {
                                    break;
                                }
                                t5 = (t5 + 1);
                                t7_3 = ((s32)(t5) < (s32)(s4_0));
                            } while ((t7_3 != 0));
                        }
                        if ((t5 == s4_0)) {
                            func_002bfd48(a0, *(u32*)((v0_2 + 8)));
                            *(u32*)(s5) = *(u32*)((v0_2 + 8));
                            s4_0 = (s4_0 + 1);
                            s5 = (s5 + 4);
                        }
                    }
                    s2 = (s2 + 1);
                    t7_1 = (sp + s2);
                } while (((s32)(t7_1) != 0));
            }
            func_002c6280(func_002c6218(), 2);
            sp_4 = sp;
        } else {
            sp_4 = (u32)frame;
        }
        sp_5 = sp_4;
    }
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" f32 func_00197b98() asm("func_00197b98");
extern "C" u32 func_00195328(u32) asm("func_00195328");
extern "C" u32 func_00197920() asm("func_00197920");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" void func_001bb630(u32, u32) asm("func_001bb630");
extern "C" void func_001bbe18(u32) asm("func_001bbe18");
extern "C" void func_001bc0d0(u32) asm("func_001bc0d0");
extern "C" void func_001d21c0(u32) asm("func_001d21c0");
extern "C" void func_001d5518(u32, u32, u32) asm("func_001d5518");
extern "C" void func_001d7f80(u32) asm("func_001d7f80");
extern "C" void func_002bc788() asm("func_002bc788");
extern "C" void func_002bc798(u32) asm("func_002bc798");

// 0x001bb090 func_001bb090
// minilink-rodata 0x0036dc08   (float literals live here in the original)
void func_001bb090(u32 a0) asm("_ZN2YS7MISSION4execEv");
void func_001bb090(u32 a0) {
    u32 s1;
    u32 t7;
    u32 t7_0;
    u32 a0_1;
    u32 v0;
    u32 t7_2;
    u32 t7_3;
    u32 t7_4;
    func_001d21c0(a0 + 0x260);
    if ((*(u32*)((a0 + 0x2d8)) != 2)) {
        if (((s32)(((s32)(*(u32*)((a0 + 0x2d8))) < (s32)(3))) != 0)) {
            if (((s32)(*(u32*)((a0 + 0x2d8))) == 0)) {
                s1 = *(u32*)(&D_0034e948);
                if ((func_00197920() == 0) || (func_0019ba60(s1) == 0) || ((s32)(((u32(*)(u32))(*(u32*)((*(u32*)(s1) + 0x40))))(s1)) != 0)) {
                    if (((s32)((*(u32*)((a0 + 4)) & 2)) == 0)) {
                        func_001d7f80(a0);
                    }
                    *(u32*)((a0 + 0x2d8)) = 1;
                }
            }
            t7_3 = 1;
        } else {
            if ((*(u32*)((a0 + 0x2d8)) != 3)) {
                if ((*(u32*)((a0 + 0x2d8)) == 4)) {
                    if ((func_00197920() == 0)) {
                        func_001bb630(*(u32*)((a0 + 0x2dc)), *(u32*)((a0 + 0x2e0)));
                        t7 = 0;
                    } else {
                        t7 = 1;
                    }
                    t7_0 = t7;
                } else {
                    t7_0 = 1;
                }
                t7_2 = t7_0;
            } else {
                if ((func_00197b98() <= 4.0f)) {
                    if ((*(u32*)((a0 + 0x2dc)) != 0x10)) {
                        if ((*(u32*)((a0 + 0x2dc)) == 0x9c)) {
                            func_002bc798(1);
                            func_001bbe18(0x1b68);
                            func_002bc788();
                        }
                    }
                    a0_1 = (a0 + 0x84);
                    v0 = func_00195328(1);
                    if (((s32)(*(u32*)((a0_1 + 4))) == 0)) {
                        *(u32*)((a0_1 + 4)) = v0;
                        *(u32*)((a0_1 + 8)) = 0x236;
                    }
                    func_001d5518(a0_1, a0 + 0xc, 0);
                    *(u32*)(&D_0034f240) = (*(u32*)(&D_0034f240) | 8);
                    func_001bc0d0(a0);
                }
                t7_2 = 1;
            }
            t7_3 = t7_2;
        }
        t7_4 = t7_3;
    } else {
        *(u32*)((a0 + 0x2d8)) = 3;
        t7_4 = 1;
    }
    return;
}

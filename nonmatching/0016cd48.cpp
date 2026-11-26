// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034d8a0 asm("D_0034d8a0");
extern "C" u32 D_0034d8a4 asm("D_0034d8a4");
extern "C" u32 D_0034dbf8 asm("D_0034dbf8");
extern "C" u32 func_0016cd48(u32, u32) asm("_ZN2YS2VM4execEPS0_");
extern "C" u32 func_001da558(u32, u32, u32, u32) asm("func_001da558");
extern "C" void func_0016c7d8(u32) asm("func_0016c7d8");
extern "C" void func_0016cab8(u32) asm("func_0016cab8");
extern "C" void func_0016ce90(u32) asm("func_0016ce90");

// 0x0016cd48 func_0016cd48
u32 func_0016cd48(u32 a0, u32 a1) asm("_ZN2YS2VM4execEPS0_");
u32 func_0016cd48(u32 a0, u32 a1) {
    u8 frame[16];
    u32 v0;
    u32 s0;
    u32 s1;
    u32 s3;
    u32 t4;
    u32 t6;
    u32 t5;
    u32 sp;
    u32 t5_0;
    u32 sp_1;
    u32 t5_2;
    u32 t7;
    u32 sp_3;
    u32 sp_4;
    u32 v0_5;
    u32 v0_6;
    if (((s32)((*(u32*)((a0 + 0x1c)) & 2)) == 0)) {
        *(u32*)(&D_0034d8a4) = a0;
        *(u32*)(&D_0034d8a0) = (a1 ? a1 : a0);
        v0 = func_001da558(a0, (u32)&D_0034dbf8, 0, 0);
        *(u32*)(&D_0034d8a4) = 0;
        *(u32*)(&D_0034d8a0) = 0;
        if ((v0 != 1)) {
            func_0016ce90(a0);
        }
    }
    if ((*(u32*)((a0 + 0x2c)) != 0)) {
        s0 = *(u32*)((a0 + 0x2c));
        do {
            s1 = *(u32*)((s0 + 0x28));
            s3 = 1;
            if ((func_0016cd48(s0, a0) == 1)) {
                t4 = (a0 + 0x2c);
                if ((s0 == *(u32*)((a0 + 0x2c)))) {
                    *(u32*)((a0 + 0x2c)) = *(u32*)((s0 + 0x28));
                    sp_1 = (u32)frame;
                    t5_2 = 0;
                } else {
                    if ((*(u32*)((*(u32*)((a0 + 0x2c)) + 0x28)) != s0)) {
                        t6 = *(u32*)((*(u32*)((a0 + 0x2c)) + 0x28));
                        do {
                            t5 = t6;
                            t6 = *(u32*)((t6 + 0x28));
                        } while ((t6 != s0));
                        t5_0 = t5;
                    } else {
                        sp = (u32)frame;
                        t5_0 = *(u32*)((a0 + 0x2c));
                    }
                    *(u32*)((t5_0 + 0x28)) = *(u32*)((s0 + 0x28));
                    sp_1 = sp;
                    t5_2 = t5_0;
                }
                if ((s0 == *(u32*)((t4 + 4)))) {
                    t7 = *(u32*)((t4 + 4));
                    *(u32*)((t4 + 4)) = t5_2;
                }
                *(u32*)((s0 + 0x28)) = 0;
                if (((s32)(s0) != 0)) {
                    func_0016cab8(s0);
                    func_0016c7d8(s0);
                }
                sp_3 = sp_1;
            } else {
                sp_3 = (u32)frame;
            }
            s0 = s1;
        } while (((s32)(s1) != 0));
        sp_4 = sp_3;
    } else {
        sp_4 = (u32)frame;
    }
    if (((s32)((*(u32*)((a0 + 0x1c)) & 2)) != 0)) {
        if (((s32)(*(u32*)((a0 + 0x2c))) != 0)) {
            v0_5 = 0;
        } else {
            v0_5 = 1;
        }
        v0_6 = v0_5;
    } else {
        v0_6 = 0;
    }
    return v0_6;
}

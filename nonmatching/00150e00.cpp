// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139538(u32) asm("func_00139538");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0013a9d0() asm("func_0013a9d0");
extern "C" u32 func_00150be8(u32) asm("func_00150be8");
extern "C" u32 func_001514e8(u32) asm("func_001514e8");
extern "C" u32 func_00151590(u32, u32, u32, u32, u32) asm("func_00151590");
extern "C" u32 func_0023a950(u32) asm("func_0023a950");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" void func_00138650(u32, u32, u32, u32) asm("func_00138650");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00139520(u32) asm("func_00139520");
extern "C" void func_0014fc40(u32, u32, u32, u32, u32, u32) asm("func_0014fc40");
extern "C" void func_002367c8(u32) asm("func_002367c8");
extern "C" void func_002368e8(u32, f32) asm("func_002368e8");
extern "C" void func_00239988(u32, u32, u32) asm("func_00239988");
extern "C" void func_00239c38(u32, u32) asm("func_00239c38");
extern "C" void func_0023acd8(u32) asm("func_0023acd8");

// 0x00150e00 wtarget_00150e00(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036b234   (float literals live here in the original)
u32 lift_00150e00(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_Z16wtarget_00150e00jjjj");
u32 lift_00150e00(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 s4;
    u32 s4_0;
    u32 s4_1;
    u32 s4_2;
    u32 s1;
    u32 s0;
    if (((s32)(func_00151590(a0, a1, a2, a3, a4)) != 0)) {
        return func_001514e8(a0);
    } else {
        if (((s32)(func_00139d78(a0 + 0x30)) == 0)) {
            func_00138650(a0 + 0x30, 0xe10, a1, 9);
            if (((s32)(func_0013a9d0()) != 0)) {
                func_002368e8(a0 + 0x50, 0.800000011920929f);
                func_002367c8(a0 + 0x50);
            }
        } else {
            if (((s32)(func_00139538(a0 + 0x30)) != 0)) {
                func_00139520(a0 + 0x30);
            }
        }
        *(u32*)((a0 + 0x1998)) = 0;
        *(u32*)((a0 + 0x199c)) = a2;
        if ((a3 != 1)) {
            if (((s32)(((s32)(a3) < (s32)(2))) != 0)) {
                if ((a3 != 0)) {
                    s4 = 0;
                } else {
                    s4 = 0x1a;
                }
                s4_1 = s4;
            } else {
                if ((a3 != 2)) {
                    s4_0 = 0;
                } else {
                    s4_0 = 0x19;
                }
                s4_1 = s4_0;
            }
            s4_2 = s4_1;
        } else {
            s4_2 = 0x1b;
        }
        func_00239988(a0 + 0x1840, a2, a0 + 0x50);
        func_00239c38(a0 + 0x1840, s4_2);
        func_0023acd8(a0 + 0x1840);
        *(u32*)((a0 + 0x20)) = func_0023a950(a0 + 0x1840);
        func_001386e0(a0 + 0x1f0, 0xe10, a2, a0 + 0x50, 3, 9);
        if ((func_00139d78(a0 + 0x388) == 0)) {
            func_001386e0(a0 + 0x388, 0xe10, a2, a0 + 0x50, 9, 9);
        }
        s1 = 5;
        do {
            if (((s32)(func_00139d78((a0 + ((s1 - 5) * -0x198)) + 0x520)) == 0)) {
                func_001386e0((a0 + ((s1 - 5) * -0x198)) + 0x520, 0xe10, a2, a0 + 0x50, 0xc, 9);
            }
            s1 = (s1 + -1);
        } while (((s32)(s1) >= 0));
        if ((func_00139d78(a0 + 0xeb0) == 0)) {
            func_001386e0(a0 + 0xeb0, 0xe10, a2, a0 + 0x50, 0x17, 9);
        }
        if (((s32)(func_00139d78(a0 + 0x1048)) == 0)) {
            func_001386e0(a0 + 0x1048, 0xe10, a2, a0 + 0x50, 0x18, 9);
        }
        s0 = func_0023aa78(a0 + 0x208);
        if (((s32)(func_00139d78(a0)) == 0)) {
            func_0014fc40(a0, a4, s0, 0xe10, 9, a3);
        }
        return func_00150be8(a0);
    }
}

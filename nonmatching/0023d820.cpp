// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00103580() asm("func_00103580");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_001a9350(u32) asm("func_001a9350");
extern "C" void func_001dc920(u32) asm("func_001dc920");
extern "C" void func_001dda78(u32) asm("func_001dda78");
extern "C" void func_001dde40(u32) asm("func_001dde40");
extern "C" void func_0023e738(u32, u32, u32, u32) asm("func_0023e738");

// 0x0023d820 func_0023d820
void func_0023d820(u32 a0) asm("_ZN2Tz7MenuObj10DestroyObjEv");
void func_0023d820(u32 a0) {
    u8 frame[16];
    u32 t7;
    u32 t6;
    u32 s0;
    u32 s4;
    u32 s5;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    u32 s0_3;
    u32 s1;
    u32 t7_4;
    u32 t7_5;
    u32 s0_6;
    u32 t6_7;
    u32 s3;
    u32 s4_8;
    u32 t5;
    u32 sp;
    u32 sp_9;
    t7 = *(u8*)((a0 + 0x14e0));
    if (((s32)(t7) == 0)) {
        if ((func_00139d78(a0) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
        }
        t6 = *(u32*)((a0 + 0xb6c));
        s0 = 0;
        if (((s32)(t6) > 0)) {
            s4 = 0;
            s5 = (a0 + 0xb64);
            do {
                if ((a0 == 0xfffff9a0)) {
                    break;
                }
                t7_0 = *(u8*)(s5);
                t7_1 = *(u8*)((((a0 + (t7_0 * 0x140)) + 0x660) + 0x13c));
                if (((s32)(t7_1) != 0)) {
                    s0 = ((a0 + (t7_0 * 0x140)) + 0x730);
                    t7_2 = *(u32*)((((a0 + (t7_0 * 0x140)) + 0x660) + 0x30));
                    if (((s32)(t7_2) != 0)) {
                        s0_3 = *(u32*)((t7_2 + 0x14));
                        ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(s0_3) + 0x28))))(s0_3, func_00103580(), *(u32*)((((a0 + (t7_0 * 0x140)) + 0x660) + 0x30)));
                        *(u32*)((((a0 + (t7_0 * 0x140)) + 0x660) + 0x30)) = 0;
                        s0 = ((a0 + (t7_0 * 0x140)) + 0x730);
                    }
                    s1 = 0xf;
                    do {
                        t7_4 = *(u32*)((s0 + 0xc));
                        if (((s32)(t7_4) != 0)) {
                            func_001dc920(t7_4);
                            *(u32*)((s0 + 0xc)) = 0;
                        }
                        s1 = (s1 + -1);
                        s0 = (s0 + 4);
                    } while (((s32)(s1) >= 0));
                    t7_5 = *(u32*)((((a0 + (t7_0 * 0x140)) + 0x660) + 0xc0));
                    if (((s32)(t7_5) != 0)) {
                        func_001dde40(((a0 + (t7_0 * 0x140)) + 0x660) + 0xc0);
                    }
                    s0_6 = *(u32*)((((a0 + (t7_0 * 0x140)) + 0x660) + 0x70));
                    if ((s0_6 != 0)) {
                        func_001a9350(s0_6);
                        func_00106420(s0_6);
                        *(u32*)((((a0 + (t7_0 * 0x140)) + 0x660) + 0x70)) = 0;
                    }
                    *(u8*)((((a0 + (t7_0 * 0x140)) + 0x660) + 0x13c)) = 0;
                    s0 = 1;
                }
                func_0023e738(a0, s4, 0, 0);
                s4 = (s4 + 1);
                t6_7 = *(u32*)((a0 + 0xb6c));
                s5 = (s5 + 1);
                t6 = t6_7;
            } while (((s32)(((s32)(s4) < (s32)(t6_7))) != 0));
        }
        if (((s32)(s0) != 0)) {
            func_001dda78(0);
            func_001dda78(0);
            t6 = *(u32*)((a0 + 0xb6c));
        }
        s3 = a0;
        if (((s32)(t6) > 0)) {
            s4_8 = 0;
            t5 = (a0 + 0xb64);
            do {
                *(u32*)((a0 + 0x14b0)) = 0;
                *(u32*)((a0 + 0x14c0)) = 0;
                *(u8*)(t5) = s4_8;
                s4_8 = (s4_8 + 1);
                *(u32*)((a0 + 0x14d0)) = 0;
                t5 = (t5 + 1);
                a0 = (a0 + 4);
            } while (((s32)(((s32)(s4_8) < (s32)(t6))) != 0));
        } else {
            sp = (u32)frame;
        }
        *(u32*)((s3 + 0xb68)) = 0;
        *(u8*)((s3 + 0x14e1)) = 0;
        *(u8*)((s3 + 0x14e2)) = 0;
        sp_9 = sp;
    } else {
        sp_9 = (u32)frame;
    }
    return;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001bb220 asm("D_001bb220");
extern "C" u32 D_001bb2c8 asm("D_001bb2c8");
extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00196908(u32) asm("func_00196908");
extern "C" u32 func_001bb958(u32) asm("func_001bb958");
extern "C" u32 func_001bbb50() asm("func_001bbb50");
extern "C" u32 func_001bc090() asm("func_001bc090");
extern "C" u32 func_001c1130(u32) asm("func_001c1130");
extern "C" u32 func_001d5668(u32) asm("func_001d5668");
extern "C" void func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" void func_001ada38(u32) asm("func_001ada38");
extern "C" void func_001bba30(u32) asm("func_001bba30");
extern "C" void func_001bbe18(u32) asm("func_001bbe18");
extern "C" void func_001d5518(u32, u32, u32) asm("func_001d5518");
extern "C" void func_001d5698(u32) asm("func_001d5698");
extern "C" void func_001d7218(u32) asm("func_001d7218");
extern "C" void func_001db610(u32, u32, u32) asm("func_001db610");
extern "C" void func_001dddd0(u32, u32) asm("func_001dddd0");

// 0x001bae38 func_001bae38
u32 func_001bae38(u32 a0) asm("_ZN2YS7MISSION8activateEv");
u32 func_001bae38(u32 a0) {
    u32 v0;
    u32 t7;
    u32 t7_0;
    u32 v0_1;
    u32 t7_2;
    u32 t7_3;
    u32 s2;
    u32 t6;
    u32 a0_4;
    u32 a0_5;
    u32 s1;
    u32 t6_6;
    u32 t6_7;
    u32 t5;
    u32 s1_8;
    u32 t7_9;
    u32 s1_10;
    u32 s1_11;
    u32 s1_12;
    u32 s1_13;
    u32 t7_14;
    func_001db610(*(u32*)((a0 + 8)) + 0x1c, (u32)&D_001bb2c8, a0);
    v0 = func_00168b38(*(u32*)((a0 + 0x48)), 3, 0);
    if (((s32)(v0) != 0)) {
        t7 = *(u32*)((v0 + 8));
        t7_0 = ((u32)(0) < (u32)(t7));
    } else {
        t7_0 = 0;
    }
    if (((t7_0 & 0xff) != 0)) {
        *(u32*)((a0 + 0x2cc)) = func_00196908(*(u32*)((v0 + 8)));
    }
    v0_1 = func_00168b38(*(u32*)((a0 + 0x48)), 0x12, 0);
    if (((s32)(v0_1) != 0)) {
        t7_2 = *(u32*)((v0_1 + 8));
        t7_3 = ((u32)(0) < (u32)(t7_2));
    } else {
        t7_3 = 0;
    }
    s2 = (a0 + 0xc);
    if (((s32)((t7_3 & 0xff)) != 0)) {
        func_001dddd0(s2, *(u32*)((v0_1 + 8)));
    }
    t6 = *(u32*)((a0 + 8));
    a0_4 = *(u8*)((t6 + 8));
    if (((s32)(a0_4) != 0)) {
        a0_5 = *(u16*)((*(u32*)((a0 + 8)) + 0xa));
        s1 = func_001c1130(a0_4);
        if (((s32)(a0_5) != 0)) {
            *(u32*)((s1 + 0x18)) = func_00192048(a0_5);
        }
        if (((s32)(func_001bbb50()) == 0)) {
            t6_6 = *(u16*)(s1);
            if ((t6_6 == 0x23)) {
                func_001ada38(9);
            }
        } else {
            func_001ada38(9);
        }
        if (((s32)(func_001bc090()) != 0)) {
            t6_7 = *(u16*)(((u32)&D_0032bae0 + 6));
            t5 = *(u8*)(((u32)&D_0032bae0 + 2));
            if ((t5 == ((t6_7 ^ 0xc4) ? 0xa : 0x32))) {
                s1_8 = (a0 + 0x4c);
                *(u32*)((s1_8 + 0x14)) = 3;
                s1 = s1_8;
            } else {
                t7_9 = (((t6_7 ^ 0xc4) ? 0xa : 0x32) + -1);
                if ((t5 == t7_9)) {
                    s1_10 = (a0 + 0x4c);
                    *(u32*)((s1_10 + 0x14)) = 4;
                    s1_12 = s1_10;
                } else {
                    s1_11 = (a0 + 0x4c);
                    *(u32*)((s1_11 + 0x18)) = t5;
                    s1_12 = s1_11;
                }
                s1 = s1_12;
            }
        } else {
            s1 = (a0 + 0x4c);
        }
        s1_13 = s1;
        t6 = *(u32*)((a0 + 8));
    } else {
        s1_13 = (a0 + 0x4c);
    }
    t7_14 = *(u8*)((t6 + 0xc));
    if (((s32)(t7_14) != 0)) {
        if ((func_001d5668(*(u8*)((t6 + 9))) == 0)) {
            func_001d5698(*(u8*)((*(u32*)((a0 + 8)) + 9)));
            func_001bba30(a0);
        }
        t6 = *(u32*)((a0 + 8));
    }
    func_001bbe18(*(u32*)((t6 + 0x10)));
    func_001d5518(s1_13, s2, 0);
    func_001d7218(*(u32*)(a0));
    func_00102c18(1, 0x36b0, (u32)&D_001bb220);
    return func_001bb958(0);
}

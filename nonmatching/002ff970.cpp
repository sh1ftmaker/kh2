// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00377b68 asm("D_00377b68");
extern "C" u32 func_00311aa0(u32, u32) asm("func_00311aa0");
extern "C" u32 func_00312db8(u32, u32) asm("func_00312db8");
extern "C" u32 func_00313498(u32, u32, u32, u32) asm("func_00313498");

// 0x002ff970 wtarget_002ff970(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_002ff970(u32 a0, u32 a1, u32 a2, u32 a3) asm("_Z16wtarget_002ff970jjjj");
u32 lift_002ff970(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[16];
    u32 loc_0;
    u32 loc_4;
    u32 loc_8;
    u32 t5;
    u32 s0;
    u32 t7;
    u32 sp;
    u32 s2;
    s32 fp;
    u32 s4;
    u32 v0;
    u32 s2_0;
    u32 s2_1;
    u32 s2_2;
    u32 s2_3;
    u32 s2_4;
    u32 s0_5;
    u32 s2_6;
    u32 s2_7;
    u32 s0_8;
    u32 s2_9;
    u32 s2_10;
    u32 s2_11;
    u32 s2_12;
    u32 s2_13;
    u32 s7;
    loc_0 = a0;
    loc_4 = a2;
    loc_8 = 0;
    t5 = (u32)&D_00377b68;
    do {
        s0 = *(s8*)(a1);
        t7 = (*(u8*)((*(s8*)(a1) + t5)) & 8);
        a1 = (a1 + 1);
    } while (((s32)(t7) != 0));
    if ((s0 == 0x2d)) {
        loc_8 = 1;
        s0 = *(s8*)(a1);
        a1 = (a1 + 1);
        sp = (u32)frame;
    } else {
        if ((s0 == 0x2b)) {
            s0 = *(s8*)(a1);
            a1 = (a1 + 1);
        }
    }
    if (((s32)(a3) == 0) || (a3 == 0x10)) {
        if ((s0 == 0x30)) {
            if ((*(s8*)(a1) == 0x78) || (*(s8*)(a1) == 0x58)) {
                s0 = *(s8*)((a1 + 1));
                a1 = (a1 + 2);
                a3 = 0x10;
            }
        }
    }
    if (((s32)(a3) == 0)) {
        a3 = ((s0 ^ 0x30) ? 0xa : 8);
    }
    s2 = (loc_8 ? ((u64)(0xffffffff) << 0x3f) : (0xfffffffe >> 1));
    fp = (s32)((u64)(func_00313498(loc_8 ? ((u64)(0xffffffff) << 0x3f) : (0xfffffffe >> 1), a3, a2, a3)));
    s4 = 0;
    v0 = 0;
    for (;;) {
        if (((s32)((*(u8*)((s0 + (u32)&D_00377b68)) & 4)) != 0)) {
            if (((s32)(((s32)((s0 + -0x30)) < (s32)(a3))) == 0)) {
                break;
            }
            if (((s32)(s4) >= 0)) {
                if (((u32)(func_00312db8(s2, a3)) >= (u32)(v0))) {
                    if ((v0 == func_00312db8(s2, a3))) {
                        s2_0 = func_00312db8(s2, a3);
                        if (((s32)(((s32)(fp) < (s32)((s0 + -0x30)))) != 0)) {
                            s4 = 0xffffffff;
                        } else {
                            s4 = 1;
                            v0 = ((s0 + -0x30) + func_00311aa0(v0, a3));
                        }
                        s2_2 = s2_0;
                    } else {
                        s2_1 = func_00312db8(s2, a3);
                        s2_2 = s2_1;
                        s4 = 1;
                        v0 = ((s0 + -0x30) + func_00311aa0(v0, a3));
                    }
                    s2_3 = s2_2;
                } else {
                    s2_3 = func_00312db8(s2, a3);
                    s4 = 0xffffffff;
                }
                s2_4 = s2_3;
            } else {
                s2_4 = func_00312db8(s2, a3);
                s4 = 0xffffffff;
            }
            s2_13 = s2_4;
        } else {
            if (((s32)((*(u8*)((s0 + (u32)&D_00377b68)) & 3)) == 0)) {
                break;
            }
            if (((s32)(((s32)(((*(u8*)((s0 + (u32)&D_00377b68)) & 1) ? (s0 + -0x37) : (s0 + -0x57))) < (s32)(a3))) == 0)) {
                break;
            }
            if (((s32)(s4) >= 0)) {
                if (((u32)(func_00312db8(s2, a3)) >= (u32)(v0))) {
                    if ((v0 == func_00312db8(s2, a3))) {
                        if (((s32)(((s32)(fp) < (s32)(((*(u8*)((s0 + (u32)&D_00377b68)) & 1) ? (s0 + -0x37) : (s0 + -0x57))))) != 0)) {
                            s2_7 = func_00312db8(s2, a3);
                            s4 = 0xffffffff;
                        } else {
                            s0_5 = ((*(u8*)((s0 + (u32)&D_00377b68)) & 1) ? (s0 + -0x37) : (s0 + -0x57));
                            s2_6 = func_00312db8(s2, a3);
                            s2_7 = s2_6;
                            s4 = 1;
                            v0 = (s0_5 + func_00311aa0(v0, a3));
                        }
                        s2_10 = s2_7;
                    } else {
                        s0_8 = ((*(u8*)((s0 + (u32)&D_00377b68)) & 1) ? (s0 + -0x37) : (s0 + -0x57));
                        s2_9 = func_00312db8(s2, a3);
                        s2_10 = s2_9;
                        s4 = 1;
                        v0 = (s0_8 + func_00311aa0(v0, a3));
                    }
                    s2_11 = s2_10;
                } else {
                    s2_11 = func_00312db8(s2, a3);
                    s4 = 0xffffffff;
                }
                s2_12 = s2_11;
            } else {
                s2_12 = func_00312db8(s2, a3);
                s4 = 0xffffffff;
            }
            s2_13 = s2_12;
        }
        s0 = *(s8*)(a1);
        a1 = (a1 + 1);
    }
    if (((s32)(s4) < 0)) {
        *(u32*)(loc_0) = 0x22;
        v0 = (loc_8 ? ((u64)(0xffffffff) << 0x3f) : (0xfffffffe >> 1));
    } else {
        v0 = (loc_8 ? -(v0) : v0);
    }
    if (((s32)(loc_4) != 0)) {
        *(u32*)(loc_4) = (s4 ? (a1 + -1) : s7);
    }
    return v0;
}

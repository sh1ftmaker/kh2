// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e6f0 asm("D_01d9e6f0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" void func_002226b8(u32, u32, u32) asm("func_002226b8");
extern "C" void func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");
extern "C" void func_002f3f88(u32, u32) asm("func_002f3f88");

// 0x001ff110 func_001ff110
// minilink-rodata 0x0037028c   (float literals live here in the original)
void func_001ff110(u32 a0, u32 a1, u32 a2) asm("func_001ff110");
void func_001ff110(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 s2;
    u32 s2_0;
    u32 s2_1;
    u32 s1;
    u32 s0;
    u32 s4;
    u32 s4_2;
    u32 sp;
    u32 s2_3;
    u32 s2_4;
    u32 s4_5;
    u32 sp_6;
    u32 s2_7;
    u32 s2_8;
    u32 s4_9;
    u32 sp_10;
    u32 a0_11;
    u32 a0_12;
    u32 t7;
    u32 a0_13;
    u32 t7_14;
    u32 a1_15;
    u32 t1;
    u32 t6;
    u32 t5;
    u32 t2;
    u32 sp_16;
    u32 sp_17;
    if (((s32)(*(u32*)(&D_01d9ea9c)) == 0)) {
        if (((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00)) == 0)) {
            if (((s32)(*(u32*)((a0 + 0xc))) == 0)) {
                if ((*(u8*)((a0 + 0x9d)) == 0)) {
                    if (((s32)(*(u8*)((a1 + 0x26))) != 0)) {
                        s2 = ((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                        func_002f3cd8((u32)frame, (u32)&D_01d9e6f0, *(u32*)(&D_01d9e6e8) + 0x40);
                        s2_1 = s2;
                    } else {
                        s2_0 = ((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                        func_002f3f88((u32)frame, *(u32*)(&D_01d9e6e8) + 0x40);
                        s2_1 = s2_0;
                    }
                    *(f32*)(((u32)frame + 0xc)) = 1.0f;
                    s1 = *(u8*)(s2_1);
                    if (((s32)(s1) > 0)) {
                        s0 = (s2_1 + 0x10);
                        s4 = 0x1da0000;
                        do {
                            func_002f3f88(s0, (u32)frame);
                            s0 = (s0 + 0x10);
                            s1 = (s1 + -1);
                        } while (((s32)(s1) > 0));
                        s4_2 = s4;
                    } else {
                        s4_2 = 0x1da0000;
                        sp = (u32)frame;
                    }
                    a0 = *(u8*)((s2_1 + 1));
                    s2_4 = s2_1;
                    s4_5 = s4_2;
                    sp_6 = sp;
                } else {
                    s2_3 = ((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                    a0 = *(u8*)((s2_3 + 1));
                    s2_4 = s2_3;
                    s4_5 = 0x1da0000;
                    sp_6 = (u32)frame;
                }
                s2_8 = s2_4;
                s4_9 = s4_5;
                sp_10 = sp_6;
            } else {
                s2_7 = ((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                a0 = *(u8*)((s2_7 + 1));
                s2_8 = s2_7;
                s4_9 = 0x1da0000;
                sp_10 = (u32)frame;
            }
            if (((s32)((a0 & 0xff)) == 0)) {
                *(u8*)((s2_8 + 1)) = *(u8*)(s2_8);
                a0_11 = (*(u8*)(s2_8) + -1);
            } else {
                a0_11 = (a0 + -1);
            }
            *(u8*)((s2_8 + 1)) = a0_11;
            if (((s32)(*(u8*)((a1 + 0x26))) != 0)) {
                a0_12 = ((a0_11 & 0xff) << 4);
                t7 = (*(u8*)((s2_8 + 1)) << 4);
                func_002f3cd8((s2_8 + a0_12) + 0x10, (u32)&D_01d9e6f0, *(u32*)((s4_9 + -0x1918)) + 0x40);
                *(f32*)(((t7 + s2_8) + 0x1c)) = 1.0f;
            } else {
                a0_13 = ((a0_11 & 0xff) << 4);
                func_002226b8((s2_8 + a0_13) + 0x10, *(u32*)((s4_9 + -0x1918)) + 0x40, *(u32*)((s4_9 + -0x1918)));
            }
            *(u16*)((s2_8 + 6)) = *(u16*)((s2_8 + 4));
            t7_14 = ((*(u16*)((s2_8 + 4)) & 0xffff) << 3);
            a1_15 = (*(u16*)((s2_8 + 2)) + *(u16*)((a1 + 8)));
            *(u16*)((s2_8 + 2)) = a1_15;
            t1 = ((*(u32*)((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x14)) + (*(u32*)((a1 + 4)) << 3))) + t7_14) + 0x10);
            t6 = (*(u16*)((t1 + 2)) << 0x10);
            if (((s32)(((s32)((a1_15 & 0xffff)) < (s32)(((s32)(t6) >> 0x10)))) == 0)) {
                *(u16*)((s2_8 + 2)) = (a1_15 - *(u16*)((t1 + 2)));
                t5 = (*(u16*)((s2_8 + 4)) + 1);
                t2 = *(u16*)((s2_8 + 4));
                *(u16*)((s2_8 + 4)) = t5;
                if (((s32)(((s32)((t5 & 0xffff)) < (s32)(*(s16*)((*(u32*)((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x14)) + (*(u32*)((a1 + 4)) << 3))) + 6))))) == 0)) {
                    if (((*(s8*)((t1 + 4)) & 0x80) != 0)) {
                        *(u16*)((s2_8 + 2)) = 0;
                        *(u16*)((s2_8 + 4)) = 0;
                    } else {
                        *(u16*)((s2_8 + 2)) = 0;
                        *(u16*)((s2_8 + 4)) = t2;
                    }
                }
            }
            sp_16 = sp_10;
        } else {
            sp_16 = (u32)frame;
        }
        sp_17 = sp_16;
    } else {
        sp_17 = (u32)frame;
    }
    return;
}

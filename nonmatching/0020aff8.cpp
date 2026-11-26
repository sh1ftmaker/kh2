// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9eaa4 asm("D_01d9eaa4");
extern "C" f32 func_0020aec8(u32, u32, u32, u32, u32) asm("func_0020aec8");
extern "C" u32 func_0020a060(u32, u32, u32) asm("func_0020a060");
extern "C" u32 func_0021d048(u32, u32, u32) asm("func_0021d048");
extern "C" void func_0020aec0(u32, u32, u32) asm("func_0020aec0");

// 0x0020aff8 func_0020aff8
// minilink-rodata 0x003706c0   (float literals live here in the original)
void func_0020aff8(u32 a0, u32 a1, u32 a2) asm("func_0020aff8");
void func_0020aff8(u32 a0, u32 a1, u32 a2) {
    u8 frame[192];
    u32 t6;
    u32 t7;
    u32 t7_0;
    u32 s2;
    u32 s0;
    u32 s1;
    u32 s3;
    u32 s5;
    u32 t7_1;
    u32 s4;
    u32 t3;
    u32 s7;
    u32 t7_2;
    u32 s4_3;
    u32 fp;
    f32 f1;
    f32 f3;
    f32 f2;
    u32 t7_4;
    u32 t7_5;
    u32 t2;
    u32 t1;
    u32 t0;
    u32 t3_6;
    u32 t0_7;
    u32 t1_8;
    u32 t2_9;
    u32 t3_10;
    f32 f1_11;
    u32 fp_12;
    u32 fp_13;
    t6 = *(u32*)((a2 + 0xc));
    t7 = *(u32*)((t6 + 8));
    t7_0 = (a0 + t7);
    s2 = (t7_0 + 0xa0);
    s0 = *(u32*)((s2 + 4));
    s1 = *(u32*)((t7_0 + 0xa0));
    s3 = ((a0 + *(u32*)((t6 + 4))) + 0xa0);
    s5 = *(u32*)((s2 + 8));
    if ((func_0020a060(s2, a1, a2) != 0)) {
        t7_1 = *(u8*)((s2 + 0x12));
        if ((t7_1 != 0)) {
            s4 = *(u32*)((a1 + 4));
            if ((s4 != 0xffff)) {
                func_0020aec0((u32)frame, a1, s2);
                *(u16*)(((u32)frame + 0x82)) = 0x10;
                t3 = *(u8*)((a1 + 0xc));
                if (((s32)(t3) != 0)) {
                    *(u16*)(((u32)frame + 0x82)) = 0x810;
                }
                *(u64*)(((u32)frame + 0x88)) = 0;
                *(u32*)(((u32)frame + 0x90)) = ((u32)frame + 0x40);
                *(u8*)(((u32)frame + 0x98)) = 0;
                *(u32*)(((u32)frame + 0x9c)) = 0;
                *(u32*)(((u32)frame + 0xb8)) = *(u8*)((s3 + 0xb));
                s7 = (*(u32*)((*(u32*)(&D_01d9e6e4) + 0x14)) + (s4 << 3));
                *(u32*)(((u32)frame + 0xb0)) = *(u8*)((s3 + 8));
                *(u32*)(((u32)frame + 0xb4)) = *(u8*)((s3 + 9));
                if (((s32)(s5) > 0)) {
                    do {
                        t7_2 = *(u16*)((s1 + 0x26));
                        s4_3 = *(u32*)(s7);
                        if (((s32)(t7_2) != 0)) {
                            if (((s32)((*(u64*)((s1 + 0x58)) & 0x100)) == 0)) {
                                fp = *(u8*)((s3 + 0xa));
                                f1 = *(f32*)((a1 + 0x94));
                                f3 = *(f32*)((a1 + 0x98));
                                if ((func_0020aec8((u32)frame, (u32)frame + 0x40, a1, s2, s1) < (f1 - f3))) {
                                    *(u32*)((s1 + 0x54)) = 0;
                                } else {
                                    if ((func_0020aec8((u32)frame, (u32)frame + 0x40, a1, s2, s1) < f1)) {
                                        f2 = *(f32*)((s1 + 0x54));
                                        *(f32*)((s1 + 0x54)) = (f2 * (1.0f - ((f1 - func_0020aec8((u32)frame, (u32)frame + 0x40, a1, s2, s1)) / f3)));
                                    }
                                }
                                t7_4 = *(u16*)((s1 + 0x24));
                                t7_5 = (t7_4 << 3);
                                if (((s32)(s0) != 0)) {
                                    t2 = (*(u32*)(((u32)frame + 0xb0)) + *(s8*)((s1 + 0x28)));
                                    t1 = (*(u32*)(((u32)frame + 0xb4)) + *(s8*)((s1 + 0x29)));
                                    t0 = (fp + *(s8*)((s1 + 0x2a)));
                                    t3_6 = (*(u32*)(((u32)frame + 0xb8)) + *(s8*)((s1 + 0x2b)));
                                    t0_7 = (t0 + (s32)(*(f32*)((s0 + 8))));
                                    t1_8 = (t1 + (s32)(*(f32*)((s0 + 4))));
                                    t2_9 = (t2 + (s32)(*(f32*)(s0)));
                                    t3_10 = (t3_6 + (s32)(*(f32*)((s0 + 0xc))));
                                } else {
                                    t0_7 = (fp + *(s8*)((s1 + 0x2a)));
                                    t1_8 = (*(u32*)(((u32)frame + 0xb4)) + *(s8*)((s1 + 0x29)));
                                    t2_9 = (*(u32*)(((u32)frame + 0xb0)) + *(s8*)((s1 + 0x28)));
                                    t3_10 = (*(u32*)(((u32)frame + 0xb8)) + *(s8*)((s1 + 0x2b)));
                                }
                                if (((s32)(t2_9) < 0)) {
                                    t2_9 = 0;
                                } else {
                                    t2_9 = (((s32)(t2_9) < (s32)(0x100)) ? t2_9 : 0xff);
                                }
                                if (((s32)(t1_8) < 0)) {
                                    t1_8 = 0;
                                } else {
                                    t1_8 = (((s32)(t1_8) < (s32)(0x100)) ? t1_8 : 0xff);
                                }
                                if (((s32)(t0_7) < 0)) {
                                    t0_7 = 0;
                                } else {
                                    t0_7 = (((s32)(t0_7) < (s32)(0x100)) ? t0_7 : 0xff);
                                }
                                if (((s32)(t3_10) < 0)) {
                                    t3_10 = 0;
                                } else {
                                    t3_10 = (((s32)(t3_10) < (s32)(0x80)) ? t3_10 : 0x7f);
                                }
                                *(u8*)(((u32)frame + 0x84)) = t2_9;
                                *(u8*)(((u32)frame + 0x85)) = t1_8;
                                *(u8*)(((u32)frame + 0x86)) = t0_7;
                                *(u8*)(((u32)frame + 0x87)) = t3_10;
                                f1_11 = ((f32)((s32)((t3_10 & 0xff))) * *(f32*)((s1 + 0x54)));
                                *(u8*)(((u32)frame + 0x87)) = (s32)((f1_11 * *(f32*)((s2 + 0xc))));
                                if (((s32)(((s32)((f1_11 * *(f32*)((s2 + 0xc)))) & 0xff)) != 0)) {
                                    *(u32*)(((u32)frame + 0x94)) = *(u32*)(&D_01d9eaa4);
                                    *(u32*)(&D_01d9eaa4) = func_0021d048(s4_3 + *(s16*)(((s4_3 + t7_5) + 0x10)), (u32)frame + 0x80, *(u32*)((s7 + 4)));
                                }
                                fp_12 = fp;
                            } else {
                                fp_12 = *(u8*)((s3 + 0xa));
                            }
                            fp_13 = fp_12;
                        } else {
                            fp_13 = *(u8*)((s3 + 0xa));
                        }
                        s0 = (s0 ? (s0 + 0x20) : s0);
                        s1 = (s1 + 0x60);
                        s5 = (s5 + -1);
                    } while (((s32)(s5) != 0));
                }
            }
        }
    }
    return;
}

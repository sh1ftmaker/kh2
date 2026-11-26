// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" f32 func_002dbf50(u32, f32) asm("func_002dbf50");
extern "C" f32 func_002dc100(u32) asm("func_002dc100");
extern "C" u32 func_001c0cd8(u32, f32) asm("func_001c0cd8");
extern "C" u32 func_002dc1b0(u32) asm("func_002dc1b0");
extern "C" void func_002d8120(u32, u32, u32, f32) asm("func_002d8120");
extern "C" void func_002d8d40(u32, u32, u32) asm("func_002d8d40");
extern "C" void func_002da520(u32, u32) asm("func_002da520");
extern "C" void func_002dc140(u32, u32) asm("func_002dc140");

// 0x002da670 func_002da670
// minilink-rodata 0x00375cf4   (float literals live here in the original)
void func_002da670(u32 a0) asm("_ZN2Ti18MGHachimitsuPlayer20decide_pos_with_poohEv");
void func_002da670(u32 a0) {
    u8 frame[144];
    u32 s3;
    u32 a0_0;
    f32 f1;
    f32 f5;
    u32 s4;
    f32 f4;
    f32 f0;
    f32 f7;
    f32 f6;
    f32 f3;
    f32 f0_1;
    f32 f2;
    f32 f0_2;
    u32 fcc;
    f32 f2_3;
    f32 f0_4;
    f32 f1_5;
    u32 t7;
    u32 t6;
    f32 f1_6;
    f32 f0_7;
    u32 s4_8;
    u32 s0;
    u32 s1;
    s3 = *(u32*)(&D_00361f60);
    if (((s32)(s3) != 0)) {
        a0_0 = *(u32*)((a0 + 0xbf0));
        if (((s32)(a0_0) != 0)) {
            if (((s32)(func_001c0cd8(a0_0, 0.0f)) != 0)) {
                func_002d8120((u32)frame, s3, a0 + 0xbf8, 0.0f);
                func_002da520(a0, (u32)frame);
            } else {
                *(f32*)((u32)frame) = *(f32*)((a0 + 0xbf8));
                *(f32*)(((u32)frame + 4)) = 40.0f;
                *(f32*)(((u32)frame + 8)) = func_002dbf50(*(u32*)((a0 + 0xbf0)), 0.0f);
                *(f32*)(((u32)frame + 0xc)) = 30.0f;
                func_002d8d40(s3, (u32)frame + 0x80, (u32)frame + 0x84);
                if (((s32)(((func_002dc1b0(*(u32*)((a0 + 0xbf0))) ^ 1) & 0xff)) != 0)) {
                    f1 = *(f32*)((u32)frame);
                    f5 = *(f32*)(((u32)frame + 0x80));
                    s4 = ((u32)frame + 8);
                    if ((f1 < f5)) {
                        *(f32*)((u32)frame) = f5;
                        f1 = f5;
                    }
                    f4 = *(f32*)(((u32)frame + 0x84));
                    if ((f4 < f1)) {
                        *(f32*)((u32)frame) = f4;
                        f1 = f4;
                    }
                    f0 = *(f32*)(((u32)frame + 8));
                    f7 = *(f32*)(((u32)frame + 4));
                    f6 = *(f32*)(((u32)frame + 0xc));
                    f3 = (f7 + f6);
                    if ((f1 < f0)) {
                        if ((f0 < (f1 + f3))) {
                            *(f32*)(((u32)frame + 8)) = (f1 + f3);
                        }
                    }
                    f0_1 = *(f32*)(s4);
                    f2 = *(f32*)((u32)frame);
                    if ((f0_1 < f2)) {
                        if ((f2 < (f0_1 + f3))) {
                            *(f32*)(s4) = (f2 - f3);
                        }
                    }
                    f0_2 = *(f32*)(((u32)frame + 8));
                    if ((f0_2 < f5)) {
                        *(f32*)(((u32)frame + 8)) = f5;
                        f0_2 = f5;
                    }
                    if ((f4 < f0_2)) {
                        *(f32*)(((u32)frame + 8)) = f4;
                        f0_2 = f4;
                        fcc = (f4 < f1);
                    } else {
                        fcc = (f0_2 < f1);
                    }
                    f2_3 = (f6 + f7);
                    if (fcc) {
                        if ((f1 < (f0_2 + f2_3))) {
                            *(f32*)((u32)frame) = (f0_2 + f2_3);
                        }
                    }
                    f0_4 = *(f32*)((u32)frame);
                    f1_5 = *(f32*)(s4);
                    if ((f0_4 < f1_5)) {
                        if ((f1_5 < (f0_4 + f2_3))) {
                            *(f32*)((u32)frame) = (f1_5 - f2_3);
                        }
                    }
                    s4_8 = s4;
                } else {
                    t7 = (u32)frame;
                    t6 = 1;
                    do {
                        f1_6 = *(f32*)(t7);
                        f0_7 = *(f32*)(((u32)frame + 0x80));
                        if ((f1_6 < f0_7)) {
                            *(f32*)(t7) = f0_7;
                            f1_6 = f0_7;
                        }
                        if ((*(f32*)(((u32)frame + 0x84)) < f1_6)) {
                            *(f32*)(t7) = *(f32*)(((u32)frame + 0x84));
                        }
                        t6 = (t6 + -1);
                        t7 = (t7 + 8);
                    } while (((s32)(t6) >= 0));
                    s4_8 = ((u32)frame + 8);
                }
                s0 = ((u32)frame + 0x40);
                func_002d8120(s0, s3, (u32)frame, 0.0f);
                func_002da520(a0, s0);
                s1 = ((u32)frame + 0x10);
                func_002d8120(s1, s3, s4_8, func_002dc100(*(u32*)((a0 + 0xbf0))));
                func_002dc140(*(u32*)((a0 + 0xbf0)), s1);
            }
        } else {
            func_002d8120((u32)frame, s3, a0 + 0xbf8, 0.0f);
            func_002da520(a0, (u32)frame);
        }
    }
    return;
}

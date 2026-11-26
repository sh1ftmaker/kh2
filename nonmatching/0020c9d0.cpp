// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9eaa4 asm("D_01d9eaa4");
extern "C" u32 D_01d9eac0 asm("D_01d9eac0");
extern "C" f32 func_0020c860(u32, u32, u32, u32, u32) asm("func_0020c860");
extern "C" u32 func_0020b4b8(u32, u32, u32) asm("func_0020b4b8");
extern "C" u32 func_0020f1e0(u32, u32, u32) asm("func_0020f1e0");
extern "C" void func_0020c858(u32, u32, u32) asm("func_0020c858");

// 0x0020c9d0 func_0020c9d0
// minilink-rodata 0x003706f0   (float literals live here in the original)
void func_0020c9d0(u32 a0, u32 a1, u32 a2) asm("func_0020c9d0");
void func_0020c9d0(u32 a0, u32 a1, u32 a2) {
    u8 frame[240];
    u32 s0;
    u32 s1;
    u32 s3;
    u32 s4;
    u32 s5;
    u32 s2;
    u32 s4_0;
    u32 s7;
    u32 fp;
    u32 t0;
    u32 t1;
    u32 t2;
    u32 t3;
    u32 fp_1;
    u32 fp_2;
    s0 = *(u32*)(((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0));
    s1 = *(u32*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0) + 4));
    s3 = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0);
    s4 = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0);
    s5 = *(u32*)((((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0) + 8));
    if ((func_0020b4b8((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8))) + 0xa0, a1, a2) != 0)) {
        if ((*(u8*)((s3 + 0x12)) != 0)) {
            if ((*(u32*)((a1 + 4)) != 0xffff)) {
                s2 = *(u32*)((a1 + 4));
                func_0020c858((u32)frame, a1, s3);
                *(u32*)(((u32)frame + 0xe0)) = (*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (s2 * 0x24));
                *(u8*)(((u32)frame + 0x8a)) = 0;
                *(u32*)(((u32)frame + 0x9c)) = 0;
                *(u32*)(((u32)frame + 0xa4)) = 0;
                *(u32*)(((u32)frame + 0xa8)) = 0;
                *(u32*)(((u32)frame + 0xac)) = 0;
                *(u32*)(((u32)frame + 0xc4)) = 0;
                *(u32*)(((u32)frame + 0xe4)) = *(u32*)(((*(u32*)((*(u32*)(&D_01d9e6e4) + 0x10)) + (s2 * 0x24)) + 0x1c));
                *(u32*)(((u32)frame + 0xb8)) = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x90));
                *(u32*)(((u32)frame + 0x80)) = 4;
                *(u32*)(((u32)frame + 0x84)) = (u32)&D_01d9eac0;
                *(u32*)(((u32)frame + 0x8c)) = 0;
                *(u64*)(((u32)frame + 0x90)) = 0;
                *(u32*)(((u32)frame + 0xa0)) = ((u32)frame + 0x40);
                *(u32*)(((u32)frame + 0xbc)) = *(u32*)((*(u32*)(&D_01d9e6e8) + 0x94));
                *(u32*)(((u32)frame + 0xc0)) = 0;
                if (((s32)(*(u8*)((a1 + 8))) != 0)) {
                    *(u32*)(((u32)frame + 0x80)) = 0x204;
                }
                *(u8*)(((u32)frame + 0xcd)) = 1;
                *(u32*)(((u32)frame + 0xe8)) = *(u8*)((s4 + 0xb));
                *(u16*)(((u32)frame + 0x88)) = *(u16*)((*(u32*)(((u32)frame + 0xe4)) + 0x16));
                if (((s32)(s5) > 0)) {
                    do {
                        s4_0 = *(u8*)((s4 + 0xa));
                        s7 = *(u8*)((s4 + 9));
                        if (((s32)(*(u16*)((s0 + 0x20))) != 0)) {
                            if (((s32)((*(u64*)((s0 + 0x98)) & 0x100)) == 0)) {
                                fp = *(u8*)((s4 + 8));
                                if ((func_0020c860((u32)frame, (u32)frame + 0x40, a1, s3, s0) < (*(f32*)((a1 + 0xd0)) - *(f32*)((a1 + 0xd4))))) {
                                    *(u32*)((s0 + 0x94)) = 0;
                                } else {
                                    if ((func_0020c860((u32)frame, (u32)frame + 0x40, a1, s3, s0) < *(f32*)((a1 + 0xd0)))) {
                                        *(f32*)((s0 + 0x94)) = (*(f32*)((s0 + 0x94)) * (1.0f - ((*(f32*)((a1 + 0xd0)) - func_0020c860((u32)frame, (u32)frame + 0x40, a1, s3, s0)) / *(f32*)((a1 + 0xd4)))));
                                    }
                                }
                                if (((s32)(s1) != 0)) {
                                    t0 = ((s4_0 + *(s8*)((s0 + 0x24))) + (s32)(*(f32*)((s1 + 8))));
                                    t1 = ((s7 + *(s8*)((s0 + 0x23))) + (s32)(*(f32*)((s1 + 4))));
                                    t2 = ((fp + *(s8*)((s0 + 0x22))) + (s32)(*(f32*)(s1)));
                                    t3 = ((*(u32*)(((u32)frame + 0xe8)) + *(s8*)((s0 + 0x25))) + (s32)(*(f32*)((s1 + 0xc))));
                                } else {
                                    t0 = (s4_0 + *(s8*)((s0 + 0x24)));
                                    t1 = (s7 + *(s8*)((s0 + 0x23)));
                                    t2 = (fp + *(s8*)((s0 + 0x22)));
                                    t3 = (*(u32*)(((u32)frame + 0xe8)) + *(s8*)((s0 + 0x25)));
                                }
                                if (((s32)(t2) < 0)) {
                                    t2 = 0;
                                } else {
                                    t2 = (((s32)(t2) < (s32)(0x100)) ? t2 : 0xff);
                                }
                                if (((s32)(t1) < 0)) {
                                    t1 = 0;
                                } else {
                                    t1 = (((s32)(t1) < (s32)(0x100)) ? t1 : 0xff);
                                }
                                if (((s32)(t0) < 0)) {
                                    t0 = 0;
                                } else {
                                    t0 = (((s32)(t0) < (s32)(0x100)) ? t0 : 0xff);
                                }
                                if (((s32)(t3) < 0)) {
                                    t3 = 0;
                                } else {
                                    t3 = (((s32)(t3) < (s32)(0x80)) ? t3 : 0x7f);
                                }
                                *(u8*)(((u32)frame + 0x98)) = t2;
                                *(u8*)(((u32)frame + 0x99)) = t1;
                                *(u8*)(((u32)frame + 0x9a)) = t0;
                                *(u8*)(((u32)frame + 0x9b)) = t3;
                                *(u8*)(((u32)frame + 0x9b)) = (s32)((((f32)((s32)((t3 & 0xff))) * *(f32*)((s0 + 0x94))) * *(f32*)((s3 + 0xc))));
                                *(u32*)(((u32)frame + 0x90)) = (s32)((*(f32*)((s0 + 0x7c)) * 65536.0f));
                                *(u32*)(((u32)frame + 0x94)) = (s32)((*(f32*)((s0 + 0x80)) * 65536.0f));
                                if (((s32)(((s32)((((f32)((s32)((t3 & 0xff))) * *(f32*)((s0 + 0x94))) * *(f32*)((s3 + 0xc)))) & 0xff)) != 0)) {
                                    *(u32*)(((u32)frame + 0xb4)) = *(u32*)(&D_01d9eaa4);
                                    *(u32*)(&D_01d9eaa4) = func_0020f1e0(*(u32*)(((u32)frame + 0xe4)), (u32)frame + 0x80, *(u32*)((*(u32*)(((u32)frame + 0xe0)) + 0x20)));
                                }
                                fp_1 = fp;
                            } else {
                                fp_1 = *(u8*)((s4 + 8));
                            }
                            fp_2 = fp_1;
                        } else {
                            fp_2 = *(u8*)((s4 + 8));
                        }
                        s0 = (s0 + 0xa0);
                        s1 = (s1 ? (s1 + 0x20) : s1);
                        s5 = (s5 + -1);
                    } while (((s32)(s5) != 0));
                }
            }
        }
    }
    return;
}

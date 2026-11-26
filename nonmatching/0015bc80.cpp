// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034ac00 asm("D_0034ac00");
extern "C" f32 func_00166148(u32, u32, u32) asm("func_00166148");
extern "C" f32 func_002f8ad0(f32, f32) asm("func_002f8ad0");
extern "C" u32 func_0016b0d0() asm("func_0016b0d0");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_00191c88(u32) asm("func_00191c88");
extern "C" u32 func_001949d0() asm("func_001949d0");
extern "C" u32 func_00242ae8() asm("func_00242ae8");
extern "C" void func_0013edd0(u32, f32) asm("func_0013edd0");
extern "C" void func_0013ee28(u32, u32) asm("func_0013ee28");
extern "C" void func_0013eeb8(u32) asm("func_0013eeb8");
extern "C" void func_0014b1e0(u32, u32, u32) asm("func_0014b1e0");
extern "C" void func_0014b208(u32, u32, u32) asm("func_0014b208");
extern "C" void func_0014b220(u32, u32, u32, u32, u32) asm("func_0014b220");
extern "C" void func_0014b628(u32, u32) asm("func_0014b628");
extern "C" void func_0014b698(u32) asm("func_0014b698");
extern "C" void func_0014bb30(u32) asm("func_0014bb30");
extern "C" void func_0015bab8(u32) asm("func_0015bab8");
extern "C" void func_0016af58(u32, u32) asm("func_0016af58");

// 0x0015bc80 func_0015bc80
void func_0015bc80(u32 a0) asm("_ZN2dk5Radar4drawEv");
void func_0015bc80(u32 a0) {
    u32 v0;
    f32 fp;
    u32 s5;
    u32 s6;
    u32 loc_30;
    u32 loc_34;
    u32 loc_38;
    u32 loc_3c;
    u32 s7;
    Q16 loc_0;
    f32 loc_18;
    f32 loc_10;
    u32 loc_40;
    u32 s3;
    u32 s4;
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 s1;
    if (((s32)(*(u8*)((a0 + 0xbd0))) != 0)) {
        if ((func_00191c88(a0) == 0)) {
            v0 = func_0016b0d0();
            if (((s32)(v0) != 0)) {
                if (((s32)(func_00242ae8()) != 0)) {
                    if (((s32)(func_001949d0()) != 0)) {
                        func_0015bab8(a0 + 0x30);
                        func_0014b220(a0 + 0x2a0, 0x80, 0x80, 0x80, *(u8*)((a0 + 0xbd1)));
                        fp = func_00166148((u32)&D_0034ac00, 0x3500, 0x3520);
                        func_0014b698(a0 + 0x2a0);
                        func_0014b628(a0 + 0x7a0, fp);
                        s5 = 3;
                        s6 = (a0 + 0x30);
                        do {
                            func_0014b220(((a0 + ((s5 - 3) * -0x100)) + 0x30) + 0x370, 0x80, 0x80, 0x80, *(u8*)((a0 + 0xbd1)));
                            func_0014b628(((a0 + ((s5 - 3) * -0x100)) + 0x30) + 0x370, fp);
                            ((void(*)(u32))(*(u32*)((*(u32*)((((a0 + ((s5 - 3) * -0x100)) + 0x30) + 0x370)) + 8))))(((a0 + ((s5 - 3) * -0x100)) + 0x30) + 0x370);
                            func_0014b220(((a0 + ((s5 - 3) * -0x100)) + 0x30) + 0x770, 0x80, 0x80, 0x80, *(u8*)((a0 + 0xbd1)));
                            func_0014b628(((a0 + ((s5 - 3) * -0x100)) + 0x30) + 0x770, fp);
                            ((void(*)(u32))(*(u32*)((*(u32*)((((a0 + ((s5 - 3) * -0x100)) + 0x30) + 0x770)) + 8))))(((a0 + ((s5 - 3) * -0x100)) + 0x30) + 0x770);
                            s5 = (s5 + -1);
                        } while (((s32)(s5) >= 0));
                        loc_30 = (s6 + 0x150);
                        func_0014b628(s6, func_00166148(*(u32*)((s6 + 0xb70)), 0x2800, 0x34e0));
                        func_0014b220(s6, 0x80, 0x80, 0x80, *(u8*)((a0 + 0xbd1)));
                        func_0014b220(loc_30, 0x80, 0x80, 0x80, *(u8*)((a0 + 0xbd1)));
                        loc_34 = ((*(u32*)((a0 + 0xbc8)) >> 1) + -0x30);
                        loc_38 = (0x30 - (*(u32*)((a0 + 0xbcc)) >> 1));
                        loc_3c = ((*(u32*)((a0 + 0xbcc)) >> 1) + -0x30);
                        s7 = (0x30 - (*(u32*)((a0 + 0xbc8)) >> 1));
                        loc_0 = *(Q16*)(func_0016c028(v0));
                        loc_40 = 0;
                        s3 = (*(u32*)((a0 + 0xbc0)) - (s32)(((*(f32*)(&loc_0) / *(f32*)((a0 + 0xbb4))) * *(f32*)((a0 + 0xbb0)))));
                        s4 = ((s32)(((*(f32*)(((u32)&loc_0 + 8)) / *(f32*)((a0 + 0xbb4))) * *(f32*)((a0 + 0xbb0)))) + *(u32*)((a0 + 0xbc4)));
                        func_0016af58((u32)&loc_18 + 8, v0);
                        if (((u32)&loc_10 != ((u32)&loc_18 + 8))) {
                            *(Q16*)((u32)&loc_10) = *(Q16*)(((u32)&loc_18 + 8));
                        }
                        func_0013edd0(loc_30, func_002f8ad0(loc_10, loc_18));
                        if (((s32)(((s32)(s3) < (s32)(s7))) != 0)) {
                            s0_0 = (s7 - s3);
                            s3 = s7;
                        } else {
                            if (((s32)(((s32)(loc_34) < (s32)(s3))) != 0)) {
                                s0 = (loc_34 - s3);
                                s3 = loc_34;
                            } else {
                                s0 = 0;
                            }
                            s0_0 = s0;
                        }
                        if (((s32)(((s32)(s4) < (s32)(loc_38))) != 0)) {
                            loc_40 = (loc_38 - s4);
                            s4 = loc_38;
                        } else {
                            if (((s32)(((s32)(loc_3c) < (s32)(s4))) != 0)) {
                                loc_40 = (loc_3c - s4);
                                s4 = loc_3c;
                            }
                        }
                        func_0014b1e0(loc_30, (s32)(((s0_0 + 0x1c0) << 0x10)) >> 0x10, (s32)((((*(u32*)((s6 + 0xb74)) + loc_40) + 0x30) << 0x10)) >> 0x10);
                        s0_1 = ((*(u16*)((a0 + 0xbc0)) + (((s32)(((f32)(*(s32*)((a0 + 0xbb8))) * *(f32*)((a0 + 0xbb0)))) & 0xffff) >> 1)) & 0xffff);
                        s1 = (*(u16*)((a0 + 0xbc4)) + (((s32)(((f32)(*(s32*)((a0 + 0xbbc))) * *(f32*)((a0 + 0xbb0)))) & 0xffff) >> 1));
                        func_0014b208(s6, (s32)(((f32)(*(s32*)((a0 + 0xbb8))) * *(f32*)((a0 + 0xbb0)))) & 0xffff, (s32)(((f32)(*(s32*)((a0 + 0xbbc))) * *(f32*)((a0 + 0xbb0)))) & 0xffff);
                        func_0014b1e0(s6, (s32)((((s3 - s0_1) + 0x1c0) << 0x10)) >> 0x10, (s32)(((((*(u32*)((s6 + 0xb74)) + s4) - (s1 & 0xffff)) + 0x30) << 0x10)) >> 0x10);
                        func_0014bb30(s6);
                        func_0013ee28(loc_30, fp);
                        func_0013eeb8(loc_30);
                    }
                }
            }
        }
    }
    return;
}

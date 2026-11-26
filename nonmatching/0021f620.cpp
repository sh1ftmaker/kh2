// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e360 asm("D_01d9e360");
extern "C" u32 D_01d9e840 asm("D_01d9e840");
extern "C" u32 D_01d9e878 asm("D_01d9e878");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");
extern "C" u32 func_00313e80(u32, u32) asm("func_00313e80");
extern "C" u32 func_00313f40(u32, u32) asm("func_00313f40");
extern "C" u32 func_00314508(u32) asm("func_00314508");
extern "C" void func_0021efc0(u32, f32) asm("func_0021efc0");
extern "C" void func_0021f060(u32) asm("func_0021f060");
extern "C" void func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_002f3f98(u32, u32) asm("func_002f3f98");
extern "C" void func_002f4000(u32, u32) asm("func_002f4000");

// 0x0021f620 func_0021f620
// minilink-rodata 0x00370b70   (float literals live here in the original)
void func_0021f620(u32 a0, u32 a1) asm("func_0021f620");
void func_0021f620(u32 a0, u32 a1) {
    u8 frame[192];
    f32 loc_0;
    u32 s0;
    u32 s2;
    u32 s0_0;
    u32 s2_1;
    f32 loc_38;
    u32 s0_2;
    u32 s2_3;
    u32 loc_94;
    u16 loc_92;
    u32 loc_80;
    u32 loc_a0;
    u32 s6;
    u32 loc_ac;
    u32 loc_98;
    u16 loc_9c;
    u16 loc_9e;
    f32 f21;
    f32 f22;
    f32 f12;
    f32 f12_4;
    u32 s1;
    f32 f20;
    f32 f21_5;
    f32 f22_6;
    f32 f23;
    f32 f24;
    f32 f25;
    u32 s2_7;
    u32 s4;
    u32 loc_84;
    f32 f20_8;
    f32 loc_30;
    f32 f22_9;
    f32 loc_34;
    f32 f21_10;
    u32 s0_11;
    f32 f20_12;
    f32 f1;
    f32 f0;
    f32 loc_14;
    u32 sp;
    u32 sp_13;
    u32 sp_14;
    u32 sp_15;
    if ((*(u32*)(*(u32*)(a0)) != (u32)&D_01d9e360)) {
        if (((s32)(*(u32*)((*(u32*)(a0) + 4))) != 0)) {
            if (!((*(f32*)((*(u32*)(*(u32*)(a0)) + 0x7c)) == 0.0f))) {
                if (((s32)(*(u8*)((*(u32*)(*(u32*)(a0)) + 0x8f))) != 0)) {
                    s0 = *(u32*)(*(u32*)(a0));
                    s2 = *(u32*)(a0);
                    func_002f3f98((u32)&loc_0, *(u32*)(*(u32*)(a0)));
                    s0_2 = s0;
                    s2_3 = s2;
                } else {
                    s0_0 = *(u32*)(*(u32*)(a0));
                    s2_1 = *(u32*)(a0);
                    func_002f4000((u32)&loc_0, a1);
                    loc_38 = (*(f32*)(&D_01d9e878) + *(f32*)((s0_0 + 0x88)));
                    s0_2 = s0_0;
                    s2_3 = s2_1;
                }
                loc_94 = *(u32*)((a0 + 4));
                loc_80 = *(u32*)((s2_3 + 4));
                loc_92 = a1;
                s6 = ((u32)&loc_38 + 8);
                loc_98 = 0;
                loc_9c = 0;
                loc_9e = 0;
                loc_a0 = s6;
                loc_ac = 0;
                if (((s32)(*(u8*)((s0_2 + 0x8f))) != 0)) {
                    f21 = 0.0f;
                    f22 = 0.0f;
                } else {
                    f21 = *(f32*)(((u32)&D_01d9e840 + 0x34));
                    f22 = *(f32*)(((u32)&D_01d9e840 + 0x30));
                }
                if (((*(f32*)((s0_2 + 0xa4)) - (f32)((s32)(*(u8*)((s0_2 + 0x8e))))) <= 0.0f)) {
                    f12_4 = 0.0f;
                } else {
                    f12 = (1.0f < ((*(f32*)((s0_2 + 0xa4)) - (f32)((s32)(*(u8*)((s0_2 + 0x8e))))) / (*(f32*)((a0 + 0x10)) * *(f32*)((s0_2 + 0x78))))) ? 1.0f : ((*(f32*)((s0_2 + 0xa4)) - (f32)((s32)(*(u8*)((s0_2 + 0x8e))))) / (*(f32*)((a0 + 0x10)) * *(f32*)((s0_2 + 0x78))));
                    f12_4 = f12;
                }
                if (((s32)(*(u8*)((s2_3 + 0xe))) != 0)) {
                    f12_4 = (1.0f - f12_4);
                }
                if (((s32)(*(u8*)((s2_3 + 8))) > 0)) {
                    s1 = (s2_3 + 0x10);
                    f20 = *(f32*)((s1 + 4));
                    f21_5 = (f21 + (*(f32*)((s0_2 + 0x74)) * (f32)((s32)(*(s16*)((s2_3 + 0xc))))));
                    f22_6 = (f22 + (*(f32*)((s0_2 + 0x70)) * (f32)((s32)(*(s16*)((s2_3 + 0xc))))));
                    f23 = (*(f32*)((s0_2 + 0x74)) * (f32)((s32)(*(s16*)((s2_3 + 0xa)))));
                    f24 = (*(f32*)((s0_2 + 0x70)) * (f32)((s32)(*(s16*)((s2_3 + 0xa)))));
                    f25 = (f12_4 * ((f32)((s32)(*(u8*)(((u32)&loc_94 + 3)))) * *(f32*)((s0_2 + 0x7c))));
                    s2_7 = *(u8*)((s2_3 + 8));
                    s4 = (u32)&loc_80;
                    do {
                        loc_84 = s1;
                        f20_8 = *(f32*)((s1 + 4));
                        f22_9 = (f22_6 + (f24 * f20_8));
                        func_0021efc0(s4, f12_4 * ((f32)((s32)(*(u8*)(((u32)&loc_94 + 3)))) * *(f32*)((s0_2 + 0x7c))));
                        loc_30 = f22_9;
                        f21_10 = (f21_5 + (f23 * f20_8));
                        loc_34 = f21_10;
                        s0_11 = func_00313b80(f25);
                        *(u8*)(((u32)&loc_94 + 3)) = func_00314508(func_00313f40(s0_11, func_00313e80(func_00313f40(func_00313b80(f20_8), (u64)(0x7fd) << 0x33), (u64)(0x3fd) << 0x34)));
                        f20_12 = (f20_8 * *(f32*)((a0 + 0xc)));
                        f1 = (*(f32*)(s0_2) * f20_12);
                        loc_0 = (f1 * *(f32*)(*(u32*)((a0 + 0x14))));
                        f0 = (*(f32*)((s0_2 + 0x14)) * f20_12);
                        loc_14 = (f0 * *(f32*)((*(u32*)((a0 + 0x14)) + 4)));
                        func_002f3d08(s6, *(u32*)((a0 + 8)), (u32)&loc_0);
                        func_0021f060(s4);
                        f20 = f20_12;
                        f21_5 = f21_10;
                        f22_6 = f22_9;
                        s1 = (s1 + 8);
                        s2_7 = (s2_7 + -1);
                    } while (((s32)(s2_7) > 0));
                } else {
                    sp = (u32)frame;
                }
                sp_13 = sp;
            } else {
                sp_13 = (u32)frame;
            }
            sp_14 = sp_13;
        } else {
            sp_14 = (u32)frame;
        }
        sp_15 = sp_14;
    } else {
        sp_15 = (u32)frame;
    }
    return;
}

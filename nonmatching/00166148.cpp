// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c7b0 asm("D_0034c7b0");
extern "C" u32 D_0034c810 asm("D_0034c810");
extern "C" u32 func_001667d0(u32) asm("func_001667d0");
extern "C" void func_002f28b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002f28b8");
extern "C" void func_002f2be0(u32, u32) asm("func_002f2be0");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x00166148 func_00166148
u32 func_00166148(u32 a0, u32 a1, u32 a2) asm("func_00166148");
u32 func_00166148(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    u32 loc_4;
    u32 loc_c;
    u32 t7;
    u32 loc_10;
    u32 t6;
    u32 loc_14;
    u32 loc_8;
    u32 fp;
    u32 loc_18;
    u32 s4;
    u32 loc_1c;
    u32 t4;
    u32 t6_0;
    u32 t1;
    u32 s5;
    u32 t2;
    u32 t3;
    s32 s1;
    u32 a1_1;
    u32 t7_2;
    u32 t1_3;
    u32 t2_4;
    u32 t3_5;
    u32 t6_6;
    u32 t4_7;
    u32 t3_8;
    u32 v0;
    u32 t1_9;
    u32 t2_10;
    u32 t3_11;
    u32 t6_12;
    u32 t4_13;
    u32 t3_14;
    u32 v0_15;
    u32 t1_16;
    u32 t2_17;
    u32 t3_18;
    u32 t6_19;
    u32 t4_20;
    u32 t3_21;
    u32 v0_22;
    u32 t6_23;
    u32 t4_24;
    u32 t3_25;
    u32 v0_26;
    loc_0 = a1;
    loc_4 = a2;
    loc_c = 1;
    t7 = *(u16*)(((a0 + 0x10) + 0x14));
    loc_10 = 0;
    t6 = *(u32*)(((a0 + 0x10) + 8));
    loc_8 = (((a0 + 0x10) + *(u16*)(((a0 + 0x10) + 0xc))) + t6);
    loc_14 = (t7 >> 6);
    fp = ((a0 + 0x10) + *(u16*)(((a0 + 0x10) + 0xc)));
    loc_18 = func_001667d0(t7);
    s4 = loc_14;
    loc_1c = func_001667d0(*(u16*)(((a0 + 0x10) + 0x16)));
    t4 = *(u16*)(((a0 + 0x10) + 0x14));
    t6_0 = *(u8*)(((a0 + 0x10) + 0x13));
    t1 = *(u16*)(((a0 + 0x10) + 0x16));
    switch (t6_0) {
    case 1:
        loc_c = 0;
        loc_10 = 2;
        s5 = 2;
        t2 = (t4 & 0xffff);
        t3 = (t1 & 0xffff);
        break;
    case 2:
        loc_c = 0;
        loc_10 = 1;
        s5 = 1;
        t2 = (t4 & 0xffff);
        t3 = (t1 & 0xffff);
        break;
    case 3:
        loc_10 = 0;
        s5 = 0;
        t2 = (t4 & 0xffff);
        t3 = (t1 & 0xffff);
        break;
    case 4:
        loc_10 = 0x14;
        s5 = 0x14;
        t2 = (t4 & 0xffff);
        t3 = (t1 & 0xffff);
        break;
    case 5:
        loc_10 = 0x13;
        s5 = 0x13;
        t2 = (t4 & 0xffff);
        t3 = (t1 & 0xffff);
        break;
    case 6:
        loc_10 = 0x14;
        s4 = ((t4 & 0xffff) >> 7);
        s5 = 0;
        t2 = ((t4 & 0xffff) >> 1);
        t3 = ((t1 & 0xffff) >> 2);
        break;
    case 7:
        loc_10 = 0x13;
        s4 = ((t4 & 0xffff) >> 7);
        s5 = 0;
        t2 = ((t4 & 0xffff) >> 1);
        t3 = ((t1 & 0xffff) >> 1);
        break;
    case 0:
    default:
        s5 = 0;
        t2 = (t4 & 0xffff);
        t3 = (t1 & 0xffff);
        break;
    }
    if (((s32)(((u32)(0x7fff) < (u32)(*(u32*)(((a0 + 0x10) + 8))))) != 0)) {
        s1 = ((s32)((loc_0 << 0x10)) >> 0x10);
        func_002f28b8((u32)&D_0034c810, (s32)((loc_0 << 0x10)) >> 0x10, (s32)((s4 << 0x10)) >> 0x10, (s32)((s5 << 0x10)) >> 0x10, 0, 0, (s32)((t2 << 0x10)) >> 0x10, t3 >> 1);
        func_003058a0(0);
        func_002f2be0((u32)&D_0034c810, fp);
        func_002f28b8((u32)&D_0034c810 + -0x60, s1, (s32)((s4 << 0x10)) >> 0x10, (s32)((s5 << 0x10)) >> 0x10, 0, t3 >> 1, (s32)((t2 << 0x10)) >> 0x10, t3 >> 1);
        a1_1 = *(u32*)(((a0 + 0x10) + 8));
    } else {
        func_002f28b8((u32)&D_0034c7b0, (s32)((loc_0 << 0x10)) >> 0x10, (s32)((s4 << 0x10)) >> 0x10, (s32)((s5 << 0x10)) >> 0x10, 0, 0, (s32)((t2 << 0x10)) >> 0x10, (s32)((t3 << 0x10)) >> 0x10);
    }
    func_003058a0(0);
    func_002f2be0((u32)&D_0034c810 + -0x60, fp + (a1_1 >> 1));
    if (((s32)(((u32)((loc_10 + -0x13)) < (u32)(2))) != 0)) {
        t7_2 = *(u8*)(((a0 + 0x10) + 0x12));
        if ((((t7_2 & 0x1f) & 0xff) != 1)) {
            if (((s32)(((s32)(((t7_2 & 0x1f) & 0xff)) < (s32)(2))) != 0)) {
                if (((s32)(((t7_2 & 0x1f) & 0xff)) != 0)) {
                    t1_3 = loc_10;
                    if ((t1_3 == 0x14)) {
                        t2_4 = 8;
                        t3_5 = 2;
                    } else {
                        t2_4 = 0x10;
                        t3_5 = 0x10;
                    }
                    func_002f28b8((u32)&D_0034c810, (s32)((loc_4 << 0x10)) >> 0x10, 0, 0, 0, 0, (s32)((t2_4 << 0x10)) >> 0x10, (s32)((t3_5 << 0x10)) >> 0x10);
                    func_003058a0(0);
                    t6_6 = loc_14;
                    t4_7 = loc_10;
                    t3_8 = loc_c;
                    func_002f2be0((u32)&D_0034c810, loc_8);
                    v0 = (((loc_0 | ((loc_18 << 0x1a) | ((u64)(t3_8) << 0x22))) | (((t6_6 << 0xe) | (t4_7 << 0x14)) | ((loc_1c << 0x1e) | ((u64)(loc_4) << 0x25)))) | ((u64)(1) << 0x3d));
                } else {
                    v0 = 0;
                }
                v0_15 = v0;
            } else {
                t1_9 = loc_10;
                if ((t1_9 == 0x14)) {
                    t2_10 = 8;
                    t3_11 = 2;
                } else {
                    t2_10 = 0x10;
                    t3_11 = 0x10;
                }
                func_002f28b8((u32)&D_0034c810, (s32)((loc_4 << 0x10)) >> 0x10, 0, 0, 0, 0, (s32)((t2_10 << 0x10)) >> 0x10, (s32)((t3_11 << 0x10)) >> 0x10);
                func_003058a0(0);
                t6_12 = loc_14;
                t4_13 = loc_10;
                t3_14 = loc_c;
                func_002f2be0((u32)&D_0034c810, loc_8);
                v0_15 = (((loc_0 | ((loc_18 << 0x1a) | ((u64)(t3_14) << 0x22))) | (((t6_12 << 0xe) | (t4_13 << 0x14)) | ((loc_1c << 0x1e) | ((u64)(loc_4) << 0x25)))) | ((u64)(1) << 0x3d));
            }
            v0_22 = v0_15;
        } else {
            t1_16 = loc_10;
            if ((t1_16 == 0x14)) {
                t2_17 = 8;
                t3_18 = 2;
            } else {
                t2_17 = 0x10;
                t3_18 = 0x10;
            }
            func_002f28b8((u32)&D_0034c810, (s32)((loc_4 << 0x10)) >> 0x10, 0, 0, 0, 0, (s32)((t2_17 << 0x10)) >> 0x10, (s32)((t3_18 << 0x10)) >> 0x10);
            func_003058a0(0);
            t6_19 = loc_14;
            t4_20 = loc_10;
            t3_21 = loc_c;
            func_002f2be0((u32)&D_0034c810, loc_8);
            v0_22 = (((loc_0 | ((loc_18 << 0x1a) | ((u64)(t3_21) << 0x22))) | (((t6_19 << 0xe) | (t4_20 << 0x14)) | ((loc_1c << 0x1e) | ((u64)(loc_4) << 0x25)))) | ((u64)(1) << 0x3d));
        }
        v0_26 = v0_22;
    } else {
        t6_23 = loc_14;
        t4_24 = loc_10;
        t3_25 = loc_c;
        v0_26 = (((loc_0 | ((loc_18 << 0x1a) | ((u64)(t3_25) << 0x22))) | (((t6_23 << 0xe) | (t4_24 << 0x14)) | ((loc_1c << 0x1e) | ((u64)(loc_4) << 0x25)))) | ((u64)(1) << 0x3d));
    }
    return v0_26;
}

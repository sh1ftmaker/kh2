// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00192388(u32) asm("func_00192388");
extern "C" f32 func_00192440(u32, u32) asm("func_00192440");
extern "C" f32 func_00192818(u32, u32, u32, u32) asm("func_00192818");
extern "C" f32 func_00192fb8(u32) asm("func_00192fb8");
extern "C" u32 func_00192450(u32, u32) asm("func_00192450");
extern "C" u32 func_00192498(u32, u32) asm("func_00192498");
extern "C" u32 func_001a9808(u32, u32) asm("func_001a9808");
extern "C" u32 func_001aa0a8(u32, u32, u32, u32, u32) asm("func_001aa0a8");
extern "C" u32 func_001aa310(u32, u32, u32) asm("func_001aa310");
extern "C" u32 func_001aa6f0(u32, u32) asm("func_001aa6f0");
extern "C" u32 func_001aa940(u32, u32, u32, u32, u32) asm("func_001aa940");
extern "C" u32 func_001aae90(u32) asm("func_001aae90");
extern "C" void func_00192f98(u32) asm("func_00192f98");

// 0x001a9c20 YS::MESSAGEDRAW::draw_line(YS::MESSAGEDRAW::ENV*, YS::MESSAGE const*)
f32 lift_001a9c20(u32 a0, u32 a1, u32 a2) asm("_ZN2YS11MESSAGEDRAW9draw_lineEPNS0_3ENVEPKNS_7MESSAGEE");
f32 lift_001a9c20(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    u32 loc_10;
    u32 loc_20;
    u32 loc_24;
    u32 loc_14;
    u32 loc_18;
    u32 loc_1c;
    u32 loc_4;
    u32 t7;
    u32 t6;
    u32 t6_0;
    u32 s5;
    f32 f0;
    u32 t6_1;
    u32 t7_2;
    u32 t7_3;
    u32 t7_4;
    u32 t6_5;
    u32 t5;
    u32 t7_6;
    u32 t6_7;
    u32 a1_8;
    u32 t7_9;
    u32 t7_10;
    u32 s0;
    u32 t7_11;
    f32 f0_12;
    u32 t7_13;
    u32 t7_14;
    u32 s1;
    u32 s0_15;
    u32 s5_16;
    u32 t6_17;
    u32 t7_18;
    f32 f0_19;
    u32 t7_20;
    u32 t0;
    u32 t0_21;
    u32 t7_22;
    u32 a0_23;
    u32 v0;
    f32 f0_24;
    u32 v0_25;
    f32 f0_26;
    loc_20 = *(u32*)((a1 + 0x30));
    loc_24 = *(u32*)((a1 + 0x34));
    loc_10 = *(u32*)((a1 + 0x20));
    loc_14 = *(u32*)((a1 + 0x24));
    loc_18 = *(u32*)((a1 + 0x28));
    loc_1c = *(u32*)((a1 + 0x2c));
    loc_0 = 0;
    loc_4 = 0;
    t7 = loc_4;
    t6 = *(u32*)((a1 + 0xc));
    t6_0 = (t6 + (t7 << 4));
    func_00192818(a2, *(u32*)((a0 + 4)), (u32)&loc_10, (u32)&loc_0);
    *(u32*)((a1 + 0xc)) = t6_0;
    if (((s32)(a2) != 0)) {
        s5 = *(u32*)((a1 + 8));
        do {
            if ((*(f32*)((a1 + 0x18)) < 0.0f)) {
                f0 = 0.0f;
                return f0;
            }
            if (((s32)(func_00192440(a2, 0)) != 0)) {
                t6_1 = *(u8*)(a2);
                switch (t6_1) {
                case 0:
                case 16:
                    t7_2 = *(u32*)(a0);
                    *(u32*)(a0) = (t7_2 | 1);
                    return func_00192440(a2, 0);
                case 1:
                    s5 = func_001aa310(a0, a1, s5);
                    break;
                case 2:
                    t7_3 = *(u32*)((*(u32*)(a1) + 0x14));
                    t7_4 = (t7_3 + *(u32*)((a1 + 0x2c)));
                    t6_5 = *(u32*)((a1 + 0xc));
                    *(u32*)((a1 + 0xc)) = (t6_5 + (t7_4 << 4));
                    func_00192388(a2);
                    return func_00192388(a2);
                case 3:
                    *(u32*)((a1 + 0x10)) = *(u32*)((a0 + 0x3c));
                    func_00192f98(a1 + 0x20);
                    break;
                case 4:
                    *(u32*)((a1 + 0x10)) = func_001aa6f0(a0, *(u32*)(func_001a9808(*(u8*)((a2 + 1)), 0xffffffff)));
                    break;
                case 7:
                    t5 = *(u8*)((a2 + 4));
                    t7_6 = *(u8*)((a2 + 3));
                    t6_7 = *(u8*)((a2 + 2));
                    a1_8 = *(u8*)((a2 + 1));
                    t7_9 = (t7_6 << 0x10);
                    *(u32*)((a1 + 0x10)) = func_001aa6f0(a0, (a1_8 | (t5 << 0x18)) | (t7_9 | (t6_7 << 8)));
                    break;
                case 9:
                    t7_10 = *(u32*)(*(u32*)(a1));
                    s0 = *(u8*)((a2 + 1));
                    if (((s32)((t7_10 ^ 4)) != 0)) {
                        if (((s32)(func_001aa940(a1, s5, t6_0, *(u32*)((a1 + 0x10)), s0)) != 0)) {
                            t7_11 = *(u32*)((a1 + 4));
                            *(u32*)((a1 + 4)) = (t7_11 + 1);
                        }
                    }
                    f0_12 = *(f32*)((a1 + 0x18));
                    *(f32*)((a1 + 0x18)) = (f0_12 - *(f32*)((a0 + 0x5c)));
                    s5 = (s5 + (func_001aae90(s0) << 4));
                    break;
                case 10:
                    *(f32*)((a1 + 0x24)) = ((f32)((s32)(*(u8*)((a2 + 1)))) / (f32)((s32)(*(u8*)((*(u32*)(a1) + 0x11)))));
                    break;
                case 11:
                    *(f32*)((a1 + 0x28)) = ((f32)((s32)(*(u8*)((a2 + 1)))) / 100.0f);
                    break;
                case 12:
                    *(u32*)((a1 + 0x2c)) = *(u8*)((a2 + 1));
                    break;
                case 14:
                    t7_13 = *(u8*)((a2 + 1));
                    *(u32*)((a1 + 0x38)) = (t7_13 << 3);
                    break;
                case 15:
                    t7_14 = *(u32*)((a0 + 0x18));
                    if (((s32)(t7_14) != 0)) {
                        s1 = *(u8*)((a2 + 1));
                        s0_15 = func_00192498(a2, 2);
                        ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x18))) + 0x2c))))(*(u32*)((a0 + 0x18)), s1, s0_15, func_00192498(a2, 4));
                    }
                    break;
                case 17:
                    s5_16 = (*(u32*)((a0 + 0x44)) + (func_00192498(a2, 1) << 4));
                    *(u32*)((a1 + 8)) = s5_16;
                    t6_17 = *(u32*)((a0 + 0x48));
                    t7_18 = loc_4;
                    *(u32*)((a1 + 0xc)) = ((t6_17 + (func_00192498(a2, 3) << 4)) - (t7_18 << 4));
                    s5 = s5_16;
                    t6_0 = ((t6_17 + (func_00192498(a2, 3) << 4)) - (t7_18 << 4));
                    break;
                case 20:
                    f0_19 = *(f32*)((a1 + 0x18));
                    *(f32*)((a1 + 0x18)) = (f0_19 - (f32)((s32)(func_00192498(a2, 1))));
                    break;
                case 21:
                    s5 = (s5 + 0x200);
                    t7_20 = *(u32*)((a0 + 0x18));
                    if (((s32)(t7_20) != 0)) {
                        t0 = loc_4;
                        t0_21 = (t0 << 4);
                        ((void(*)(u32, u32, u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x18))) + 0x18))))(*(u32*)((a0 + 0x18)), *(u32*)((a1 + 0x1c)), func_00192498(a2, 1), (s32)((s5 + -0x7000)) >> 4, ((t6_0 - (t0_21 >> 1)) + -0x7300) >> 4);
                    }
                    t7_22 = *(u32*)((a1 + 0x1c));
                    *(u32*)((a1 + 0x1c)) = (t7_22 + 1);
                    break;
                case 22:
                    a0_23 = *(u32*)((a0 + 0x18));
                    if (((s32)(a0_23) != 0)) {
                        ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(a0_23) + 0x30))))(a0_23, s5, t6_0, *(u8*)((a2 + 1)));
                    }
                    s5 = (s5 + 0x200);
                    break;
                case 5:
                case 6:
                case 8:
                case 13:
                case 18:
                case 19:
                default:
                    break;
                }
            } else {
                v0 = func_00192450(a2, 0);
                if ((v0 == 0x46)) {
                    if ((0xffffffff == v0)) {
                        v0 = 0x47;
                        s5 = (s5 - (s32)((func_00192fb8(a1 + 0x20) * 32.0f)));
                    }
                }
                f0_24 = *(f32*)((a1 + 0x18));
                *(f32*)((a1 + 0x18)) = (f0_24 - *(f32*)((a0 + 0x5c)));
                s5 = func_001aa0a8(a0, a1, s5, t6_0, v0);
            }
            v0_25 = func_00192388(a2);
            a2 = v0_25;
            f0 = v0_25;
        } while (((s32)(v0_25) != 0));
        f0_26 = f0;
    } else {
        f0_26 = func_00192818(a2, *(u32*)((a0 + 4)), (u32)&loc_10, (u32)&loc_0);
    }
    return f0_26;
}

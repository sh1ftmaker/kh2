// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00352bd0 asm("D_00352bd0");
extern "C" f32 func_0018a550(u32, u32) asm("func_0018a550");
extern "C" f32 func_0019ba60(u32, u32) asm("func_0019ba60");
extern "C" f32 func_002bc188(u32, u32) asm("func_002bc188");
extern "C" u32 func_0016bc20(u32, u32, u32) asm("func_0016bc20");
extern "C" u32 func_00180618(u32, u32) asm("func_00180618");
extern "C" u32 func_001e0cc8(u32) asm("func_001e0cc8");
extern "C" void func_0018a818(u32, u32, u32) asm("func_0018a818");
extern "C" void func_001e1070(u32, u32) asm("func_001e1070");
extern "C" void func_001e23b0(u32, u32) asm("func_001e23b0");
extern "C" void func_001e2660(u32, u32) asm("func_001e2660");

// 0x001e1350 func_001e1350
// minilink-rodata 0x0036e8d0   (float literals live here in the original)
f32 func_001e1350(u32 a0, u32 a1) asm("_ZN3ryj5LASER13check_obj_hitEPN2YS6BTLOBJE");
f32 func_001e1350(u32 a0, u32 a1) {
    u8 frame[112];
    u32 v0;
    Q16 loc_0;
    u32 loc_1c;
    u32 loc_10;
    f32 loc_18;
    f32 loc_14;
    u32 loc_30;
    u32 loc_3c;
    f32 loc_38;
    f32 loc_34;
    f32 f0;
    f32 f0_0;
    f32 f0_1;
    f32 f0_2;
    u32 a1_3;
    f32 f0_4;
    f32 f0_5;
    f32 f0_6;
    u32 a1_7;
    f32 f0_8;
    f32 f0_9;
    f32 f0_10;
    f32 f0_11;
    f32 f0_12;
    f32 f0_13;
    f32 f0_14;
    if (((s32)(a1) != 0)) {
        if (((s32)(func_0019ba60(a1, a1)) != 0)) {
            v0 = func_001e0cc8(a0);
            if (((u32)frame != v0)) {
                loc_0 = *(Q16*)(v0);
            }
            loc_1c = 0;
            loc_10 = 3;
            loc_14 = 50.0f;
            loc_18 = 50.0f;
            loc_30 = 3;
            loc_3c = 0;
            *(Q16*)(((u32)&loc_1c + 4)) = loc_0;
            loc_34 = 200.0f;
            loc_38 = 200.0f;
            *(Q16*)(((u32)&loc_3c + 4)) = loc_0;
            func_0018a818((u32)&loc_3c + 0x14, a1, func_0016bc20(a1, 1, 0xffffffff));
            if (((s32)(func_0018a550((u32)&loc_30, (u32)&loc_3c + 0x14)) != 0)) {
                if ((*(u32*)(((a1 + 0x140) + 0x14)) != 0xfe)) {
                    if ((*(u32*)(((a1 + 0x140) + 0x14)) != 0xff)) {
                        if ((*(u32*)(((a1 + 0x140) + 0x14)) == 0x100)) {
                            if (((s32)(func_00180618(a1 + 0x140, (u32)&loc_3c + 0x14)) == 0)) {
                                func_001e2660(*(u32*)(&D_00352bd0), (u32)&loc_0);
                                func_002bc188(0x5b531, (u32)&loc_0);
                                *(u32*)((a0 + 0x24)) = 6;
                                f0_0 = func_002bc188(0x5b531, (u32)&loc_0);
                            } else {
                                if (((s32)(func_0018a550((u32)&loc_10, (u32)&loc_3c + 0x14)) != 0)) {
                                    func_001e1070(a0, a1);
                                    func_001e23b0(*(u32*)(&D_00352bd0), (u32)&loc_0);
                                    func_002bc188(0x5b51f, (u32)&loc_0);
                                    *(u32*)((a0 + 0x24)) = 6;
                                    f0 = func_002bc188(0x5b51f, (u32)&loc_0);
                                } else {
                                    f0 = func_0018a550((u32)&loc_10, (u32)&loc_3c + 0x14);
                                }
                                f0_0 = f0;
                            }
                            f0_2 = f0_0;
                        } else {
                            if (((s32)(func_0018a550((u32)&loc_10, (u32)&loc_3c + 0x14)) != 0)) {
                                func_001e1070(a0, a1);
                                func_001e23b0(*(u32*)(&D_00352bd0), (u32)&loc_0);
                                func_002bc188(0x5b51f, (u32)&loc_0);
                                *(u32*)((a0 + 0x24)) = 6;
                                f0_1 = func_002bc188(0x5b51f, (u32)&loc_0);
                            } else {
                                f0_1 = func_0018a550((u32)&loc_10, (u32)&loc_3c + 0x14);
                            }
                            f0_2 = f0_1;
                        }
                        f0_6 = f0_2;
                    } else {
                        if (((s32)(func_00180618(a1 + 0x140, a1_3)) == 0)) {
                            func_001e2660(*(u32*)(&D_00352bd0), (u32)&loc_0);
                            func_002bc188(0x5b531, (u32)&loc_0);
                            *(u32*)((a0 + 0x24)) = 6;
                            f0_5 = func_002bc188(0x5b531, (u32)&loc_0);
                        } else {
                            if (((s32)(func_0018a550((u32)&loc_10, (u32)&loc_3c + 0x14)) != 0)) {
                                func_001e1070(a0, a1);
                                func_001e23b0(*(u32*)(&D_00352bd0), (u32)&loc_0);
                                func_002bc188(0x5b51f, (u32)&loc_0);
                                *(u32*)((a0 + 0x24)) = 6;
                                f0_4 = func_002bc188(0x5b51f, (u32)&loc_0);
                            } else {
                                f0_4 = func_0018a550((u32)&loc_10, (u32)&loc_3c + 0x14);
                            }
                            f0_5 = f0_4;
                        }
                        f0_6 = f0_5;
                    }
                    f0_10 = f0_6;
                } else {
                    if (((s32)(func_00180618(a1 + 0x140, a1_7)) == 0)) {
                        func_001e2660(*(u32*)(&D_00352bd0), (u32)&loc_0);
                        func_002bc188(0x5b531, (u32)&loc_0);
                        *(u32*)((a0 + 0x24)) = 6;
                        f0_9 = func_002bc188(0x5b531, (u32)&loc_0);
                    } else {
                        if (((s32)(func_0018a550((u32)&loc_10, (u32)&loc_3c + 0x14)) != 0)) {
                            func_001e1070(a0, a1);
                            func_001e23b0(*(u32*)(&D_00352bd0), (u32)&loc_0);
                            func_002bc188(0x5b51f, (u32)&loc_0);
                            *(u32*)((a0 + 0x24)) = 6;
                            f0_8 = func_002bc188(0x5b51f, (u32)&loc_0);
                        } else {
                            f0_8 = func_0018a550((u32)&loc_10, (u32)&loc_3c + 0x14);
                        }
                        f0_9 = f0_8;
                    }
                    f0_10 = f0_9;
                }
                f0_12 = f0_10;
            } else {
                if (((s32)(func_0018a550((u32)&loc_10, (u32)&loc_3c + 0x14)) != 0)) {
                    func_001e1070(a0, a1);
                    func_001e23b0(*(u32*)(&D_00352bd0), (u32)&loc_0);
                    func_002bc188(0x5b51f, (u32)&loc_0);
                    *(u32*)((a0 + 0x24)) = 6;
                    f0_11 = func_002bc188(0x5b51f, (u32)&loc_0);
                } else {
                    f0_11 = func_0018a550((u32)&loc_10, (u32)&loc_3c + 0x14);
                }
                f0_12 = f0_11;
            }
            f0_13 = f0_12;
        } else {
            f0_13 = func_0019ba60(a1, a1);
        }
        f0_14 = f0_13;
    }
    return f0_14;
}

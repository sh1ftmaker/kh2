// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e360 asm("D_01d9e360");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" f32 func_002229a0(u32) asm("func_002229a0");
extern "C" u32 func_00222568() asm("func_00222568");
extern "C" void func_002226b8(u32, u32) asm("func_002226b8");
extern "C" void func_002f3d98(u32, u32) asm("func_002f3d98");
extern "C" void func_002f3ed0(u32, u32, u32, f32) asm("func_002f3ed0");
extern "C" void func_002f3ef8(u32, u32, u32) asm("func_002f3ef8");
extern "C" void func_002f3f10(u32, u32, u32) asm("func_002f3f10");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");
extern "C" void func_002f3f88(u32, u32) asm("func_002f3f88");

// 0x001fbd78 func_001fbd78
// minilink-rodata 0x00370264   (float literals live here in the original)
void func_001fbd78(u32 a0, u32 a1, u32 a2) asm("func_001fbd78");
void func_001fbd78(u32 a0, u32 a1, u32 a2) {
    u8 frame[48];
    u32 t7;
    u32 t5;
    u32 s0;
    u32 s2;
    u32 s1;
    f32 f20;
    u32 t6;
    u32 t6_0;
    u32 s0_1;
    u32 s2_2;
    u32 s1_3;
    f32 f20_4;
    u32 t6_5;
    u32 t6_6;
    u32 s0_7;
    u32 s2_8;
    u32 s1_9;
    f32 f20_10;
    u32 t6_11;
    u32 t6_12;
    t7 = (a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8)));
    if ((*(u32*)((a0 + 0xc)) == *(u32*)(a1))) {
        *(f32*)((t7 + 0xa0)) = *(f32*)((a1 + 4));
        if ((*(u32*)((a1 + 8)) != 0xffffffff)) {
            t5 = (*(u32*)((a1 + 8)) << 4);
            a1 = ((*(u32*)(((t5 + *(u32*)((*(u32*)(&D_01d9e6e0) + 0x80))) + 4)) + *(u32*)((a1 + 0xc))) + 0xa0);
        } else {
            a1 = (u32)&D_01d9e360;
        }
        *(u32*)(((t7 + 0xa0) + 4)) = a1;
        if (((s32)(*(u32*)((a0 + 0xc))) == 0)) {
            if ((*(u8*)((a0 + 0x9d)) != 0)) {
                if ((*(u32*)(&D_01d9ea9c) == 0)) {
                    if (((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00)) == 0)) {
                        s0 = (t7 + 0xa0);
                        if ((*(u32*)((s0 + 4)) != (u32)&D_01d9e360)) {
                            s2 = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0);
                            func_002f3f10((u32)frame, *(u32*)((s0 + 4)), (a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                            s1 = ((u32)frame + 0x20);
                            func_002f3d98((u32)frame, (u32)frame);
                            func_002f3f88(s1, s2);
                            f20 = func_002229a0(s1);
                            func_002f3d98(s1, s1);
                            func_002f3ef8((u32)frame + 0x10, s1, (u32)frame);
                            if ((*(u64*)(((u32)frame + 0x10)) == 0)) {
                                if ((*(u64*)(((u32)frame + 0x18)) == 0)) {
                                    t6 = (((s32)(func_00222568()) % 3) << 2);
                                    t6_0 = (t6 + (u32)frame);
                                    *(f32*)(t6_0) = (*(f32*)(t6_0) + 0.05000000074505806f);
                                }
                            }
                            func_002f3ed0((u32)frame, (u32)frame, s1, *(f32*)(s0));
                            func_002f3d98((u32)frame, (u32)frame);
                            func_002f3f40((u32)frame, (u32)frame, f20);
                            func_002226b8(s2, (u32)frame);
                        }
                    }
                }
            }
        } else {
            if ((*(u32*)(&D_01d9ea9c) == 0)) {
                if (((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00)) == 0)) {
                    s0_1 = (t7 + 0xa0);
                    if ((*(u32*)((s0_1 + 4)) != (u32)&D_01d9e360)) {
                        s2_2 = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0);
                        func_002f3f10((u32)frame, *(u32*)((s0_1 + 4)), (a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                        s1_3 = ((u32)frame + 0x20);
                        func_002f3d98((u32)frame, (u32)frame);
                        func_002f3f88(s1_3, s2_2);
                        f20_4 = func_002229a0(s1_3);
                        func_002f3d98(s1_3, s1_3);
                        func_002f3ef8((u32)frame + 0x10, s1_3, (u32)frame);
                        if ((*(u64*)(((u32)frame + 0x10)) == 0)) {
                            if ((*(u64*)(((u32)frame + 0x18)) == 0)) {
                                t6_5 = (((s32)(func_00222568()) % 3) << 2);
                                t6_6 = (t6_5 + (u32)frame);
                                *(f32*)(t6_6) = (*(f32*)(t6_6) + 0.05000000074505806f);
                            }
                        }
                        func_002f3ed0((u32)frame, (u32)frame, s1_3, *(f32*)(s0_1));
                        func_002f3d98((u32)frame, (u32)frame);
                        func_002f3f40((u32)frame, (u32)frame, f20_4);
                        func_002226b8(s2_2, (u32)frame);
                    }
                }
            }
        }
    } else {
        if ((*(u32*)(&D_01d9ea9c) == 0)) {
            if (((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00)) == 0)) {
                s0_7 = (t7 + 0xa0);
                if ((*(u32*)((s0_7 + 4)) != (u32)&D_01d9e360)) {
                    s2_8 = ((a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xa0);
                    func_002f3f10((u32)frame, *(u32*)((s0_7 + 4)), (a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0);
                    s1_9 = ((u32)frame + 0x20);
                    func_002f3d98((u32)frame, (u32)frame);
                    func_002f3f88(s1_9, s2_8);
                    f20_10 = func_002229a0(s1_9);
                    func_002f3d98(s1_9, s1_9);
                    func_002f3ef8((u32)frame + 0x10, s1_9, (u32)frame);
                    if ((*(u64*)(((u32)frame + 0x10)) == 0)) {
                        if ((*(u64*)(((u32)frame + 0x18)) == 0)) {
                            t6_11 = (((s32)(func_00222568()) % 3) << 2);
                            t6_12 = (t6_11 + (u32)frame);
                            *(f32*)(t6_12) = (*(f32*)(t6_12) + 0.05000000074505806f);
                        }
                    }
                    func_002f3ed0((u32)frame, (u32)frame, s1_9, *(f32*)(s0_7));
                    func_002f3d98((u32)frame, (u32)frame);
                    func_002f3f40((u32)frame, (u32)frame, f20_10);
                    func_002226b8(s2_8, (u32)frame);
                }
            }
        }
    }
    return;
}

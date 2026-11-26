// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00316f38(u32, u32) asm("func_00316f38");
extern "C" u32 func_003172f0(u32, u32, u32, u32) asm("func_003172f0");
extern "C" void func_002fd160(u32, u32) asm("func_002fd160");

// 0x00317fc8 func_00317fc8
void func_00317fc8(u32 a0, u32 a1) asm("func_00317fc8");
void func_00317fc8(u32 a0, u32 a1) {
    u8 frame[768];
    u32 t7;
    u32 t6;
    u32 t5;
    u32 v0;
    u32 s2;
    s32 s3;
    u32 v0_0;
    u32 s3_1;
    u32 s2_2;
    u32 s3_3;
    u32 v0_4;
    u32 sp;
    u32 sp_5;
    u32 sp_6;
    u32 sp_7;
    t7 = a0;
    t6 = (u32)frame;
    t5 = (a0 + 0x2e0);
    do {
        *(u64*)(t6) = *(u64*)(t7);
        *(u64*)((t6 + 8)) = *(u64*)((t7 + 8));
        *(u64*)((t6 + 0x10)) = *(u64*)((t7 + 0x10));
        *(u64*)((t6 + 0x18)) = *(u64*)((t7 + 0x18));
        t7 = (t7 + 0x20);
        t6 = (t6 + 0x20);
    } while ((t7 != t5));
    *(u64*)(t6) = *(u64*)(t7);
    if ((*(u32*)((a1 + 0xb2c)) != 1)) {
        if ((*(u32*)((a1 + 0xb2c)) == 2)) {
            v0 = func_00316f38(*(u32*)((a1 + 0xb28)), (u32)frame + 0x2f0);
            *(u32*)((a0 + 0x2c4)) = (s32)((u64)(func_003172f0(v0, v0 + *(u32*)(((u32)frame + 0x2f0)), a0, 0)));
            s2 = 0xb0;
            do {
                s3 = (s32)((u64)(func_003172f0(v0, v0 + *(u32*)(((u32)frame + 0x2f0)), a0, 0)));
                if ((*(u32*)((a1 + 8)) != 1)) {
                    if ((*(u32*)((a1 + 8)) != 0)) {
                        if ((*(u32*)((a1 + 8)) != 2)) {
                            if ((*(u32*)((a1 + 8)) == 3)) {
                                v0_0 = func_00316f38(*(u32*)(a1), (u32)frame + 0x2f8);
                                *(u32*)(a0) = (s32)((u64)(func_003172f0(v0_0, v0_0 + *(u32*)(((u32)frame + 0x2f8)), (u32)frame, (u32)(s3))));
                            }
                        } else {
                            *(u32*)(a0) = *(u32*)(((*(u32*)(a1) << 2) + (u32)frame));
                        }
                    }
                } else {
                    *(u32*)(a0) = ((s32)((u64)(func_003172f0(v0, v0 + *(u32*)(((u32)frame + 0x2f0)), a0, 0))) + *(u32*)(a1));
                }
                a0 = (a0 + 4);
                s2 = (s2 + -1);
                a1 = (a1 + 0x10);
            } while (((s32)(s2) >= 0));
            return;
        } else {
            func_002fd160(a0, (u32)frame + 0x2f0);
        }
    } else {
        s3_1 = (*(u32*)(((*(u32*)((a1 + 0xb20)) << 2) + a0)) == 0) ? *(u32*)((a0 + 0x2c4)) : (s32)((u64)(*(u64*)(*(u32*)((((s32)((u64)(*(u64*)((a1 + 0xb20)))) << 2) + a0)))));
        *(u32*)((a0 + 0x2c4)) = (s3_1 + *(u32*)((a1 + 0xb18)));
        s2_2 = 0xb0;
        do {
            s3_3 = (s3_1 + *(u32*)((a1 + 0xb18)));
            if ((*(u32*)((a1 + 8)) != 1)) {
                if ((*(u32*)((a1 + 8)) != 0)) {
                    if ((*(u32*)((a1 + 8)) != 2)) {
                        if ((*(u32*)((a1 + 8)) == 3)) {
                            v0_4 = func_00316f38(*(u32*)(a1), (u32)frame + 0x2f8);
                            *(u32*)(a0) = (s32)((u64)(func_003172f0(v0_4, v0_4 + *(u32*)(((u32)frame + 0x2f8)), (u32)frame, (u32)(s3_3))));
                            sp = (u32)frame;
                        }
                        sp_5 = sp;
                    } else {
                        *(u32*)(a0) = *(u32*)(((*(u32*)(a1) << 2) + (u32)frame));
                        sp_5 = (u32)frame;
                    }
                    a0 = (a0 + 4);
                    sp_6 = sp_5;
                } else {
                    a0 = (a0 + 4);
                }
                sp_7 = sp_6;
            } else {
                *(u32*)(a0) = ((s3_1 + *(u32*)((a1 + 0xb18))) + *(u32*)(a1));
                a0 = (a0 + 4);
            }
            s2_2 = (s2_2 + -1);
            a1 = (a1 + 0x10);
        } while (((s32)(s2_2) >= 0));
        return;
    }
}

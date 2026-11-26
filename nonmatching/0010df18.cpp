// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00345b28 asm("D_00345b28");
extern "C" u32 D_00345b84 asm("D_00345b84");
extern "C" u32 func_00112720(u32) asm("func_00112720");
extern "C" u32 func_00190140(u32) asm("func_00190140");
extern "C" u32 func_00190680(u32, u32) asm("func_00190680");
extern "C" u32 func_001b58a8() asm("func_001b58a8");
extern "C" void func_00190128(u32) asm("func_00190128");

// 0x0010df18 func_0010df18
u32 func_0010df18(u32 a0) asm("_ZN2kn6Friend11searchEnemyEv");
u32 func_0010df18(u32 a0) {
    u8 frame[48];
    u32 s2;
    u32 t7;
    u8 t7_0;
    u32 t6;
    u32 t6_1;
    u32 t6_2;
    u32 t6_3;
    u32 t7_4;
    u8 t7_5;
    u32 t6_6;
    u32 t7_7;
    u32 v0;
    u32 t6_8;
    u8 t6_9;
    u32 t7_10;
    u32 t7_11;
    u32 t7_12;
    u32 t7_13;
    u32 s1;
    u32 v0_14;
    s2 = (a0 + 0x9f4);
    *(u32*)((u32)frame) = *(u32*)((a0 + 0x9f4));
    *(u32*)(((u32)frame + 4)) = *(u32*)((a0 + 0x9f8));
    *(u32*)(((u32)frame + 8)) = *(u32*)((a0 + 0x9fc));
    *(u32*)(((u32)frame + 0xc)) = *(u32*)((a0 + 0xa00));
    *(u32*)(((u32)frame + 0x10)) = *(u32*)((a0 + 0xa04));
    func_00190128(s2);
    if (((s32)(func_001b58a8()) != 0)) {
        t7 = *(u32*)(((u32)&D_00345b28 + 0x5c));
        t7_0 = (t7 & 1);
        if (((s32)(t7_0) != 0)) {
            t6 = ((*(u32*)(((u32)&D_00345b28 + 0x58)) >> 2) << 2);
            t6_1 = (t6 + *(u32*)((a0 + ((s32)(t7) >> 1))));
            t6_2 = *(u32*)(t6_1);
        } else {
            t6_2 = *(u32*)(((u32)&D_00345b28 + 0x58));
        }
        ((void(*)(u32, u32, u32))(t6_2))(a0 + ((s32)(*(u32*)(&D_00345b84)) >> 1), (u32)frame, s2);
    } else {
        if (((s32)(func_00112720(a0)) != 0)) {
            t6_3 = ((*(u32*)((a0 + 0xb6c)) << 3) + (u32)&D_00345b28);
            t7_4 = *(u32*)((t6_3 + -0x3c));
            t7_5 = (t7_4 & 1);
            if (((s32)(t7_5) != 0)) {
                t6_6 = ((*(u32*)((t6_3 + -0x40)) >> 2) << 2);
                t7_4 = *(u32*)((t6_6 + *(u32*)((a0 + ((s32)(t7_4) >> 1)))));
            } else {
                t7_4 = *(u32*)((t6_3 + -0x40));
            }
            t7_7 = (*(u32*)((a0 + 0xb6c)) << 3);
            ((void(*)(u32, u32, u32))(t7_4))(a0 + ((s32)(*(u32*)(((t7_7 + (u32)&D_00345b28) + -0x3c))) >> 1), (u32)frame, s2);
        } else {
            v0 = (((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x98))))(a0) << 3);
            *(u64*)(((u32)frame + 0x20)) = *(u64*)((v0 + (u32)&D_00345b28));
            t6_8 = *(u32*)(((u32)frame + 0x24));
            t6_9 = (t6_8 & 1);
            if (((s32)(t6_9) != 0)) {
                t7_10 = ((*(u32*)(((u32)frame + 0x20)) >> 2) << 2);
                t7_11 = (t7_10 + *(u32*)((a0 + ((s32)(*(u32*)(((u32)frame + 0x24))) >> 1))));
                t7_12 = *(u32*)(t7_11);
            } else {
                t7_12 = *(u32*)(((u32)frame + 0x20));
            }
            ((void(*)(u32, u32, u32))(t7_12))(a0 + ((s32)(*(u32*)(((u32)frame + 0x24))) >> 1), (u32)frame, s2);
        }
    }
    t7_13 = ((s32)(func_00190140(s2)) != 0) ? (((u32)(0) < (u32)(*(u32*)((a0 + 0x9f4)))) & 0xff) : 0;
    if (((s32)(t7_13) == 0)) {
        s1 = ((u32)(0) < (u32)(*(u32*)((a0 + 0x9f4))));
        func_00190128(s2);
    }
    v0_14 = func_00190680(s2, (u32)frame);
    if ((v0_14 == 0)) {
        *(u32*)((a0 + 0xb7c)) = (*(u32*)((a0 + 0xb7c)) | 8);
    }
    return v0_14;
}

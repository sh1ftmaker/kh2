// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00220088(u32, u32) asm("func_00220088");

// 0x00221ed0 func_00221ed0
void func_00221ed0(u32 a0) asm("func_00221ed0");
void func_00221ed0(u32 a0) {
    u8 frame[16];
    u32 t7;
    u16 s3;
    u32 s0;
    u32 s1;
    u32 sp;
    u32 t7_0;
    u32 s0_1;
    u32 s1_2;
    t7 = *(u16*)((a0 + 0x3e));
    s3 = (t7 & 0x20);
    if (((s32)(*(u16*)((a0 + 0x3c))) > 0)) {
        s0 = (a0 + 0x40);
        s1 = *(u16*)((a0 + 0x3c));
        do {
            func_00220088(s0, s3);
            s0 = (s0 + 0x30);
            s1 = (s1 + -1);
        } while (((s32)(s1) > 0));
    } else {
        sp = (u32)frame;
    }
    t7_0 = (*(u16*)((a0 + 0x34)) * 0x30);
    if (((s32)(*(u16*)((a0 + 0x38))) > 0)) {
        s0_1 = ((a0 + t7_0) + 0x40);
        s1_2 = *(u16*)((a0 + 0x38));
        do {
            func_00220088(s0_1, s3);
            s0_1 = (s0_1 + 0x30);
            s1_2 = (s1_2 + -1);
        } while (((s32)(s1_2) > 0));
    }
    if (((s32)(*(u32*)((a0 + 0xc))) != 0)) {
        if ((*(u32*)((a0 + 8)) != 0)) {
            *(u32*)((*(u32*)((a0 + 8)) + 0xc)) = *(u32*)((a0 + 0xc));
        }
        *(u32*)(*(u32*)((a0 + 0xc))) = *(u32*)((a0 + 8));
    }
    return;
}

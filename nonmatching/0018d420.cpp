// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034ef18 asm("D_0034ef18");
extern "C" u32 D_01c60cd8 asm("D_01c60cd8");
extern "C" u32 func_001c0248(u32) asm("func_001c0248");
extern "C" void func_0018e040(u32) asm("func_0018e040");
extern "C" void func_001c0058(u32) asm("func_001c0058");

// 0x0018d420 func_0018d420
u32 func_0018d420(u32 a0) asm("func_0018d420");
u32 func_0018d420(u32 a0) {
    u8 frame[16];
    u32 t6;
    u32 t5;
    u32 sp;
    u32 t5_0;
    u32 sp_1;
    u32 t5_2;
    u32 t6_3;
    *(u32*)(a0) = (u32)&D_0034ef18;
    if (((s32)(*(u32*)((a0 + 8))) != 0)) {
        *(u32*)((*(u32*)((a0 + 8)) + 0x488)) = (*(u32*)((*(u32*)((a0 + 8)) + 0x488)) + -1);
    }
    if ((*(u32*)((a0 + 0x10)) != 0)) {
        *(u32*)((*(u32*)((a0 + 0x10)) + 0x488)) = (*(u32*)((*(u32*)((a0 + 0x10)) + 0x488)) + -1);
    }
    if ((a0 == *(u32*)(&D_01c60cd8))) {
        *(u32*)(&D_01c60cd8) = *(u32*)((a0 + 0xc0));
        sp_1 = (u32)frame;
        t5_2 = 0;
    } else {
        t6 = *(u32*)((*(u32*)(&D_01c60cd8) + 0xc0));
        if ((t6 != a0)) {
            do {
                t5 = t6;
                t6 = *(u32*)((t6 + 0xc0));
            } while ((t6 != a0));
            t5_0 = t5;
        } else {
            sp = (u32)frame;
            t5_0 = *(u32*)(&D_01c60cd8);
        }
        *(u32*)((t5_0 + 0xc0)) = *(u32*)((a0 + 0xc0));
        sp_1 = sp;
        t5_2 = t5_0;
    }
    if ((a0 == *(u32*)(((u32)&D_01c60cd8 + 4)))) {
        t6_3 = *(u32*)(((u32)&D_01c60cd8 + 4));
        *(u32*)(((u32)&D_01c60cd8 + 4)) = t5_2;
    }
    *(u32*)((a0 + 0xc0)) = 0;
    if (((s32)((*(u32*)((a0 + 4)) & 0x400)) == 0)) {
        func_0018e040(a0);
        func_001c0058(*(u32*)((a0 + 0x1c)));
    }
    return func_001c0248(a0 + 0x30);
}

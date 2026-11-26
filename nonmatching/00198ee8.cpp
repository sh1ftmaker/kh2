// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_001a8258(u32) asm("func_001a8258");
extern "C" void func_00181178(u32) asm("func_00181178");
extern "C" void func_0019b2b0(u32) asm("func_0019b2b0");
extern "C" void func_0019b2d8(u32) asm("func_0019b2d8");
extern "C" void func_001a6c90(u32) asm("func_001a6c90");
extern "C" void func_001a8438(u32) asm("func_001a8438");

// 0x00198ee8 func_00198ee8
void func_00198ee8(u32 a0) asm("_ZN2YS11SIGNAL_HOOK4execEv");
void func_00198ee8(u32 a0) {
    u8 frame[16];
    u32 s1;
    u32 t6;
    u32 sp;
    u32 sp_0;
    u32 s1_1;
    u32 t5;
    if ((*(u32*)((a0 + 8)) != 0xffff)) {
        if ((func_00181500(*(u32*)((a0 + 8))) == 0)) {
            func_00181178(*(u32*)((a0 + 8)));
        }
    }
    if (((s32)(*(u32*)((a0 + 0xc))) >= 0)) {
        func_001a6c90(*(u32*)((a0 + 0xc)));
    }
    if (((s32)(*(u32*)((a0 + 0x18))) > 0)) {
        if (((s32)(*(u32*)((a0 + 0x18))) > 0)) {
            s1 = 0;
            t6 = *(u32*)((a0 + 0x1c));
            do {
                func_001a8438(func_001a8258(*(u32*)(((s1 << 2) + *(u32*)((a0 + 0x1c))))));
                s1 = (s1 + 1);
            } while (((s32)(s1) < (s32)(*(u32*)((a0 + 0x18)))));
        } else {
            sp = (u32)frame;
        }
        sp_0 = sp;
    } else {
        sp_0 = (u32)frame;
    }
    if (((s32)(((s32)((*(u16*)((a0 + 0x2e)) << 0x10)) >> 0x10)) > 0)) {
        s1_1 = 0;
        t5 = *(u16*)((a0 + 0x2e));
        do {
            if (((s32)(((*(u16*)(((a0 + (s1_1 * 2)) + 0x20)) & 3) & 0xffff)) != 0)) {
                if ((((*(u16*)(((a0 + (s1_1 * 2)) + 0x20)) & 3) & 0xffff) == 1)) {
                    func_0019b2b0(((*(u16*)(((a0 + (s1_1 * 2)) + 0x20)) & 0xffff) >> 2) & 0x1fff);
                    t5 = *(u16*)((a0 + 0x2e));
                }
            } else {
                func_0019b2d8(((*(u16*)(((a0 + (s1_1 * 2)) + 0x20)) & 0xffff) >> 2) & 0x1fff);
                t5 = *(u16*)((a0 + 0x2e));
            }
            s1_1 = (s1_1 + 1);
        } while (((s32)(((s32)(s1_1) < (s32)(((s32)((t5 << 0x10)) >> 0x10)))) != 0));
    }
    *(u32*)(a0) = 0xffffffff;
    return;
}

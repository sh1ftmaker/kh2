// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_00105550(u32) asm("func_00105550");
extern "C" u32 func_00105710() asm("func_00105710");
extern "C" u32 func_00105728() asm("func_00105728");
extern "C" void func_001055b8(u32) asm("func_001055b8");
extern "C" void func_001056e8(u32) asm("func_001056e8");

// 0x00102350 func_00102350
void func_00102350(u32 a0) asm("func_00102350");
void func_00102350(u32 a0) {
    u8 frame[16];
    u32 v0;
    u32 sp;
    u32 sp_0;
    if (((s32)(*(u32*)((a0 + 0x34))) == 0)) {
        ((void(*)(u32))(*(u32*)(a0)))(a0);
        return;
    } else {
        func_001056e8(*(u32*)((a0 + 0x24)) + 0x20);
        v0 = func_00105550(*(u32*)((a0 + 0x24)) + 0x20);
        if (((s32)(v0) != 0)) {
            if ((v0 == 1)) {
                *(u32*)(a0) = 0;
            }
            sp_0 = (u32)frame;
        } else {
            if ((*(u8*)((*(u32*)((a0 + 0x34)) + 0xf0)) == 0)) {
                *(u8*)((*(u32*)((a0 + 0x34)) + 0xf0)) = 1;
                ((void(*)(u32))(*(u32*)(a0)))(a0);
                func_001055b8(func_00105728());
                sp = ((*(u32*)((a0 + 0x34)) + *(u32*)((*(u32*)((a0 + 0x34)) + 0xfc))) + 0x100);
            } else {
                if (((s32)(*(u32*)((*(u32*)((a0 + 0x34)) + 0xf4))) > 0)) {
                    *(u32*)((*(u32*)((a0 + 0x34)) + 0xf4)) = (*(u32*)((*(u32*)((a0 + 0x34)) + 0xf4)) + -1);
                } else {
                    if ((0.0f < *(f32*)((*(u32*)((a0 + 0x34)) + 0xf8)))) {
                        *(f32*)((*(u32*)((a0 + 0x34)) + 0xf8)) = (*(f32*)((*(u32*)((a0 + 0x34)) + 0xf8)) - *(f32*)(&D_00349e10));
                    } else {
                        func_001055b8(*(u32*)((a0 + 0x34)));
                    }
                }
                sp = (u32)frame;
            }
            sp_0 = sp;
        }
        func_00105710();
        return;
    }
}

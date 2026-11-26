// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_001906f0(u32, u32) asm("func_001906f0");
extern "C" f32 func_00191c20() asm("func_00191c20");
extern "C" f32 func_00191c40() asm("func_00191c40");
extern "C" u32 func_00190140(u32) asm("func_00190140");
extern "C" void func_0019cc20(u32) asm("func_0019cc20");

// 0x0019cd40 func_0019cd40
// minilink-rodata 0x0036d3ac   (float literals live here in the original)
void func_0019cd40(u32 a0) asm("_ZN2YS6LOCKON13check_releaseEv");
void func_0019cd40(u32 a0) {
    u8 frame[64];
    f32 f20;
    f32 f20_0;
    *(u32*)(((u32)frame + 0xc)) = 0;
    if ((*(u32*)(a0) != 1)) {
        if (((s32)(((s32)(*(u32*)(a0)) < (s32)(2))) == 0)) {
            if ((*(u32*)(a0) == 2)) {
                if (((s32)(func_00190140(a0 + 4)) != 0)) {
                    if (((*(u32*)((*(u32*)((a0 + 4)) + 0x588)) & 0x400) != 0)) {
                        if ((func_00191c20() < 1.0f)) {
                            ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x28))) + 0x9c))))((u32)frame + 0x30, *(u32*)((a0 + 0x28)));
                            f20 = func_001906f0(a0 + 4, (u32)frame + 0x30);
                            if ((func_00191c40() < f20)) {
                                func_0019cc20(a0);
                            }
                        }
                    } else {
                        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x28))) + 0x9c))))((u32)frame + 0x30, *(u32*)((a0 + 0x28)));
                        f20_0 = func_001906f0(a0 + 4, (u32)frame + 0x30);
                        if ((func_00191c40() < f20_0)) {
                            func_0019cc20(a0);
                        }
                    }
                } else {
                    func_0019cc20(a0);
                }
            }
        }
    } else {
        if ((func_00190140(a0 + 4) == 0)) {
            func_0019cc20(a0);
        }
    }
    return;
}

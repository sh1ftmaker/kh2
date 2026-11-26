// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_0035daf0 asm("D_0035daf0");
extern "C" u32 D_0035de1c asm("D_0035de1c");
extern "C" u32 D_0035de20 asm("D_0035de20");
extern "C" u32 D_0035de54 asm("D_0035de54");
extern "C" u32 D_0035de5c asm("D_0035de5c");
extern "C" u32 func_00225aa8() asm("func_00225aa8");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_002263f0(u32, u32) asm("func_002263f0");
extern "C" u32 func_002ef7a0(u32, u32) asm("func_002ef7a0");
extern "C" u32 func_002ef7b8() asm("func_002ef7b8");
extern "C" void func_00225b88() asm("func_00225b88");
extern "C" void func_00225cd8() asm("func_00225cd8");

// 0x00225d30 func_00225d30
// minilink-rodata 0x00370d98   (float literals live here in the original)
void func_00225d30() asm("func_00225d30");
void func_00225d30() {
    func_00225b88();
    func_00225cd8();
    if (((s32)(func_00225aa8()) == 0)) {
        if (((s32)(func_00225b00(0xffffffff)) != 0)) {
            if (((s32)(func_002263f0((u32)&D_0035de20, (u32)&D_0035daf0)) != 0)) {
                *(f32*)(&D_0035de1c) = ((f32)(*(s32*)(&D_0035de20)) + (f32)(*(s32*)(&D_0035de20)));
            } else {
                *(f32*)(&D_0035de1c) = ((f32)(*(s32*)(&D_0035de5c)) + (f32)(*(s32*)(&D_0035de5c)));
                *(u8*)(&D_0035de54) = 0;
            }
        } else {
            *(f32*)(&D_0035de1c) = (*(f32*)(&D_0035de1c) + *(f32*)(&D_00349e10));
        }
    }
    if (((s32)(func_002ef7b8()) != 0)) {
        *(u32*)(&D_0035de20) = func_002ef7a0(7, 0);
    } else {
        *(u32*)(&D_0035de20) = (s32)((*(f32*)(&D_0035de1c) * 0.5f));
    }
    return;
}

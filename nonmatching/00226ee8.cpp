// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035de1c asm("D_0035de1c");
extern "C" u32 D_0035de20 asm("D_0035de20");
extern "C" u32 D_0035de54 asm("D_0035de54");
extern "C" u32 D_0035de5c asm("D_0035de5c");
extern "C" u32 D_0035de60 asm("D_0035de60");
extern "C" void func_00226ed0(u32) asm("func_00226ed0");

// 0x00226ee8 func_00226ee8
// minilink-rodata 0x00370e0c   (float literals live here in the original)
void func_00226ee8(u32 a0) asm("func_00226ee8");
void func_00226ee8(u32 a0) {
    func_00226ed0(a0);
    *(u32*)(&D_0035de60) = 1;
    *(u32*)(&D_0035de5c) = a0;
    if (((s32)(a0) == 0)) {
        *(u8*)(&D_0035de54) = 0;
        *(u32*)(&D_0035de1c) = 0;
        *(u32*)(&D_0035de20) = 0;
        return;
    } else {
        *(u8*)(&D_0035de54) = 1;
        *(f32*)(&D_0035de1c) = -2.0f;
        *(u32*)(&D_0035de20) = 0xffffffff;
        return;
    }
}

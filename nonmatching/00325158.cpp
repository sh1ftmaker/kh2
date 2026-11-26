// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e8b8 asm("D_0034e8b8");
extern "C" u32 D_0034ee08 asm("D_0034ee08");
extern "C" u32 D_00361d00 asm("D_00361d00");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_0019f9a8(u32) asm("func_0019f9a8");
extern "C" void func_001c0248(u32) asm("func_001c0248");
extern "C" void func_00319f88(u32) asm("func_00319f88");
extern "C" void func_00319fb0(u32) asm("func_00319fb0");

// 0x00325158 func_00325158
u32 func_00325158(u32 a0) asm("func_00325158");
u32 func_00325158(u32 a0) {
    u8 frame[16];
    u32 t6;
    u32 t7;
    u32 sp;
    *(u32*)(a0) = (u32)&D_00361d00;
    if (((s32)((a0 + 0xb70)) != 0)) {
        t6 = (a0 + 0xb70);
        t7 = (a0 + 0xbb0);
        do {
            t7 = (t7 + -0x10);
        } while ((t6 != t7));
    } else {
        sp = (u32)frame;
    }
    *(u32*)(a0) = (u32)&D_0034e8b8;
    func_00319f88(a0 + 0xb08);
    *(u32*)(a0) = (u32)&D_0034ee08;
    func_0019f9a8(a0 + 0xa08);
    func_001c0248(a0 + 0xa50);
    func_00319fb0(a0);
    return func_00105110(a0);
}

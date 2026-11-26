// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00345c08 asm("D_00345c08");
extern "C" u32 D_0034e8b8 asm("D_0034e8b8");
extern "C" u32 D_0034ee08 asm("D_0034ee08");
extern "C" u32 func_00319fb0(u32) asm("func_00319fb0");
extern "C" void func_0019f9a8(u32) asm("func_0019f9a8");
extern "C" void func_001c0248(u32) asm("func_001c0248");
extern "C" void func_00319f88(u32) asm("func_00319f88");

// 0x00319d68 func_00319d68
u32 func_00319d68(u32 a0) asm("func_00319d68");
u32 func_00319d68(u32 a0) {
    u8 frame[16];
    u32 t7;
    u32 t6;
    u32 sp;
    *(u32*)(a0) = (u32)&D_00345c08;
    if ((a0 != 0xfffff390)) {
        t7 = (a0 + 0xcd0);
        t6 = (a0 + 0xc70);
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
    return func_00319fb0(a0);
}

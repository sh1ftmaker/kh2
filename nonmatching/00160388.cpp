// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c738 asm("D_0034c738");
extern "C" u32 D_0034c750 asm("D_0034c750");
extern "C" void func_00161530(u32) asm("func_00161530");

// 0x00160388 func_00160388
void func_00160388(u32 a0) asm("func_00160388");
void func_00160388(u32 a0) {
    u8 frame[16];
    u32 a0_0;
    u32 t7;
    u32 sp;
    *(u32*)(a0) = (u32)&D_0034c750;
    ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 4))) + 0x28))))(*(u32*)((a0 + 4)), *(u32*)(&D_0034c738), *(u32*)((a0 + 0x1c0)));
    func_00161530(a0 + 0x110);
    if ((a0 != 0xffffff70)) {
        a0_0 = (a0 + 0x110);
        t7 = (a0 + 0x90);
        do {
            a0_0 = (a0_0 + -0x10);
        } while ((t7 != a0_0));
    } else {
        sp = (u32)frame;
    }
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034c738)) + 4))))(*(u32*)(&D_0034c738), a0);
    return;
}

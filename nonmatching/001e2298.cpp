// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" void func_001e1ce0(u32) asm("func_001e1ce0");
extern "C" void func_001e1d20(u32) asm("func_001e1d20");
extern "C" void func_001e1df0(u32) asm("func_001e1df0");
extern "C" void func_001e1df8(u32) asm("func_001e1df8");
extern "C" void func_001e1e40(u32) asm("func_001e1e40");
extern "C" void func_001e2130(u32) asm("func_001e2130");
extern "C" void func_001e21f0(u32) asm("func_001e21f0");
extern "C" void func_001e21f8(u32) asm("func_001e21f8");
extern "C" void func_001e2238(u32) asm("func_001e2238");
extern "C" void func_001e2620(u32) asm("func_001e2620");
extern "C" void func_001e2640(u32) asm("func_001e2640");

// 0x001e2298 func_001e2298
void func_001e2298(u32 a0) asm("func_001e2298");
void func_001e2298(u32 a0) {
    if ((func_0019ba60(*(u32*)((a0 + 0xdd0))) == 0)) {
        *(u32*)((a0 + 0xdc0)) = 7;
    }
    switch (*(u32*)((a0 + 0xdc0))) {
    case 0:
        func_001e1ce0(a0);
        break;
    case 1:
        func_001e1d20(a0);
        break;
    case 2:
        func_001e1df0(a0);
        break;
    case 3:
        func_001e1df8(a0);
        break;
    case 4:
        func_001e1e40(a0);
        break;
    case 5:
        func_001e2130(a0);
        break;
    case 6:
        func_001e21f0(a0);
        break;
    case 7:
        func_001e21f8(a0);
        break;
    default:
        break;
    }
    func_001e2238(a0);
    func_001e2620(a0);
    func_001e2640(a0);
    *(f32*)((a0 + 0xde4)) = (*(f32*)((a0 + 0xde4)) + *(f32*)(&D_00349e10));
    *(f32*)((a0 + 0xde8)) = (*(f32*)((a0 + 0xde8)) + *(f32*)(&D_00349e10));
    return;
}

// coverage: addr=0x001c3ba8 symbol=func_001c3ba8 size=252 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:81.81;ghidra:near:48.74
#include "common/types.h"

extern "C" f32 func_00184a90(u32) asm("func_00184a90");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");

// 0x001c3ba8 func_001c3ba8
f32 func_001c3ba8(u32 a0, u32 a1) asm("func_001c3ba8");
f32 func_001c3ba8(u32 a0, u32 a1) {
    f32 f20;
    f32 f20_0;
    f32 f20_1;
    f32 f20_2;
    f32 f20_3;
    f32 f20_4;
    f32 f20_5;
    f32 f0;
    f20 = func_00184a90(a1);
    if ((0.0f < (f20 - *(f32*)((func_0016c028(a1) + 4))))) {
        f20_0 = func_00184a90(a1);
        f20_1 = (f20_0 - *(f32*)((func_0016c028(a1) + 4)));
    } else {
        f20_1 = 0.0f;
    }
    if ((0.0f < (f20_1 - *(f32*)((*(u32*)((a1 + 0xf0)) + 0x28))))) {
        f20_2 = func_00184a90(a1);
        if ((0.0f < (f20_2 - *(f32*)((func_0016c028(a1) + 4))))) {
            f20_3 = func_00184a90(a1);
            f20_4 = (f20_3 - *(f32*)((func_0016c028(a1) + 4)));
        } else {
            f20_4 = 0.0f;
        }
        f20_5 = (f20_4 - *(f32*)((*(u32*)((a1 + 0xf0)) + 0x28)));
    } else {
        f20_5 = 0.0f;
    }
    f0 = ((f20_5 * *(f32*)((*(u32*)((a1 + 0xf0)) + 0x24))) < *(f32*)((*(u32*)((a1 + 0xf0)) + 0x2c))) ? (f20_5 * *(f32*)((*(u32*)((a1 + 0xf0)) + 0x24))) : *(f32*)((*(u32*)((a1 + 0xf0)) + 0x2c));
    return f0;
}

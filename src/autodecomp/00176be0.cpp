// coverage: addr=0x00176be0 symbol=_ZN2YS5PARTY11prize_recovEf size=136 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:76.83;ghidra:near:68.0
#include "common/types.h"

extern "C" u32 func_001a3a78(u32, f32) asm("func_001a3a78");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");

// 0x00176be0 YS::PARTY::prize_recov(float)
void lift_00176be0(u32 a0, f32 fa0) asm("_ZN2YS5PARTY11prize_recovEf");
void lift_00176be0(u32 a0, f32 fa0) {
    u32 v0;
    if (((s32)(*(u32*)((a0 + 0xae4))) == 0)) {
        if (((*(u32*)((a0 + 0x160)) & 0x4000) == 0)) {
            v0 = func_001de168(func_001a3a78(a0, fa0), 6, 0, 1, 0x2714, a0);
            *(u32*)((a0 + 0xae4)) = v0;
            *(f32*)((a0 + 0xae8)) = fa0;
        } else {
            if ((*(f32*)((a0 + 0xae8)) < fa0)) {
                *(f32*)((a0 + 0xae8)) = fa0;
            }
        }
    } else {
        if ((*(f32*)((a0 + 0xae8)) < fa0)) {
            *(f32*)((a0 + 0xae8)) = fa0;
        }
    }
    return;
}

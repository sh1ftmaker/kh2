// coverage: addr=0x001de610 symbol=func_001de610 size=128 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.15;ghidra:near:93.12
#include "common/types.h"

extern "C" u32 func_001dca20(u32) asm("func_001dca20");
extern "C" void func_001e0058(u32) asm("func_001e0058");
extern "C" void func_00321ce8(u32, u32) asm("func_00321ce8");

// 0x001de610 func_001de610
void func_001de610(u32 a0) asm("func_001de610");
void func_001de610(u32 a0) {
    u32 s0;
    u8 t7;
    u32 s1;
    s0 = *(u32*)((a0 + 0xc));
    while (((s32)(s0) != 0)) {
        t7 = (((s32)(*(u32*)((*(u32*)((s0 + 0x40)) + 8))) >> 0x1a) & 1);
        s1 = *(u32*)((s0 + 0x60));
        if (((s32)(t7) == 0)) {
            if (((s32)(func_001dca20(*(u32*)((s0 + 0x40)))) != 0)) {
                func_00321ce8(a0 + 0xc, s0);
                func_001e0058(s0);
            }
        }
        s0 = s1;
    }
    return;
}

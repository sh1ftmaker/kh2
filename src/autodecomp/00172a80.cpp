// coverage: addr=0x00172a80 symbol=func_00172a80 size=96 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:91.67
#include "common/types.h"

extern "C" u32 func_0019a1a0(u32, u32) asm("func_0019a1a0");
extern "C" void func_0019ae60(u32) asm("func_0019ae60");

// 0x00172a80 func_00172a80
void func_00172a80(u32 a0) asm("func_00172a80");
void func_00172a80(u32 a0) {
    u32 t7;
    u8 t7_0;
    u32 s0;
    if ((*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x818)) != 0)) {
        t7 = *(u32*)((*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x818)) + 4));
        t7_0 = (t7 & 1);
        if ((t7_0 == 0)) {
            s0 = *(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x818));
            func_0019ae60(*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x818)));
            func_0019a1a0(s0, 0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

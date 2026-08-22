// coverage: addr=0x001c1708 symbol=func_001c1708 size=64 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:86.18
#include "common/types.h"

extern "C" void func_001c1890(u32) asm("func_001c1890");

// 0x001c1708 func_001c1708
void func_001c1708(u32 a0) asm("func_001c1708");
void func_001c1708(u32 a0) {
    u32 a0_0;
    u32 s0;
    if (((s32)(*(u32*)((a0 + 0xc))) != 0)) {
        a0_0 = *(u32*)((a0 + 0xc));
        do {
            s0 = *(u32*)((a0_0 + 0x24));
            if (((s32)(a0_0) != 0)) {
                func_001c1890(a0_0);
            }
            a0_0 = s0;
        } while (((s32)(s0) != 0));
    }
    return;
}

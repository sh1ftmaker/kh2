// coverage: addr=0x001bdc88 symbol=func_001bdc88 size=68 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" void func_0013b320(u32) asm("func_0013b320");

// 0x001bdc88 func_001bdc88
void func_001bdc88(u32 a0) asm("func_001bdc88");
void func_001bdc88(u32 a0) {
    if (((s32)((*(u32*)((a0 + 0x20)) & 0x40)) != 0)) {
        func_0013b320(a0);
        *(u32*)((a0 + 0x20)) = (*(u32*)((a0 + 0x20)) & 0xffffffbf);
    }
    return;
}

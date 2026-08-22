// coverage: addr=0x001bd668 symbol=func_001bd668 size=64 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;lift:near:99.62;corpus:near:83.0;ghidra:near:78.4;e3:near:16.25
#include "common/types.h"

extern "C" void func_001bd618(u32, u32) asm("func_001bd618");

// 0x001bd668 func_001bd668
void func_001bd668(u32 a0) asm("func_001bd668");
void func_001bd668(u32 a0) {
    u8 frame[1];
    u32 sp;
    if (((s32)(*(u32*)((a0 + 0x8c0))) != 0)) {
        do {
            func_001bd618(a0, 0);
        } while (((s32)(*(u32*)((a0 + 0x8c0))) != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}

// coverage: addr=0x001ccda0 symbol=func_001ccda0 size=76 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:74.25
#include "common/types.h"

extern "C" u32 func_00186078(u32) asm("func_00186078");
extern "C" u32 func_001c16f0(u32, u32) asm("func_001c16f0");
extern "C" void func_001c6ee8(u32) asm("func_001c6ee8");

// 0x001ccda0 func_001ccda0
void func_001ccda0(u32 a0) asm("func_001ccda0");
void func_001ccda0(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    func_001c6ee8(a0);
    v0 = 0;
    do {
        v0_0 = func_001c16f0(*(u32*)((a0 + 0x9f4)), v0);
        v0 = v0_0;
    } while ((v0 != 0));
    v0_1 = 0;
    do {
        v0_2 = func_00186078(v0_1);
        v0_1 = v0_2;
    } while (((s32)(v0_1) != 0));
    return;
}

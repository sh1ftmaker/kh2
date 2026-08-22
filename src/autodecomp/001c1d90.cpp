// coverage: addr=0x001c1d90 symbol=func_001c1d90 size=100 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:51.62;m2c:near:38.28;e3:near:0.0
#include "common/types.h"

extern "C" u32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" u32 func_001c1fe0(u32, u32) asm("func_001c1fe0");
extern "C" void func_0016bd60(u32, u32) asm("func_0016bd60");

// 0x001c1d90 func_001c1d90
// minilink-rodata 0x0036dd70   (float literals live here in the original)
void func_001c1d90(u32 a0, u32 a1) asm("func_001c1d90");
void func_001c1d90(u32 a0, u32 a1) {
    if (((s32)(*(u32*)((a1 + 0xaac))) == 0)) {
        func_0016bd60(a1, 5);
        func_0017f488(a1 + 0x140, 0, 8.0f, 0.0f);
        return;
    } else {
        func_001c1fe0(a1, 5);
        return;
    }
}

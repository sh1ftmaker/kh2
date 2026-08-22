// coverage: addr=0x00176818 symbol=func_00176818 size=76 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:78.89;ghidra:near:75.25
#include "common/types.h"

extern "C" u32 func_001842c0(u32) asm("func_001842c0");
extern "C" void func_0017f540(u32, u32, f32, f32) asm("func_0017f540");

// 0x00176818 func_00176818
// minilink-rodata 0x0036c4c0   (float literals live here in the original)
void func_00176818(u32 a0) asm("func_00176818");
void func_00176818(u32 a0) {
    if (((s32)((*(u32*)((a0 + 0x168)) & 0x10)) == 0)) {
        func_0017f540(a0 + 0x140, 4, 16.0f, 0.0f);
    }
    func_001842c0(a0);
    return;
}

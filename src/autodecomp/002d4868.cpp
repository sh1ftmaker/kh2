// coverage: addr=0x002d4868 symbol=func_002d4868 size=76 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:78.89;ghidra:near:69.5
#include "common/types.h"

extern "C" u32 D_00362190 asm("D_00362190");
extern "C" u32 func_002e7568(u32, u32, u32, f32) asm("func_002e7568");
extern "C" void func_002e7458(u32) asm("func_002e7458");

// 0x002d4868 func_002d4868
// minilink-rodata 0x00375adc   (float literals live here in the original)
u32 func_002d4868(u32 a0) asm("func_002d4868");
u32 func_002d4868(u32 a0) {
    u32 v0;
    func_002e7458(a0 + 0xc88);
    v0 = func_002e7568(a0, 2, (u32)&D_00362190, 1.0f);
    *(u32*)((a0 + 0xb3c)) = 0;
    return v0;
}

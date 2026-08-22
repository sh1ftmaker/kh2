// coverage: addr=0x001c8750 symbol=func_001c8750 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:95.71
#include "common/types.h"

extern "C" u32 D_00351ec0 asm("D_00351ec0");
extern "C" u32 func_0016c640(u32) asm("func_0016c640");
extern "C" void func_0014c9f0(u32) asm("func_0014c9f0");
extern "C" void func_001bbe78(u32) asm("func_001bbe78");
extern "C" void func_001c8d98(u32, u32) asm("func_001c8d98");

// 0x001c8750 func_001c8750
u32 func_001c8750() asm("func_001c8750");
u32 func_001c8750() {
    func_001c8d98((u32)&D_00351ec0, 3);
    func_0014c9f0(0x10);
    func_001bbe78(1);
    return func_0016c640(2);
}

// coverage: addr=0x00239898 symbol=_ZN2YI8SEQUENCED0Ev size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_0035eaf8 asm("D_0035eaf8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_00237238(u32) asm("func_00237238");

// 0x00239898 YI::SEQUENCE::~SEQUENCE()
u32 lift_00239898(u32 a0) asm("_ZN2YI8SEQUENCED0Ev");
u32 lift_00239898(u32 a0) {
    *(u32*)(a0) = (u32)&D_0035eaf8;
    func_00237238(a0);
    return func_00106420(a0);
}

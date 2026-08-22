// coverage: addr=0x001befa8 symbol=_ZN2YS13FIELD_COMMAND21reset_special_commandEv size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;e3:near:95.0;corpus:near:82.5;ghidra:near:55.64
#include "common/types.h"

extern "C" u32 func_001bd5b0(u32, u32, u32) asm("func_001bd5b0");
extern "C" void func_001bdc18(u32) asm("func_001bdc18");

// 0x001befa8 YS::FIELD_COMMAND::reset_special_command()
u32 lift_001befa8(u32 a0) asm("_ZN2YS13FIELD_COMMAND21reset_special_commandEv");
u32 lift_001befa8(u32 a0) {
    func_001bdc18(a0);
    return func_001bd5b0(a0, *(u32*)((a0 + 0xaa4)), 0);
}

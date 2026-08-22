// coverage: addr=0x001bdc18 symbol=_ZN2YS14PLAYER_COMMAND21reset_special_commandEv size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;twins:exact:100.0;m2c:exact:100.0;ghidra:near:84.62
#include "common/types.h"

extern "C" u32 func_001bd668(u32) asm("func_001bd668");
extern "C" void func_001d48b0(u32) asm("func_001d48b0");

// 0x001bdc18 YS::PLAYER_COMMAND::reset_special_command()
u32 lift_001bdc18(u32 a0) asm("_ZN2YS14PLAYER_COMMAND21reset_special_commandEv");
u32 lift_001bdc18(u32 a0) {
    func_001d48b0(a0 + 0x9c0);
    return func_001bd668(a0);
}

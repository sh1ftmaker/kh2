// coverage: addr=0x001bb858 symbol=_ZN2YS7MISSION4ExitEi size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:84.23
#include "common/types.h"

extern "C" u32 func_001991a8(u32, u32) asm("func_001991a8");
extern "C" void func_001bb468() asm("func_001bb468");
extern "C" void func_001bb890(u32) asm("func_001bb890");

// 0x001bb858 YS::MISSION::Exit(int)
u32 lift_001bb858(u32 a0) asm("_ZN2YS7MISSION4ExitEi");
u32 lift_001bb858(u32 a0) {
    func_001bb890(a0);
    func_001bb468();
    return func_001991a8(0xf, a0);
}

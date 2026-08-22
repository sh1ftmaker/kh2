// coverage: addr=0x00153c60 symbol=_ZN2dk6Layout4initEv size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_0023edb0(u32) asm("func_0023edb0");

// 0x00153c60 dk::Layout::init()
u32 lift_00153c60() asm("_ZN2dk6Layout4initEv");
u32 lift_00153c60() {
    return func_0023edb0(func_001050c8());
}

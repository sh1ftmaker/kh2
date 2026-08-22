// coverage: addr=0x002cb160 symbol=_ZN8worldmap13CloseUpCamera3endEv size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0;corpus:near:77.78
#include "common/types.h"

extern "C" u32 func_002c6218() asm("func_002c6218");
extern "C" u32 func_002c6280(u32, u32) asm("func_002c6280");

// 0x002cb160 worldmap::CloseUpCamera::end()
u32 lift_002cb160() asm("_ZN8worldmap13CloseUpCamera3endEv");
u32 lift_002cb160() {
    return func_002c6280(func_002c6218(), 2);
}

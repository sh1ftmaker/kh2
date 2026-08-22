// coverage: addr=0x001741e0 symbol=_ZN2YS24trap_player_capture_formEP8BD_VALUE size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001b6bd8(u32, u32) asm("func_001b6bd8");
extern "C" u32 func_001d14a0(u32) asm("func_001d14a0");

// 0x001741e0 YS::trap_player_capture_form(BD_VALUE*)
u32 lift_001741e0(u32 a0) asm("_ZN2YS24trap_player_capture_formEP8BD_VALUE");
u32 lift_001741e0(u32 a0) {
    return func_001b6bd8(func_001d14a0(a0), *(u32*)(a0));
}

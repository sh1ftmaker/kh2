// coverage: addr=0x002dce80 symbol=_Z16wtarget_002dce80jjjj size=40 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:77.7;ghidra:near:32.9
#include "common/types.h"

extern "C" u32 func_002e5350(u32, u32, f32) asm("func_002e5350");

// 0x002dce80 wtarget_002dce80(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00375da8   (float literals live here in the original)
u32 lift_002dce80(u32 a0) asm("_Z16wtarget_002dce80jjjj");
u32 lift_002dce80(u32 a0) {
    return func_002e5350(a0 + 0x100, 0x14, 0.019999999552965164f);
}

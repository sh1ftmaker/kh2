// coverage: addr=0x0016c028 symbol=_ZN2YS3OBJ7get_posEv size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:95.23;e3:near:56.32
#include "common/types.h"

extern "C" u32 func_001c0cd8(u32) asm("func_001c0cd8");

// 0x0016c028 YS::OBJ::get_pos()
u32 lift_0016c028(u32 a0) asm("_ZN2YS3OBJ7get_posEv");
u32 lift_0016c028(u32 a0) {
    return (func_001c0cd8(a0) ? (a0 + 0x70) : (a0 + 0x540));
}

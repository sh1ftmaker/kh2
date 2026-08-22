// coverage: addr=0x001805a8 symbol=_ZN2YS6MOTION8is_existEi size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:36.02
#include "common/types.h"

extern "C" u32 func_0017ec98(u32) asm("func_0017ec98");
extern "C" u32 func_0017edf0(u32, u32) asm("func_0017edf0");
extern "C" u32 func_00180408(u32, u32) asm("func_00180408");

// 0x001805a8 YS::MOTION::is_exist(int)
u32 lift_001805a8(u32 a0) asm("_ZN2YS6MOTION8is_existEi");
u32 lift_001805a8(u32 a0) {
    return ((u32)(0) < (u32)(func_00180408(a0, func_0017edf0(a0, func_0017ec98(a0)))));
}

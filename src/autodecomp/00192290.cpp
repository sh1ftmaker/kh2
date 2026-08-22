// coverage: addr=0x00192290 symbol=_ZN2YS7MESSAGE4InitEii size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:near:99.64;ghidra:near:74.69
#include "common/types.h"

extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_00191f78(u32, u32) asm("func_00191f78");
extern "C" u32 func_001921d8(u32) asm("func_001921d8");

// 0x00192290 YS::MESSAGE::Init(int, int)
u32 lift_00192290(u32 a0, u32 a1) asm("_ZN2YS7MESSAGE4InitEii");
u32 lift_00192290(u32 a0, u32 a1) {
    return func_00191f78(a1, func_001708f8(func_001921d8(a0), 0xffffffff));
}

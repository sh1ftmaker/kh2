// coverage: addr=0x00176d68 symbol=_ZN2YS5PARTY10voice_partEi size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:78.95;corpus:near:77.5
#include "common/types.h"

extern "C" u32 func_0016a070(u32, u32) asm("func_0016a070");
extern "C" u32 func_00198630(u32, u32, u32) asm("func_00198630");
extern "C" u32 func_001afee8(u32, u32) asm("func_001afee8");

// 0x00176d68 YS::PARTY::voice_part(int)
u32 lift_00176d68(u32 a0, u32 a1) asm("_ZN2YS5PARTY10voice_partEi");
u32 lift_00176d68(u32 a0, u32 a1) {
    return func_00198630(a0, func_001afee8(func_0016a070(a0, a1), a1), 0);
}

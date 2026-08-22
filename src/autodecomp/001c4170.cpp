// coverage: addr=0x001c4170 symbol=func_001c4170 size=24 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:72.25
#include "common/types.h"

extern "C" u32 D_00351604 asm("D_00351604");
extern "C" u32 D_00351608 asm("D_00351608");

// 0x001c4170 func_001c4170
u32 func_001c4170() asm("func_001c4170");
u32 func_001c4170() {
    return (*(u32*)(&D_00351604) - *(u32*)(&D_00351608));
}

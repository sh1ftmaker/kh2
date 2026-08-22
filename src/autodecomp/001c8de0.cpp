// coverage: addr=0x001c8de0 symbol=func_001c8de0 size=28 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:exact:100.0;ghidra:exact:100.0;m2c:near:48.2
#include "common/types.h"

extern "C" u32 D_00351eb8 asm("D_00351eb8");
extern "C" u32 D_00351ec0 asm("D_00351ec0");
extern "C" u32 D_00351ec8 asm("D_00351ec8");

// 0x001c8de0 func_001c8de0
void func_001c8de0() asm("func_001c8de0");
void func_001c8de0() {
    *(u32*)(&D_00351eb8) = 0;
    *(u32*)(&D_00351ec0) = 0;
    *(u32*)(&D_00351ec8) = 0;
}

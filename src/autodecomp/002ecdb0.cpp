// coverage: addr=0x002ecdb0 symbol=func_002ecdb0 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.78;m2c:near:97.78
#include "common/types.h"


// 0x002ecdb0 func_002ecdb0
void func_002ecdb0(u32 a0) asm("func_002ecdb0");
void func_002ecdb0(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x24))))(a0);
}

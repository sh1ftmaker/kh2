// coverage: addr=0x002ef7c8 symbol=func_002ef7c8 size=40 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;m2c:exact:100.0;ghidra:near:90.91
#include "common/types.h"

extern "C" u32 func_001b8228() asm("func_001b8228");
extern "C" u32 func_001b8258() asm("func_001b8258");
extern "C" u32 func_002ef7b8() asm("func_002ef7b8");

// 0x002ef7c8 func_002ef7c8
u32 func_002ef7c8() asm("func_002ef7c8");
u32 func_002ef7c8() {
    if (((s32)(func_002ef7b8()) != 0)) {
        return func_001b8228();
    } else {
        return func_001b8258();
    }
}

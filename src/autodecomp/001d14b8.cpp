// coverage: addr=0x001d14b8 symbol=func_001d14b8 size=40 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.0;corpus:near:94.0;m2c:near:58.5
#include "common/types.h"

extern "C" u32 func_00176cd0(u32) asm("func_00176cd0");

// 0x001d14b8 func_001d14b8
void func_001d14b8(u32 a0) asm("func_001d14b8");
void func_001d14b8(u32 a0) {
    if ((*(u32*)((a0 + 0xb50)) != 6)) {
        func_00176cd0(a0);
        return;
    } else {
        return;
    }
}

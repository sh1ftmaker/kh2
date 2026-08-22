// coverage: addr=0x001ce458 symbol=func_001ce458 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:84.23
#include "common/types.h"

extern "C" u32 func_0016b5b8(u32) asm("func_0016b5b8");
extern "C" void func_001dba98(u32) asm("func_001dba98");

// 0x001ce458 func_001ce458
u32 func_001ce458(u32 a0) asm("func_001ce458");
u32 func_001ce458(u32 a0) {
    func_001dba98(*(u32*)((a0 + 0x9f4)));
    return func_0016b5b8(a0);
}

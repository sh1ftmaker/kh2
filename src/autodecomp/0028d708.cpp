// coverage: addr=0x0028d708 symbol=func_0028d708 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00138d48(u32) asm("func_00138d48");

// 0x0028d708 func_0028d708
u32 func_0028d708(u32 a0) asm("func_0028d708");
u32 func_0028d708(u32 a0) {
    func_00138d48(a0);
    return func_001395f8(a0);
}

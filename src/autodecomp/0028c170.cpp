// coverage: addr=0x0028c170 symbol=func_0028c170 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" void func_00139d78(u32) asm("func_00139d78");

// 0x0028c170 func_0028c170
u32 func_0028c170(u32 a0) asm("func_0028c170");
u32 func_0028c170(u32 a0) {
    func_00139d78(a0);
    return func_00139510(a0);
}

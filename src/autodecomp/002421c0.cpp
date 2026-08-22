// coverage: addr=0x002421c0 symbol=func_002421c0 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_002ef938(u32) asm("func_002ef938");
extern "C" void func_00242088(u32) asm("func_00242088");

// 0x002421c0 func_002421c0
u32 func_002421c0(u32 a0) asm("func_002421c0");
u32 func_002421c0(u32 a0) {
    u32 s0;
    s0 = *(u32*)((a0 + 4));
    func_00242088(a0);
    return func_002ef938(s0);
}

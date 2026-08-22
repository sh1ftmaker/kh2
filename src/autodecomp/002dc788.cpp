// coverage: addr=0x002dc788 symbol=func_002dc788 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.94;ghidra:near:88.61;corpus:near:70.56
#include "common/types.h"

extern "C" u32 D_003629e8 asm("D_003629e8");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_002cea28(u32) asm("func_002cea28");
extern "C" void func_002e4a90(u32) asm("func_002e4a90");

// 0x002dc788 func_002dc788
u32 func_002dc788(u32 a0) asm("func_002dc788");
u32 func_002dc788(u32 a0) {
    *(u32*)(a0) = (u32)&D_003629e8;
    func_002e4a90(a0 + 0x100);
    func_002cea28(a0);
    return func_00105110(a0);
}

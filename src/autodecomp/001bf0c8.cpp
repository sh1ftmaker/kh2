// coverage: addr=0x001bf0c8 symbol=func_001bf0c8 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:95.38;e3:near:28.14;corpus:near:6.54
#include "common/types.h"

extern "C" u32 D_00351248 asm("D_00351248");
extern "C" u32 func_001bc990(u32, u32) asm("func_001bc990");
extern "C" void func_001bc778(u32) asm("func_001bc778");

// 0x001bf0c8 func_001bf0c8
u32 func_001bf0c8(u32 a0) asm("func_001bf0c8");
u32 func_001bf0c8(u32 a0) {
    func_001bc778(a0 + 0x594);
    return func_001bc990(a0 + 0x594, (u32)&D_00351248);
}

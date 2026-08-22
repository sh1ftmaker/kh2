// coverage: addr=0x00149c40 symbol=func_00149c40 size=96 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:60.04
#include "common/types.h"

extern "C" u32 D_00348d68 asm("D_00348d68");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001492c8(u32) asm("func_001492c8");
extern "C" u32 func_0015eba8(u32, u32, u32, u32) asm("func_0015eba8");
extern "C" void func_00149448(u32) asm("func_00149448");
extern "C" void func_0015c228(u32) asm("func_0015c228");

// 0x00149c40 func_00149c40
u32 func_00149c40(u32 a0) asm("func_00149c40");
u32 func_00149c40(u32 a0) {
    func_00149448((u32)&D_00348d68);
    func_0015c228(func_001492c8((u32)&D_00348d68));
    return func_0015eba8((u32)&D_00348d68, func_001050c8(), 1, a0);
}

// coverage: addr=0x0027d598 symbol=func_0027d598 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:61.81
#include "common/types.h"

extern "C" u32 func_0027d810(u32) asm("func_0027d810");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_0027d008(u32) asm("func_0027d008");
extern "C" void func_0027d540() asm("func_0027d540");
extern "C" void func_0027d5d8() asm("func_0027d5d8");

// 0x0027d598 func_0027d598
u32 func_0027d598(u32 a0) asm("func_0027d598");
u32 func_0027d598(u32 a0) {
    func_0027d008(a0);
    func_0027d540();
    func_0027d5d8();
    return func_0027d810(func_0028b040(a0));
}

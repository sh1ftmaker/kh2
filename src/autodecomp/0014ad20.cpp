// coverage: addr=0x0014ad20 symbol=func_0014ad20 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:80.21;m2c:near:75.47
#include "common/types.h"

extern "C" u32 D_0014ac18 asm("D_0014ac18");
extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" void func_0014acf8() asm("func_0014acf8");

// 0x0014ad20 func_0014ad20
u32 func_0014ad20() asm("func_0014ad20");
u32 func_0014ad20() {
    func_0014acf8();
    return func_00102788(*(u32*)(&D_0032b91c), 0, 0x50910, (u32)&D_0014ac18);
}

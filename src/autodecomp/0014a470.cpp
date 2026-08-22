// coverage: addr=0x0014a470 symbol=func_0014a470 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:77.53;m2c:near:68.88
#include "common/types.h"

extern "C" u32 D_0014a310 asm("D_0014a310");
extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 D_0034926a asm("D_0034926a");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" void func_0014a248() asm("func_0014a248");

// 0x0014a470 func_0014a470
u32 func_0014a470() asm("func_0014a470");
u32 func_0014a470() {
    *(u8*)(&D_0034926a) = 0;
    func_0014a248();
    return func_00102788(*(u32*)(&D_0032b91c), 0, 0x1c908, (u32)&D_0014a310);
}

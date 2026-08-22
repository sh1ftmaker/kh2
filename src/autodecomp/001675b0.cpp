// coverage: addr=0x001675b0 symbol=func_001675b0 size=104 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:59.38;m2c:near:50.58
#include "common/types.h"

extern "C" u32 D_00167618 asm("D_00167618");
extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" void func_00167638(f32, f32, f32) asm("func_00167638");
extern "C" void func_00167b98() asm("func_00167b98");
extern "C" void func_00167c30() asm("func_00167c30");

// 0x001675b0 func_001675b0
// minilink-rodata 0x0036b610   (float literals live here in the original)
u32 func_001675b0() asm("func_001675b0");
u32 func_001675b0() {
    func_00167638(60.0f, 30.0f, 4.0f);
    func_00167b98();
    func_00167c30();
    return func_00102788(*(u32*)(&D_0032b91c), 0, 0x1adb0, (u32)&D_00167618);
}

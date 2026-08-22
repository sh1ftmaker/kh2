// coverage: addr=0x001cedc0 symbol=func_001cedc0 size=188 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:65.49;m2c:near:64.36
#include "common/types.h"

extern "C" u32 func_0016b740(u32) asm("func_0016b740");
extern "C" u32 func_00198860(u32, u32) asm("func_00198860");
extern "C" void func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_001780d8(u32) asm("func_001780d8");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" void func_0017fd30(u32, u32) asm("func_0017fd30");
extern "C" void func_001c0d38(u32, u32, u32, u32) asm("func_001c0d38");

// 0x001cedc0 func_001cedc0
u32 func_001cedc0(u32 a0) asm("func_001cedc0");
u32 func_001cedc0(u32 a0) {
    u32 v0;
    func_001780d8(a0);
    v0 = func_0016b740(0x654);
    *(u32*)((a0 + 0xb6c)) = v0;
    if (((s32)(v0) != 0)) {
        func_001c0d38(v0, a0, 0x4002, 0);
        func_0017fd30(a0 + 0x140, *(u32*)((a0 + 0xb6c)) + 0x140);
    }
    func_0017f488(a0 + 0x140, 0x2c, 0.0f, 0.0f);
    func_0017f5e0(a0 + 0x140, 0, 0, 0.0f, 0.0f);
    func_0016bd60(a0, 0x17);
    return func_00198860(a0, 9);
}

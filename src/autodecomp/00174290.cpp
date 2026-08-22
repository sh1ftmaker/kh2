// coverage: addr=0x00174290 symbol=func_00174290 size=104 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:79.03
#include "common/types.h"

extern "C" u32 func_0019ca90(u32, u32, u32) asm("func_0019ca90");
extern "C" void func_00190128(u32) asm("func_00190128");
extern "C" void func_00190878(u32, u32, u32) asm("func_00190878");
extern "C" void func_001d6ab0(u32) asm("func_001d6ab0");

// 0x00174290 func_00174290
u32 func_00174290(u32 a0) asm("func_00174290");
u32 func_00174290(u32 a0) {
    u8 frame[32];
    u32 s0;
    u32 s0_0;
    s0 = *(u32*)((*(u32*)((a0 + 8)) + 4));
    func_00190128((u32)frame);
    func_00190878((u32)frame, s0, 0);
    s0_0 = *(u32*)((*(u32*)(a0) + 4));
    func_001d6ab0(*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0xb3c)));
    return func_0019ca90(*(u32*)((s0_0 + 0xb40)), *(u32*)((a0 + 4)), (u32)frame);
}

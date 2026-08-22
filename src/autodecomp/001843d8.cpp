// coverage: addr=0x001843d8 symbol=func_001843d8 size=156 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:71.03;ghidra:near:65.36
#include "common/types.h"

extern "C" u32 func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" u32 func_001805a8(u32, u32) asm("func_001805a8");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");

// 0x001843d8 func_001843d8
u32 func_001843d8(u32 a0) asm("func_001843d8");
u32 func_001843d8(u32 a0) {
    u32 v0;
    if (((s32)((*(u32*)((a0 + 0x168)) & 0x10)) == 0)) {
        if (((s32)(func_001805a8(a0 + 0x140, 5)) != 0)) {
            func_0017f488(a0 + 0x140, 5, 0.0f, 0.0f);
            func_0017f5e0(a0 + 0x140, 0, 0, 0.0f, 0.0f);
        }
    }
    v0 = func_0016bd60(a0, 0);
    *(u32*)((a0 + 0x108)) = (*(u32*)((a0 + 0x108)) | 0x8000000);
    return v0;
}

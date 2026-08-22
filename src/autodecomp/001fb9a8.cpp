// coverage: addr=0x001fb9a8 symbol=func_001fb9a8 size=224 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.23;m2c:near:25.82
#include "common/types.h"

extern "C" u32 D_00354be0 asm("D_00354be0");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" f32 func_001fb8b8(u32, u32, u32) asm("func_001fb8b8");
extern "C" void func_002f3f88(u32, u32, u32) asm("func_002f3f88");

// 0x001fb9a8 func_001fb9a8
f32 func_001fb9a8(u32 a0, u32 a1, u32 a2) asm("func_001fb9a8");
f32 func_001fb9a8(u32 a0, u32 a1, u32 a2) {
    u32 a0_0;
    u32 s0;
    a0_0 = (a0 + *(u32*)(*(u32*)((a2 + 0xc))));
    s0 = (a0_0 + 0xa0);
    *(u8*)((s0 + 0x24)) = (s32)(((f32)((s32)(*(u8*)((a1 + 8)))) * *(f32*)((*(u32*)(&D_01d9e6e0) + 0x30))));
    *(u8*)((s0 + 0x25)) = (s32)(((f32)((s32)(*(u8*)((a1 + 9)))) * *(f32*)((*(u32*)(&D_01d9e6e0) + 0x34))));
    *(u8*)((s0 + 0x26)) = (s32)(((f32)((s32)(*(u8*)((a1 + 0xa)))) * *(f32*)((*(u32*)(&D_01d9e6e0) + 0x38))));
    *(u8*)((s0 + 0x27)) = (s32)(((f32)((s32)(*(u8*)((a1 + 0xb)))) * *(f32*)((*(u32*)(&D_01d9e6e0) + 0x3c))));
    func_002f3f88(a0_0 + 0xb0, (u32)&D_00354be0, a2);
    return func_001fb8b8(s0, 0, 0);
}

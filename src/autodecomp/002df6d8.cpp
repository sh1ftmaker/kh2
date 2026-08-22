// coverage: addr=0x002df6d8 symbol=func_002df6d8 size=128 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:90.39;ghidra:near:80.57
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 D_00362c08 asm("D_00362c08");
extern "C" u32 func_001b0320(u32) asm("func_001b0320");
extern "C" u32 func_002dc7c8(u32) asm("func_002dc7c8");
extern "C" u32 func_002e7568(u32, u32, u32, f32) asm("func_002e7568");

// 0x002df6d8 func_002df6d8
u32 func_002df6d8(u32 a0, u32 a1) asm("func_002df6d8");
u32 func_002df6d8(u32 a0, u32 a1) {
    u32 s1;
    u32 v0;
    u32 v0_0;
    s1 = *(u32*)(&D_00361f60);
    if (((s32)(*(u32*)((a1 + 0x9b8))) != 0)) {
        v0 = func_001b0320(*(u32*)((a1 + 0x9b8)));
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    if (((v0_0 & 0xff) == 0)) {
        return func_002e7568(a1, 6, (u32)&D_00362c08, *(f32*)((func_002dc7c8(s1) + 0xcc)));
    } else {
        return v0_0;
    }
}

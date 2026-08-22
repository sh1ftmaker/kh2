// coverage: addr=0x001ced68 symbol=func_001ced68 size=88 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.62;m2c:near:80.91
#include "common/types.h"

extern "C" u32 D_003521e0 asm("D_003521e0");
extern "C" u32 func_001d56f0(u32) asm("func_001d56f0");
extern "C" void func_00177dc8(u32, u32, u32, u32, u32) asm("func_00177dc8");

// 0x001ced68 func_001ced68
u32 func_001ced68(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001ced68");
u32 func_001ced68(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    func_00177dc8(a0, a1, 0, a2, a3);
    *(u32*)(a0) = (u32)&D_003521e0;
    *(u32*)((a0 + 0xb68)) = 0;
    *(u32*)((a0 + 0xb70)) = 0;
    v0 = func_001d56f0(a0 + 0xb74);
    *(u32*)((a0 + 0x58c)) = (*(u32*)((a0 + 0x58c)) | 4);
    return v0;
}

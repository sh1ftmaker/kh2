// coverage: addr=0x00108600 symbol=func_00108600 size=148 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.84;ghidra:near:94.22;m2c:near:31.49
#include "common/types.h"

extern "C" u32 func_0010a800(u32, u32, u32) asm("func_0010a800");

// 0x00108600 func_00108600
u32 func_00108600(u32 a0) asm("func_00108600");
u32 func_00108600(u32 a0) {
    u32 v0;
    *(u32*)(a0) = 0;
    *(u8*)((a0 + 7)) = 0xffffff80;
    *(u8*)((a0 + 6)) = 0xffffff80;
    *(u8*)((a0 + 5)) = 0xffffff80;
    *(u8*)((a0 + 4)) = 0xffffff80;
    v0 = func_0010a800(a0 + 8, a0 + 9, a0 + 0xa);
    *(u8*)((a0 + 0xb)) = 0xffffffff;
    *(u64*)((a0 + 0x10)) = 0x800d8;
    *(u64*)((a0 + 0x18)) = 0x31000070;
    *(u32*)((a0 + 0x20)) = 0;
    *(u32*)((a0 + 0x24)) = 0;
    *(u8*)((a0 + 0x28)) = 0;
    *(u32*)((a0 + 0x2c)) = 0;
    *(u8*)((a0 + 0x2b)) = 0xffffff80;
    *(u8*)((a0 + 0x2a)) = 0xffffff80;
    *(u8*)((a0 + 0x29)) = 0xffffff80;
    *(u32*)((a0 + 0x30)) = 0;
    *(u32*)((a0 + 0x34)) = 0;
    return v0;
}

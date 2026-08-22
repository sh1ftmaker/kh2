// coverage: addr=0x002dcf18 symbol=func_002dcf18 size=116 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:31.57;m2c:near:0.0
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_002dc7c8(u32) asm("func_002dc7c8");

// 0x002dcf18 func_002dcf18
void func_002dcf18(u32 a0) asm("func_002dcf18");
void func_002dcf18(u32 a0) {
    if ((*(u8*)(((a0 + 0x8000) + 0x6c)) != 0)) {
        if ((*(f32*)(((a0 + 0x8000) + 0x68)) < *(f32*)((func_002dc7c8(a0) + 0xa0)))) {
            *(f32*)(((a0 + 0x8000) + 0x68)) = (*(f32*)(((a0 + 0x8000) + 0x68)) + *(f32*)(&D_00349e10));
        }
    } else {
        if ((0.0f < *(f32*)(((a0 + 0x8000) + 0x68)))) {
            *(f32*)(((a0 + 0x8000) + 0x68)) = (*(f32*)(((a0 + 0x8000) + 0x68)) - *(f32*)(&D_00349e10));
        }
    }
    return;
}

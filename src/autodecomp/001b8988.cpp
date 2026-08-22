// coverage: addr=0x001b8988 symbol=func_001b8988 size=72 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:62.95;ghidra:near:49.21
#include "common/types.h"

extern "C" u32 D_001b89d0 asm("D_001b89d0");
extern "C" u32 D_01d48d90 asm("D_01d48d90");
extern "C" u32 D_01d48d94 asm("D_01d48d94");
extern "C" u32 func_001db610(u32, u32, u32) asm("func_001db610");

// 0x001b8988 func_001b8988
void func_001b8988(u32 a0, u8 a1) asm("func_001b8988");
void func_001b8988(u32 a0, u8 a1) {
    *(u8*)(&D_01d48d94) = a1;
    if (((s32)(*(u32*)((a0 + 0xc))) != 0)) {
        func_001db610(*(u32*)(&D_01d48d90) + *(u32*)((a0 + 0xc)), (u32)&D_001b89d0, 0);
        return;
    } else {
        return;
    }
}

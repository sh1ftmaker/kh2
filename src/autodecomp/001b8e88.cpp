// coverage: addr=0x001b8e88 symbol=_Z16u_call4_001b8e88jjjj size=136 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:57.06;ghidra:near:40.88
#include "common/types.h"

extern "C" u32 D_00320458 asm("D_00320458");
extern "C" u32 D_01d48d98 asm("D_01d48d98");
extern "C" u32 func_001a67b0(u32) asm("func_001a67b0");
extern "C" u32 func_002fd248(u32, u32, u32, u32, u32) asm("func_002fd248");

// 0x001b8e88 u_call4_001b8e88(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001b8e88(u32 a0) asm("_Z16u_call4_001b8e88jjjj");
u32 lift_001b8e88(u32 a0) {
    u32 v0;
    u32 s0;
    u32 v0_0;
    v0 = func_002fd248(a0, *(u32*)(&D_01d48d98) + 8, *(u32*)((*(u32*)(&D_01d48d98) + 4)), 0x30, (u32)&D_00320458);
    if ((*(u16*)((v0 + 2)) == 2)) {
        if ((*(u16*)(v0) != *(u16*)((v0 + 2)))) {
            s0 = *(u32*)(&D_01d48d98);
            v0_0 = func_002fd248(func_001a67b0(*(s16*)((v0 + 4))), s0 + 8, *(u32*)((s0 + 4)), 0x30, (u32)&D_00320458);
            v0 = v0_0;
        }
    }
    return v0;
}

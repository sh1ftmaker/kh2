// coverage: addr=0x002ef180 symbol=func_002ef180 size=56 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:79.62;corpus:near:70.93
#include "common/types.h"

extern "C" u32 D_002ef1b8 asm("D_002ef1b8");
extern "C" u32 func_0018a008(u32, u32, u32) asm("func_0018a008");

// 0x002ef180 func_002ef180
void func_002ef180(u32 a0) asm("func_002ef180");
void func_002ef180(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0xc))) != 0)) {
        func_0018a008(*(u32*)((a0 + 0xc)), (u32)&D_002ef1b8, a0);
        return;
    } else {
        return;
    }
}

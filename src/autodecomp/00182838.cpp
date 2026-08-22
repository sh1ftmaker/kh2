// coverage: addr=0x00182838 symbol=func_00182838 size=40 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:85.45
#include "common/types.h"


// 0x00182838 func_00182838
void func_00182838(u32 a0, u32 a1, u32 a2, u8 a3) asm("func_00182838");
void func_00182838(u32 a0, u32 a1, u32 a2, u8 a3) {
    *(u32*)(a0) = a1;
    *(u32*)((a0 + 4)) = 1;
    *(u32*)((a0 + 8)) = a2;
    if (((s32)(a3) != 0)) {
        *(u32*)((a0 + 4)) = 3;
    }
    return;
}

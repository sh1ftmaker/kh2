// coverage: addr=0x003160e0 symbol=func_003160e0 size=48 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.67;ghidra:near:99.67;m2c:near:99.67
#include "common/types.h"


// 0x003160e0 func_003160e0
u32 func_003160e0(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_003160e0");
u32 func_003160e0(u32 a0, u32 a1, u32 a2, u32 a3) {
    if ((*(u32*)((a0 + 4)) == *(u32*)((a1 + 4)))) {
        *(u32*)(a3) = a2;
        *(u32*)((a3 + 0xc)) = 8;
        *(u32*)((a3 + 4)) = 6;
        return 1;
    } else {
        return 0;
    }
}

// coverage: addr=0x00281f90 symbol=func_00281f90 size=80 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.9;m2c:near:99.85
#include "common/types.h"

extern "C" u32 func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x00281f90 func_00281f90
void func_00281f90(u32 a0) asm("func_00281f90");
void func_00281f90(u32 a0) {
    u32 t6;
    u32 t7;
    *(u32*)((a0 + 0x1008)) = 0xffffffff;
    *(u32*)((a0 + 0x100c)) = 0xffffffff;
    t6 = (a0 + 0x1010);
    t7 = 4;
    do {
        *(u32*)(t6) = 0;
        t6 = (t6 + 4);
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    func_002fde18(a0 + 0x1024, 0, 0x40);
    return;
}

// coverage: addr=0x00135ff0 symbol=func_00135ff0 size=44 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"


// 0x00135ff0 func_00135ff0
void func_00135ff0(u32 a0) asm("func_00135ff0");
void func_00135ff0(u32 a0) {
    u32 t7;
    *(u32*)((a0 + 0xc)) = 0;
    t7 = 0x1f;
    do {
        *(u32*)((a0 + 0x10)) = 0;
        *(u32*)((a0 + 0x14)) = 0;
        a0 = (a0 + 8);
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    return;
}

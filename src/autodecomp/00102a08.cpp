// coverage: addr=0x00102a08 symbol=func_00102a08 size=48 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:66.5;ghidra:near:43.75
#include "common/types.h"


// 0x00102a08 func_00102a08
u32 func_00102a08(u32 a0) asm("func_00102a08");
u32 func_00102a08(u32 a0) {
    u32 v0;
    u32 t6;
    u32 t7;
    v0 = 0;
    t6 = 0;
    while ((t7 = (t6 == 0) ? *(u32*)((a0 + 8)) : *(u32*)((t6 + 0x38))), (t6 = t7), ((s32)(t7) != 0)) {
        v0 = (v0 + 1);
    }
    return v0;
}

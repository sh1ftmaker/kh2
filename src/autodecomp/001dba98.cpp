// coverage: addr=0x001dba98 symbol=func_001dba98 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:83.85;ghidra:near:72.43
#include "common/types.h"


// 0x001dba98 func_001dba98
void func_001dba98(u32 a0) asm("func_001dba98");
void func_001dba98(u32 a0) {
    u32 t7;
    t7 = *(u32*)((a0 + 0x9f8));
    *(u32*)((a0 + 0x9f8)) = (t7 + -1);
    if (((s32)((t7 + -1)) == 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x20))))(a0);
    }
    return;
}

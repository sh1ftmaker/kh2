// coverage: addr=0x002fded8 symbol=func_002fded8 size=88 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:90.46
#include "common/types.h"

extern "C" u32 D_003660a8 asm("D_003660a8");
extern "C" u32 D_003660ac asm("D_003660ac");
extern "C" u32 func_003060f0() asm("func_003060f0");
extern "C" u32 func_0030edb0() asm("func_0030edb0");

// 0x002fded8 func_002fded8
u32 func_002fded8() asm("func_002fded8");
u32 func_002fded8() {
    u32 v0;
    u32 v0_0;
    v0 = func_003060f0();
    if ((v0 != 1)) {
        if (((s32)(*(u32*)(&D_003660a8)) == 0)) {
            v0_0 = func_0030edb0();
            *(u32*)(&D_003660ac) = v0_0;
            v0 = v0_0;
        }
        *(u32*)(&D_003660a8) = (*(u32*)(&D_003660a8) + 1);
    }
    return v0;
}

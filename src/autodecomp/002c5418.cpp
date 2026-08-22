// coverage: addr=0x002c5418 symbol=func_002c5418 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:99.71;ghidra:near:92.29;m2c:near:87.33
#include "common/types.h"

extern "C" u32 D_002c53c8 asm("D_002c53c8");
extern "C" u32 D_0032b96c asm("D_0032b96c");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");

// 0x002c5418 func_002c5418
u32 func_002c5418(u32 a0) asm("func_002c5418");
u32 func_002c5418(u32 a0) {
    u32 v0;
    v0 = func_00102788(*(u32*)(&D_0032b96c), 0, 0x493e0, (u32)&D_002c53c8);
    *(u32*)((v0 + 4)) = a0;
    return v0;
}

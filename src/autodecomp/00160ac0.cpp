// coverage: addr=0x00160ac0 symbol=func_00160ac0 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:90.53;m2c:near:78.45
#include "common/types.h"

extern "C" u32 D_001609e0 asm("D_001609e0");
extern "C" u32 D_00160a90 asm("D_00160a90");
extern "C" u32 D_004f3b30 asm("D_004f3b30");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");

// 0x00160ac0 func_00160ac0
u32 func_00160ac0(u32 a0, u32 a1) asm("func_00160ac0");
u32 func_00160ac0(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_00102788(*(u32*)(&D_004f3b30), 0, a1, (u32)&D_001609e0);
    *(u32*)((v0 + 4)) = a0;
    *(u32*)((v0 + 0x30)) = (u32)&D_00160a90;
    return v0;
}

// coverage: addr=0x002ffd00 symbol=func_002ffd00 size=116 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:96.63;ghidra:near:32.12
#include "common/types.h"

extern "C" u32 D_00365c48 asm("D_00365c48");
extern "C" u32 func_002ffd78(u32, u32, u32, u32) asm("func_002ffd78");
extern "C" void func_00302e10(u32, u32, u32) asm("func_00302e10");

// 0x002ffd00 func_002ffd00
void func_002ffd00(u32 a0, u32 a1, u32 a2) asm("func_002ffd00");
void func_002ffd00(u32 a0, u32 a1, u32 a2) {
    u32 a0_0;
    u32 t6;
    u32 t7;
    a0_0 = *(u32*)((a0 + 0x54));
    if (((s32)(a0_0) == 0)) {
        t6 = *(u32*)(&D_00365c48);
        *(u32*)((a0 + 0x54)) = t6;
        a0_0 = t6;
    }
    t7 = *(u32*)((a0_0 + 0x38));
    if ((t7 == 0)) {
        func_00302e10(a0_0, a1, a2);
    }
    func_002ffd78(*(u32*)((a0 + 0x54)), a0, a1, a2);
    return;
}

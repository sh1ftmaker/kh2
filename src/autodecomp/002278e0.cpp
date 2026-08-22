// coverage: addr=0x002278e0 symbol=func_002278e0 size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.14;ghidra:near:64.27
#include "common/types.h"

extern "C" u32 D_0035db00 asm("D_0035db00");
extern "C" u32 D_0035dcf0 asm("D_0035dcf0");
extern "C" u32 func_00227930(u32) asm("func_00227930");
extern "C" void func_00225fa0(u32, u32) asm("func_00225fa0");

// 0x002278e0 func_002278e0
void func_002278e0(u32 a0) asm("func_002278e0");
void func_002278e0(u32 a0) {
    if (((s32)(*(u32*)(&D_0035dcf0)) != 0)) {
        func_00225fa0((u32)&D_0035db00, *(u32*)((a0 + 0x18)));
        func_00227930(a0);
        return;
    } else {
        return;
    }
}

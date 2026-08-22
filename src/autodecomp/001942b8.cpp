// coverage: addr=0x001942b8 symbol=func_001942b8 size=92 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.96;ghidra:near:57.3
#include "common/types.h"

extern "C" void func_001dcb98(u32, u32) asm("func_001dcb98");

// 0x001942b8 func_001942b8
void func_001942b8(u32 a0) asm("func_001942b8");
void func_001942b8(u32 a0) {
    u32 s1;
    u32 t7;
    s1 = 0xf;
    t7 = *(u32*)((a0 + 0x7b8));
    do {
        if (((s32)(*(u32*)(((a0 + ((s1 - 0xf) * -4)) + 0x7b8))) != 0)) {
            func_001dcb98(*(u32*)(((a0 + ((s1 - 0xf) * -4)) + 0x7b8)), a0 + 0x758);
        }
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}

// coverage: addr=0x0015d828 symbol=func_0015d828 size=132 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:98.03;ghidra:near:80.94
#include "common/types.h"

extern "C" u32 func_0014c350(u32) asm("func_0014c350");
extern "C" void func_0014c738(u32) asm("func_0014c738");

// 0x0015d828 func_0015d828
u32 func_0015d828(u32 a0) asm("func_0015d828");
u32 func_0015d828(u32 a0) {
    u32 s0;
    u32 s1;
    u32 t6;
    func_0014c738(a0 + 0x10);
    ((void(*)(u32))(*(u32*)((*(u32*)((a0 + 0x220)) + 8))))(a0 + 0x220);
    s0 = a0;
    s1 = 5;
    t6 = *(u32*)((a0 + 0xa30));
    do {
        ((void(*)(u32))(*(u32*)((*(u32*)((s0 + 0xa30)) + 8))))(s0 + 0xa30);
        ((void(*)(u32))(*(u32*)((*(u32*)((s0 + 0x430)) + 8))))(s0 + 0x430);
        s0 = (s0 + 0x100);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return func_0014c350(a0 + 0x1030);
}

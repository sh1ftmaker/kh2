// coverage: addr=0x00175a70 symbol=func_00175a70 size=136 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.38;ghidra:near:87.66
#include "common/types.h"

extern "C" u32 func_0016b668(u32) asm("func_0016b668");

// 0x00175a70 func_00175a70
void func_00175a70(u32 a0) asm("func_00175a70");
void func_00175a70(u32 a0) {
    u32 s0;
    u32 s1;
    u32 t7;
    if (((s32)((*(u32*)((a0 + 0x108)) & 0x10000000)) == 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x20))))(a0);
    }
    s0 = (a0 + 0xaf8);
    s1 = 1;
    t7 = *(u32*)((a0 + 0xaf8));
    do {
        if (((s32)(*(u32*)(s0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(s0)) + 0x28))))(*(u32*)(s0));
        }
        s0 = (s0 + 4);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    func_0016b668(a0);
    return;
}

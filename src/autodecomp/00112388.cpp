// coverage: addr=0x00112388 symbol=func_00112388 size=100 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.56;e3:near:69.66;ghidra:near:68.68
#include "common/types.h"

extern "C" u32 D_00341708 asm("D_00341708");
extern "C" void func_00135d88() asm("func_00135d88");

// 0x00112388 func_00112388
void func_00112388() asm("func_00112388");
void func_00112388() {
    u32 s1;
    u32 t7;
    u32 s0;
    func_00135d88();
    s1 = 1;
    t7 = *(u32*)(((u32)&D_00341708 + 4));
    s0 = (u32)&D_00341708;
    do {
        if (((s32)(*(u32*)(((s0 + ((s1 - 1) * -4)) + 4))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(((s0 + ((s1 - 1) * -4)) + 4)) + 0xb60))) + 0x24))))(*(u32*)((*(u32*)(((s0 + ((s1 - 1) * -4)) + 4)) + 0xb60)));
        }
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}

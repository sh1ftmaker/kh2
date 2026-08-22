// coverage: addr=0x00316c68 symbol=func_00316c68 size=160 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.95;ghidra:near:25.5
#include "common/types.h"

extern "C" u32 func_0030edb0() asm("func_0030edb0");
extern "C" u32 func_00316e10(u32, u32) asm("func_00316e10");
extern "C" void func_0030ee00() asm("func_0030ee00");

// 0x00316c68 func_00316c68
u32 func_00316c68(u32 a0, u32 a1) asm("func_00316c68");
u32 func_00316c68(u32 a0, u32 a1) {
    u32 s0;
    u32 v0;
    u32 s1;
    s0 = func_00316e10(a0, a1);
    v0 = func_0030edb0();
    s1 = 0;
    do {
        if ((*(u32*)(s0) == 0)) {
            if (((s32)(a1) != 0)) {
                *(u32*)(s0) = 1;
                if (((s32)(v0) != 0)) {
                    func_0030ee00();
                }
                *(u32*)(a0) = s1;
                return 0;
            }
        }
        s0 = (s0 + 4);
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(8))) != 0));
    if ((v0 != 0)) {
        func_0030ee00();
    }
    return 0xffffffff;
}

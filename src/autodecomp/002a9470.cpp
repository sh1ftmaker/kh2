// coverage: addr=0x002a9470 symbol=func_002a9470 size=136 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.61;m2c:near:72.97
#include "common/types.h"

extern "C" u32 D_0035f60c asm("D_0035f60c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00276a90() asm("func_00276a90");
extern "C" void func_00276b90() asm("func_00276b90");

// 0x002a9470 func_002a9470
u32 func_002a9470() asm("func_002a9470");
u32 func_002a9470() {
    u32 s0;
    u32 s1;
    s0 = 0;
    s1 = 9;
    do {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f60c) + s0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s0 + *(u32*)(&D_0035f60c))) + 0x14))))(s0 + *(u32*)(&D_0035f60c));
        }
        s0 = (s0 + 0x1b4);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    if (((s32)(func_00276a90()) == 0)) {
        func_00276b90();
    }
    return 0;
}

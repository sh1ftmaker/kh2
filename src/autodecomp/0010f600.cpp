// coverage: addr=0x0010f600 symbol=func_0010f600 size=72 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:88.89
#include "common/types.h"

extern "C" u32 func_0010cc80(u32) asm("func_0010cc80");

// 0x0010f600 func_0010f600
u32 func_0010f600(u32 a0) asm("func_0010f600");
u32 func_0010f600(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u32*)((a0 + 0xc))) != 0)) {
        if (((s32)(*(u32*)((*(u32*)((a0 + 0xc)) + 4))) == 0)) {
            if (((s32)((*(u32*)((a0 + 0x160)) & 4)) != 0)) {
                v0 = ((u32)(0) < (u32)(func_0010cc80(a0)));
            } else {
                v0 = 0;
            }
            v0_0 = v0;
        } else {
            v0_0 = 0;
        }
        v0_1 = v0_0;
    } else {
        v0_1 = 0;
    }
    return v0_1;
}

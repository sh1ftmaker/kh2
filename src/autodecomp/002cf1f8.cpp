// coverage: addr=0x002cf1f8 symbol=func_002cf1f8 size=76 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:93.95
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");

// 0x002cf1f8 func_002cf1f8
u32 func_002cf1f8(u32 a0, u32 a1) asm("func_002cf1f8");
u32 func_002cf1f8(u32 a0, u32 a1) {
    if (((s32)(*(u32*)(&D_00361f60)) != 0)) {
        if (((s32)((*(u32*)((a0 + 0x588)) & 0x8000000)) != 0)) {
            if (((s32)((*(u32*)((a1 + 0x588)) & 0x8000000)) != 0)) {
                return ((u32)((*(u32*)((a0 + 0xaf4)) ^ *(u32*)((a1 + 0xaf4)))) < (u32)(1));
            } else {
                return 1;
            }
        } else {
            return 1;
        }
    } else {
        return 1;
    }
}

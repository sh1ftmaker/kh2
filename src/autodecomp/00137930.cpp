// coverage: addr=0x00137930 symbol=func_00137930 size=172 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:94.56;m2c:near:78.65
#include "common/types.h"

extern "C" u32 D_00347d58 asm("D_00347d58");
extern "C" u32 D_00347d5c asm("D_00347d5c");
extern "C" u32 D_00347d60 asm("D_00347d60");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" void func_00139510(u32) asm("func_00139510");
extern "C" void func_001b2028(u32) asm("func_001b2028");

// 0x00137930 func_00137930
void func_00137930(u32 a0) asm("func_00137930");
void func_00137930(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0x518))) != 0)) {
        if (((s32)(func_00139d78(a0 + 0x1c0)) != 0)) {
            func_00139510(a0 + 0x1c0);
        }
        if (((s32)(func_00139d78(a0 + 0x380)) != 0)) {
            func_00139510(a0 + 0x380);
        }
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_00347d5c)) + 0x14))))(*(u32*)(&D_00347d5c));
        func_001b2028(*(u32*)((a0 + 0x518)));
    }
    *(u32*)(&D_00347d58) = (*(u32*)(&D_00347d58) + -1);
    *(u32*)(&D_00347d60) = 0;
    return;
}

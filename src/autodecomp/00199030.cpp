// coverage: addr=0x00199030 symbol=func_00199030 size=104 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:92.04;ghidra:near:30.5
#include "common/types.h"

extern "C" u32 func_0019f060(u32) asm("func_0019f060");
extern "C" void func_00197930(u32, u32, u32) asm("func_00197930");
extern "C" void func_0019f070(u32, u32, u32) asm("func_0019f070");

// 0x00199030 func_00199030
u32 func_00199030(u32 a0) asm("func_00199030");
u32 func_00199030(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u8*)((a0 + 0x30))) == 0)) {
        if (((s32)(*(u32*)((a0 + 0x10))) != 0)) {
            func_00197930(*(u32*)((a0 + 0x10)), *(u32*)((a0 + 0x14)), a0 + 0x34);
            v0_0 = 1;
        } else {
            func_0019f070(a0 + 0x34, 0, a0);
            v0 = func_0019f060(a0 + 0x34);
            v0_0 = v0;
        }
        v0_1 = v0_0;
    } else {
        v0_1 = 1;
    }
    return v0_1;
}

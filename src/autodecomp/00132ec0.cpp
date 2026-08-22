// coverage: addr=0x00132ec0 symbol=func_00132ec0 size=116 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:97.93;ghidra:near:59.21
#include "common/types.h"

extern "C" u32 func_001325c8(u32, u32, u32) asm("func_001325c8");
extern "C" u32 func_00132c68(u32, u32) asm("func_00132c68");

// 0x00132ec0 func_00132ec0
void func_00132ec0(u32 a0, u32 a1) asm("func_00132ec0");
void func_00132ec0(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    v0 = func_00132c68(a0, a1);
    if (((s32)(v0) != 0)) {
        v0_0 = func_001325c8(a0, 0xffff, a1);
        if (((s32)(v0_0) >= 0)) {
            *(u32*)((a0 + 0x274)) = (v0 + *(u32*)(((v0_0 << 2) + (v0 + *(u32*)((v0 + 0x1c))))));
        }
    }
    return;
}

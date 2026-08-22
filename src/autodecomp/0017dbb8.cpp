// coverage: addr=0x0017dbb8 symbol=func_0017dbb8 size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:72.27
#include "common/types.h"

extern "C" u32 func_001758b0(u32) asm("func_001758b0");
extern "C" void func_0013ddc0(u32, u32) asm("func_0013ddc0");

// 0x0017dbb8 func_0017dbb8
void func_0017dbb8(u32 a0) asm("func_0017dbb8");
void func_0017dbb8(u32 a0) {
    if (((s32)((*(u32*)((a0 + 0x588)) & 0x400000)) == 0)) {
        if (((s32)(*(u32*)((a0 + 0xb48))) < (s32)(2))) {
            func_0013ddc0(*(u32*)((a0 + 0xb48)) + 1, a0);
        }
    }
    func_001758b0(a0);
    return;
}

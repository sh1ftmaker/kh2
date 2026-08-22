// coverage: addr=0x0010f960 symbol=func_0010f960 size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:39.06;ghidra:near:33.75
#include "common/types.h"

extern "C" u32 func_0016bd60(u32, u32) asm("func_0016bd60");

// 0x0010f960 func_0010f960
void func_0010f960(u32 a0) asm("func_0010f960");
void func_0010f960(u32 a0) {
    if ((*(u32*)((*(u32*)((a0 + 0xc)) + 4)) == 0x1f)) {
        func_0016bd60(a0, 0x20);
        return;
    } else {
        *(u32*)((a0 + 0xb7c)) = (*(u32*)((a0 + 0xb7c)) | 0x4000);
        return;
    }
}

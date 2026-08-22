// coverage: addr=0x0018f218 symbol=func_0018f218 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.17;m2c:near:99.17
#include "common/types.h"


// 0x0018f218 func_0018f218
void func_0018f218(u32 a0) asm("func_0018f218");
void func_0018f218(u32 a0) {
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(a0) + 4))) + 0x68))))(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)));
}

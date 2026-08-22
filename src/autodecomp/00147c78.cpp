// coverage: addr=0x00147c78 symbol=func_00147c78 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.33;m2c:near:38.0
#include "common/types.h"


// 0x00147c78 func_00147c78
void func_00147c78(u32 a0, u32 a1) asm("func_00147c78");
void func_00147c78(u32 a0, u32 a1) {
    *(u8*)((a1 + 0xc)) = *(u8*)((a1 + 0xe8));
    *(u8*)((a1 + 0xd)) = *(u8*)((a1 + 0xe9));
    *(u8*)((a1 + 0xe)) = *(u8*)((a1 + 0xea));
    *(u8*)((a1 + 0xf)) = *(u8*)((a1 + 0xeb));
}

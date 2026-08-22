// coverage: addr=0x00102ed8 symbol=func_00102ed8 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:98.33;m2c:near:71.46
#include "common/types.h"

extern "C" u32 D_0032b9cc asm("D_0032b9cc");

// 0x00102ed8 func_00102ed8
void func_00102ed8(u32 a0) asm("func_00102ed8");
void func_00102ed8(u32 a0) {
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0032b9cc)) + 4))))(*(u32*)(&D_0032b9cc), a0);
}

// coverage: addr=0x00199cd0 symbol=func_00199cd0 size=100 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.92;ghidra:near:97.72;m2c:near:91.12
#include "common/types.h"


// 0x00199cd0 func_00199cd0
void func_00199cd0(u32 a0) asm("func_00199cd0");
void func_00199cd0(u32 a0) {
    u32 a0_0;
    u32 s0;
    *(u32*)((a0 + 4)) = (*(u32*)((a0 + 4)) | 1);
    a0_0 = *(u32*)((a0 + 0xc));
    while (((s32)(a0_0) != 0)) {
        s0 = *(u32*)((a0_0 + 0x60));
        if (((s32)(a0_0) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(a0_0) + 4))))(a0_0);
        }
        a0_0 = s0;
    }
    *(u32*)((a0 + 0x10)) = 0;
    *(u32*)((a0 + 0xc)) = 0;
    return;
}

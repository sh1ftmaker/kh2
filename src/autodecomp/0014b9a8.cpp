// coverage: addr=0x0014b9a8 symbol=func_0014b9a8 size=116 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:98.62;ghidra:near:57.27;m2c:near:45.84
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001b7f30(u32) asm("func_001b7f30");
extern "C" void func_001b7e68(u32, u32) asm("func_001b7e68");
extern "C" void func_001b80d8(u32) asm("func_001b80d8");

// 0x0014b9a8 func_0014b9a8
u32 func_0014b9a8(u32 a0) asm("func_0014b9a8");
u32 func_0014b9a8(u32 a0) {
    u8 frame[16];
    u32 t5;
    u32 t4;
    *(u32*)(((u32)frame + 8)) = 0;
    *(u32*)(((u32)frame + 4)) = 0;
    *(u32*)((u32)frame) = 0;
    func_001b7e68((u32)frame, 0x20);
    t4 = (u32)frame;
    t5 = 1;
    do {
        *(Q16*)(*(u32*)((t4 + 8))) = *(Q16*)(a0);
        *(u32*)((t4 + 8)) = (*(u32*)((t4 + 8)) + 0x10);
        a0 = (a0 + 0x10);
        t5 = (t5 + -1);
    } while (((s32)(t5) >= 0));
    func_001b80d8((u32)frame);
    return func_001b7f30((u32)frame);
}

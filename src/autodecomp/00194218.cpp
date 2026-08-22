// coverage: addr=0x00194218 symbol=func_00194218 size=156 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:78.74;ghidra:near:58.27;e3:near:8.22
#include "common/types.h"

extern "C" u32 func_001dc670(u32) asm("func_001dc670");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32, f32) asm("func_001de168");
extern "C" void func_001dc920(u32, u32, f32) asm("func_001dc920");

// 0x00194218 func_00194218
void func_00194218(u32 a0, u32 a1, f32 fa0) asm("func_00194218");
void func_00194218(u32 a0, u32 a1, f32 fa0) {
    u32 s0;
    u32 v0;
    u32 s0_0;
    if ((0.0f < fa0)) {
        s0 = (((a1 << 2) + a0) + 0x7b0);
        if (((s32)(*(u32*)((s0 + 8))) == 0)) {
            *(u32*)((s0 + 8)) = func_001de168(a0 + 0x9c, a1, 0, 1, 0, a0, fa0);
        }
        v0 = func_001dc670(*(u32*)((s0 + 8)));
        *(f32*)((v0 + 0xc)) = (*(f32*)((v0 + 0xc)) * fa0);
    } else {
        s0_0 = (((a1 << 2) + a0) + 0x7b0);
        if (((s32)(*(u32*)((s0_0 + 8))) != 0)) {
            func_001dc920(*(u32*)((s0_0 + 8)), a1, fa0);
            *(u32*)((s0_0 + 8)) = 0;
        }
    }
    return;
}

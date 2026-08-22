// coverage: addr=0x0017cb78 symbol=func_0017cb78 size=124 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:73.19;m2c:near:72.26
#include "common/types.h"

extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_00180c88(u32, u32, f32) asm("func_00180c88");

// 0x0017cb78 func_0017cb78
// minilink-rodata 0x0036c540   (float literals live here in the original)
void func_0017cb78(u32 a0, u32 a1) asm("func_0017cb78");
void func_0017cb78(u32 a0, u32 a1) {
    if ((*(u32*)((a1 + 0x100)) == 4)) {
        func_0017f488(a1 + 0x140, 4, 8.0f, 0.0f);
    } else {
        if (((s32)(*(u32*)((a1 + 0x100))) >= 0)) {
            func_00180c88(a1 + 0x140, *(u32*)((a1 + 0x100)), 8.0f);
        }
    }
    *(u32*)((a1 + 0x10c)) = (*(u32*)((a1 + 0x10c)) & 0xfffffffe);
    return;
}

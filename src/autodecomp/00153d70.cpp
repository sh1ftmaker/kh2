// coverage: addr=0x00153d70 symbol=func_00153d70 size=180 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:89.76;ghidra:near:75.37
#include "common/types.h"

extern "C" u32 D_0034a7c0 asm("D_0034a7c0");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 func_0013a9d0() asm("func_0013a9d0");
extern "C" u32 func_0023ee30(u32, u32) asm("func_0023ee30");
extern "C" void func_00153cc8(u32, u32, u32, u32, u32) asm("func_00153cc8");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_00236bb8(u32, f32) asm("func_00236bb8");
extern "C" void func_0023c008(u32) asm("func_0023c008");

// 0x00153d70 func_00153d70
// minilink-rodata 0x0036b26c   (float literals live here in the original)
u32 func_00153d70(u32 a0, u32 a1) asm("func_00153d70");
u32 func_00153d70(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_0023ee30(0xa4, a1);
    *(u32*)(v0) = (u32)&D_0035eb98;
    *(u32*)((v0 + 0xc)) = 0;
    func_002369a0(v0 + 0x18);
    func_0023c008(v0 + 0x30);
    *(u32*)(v0) = (u32)&D_0034a7c0;
    func_00153cc8(v0, a0, 0x12c0, a1, 0);
    if (((s32)(func_0013a9d0()) != 0)) {
        func_00236bb8(v0 + 0x18, 1.0f);
    }
    return v0;
}

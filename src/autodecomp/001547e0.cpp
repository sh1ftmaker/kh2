// coverage: addr=0x001547e0 symbol=func_001547e0 size=196 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:51.34;m2c:near:47.39
#include "common/types.h"

extern "C" u32 func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00239f18(u32, u32, u32, f32) asm("func_00239f18");

// 0x001547e0 func_001547e0
// minilink-rodata 0x0036b274   (float literals live here in the original)
void func_001547e0(u32 a0, u32 a1, u32 a2) asm("func_001547e0");
void func_001547e0(u32 a0, u32 a1, u32 a2) {
    func_00239f18((a0 + (a2 * 0x198)) + 0x48, a1, a2, (f32)((s32)(a1)) / 100.0f);
    func_00138c68((a0 + (a2 * 0x198)) + 0x30, (s32)(-((f32)((s32)(a1)))), 0);
    if ((a2 == 2)) {
        func_00138c68(a0 + 0x4f8, (s32)(-((f32)((s32)(a1)))), 0);
        return;
    } else {
        return;
    }
}

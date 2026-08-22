// coverage: addr=0x00155ab0 symbol=func_00155ab0 size=164 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:46.42;m2c:near:42.24
#include "common/types.h"

extern "C" u32 func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00239f18(u32, u32, u32, f32) asm("func_00239f18");

// 0x00155ab0 func_00155ab0
// minilink-rodata 0x0036b294   (float literals live here in the original)
void func_00155ab0(u32 a0, u32 a1, u32 a2) asm("func_00155ab0");
void func_00155ab0(u32 a0, u32 a1, u32 a2) {
    func_00239f18((a0 + (a2 * 0x19c)) + 0x1a48, a1, a2, (f32)((s32)(a1)) / 100.0f);
    if ((a2 == 9)) {
        func_00138c68(a0 + 0x2be4, (s32)(-((f32)((s32)(a1)))), 0);
        return;
    } else {
        return;
    }
}

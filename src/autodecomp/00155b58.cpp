// coverage: addr=0x00155b58 symbol=func_00155b58 size=152 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:63.02;m2c:near:48.5
#include "common/types.h"

extern "C" u32 func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00239f18(u32, u32, f32) asm("func_00239f18");

// 0x00155b58 func_00155b58
// minilink-rodata 0x0036b298   (float literals live here in the original)
void func_00155b58(u32 a0, u32 a1, f32 fa0) asm("func_00155b58");
void func_00155b58(u32 a0, u32 a1, f32 fa0) {
    func_00239f18((a0 + (a1 * 0x19c)) + 0x1a48, a1, fa0);
    if ((a1 == 9)) {
        func_00138c68(a0 + 0x2be4, -((s32)((fa0 * 100.0f))), 0);
        return;
    } else {
        return;
    }
}

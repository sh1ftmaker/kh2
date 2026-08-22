// coverage: addr=0x002c5658 symbol=func_002c5658 size=116 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:78.34;m2c:near:75.41
#include "common/types.h"

extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");
extern "C" void func_001dc978(u32, u32, u32, f32) asm("func_001dc978");

// 0x002c5658 func_002c5658
// minilink-rodata 0x00375750   (float literals live here in the original)
u32 func_002c5658(u32 a0, u32 a1, u32 a2) asm("func_002c5658");
u32 func_002c5658(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    if (((s32)(*(u32*)((a0 + 0x9f8))) != 0)) {
        func_001dc978(*(u32*)((a0 + 0x9f8)), a1, a2, 10.0f);
    }
    v0 = func_001de168(a1, a2, 0, 1, 0x9c41, a0);
    *(u32*)((a0 + 0x9f8)) = v0;
    return v0;
}

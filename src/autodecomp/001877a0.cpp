// coverage: addr=0x001877a0 symbol=_ZN2YS6BTLOBJ12bind_hitmarkEPN3ryj3PAXEi size=116 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:78.34;m2c:near:77.28
#include "common/types.h"

extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");
extern "C" void func_001dc978(u32, u32, u32, f32) asm("func_001dc978");

// 0x001877a0 YS::BTLOBJ::bind_hitmark(ryj::PAX*, int)
// minilink-rodata 0x0036c9a8   (float literals live here in the original)
u32 lift_001877a0(u32 a0, u32 a1, u32 a2) asm("_ZN2YS6BTLOBJ12bind_hitmarkEPN3ryj3PAXEi");
u32 lift_001877a0(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    if (((s32)(*(u32*)((a0 + 0xae0))) != 0)) {
        func_001dc978(*(u32*)((a0 + 0xae0)), a1, a2, 10.0f);
    }
    v0 = func_001de168(a1, a2, 0, 1, 0x2710, a0);
    *(u32*)((a0 + 0xae0)) = v0;
    return v0;
}

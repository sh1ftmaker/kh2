// coverage: addr=0x002be0b0 symbol=_ZN8worldmap8Libretto8leaveObjEi size=152 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:98.5;ghidra:near:81.56;e3:near:56.33
#include "common/types.h"

extern "C" u32 func_002be5b8(u32) asm("func_002be5b8");
extern "C" u32 func_002be9b0() asm("func_002be9b0");
extern "C" void func_0015f548() asm("func_0015f548");
extern "C" void func_001c8e90() asm("func_001c8e90");
extern "C" void func_002edfd8(u32, u32) asm("func_002edfd8");

// 0x002be0b0 worldmap::Libretto::leaveObj(int)
u32 lift_002be0b0(u32 a0, u32 a1) asm("_ZN8worldmap8Libretto8leaveObjEi");
u32 lift_002be0b0(u32 a0, u32 a1) {
    u32 v0;
    if (((s32)(*(u32*)((((a1 << 2) + a0) + 0x2c))) != 0)) {
        func_002edfd8(a0 + 8, *(u32*)((((a1 << 2) + a0) + 0x2c)));
        if (((s32)(*(u32*)((((a1 << 2) + a0) + 0x2c))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((((a1 << 2) + a0) + 0x2c))) + 4))))(*(u32*)((((a1 << 2) + a0) + 0x2c)));
        }
        *(u32*)((((a1 << 2) + a0) + 0x2c)) = 0;
    }
    v0 = func_002be5b8(a0);
    if (((s32)(v0) == 0)) {
        func_0015f548();
        func_001c8e90();
        return func_002be9b0();
    } else {
        return v0;
    }
}

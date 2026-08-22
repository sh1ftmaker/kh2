// coverage: addr=0x001559e8 symbol=func_001559e8 size=196 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:74.13;m2c:near:60.15
#include "common/types.h"

extern "C" u32 func_00155830(u32, u32, u32, u32) asm("func_00155830");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00138d30(u32, f32) asm("func_00138d30");
extern "C" void func_00139598(u32, u32, u32) asm("func_00139598");
extern "C" void func_001395a8(u32) asm("func_001395a8");
extern "C" void func_00239f18(u32, f32) asm("func_00239f18");

// 0x001559e8 func_001559e8
void func_001559e8(u32 a0, u32 a1, u32 a2) asm("func_001559e8");
void func_001559e8(u32 a0, u32 a1, u32 a2) {
    f32 loc_0;
    f32 loc_4;
    f32 loc_8;
    func_00139598((a0 + (a2 * 0x19c)) + 0x1a30, a1, a2);
    if (((s32)(func_00155830(a1, (u32)&loc_0, (u32)&loc_4, (u32)&loc_8)) == 0)) {
        func_00239f18((a0 + (a2 * 0x19c)) + 0x1a48, loc_0);
        func_001395a8((a0 + (a2 * 0x19c)) + 0x1a30);
        if ((a2 == 4)) {
            func_00138d30(a0 + 0x2574, loc_8);
            func_00138c68(a0 + 0x2574, (s32)(-(loc_4)), 0);
        }
    }
    return;
}

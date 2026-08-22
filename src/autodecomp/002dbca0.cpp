// coverage: addr=0x002dbca0 symbol=_ZN2Ti14MGHachimitsuPo7combineEb size=140 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:59.66;m2c:near:46.54;e3:near:46.07
#include "common/types.h"

extern "C" u32 D_003628f0 asm("D_003628f0");
extern "C" u32 func_002d1260() asm("func_002d1260");
extern "C" u32 func_002db968(u32, u32) asm("func_002db968");
extern "C" void func_0017f540(u32, u32, f32, f32) asm("func_0017f540");
extern "C" void func_001c0d38(u32, u32, u32, u32) asm("func_001c0d38");
extern "C" void func_002e7568(u32, u32, u32, f32) asm("func_002e7568");

// 0x002dbca0 Ti::MGHachimitsuPo::combine(bool)
// minilink-rodata 0x00375d2c   (float literals live here in the original)
u32 lift_002dbca0(u32 a0, u8 a1) asm("_ZN2Ti14MGHachimitsuPo7combineEb");
u32 lift_002dbca0(u32 a0, u8 a1) {
    func_0017f540(a0 + 0x140, 0, 0.0f, 0.0f);
    func_001c0d38(a0, func_002d1260(), 0x43, 0);
    if (((s32)(a1) != 0)) {
        func_002e7568(a0, 2, (u32)&D_003628f0, 1.0f);
    }
    return func_002db968(a0, 1);
}

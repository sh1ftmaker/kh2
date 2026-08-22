// coverage: addr=0x001754d0 symbol=_ZN2YS17trap_treasure_getEP8BD_VALUE size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001382b8(u32) asm("func_001382b8");
extern "C" u32 func_001a8258(u32) asm("func_001a8258");
extern "C" u32 func_001a8510() asm("func_001a8510");
extern "C" void func_001a8418(u32) asm("func_001a8418");

// 0x001754d0 YS::trap_treasure_get(BD_VALUE*)
u32 lift_001754d0(u32 a0) asm("_ZN2YS17trap_treasure_getEP8BD_VALUE");
u32 lift_001754d0(u32 a0) {
    func_001a8418(func_001a8258(*(u32*)(a0)));
    return func_001382b8(func_001a8510());
}

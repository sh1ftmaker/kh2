// coverage: addr=0x00104da0 symbol=_ZN8GUMIMENU12CreateThreadEiiPFvP4TASKEi size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:69.33;m2c:near:63.38;e3:near:45.2
#include "common/types.h"

extern "C" u32 D_00104a48 asm("D_00104a48");
extern "C" u32 D_0032b96c asm("D_0032b96c");
extern "C" u32 D_003a7b00 asm("D_003a7b00");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" void func_001052a8() asm("func_001052a8");

// 0x00104da0 GUMIMENU::CreateThread(int, int, void (*)(TASK*), int)
u32 lift_00104da0() asm("_ZN8GUMIMENU12CreateThreadEiiPFvP4TASKEi");
u32 lift_00104da0() {
    *(u8*)(&D_003a7b00) = 0;
    func_001052a8();
    return func_00102818(*(u32*)(&D_0032b96c), 1, 0x1388, (u32)&D_00104a48, 0x2000);
}

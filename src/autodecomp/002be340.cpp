// coverage: addr=0x002be340 symbol=func_002be340 size=104 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.23;ghidra:near:81.08
#include "common/types.h"

extern "C" u32 D_002be3a8 asm("D_002be3a8");
extern "C" u32 D_002be428 asm("D_002be428");
extern "C" u32 _ZN8worldmap8Libretto14finalizeThreadEP4TASK asm("_ZN8worldmap8Libretto14finalizeThreadEP4TASK");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_00102c48(u32, u32, u32, u32) asm("func_00102c48");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" void func_002bd998(u32, u32) asm("func_002bd998");

// 0x002be340 func_002be340
u32 func_002be340(u32 a0) asm("func_002be340");
u32 func_002be340(u32 a0) {
    func_002bd998(func_001050d8(0x6c), a0);
    *(u32*)((func_00102c48(1, 0x3a98, (u32)&D_002be3a8, 0x2000) + 0x30)) = (u32)&_ZN8worldmap8Libretto14finalizeThreadEP4TASK;
    return func_00102c18(1, 0xee48, (u32)&D_002be428);
}

// coverage: addr=0x00233c98 symbol=_Z16u_call0_00233c98v size=68 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.94;ghidra:near:86.32
#include "common/types.h"

extern "C" u32 D_01dadc00 asm("D_01dadc00");
extern "C" u32 func_00233ce0() asm("func_00233ce0");
extern "C" void func_002fb928() asm("func_002fb928");

// 0x00233c98 u_call0_00233c98()
u32 lift_00233c98() asm("_Z16u_call0_00233c98v");
u32 lift_00233c98() {
    u32 t6;
    u32 t7;
    func_002fb928();
    t6 = 0x100;
    t7 = (u32)&D_01dadc00;
    do {
        *(u64*)((t7 + ((t6 - 0x100) * -8))) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) > 0));
    return func_00233ce0();
}

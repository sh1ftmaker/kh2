// coverage: addr=0x0014d478 symbol=func_0014d478 size=108 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:72.53;ghidra:near:61.88
#include "common/types.h"

extern "C" u32 D_00349e40 asm("D_00349e40");
extern "C" u32 D_00349e7c asm("D_00349e7c");
extern "C" u32 func_00305640(u32) asm("func_00305640");
extern "C" u32 func_00305690(u32, u32) asm("func_00305690");
extern "C" void func_00305660(u32) asm("func_00305660");

// 0x0014d478 func_0014d478
u32 func_0014d478() asm("func_0014d478");
u32 func_0014d478() {
    u8 frame[32];
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    func_00305660(*(u32*)(&D_00349e40));
    s0 = (u32)&D_00349e7c;
    do {
        v0_0 = func_00305690(*(u32*)((s0 + 0x18)), (u32)frame);
        if ((*(u32*)(((u32)frame + 0xc)) != 0)) {
            v0_1 = func_00305640(*(u32*)((s0 + 0x18)));
            v0_0 = v0_1;
        }
        s0 = (s0 + 0x58);
    } while (((s32)(s0) < (s32)(((u32)&D_00349e7c + 0xb0))));
    return v0_0;
}

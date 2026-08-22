// coverage: addr=0x00136158 symbol=func_00136158 size=164 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:94.53;ghidra:near:66.83
#include "common/types.h"

extern "C" u32 func_001dc5f0(u32) asm("func_001dc5f0");
extern "C" void func_00136020(u32) asm("func_00136020");
extern "C" void func_00136200(u32, u32) asm("func_00136200");

// 0x00136158 func_00136158
void func_00136158(u32 a0, u32 a1) asm("func_00136158");
void func_00136158(u32 a0, u32 a1) {
    u32 s2;
    u32 s0;
    if (((s32)(a1) != 0)) {
        func_00136200(a0, a1);
        if ((*(u32*)((a0 + 0xc)) == 0x20)) {
            s2 = *(u32*)((a0 + 0xc));
            func_00136020(a0);
            if ((*(u32*)((a0 + 0xc)) == s2)) {
                func_00136200(a0, *(u32*)((a0 + 0x10)));
            }
        }
        *(u32*)((((*(u32*)((a0 + 0xc)) << 3) + a0) + 0x10)) = a1;
        s0 = (*(u32*)((a0 + 0xc)) << 3);
        *(u32*)(((s0 + a0) + 0x14)) = func_001dc5f0(a1);
        *(u32*)((a0 + 0xc)) = (*(u32*)((a0 + 0xc)) + 1);
    }
    return;
}

// coverage: addr=0x00196888 symbol=func_00196888 size=124 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:96.78
#include "common/types.h"

extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 D_00350338 asm("D_00350338");
extern "C" u32 func_0016cd48(u32, u32) asm("func_0016cd48");
extern "C" void func_0016d110() asm("func_0016d110");

// 0x00196888 func_00196888
void func_00196888() asm("func_00196888");
void func_00196888() {
    u32 s0;
    u32 s1;
    func_0016d110();
    if (((s32)((*(u32*)(&D_0034f240) & 0x20)) == 0)) {
        s0 = (u32)&D_00350338;
        s1 = 7;
        do {
            if ((*(u32*)((s0 + 4)) != 0)) {
                if ((*(u32*)(s0) == 0)) {
                    *(u32*)(s0) = func_0016cd48(*(u32*)((s0 + 4)), 0);
                }
            }
            s0 = (s0 + 8);
            s1 = (s1 + -1);
        } while (((s32)(s1) >= 0));
    }
    return;
}

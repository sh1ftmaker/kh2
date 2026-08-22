// coverage: addr=0x0024eac0 symbol=func_0024eac0 size=144 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:60.89;m2c:near:55.87
#include "common/types.h"

extern "C" u32 D_0035ee18 asm("D_0035ee18");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x0024eac0 func_0024eac0
void func_0024eac0() asm("func_0024eac0");
void func_0024eac0() {
    u32 s0;
    u32 s1;
    s0 = (u32)&D_0035ee18;
    s1 = 4;
    do {
        if (((s32)(*(u32*)(s0)) != 0)) {
            if ((func_00139d78(*(u32*)(s0)) != 0)) {
                if ((*(u32*)((*(u32*)(s0) + 0x184)) != 2)) {
                    func_00138c10(*(u32*)(s0), 2);
                    *(u32*)((*(u32*)(s0) + 0x188)) = 0xffffffff;
                }
            } else {
                *(u32*)(s0) = 0;
            }
        }
        s0 = (s0 + 4);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}

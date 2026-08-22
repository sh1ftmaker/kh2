// coverage: addr=0x001ddc48 symbol=func_001ddc48 size=64 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:94.06;ghidra:near:58.75
#include "common/types.h"

extern "C" u32 D_00352ae0 asm("D_00352ae0");

// 0x001ddc48 func_001ddc48
void func_001ddc48() asm("func_001ddc48");
void func_001ddc48() {
    u32 t6;
    u32 t5;
    u32 t7;
    u32 t7_0;
    t6 = *(u32*)(&D_00352ae0);
    if (((s32)(t6) != 0)) {
        t5 = 0xfbffffff;
        t7 = *(u32*)((t6 + 8));
        do {
            t7_0 = *(u32*)((t6 + 8));
            *(u32*)((t6 + 8)) = (t7_0 & t5);
            t6 = *(u32*)((t6 + 0x28));
            t7 = (t7_0 & t5);
        } while ((t6 != 0));
    }
    return;
}

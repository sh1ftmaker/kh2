// coverage: addr=0x00267320 symbol=func_00267320 size=120 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:76.52;e3:near:42.33
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 func_001a1728(u32, u32) asm("func_001a1728");
extern "C" u32 func_002811b0(u32, u32) asm("func_002811b0");

// 0x00267320 func_00267320
void func_00267320() asm("func_00267320");
void func_00267320() {
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s0;
    s1 = 0;
    s2 = func_002811b0(*(u32*)(&D_0035f010), 0);
    s3 = 0x360000;
    do {
        s0 = ((s1 << 2) + *(u32*)((s3 + -0xf1c)));
        *(u32*)(s0) = func_001a1728(s2, s1);
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(6))) != 0));
    return;
}

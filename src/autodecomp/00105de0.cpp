// coverage: addr=0x00105de0 symbol=func_00105de0 size=104 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:91.15;ghidra:near:80.89;m2c:near:72.21
#include "common/types.h"

extern "C" u32 D_0032b984 asm("D_0032b984");
extern "C" u32 D_0033cb80 asm("D_0033cb80");
extern "C" u32 D_0033cbac asm("D_0033cbac");
extern "C" u32 D_0033cbb0 asm("D_0033cbb0");
extern "C" u32 func_00102080(u32) asm("func_00102080");
extern "C" u32 func_00103b38(u32) asm("func_00103b38");

// 0x00105de0 func_00105de0
void func_00105de0(u32 a0) asm("func_00105de0");
void func_00105de0(u32 a0) {
    if ((func_00103b38(a0) == 0)) {
        if (((*(u32*)(&D_0032b984) ^ 2) != 0)) {
            *(u8*)(&D_0033cbb0) = 1;
            *(u32*)(&D_0033cbac) = a0;
            func_00102080((u32)&D_0033cb80);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

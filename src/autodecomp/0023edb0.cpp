// coverage: addr=0x0023edb0 symbol=func_0023edb0 size=52 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:22.06;ghidra:near:18.21;e3:near:4.96
#include "common/types.h"

extern "C" u32 D_0035eb84 asm("D_0035eb84");
extern "C" u32 D_0035eb88 asm("D_0035eb88");
extern "C" u32 D_0035eb8c asm("D_0035eb8c");

// 0x0023edb0 func_0023edb0
void func_0023edb0(u32 a0) asm("func_0023edb0");
void func_0023edb0(u32 a0) {
    if ((*(u32*)(&D_0035eb88) != a0)) {
        if (((s32)(*(u32*)(&D_0035eb88)) != 0)) {
            *(u32*)(&D_0035eb8c) = *(u32*)(&D_0035eb88);
        }
        *(u32*)(&D_0035eb88) = a0;
        return;
    } else {
        *(u8*)(&D_0035eb84) = (*(u8*)(&D_0035eb84) + 1);
        return;
    }
}

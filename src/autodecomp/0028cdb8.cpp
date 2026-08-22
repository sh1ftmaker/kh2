// coverage: addr=0x0028cdb8 symbol=func_0028cdb8 size=124 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:78.94;ghidra:near:73.94
#include "common/types.h"

extern "C" u32 D_0035f3fc asm("D_0035f3fc");
extern "C" u32 D_0035f410 asm("D_0035f410");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x0028cdb8 func_0028cdb8
void func_0028cdb8(u32 a0) asm("func_0028cdb8");
void func_0028cdb8(u32 a0) {
    if (((s32)(func_00139d78(*(u32*)(&D_0035f3fc) + (a0 * 0x198))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(((a0 * 0x198) + *(u32*)(&D_0035f3fc))) + 0x14))))((a0 * 0x198) + *(u32*)(&D_0035f3fc));
        *(u32*)(&D_0035f410) = (*(u32*)(&D_0035f410) | (1 << a0));
    }
    return;
}

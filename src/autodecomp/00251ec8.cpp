// coverage: addr=0x00251ec8 symbol=func_00251ec8 size=116 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:91.76;ghidra:near:88.53;m2c:near:87.43;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035ee64 asm("D_0035ee64");
extern "C" u32 D_00372668 asm("D_00372668");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f5b8(u32, u32, u32) asm("func_0023f5b8");

// 0x00251ec8 func_00251ec8
void func_00251ec8(u32 a0) asm("func_00251ec8");
void func_00251ec8(u32 a0) {
    if (((s32)(D_0035ee64) != 0)) {
        if (((s32)(func_00139d78(D_0035ee64)) != 0)) {
            s32 t12_38 = (s32)(*(u32*)(((a0 << 2) + (u32)&D_00372668)));
            func_0023f5b8(D_0035ee64, t12_38, 0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

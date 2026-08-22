// coverage: addr=0x0024eff8 symbol=func_0024eff8 size=116 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:91.76;ghidra:near:88.53;m2c:near:87.43;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035ee0c asm("D_0035ee0c");
extern "C" u32 D_003723a0 asm("D_003723a0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f5b8(u32, u32, u32) asm("func_0023f5b8");

// 0x0024eff8 func_0024eff8
void func_0024eff8(u32 a0) asm("func_0024eff8");
void func_0024eff8(u32 a0) {
    if (!(((*(u32*)(&D_0035ee0c)) != 0)) == 0) {
        if (((s32)(func_00139d78(D_0035ee0c)) != 0)) {
            s32 t12_38 = (s32)(*(u32*)(((a0 << 2) + (u32)&D_003723a0)));
            func_0023f5b8(D_0035ee0c, t12_38, 0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

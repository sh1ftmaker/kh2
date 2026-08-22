// coverage: addr=0x002bd870 symbol=func_002bd870 size=132 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:76.51;m2c:near:69.26
#include "common/types.h"

extern "C" u32 D_002bd838 asm("D_002bd838");
extern "C" u32 D_003617ec asm("D_003617ec");
extern "C" u32 D_003617f0 asm("D_003617f0");
extern "C" u32 D_003617f8 asm("D_003617f8");
extern "C" u32 func_00168410(u32, u32, u32, u32, u32, u32) asm("func_00168410");
extern "C" u32 func_002b8ac0(u32) asm("func_002b8ac0");

// 0x002bd870 func_002bd870
u32 func_002bd870() asm("func_002bd870");
u32 func_002bd870() {
    u32 v0;
    u32 v0_0;
    v0 = func_002b8ac0(*(u32*)(&D_003617ec));
    if (((s32)(v0) != 0)) {
        if ((*(u8*)(&D_003617f8) == 0)) {
            if (((s32)(*(u32*)(&D_003617f0)) != 0)) {
                v0_0 = func_00168410(*(u32*)(&D_003617f0), *(u32*)(&D_003617ec), *(u32*)(((*(u32*)(&D_003617ec) + 0x48000) + 0x2c)), 0x10, (u32)&D_002bd838, 0);
                *(u8*)(&D_003617f8) = 1;
                v0 = v0_0;
            }
        }
    }
    return v0;
}

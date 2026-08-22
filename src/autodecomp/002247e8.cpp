// coverage: addr=0x002247e8 symbol=func_002247e8 size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:94.53;m2c:near:78.72
#include "common/types.h"

extern "C" u32 D_0035dad4 asm("D_0035dad4");
extern "C" u32 D_0035dad8 asm("D_0035dad8");
extern "C" u32 D_0035de20 asm("D_0035de20");

// 0x002247e8 func_002247e8
void func_002247e8() asm("func_002247e8");
void func_002247e8() {
    if ((*(u32*)(&D_0035dad8) != *(u32*)(&D_0035de20))) {
        if (((s32)(((s32)(*(u32*)(&D_0035dad4)) < (s32)(5))) != 0)) {
            *(u32*)(&D_0035dad4) = (*(u32*)(&D_0035dad4) + 1);
            *(u32*)(&D_0035dad8) = *(u32*)(&D_0035de20);
        }
    }
    return;
}

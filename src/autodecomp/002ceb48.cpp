// coverage: addr=0x002ceb48 symbol=func_002ceb48 size=104 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.77;m2c:near:89.85
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" void func_00170950(u32) asm("func_00170950");

// 0x002ceb48 func_002ceb48
void func_002ceb48() asm("func_002ceb48");
void func_002ceb48() {
    if ((*(u32*)(&D_00361f60) != 0)) {
        if (((s32)(*(u32*)((*(u32*)(&D_00361f60) + 0x60))) != 0)) {
            func_00170950(*(u32*)((*(u32*)(&D_00361f60) + 0x60)));
            *(u32*)((*(u32*)(&D_00361f60) + 0x60)) = 0;
        }
        if ((*(u32*)(&D_00361f60) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_00361f60)) + 4))))(*(u32*)(&D_00361f60));
        }
        *(u32*)(&D_00361f60) = 0;
    }
    return;
}

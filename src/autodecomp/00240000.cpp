// coverage: addr=0x00240000 symbol=_Z16u_call0_00240000v size=244 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.02;m2c:near:86.6
#include "common/types.h"

extern "C" u32 D_0035ec88 asm("D_0035ec88");
extern "C" u32 D_0035ec8c asm("D_0035ec8c");
extern "C" u32 D_0035ec90 asm("D_0035ec90");
extern "C" u32 D_0035ec94 asm("D_0035ec94");
extern "C" u32 D_0035ec98 asm("D_0035ec98");
extern "C" u32 D_0035ec9c asm("D_0035ec9c");
extern "C" u32 D_0035eca0 asm("D_0035eca0");
extern "C" u32 D_0035eca4 asm("D_0035eca4");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_00106450(u32) asm("func_00106450");
extern "C" void func_00242048(u32) asm("func_00242048");

// 0x00240000 u_call0_00240000()
void lift_00240000() asm("_Z16u_call0_00240000v");
void lift_00240000() {
    u32 s0;
    if ((*(u32*)(&D_0035ec88) != 0)) {
        func_00106450(*(u32*)(&D_0035ec88));
        *(u32*)(&D_0035ec88) = 0;
    }
    if ((*(u32*)(&D_0035ec8c) != 0)) {
        func_00106450(*(u32*)(&D_0035ec8c));
        *(u32*)(&D_0035ec8c) = 0;
    }
    if ((*(u32*)(&D_0035ec90) != 0)) {
        func_00106450(*(u32*)(&D_0035ec90));
        *(u32*)(&D_0035ec90) = 0;
    }
    if ((*(u32*)(&D_0035ec94) != 0)) {
        func_00106420(*(u32*)(&D_0035ec94));
        *(u32*)(&D_0035ec94) = 0;
    }
    if ((*(u32*)(&D_0035ec98) != 0)) {
        func_00106420(*(u32*)(&D_0035ec98));
        *(u32*)(&D_0035ec98) = 0;
    }
    if (((s32)(*(u32*)(&D_0035eca0)) != 0)) {
        func_00106450(*(u32*)(&D_0035eca0));
        *(u32*)(&D_0035eca0) = 0;
    }
    *(u32*)(&D_0035ec9c) = 0;
    if ((*(u32*)(&D_0035eca4) != 0)) {
        s0 = *(u32*)(&D_0035eca4);
        func_00242048(*(u32*)(&D_0035eca4));
        func_00106420(s0);
        *(u32*)(&D_0035eca4) = 0;
    }
    return;
}

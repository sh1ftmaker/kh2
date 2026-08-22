// coverage: addr=0x00256f18 symbol=func_00256f18 size=232 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:93.03;ghidra:near:92.67;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 func_00288e88(u32) asm("func_00288e88");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x00256f18 func_00256f18
void func_00256f18() asm("func_00256f18");
void func_00256f18() {
    u32 s1;
    u32 s1_0;
    u32 s1_1;
    if ((*(u32*)(&D_0035f01c) != 0)) {
        s1 = func_002892f8(*(u32*)(&D_0035f01c));
        if ((func_0028acc8(*(u32*)(&D_0035f01c)) == 0)) {
            if ((s1 != 0)) {
                func_00288e88(*(u32*)(&D_0035f01c));
            }
        }
    }
    if ((*(u32*)(&D_0035f020) != 0)) {
        s1_0 = func_002892f8(*(u32*)(&D_0035f020));
        if ((func_0028acc8(*(u32*)(&D_0035f020)) == 0)) {
            if ((s1_0 != 0)) {
                func_00288e88(*(u32*)(&D_0035f020));
            }
        }
    }
    if ((*(u32*)(&D_0035f024) != 0)) {
        s1_1 = func_002892f8(*(u32*)(&D_0035f024));
        if ((func_0028acc8(*(u32*)(&D_0035f024)) == 0)) {
            if ((s1_1 != 0)) {
                func_00288e88(*(u32*)(&D_0035f024));
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}

// coverage: addr=0x00244888 symbol=func_00244888 size=172 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.44;m2c:near:95.33
#include "common/types.h"

extern "C" u32 D_0035ece8 asm("D_0035ece8");
extern "C" u32 D_0035ecec asm("D_0035ecec");
extern "C" u32 func_00288e88(u32) asm("func_00288e88");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x00244888 func_00244888
void func_00244888() asm("func_00244888");
void func_00244888() {
    u32 s1;
    u32 s1_0;
    if (((s32)(*(u32*)(&D_0035ece8)) != 0)) {
        s1 = func_002892f8(*(u32*)(&D_0035ece8));
        if ((func_0028acc8(*(u32*)(&D_0035ece8)) == 0)) {
            if ((s1 != 0)) {
                func_00288e88(*(u32*)(&D_0035ece8));
            }
        }
    }
    if (((s32)(*(u32*)(&D_0035ecec)) != 0)) {
        s1_0 = func_002892f8(*(u32*)(&D_0035ecec));
        if ((func_0028acc8(*(u32*)(&D_0035ecec)) == 0)) {
            if ((s1_0 != 0)) {
                func_00288e88(*(u32*)(&D_0035ecec));
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

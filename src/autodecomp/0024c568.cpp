// coverage: addr=0x0024c568 symbol=func_0024c568 size=172 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.44;m2c:near:95.33;e3:near:16.79
#include "common/types.h"

extern "C" u32 D_0035eda8 asm("D_0035eda8");
extern "C" u32 D_0035edac asm("D_0035edac");
extern "C" u32 func_00288e88(u32) asm("func_00288e88");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x0024c568 func_0024c568
void func_0024c568() asm("func_0024c568");
void func_0024c568() {
    u32 s1;
    u32 s1_0;
    if (((s32)(*(u32*)(&D_0035eda8)) != 0)) {
        s1 = func_002892f8(*(u32*)(&D_0035eda8));
        if ((func_0028acc8(*(u32*)(&D_0035eda8)) == 0)) {
            if ((s1 != 0)) {
                func_00288e88(*(u32*)(&D_0035eda8));
            }
        }
    }
    if (((s32)(*(u32*)(&D_0035edac)) != 0)) {
        s1_0 = func_002892f8(*(u32*)(&D_0035edac));
        if ((func_0028acc8(*(u32*)(&D_0035edac)) == 0)) {
            if ((s1_0 != 0)) {
                func_00288e88(*(u32*)(&D_0035edac));
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

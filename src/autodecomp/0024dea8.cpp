// coverage: addr=0x0024dea8 symbol=func_0024dea8 size=172 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.44;m2c:near:95.33
#include "common/types.h"

extern "C" u32 D_0035edcc asm("D_0035edcc");
extern "C" u32 D_0035edd0 asm("D_0035edd0");
extern "C" u32 func_00288e88(u32) asm("func_00288e88");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x0024dea8 func_0024dea8
void func_0024dea8() asm("func_0024dea8");
void func_0024dea8() {
    u32 s1;
    u32 s1_0;
    if (((s32)(*(u32*)(&D_0035edcc)) != 0)) {
        s1 = func_002892f8(*(u32*)(&D_0035edcc));
        if ((func_0028acc8(*(u32*)(&D_0035edcc)) == 0)) {
            if ((s1 != 0)) {
                func_00288e88(*(u32*)(&D_0035edcc));
            }
        }
    }
    if (((s32)(*(u32*)(&D_0035edd0)) != 0)) {
        s1_0 = func_002892f8(*(u32*)(&D_0035edd0));
        if ((func_0028acc8(*(u32*)(&D_0035edd0)) == 0)) {
            if ((s1_0 != 0)) {
                func_00288e88(*(u32*)(&D_0035edd0));
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

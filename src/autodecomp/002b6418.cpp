// coverage: addr=0x002b6418 symbol=func_002b6418 size=172 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.44;m2c:near:95.33
#include "common/types.h"

extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 D_0035f650 asm("D_0035f650");
extern "C" u32 func_00288e88(u32) asm("func_00288e88");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x002b6418 func_002b6418
void func_002b6418() asm("func_002b6418");
void func_002b6418() {
    u32 s1;
    u32 s1_0;
    if (((s32)(*(u32*)(&D_0035f64c)) != 0)) {
        s1 = func_002892f8(*(u32*)(&D_0035f64c));
        if ((func_0028acc8(*(u32*)(&D_0035f64c)) == 0)) {
            if ((s1 != 0)) {
                func_00288e88(*(u32*)(&D_0035f64c));
            }
        }
    }
    if (((s32)(*(u32*)(&D_0035f650)) != 0)) {
        s1_0 = func_002892f8(*(u32*)(&D_0035f650));
        if ((func_0028acc8(*(u32*)(&D_0035f650)) == 0)) {
            if ((s1_0 != 0)) {
                func_00288e88(*(u32*)(&D_0035f650));
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

// coverage: addr=0x00246708 symbol=func_00246708 size=172 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.44;m2c:near:95.33;e3:near:16.79
#include "common/types.h"

extern "C" u32 D_0035ed20 asm("D_0035ed20");
extern "C" u32 D_0035ed24 asm("D_0035ed24");
extern "C" u32 func_00288e88(u32) asm("func_00288e88");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x00246708 func_00246708
void func_00246708() asm("func_00246708");
void func_00246708() {
    u32 s1;
    u32 s1_0;
    if (((s32)(*(u32*)(&D_0035ed20)) != 0)) {
        s1 = func_002892f8(*(u32*)(&D_0035ed20));
        if ((func_0028acc8(*(u32*)(&D_0035ed20)) == 0)) {
            if ((s1 != 0)) {
                func_00288e88(*(u32*)(&D_0035ed20));
            }
        }
    }
    if (((s32)(*(u32*)(&D_0035ed24)) != 0)) {
        s1_0 = func_002892f8(*(u32*)(&D_0035ed24));
        if ((func_0028acc8(*(u32*)(&D_0035ed24)) == 0)) {
            if ((s1_0 != 0)) {
                func_00288e88(*(u32*)(&D_0035ed24));
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

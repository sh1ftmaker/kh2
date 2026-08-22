// coverage: addr=0x0024ab00 symbol=func_0024ab00 size=172 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.44;m2c:near:95.33
#include "common/types.h"

extern "C" u32 D_0035ed70 asm("D_0035ed70");
extern "C" u32 D_0035ed74 asm("D_0035ed74");
extern "C" u32 func_00288e88(u32) asm("func_00288e88");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x0024ab00 func_0024ab00
void func_0024ab00() asm("func_0024ab00");
void func_0024ab00() {
    u32 s1;
    u32 s1_0;
    if (((s32)(*(u32*)(&D_0035ed70)) != 0)) {
        s1 = func_002892f8(*(u32*)(&D_0035ed70));
        if ((func_0028acc8(*(u32*)(&D_0035ed70)) == 0)) {
            if ((s1 != 0)) {
                func_00288e88(*(u32*)(&D_0035ed70));
            }
        }
    }
    if (((s32)(*(u32*)(&D_0035ed74)) != 0)) {
        s1_0 = func_002892f8(*(u32*)(&D_0035ed74));
        if ((func_0028acc8(*(u32*)(&D_0035ed74)) == 0)) {
            if ((s1_0 != 0)) {
                func_00288e88(*(u32*)(&D_0035ed74));
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

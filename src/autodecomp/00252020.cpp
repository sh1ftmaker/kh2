// coverage: addr=0x00252020 symbol=func_00252020 size=116 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.1;m2c:near:92.97
#include "common/types.h"

extern "C" u32 D_0035ee5c asm("D_0035ee5c");
extern "C" u32 func_00288e88(u32) asm("func_00288e88");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x00252020 func_00252020
void func_00252020() asm("func_00252020");
void func_00252020() {
    u32 s1;
    if (((s32)(*(u32*)(&D_0035ee5c)) != 0)) {
        s1 = func_002892f8(*(u32*)(&D_0035ee5c));
        if ((func_0028acc8(*(u32*)(&D_0035ee5c)) == 0)) {
            if ((s1 != 0)) {
                func_00288e88(*(u32*)(&D_0035ee5c));
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

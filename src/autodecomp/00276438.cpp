// coverage: addr=0x00276438 symbol=func_00276438 size=116 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.1;m2c:near:92.97;e3:near:19.27
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 func_00288e88(u32) asm("func_00288e88");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x00276438 func_00276438
void func_00276438() asm("func_00276438");
void func_00276438() {
    u32 s1;
    if (((s32)(*(u32*)(&D_0035f200)) != 0)) {
        s1 = func_002892f8(*(u32*)(&D_0035f200));
        if ((func_0028acc8(*(u32*)(&D_0035f200)) == 0)) {
            if ((s1 != 0)) {
                func_00288e88(*(u32*)(&D_0035f200));
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

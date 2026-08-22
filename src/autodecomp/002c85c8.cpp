// coverage: addr=0x002c85c8 symbol=func_002c85c8 size=124 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.41;m2c:near:93.25;e3:near:86.48
#include "common/types.h"

extern "C" u32 D_00361dd8 asm("D_00361dd8");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_002c5150(u32) asm("func_002c5150");
extern "C" u32 func_002c77b8(u32, u32) asm("func_002c77b8");
extern "C" void func_002c8490(u32) asm("func_002c8490");

// 0x002c85c8 func_002c85c8
void func_002c85c8(u32 a0) asm("func_002c85c8");
void func_002c85c8(u32 a0) {
    if ((func_002c5150(a0) == 0)) {
        if (((s32)(*(u32*)(&D_00361dd8)) != 0)) {
            if ((*(u32*)((*(u32*)(&D_00361dd8) + 0xc0)) != a0)) {
                func_002c8490(*(u32*)(&D_00361dd8));
                *(u32*)(&D_00361dd8) = 0;
                func_002c77b8(func_001050d8(0x1738), a0);
                return;
            } else {
                return;
            }
        } else {
            func_002c77b8(func_001050d8(0x1738), a0);
            return;
        }
    } else {
        return;
    }
}

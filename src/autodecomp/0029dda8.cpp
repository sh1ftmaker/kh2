// coverage: addr=0x0029dda8 symbol=func_0029dda8 size=108 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:96.36;ghidra:near:87.41;e3:near:60.43
#include "common/types.h"

extern "C" u32 D_0035f5ac asm("D_0035f5ac");
extern "C" u32 func_00276638(u32) asm("func_00276638");
extern "C" u32 func_00292a90(u32) asm("func_00292a90");
extern "C" u32 func_00292af0(u32) asm("func_00292af0");
extern "C" u32 func_0029da68(u32) asm("func_0029da68");
extern "C" u32 func_0029dd60() asm("func_0029dd60");

// 0x0029dda8 func_0029dda8
void func_0029dda8() asm("func_0029dda8");
void func_0029dda8() {
    u32 s0;
    s0 = *(s8*)((func_0029da68(*(s16*)((((func_00276638(0xf) << 1) + *(u32*)(&D_0035f5ac)) + 8))) + 1));
    if (((s32)(func_00292a90(s0)) == 0)) {
        if (((s32)(func_00292af0(s0)) == 0)) {
            func_0029dd60();
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

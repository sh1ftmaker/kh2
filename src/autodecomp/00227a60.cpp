// coverage: addr=0x00227a60 symbol=func_00227a60 size=160 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.98;m2c:near:60.36
#include "common/types.h"

extern "C" u32 D_0035dcf0 asm("D_0035dcf0");
extern "C" u32 func_002ff1a4(u32, u32) asm("func_002ff1a4");

// 0x00227a60 func_00227a60
u32 func_00227a60(u32 a0, u32 a1) asm("func_00227a60");
u32 func_00227a60(u32 a0, u32 a1) {
    u32 s1;
    u32 s0;
    s1 = 0;
    s0 = 0;
    do {
        if ((*(u32*)((((s0 + (s1 * 0x54)) + *(u32*)(&D_0035dcf0)) + 4)) != 0)) {
            if ((*(u32*)(((s0 + (s1 * 0x54)) + *(u32*)(&D_0035dcf0))) == a1)) {
                if (((s32)(func_002ff1a4(((s0 + (s1 * 0x54)) + *(u32*)(&D_0035dcf0)) + 0x30, a0)) == 0)) {
                    return (*(u32*)(&D_0035dcf0) + (s0 + (s1 * 0x54)));
                }
            }
        }
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(0x80))) != 0));
    return 0;
}

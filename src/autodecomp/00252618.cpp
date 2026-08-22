// coverage: addr=0x00252618 symbol=func_00252618 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.56;m2c:near:57.64;e3:near:18.29
#include "common/types.h"

struct S6_2_s16 { u8 _p[2]; s16 m; u8 _q[2]; };
extern "C" u32 D_0035ee58 asm("D_0035ee58");
extern "C" u32 D_0035ee7c asm("D_0035ee7c");
extern "C" u32 D_00372650 asm("D_00372650");
extern "C" u32 func_00252110(u32) asm("func_00252110");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028dac8(u32, u32) asm("func_0028dac8");

// 0x00252618 func_00252618
u32 func_00252618() asm("func_00252618");
u32 func_00252618() {
    u32 v0;
    v0 = func_00252110(func_002891e8(*(u32*)(&D_0035ee58)));
    return func_0028dac8(*(u32*)(&D_0035ee7c), ((S6_2_s16*)&D_00372650)[v0].m);
}

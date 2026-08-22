// coverage: addr=0x00283e48 symbol=func_00283e48 size=112 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:65.34;ghidra:near:63.54
#include "common/types.h"

struct S8_6_u8 { u8 _p[6]; u8 m; u8 _q[1]; };
extern "C" u32 D_0035f2b4 asm("D_0035f2b4");
extern "C" u32 D_003742c8 asm("D_003742c8");
extern "C" u32 func_002835a8() asm("func_002835a8");
extern "C" u32 func_00283900(u32) asm("func_00283900");

// 0x00283e48 func_00283e48
void func_00283e48() asm("func_00283e48");
void func_00283e48() {
    if (((s32)((*(s8*)((*(u32*)(&D_0035f2b4) + 0xe)) + 1)) >= (s32)(*(s8*)((*(u32*)(&D_0035f2b4) + 0xd))))) {
        func_002835a8();
        return;
    } else {
        func_00283900((u32)(0) < (u32)((((S8_6_u8*)&D_003742c8)[*(s8*)(((*(u32*)(&D_0035f2b4) + *(s8*)((*(u32*)(&D_0035f2b4) + 0xe))) + 4))].m ^ ((S8_6_u8*)&D_003742c8)[*(s8*)(((*(u32*)(&D_0035f2b4) + *(s8*)((*(u32*)(&D_0035f2b4) + 0xe))) + 5))].m)));
        return;
    }
}

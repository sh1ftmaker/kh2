// coverage: addr=0x002a17e8 symbol=func_002a17e8 size=228 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:92.49;ghidra:near:67.54
#include "common/types.h"

extern "C" u32 D_0035f5d4 asm("D_0035f5d4");
extern "C" u32 D_0035f5d8 asm("D_0035f5d8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00192e50(u32, u32, u32, u32) asm("func_00192e50");
extern "C" u32 func_002595e8(u32, u32) asm("func_002595e8");
extern "C" u32 func_00295430(u32, u32) asm("func_00295430");
extern "C" u32 func_002a1bc0(u32) asm("func_002a1bc0");

// 0x002a17e8 func_002a17e8
u32 func_002a17e8() asm("func_002a17e8");
u32 func_002a17e8() {
    u32 v0;
    u32 v0_0;
    u32 s0;
    u32 v0_1;
    u32 v0_2;
    v0 = func_00139d78(*(u32*)(&D_0035f5d8) + 0x4c8);
    if (((s32)(*(s8*)((*(u32*)(&D_0035f5d4) + 1))) < 0)) {
        *(u32*)((*(u32*)(&D_0035f5d8) + 0x660)) = 0;
    } else {
        v0_0 = func_002a1bc0(*(u16*)((((*(s8*)((*(u32*)(&D_0035f5d4) + 1)) << 3) + *(u32*)(&D_0035f5d4)) + 0x50)));
        if (((s32)((*(u16*)((v0_0 + 0x10)) & 0x400)) != 0)) {
            s0 = func_00192048(*(u16*)((v0_0 + 6)));
            v0_1 = func_00192e50(s0, *(u32*)(&D_0035f5d4) + 4, 0x40, func_00192048(func_00295430(*(s8*)((*(u32*)(&D_0035f5d4) + 2)), 1)));
            v0_0 = v0_1;
        } else {
            v0_2 = func_002595e8(*(u32*)(&D_0035f5d4) + 4, func_00192048(*(u16*)((v0_0 + 6))));
            v0_0 = v0_2;
        }
        *(u32*)((*(u32*)(&D_0035f5d8) + 0x660)) = (*(u32*)(&D_0035f5d4) + 4);
        v0 = v0_0;
    }
    return v0;
}

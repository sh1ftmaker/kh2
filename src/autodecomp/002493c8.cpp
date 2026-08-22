// coverage: addr=0x002493c8 symbol=func_002493c8 size=180 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:80.34;ghidra:near:73.19
#include "common/types.h"

extern "C" u32 D_0035ed4c asm("D_0035ed4c");
extern "C" u32 D_0035ed64 asm("D_0035ed64");
extern "C" u32 D_0035ed69 asm("D_0035ed69");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00243230(u32, u32) asm("func_00243230");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x002493c8 func_002493c8
u32 func_002493c8() asm("func_002493c8");
u32 func_002493c8() {
    u32 v0;
    u8 t7;
    u32 s1;
    v0 = func_002891e8(*(u32*)(&D_0035ed4c));
    t7 = ((((s32)(*(s8*)(&D_0035ed69)) >> v0) ^ 1) & 1);
    if (((s32)(t7) == 0)) {
        s1 = (v0 * 0x198);
        if (((s32)(func_00139d78(*(u32*)(&D_0035ed64) + s1)) != 0)) {
            if ((*(u32*)(((*(u32*)(&D_0035ed64) + s1) + 0x184)) != 0x25)) {
                func_00138c10(*(u32*)(&D_0035ed64) + s1, 0x25);
            }
        }
        return func_00243230(5, v0);
    } else {
        return v0;
    }
}

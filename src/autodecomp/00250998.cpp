// coverage: addr=0x00250998 symbol=func_00250998 size=180 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:80.34;ghidra:near:73.19
#include "common/types.h"

extern "C" u32 D_0035ee34 asm("D_0035ee34");
extern "C" u32 D_0035ee48 asm("D_0035ee48");
extern "C" u32 D_0035ee51 asm("D_0035ee51");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00243230(u32, u32) asm("func_00243230");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x00250998 func_00250998
u32 func_00250998() asm("func_00250998");
u32 func_00250998() {
    u32 v0;
    u8 t7;
    u32 s1;
    v0 = func_002891e8(*(u32*)(&D_0035ee34));
    t7 = ((((s32)(*(s8*)(&D_0035ee51)) >> v0) ^ 1) & 1);
    if (((s32)(t7) == 0)) {
        s1 = (v0 * 0x198);
        if (((s32)(func_00139d78(*(u32*)(&D_0035ee48) + s1)) != 0)) {
            if ((*(u32*)(((*(u32*)(&D_0035ee48) + s1) + 0x184)) != 0x22)) {
                func_00138c10(*(u32*)(&D_0035ee48) + s1, 0x22);
            }
        }
        return func_00243230(6, v0);
    } else {
        return v0;
    }
}

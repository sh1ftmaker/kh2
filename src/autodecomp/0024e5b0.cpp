// coverage: addr=0x0024e5b0 symbol=func_0024e5b0 size=196 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:90.6;m2c:near:75.62
#include "common/types.h"

extern "C" u32 D_0035edcc asm("D_0035edcc");
extern "C" u32 D_0035ede8 asm("D_0035ede8");
extern "C" u32 D_0035edf4 asm("D_0035edf4");
extern "C" u32 D_0035edfc asm("D_0035edfc");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00243230(u32, u32) asm("func_00243230");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x0024e5b0 func_0024e5b0
u32 func_0024e5b0() asm("func_0024e5b0");
u32 func_0024e5b0() {
    u32 v0;
    u8 t7;
    u32 s1;
    u32 s0;
    v0 = func_002891e8(*(u32*)(&D_0035edcc));
    t7 = ((((s32)(*(s8*)(&D_0035edfc)) >> v0) ^ 1) & 1);
    if (((s32)(t7) == 0)) {
        s1 = (v0 * 0x198);
        if (((s32)(func_00139d78(*(u32*)(&D_0035ede8) + s1)) != 0)) {
            if ((*(u32*)(((*(u32*)(&D_0035ede8) + s1) + 0x184)) != 0x25)) {
                func_00138c10(*(u32*)(&D_0035ede8) + s1, 0x25);
            }
        }
        s0 = (*(u32*)(&D_0035edf4) ? (v0 + 3) : v0);
        return func_00243230(0, *(u32*)(&D_0035edf4) ? (v0 + 3) : v0);
    } else {
        return v0;
    }
}

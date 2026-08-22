// coverage: addr=0x002b20b8 symbol=func_002b20b8 size=360 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:91.16;ghidra:near:89.7
#include "common/types.h"

extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00281be0() asm("func_00281be0");
extern "C" u32 func_002b2c80() asm("func_002b2c80");
extern "C" void func_00139510(u32) asm("func_00139510");
extern "C" void func_00281c50() asm("func_00281c50");

// 0x002b20b8 func_002b20b8
u32 func_002b20b8() asm("func_002b20b8");
u32 func_002b20b8() {
    u32 s0;
    u32 s1;
    s0 = 0;
    s1 = 0x2f;
    do {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + s0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s0 + *(u32*)(&D_0035f634))) + 0x14))))(s0 + *(u32*)(&D_0035f634));
        }
        s0 = (s0 + 0x198);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + 0x52e0)) != 0)) {
        func_00139510(*(u32*)(&D_0035f634) + 0x52e0);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + 0x5610)) != 0)) {
        func_00139510(*(u32*)(&D_0035f634) + 0x5610);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + 0x57c4)) != 0)) {
        func_00139510(*(u32*)(&D_0035f634) + 0x57c4);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + 0x5e94)) != 0)) {
        func_00139510(*(u32*)(&D_0035f634) + 0x5e94);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + 0x5478)) != 0)) {
        func_00139510(*(u32*)(&D_0035f634) + 0x5478);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + 0x5b2c)) != 0)) {
        func_00139510(*(u32*)(&D_0035f634) + 0x5b2c);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + 0x5ce0)) != 0)) {
        func_00139510(*(u32*)(&D_0035f634) + 0x5ce0);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f634) + 0x5978)) != 0)) {
        func_00139510(*(u32*)(&D_0035f634) + 0x5978);
    }
    if (((s32)(func_00281be0()) != 0)) {
        func_00281c50();
    }
    return func_002b2c80();
}

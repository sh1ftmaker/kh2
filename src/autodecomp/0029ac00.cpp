// coverage: addr=0x0029ac00 symbol=func_0029ac00 size=316 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.36;ghidra:near:90.53
#include "common/types.h"

extern "C" u32 D_0035f5b0 asm("D_0035f5b0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" void func_00139510(u32) asm("func_00139510");

// 0x0029ac00 func_0029ac00
void func_0029ac00() asm("func_0029ac00");
void func_0029ac00() {
    u32 s0;
    u32 s1;
    if ((*(u32*)(&D_0035f5b0) != 0)) {
        if ((func_00139d78(*(u32*)(&D_0035f5b0)) != 0)) {
            func_00139510(*(u32*)(&D_0035f5b0));
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f5b0) + 0x1b4)) != 0)) {
            func_00139510(*(u32*)(&D_0035f5b0) + 0x1b4);
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f5b0) + 0x368)) != 0)) {
            func_00139510(*(u32*)(&D_0035f5b0) + 0x368);
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f5b0) + 0x17d8)) != 0)) {
            func_00139510(*(u32*)(&D_0035f5b0) + 0x17d8);
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f5b0) + 0x1970)) != 0)) {
            func_00139510(*(u32*)(&D_0035f5b0) + 0x1970);
        }
        s0 = 0;
        s1 = 4;
        do {
            if (((s32)(func_00139d78((*(u32*)(&D_0035f5b0) + s0) + 0x6d0)) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(((s0 + *(u32*)(&D_0035f5b0)) + 0x6d0)) + 0x14))))((s0 + *(u32*)(&D_0035f5b0)) + 0x6d0);
            }
            if ((func_00139d78((*(u32*)(&D_0035f5b0) + s0) + 0xf54) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(((s0 + *(u32*)(&D_0035f5b0)) + 0x6d0)) + 0x14))))((s0 + *(u32*)(&D_0035f5b0)) + 0x6d0);
            }
            s0 = (s0 + 0x1b4);
            s1 = (s1 + -1);
        } while (((s32)(s1) >= 0));
    }
    return;
}

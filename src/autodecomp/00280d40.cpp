// coverage: addr=0x00280d40 symbol=_ZN2Tz12GumiGameOver4DrawEv size=344 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:77.74;m2c:near:59.9
#include "common/types.h"

extern "C" u32 D_0035f250 asm("D_0035f250");
extern "C" u32 D_0035f254 asm("D_0035f254");
extern "C" u32 D_0035f258 asm("D_0035f258");
extern "C" u32 D_0035f25c asm("D_0035f25c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_00289038(u32, u32, u32, u32, u32, u32, u32) asm("func_00289038");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_002890e0(u32, u32, u32, u32, u32) asm("func_002890e0");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x00280d40 Tz::GumiGameOver::Draw()
u32 lift_00280d40() asm("_ZN2Tz12GumiGameOver4DrawEv");
u32 lift_00280d40() {
    u32 s1;
    u32 s0;
    u32 v0;
    u32 s0_0;
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f250))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f250)) + 0x14))))(*(u32*)(&D_0035f250));
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f258))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f258)) + 0x14))))(*(u32*)(&D_0035f258));
        }
        if (((s32)(func_0028acc8(*(u32*)(&D_0035f254))) != 0)) {
            func_0028abe0(*(u32*)(&D_0035f254));
        }
        s1 = 0;
        s0 = 0;
        do {
            if (((s32)(func_00139d78(*(u32*)(&D_0035f25c) + (s0 + (s1 * 0x1b4)))) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(((s0 + (s1 * 0x1b4)) + *(u32*)(&D_0035f25c))) + 0x14))))((s0 + (s1 * 0x1b4)) + *(u32*)(&D_0035f25c));
            }
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(3))) != 0));
    }
    v0 = func_00289310(*(u32*)(&D_0035f254));
    if (((s32)(v0) != 0)) {
        s0_0 = func_002891e8(*(u32*)(&D_0035f254));
        func_002890e0(*(u32*)(&D_0035f254), 1, 2, 0, 0xffffffff);
        return func_00289038(*(u32*)(&D_0035f254), s0_0, 1, 1, 2, 0, 0xffffffff);
    } else {
        return v0;
    }
}

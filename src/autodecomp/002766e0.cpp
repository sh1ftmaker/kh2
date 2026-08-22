// coverage: addr=0x002766e0 symbol=func_002766e0 size=424 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:96.44;ghidra:near:89.7
#include "common/types.h"

extern "C" u32 D_0035f21c asm("D_0035f21c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00276b10() asm("func_00276b10");
extern "C" void func_00139510(u32) asm("func_00139510");
extern "C" void func_00276a18() asm("func_00276a18");

// 0x002766e0 func_002766e0
u32 func_002766e0() asm("func_002766e0");
u32 func_002766e0() {
    u32 s0;
    u32 s1;
    if ((func_00139d78(*(u32*)(&D_0035f21c)) != 0)) {
        func_00139510(*(u32*)(&D_0035f21c));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f21c) + 0x198)) != 0)) {
        func_00139510(*(u32*)(&D_0035f21c) + 0x198);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f21c) + 0x330)) != 0)) {
        func_00139510(*(u32*)(&D_0035f21c) + 0x330);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f21c) + 0x4c8)) != 0)) {
        func_00139510(*(u32*)(&D_0035f21c) + 0x4c8);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f21c) + 0x660)) != 0)) {
        func_00139510(*(u32*)(&D_0035f21c) + 0x660);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f21c) + 0x814)) != 0)) {
        func_00139510(*(u32*)(&D_0035f21c) + 0x814);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f21c) + 0x9c8)) != 0)) {
        func_00139510(*(u32*)(&D_0035f21c) + 0x9c8);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f21c) + 0xb7c)) != 0)) {
        func_00139510(*(u32*)(&D_0035f21c) + 0xb7c);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f21c) + 0xd30)) != 0)) {
        func_00139510(*(u32*)(&D_0035f21c) + 0xd30);
    }
    s0 = 0;
    s1 = 0x1f;
    do {
        if (((s32)(func_00139d78((*(u32*)(&D_0035f21c) + s0) + 0x1098)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(((s0 + *(u32*)(&D_0035f21c)) + 0x1098)) + 0x14))))((s0 + *(u32*)(&D_0035f21c)) + 0x1098);
        }
        if ((func_00139d78((*(u32*)(&D_0035f21c) + s0) + 0x4398) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(((s0 + *(u32*)(&D_0035f21c)) + 0x4398)) + 0x14))))((s0 + *(u32*)(&D_0035f21c)) + 0x4398);
        }
        s0 = (s0 + 0x198);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    func_00276a18();
    return func_00276b10();
}

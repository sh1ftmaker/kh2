// coverage: addr=0x00292f18 symbol=func_00292f18 size=204 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:38.05;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00292e60 asm("D_00292e60");
extern "C" u32 D_0035f4c0 asm("D_0035f4c0");
extern "C" u32 D_0035f4c8 asm("D_0035f4c8");
extern "C" u32 D_0035f4d4 asm("D_0035f4d4");
extern "C" u32 D_0035f4dc asm("D_0035f4dc");
extern "C" u32 D_0035f4e2 asm("D_0035f4e2");
extern "C" u32 D_00374578 asm("D_00374578");
extern "C" void func_00168388(u32, u32, u32, u32) asm("func_00168388");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x00292f18 func_00292f18
u32 func_00292f18() asm("func_00292f18");
u32 func_00292f18() {
    u8 frame[32];
    s32 s0;
    u32 s1;
    u32 s0_0;
    s0 = ((s32)(*(u32*)(*(u32*)(&D_0035f4dc))) >> 0x10);
    s1 = (*(u32*)(*(u32*)(&D_0035f4dc)) & 0xffff);
    func_002fee78((u32)frame, (u32)&D_00374578, *(u32*)(*(u32*)(&D_0035f4dc)) & 0xffff);
    *(u32*)(((s0 << 4) + *(u32*)(&D_0035f4d4))) = s1;
    *(u32*)((((s0 << 4) + *(u32*)(&D_0035f4d4)) + 4)) = 2;
    *(u32*)((((s0 << 4) + *(u32*)(&D_0035f4d4)) + 0xc)) = (*(u32*)(&D_0035f4c8) + (s0 * *(u32*)(&D_0035f4c0)));
    *(u32*)((((s0 << 4) + *(u32*)(&D_0035f4d4)) + 8)) = 0;
    s0_0 = (s0 * *(u32*)(&D_0035f4c0));
    func_00168388((u32)frame, *(u32*)((((s0 << 4) + *(u32*)(&D_0035f4d4)) + 0xc)), (u32)&D_00292e60, (s0 << 4) + *(u32*)(&D_0035f4d4));
    *(u8*)(&D_0035f4e2) = 1;
    return 0;
}

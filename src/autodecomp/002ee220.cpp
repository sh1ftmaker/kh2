// coverage: addr=0x002ee220 symbol=func_002ee220 size=176 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:92.45;e3:near:86.34;ghidra:near:71.82;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_002ee498 asm("D_002ee498");
extern "C" u32 D_003637f8 asm("D_003637f8");
extern "C" u32 D_00363808 asm("D_00363808");
extern "C" u32 D_01e2c080 asm("D_01e2c080");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" u32 func_002edf28(u32) asm("func_002edf28");
extern "C" u32 func_002ee840() asm("func_002ee840");

// 0x002ee220 func_002ee220
u32 func_002ee220(u32 a0) asm("func_002ee220");
u32 func_002ee220(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    v0 = func_002edf28(a0);
    *(u32*)(a0) = (u32)&D_00363808;
    if (((s32)(*(u32*)(&D_003637f8)) == 0)) {
        v0_0 = func_002ee840();
        ((void(*)(u32))(*(u32*)(*(u32*)(v0_0))))(v0_0);
        v0_1 = func_00102788(*(u32*)((v0_0 + 4)), 0, 0x7d0, (u32)&D_002ee498);
        *(u32*)(&D_003637f8) = v0_1;
        v0 = v0_1;
    }
    if (((s32)(*(u32*)(&D_01e2c080)) == 0)) {
        u32 ap26_1 = ((u32)&D_01e2c080 + 4);
        *(u32*)(ap26_1) = a0;
        *(u32*)(&D_01e2c080) = a0;
        *(u32*)((a0 + 0x20)) = 0;
    } else {
        *(u32*)((a0 + 0x20)) = *(u32*)(&D_01e2c080);
        *(u32*)(&D_01e2c080) = a0;
    }
    return v0;
}

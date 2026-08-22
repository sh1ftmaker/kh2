// coverage: addr=0x001b9c28 symbol=_ZN2YS3OBJ10ControlOffEi size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:99.58
#include "common/types.h"

extern "C" u32 D_01d48db8 asm("D_01d48db8");

// 0x001b9c28 YS::OBJ::ControlOff(int)
void lift_001b9c28(u32 a0) asm("_ZN2YS3OBJ10ControlOffEi");
void lift_001b9c28(u32 a0) {
    *(u32*)((((a0 >> 5) << 2) + (u32)&D_01d48db8)) = (*(u32*)((((a0 >> 5) << 2) + (u32)&D_01d48db8)) | (1 << (a0 & 0x1f)));
}

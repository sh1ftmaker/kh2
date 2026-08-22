// coverage: addr=0x0015c0f8 symbol=_Z17ctarget0_0015c0f8v size=184 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.87;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0034ae80 asm("D_0034ae80");
extern "C" u32 D_0034af08 asm("D_0034af08");
extern "C" u32 D_0034ece0 asm("D_0034ece0");
extern "C" u32 func_001492e8(u32, u32) asm("func_001492e8");
extern "C" u32 func_0015bbc8(u32, u32) asm("func_0015bbc8");
extern "C" void func_0031daf0(u32) asm("func_0031daf0");

// 0x0015c0f8 ctarget0_0015c0f8()
void lift_0015c0f8(u32 a0) asm("_Z17ctarget0_0015c0f8v");
void lift_0015c0f8(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0xbe0, 0);
    *(u32*)(v0) = (u32)&D_0034af08;
    *(u32*)((v0 + 0xc)) = 0;
    func_0031daf0(v0 + 0x30);
    *(u32*)(&D_0034ae80) = v0;
    if ((*(u32*)(&D_0034ece0) != 0x63)) {
        v0_0 = func_001492e8(a0, *(u32*)(&D_0034ece0));
        if (((s32)(v0_0) != 0)) {
            func_0015bbc8(*(u32*)(&D_0034ae80), v0_0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

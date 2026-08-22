// coverage: addr=0x0015cde0 symbol=_ZN2dk11EventCamera3endEb size=156 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:79.39;m2c:near:71.73
#include "common/types.h"

extern "C" u32 D_0034af38 asm("D_0034af38");
extern "C" u32 D_004f37f0 asm("D_004f37f0");
extern "C" u32 D_004f3800 asm("D_004f3800");
extern "C" u32 D_004f3810 asm("D_004f3810");
extern "C" u32 D_004f3814 asm("D_004f3814");
extern "C" f32 func_00106f30(u32, u32) asm("func_00106f30");
extern "C" f32 func_001074b8(u32) asm("func_001074b8");
extern "C" u32 func_00106a18(u32) asm("func_00106a18");
extern "C" u32 func_00106a60(u32) asm("func_00106a60");
extern "C" void func_001069b8(u32) asm("func_001069b8");
extern "C" void func_00107368(u32, u32) asm("func_00107368");
extern "C" void func_00107478(u32, u32) asm("func_00107478");
extern "C" void func_00140f78(u32, u32) asm("func_00140f78");

// 0x0015cde0 dk::EventCamera::end(bool)
void lift_0015cde0(u8 a0) asm("_ZN2dk11EventCamera3endEb");
void lift_0015cde0(u8 a0) {
    u8 frame[32];
    u32 v0;
    func_001069b8(0);
    func_00140f78((u32)frame + 0x10, (u32)frame);
    if ((a0 == 1)) {
        *(u8*)(&D_0034af38) = a0;
        v0 = func_00106a60(1);
        func_00107368(v0, (u32)&D_004f3800);
        func_00107478(v0, (u32)&D_004f37f0);
        *(f32*)(&D_004f3814) = func_001074b8(v0);
        *(f32*)(&D_004f3810) = func_00106f30(func_00106a18(1), 0);
    }
    return;
}

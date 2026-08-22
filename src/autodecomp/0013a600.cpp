// coverage: addr=0x0013a600 symbol=_ZN2dk8Field2DD4readEv size=140 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:85.13;ghidra:near:46.14
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_0033caf4 asm("D_0033caf4");
extern "C" u32 D_00347fe8 asm("D_00347fe8");
extern "C" u32 D_0036acf0 asm("D_0036acf0");
extern "C" u32 D_003b8b80 asm("D_003b8b80");
extern "C" u32 D_003b8bc0 asm("D_003b8bc0");
extern "C" u32 func_00105ee8(u32) asm("func_00105ee8");
extern "C" u32 func_001684c0(u32, u32, u32, u32) asm("func_001684c0");
extern "C" void func_001688c8(u32) asm("func_001688c8");
extern "C" void func_002fee78(u32, u32, u32, u32) asm("func_002fee78");

// 0x0013a600 dk::Field2DD::read()
void lift_0013a600() asm("_ZN2dk8Field2DD4readEv");
void lift_0013a600() {
    if ((*(u8*)(&D_0032bae0) != *(u32*)(&D_00347fe8))) {
        *(u32*)(&D_00347fe8) = *(u8*)(&D_0032bae0);
        func_002fee78((u32)&D_003b8b80, (u32)&D_0036acf0, *(u32*)(&D_0033caf4), func_00105ee8(*(u8*)(&D_0032bae0)));
        func_001688c8((u32)&D_003b8b80);
        func_001684c0((u32)&D_003b8b80, (u32)&D_003b8bc0, 0, 0);
        return;
    } else {
        return;
    }
}

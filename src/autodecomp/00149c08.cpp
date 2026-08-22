// coverage: addr=0x00149c08 symbol=_ZN2dk4Area8readDataEv size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:exact:100.0;m2c:exact:100.0;ghidra:near:53.86
#include "common/types.h"

extern "C" u32 D_00348d68 asm("D_00348d68");
extern "C" u32 func_00149428(u32) asm("func_00149428");
extern "C" void func_0013a4c8() asm("func_0013a4c8");
extern "C" void func_0013a600() asm("func_0013a600");
extern "C" void func_001493b8(u32) asm("func_001493b8");

// 0x00149c08 dk::Area::readData()
u32 lift_00149c08() asm("_ZN2dk4Area8readDataEv");
u32 lift_00149c08() {
    func_0013a600();
    func_0013a4c8();
    func_001493b8((u32)&D_00348d68);
    return func_00149428((u32)&D_00348d68);
}

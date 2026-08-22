// coverage: addr=0x00149ec0 symbol=_ZN2dk4Area9finalizerEPK4AREA size=108 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:97.74
#include "common/types.h"

extern "C" u32 D_00348d68 asm("D_00348d68");
extern "C" u32 func_00149de0(u32) asm("func_00149de0");
extern "C" void func_00149bd0(u32) asm("func_00149bd0");
extern "C" void func_0014f148() asm("func_0014f148");
extern "C" void func_0014f1e0() asm("func_0014f1e0");
extern "C" void func_0014f220() asm("func_0014f220");
extern "C" void func_0014f288() asm("func_0014f288");
extern "C" void func_00153c80() asm("func_00153c80");
extern "C" void func_0015a850(u32) asm("func_0015a850");
extern "C" void func_0015edb8() asm("func_0015edb8");
extern "C" void func_00165968() asm("func_00165968");

// 0x00149ec0 dk::Area::finalizer(AREA const*)
u32 lift_00149ec0(u32 a0) asm("_ZN2dk4Area9finalizerEPK4AREA");
u32 lift_00149ec0(u32 a0) {
    func_0015a850(a0);
    func_00153c80();
    func_0014f148();
    func_0014f220();
    func_0014f1e0();
    func_0014f288();
    func_0015edb8();
    func_00165968();
    func_00149bd0((u32)&D_00348d68);
    return func_00149de0(a0);
}

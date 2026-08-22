// coverage: addr=0x002b9bd0 symbol=_Z16wtarget_002b9bd0jjjj size=96 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:88.46;m2c:near:85.28
#include "common/types.h"

extern "C" u32 D_002b9c60 asm("D_002b9c60");
extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" void func_002b691c(u32) asm("func_002b691c");
extern "C" void func_002b9ad0() asm("func_002b9ad0");
extern "C" void func_002b9c80() asm("func_002b9c80");
extern "C" void func_002bacc0() asm("func_002bacc0");
extern "C" void func_002bbde0() asm("func_002bbde0");
extern "C" void func_002bd538() asm("func_002bd538");

// 0x002b9bd0 wtarget_002b9bd0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_002b9bd0() asm("_Z16wtarget_002b9bd0jjjj");
u32 lift_002b9bd0() {
    func_002b691c(0);
    func_002bbde0();
    func_002bacc0();
    func_002b9ad0();
    func_002b9c80();
    func_002bd538();
    return func_00102788(*(u32*)(&D_0032b91c), 0, 0x7a12a, (u32)&D_002b9c60);
}

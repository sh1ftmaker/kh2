// coverage: addr=0x0014d008 symbol=_Z16u_tail0_0014d008v size=84 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:83.9;m2c:near:83.27
#include "common/types.h"

extern "C" u32 D_0014cf18 asm("D_0014cf18");
extern "C" u32 D_0014cf88 asm("D_0014cf88");
extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" void func_0014c908() asm("func_0014c908");
extern "C" void func_0014cfc8() asm("func_0014cfc8");
extern "C" void func_0014d308() asm("func_0014d308");
extern "C" void func_002f33f0(u32) asm("func_002f33f0");

// 0x0014d008 u_tail0_0014d008()
u32 lift_0014d008() asm("_Z16u_tail0_0014d008v");
u32 lift_0014d008() {
    func_0014cfc8();
    func_0014c908();
    func_002f33f0((u32)&D_0014cf18);
    func_0014d308();
    return func_00102788(*(u32*)(&D_0032b91c), 0, 0xc3500, (u32)&D_0014cf88);
}

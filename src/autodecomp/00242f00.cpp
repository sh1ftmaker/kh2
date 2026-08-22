// coverage: addr=0x00242f00 symbol=func_00242f00 size=160 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:64.22;ghidra:near:32.75
#include "common/types.h"

extern "C" u32 D_0035ece0 asm("D_0035ece0");
extern "C" u32 D_003718d0 asm("D_003718d0");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_00243150(u32) asm("func_00243150");
extern "C" void func_0023d320(u32) asm("func_0023d320");
extern "C" void func_002425d0(u32) asm("func_002425d0");
extern "C" void func_00242740(u32) asm("func_00242740");
extern "C" void func_00242fa0() asm("func_00242fa0");
extern "C" void func_00287910(u32, u32, u32) asm("func_00287910");
extern "C" void func_0028c878(u32, u32) asm("func_0028c878");

// 0x00242f00 func_00242f00
void func_00242f00(u32 a0) asm("func_00242f00");
void func_00242f00(u32 a0) {
    func_0023d320(a0);
    func_00242740(0xffffffff);
    func_00287910(a0, 2, 0);
    func_0028c878(func_00103570(), 2);
    func_002425d0(2);
    func_00242fa0();
    if (((s32)(*(u32*)(&D_0035ece0)) < 0)) {
        *(u32*)(&D_0035ece0) = *(u32*)(((a0 << 2) + (u32)&D_003718d0));
    }
    ((void(*)())(*(u32*)((func_00243150(a0) + 4))))();
    return;
}

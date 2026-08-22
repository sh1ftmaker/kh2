// coverage: addr=0x00254f80 symbol=func_00254f80 size=356 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:91.09;m2c:near:78.06
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 D_0035f030 asm("D_0035f030");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f044 asm("D_0035f044");
extern "C" u32 D_0035f048 asm("D_0035f048");
extern "C" u32 D_0035f050 asm("D_0035f050");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00264458() asm("func_00264458");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_00254f08() asm("func_00254f08");
extern "C" void func_00256aa0() asm("func_00256aa0");
extern "C" void func_00256c40() asm("func_00256c40");
extern "C" void func_00256ea8() asm("func_00256ea8");
extern "C" void func_002579e0() asm("func_002579e0");
extern "C" void func_0025f750() asm("func_0025f750");
extern "C" void func_00263d28() asm("func_00263d28");
extern "C" void func_00267768() asm("func_00267768");
extern "C" void func_0026bbf8() asm("func_0026bbf8");
extern "C" void func_0026ee30() asm("func_0026ee30");
extern "C" void func_00277128() asm("func_00277128");
extern "C" void func_0027c570() asm("func_0027c570");
extern "C" void func_0027e770() asm("func_0027e770");
extern "C" void func_002831b0() asm("func_002831b0");
extern "C" void func_00288018() asm("func_00288018");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");
extern "C" void func_0028ce38() asm("func_0028ce38");
extern "C" void func_0028d620(u32) asm("func_0028d620");
extern "C" void func_0028f878() asm("func_0028f878");
extern "C" void func_0028ff68(u32) asm("func_0028ff68");
extern "C" void func_00290488(u32) asm("func_00290488");

// 0x00254f80 func_00254f80
u32 func_00254f80() asm("func_00254f80");
u32 func_00254f80() {
    if (((s32)(func_00139d78(*(u32*)(&D_0035f03c))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f03c)) + 0x14))))(*(u32*)(&D_0035f03c));
    }
    if ((func_0028acc8(*(u32*)(&D_0035f01c)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f01c));
    }
    if ((func_0028acc8(*(u32*)(&D_0035f020)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f020));
    }
    if ((func_0028acc8(*(u32*)(&D_0035f024)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f024));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f030))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f030)) + 0x14))))(*(u32*)(&D_0035f030));
    }
    func_00254f08();
    func_0028f878();
    func_0028d620(*(u32*)(&D_0035f050));
    func_00263d28();
    func_002579e0();
    func_00256c40();
    func_00256ea8();
    func_0028ff68(*(u32*)(&D_0035f044));
    func_00290488(*(u32*)(&D_0035f048));
    func_00288018();
    func_0028ce38();
    func_00256aa0();
    func_0025f750();
    func_00267768();
    func_0026bbf8();
    func_0026ee30();
    func_00277128();
    func_0027c570();
    func_002831b0();
    func_0027e770();
    return func_00264458();
}

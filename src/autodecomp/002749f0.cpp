// coverage: addr=0x002749f0 symbol=_ZN2Tz6Jiminy8LeaveAllEv size=216 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.51;m2c:near:87.24
#include "common/types.h"

extern "C" u32 D_0035f208 asm("D_0035f208");
extern "C" u32 D_0035f218 asm("D_0035f218");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_002763c8() asm("func_002763c8");
extern "C" void func_00274ac8() asm("func_00274ac8");
extern "C" void func_00275cb8() asm("func_00275cb8");
extern "C" void func_00276e28() asm("func_00276e28");
extern "C" void func_0028d620(u32) asm("func_0028d620");
extern "C" void func_0028f878() asm("func_0028f878");
extern "C" void func_002945a8() asm("func_002945a8");
extern "C" void func_00295868() asm("func_00295868");
extern "C" void func_00297010() asm("func_00297010");
extern "C" void func_00297e00(u32) asm("func_00297e00");
extern "C" void func_002995a8() asm("func_002995a8");
extern "C" void func_0029aac0(u32) asm("func_0029aac0");
extern "C" void func_0029ee38() asm("func_0029ee38");
extern "C" void func_002a07f0(u32) asm("func_002a07f0");
extern "C" void func_002a2150() asm("func_002a2150");
extern "C" void func_002a4df8() asm("func_002a4df8");
extern "C" void func_002a6a18() asm("func_002a6a18");
extern "C" void func_002a7760() asm("func_002a7760");
extern "C" void func_002a8a88() asm("func_002a8a88");
extern "C" void func_002aecf0(u32) asm("func_002aecf0");

// 0x002749f0 Tz::Jiminy::LeaveAll()
u32 lift_002749f0() asm("_ZN2Tz6Jiminy8LeaveAllEv");
u32 lift_002749f0() {
    func_00274ac8();
    if (((s32)(func_00139d78(*(u32*)(&D_0035f208))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f208)) + 0x14))))(*(u32*)(&D_0035f208));
    }
    func_0028f878();
    func_0028d620(*(u32*)(&D_0035f218));
    func_00276e28();
    func_002945a8();
    func_00295868();
    func_00297010();
    func_00297e00(0xffffffff);
    func_002995a8();
    func_0029aac0(0xffffffff);
    func_0029ee38();
    func_002a07f0(0xffffffff);
    func_002a2150();
    func_002a4df8();
    func_002a6a18();
    func_002a7760();
    func_002a8a88();
    func_002aecf0(1);
    func_00275cb8();
    return func_002763c8();
}

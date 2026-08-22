// coverage: addr=0x002584c8 symbol=_ZN2Tz5Pause11PauseThreadEP4TASK size=212 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:73.45;e3:near:51.36
#include "common/types.h"

extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_0035f074 asm("D_0035f074");
extern "C" u32 D_0035f078 asm("D_0035f078");
extern "C" u32 D_0035f080 asm("D_0035f080");
extern "C" u32 D_0035f084 asm("D_0035f084");
extern "C" u32 func_0023ee30(u32) asm("func_0023ee30");
extern "C" u32 func_0023f908(u32, u32) asm("func_0023f908");
extern "C" u32 func_0023f948(u32, u32) asm("func_0023f948");
extern "C" u32 func_0026dd18(u32, u32, u32) asm("func_0026dd18");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0023eea0(u32, u32, u32, u32, u32, u32) asm("func_0023eea0");
extern "C" void func_0023ef50(u32) asm("func_0023ef50");
extern "C" void func_0023f0c8(u32, u32) asm("func_0023f0c8");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x002584c8 Tz::Pause::PauseThread(TASK*)
u32 lift_002584c8() asm("_ZN2Tz5Pause11PauseThreadEP4TASK");
u32 lift_002584c8() {
    u32 v0;
    u32 s0;
    v0 = func_0023ee30(0xa0);
    *(u32*)(v0) = (u32)&D_00347f98;
    func_0031a838(v0 + 0xc);
    *(u32*)(v0) = (u32)&D_0035eb98;
    func_002369a0(v0 + 0x18);
    func_0023c008(v0 + 0x30);
    *(u32*)(&D_0035f078) = v0;
    s0 = func_0023f948(*(u32*)(&D_0035f074), 0);
    func_0023eea0(*(u32*)(&D_0035f078), 0x7530, s0, func_0023f908(*(u32*)(&D_0035f074), 0), 0, 0);
    func_0023f0c8(*(u32*)(&D_0035f078), 0xffffffff);
    func_0023ef50(*(u32*)(&D_0035f078));
    return func_0026dd18(*(u32*)(&D_0035f080), *(u32*)(&D_0035f084), 0xffffffff);
}

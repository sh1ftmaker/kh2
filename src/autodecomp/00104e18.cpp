// coverage: addr=0x00104e18 symbol=func_00104e18 size=128 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:80.35;ghidra:near:73.56
#include "common/types.h"

extern "C" u32 D_0032b96c asm("D_0032b96c");
extern "C" u32 D_0032bad8 asm("D_0032bad8");
extern "C" u32 D_0032baf0 asm("D_0032baf0");
extern "C" u32 func_001053c0() asm("func_001053c0");
extern "C" void func_00102688(u32, u32, u32) asm("func_00102688");
extern "C" void func_00108080() asm("func_00108080");
extern "C" void func_0013a958(u32) asm("func_0013a958");
extern "C" void func_00149db8() asm("func_00149db8");
extern "C" void func_00149ec0(u32) asm("func_00149ec0");
extern "C" void func_00167ea8() asm("func_00167ea8");
extern "C" void func_00169308() asm("func_00169308");
extern "C" void func_00169350() asm("func_00169350");
extern "C" void func_00181ba0() asm("func_00181ba0");
extern "C" void func_001de910() asm("func_001de910");

// 0x00104e18 func_00104e18
u32 func_00104e18() asm("func_00104e18");
u32 func_00104e18() {
    *(u8*)(&D_0032bad8) = 0;
    func_00167ea8();
    func_00169308();
    func_00108080();
    func_00149db8();
    func_00102688(*(u32*)(&D_0032b96c), 1, 1);
    func_00169350();
    func_00149ec0((u32)&D_0032baf0);
    func_001de910();
    func_0013a958((u32)&D_0032baf0);
    func_00181ba0();
    return func_001053c0();
}

// coverage: addr=0x00149cb8 symbol=func_00149cb8 size=252 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:98.41;ghidra:near:82.0
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_0032bb10 asm("D_0032bb10");
extern "C" u32 D_00348d68 asm("D_00348d68");
extern "C" u32 D_0034b278 asm("D_0034b278");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001051a0(u32, u32) asm("func_001051a0");
extern "C" u32 func_0013d7c0() asm("func_0013d7c0");
extern "C" u32 func_001bc130() asm("func_001bc130");
extern "C" void func_00103bb0(u32) asm("func_00103bb0");
extern "C" void func_00109e18() asm("func_00109e18");
extern "C" void func_001385c0() asm("func_001385c0");
extern "C" void func_00139f38(u32) asm("func_00139f38");
extern "C" void func_0013a6f8() asm("func_0013a6f8");
extern "C" void func_0013d7d0() asm("func_0013d7d0");
extern "C" void func_00140ce8() asm("func_00140ce8");
extern "C" void func_0014f118() asm("func_0014f118");
extern "C" void func_0014f1c8(u32) asm("func_0014f1c8");
extern "C" void func_0014f208() asm("func_0014f208");
extern "C" void func_0014f268(u32) asm("func_0014f268");
extern "C" void func_00153c60() asm("func_00153c60");
extern "C" void func_0015a810() asm("func_0015a810");
extern "C" void func_0015b2d0() asm("func_0015b2d0");
extern "C" void func_0015df68() asm("func_0015df68");
extern "C" void func_001618b8() asm("func_001618b8");
extern "C" void func_001618f0() asm("func_001618f0");
extern "C" void func_00161ee8() asm("func_00161ee8");

// 0x00149cb8 func_00149cb8
void func_00149cb8() asm("func_00149cb8");
void func_00149cb8() {
    func_0013a6f8();
    func_00103bb0(0xffffffff);
    func_00139f38(func_001050c8());
    *(u32*)(&D_0034b278) = func_001050c8();
    func_00153c60();
    func_001385c0();
    func_00109e18();
    func_0015df68();
    func_00140ce8();
    func_00161ee8();
    func_001618f0();
    func_001618b8();
    func_0015a810();
    func_0014f268((u32)&D_00348d68);
    func_0014f1c8((u32)&D_00348d68);
    func_0014f208();
    func_0014f118();
    func_0013d7d0();
    if (((s32)(func_001051a0((u32)&D_0032bae0, (u32)&D_0032bb10)) == 0)) {
        if (((s32)(func_001bc130()) != 0)) {
            func_0015b2d0();
            func_0013d7c0();
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

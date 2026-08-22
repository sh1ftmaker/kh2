// coverage: addr=0x00240e10 symbol=_ZN2Tz5MCard10GetDirInfoEi size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.25;m2c:near:65.28;e3:near:33.43
#include "common/types.h"

extern "C" u32 D_0035ec88 asm("D_0035ec88");
extern "C" u32 D_0035ec94 asm("D_0035ec94");
extern "C" u32 D_0035ec9c asm("D_0035ec9c");
extern "C" u32 func_00234590(u32, u32, u32, u32, u32) asm("func_00234590");
extern "C" void func_00240360() asm("func_00240360");

// 0x00240e10 Tz::MCard::GetDirInfo(int)
u32 lift_00240e10() asm("_ZN2Tz5MCard10GetDirInfoEi");
u32 lift_00240e10() {
    func_00240360();
    return func_00234590(*(s8*)(*(u32*)(&D_0035ec94)), *(u32*)(&D_0035ec9c), 0x63, *(u32*)(&D_0035ec88), 0);
}

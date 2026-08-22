// coverage: addr=0x001c0a00 symbol=func_001c0a00 size=124 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:71.0;ghidra:near:23.23
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_00351338 asm("D_00351338");
extern "C" u32 D_01d49368 asm("D_01d49368");
extern "C" u32 D_01d4937c asm("D_01d4937c");
extern "C" u32 func_001c0ca0(u32) asm("func_001c0ca0");
extern "C" void func_001c0ae0(u32) asm("func_001c0ae0");

// 0x001c0a00 func_001c0a00
void func_001c0a00(u32 a0) asm("func_001c0a00");
void func_001c0a00(u32 a0) {
    if (((s32)(a0) == 0)) {
        func_001c0ae0((u32)&D_01d49368);
        *(u32*)(&D_00351338) = (u32)&D_01d49368;
        *(u32*)(&D_01d4937c) = *(u8*)((*(u8*)(&D_0032bae0) + (u32)&D_01d49368));
    } else {
        *(u32*)(&D_01d4937c) = a0;
        *(u32*)(&D_00351338) = 0;
    }
    if (((s32)(*(u32*)(&D_01d4937c)) == 0)) {
        *(u32*)(&D_01d4937c) = 1;
    }
    func_001c0ca0(*(u32*)(&D_01d4937c));
    return;
}

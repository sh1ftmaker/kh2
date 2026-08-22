// coverage: addr=0x001bb890 symbol=_ZN2YS7MISSION7PostEndEv size=96 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:73.88
#include "common/types.h"

extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 D_01d49320 asm("D_01d49320");
extern "C" u32 func_001af9f8() asm("func_001af9f8");
extern "C" void func_0014ca20() asm("func_0014ca20");
extern "C" void func_001c1130(u32) asm("func_001c1130");
extern "C" void func_001c11a8(u32) asm("func_001c11a8");
extern "C" void func_001d6c58() asm("func_001d6c58");

// 0x001bb890 YS::MISSION::PostEnd()
u32 lift_001bb890() asm("_ZN2YS7MISSION7PostEndEv");
u32 lift_001bb890() {
    *(u32*)((*(u32*)(&D_01d49320) + 4)) = (*(u32*)((*(u32*)(&D_01d49320) + 4)) | 4);
    *(u32*)((*(u32*)(&D_01d49320) + 4)) = (*(u32*)((*(u32*)(&D_01d49320) + 4)) | 0x10);
    func_0014ca20();
    *(u32*)(&D_0034f240) = (*(u32*)(&D_0034f240) | 2);
    func_001d6c58();
    func_001c11a8(8);
    func_001c1130(5);
    return func_001af9f8();
}

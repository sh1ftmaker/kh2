// coverage: addr=0x00169178 symbol=func_00169178 size=152 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:82.34;m2c:near:76.97
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 func_001bae08() asm("func_001bae08");
extern "C" void func_00182ab0() asm("func_00182ab0");
extern "C" void func_00192260(u32, u32) asm("func_00192260");
extern "C" void func_001a3a50() asm("func_001a3a50");
extern "C" void func_001a5970() asm("func_001a5970");
extern "C" void func_001a64c0() asm("func_001a64c0");
extern "C" void func_001b8318() asm("func_001b8318");
extern "C" void func_001bfbd8() asm("func_001bfbd8");
extern "C" void func_001c8838(u32) asm("func_001c8838");

// 0x00169178 func_00169178
u32 func_00169178() asm("func_00169178");
u32 func_00169178() {
    func_00192260(*(u8*)(&D_0032bae0), 0x410);
    func_001b8318();
    func_001a3a50();
    if (((s32)((*(u32*)(&D_0034f240) & 0x80000)) == 0)) {
        func_001a64c0();
    }
    func_001a5970();
    if (((s32)((*(u32*)(&D_0034f240) & 0x200)) == 0)) {
        if (((s32)((*(u32*)(&D_0034f240) & 0x400)) == 0)) {
            func_001bfbd8();
        }
    }
    func_00182ab0();
    func_001c8838(1);
    return func_001bae08();
}

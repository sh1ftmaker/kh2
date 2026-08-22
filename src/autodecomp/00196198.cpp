// coverage: addr=0x00196198 symbol=func_00196198 size=116 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:93.45;ghidra:near:85.69
#include "common/types.h"

extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 D_01c61b00 asm("D_01c61b00");
extern "C" u32 func_0016c770() asm("func_0016c770");
extern "C" u32 func_0016d080(u32, u32) asm("func_0016d080");
extern "C" void func_0016c750(u32) asm("func_0016c750");
extern "C" void func_0016c7d8(u32) asm("func_0016c7d8");
extern "C" void func_0016cab8(u32) asm("func_0016cab8");
extern "C" void func_0016cbc8(u32, u32, u32, u32) asm("func_0016cbc8");
extern "C" void func_0016cd48(u32, u32) asm("func_0016cd48");

// 0x00196198 func_00196198
u32 func_00196198() asm("func_00196198");
u32 func_00196198() {
    u32 v0;
    func_0016c750(*(u32*)(&D_0032b91c));
    v0 = func_0016d080(*(u32*)(&D_01c61b00), 0);
    func_0016cbc8(v0, 7, 0, 0);
    func_0016cd48(v0, 0);
    if (((s32)(v0) != 0)) {
        func_0016cab8(v0);
        func_0016c7d8(v0);
    }
    return func_0016c770();
}

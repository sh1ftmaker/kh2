// coverage: addr=0x001044f0 symbol=D_001044f0 size=112 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.57;ghidra:near:97.11;e3:near:85.54;m2c:near:70.06
#include "common/types.h"

extern "C" u32 D_0032ba90 asm("D_0032ba90");
extern "C" u32 D_0032babc asm("D_0032babc");
extern "C" u32 D_0032bac0 asm("D_0032bac0");
extern "C" u32 D_0032bac4 asm("D_0032bac4");
extern "C" u32 func_00170320(u32) asm("func_00170320");
extern "C" void func_00170c00(u32) asm("func_00170c00");
extern "C" void func_00170dd0() asm("_ZN2YS10CACHE_BUFF9WaitFlushEP4TASK");
extern "C" void func_003058a0(u32) asm("func_003058a0");
extern "C" void func_01f18014(u32, u32) asm("func_01f18014");

// 0x001044f0 D_001044f0
u32 lift_D_001044f0() asm("D_001044f0");
u32 lift_D_001044f0() {
    u32 v0;
    func_00170dd0();
    func_003058a0(2);
    func_01f18014(1, (u32)&D_0032ba90);
    func_00170c00(*(u32*)(&D_0032bac0));
    func_00170c00(*(u32*)(&D_0032babc));
    v0 = func_00170320(0);
    *(u32*)(&D_0032bac0) = 0;
    *(u32*)(&D_0032bac4) = 0;
    *(u32*)(&D_0032babc) = 0;
    return v0;
}

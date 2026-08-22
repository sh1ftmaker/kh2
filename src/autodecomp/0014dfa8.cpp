// coverage: addr=0x0014dfa8 symbol=_Z16u_call0_0014dfa8v size=220 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:71.16;m2c:near:69.51
#include "common/types.h"

extern "C" u32 D_0014df48 asm("D_0014df48");
extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 D_00349f00 asm("D_00349f00");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" u32 func_0014e638(u32) asm("func_0014e638");
extern "C" u32 func_0014e648(u32) asm("func_0014e648");
extern "C" void func_0014db78(u32, u32, u32, u32, u32, u32, u32) asm("func_0014db78");
extern "C" void func_0014dd18(u32) asm("func_0014dd18");
extern "C" void func_0014dd60(u32, u32, u32, u32) asm("func_0014dd60");
extern "C" void func_0014dda0(u32, u32) asm("func_0014dda0");
extern "C" void func_0014e2c0(u32) asm("func_0014e2c0");
extern "C" void func_00166968(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00166968");

// 0x0014dfa8 u_call0_0014dfa8()
u32 lift_0014dfa8() asm("_Z16u_call0_0014dfa8v");
u32 lift_0014dfa8() {
    u32 s0;
    u32 s1;
    s0 = func_0014e638((u32)&D_00349f00);
    s1 = func_0014e648((u32)&D_00349f00);
    func_00166968(s0, 1, 1, 0, 0x200, 0x1c0, 0, 0);
    func_0014db78(s1, 0, 0xd8, 0x200, 0x1a0, 0x31, 0x70);
    func_0014dd60(s1, 0, 0, 0);
    func_0014dda0(s1, 1);
    func_0014dd18(s1);
    func_0014e2c0((u32)&D_00349f00);
    return func_00102788(*(u32*)(&D_0032b91c), 0, 0x186a0, (u32)&D_0014df48);
}

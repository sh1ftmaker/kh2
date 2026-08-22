// coverage: addr=0x0022b898 symbol=func_0022b898 size=152 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.33;m2c:near:81.59
#include "common/types.h"

extern "C" u32 D_0035e2e8 asm("D_0035e2e8");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_0022b7f0() asm("func_0022b7f0");
extern "C" u32 func_0023c100(u32, u32, u32, u32) asm("func_0023c100");
extern "C" u32 func_0023f908(u32, u32) asm("func_0023f908");
extern "C" u32 func_0023f948(u32, u32) asm("func_0023f948");
extern "C" void func_00236a58(u32, u32, u32) asm("func_00236a58");
extern "C" void func_0023fa90(u32, u32) asm("func_0023fa90");

// 0x0022b898 func_0022b898
u32 func_0022b898() asm("func_0022b898");
u32 func_0022b898() {
    u32 s2;
    u32 s3;
    u32 v0;
    func_0023fa90(*(u32*)(&D_0035e2e8), func_0022b7f0());
    s2 = func_0023f908(*(u32*)(&D_0035e2e8), 0);
    s3 = func_0023f948(*(u32*)(&D_0035e2e8), 0);
    v0 = func_001050c8();
    func_00236a58(*(u32*)(&D_0035e2e8) + 0x78, s2, v0);
    return func_0023c100(*(u32*)(&D_0035e2e8) + 0x1c, s3, *(u32*)(&D_0035e2e8) + 0x78, v0);
}

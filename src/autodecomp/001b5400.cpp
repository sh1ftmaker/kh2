// coverage: addr=0x001b5400 symbol=_Z16u_call0_001b5400v size=92 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:80.77;e3:near:63.0;m2c:near:60.65
#include "common/types.h"

extern "C" u32 D_01d48cb0 asm("D_01d48cb0");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" u32 func_001b5460(u32) asm("func_001b5460");
extern "C" void func_001b4f40(u32) asm("func_001b4f40");

// 0x001b5400 u_call0_001b5400()
u32 lift_001b5400() asm("_Z16u_call0_001b5400v");
u32 lift_001b5400() {
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    if ((*(u32*)(&D_01d48cb0) != 0)) {
        *(u32*)((*(u32*)(&D_01d48cb0) + 0x40)) = (*(u32*)((*(u32*)(&D_01d48cb0) + 0x40)) | 0x10);
        v0 = func_001b5460(*(u32*)(&D_01d48cb0));
        if (((s32)(*(u32*)(&D_01d48cb0)) != 0)) {
            s0 = *(u32*)(&D_01d48cb0);
            func_001b4f40(*(u32*)(&D_01d48cb0));
            v0_0 = func_00105110(s0);
            v0 = v0_0;
        }
        v0_1 = v0;
    }
    return v0_1;
}

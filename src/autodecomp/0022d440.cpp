// coverage: addr=0x0022d440 symbol=func_0022d440 size=164 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.51;m2c:near:91.29;e3:near:50.69
#include "common/types.h"

extern "C" u32 D_0035dcfc asm("D_0035dcfc");
extern "C" void func_001ba028(u32) asm("func_001ba028");
extern "C" void func_00232db0(u32) asm("func_00232db0");

// 0x0022d440 func_0022d440
void func_0022d440() asm("func_0022d440");
void func_0022d440() {
    u32 s0;
    u32 s1;
    if (((s32)(*(u32*)(&D_0035dcfc)) != 0)) {
        s0 = 0;
        s1 = 0x5f;
        do {
            if (((s32)(*(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 8))) != 0)) {
                func_001ba028(*(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 8)));
                ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 8))) + 0x28))))(*(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 8)));
                *(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 8)) = 0;
                func_00232db0(*(u32*)(((s0 + *(u32*)(&D_0035dcfc)) + 4)));
            }
            s0 = (s0 + 0x28);
            s1 = (s1 + -1);
        } while (((s32)(s1) >= 0));
    }
    return;
}

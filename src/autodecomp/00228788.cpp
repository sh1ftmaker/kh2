// coverage: addr=0x00228788 symbol=func_00228788 size=396 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:92.35;m2c:near:80.35
#include "common/types.h"

extern "C" u32 func_0022b720() asm("func_0022b720");
extern "C" u32 func_0022b9e0() asm("func_0022b9e0");
extern "C" u32 func_0031a260(u32, u32) asm("func_0031a260");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00229430(u32, u32) asm("func_00229430");

// 0x00228788 func_00228788
void func_00228788(u32 a0) asm("func_00228788");
void func_00228788(u32 a0) {
    u32 s4;
    u32 v0;
    u32 s1;
    u32 s0;
    u32 s2;
    func_00229430(a0, 0xaf0);
    s4 = func_0022b9e0();
    v0 = func_0022b720();
    s1 = (a0 + 0x18);
    func_001386e0(s1, 0xaf0, s4, v0, 0x20, 0xb);
    *(u32*)((s1 + 0x188)) = 0x21;
    *(u32*)((s1 + 0x18c)) = 0;
    func_001396b0(s1);
    if (((s32)(*(u32*)((s1 + 0x18c))) != 0)) {
        *(u32*)((s1 + 0x190)) = 0;
        func_001396b0(s1);
        if (((s32)(*(u32*)((s1 + 0x190))) != 0)) {
            func_0031a260(s1, 0);
        }
    }
    s0 = (a0 + 0x1b0);
    func_001386e0(s0, 0xaf0, s4, v0, 0x1e, 0xb);
    *(u32*)((s0 + 0x18c)) = s1;
    func_001396b0(s0);
    if (((s32)(*(u32*)((s0 + 0x18c))) != 0)) {
        *(u32*)((s0 + 0x190)) = 0;
        func_001396b0(s0);
        if (((s32)(*(u32*)((s0 + 0x190))) != 0)) {
            func_0031a260(s0, 0);
        }
    }
    s2 = (a0 + 0x348);
    func_001386e0(s2, 0xaf0, s4, v0, 0x23, 0xb);
    *(u32*)((s2 + 0x188)) = 0x24;
    *(u32*)((s2 + 0x18c)) = 0;
    func_001396b0(s2);
    if (((s32)(*(u32*)((s2 + 0x18c))) != 0)) {
        *(u32*)((s2 + 0x190)) = 0;
        func_001396b0(s2);
        if (((s32)(*(u32*)((s2 + 0x190))) != 0)) {
            func_0031a260(s2, 0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

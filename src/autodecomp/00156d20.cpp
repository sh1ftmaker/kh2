// coverage: addr=0x00156d20 symbol=func_00156d20 size=296 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:90.63;m2c:near:76.19
#include "common/types.h"

extern "C" u32 func_00139c18(u32) asm("func_00139c18");
extern "C" u32 func_0013a7e8(u32) asm("func_0013a7e8");
extern "C" u32 func_0013d7e0() asm("func_0013d7e0");
extern "C" u32 func_00155f40(u32) asm("func_00155f40");
extern "C" u32 func_00155fc0(u32) asm("func_00155fc0");
extern "C" u32 func_00158290(u32) asm("func_00158290");
extern "C" u32 func_0031a260(u32, u32) asm("func_0031a260");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_001396b0(u32) asm("func_001396b0");

// 0x00156d20 func_00156d20
void func_00156d20(u32 a0) asm("func_00156d20");
void func_00156d20(u32 a0) {
    u32 s4;
    u32 s3;
    u32 s2;
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 s0;
    s4 = func_00158290(a0);
    s3 = func_0013a7e8(1);
    s2 = func_0013d7e0();
    s1 = (a0 + 0x2d80);
    func_00138c10(s1, func_00155f40(a0));
    func_00138c10(a0 + 0x2f1c, func_00155fc0(a0));
    *(u8*)((a0 + 0x3cf6)) = 1;
    if ((*(u8*)((a0 + 0x3cfb)) == 1)) {
        v0 = func_00139c18(a0 + 0x1054);
        v0_0 = (v0 * 0x198);
        s0 = ((a0 + v0_0) + 0x1054);
        func_001386e0(s0, 0x1b58, s3, s2, 0x35, s4);
        *(u32*)((s0 + 0x18c)) = s1;
        func_001396b0(s0);
        if (((s32)(*(u32*)((s0 + 0x18c))) != 0)) {
            *(u32*)((s0 + 0x190)) = 0;
            func_001396b0(s0);
            if (((s32)(*(u32*)((s0 + 0x190))) != 0)) {
                func_0031a260(s0, 0);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}

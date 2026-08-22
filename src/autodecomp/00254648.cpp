// coverage: addr=0x00254648 symbol=func_00254648 size=292 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:92.76;m2c:near:86.74
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f05c asm("D_0035f05c");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_00255588() asm("func_00255588");
extern "C" u32 func_002938e0() asm("func_002938e0");
extern "C" u32 func_002938f0() asm("func_002938f0");
extern "C" u32 func_00293ba0() asm("func_00293ba0");
extern "C" u32 func_00293bc0() asm("func_00293bc0");
extern "C" u32 func_002acc98() asm("func_002acc98");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_00170888(u32) asm("func_00170888");
extern "C" void func_00236d60() asm("func_00236d60");
extern "C" void func_00242618(u32, u32) asm("func_00242618");
extern "C" void func_00254770() asm("func_00254770");
extern "C" void func_00255df0() asm("func_00255df0");
extern "C" void func_00256b40() asm("func_00256b40");
extern "C" void func_002593b8(u32, u32) asm("func_002593b8");
extern "C" void func_00274ea0() asm("func_00274ea0");
extern "C" void func_00274ee8(u32) asm("func_00274ee8");
extern "C" void func_00274f50() asm("func_00274f50");
extern "C" void func_002810c8(u32, u32) asm("func_002810c8");
extern "C" void func_00293520() asm("func_00293520");
extern "C" void func_00293bb0() asm("func_00293bb0");
extern "C" void func_002a9ce8() asm("func_002a9ce8");
extern "C" void func_002a9d30() asm("func_002a9d30");

// 0x00254648 func_00254648
u32 func_00254648(u32 a0) asm("func_00254648");
u32 func_00254648(u32 a0) {
    u32 v0;
    func_002593b8(2, a0);
    func_00256b40();
    func_00274ea0();
    func_00170888(a0);
    func_00274ee8(func_00103570());
    func_002a9ce8();
    *(u8*)(&D_0035f05c) = func_002acc98();
    func_002a9d30();
    func_00274f50();
    func_00102448(a0, 1);
    func_00254770();
    func_00242618(0xb, 1);
    for (;;) {
        if (((s32)(func_00293ba0()) == 0)) {
            if (((s32)(func_002938e0()) != 0)) {
                if (((s32)(func_002938f0()) != 0)) {
                    func_002810c8(*(u32*)(&D_0035f010), func_00293bc0());
                    func_00293bb0();
                }
            }
        }
        func_00236d60();
        func_00293520();
        v0 = func_00255588();
        if ((v0 != 0)) {
            return v0;
        }
        func_00255df0();
        func_00102448(a0, 0);
    }
}

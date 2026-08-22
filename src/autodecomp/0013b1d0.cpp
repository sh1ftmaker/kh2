// coverage: addr=0x0013b1d0 symbol=func_0013b1d0 size=132 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:87.76;ghidra:near:84.12
#include "common/types.h"

extern "C" u32 D_00348050 asm("D_00348050");
extern "C" u32 func_0013a800() asm("func_0013a800");
extern "C" u32 func_0013a9d0() asm("func_0013a9d0");
extern "C" u32 func_002367c8(u32) asm("func_002367c8");
extern "C" u32 func_00242c70() asm("func_00242c70");
extern "C" void func_00138650(u32, u32, u32, u32) asm("func_00138650");
extern "C" void func_002368e8(u32, f32) asm("func_002368e8");

// 0x0013b1d0 func_0013b1d0
// minilink-rodata 0x0036ad10   (float literals live here in the original)
void func_0013b1d0() asm("func_0013b1d0");
void func_0013b1d0() {
    u32 s0;
    func_00138650(*(u32*)(&D_00348050), 0x1450, func_0013a800(), 1);
    if ((func_00242c70() == 0)) {
        if ((func_0013a9d0() != 0)) {
            s0 = (*(u32*)(&D_00348050) + 0x20);
            func_002368e8(*(u32*)(&D_00348050) + 0x20, 0.800000011920929f);
            func_002367c8(s0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

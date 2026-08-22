// coverage: addr=0x001e15a8 symbol=func_001e15a8 size=144 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:81.88;ghidra:near:45.25
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 func_0017df58(u32) asm("func_0017df58");
extern "C" u32 func_001e1350(u32, u32) asm("func_001e1350");
extern "C" void func_001e1500(u32) asm("func_001e1500");

// 0x001e15a8 func_001e15a8
// minilink-rodata 0x0036e8dc   (float literals live here in the original)
void func_001e15a8(u32 a0) asm("func_001e15a8");
void func_001e15a8(u32 a0) {
    func_001e1500(a0);
    if (((s32)(func_001e1350(a0, *(u32*)(&D_0034e948))) == 0)) {
        if ((func_001e1350(a0, func_0017df58(0)) == 0)) {
            if ((60.0f <= *(f32*)((a0 + 0x28)))) {
                *(u32*)((a0 + 0x24)) = 6;
                *(u32*)((a0 + 0x28)) = 0;
            } else {
                *(f32*)((a0 + 0x28)) = (*(f32*)((a0 + 0x28)) + *(f32*)(&D_00349e10));
            }
        }
    }
    return;
}

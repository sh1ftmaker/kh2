// coverage: addr=0x0018b110 symbol=func_0018b110 size=136 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:71.08;ghidra:near:64.95
#include "common/types.h"

extern "C" u32 func_0018b198(u32) asm("func_0018b198");
extern "C" void func_0016aeb8(u32, f32) asm("func_0016aeb8");
extern "C" void func_001ad9c8(u32) asm("func_001ad9c8");
extern "C" void func_001b0728(u32, u32, u32, f32) asm("func_001b0728");

// 0x0018b110 func_0018b110
// minilink-rodata 0x0036cba8   (float literals live here in the original)
void func_0018b110(u32 a0) asm("func_0018b110");
void func_0018b110(u32 a0) {
    if (((s32)(func_0018b198(a0)) != 0)) {
        func_001ad9c8(a0 + 0xa20);
        func_0016aeb8(a0, *(f32*)((a0 + 0xa04)) + (*(f32*)((a0 + 0xa08)) * *(f32*)((a0 + 0xa20))));
        if ((func_0018b198(a0) == 0)) {
            if (((s32)(*(u8*)((a0 + 0xa00))) != 0)) {
                func_001b0728(a0 + 0x4a0, a0 + 0xa10, 0, 20.0f);
                *(u8*)((a0 + 0xa00)) = 0;
            }
        }
    }
    return;
}

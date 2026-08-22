// coverage: addr=0x00159fd0 symbol=func_00159fd0 size=200 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:61.64;ghidra:near:13.0
#include "common/types.h"

extern "C" u32 D_0034aa40 asm("D_0034aa40");
extern "C" u32 D_0034aa84 asm("D_0034aa84");
extern "C" u32 func_00158450(u32, u32, f32) asm("func_00158450");
extern "C" u32 func_001584a0(u32) asm("func_001584a0");
extern "C" void func_0013fda0(u32) asm("func_0013fda0");
extern "C" void func_0013fdc8(u32) asm("func_0013fdc8");

// 0x00159fd0 func_00159fd0
// minilink-rodata 0x0036b388   (float literals live here in the original)
void func_00159fd0(u32 a0, u32 a1, f32 fa0) asm("func_00159fd0");
void func_00159fd0(u32 a0, u32 a1, f32 fa0) {
    f32 f1;
    f32 f2;
    f32 f1_0;
    f32 f2_1;
    if (((s32)(func_00158450(a1, a1, fa0)) != 0)) {
        f1 = *(f32*)((a1 + 0x2c));
        f2 = *(f32*)((a0 + 0x48));
        *(f32*)((a0 + 0x48)) = (f2 - ((f1 * 8.0f) * fa0));
        *(f32*)(&D_0034aa84) = (f2 - ((f1 * 8.0f) * fa0));
        func_0013fda0(a0);
        *(u8*)(&D_0034aa40) = 0;
    } else {
        if (((s32)(func_001584a0(a1)) != 0)) {
            f1_0 = *(f32*)((a1 + 0x2c));
            f2_1 = *(f32*)((a0 + 0x48));
            *(f32*)((a0 + 0x48)) = (f2_1 + ((f1_0 * 8.0f) * fa0));
            *(f32*)(&D_0034aa84) = (f2_1 + ((f1_0 * 8.0f) * fa0));
            func_0013fdc8(a0);
            *(u8*)(&D_0034aa40) = 0;
        }
    }
    return;
}

// coverage: addr=0x00185b00 symbol=_Z16ctarget_00185b00jjjj size=112 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:70.7;m2c:near:39.24
#include "common/types.h"

extern "C" u32 D_0034ed78 asm("D_0034ed78");
extern "C" u32 func_0016a090(u32) asm("func_0016a090");
extern "C" void func_001d7cd0(u32) asm("func_001d7cd0");

// 0x00185b00 ctarget_00185b00(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036c900   (float literals live here in the original)
void lift_00185b00(u32 a0) asm("_Z16ctarget_00185b00jjjj");
void lift_00185b00(u32 a0) {
    func_001d7cd0(a0);
    *(u32*)(a0) = (u32)&D_0034ed78;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x10);
    *(u32*)((a0 + 0xaf0)) = 0;
    *(f32*)((a0 + 0xaf4)) = 100.0f;
    if ((func_0016a090(a0) == 2)) {
        *(u32*)((a0 + 0xabc)) = (*(u32*)((a0 + 0xabc)) | 0x8000);
    }
    return;
}

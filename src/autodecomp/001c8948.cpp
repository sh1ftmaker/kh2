// coverage: addr=0x001c8948 symbol=_Z16ctarget_001c8948jjjj size=96 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:80.68;m2c:near:59.58
#include "common/types.h"

extern "C" u32 D_001c89a8 asm("D_001c89a8");
extern "C" u32 D_001c8a70 asm("D_001c8a70");
extern "C" u32 D_0032f055 asm("D_0032f055");
extern "C" u32 D_00351214 asm("D_00351214");
extern "C" u32 D_01d49968 asm("D_01d49968");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_001c8ab0() asm("func_001c8ab0");

// 0x001c8948 ctarget_001c8948(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001c8948() asm("_Z16ctarget_001c8948jjjj");
void lift_001c8948() {
    if (((s32)(func_001c8ab0()) != 0)) {
        *(u32*)(&D_01d49968) = 3;
        *(u8*)(&D_0032f055) = 0;
        *(u32*)((func_00102818(*(u32*)(&D_00351214), 0, 3, (u32)&D_001c89a8, 0x2000) + 0x30)) = (u32)&D_001c8a70;
    }
    return;
}

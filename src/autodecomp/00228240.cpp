// coverage: addr=0x00228240 symbol=func_00228240 size=152 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.16;m2c:near:79.8
#include "common/types.h"

extern "C" u32 D_0035de27 asm("D_0035de27");
extern "C" u32 D_0035de30 asm("D_0035de30");
extern "C" u32 D_0035de34 asm("D_0035de34");
extern "C" u32 D_0035de38 asm("D_0035de38");
extern "C" u32 D_0035de3c asm("D_0035de3c");
extern "C" void func_00102670(u32, u32) asm("func_00102670");

// 0x00228240 func_00228240
void func_00228240() asm("func_00228240");
void func_00228240() {
    if (((s32)(*(u32*)(&D_0035de3c)) != 0)) {
        if (((s32)(*(u32*)(&D_0035de30)) != 0)) {
            func_00102670(*(u32*)(&D_0035de3c), *(u32*)(&D_0035de30));
            *(u32*)(&D_0035de30) = 0;
        }
        if (((s32)(*(u32*)(&D_0035de34)) != 0)) {
            func_00102670(*(u32*)(&D_0035de3c), *(u32*)(&D_0035de34));
            *(u32*)(&D_0035de34) = 0;
        }
        if (((s32)(*(u32*)(&D_0035de38)) != 0)) {
            if (((s32)(*(u8*)(&D_0035de27)) == 0)) {
                func_00102670(*(u32*)(&D_0035de3c), *(u32*)(&D_0035de38));
                *(u32*)(&D_0035de38) = 0;
            }
        }
        *(u32*)(&D_0035de3c) = 0;
    }
    return;
}

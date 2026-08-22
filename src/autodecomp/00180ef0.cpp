// coverage: addr=0x00180ef0 symbol=func_00180ef0 size=56 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.86;ghidra:near:51.07;m2c:near:0.0
#include "common/types.h"


// 0x00180ef0 func_00180ef0
void func_00180ef0(u32 a0) asm("func_00180ef0");
void func_00180ef0(u32 a0) {
    u32 t5;
    u32 t6;
    t5 = 0;
    while ((t6 = (t5 == 0) ? *(u32*)((a0 + 0x18c)) : *(u32*)((t5 + 0x2c))), (t5 = t6), ((s32)(t6) != 0)) {
        *(u32*)((t6 + 8)) = (*(u32*)((t6 + 8)) | 0x2000000);
    }
    *(u32*)((a0 + 0x190)) = 0;
    *(u32*)((a0 + 0x18c)) = 0;
    return;
}

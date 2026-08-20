#include "../common/types.h"

extern "C" u32 WINDOW_BASE_1ac970(void* self, u32 type, int, int, int, int, int, int) asm("func_001ac970");
extern "C" u32 D_00350af0 asm("D_00350af0");

void func_001ad228_impl(void* self, int arg) asm("func_001ad228");
void func_001ad228_impl(void* self, int arg) {
    WINDOW_BASE_1ac970(self, 3, 4, arg, 0, 256, 32, 3);
    *(u32*)((u8*)self + 104) = 0;
    *(u32*)((u8*)self + 100) = 2;
    *(u32*)self = (u32)&D_00350af0;
}

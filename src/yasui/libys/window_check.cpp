#include "../../common/types.h"
#include "../../libyw/window.hpp"

// ---- callees, declared by the rig: copy these lines verbatim, never retype a symbol ----
extern "C" u32 WINDOW_BASE_1ac970(void* self, int a, int b, int c, int d, int e, int f, int g) asm("func_001ac970");  // YS::WINDOW_BASE::WINDOW_BASE(YS::FONT::TYPE, int, int, int, int, int, int) -- arity UNKNOWN

extern "C" u32 D_00350af0 asm("D_00350af0");

// layout row 0x001ad1d0, 88 bytes
void func_001ad1d0_impl(void* self, int arg) asm("func_001ad1d0");  // declaration
void func_001ad1d0_impl(void* self, int arg) {  // definition: no asm() here
    WINDOW_BASE_1ac970(self, 3, 4, arg, 0, 256, 32, 3);
    *(u32*)((u8*)self + 104) = 0;
    *(u32*)((u8*)self + 100) = 2;
    *(u32*)self = (u32)&D_00350af0;
}

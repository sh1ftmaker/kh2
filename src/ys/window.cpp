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

// ---- 0x001ad520 func_001ad520 ----

extern "C" u32 Alloc_1050d8(unsigned int) asm("_ZN4AREA5AllocEj");
extern "C" u32 WINDOW_BALLOON_1ad0f8(u32 self, int, int) asm("func_001ad0f8");
extern "C" u32 WINDOW_OBJ2D_1ac7c8(u32 self, u32 parent) asm("_ZN2YS12WINDOW_OBJ2DC1EPNS_6WINDOWE");

void func_001ad520_impl(void* self, int a1, int a2, int a3) asm("func_001ad520");
void func_001ad520_impl(void* self, int a1, int a2, int a3) {
    u32 p1 = Alloc_1050d8(2924);
    WINDOW_BALLOON_1ad0f8(p1, a3, 0);
    WINDOW_OBJ2D_1ac7c8(Alloc_1050d8(28), p1);
    *(u32*)((u8*)self + 1192) = p1;
    *(u32*)(p1 + 4) = (u32)a1;
    *(u32*)(p1 + 8) = (u32)a2;
}

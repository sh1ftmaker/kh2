#include "message.hpp"

// ---- 0x0015aa98 func_0015aa98 ----
#include "../../common/types.h"

extern "C" u32 create_1391c8(void* self, int, int) asm("_ZN2dk5Obj2D6createEii");

void func_0015aa98_impl(void* self, int a1, int a2, float f) asm("func_0015aa98");

void func_0015aa98_impl(void* self, int a1, int a2, float f) {
    create_1391c8(self, 11000, 0);
    *(int*)(self + 0x18) = a1;
    *(float*)(self + 0x1c) = f;
    *(int*)(self + 0x20) = a2;
}

// coverage: addr=0x0011f3b8 symbol=_ZN2kn12modelDestroyEPv size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.78;e3:near:88.0;m2c:compile:0.0
#include "common/types.h"


// 0x0011f3b8 kn::modelDestroy(void*)
void lift_0011f3b8(u32 a0) asm("_ZN2kn12modelDestroyEPv");
void lift_0011f3b8(u32 a0) {
    ((void(*)(u32))(*(u32*)(*(u32*)(a0))))(a0);
}

// coverage: addr=0x00322968 symbol=_ZN2sa14MUSICAL_TARGET5closeEv size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.78;m2c:near:97.78;e3:near:88.0
#include "common/types.h"


// 0x00322968 sa::MUSICAL_TARGET::close()
void lift_00322968(u32 a0) asm("_ZN2sa14MUSICAL_TARGET5closeEv");
void lift_00322968(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
}

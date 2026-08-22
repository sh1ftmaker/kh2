// coverage: addr=0x001721d8 symbol=_ZN2YS20trap_obj_jump_directEP8BD_VALUE size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.46;m2c:near:98.46;e3:near:40.24
#include "common/types.h"


// 0x001721d8 YS::trap_obj_jump_direct(BD_VALUE*)
void lift_001721d8(u32 a0) asm("_ZN2YS20trap_obj_jump_directEP8BD_VALUE");
void lift_001721d8(u32 a0) {
    ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0xc))) + 8))))(*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0xc)), *(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)));
}

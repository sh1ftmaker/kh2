// coverage: addr=0x00171810 symbol=_ZN2YS14trap_obj_voiceEP8BD_VALUE size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.46;m2c:near:98.46;e3:near:30.03
#include "common/types.h"


// 0x00171810 YS::trap_obj_voice(BD_VALUE*)
void lift_00171810(u32 a0) asm("_ZN2YS14trap_obj_voiceEP8BD_VALUE");
void lift_00171810(u32 a0) {
    ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(a0) + 4))) + 0x54))))(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)), *(u32*)((a0 + 8)));
}

// coverage: addr=0x00173270 symbol=_ZN2YS21method_message_is_endEP8BD_VALUE size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:98.0;corpus:near:82.83;ghidra:near:77.4
#include "common/types.h"


// 0x00173270 YS::method_message_is_end(BD_VALUE*)
void lift_00173270(u32 a0) asm("_ZN2YS21method_message_is_endEP8BD_VALUE");
void lift_00173270(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(a0)) + 0x20))))(*(u32*)(a0));
}

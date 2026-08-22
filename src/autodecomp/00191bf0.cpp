// coverage: addr=0x00191bf0 symbol=func_00191bf0 size=48 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:52.79;ghidra:near:30.12
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 D_01c61968 asm("D_01c61968");
extern "C" f32 func_00191c30(f32) asm("func_00191c30");

// 0x00191bf0 func_00191bf0
f32 func_00191bf0(f32 fa0) asm("func_00191bf0");
f32 func_00191bf0(f32 fa0) {
    *(f32*)(&D_01c61968) = fa0;
    return func_00191c30(*(f32*)((*(u32*)(&D_00352130) + 0x50)) * fa0);
}

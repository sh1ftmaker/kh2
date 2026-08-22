// coverage: addr=0x001039f8 symbol=func_001039f8 size=68 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:79.84;ghidra:near:25.0;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0032ba04 asm("D_0032ba04");
extern "C" u32 D_0032ba34 asm("D_0032ba34");
extern "C" u32 func_00103ea0(u32) asm("func_00103ea0");

// 0x001039f8 func_001039f8
void func_001039f8() asm("func_001039f8");
void func_001039f8() {
    if (((s32)(*(u32*)(&D_0032ba34)) != 0)) {
        ((void(*)())(*(u32*)(&D_0032ba34)))();
        func_00103ea0(0);
        return;
    } else {
        *(u32*)(&D_0032ba04) = 3;
        return;
    }
}

// coverage: addr=0x002fdf30 symbol=func_002fdf30 size=84 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:88.52
#include "common/types.h"

extern "C" u32 D_003660a8 asm("D_003660a8");
extern "C" u32 D_003660ac asm("D_003660ac");
extern "C" u32 func_003060f0() asm("func_003060f0");
extern "C" u32 func_0030ee00() asm("func_0030ee00");

// 0x002fdf30 func_002fdf30
void func_002fdf30() asm("func_002fdf30");
void func_002fdf30() {
    u32 t7;
    u32 t7_0;
    if ((func_003060f0() != 1)) {
        t7 = *(u32*)(&D_003660a8);
        *(u32*)(&D_003660a8) = (t7 + -1);
        if (((s32)((t7 + -1)) == 0)) {
            t7_0 = *(u32*)(&D_003660ac);
            if (((s32)(t7_0) != 0)) {
                *(u32*)(&D_003660ac) = 0;
                func_0030ee00();
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}

// coverage: addr=0x001b1e80 symbol=func_001b1e80 size=100 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:98.48;ghidra:near:91.56;m2c:near:74.37
#include "common/types.h"

extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 D_00350f1c asm("D_00350f1c");
extern "C" u32 D_01d48c44 asm("D_01d48c44");
extern "C" u32 _ZN2YS7ITEMPIC15ReadImageThreadEP4TASK asm("_ZN2YS7ITEMPIC15ReadImageThreadEP4TASK");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");

// 0x001b1e80 func_001b1e80
void func_001b1e80(u32 a0) asm("func_001b1e80");
void func_001b1e80(u32 a0) {
    u32 v0;
    if ((a0 != 0xffffffff)) {
        if ((a0 != *(u32*)(&D_00350f1c))) {
            v0 = func_00102818(*(u32*)(&D_0032b91c), 0, 0x55730, (u32)&_ZN2YS7ITEMPIC15ReadImageThreadEP4TASK, 0x1000);
            *(u32*)(&D_01d48c44) = v0;
            *(u32*)((v0 + 4)) = a0;
        }
    }
    return;
}

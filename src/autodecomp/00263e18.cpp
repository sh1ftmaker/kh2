// coverage: addr=0x00263e18 symbol=func_00263e18 size=128 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:94.7;e3:near:60.11;ghidra:near:50.41
#include "common/types.h"

extern "C" u32 func_00138440() asm("func_00138440");
extern "C" u32 func_00138470() asm("func_00138470");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_001382e0() asm("func_001382e0");
extern "C" void func_0017a798() asm("func_0017a798");
extern "C" void func_00287da0() asm("func_00287da0");

// 0x00263e18 func_00263e18
u32 func_00263e18() asm("func_00263e18");
u32 func_00263e18() {
    u32 v0;
    u32 v0_0;
    if (((s32)(func_00138470()) == 0)) {
        if (((s32)(func_00138440()) == 0)) {
            func_001382e0();
        }
    }
    if (((s32)(func_00287db0()) != 0)) {
        func_001039f8();
        v0_0 = 1;
    } else {
        v0 = func_00138470();
        if ((v0 != 0)) {
            func_0017a798();
            func_00287da0();
        }
        v0_0 = 0;
    }
    return v0_0;
}

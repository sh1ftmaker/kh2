// coverage: addr=0x001d5960 symbol=func_001d5960 size=76 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:90.48;corpus:near:78.95
#include "common/types.h"

extern "C" u32 func_001d5800(u32) asm("func_001d5800");
extern "C" u32 func_001d5868(u32) asm("func_001d5868");
extern "C" u32 func_001d58f0(u32) asm("func_001d58f0");

// 0x001d5960 func_001d5960
void func_001d5960(u32 a0) asm("func_001d5960");
void func_001d5960(u32 a0) {
    if (((s32)(func_001d5868(a0)) == 0)) {
        if (((s32)(func_001d58f0(a0)) != 0)) {
            func_001d5800(a0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

// coverage: addr=0x0026eae8 symbol=func_0026eae8 size=212 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:84.74;ghidra:near:82.25
#include "common/types.h"

extern "C" u32 D_0035f110 asm("D_0035f110");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_0028d008(u32) asm("_ZN2Tz10MenuCursor7isExistEi");
extern "C" u32 func_0028d660(u32, u32) asm("func_0028d660");
extern "C" u32 func_0028d6e8(u32) asm("func_0028d6e8");
extern "C" void func_00289038(u32, u32, u32, u32, u32, u32, u32) asm("func_00289038");
extern "C" void func_002890e0(u32, u32, u32, u32, u32) asm("func_002890e0");
extern "C" void func_0028cf28(u32, u32) asm("func_0028cf28");

// 0x0026eae8 func_0026eae8
void func_0026eae8(u32 a0) asm("func_0026eae8");
void func_0026eae8(u32 a0) {
    u32 s0;
    if (((s32)(func_00289310(a0)) != 0)) {
        s0 = func_002891e8(a0);
        func_002890e0(a0, 1, 2, 0, 0xffffffff);
        func_00289038(a0, s0, 1, 1, 2, 0, 0xffffffff);
        if (((s32)(func_0028d008(0)) != 0)) {
            func_0028cf28(0, func_002891d0(a0));
        }
        if (((s32)(func_0028d6e8(*(u32*)(&D_0035f110))) != 0)) {
            func_0028d660(*(u32*)(&D_0035f110), func_002891d0(a0));
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

// coverage: addr=0x0016f7d0 symbol=_ZN2YS8OBJENTRY18GetCacheBuffStatusEjPKS0_ size=252 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:97.48;ghidra:near:85.25
#include "common/types.h"

extern "C" u32 func_0016e920(u32, u32) asm("func_0016e920");
extern "C" u32 func_0016f460(u32) asm("func_0016f460");
extern "C" u32 func_0016f470(u32, u32) asm("func_0016f470");
extern "C" u32 func_0016f4b8(u32, u32) asm("func_0016f4b8");
extern "C" u32 func_0016f520(u32, u32, u32) asm("func_0016f520");
extern "C" u32 func_0016f6f8(u32) asm("_ZN2YS8OBJENTRY7IsActorEj");
extern "C" u32 func_0016f770(u32) asm("func_0016f770");
extern "C" u32 func_00170978(u32) asm("func_00170978");

// 0x0016f7d0 YS::OBJENTRY::GetCacheBuffStatus(unsigned int, YS::OBJENTRY const*)
u32 lift_0016f7d0(u32 a0, u32 a1) asm("_ZN2YS8OBJENTRY18GetCacheBuffStatusEjPKS0_");
u32 lift_0016f7d0(u32 a0, u32 a1) {
    u32 s2;
    u32 t7;
    if (((s32)(a1) == 0)) {
        a1 = func_0016e920(a0, a1);
    }
    s2 = (1 << func_00170978(func_0016f470(a1, 0)));
    if (((s32)(func_0016f6f8(a0)) == 0)) {
        if (((s32)(func_0016f770(a0)) == 0)) {
            t7 = *(u8*)((a1 + 0x48));
            if (((s32)(((t7 ^ 1) & 1)) != 0)) {
                s2 = (s2 | (1 << func_00170978(func_0016f4b8(a1, 0))));
            }
        }
    }
    if (((s32)(func_0016f6f8(a0)) == 0)) {
        if (((s32)(func_0016f460(a1)) != 0)) {
            s2 = (s2 | (1 << func_00170978(func_0016f520(a1, a0, 0))));
        }
    }
    return s2;
}

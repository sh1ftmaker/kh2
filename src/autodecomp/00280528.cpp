// coverage: addr=0x00280528 symbol=_ZN2Tz9GumiPause15UpdateAdviceGraEv size=164 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.16;ghidra:near:88.59;e3:near:55.43
#include "common/types.h"

extern "C" u32 D_0035f260 asm("D_0035f260");
extern "C" u32 D_0035f264 asm("D_0035f264");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_002537c8(u32) asm("func_002537c8");
extern "C" u32 func_00253918() asm("func_00253918");
extern "C" u32 func_002805d0() asm("func_002805d0");
extern "C" void func_00236a58(u32, u32, u32) asm("func_00236a58");
extern "C" void func_00236c38(u32) asm("func_00236c38");

// 0x00280528 Tz::GumiPause::UpdateAdviceGra()
void lift_00280528() asm("_ZN2Tz9GumiPause15UpdateAdviceGraEv");
void lift_00280528() {
    u32 s0;
    if (((s32)(func_00253918()) == 0)) {
        if (((s32)(*(s8*)((*(u32*)(&D_0035f260) + 7))) >= 0)) {
            *(u8*)((*(u32*)(&D_0035f260) + 7)) = 0xffffffff;
            s0 = *(u32*)(&D_0035f260);
            *(u32*)(s0) = func_002537c8(6);
            if (((s32)(*(s8*)((*(u32*)(&D_0035f260) + 6))) < 0)) {
                func_00236c38(*(u32*)(&D_0035f264));
                func_00236a58(*(u32*)(&D_0035f264), *(u32*)(*(u32*)(&D_0035f260)), func_00103570());
                func_002805d0();
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

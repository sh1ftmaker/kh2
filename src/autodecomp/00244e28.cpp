// coverage: addr=0x00244e28 symbol=_ZN2Tz4HEFT13UpdateNewMarkEv size=192 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:81.22;ghidra:near:80.0;e3:near:76.85
#include "common/types.h"

extern "C" u32 D_0035ece8 asm("D_0035ece8");
extern "C" u32 D_0035ed04 asm("D_0035ed04");
extern "C" u32 D_0035ed14 asm("D_0035ed14");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00243230(u32, u32) asm("func_00243230");
extern "C" u32 func_00244ee8(u32) asm("func_00244ee8");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x00244e28 Tz::HEFT::UpdateNewMark()
u32 lift_00244e28() asm("_ZN2Tz4HEFT13UpdateNewMarkEv");
u32 lift_00244e28() {
    u32 v0;
    u32 v0_0;
    u8 t7;
    u32 s0;
    v0 = func_002891e8(*(u32*)(&D_0035ece8));
    v0_0 = func_00244ee8(v0);
    t7 = ((((s32)(*(s8*)(&D_0035ed14)) >> v0_0) ^ 1) & 1);
    if (((s32)(t7) == 0)) {
        s0 = (v0 * 0x198);
        if (((s32)(func_00139d78(*(u32*)(&D_0035ed04) + s0)) != 0)) {
            if ((*(u32*)(((*(u32*)(&D_0035ed04) + s0) + 0x184)) != 0x25)) {
                func_00138c10(*(u32*)(&D_0035ed04) + s0, 0x25);
            }
        }
        return func_00243230(3, v0_0);
    } else {
        return v0_0;
    }
}

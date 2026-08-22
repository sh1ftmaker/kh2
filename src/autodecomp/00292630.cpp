// coverage: addr=0x00292630 symbol=_ZN2Tz18LoadDataIsFlushingEv size=92 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:85.87;m2c:near:74.12
#include "common/types.h"

extern "C" u32 D_0035f4b8 asm("D_0035f4b8");
extern "C" u32 _ZN2Tz8LoadData9FlushTaskEP4TASK asm("_ZN2Tz8LoadData9FlushTaskEP4TASK");
extern "C" u32 func_00102a38(u32, u32) asm("func_00102a38");
extern "C" u32 func_00103eb0() asm("func_00103eb0");
extern "C" u32 func_00170cd0() asm("func_00170cd0");

// 0x00292630 Tz::LoadDataIsFlushing()
u32 lift_00292630() asm("_ZN2Tz18LoadDataIsFlushingEv");
u32 lift_00292630() {
    u32 s0;
    u32 t7;
    s0 = *(u8*)(&D_0035f4b8);
    if (((s32)(func_00102a38(*(u32*)((func_00103eb0() + 4)), (u32)&_ZN2Tz8LoadData9FlushTaskEP4TASK)) == 0)) {
        if (((s32)(s0) == 0)) {
            s0 = func_00170cd0();
        }
        t7 = s0;
    } else {
        t7 = 1;
    }
    return t7;
}

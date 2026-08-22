// coverage: addr=0x002925c0 symbol=_ZN2Tz13LoadDataFlushEv size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:99.94;m2c:near:77.78;ghidra:compile:0.0
#include "common/types.h"

extern "C" u32 D_00292620 asm("D_00292620");
extern "C" u32 _ZN2Tz8LoadData9FlushTaskEP4TASK asm("_ZN2Tz8LoadData9FlushTaskEP4TASK");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_00103eb0() asm("func_00103eb0");

// 0x002925c0 Tz::LoadDataFlush()
u32 lift_002925c0() asm("_ZN2Tz13LoadDataFlushEv");
u32 lift_002925c0() {
    u32 v0;
    v0 = func_00102818(*(u32*)((func_00103eb0() + 4)), 0, 0x222e0, (u32)&_ZN2Tz8LoadData9FlushTaskEP4TASK, 0x1000);
    *(u32*)((v0 + 0x30)) = (u32)&D_00292620;
    return v0;
}

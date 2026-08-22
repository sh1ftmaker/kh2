// coverage: addr=0x00172ba8 symbol=_ZN2gm24trap_obj_search_by_entryEP8BD_VALUE size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:49.42
#include "common/types.h"

extern "C" u32 func_0016b740(u32) asm("func_0016b740");

// 0x00172ba8 gm::trap_obj_search_by_entry(BD_VALUE*)
u32 lift_00172ba8(u32 a0) asm("_ZN2gm24trap_obj_search_by_entryEP8BD_VALUE");
u32 lift_00172ba8(u32 a0) {
    u32 s0;
    u32 v0;
    s0 = *(u32*)(a0);
    v0 = func_0016b740(*(u32*)((a0 + 4)));
    *(u32*)((s0 + 4)) = v0;
    return v0;
}

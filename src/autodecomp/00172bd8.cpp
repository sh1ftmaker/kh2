// coverage: addr=0x00172bd8 symbol=_ZN2YS25trap_obj_search_by_serialEP8BD_VALUE size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0016b7a0(u32) asm("func_0016b7a0");

// 0x00172bd8 YS::trap_obj_search_by_serial(BD_VALUE*)
u32 lift_00172bd8(u32 a0) asm("_ZN2YS25trap_obj_search_by_serialEP8BD_VALUE");
u32 lift_00172bd8(u32 a0) {
    u32 s0;
    u32 v0;
    s0 = *(u32*)(a0);
    v0 = func_0016b7a0(*(u32*)((a0 + 4)));
    *(u32*)((s0 + 4)) = v0;
    return v0;
}

// coverage: addr=0x00195f88 symbol=_ZN2YS3OBJ6VTABLEINS_9SAVEPOINTEE5leaveEPS0_ size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:84.23
#include "common/types.h"

extern "C" u32 func_0016b668(u32) asm("func_0016b668");
extern "C" void func_001dc878(u32) asm("func_001dc878");

// 0x00195f88 YS::OBJ::VTABLE<YS::SAVEPOINT>::leave(YS::OBJ*)
u32 lift_00195f88(u32 a0) asm("_ZN2YS3OBJ6VTABLEINS_9SAVEPOINTEE5leaveEPS0_");
u32 lift_00195f88(u32 a0) {
    func_001dc878(*(u32*)((a0 + 0x9f4)));
    return func_0016b668(a0);
}

// coverage: addr=0x001037b8 symbol=func_001037b8 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:near:91.81;m2c:near:70.94
#include "common/types.h"

extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 D_0032ba28 asm("D_0032ba28");
extern "C" u32 _ZN4MENU13pauseExecTaskEP4TASK asm("_ZN4MENU13pauseExecTaskEP4TASK");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");

// 0x001037b8 func_001037b8
u32 func_001037b8() asm("func_001037b8");
u32 func_001037b8() {
    u32 v0;
    v0 = func_00102788(*(u32*)(&D_0032b91c), 0, 0x50910, (u32)&_ZN4MENU13pauseExecTaskEP4TASK);
    *(u8*)(&D_0032ba28) = 1;
    return v0;
}

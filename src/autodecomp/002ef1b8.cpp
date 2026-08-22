// coverage: addr=0x002ef1b8 symbol=func_002ef1b8 size=60 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;e3:near:81.18;ghidra:near:81.18;m2c:near:74.12
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_ANMATR_TRIGGER;

struct YS_ANMATR_TRIGGER {  // structure YS::ANMATR::TRIGGER size=0x4
    u16 Start;                                         // +0x0
    u8 Id;                                             // +0x2
    u8 Size;                                           // +0x3
};

extern "C" u32 func_002bc1e8(u32) asm("func_002bc1e8");

// 0x002ef1b8 func_002ef1b8
u32 func_002ef1b8(u32 a0) asm("func_002ef1b8");
u32 func_002ef1b8(u32 a0) {
    u32 v0;
    u32 v0_0;
    if ((*(u8*)&(((YS_ANMATR_TRIGGER*)a0)->Id) == 8)) {
        v0 = func_002bc1e8((*(u16*)((a0 + 4)) * 0x3e8) + *(u16*)((a0 + 6)));
        v0_0 = v0;
    }
    return v0_0;
}

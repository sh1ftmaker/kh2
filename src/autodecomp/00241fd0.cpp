// coverage: addr=0x00241fd0 symbol=func_00241fd0 size=52 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:near:84.62;ghidra:near:75.18;e3:near:35.06
#include "common/types.h"
typedef float f32; typedef double f64;
struct Tz_McSys;
struct ALLOCATOR;

struct Tz_McSys {  // class Tz::McSys size=0x8
    ALLOCATOR *m_Allocator;                            // +0x0
    s8 *m_DataBuff;                                    // +0x4
};

struct ALLOCATOR {  // class ALLOCATOR size=0x4
    void *_vptr_;                                      // +0x0
};

extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" u32 func_00242088(u32) asm("func_00242088");

// 0x00241fd0 func_00241fd0
u32 func_00241fd0(u32 a0, u32 a1) asm("func_00241fd0");
u32 func_00241fd0(u32 a0, u32 a1) {
    *(u32*)&(((Tz_McSys*)a0)->m_Allocator) = a1;
    *(u32*)&(((Tz_McSys*)a0)->m_DataBuff) = func_001063f0(0x400, a1);
    return func_00242088(a0);
}

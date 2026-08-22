// coverage: addr=0x0022dd40 symbol=func_0022dd40 size=64 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;m2c:exact:100.0;ghidra:near:86.35;e3:near:24.97
#include "common/types.h"
typedef float f32; typedef double f64;
struct sa_BIN_SEQ_LAYOUT;

struct sa_BIN_SEQ_LAYOUT {  // structure sa::BIN_SEQ_LAYOUT size=0xa
    s16 my_size;                                       // +0x0
    s16 id;                                            // +0x2
    s16 start_frame;                                   // +0x4
    u16 number;                                        // +0x6
    s8 name[2];                                        // +0x8
};

extern "C" u32 D_0022dc30 asm("D_0022dc30");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");

// 0x0022dd40 func_0022dd40
u32 func_0022dd40(u32 a0) asm("func_0022dd40");
u32 func_0022dd40(u32 a0) {
    u32 v0;
    v0 = func_002282f0(*(s16*)&(((sa_BIN_SEQ_LAYOUT*)a0)->start_frame));
    if (((s32)(v0) == 0)) {
        return func_00102c18(1, 0x17318, (u32)&D_0022dc30);
    } else {
        return v0;
    }
}

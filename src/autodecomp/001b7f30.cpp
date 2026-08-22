// coverage: addr=0x001b7f30 symbol=func_001b7f30 size=88 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:97.18;m2c:near:95.43
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_DRAWPACKET;
union YS_BUFF;

struct YS_DRAWPACKET {  // class YS::DRAWPACKET size=0x10
    void *_vptr_;                                      // +0x0
    YS_BUFF *Top;                                      // +0x4
    YS_BUFF *End;                                      // +0x8
    YS_BUFF *Pt;                                       // +0xc
};

union YS_BUFF {  // union YS::BUFF size=0x10
    u64 b64[2];
    u32 b32[4];
    s32 ivector[4];
    f32 fvector[4];
};

extern "C" u32 D_003511c3 asm("D_003511c3");
extern "C" u32 func_00170c00(u32) asm("func_00170c00");
extern "C" void func_001b7f88(u32) asm("func_001b7f88");

// 0x001b7f30 func_001b7f30
u32 func_001b7f30(u32 a0) asm("func_001b7f30");
u32 func_001b7f30(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u32*)(a0)) != 0)) {
        if ((*(u8*)(&D_003511c3) == 1)) {
            func_001b7f88(a0);
            v0 = func_00170c00(*(u32*)(a0));
            *(u32*)(a0) = 0;
            v0_0 = v0;
        } else {
            *(u32*)(a0) = 0;
        }
        v0_1 = v0_0;
    } else {
        *(u32*)(a0) = 0;
    }
    *(u32*)&(((YS_DRAWPACKET*)a0)->Top) = 0;
    *(u32*)&(((YS_DRAWPACKET*)a0)->End) = 0;
    return v0_1;
}

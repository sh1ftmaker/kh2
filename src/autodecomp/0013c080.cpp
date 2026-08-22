// coverage: addr=0x0013c080 symbol=func_0013c080 size=268 class=branchy source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:near:93.3;m2c:compile:0.0
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_BITFLAG_2_u_short;
struct YS_COMMAND_SLOT;

struct YS_BITFLAG_2_u_short {  // class YS::BITFLAG<2, u_short> size=0x2
    u8 Flag[2];   // raw: klass[1] (size mismatch)     // +0x0
};

struct YS_COMMAND_SLOT {  // class YS::COMMAND_SLOT size=0xc
    YS_BITFLAG_2_u_short Flag;                         // +0x0
    u16 Command;                                       // +0x2
    u8 Num;                                            // +0x4
    u8 Status;                                         // +0x5
    u8 Button;                                         // +0x6
    u8 _pad0[1];
    void *Target;                                      // +0x8
};

extern "C" u32 D_00348440 asm("D_00348440");
extern "C" u32 D_00348470 asm("D_00348470");
extern "C" u32 func_0013b808(u32, u32) asm("func_0013b808");

// 0x0013c080 func_0013c080
u32 func_0013c080(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_0013c080");
u32 func_0013c080(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 t6;
    u8 t6_0;
    u32 v0;
    u32 v0_1;
    t6 = *(u16*)&(((YS_COMMAND_SLOT*)a1)->Flag);
    t6_0 = (t6 & 1);
    if (((s32)(t6_0) != 0)) {
        *(u32*)(a6) = *(u32*)((((((a5 << 1) + a5) + a3) << 2) + (u32)&D_00348470));
        if ((func_0013b808(a0, a2) != (*(u16*)&(((YS_COMMAND_SLOT*)a1)->Flag) & 1))) {
            *(u32*)(a6) = *(u32*)((((((a5 << 1) + a5) + a3) << 2) + (u32)&D_00348440));
            *(u32*)(a7) = *(u32*)((((((a5 << 1) + a5) + a3) << 2) + (u32)&D_00348470));
            *(u8*)(a4) = 1;
        }
    }
    v0 = func_0013b808(a0, a2);
    if (((s32)(v0) != 0)) {
        v0_1 = func_0013b808(a0, a2);
        if ((v0_1 != (*(u16*)&(((YS_COMMAND_SLOT*)a1)->Flag) & 1))) {
            *(u8*)(a4) = 1;
        }
        v0 = v0_1;
    }
    return v0;
}

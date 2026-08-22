// coverage: addr=0x001b7768 symbol=_ZN2YS7LEVELUP4INFO11show_summonEi size=64 class=straight source=typed status=exact fuzzy=100.0
// coverage-alternatives: lift:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"
typedef float f32; typedef double f64;
struct YS_LEVELUP_INFO;

struct YS_LEVELUP_INFO {  // class YS::LEVELUP::INFO size=0x4c
    void *Message[2];                                  // +0x0
    s32 MessagePt;                                     // +0x8
    s8 MessageBuff[64];                                // +0xc
};

extern "C" u32 func_00153468(u32, u32, u32) asm("func_00153468");
extern "C" u32 func_001b77a8(u32, u32) asm("func_001b77a8");

// 0x001b7768 YS::LEVELUP::INFO::show_summon(int)
u32 lift_001b7768(u32 a0, u32 a1) asm("_ZN2YS7LEVELUP4INFO11show_summonEi");
u32 lift_001b7768(u32 a0, u32 a1) {
    return func_00153468(func_001b77a8(1, a1), *(u32*)&(((YS_LEVELUP_INFO*)a0)->Message[0]), a1);
}

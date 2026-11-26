// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_001dbd38 asm("D_001dbd38");
extern "C" u32 func_001c1748(u32, u32, u32, u32) asm("func_001c1748");

// 0x001dbc58 func_001dbc58
u32 func_001dbc58(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2YS11CROWDEFFECTC1EPNS_10MASSEFFECT7MANAGERERKN2kn7FVectorEPKNS0_5PARAME");
u32 func_001dbc58(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    v0 = func_001c1748(a0, a1, a2, (u32)&D_001dbd38);
    *(Q16*)((a0 + 0x30)) = *(Q16*)(a2);
    *(u8*)((a0 + 0x16)) = 0xffffffff;
    *(u8*)((a0 + 0x50)) = 0;
    *(u8*)((a0 + 0x51)) = 0;
    *(u32*)((a0 + 0x54)) = 0;
    *(u32*)((a0 + 0x58)) = 0;
    *(u32*)((a0 + 0x5c)) = a3;
    *(u8*)((a0 + 0x14)) = *(u8*)(a3);
    return v0;
}

// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d499b0 asm("D_01d499b0");
extern "C" u32 D_01d5a970 asm("D_01d5a970");
extern "C" u32 D_01d5a974 asm("D_01d5a974");
extern "C" u32 func_001e0868(u32) asm("func_001e0868");
extern "C" u32 func_002e77a0(u32) asm("func_002e77a0");
extern "C" void func_00188e08(u32) asm("func_00188e08");
extern "C" void func_002e7768(u32) asm("func_002e7768");
extern "C" void func_00319870(u32) asm("func_00319870");
extern "C" void func_00319bd0(u32, u32) asm("func_00319bd0");
extern "C" void func_00321068(u32) asm("func_00321068");

// 0x001cd548 wtarget_001cd548(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001cd548(u32 a0, u32 a1) asm("_Z16wtarget_001cd548jjjj");
u32 lift_001cd548(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_00319bd0((u32)&D_01d499b0 + 0xc, a1);
            func_00188e08((u32)&D_01d499b0 + 0x24f0);
            func_00319870((u32)&D_01d499b0 + 0x3fec);
            func_00321068((u32)&D_01d499b0 + 0x419c);
            func_002e7768((u32)&D_01d499b0 + 0x55a0);
            v0 = func_001e0868((u32)&D_01d499b0 + 0x100e0);
            *(u8*)(((u32)&D_01d5a970 + 2)) = a1;
            *(u16*)(((u32)&D_01d5a974 + 4)) = a1;
            *(u16*)(&D_01d5a974) = a1;
            *(u8*)(&D_01d5a970) = a1;
            *(u8*)(((u32)&D_01d5a970 + 1)) = a1;
            *(u16*)(((u32)&D_01d5a974 + 2)) = a1;
            v0_0 = v0;
        }
        v0_1 = v0_0;
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            v0_2 = func_002e77a0((u32)&D_01d499b0 + 0x55a0);
            v0_1 = v0_2;
        }
    }
    return v0_1;
}

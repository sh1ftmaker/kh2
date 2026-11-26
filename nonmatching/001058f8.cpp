// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 func_001e0868(u32) asm("func_001e0868");
extern "C" u32 func_002e77a0(u32) asm("func_002e77a0");
extern "C" void func_00188e08(u32) asm("func_00188e08");
extern "C" void func_002e7768(u32) asm("func_002e7768");
extern "C" void func_00319870(u32) asm("func_00319870");
extern "C" void func_00319930(u32) asm("func_00319930");
extern "C" void func_003199d0(u32) asm("func_003199d0");
extern "C" void func_00319a60(u32) asm("func_00319a60");
extern "C" void func_00319bd0(u32, u32) asm("func_00319bd0");
extern "C" void func_00319d20(u32) asm("func_00319d20");
extern "C" void func_00319d30(u32) asm("func_00319d30");
extern "C" void func_00319d58(u32) asm("func_00319d58");

// 0x001058f8 func_001058f8(int, int)
u32 lift_001058f8(u32 a0, u32 a1) asm("_Z13func_001058f8ii");
u32 lift_001058f8(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_00319bd0((u32)&D_0032bb30 + 0xc, a1);
            func_00188e08((u32)&D_0032bb30 + 0x24f0);
            func_00319870((u32)&D_0032bb30 + 0x3fec);
            func_00319930((u32)&D_0032bb30 + 0x41a8);
            func_00319d20((u32)&D_0032bb30 + 0x49d8);
            func_00319d30((u32)&D_0032bb30 + 0x49e0);
            func_00319d58((u32)&D_0032bb30 + 0x49f0);
            func_003199d0((u32)&D_0032bb30 + 0x49f4);
            func_00319a60((u32)&D_0032bb30 + 0x4c38);
            func_002e7768((u32)&D_0032bb30 + 0x55a0);
            v0 = func_001e0868((u32)&D_0032bb30 + 0x100e0);
            v0_0 = v0;
        }
        v0_1 = v0_0;
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            v0_2 = func_002e77a0((u32)&D_0032bb30 + 0x55a0);
            v0_1 = v0_2;
        }
    }
    return v0_1;
}

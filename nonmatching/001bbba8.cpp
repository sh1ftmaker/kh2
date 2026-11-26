// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d49324 asm("D_01d49324");
extern "C" u32 func_0019f070(u32, u32) asm("func_0019f070");
extern "C" u32 func_001d5460(u32) asm("func_001d5460");
extern "C" void func_00199098(u32, u32) asm("func_00199098");
extern "C" void func_001ada38(u32) asm("func_001ada38");
extern "C" void func_001bb468(u32) asm("func_001bb468");
extern "C" void func_001d7940() asm("func_001d7940");

// 0x001bbba8 func_001bbba8
u32 func_001bbba8(u32 a0) asm("_ZN2YS7MISSION4QuitEi");
u32 func_001bbba8(u32 a0) {
    u8 frame[48];
    u32 s0;
    u32 s0_0;
    if ((a0 != 3)) {
        if ((a0 != 4)) {
            s0 = 0xffffffff;
        } else {
            func_001ada38(9);
            s0 = 0x8d;
        }
        s0_0 = s0;
    } else {
        if (((s32)(func_001d5460(*(u32*)(&D_01d49324))) != 0)) {
            func_001d7940();
        }
        s0_0 = 0x8b;
    }
    func_001bb468(9);
    func_00199098((u32)frame, s0_0);
    return func_0019f070((u32)frame, 0x40000000);
}

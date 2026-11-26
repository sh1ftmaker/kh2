// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 D_0032f056 asm("D_0032f056");
extern "C" u32 D_0036e628 asm("D_0036e628");
extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_00189200(u32, u32) asm("func_00189200");
extern "C" u32 func_001a6c90(u32) asm("func_001a6c90");
extern "C" u32 func_001a6d08(u32) asm("func_001a6d08");

// 0x001d7880 u_tail0_001d7880()
void lift_001d7880() asm("_Z16u_tail0_001d7880v");
void lift_001d7880() {
    u32 s1;
    u32 s0;
    u32 s0_0;
    if ((func_001a6d08(0x68) == 0)) {
        s1 = 0;
        s0 = (u32)&D_0036e628;
        do {
            if (((s32)(func_00181500(*(u16*)((s0 + (s1 * 2))))) == 0)) {
                return;
            }
            s1 = (s1 + 1);
        } while (((u32)(s1) < (u32)(0xb)));
        s0_0 = 1;
        do {
            if (((s32)(((u32)(*(u8*)((func_00189200((u32)&D_0032e020, 1) + 2))) < (u32)(7))) != 0)) {
                return;
            }
            s0_0 = (s0_0 + 1);
        } while (((s32)(((s32)(s0_0) < (s32)(6))) != 0));
        if (((s32)(((u32)(*(u8*)(&D_0032f056)) < (u32)(7))) == 0)) {
            func_001a6c90(0x68);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

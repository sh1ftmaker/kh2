// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_00176b20(u32) asm("func_00176b20");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001b77e8(u32) asm("func_001b77e8");
extern "C" u32 func_001bc780(u32, u32, u32, u32) asm("func_001bc780");
extern "C" void func_001bc778(u32) asm("func_001bc778");

// 0x001bec68 func_001bec68
u32 func_001bec68(u32 a0) asm("_ZN2YS13FIELD_COMMAND4makeEv");
u32 func_001bec68(u32 a0) {
    u32 s1;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    func_001bc778(a0 + 0x1f4);
    s1 = 0;
    do {
        v0_0 = func_00176b20(s1);
        v0_1 = func_0019ba60(v0_0);
        if (((s32)(v0_1) != 0)) {
            if (((s32)((*(u32*)((v0_0 + 0x588)) & 0x400000)) == 0)) {
                if (((s32)(*(u32*)((v0_0 + 0x48c))) != 0)) {
                    *(u32*)((((*(u32*)(((a0 + 0x1f4) + 8)) << 2) + a0) + 0xa5c)) = v0_0;
                    v0_2 = func_001bc780(a0 + 0x1f4, func_001b77e8(func_0016a070(v0_0)), 0, 1);
                    v0_1 = v0_2;
                }
            }
        }
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(3))) != 0));
    return v0_1;
}

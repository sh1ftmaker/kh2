// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e390 asm("D_0036e390");
extern "C" u32 func_00177860(u32) asm("func_00177860");
extern "C" u32 func_0017a538(u32) asm("func_0017a538");
extern "C" u32 func_001a2478(u32) asm("func_001a2478");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");
extern "C" u32 func_001bc2a8(u32, u32, u32) asm("func_001bc2a8");
extern "C" void func_00190128(u32) asm("func_00190128");
extern "C" void func_001bd3e0(u32, u32, u32, u32, u32, u32) asm("func_001bd3e0");

// 0x001d1070 func_001d1070
u32 func_001d1070(u32 a0) asm("func_001d1070");
u32 func_001d1070(u32 a0) {
    u32 s3;
    u32 v0;
    u32 s2;
    u32 s4;
    u32 v0_0;
    u32 loc_0;
    u32 v0_1;
    u32 v0_2;
    if (((s32)(func_0017a538(a0)) == 0)) {
        if ((func_001a2478(*(u32*)((a0 + 0x48c))) == 0)) {
            v0_1 = 0;
        } else {
            s3 = 0;
            s2 = (u32)&D_0036e390;
            do {
                s4 = func_00177860(a0);
                v0_0 = func_001a80c8(*(u16*)((s2 + (s3 * 2))));
                if (((s32)((*(u32*)((((*(u16*)((v0_0 + 4)) >> 5) << 2) + s4)) & (1 << (*(u16*)((v0_0 + 4)) & 0x1f)))) != 0)) {
                    if (((s32)(((s32)(func_001bc2a8(func_001b8e88(*(u16*)((v0_0 + 0x10))), a0, 0)) < (s32)(4))) != 0)) {
                        v0 = ((s32)(func_001bc2a8(func_001b8e88(*(u16*)((v0_0 + 0x10))), a0, 0)) < (s32)(4));
                        func_00190128((u32)&loc_0);
                        func_001bd3e0(*(u32*)((a0 + 0xb44)), 1, *(u16*)((v0_0 + 0x10)), (u32)&loc_0, 1, 0);
                        return 1;
                    }
                }
                s3 = (s3 + 1);
                v0 = 0;
            } while (((s32)(((u32)(s3) < (u32)(4))) != 0));
            v0_1 = v0;
        }
        v0_2 = v0_1;
    } else {
        v0_2 = 0;
    }
    return v0_2;
}

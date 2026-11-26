// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e978 asm("D_0036e978");
extern "C" u32 D_0036e998 asm("D_0036e998");
extern "C" u32 D_0036e9d0 asm("D_0036e9d0");
extern "C" u32 D_0036edb0 asm("D_0036edb0");
extern "C" u32 D_0036edc0 asm("D_0036edc0");
extern "C" u32 D_0036ede0 asm("D_0036ede0");
extern "C" u32 D_01d9e450 asm("D_01d9e450");
extern "C" void func_002f28b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002f28b8");
extern "C" void func_002f2be0(u32, u32) asm("func_002f2be0");
extern "C" void func_002fdfc8(u32, u32, u32) asm("func_002fdfc8");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x001e52b8 func_001e52b8
void func_001e52b8(u32 a0, u32 a1, u32 a2) asm("func_001e52b8");
void func_001e52b8(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    u32 t7;
    u32 a2_0;
    u32 a2_1;
    s0 = *(s16*)((a0 + 2));
    if (((s32)(a0) == 0)) {
        func_002fdfc8((u32)&D_0036e978, (u32)&D_0036edb0, a2);
        func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x5e7);
    }
    if (((s32)(s0) != 0)) {
        if (((s32)(((s32)(s0) < (s32)(0x3e00))) == 0)) {
            t7 = ((s0 + ((s32)((a1 << 0x10)) >> 0x10)) + -0x3e00);
        } else {
            t7 = ((s0 + ((s32)((a1 << 0x10)) >> 0x10)) + -0x2e00);
        }
        if (((s32)(((s32)(((s32)((t7 << 0x10)) >> 0x10)) < (s32)(0x3d00))) != 0)) {
            func_002fdfc8((u32)&D_0036e978, (u32)&D_0036edc0, a2_0);
            func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x5fc);
        }
        if (((s32)((((s32)((t7 << 0x10)) >> 0x10) + *(s16*)((a0 + 0x1e)))) >= (s32)(0x4001))) {
            func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ede0, a2_1);
            func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x5fd);
        }
        if ((*(s16*)((a0 + 6)) != 0x13)) {
            if ((*(s16*)((a0 + 6)) == 0x14)) {
                func_002f28b8((u32)&D_01d9e450, (s32)((t7 << 0x10)) >> 0x10, 1, 0, 0, 0, 8, 2);
                func_003058a0(0);
                func_002f2be0((u32)&D_01d9e450, (a0 + *(u32*)((a0 + 0x18))) + 0x20);
            }
        } else {
            func_002f28b8((u32)&D_01d9e450, (s32)((t7 << 0x10)) >> 0x10, 1, 0, 0, 0, 0x10, 0x10);
            func_003058a0(0);
            func_002f2be0((u32)&D_01d9e450, (a0 + *(u32*)((a0 + 0x18))) + 0x20);
        }
    }
    return;
}
